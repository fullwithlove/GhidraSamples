/* Function: FUN_00401c50 */

undefined4 __fastcall FUN_00401c50(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0xc000000d;
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
    uVar3 = 0x80000005;
    if (param_2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Function: FUN_00401cbd */

LSTATUS __fastcall FUN_00401cbd(undefined4 *param_1)

{
  LSTATUS LVar1;
  uint local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  *param_1 = 0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000002,L"System\\Currentcontrolset\\Control\\Lsa",0,0x20019,
                        &local_8);
  if (LVar1 != 2) {
    if (LVar1 != 0) {
      return 0xe;
    }
    local_c = 4;
    LVar1 = RegGetValueW(local_8,(LPCWSTR)0x0,L"lmcompatibilitylevel",0x18,(LPDWORD)0x0,&local_10,
                         &local_c);
    if (LVar1 != 2) {
      if ((LVar1 == 0) && (1 < local_10)) {
        *param_1 = 1;
      }
      if (local_8 == (HKEY)0x0) {
        return LVar1;
      }
      RegCloseKey(local_8);
      return LVar1;
    }
    if (local_8 != (HKEY)0x0) {
      RegCloseKey(local_8);
    }
  }
  return 0;
}



/* Function: FUN_00401d5e */

undefined4 __fastcall FUN_00401d5e(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  iVar1 = WinHttpQueryAuthSchemes(param_1,&local_c,&local_8,&local_10);
  if (iVar1 == 0) {
    pwVar2 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar2);
    FUN_00404b90(0x2774);
  }
  else {
    uVar3 = DAT_00406588;
    iVar1 = DAT_00406624;
    if (param_2 != 0) {
      uVar3 = DAT_00406544;
      iVar1 = DAT_00406620;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (*(uint *)(iVar1 + uVar4 * 4) == local_8) {
          *param_3 = local_8;
          goto LAB_00401e07;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      do {
        uVar4 = *(uint *)(iVar1 + uVar5 * 4);
        if ((local_c & uVar4) != 0) {
          *param_3 = uVar4;
LAB_00401e07:
          FUN_00404b6e(0x27da - (param_2 != 0));
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    FUN_00404b57(0x27db);
  }
  return 0;
}



/* Function: FUN_00401e2b */

undefined4 __fastcall FUN_00401e2b(int param_1,int param_2,undefined4 param_3)

{
  LSTATUS LVar1;
  int iVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  int local_c;
  int local_8;
  
  local_c = 1;
  local_8 = param_1;
  if (param_1 == 1) {
    if (param_2 == 0) {
      if (DAT_00406550 != 0) {
        return 1;
      }
      DVar4 = 0x27dd;
    }
    else {
      if (DAT_0040653c != 0) {
        return 1;
      }
      DVar4 = 0x27dc;
    }
  }
  else {
    if (param_1 != 2) {
      FUN_00404b57(0x27e1);
      return 0;
    }
    if (param_2 == 0) {
      return 1;
    }
    LVar1 = FUN_00401cbd(&local_c);
    if (LVar1 == 0) {
      if (DAT_0040653c == 0) {
        if (((((byte)DAT_00406598 & 1) == 0) || (DAT_00406628 == 0)) && (local_c == 0)) {
          DVar4 = 0x27df;
          goto LAB_00401e53;
        }
        if (DAT_0040652c != 0) {
          return 1;
        }
        local_8 = 1;
        FUN_00404b90(0x27de);
        iVar2 = WinHttpSetOption(param_3,0x4d,&local_8,4);
        if (iVar2 != 0) {
          DAT_0040652c = 1;
          return 1;
        }
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar4 = 0x2775;
      }
      else {
        if (DAT_0040652c != 0) {
          return 1;
        }
        local_8 = 2;
        FUN_00404b90(0x27e0);
        iVar2 = WinHttpSetOption(param_3,0x4d,&local_8,4);
        if (iVar2 != 0) {
          DAT_0040652c = 1;
          return 1;
        }
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar4 = 0x2776;
      }
      FUN_00404b90(DVar4);
      return 0;
    }
    DVar4 = 0x2725;
  }
LAB_00401e53:
  FUN_00404b57(DVar4);
  return 0;
}



/* Function: FUN_00401f7d */

undefined4 __fastcall FUN_00401f7d(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 local_14;
  RPC_WSTR local_10;
  RPC_WSTR local_c;
  PCCERT_CONTEXT local_8;
  
  local_14 = 4;
  local_8 = (PCCERT_CONTEXT)0x0;
  uVar4 = 1;
  local_c = (RPC_WSTR)0x0;
  local_10 = (RPC_WSTR)0x0;
  iVar2 = WinHttpQueryOption(param_1,0x4e,&local_8,&local_14);
  if (iVar2 == 0) {
    pwVar3 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar3);
    FUN_00404b90(0x2777);
  }
  else {
    iVar2 = RpcCertGeneratePrincipalNameW(local_8,0,&local_c);
    if (iVar2 == 0) {
      iVar2 = RpcCertGeneratePrincipalNameW(local_8,1,&local_10);
      if (iVar2 == 0) {
        if (DAT_00406578 != 0) {
          FUN_00404b57(0x282c);
        }
        pcVar1 = DAT_00406630;
        if (DAT_00406628 == 0) goto LAB_0040205f;
        (*(code *)PTR_guard_check_icall_004071c0)(local_8,DAT_00406628);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) goto LAB_0040205f;
        FUN_00404b57(0x27e3);
        goto LAB_0040205d;
      }
    }
    FUN_00404b90(0x2778);
  }
LAB_0040205d:
  uVar4 = 0;
LAB_0040205f:
  if (local_c != (RPC_WSTR)0x0) {
    RpcStringFreeW(&local_c);
  }
  if (local_10 != (RPC_WSTR)0x0) {
    RpcStringFreeW(&local_10);
  }
  if (local_8 != (PCCERT_CONTEXT)0x0) {
    CertFreeCertificateContext(local_8);
  }
  return uVar4;
}



/* Function: FUN_00402098 */

undefined4 __fastcall FUN_00402098(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  size_t local_c;
  uint local_8;
  
  local_2c = 2;
  local_38 = 0;
  local_8 = 0;
  uVar4 = 1;
  local_10 = 0;
  local_c = 0;
  local_20 = 0;
  local_14 = 0;
  FUN_00404b90(0x27e0);
  iVar2 = WinHttpSetOption(param_1,0x4d,&local_2c,4);
  if (iVar2 == 0) {
    pwVar3 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar3);
    DVar8 = 0x277f;
LAB_004025bb:
    FUN_00404b90(DVar8);
    return 0;
  }
  local_28 = 0;
  local_18 = 0;
  local_1c = ~(DAT_00406598 >> 1) & 1;
  local_24 = 1;
  do {
    if (DAT_0040653c == 0) {
      if (DAT_00406554 != 0) {
        FUN_00404b57(0x27e7);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    else if (DAT_00406554 != 0) {
      SspiEncodeAuthIdentityAsStrings(DAT_0040653c,&local_34,local_40,&local_30);
      I_RpcCertProcessAndProvision(local_34,local_30,1,&local_20);
      iVar2 = WinHttpSetOption(param_1,0x2f,local_20,0x14);
      if (iVar2 == 0) {
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar8 = 0x2780;
        goto LAB_00402433;
      }
    }
    if ((DAT_00406598 & 2) == 0) {
      if (DAT_00406554 != 0) {
LAB_004021ed:
        local_14 = 1;
      }
    }
    else {
      if (DAT_00406554 != 0) goto LAB_004021ed;
      if (DAT_00406544 == 0) {
        DVar8 = 0x27e8;
        goto LAB_00402447;
      }
      uVar1 = *DAT_00406620;
      local_8 = uVar1;
      iVar2 = FUN_00401e2b(uVar1,1,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_00404b90(0x27e9);
      iVar2 = WinHttpSetCredentials(param_1,0,uVar1,0,0,DAT_0040653c);
      if (iVar2 == 0) {
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar8 = 0x2783;
        goto LAB_00402433;
      }
    }
    while( true ) {
      while( true ) {
        if (local_18 != 0) {
          return uVar4;
        }
        while( true ) {
          FUN_00404b90(0x27ea);
          if (local_14 == 0) {
            uVar10 = 4;
            uVar9 = 4;
            puVar7 = &local_38;
            uVar6 = 0xffffffff;
            pwVar3 = 
            L"Accept: application/rpc\r\nUser-Agent: MSRPC\r\nConnection: Keep-Alive\r\nCache-control: no-cache\r\n\r\n"
            ;
          }
          else {
            uVar10 = 0;
            uVar9 = 0;
            puVar7 = (undefined4 *)0x0;
            uVar6 = 0;
            pwVar3 = (wchar_t *)0x0;
          }
          iVar2 = WinHttpSendRequest(param_1,pwVar3,uVar6,puVar7,uVar9,uVar10,0);
          if (iVar2 != 0) break;
          pwVar3 = (wchar_t *)GetLastError();
          if (pwVar3 != (wchar_t *)0x2f00) {
            if (pwVar3 == (wchar_t *)0x2f0c) {
              FUN_00404b90(0x27eb);
              return 0;
            }
            FUN_004036d4(pwVar3);
            DVar8 = 0x2784;
            goto LAB_00402433;
          }
          if (DAT_00406554 != 0) {
            FUN_004036d4((wchar_t *)0x2f00);
            DVar8 = 0x2793;
            goto LAB_00402433;
          }
        }
        iVar2 = WinHttpReceiveResponse(param_1,0);
        if (iVar2 == 0) {
          pwVar3 = (wchar_t *)GetLastError();
          if (pwVar3 != (wchar_t *)0x2f0c) {
            FUN_004036d4(pwVar3);
            DVar8 = 0x2785;
            goto LAB_004025bb;
          }
          FUN_00404b90(0x27ec);
          if (DAT_00406554 == 0) {
            DVar8 = 0x27ee;
          }
          else {
            DVar8 = 0x27ed;
          }
          goto LAB_0040247f;
        }
        local_c = 4;
        iVar2 = WinHttpQueryHeaders(param_1,0x20000013,0,&local_10,&local_c,0);
        if (iVar2 == 0) {
          pwVar3 = (wchar_t *)GetLastError();
          FUN_004036d4(pwVar3);
          DVar8 = 0x2786;
          goto LAB_004025bb;
        }
        FUN_00404b90(0x27ef);
        if (local_10 != 200) break;
        if ((DAT_00406598 & 1) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = FUN_00401f7d(param_1);
        }
        if (local_14 == 0) {
          local_18 = 1;
        }
        local_14 = 0;
      }
      if (local_10 != 0x191) break;
      if (DAT_00406554 != 0) {
        DVar8 = 0x27f0;
        goto LAB_0040247f;
      }
      if (local_1c == 0) {
        DVar8 = 0x27f1;
        goto LAB_00402447;
      }
      local_1c = local_1c - 1;
      iVar2 = FUN_00401d5e(param_1,1,&local_8);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00401e2b(local_8,1,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = WinHttpSetCredentials(param_1,0,local_8,0,0,DAT_0040653c);
      if (iVar2 == 0) {
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar8 = 0x2787;
        goto LAB_004025bb;
      }
    }
    if (local_10 != 0x197) {
      local_c = 0;
      iVar2 = WinHttpQueryHeaders(param_1,0x16,0,0,&local_c,0);
      if ((iVar2 == 0) && (DVar8 = GetLastError(), DVar8 == 0x7a)) {
        pvVar5 = malloc(local_c);
        if (pvVar5 != (void *)0x0) {
          iVar2 = WinHttpQueryHeaders(param_1,0x16,0,pvVar5,&local_c,0);
          if (iVar2 != 0) {
            *(undefined1 *)((int)pvVar5 + local_c) = 0;
            FUN_00404b90(0x272c);
            return 0;
          }
          pwVar3 = (wchar_t *)GetLastError();
          FUN_004036d4(pwVar3);
          DVar8 = 0x278a;
          goto LAB_004025bb;
        }
        DVar8 = 0x2725;
      }
      else {
        DVar8 = 0x27f3;
      }
LAB_0040247f:
      FUN_00404b90(DVar8);
      return 0;
    }
    if (local_24 == 0) {
      DVar8 = 0x27f2;
LAB_00402447:
      FUN_00404b57(DVar8);
      return 0;
    }
    local_24 = local_24 + -1;
    iVar2 = FUN_00401d5e(param_1,0,&local_8);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_00401e2b(local_8,0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if ((local_8 == 2) && (DAT_00406550 == 0)) {
      local_3c = 1;
      FUN_00404b90(0x27de);
      iVar2 = WinHttpSetOption(param_1,0x4d,&local_3c,4);
      if (iVar2 == 0) {
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        FUN_00404b90(0x2788);
        return 0;
      }
      DAT_0040652c = 1;
    }
    else {
      iVar2 = WinHttpSetCredentials(param_1,1,local_8,0,0,DAT_00406550);
      if (iVar2 == 0) {
        pwVar3 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar3);
        DVar8 = 0x2789;
LAB_00402433:
        FUN_00404b90(DVar8);
        return 0;
      }
    }
    if (local_28 == 0) {
      local_28 = 1;
      local_1c = 1;
    }
  } while( true );
}



/* Function: FUN_004025e5 */

undefined4 FUN_004025e5(void)

{
  char *pcVar1;
  char cVar2;
  WCHAR WVar3;
  short sVar4;
  code *pcVar5;
  int iVar6;
  LPWSTR lpWideCharStr;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  LPWSTR pWVar10;
  LPCSTR pCVar11;
  undefined4 uVar12;
  uint uVar13;
  char *pcVar14;
  short *psVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *local_10;
  LPCSTR local_c;
  LPWSTR local_8;
  
  uVar12 = 0;
  local_8 = (LPWSTR)0x0;
  local_10 = (char *)0x0;
  local_c = (LPCSTR)0x0;
  local_14 = 1;
  if (DAT_0040655c == 0) {
    FUN_00404b57(0x27f4);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar13 = DAT_00406598 & 1;
  if ((DAT_00406564 == (short *)0x0) || (iVar6 = _wcsicmp(DAT_00406564,L"default"), iVar6 == 0)) {
    pcVar5 = DAT_0040662c;
    (*(code *)PTR_guard_check_icall_004071c0)
              (DAT_00406568,"localhost",&local_1c,&local_20,uVar13,&local_10,&local_c,&local_14,
               local_24);
    iVar6 = (*pcVar5)();
    pcVar5 = DAT_00406634;
    if (local_1c != 0) {
      (*(code *)PTR_guard_check_icall_004071c0)(local_1c);
      (*pcVar5)();
    }
    pcVar5 = DAT_00406634;
    if (local_20 != 0) {
      (*(code *)PTR_guard_check_icall_004071c0)(local_20);
      (*pcVar5)();
    }
    if (iVar6 == 0) {
      FUN_00404b57(0x27f5);
      goto LAB_00402893;
    }
  }
  else {
    iVar6 = _wcsicmp(DAT_00406564,L"none");
    if (iVar6 != 0) {
      local_14 = 2;
    }
  }
  pcVar5 = DAT_00406638;
  if (local_10 == (char *)0x0) {
    if (DAT_00406564 == (short *)0x0) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      psVar15 = DAT_00406564;
      do {
        sVar4 = *psVar15;
        psVar15 = psVar15 + 1;
      } while (sVar4 != 0);
      uVar16 = ((int)psVar15 - (int)(DAT_00406564 + 1) >> 1) + 1;
      (*(code *)PTR_guard_check_icall_004071c0)(uVar16 * 2);
      lpWideCharStr = (LPWSTR)(*pcVar5)();
      local_8 = lpWideCharStr;
      FUN_00401c50(lpWideCharStr,uVar16,(int)DAT_00406564);
    }
    goto LAB_0040281a;
  }
  pcVar1 = local_10 + 1;
  pcVar14 = local_10;
  do {
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar2 != '\0');
  (*(code *)PTR_guard_check_icall_004071c0)(((int)pcVar14 - (int)pcVar1) * 2 + 0x10);
  lpWideCharStr = (LPWSTR)(*pcVar5)();
  local_8 = lpWideCharStr;
  if (lpWideCharStr == (LPWSTR)0x0) {
    FUN_00404b57(0x2725);
    goto LAB_00402893;
  }
  iVar6 = MultiByteToWideChar(0,0,local_10,-1,lpWideCharStr,((int)pcVar14 - (int)pcVar1) + 1);
  if (iVar6 == 0) {
LAB_0040273f:
    pwVar7 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar7);
    FUN_00404b90(0x2781);
    lpWideCharStr = local_8;
  }
  else {
    if (local_c != (LPCSTR)0x0) {
      pWVar10 = lpWideCharStr;
      do {
        WVar3 = *pWVar10;
        pWVar10 = pWVar10 + 1;
      } while (WVar3 != L'\0');
      iVar6 = (int)pWVar10 - (int)(lpWideCharStr + 1) >> 1;
      lpWideCharStr[iVar6] = L':';
      pCVar11 = local_c;
      do {
        cVar2 = *pCVar11;
        pCVar11 = pCVar11 + 1;
      } while (cVar2 != '\0');
      if (5 < (uint)((int)pCVar11 - (int)(local_c + 1))) {
        FUN_00404b90(0x27f6);
        goto LAB_00402882;
      }
      iVar6 = MultiByteToWideChar(0,0,local_c,-1,lpWideCharStr + iVar6 + 1,6);
      if (iVar6 == 0) goto LAB_0040273f;
    }
LAB_0040281a:
    if (local_14 == 0) {
      FUN_00404b57(0x27f7);
    }
    else {
      if (local_14 == 1) {
        lpWideCharStr = (LPWSTR)0x0;
        uVar17 = 1;
      }
      else {
        if (local_14 != 2) {
          FUN_00404b57(0x27fc);
          goto LAB_0040287e;
        }
        uVar17 = 3;
      }
      iVar6 = WinHttpOpen(L"RPCPing",uVar17,lpWideCharStr,0,0);
      if (iVar6 == 0) {
        pwVar7 = (wchar_t *)GetLastError();
        FUN_004036d4(pwVar7);
        FUN_00404b90(0x278c);
        lpWideCharStr = local_8;
      }
      else {
        iVar8 = WinHttpConnect(iVar6,DAT_0040655c,0,0);
        if (iVar8 == 0) {
          pwVar7 = (wchar_t *)GetLastError();
          FUN_004036d4(pwVar7);
          FUN_00404b90(0x278d);
          iVar9 = 0;
        }
        else {
          pwVar7 = L"/RpcWithCert/rpcproxy.dll";
          if (DAT_00406554 == 0) {
            pwVar7 = L"/Rpc/rpcproxy.dll";
          }
          iVar9 = WinHttpOpenRequest(iVar8,L"RPC_IN_DATA",pwVar7,L"HTTP/1.1",0,0,uVar13 << 0x17);
          local_18 = iVar9;
          if (iVar9 == 0) {
            pwVar7 = (wchar_t *)GetLastError();
            FUN_004036d4(pwVar7);
            FUN_00404b90(0x278e);
            iVar9 = local_18;
          }
          else {
            uVar12 = FUN_00402098(iVar9);
          }
        }
        WinHttpCloseHandle(iVar6);
        if (iVar8 != 0) {
          WinHttpCloseHandle(iVar8);
        }
        lpWideCharStr = local_8;
        if (iVar9 != 0) {
          WinHttpCloseHandle(iVar9);
          lpWideCharStr = local_8;
        }
      }
    }
LAB_0040287e:
    if (lpWideCharStr == (LPWSTR)0x0) goto LAB_00402893;
  }
LAB_00402882:
  pcVar5 = DAT_00406634;
  (*(code *)PTR_guard_check_icall_004071c0)(lpWideCharStr);
  (*pcVar5)();
LAB_00402893:
  pcVar5 = DAT_00406634;
  if (local_10 != (char *)0x0) {
    (*(code *)PTR_guard_check_icall_004071c0)(local_10);
    (*pcVar5)();
  }
  pcVar5 = DAT_00406634;
  if (local_c != (LPCSTR)0x0) {
    (*(code *)PTR_guard_check_icall_004071c0)(local_c);
    (*pcVar5)();
  }
  return uVar12;
}



/* Function: FUN_004029a7 */

void __cdecl FUN_004029a7(int param_1,int param_2)

{
  undefined4 *puVar1;
  DWORD DVar2;
  FILE *pFVar3;
  int iVar4;
  RPC_STATUS RVar5;
  uint uVar6;
  wchar_t *pwVar7;
  HANDLE pvVar8;
  size_t _Size;
  DWORD DVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar10;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  RPC_WSTR puVar11;
  int *piVar12;
  undefined8 uVar13;
  LPVOID pvVar14;
  char *pcVar15;
  undefined1 auStack_1e4 [4];
  uint uStack_1e0;
  DWORD DStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  RPC_BINDING_HANDLE pvStack_1d0;
  RPC_STATUS RStack_1cc;
  RPC_WSTR local_1c8;
  undefined4 *local_1c4;
  undefined4 local_1c0;
  RPC_STATS_VECTOR *pRStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  RPC_WSTR puStack_1ac;
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  RPC_SECURITY_QOS RStack_194;
  undefined4 uStack_184;
  undefined4 **ppuStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 *puStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined *puStack_144;
  wchar_t *pwStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_110;
  undefined4 uStack_100;
  LPVOID pvStack_fc;
  FILETIME aFStack_f4 [3];
  undefined2 uStack_da;
  int iStack_d8;
  int aiStack_d0 [3];
  undefined2 auStack_c4 [26];
  _SYSTEMTIME _Stack_90;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  UUID UStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_c;
  
  local_c = DAT_00406180 ^ (uint)auStack_1e4;
  local_1c0 = 0;
  local_1c4 = (undefined4 *)0x0;
  local_1c8 = (RPC_WSTR)0x0;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  SetThreadPreferredUILanguages(0x100,(PCZZWSTR)0x0,(PULONG)0x0);
  DAT_004065dc = GetStdHandle(0xfffffff5);
  if (DAT_004065dc == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    pcVar15 = "GetStdHandle failed with 0x%x\n";
    pFVar3 = FUN_004054d9(2);
    fprintf(pFVar3,pcVar15,DVar2);
    pcVar15 = "This error is fatal. The application will terminate\n";
    pFVar3 = FUN_004054d9(2);
    fprintf(pFVar3,pcVar15);
    goto LAB_00402a37;
  }
  iVar4 = WinSqmIsOptedIn();
  if (iVar4 != 0) {
    WinSqmIncrementDWORD(0,0x844,1);
  }
  FUN_00403f6a(param_1,param_2);
  RVar5 = UuidCreate(&UStack_2c);
  if (RVar5 == 0) {
    EventActivityIdControl(2,&UStack_2c);
    RVar5 = UuidToStringW(&UStack_2c,&local_1c8);
    if (RVar5 == 0) {
      FUN_00404b90(0x2837);
      RpcStringFreeW(&local_1c8);
    }
  }
  puVar1 = DAT_00406590;
  puVar11 = DAT_00406558;
  if (DAT_00406590 == (undefined4 *)0x0) {
    puVar11 = DAT_00406558;
    if (DAT_00406558 == (RPC_WSTR)0x0) {
      do {
        iVar4 = _wcsicmp((wchar_t *)(&PTR_u_ncacn_np_00401008)[(int)puVar11 * 2],
                         (wchar_t *)PTR_u_ncacn_ip_tcp_00406000);
        if (iVar4 == 0) {
          DAT_00406558 = (RPC_WSTR)(&PTR_u__pipe_epmapper_0040100c)[(int)puVar11 * 2];
          break;
        }
        puVar11 = (RPC_WSTR)((int)puVar11 + 1);
      } while (puVar11 < (RPC_WSTR)0x5);
      puVar11 = DAT_00406558;
      if (DAT_00406558 == (RPC_WSTR)0x0) {
        FUN_00404b57(0x27f9);
        goto LAB_00402a37;
      }
    }
  }
  else {
    if (DAT_00406558 != (RPC_WSTR)0x0) {
      DVar2 = 0x27f8;
LAB_00402ad0:
      FUN_00404b57(DVar2);
      goto LAB_00402a37;
    }
    memset(auStack_78,0,0x44);
    uStack_74 = *puVar1;
    uStack_70 = puVar1[1];
    uStack_6c = puVar1[2];
    uStack_68 = puVar1[3];
    uStack_64 = (undefined2)DAT_004061c4;
    uStack_62 = 0;
  }
  RVar5 = RpcStringBindingComposeW
                    (DAT_00406594,(RPC_WSTR)PTR_u_ncacn_ip_tcp_00406000,DAT_00406548,puVar11,
                     DAT_00406568,&puStack_1ac);
  if ((RVar5 == 0) &&
     (RStack_1cc = RpcBindingFromStringBindingW(puStack_1ac,&pvStack_1d0), RStack_1cc == 0)) {
    RVar5 = 0;
    puVar1 = DAT_00406584;
    do {
      DAT_00406584 = puVar1;
      if (DAT_0040657c != 0) {
        iStack_174 = DAT_00406560;
        iStack_17c = DAT_00406570;
        if (DAT_00406560 == 0) {
          RStack_194.Version = 4;
          if (DAT_0040658c == 0) {
            RStack_194.Version = (DAT_00406570 != 0) + 2;
          }
        }
        else {
          RStack_194.Version = 5;
        }
        RStack_194.Capabilities = DAT_00406534;
        RStack_194.IdentityTracking = DAT_004061d0;
        RStack_194.ImpersonationType = DAT_004061c8;
        if (DAT_0040654c == 0) {
          uStack_184 = 0;
          ppuStack_180 = (undefined4 **)0x0;
        }
        else {
          puStack_170 = DAT_0040653c;
          uStack_16c = DAT_00406598;
          uStack_184 = 1;
          uStack_168 = (uint)(DAT_00406544 != 0);
          if (DAT_00406588 != 0) {
            uStack_168 = uStack_168 | 2;
          }
          uStack_160 = DAT_00406620;
          uStack_15c = DAT_00406628;
          uStack_158 = DAT_00406550;
          iStack_154 = DAT_00406588;
          uStack_150 = DAT_00406624;
          ppuStack_180 = &puStack_170;
          iStack_164 = DAT_00406544;
        }
        uStack_178 = DAT_00406530;
        if (DAT_00406580 == 0xe) {
          if (DAT_00406538 == 0) {
            DVar2 = 0x27fa;
            goto LAB_00402ad0;
          }
          SspiEncodeAuthIdentityAsStrings(DAT_00406584,auStack_1a4,auStack_138,auStack_1a8);
          I_RpcCertProcessAndProvision(uStack_1b4,uStack_1b8,1,&pvStack_1d0);
          memset(&uStack_130,0,0x38);
          puStack_128 = &local_1c0;
          uStack_130 = 4;
          DAT_00406584 = &uStack_130;
          uStack_110 = 0;
          uStack_12c = 1;
        }
        RVar5 = RpcBindingSetAuthInfoExW
                          (pvStack_1d0,DAT_00406540,DAT_004061d4,DAT_00406580,DAT_00406584,0,
                           &RStack_194);
        RStack_1cc = RVar5;
        if (RVar5 != 0) break;
      }
      if ((DAT_00406590 != (undefined4 *)0x0) && (DAT_00406574 == 0)) {
        FUN_00404b6e(0x27fb);
        RVar5 = RpcEpResolveBinding(pvStack_1d0,auStack_78);
        RStack_1cc = RVar5;
        if (RVar5 != 0) break;
      }
      DAT_004061cc = DAT_004061cc * 1000;
      uStack_1d4 = 0;
      uStack_1e0 = 0;
      DVar2 = GetTickCount();
      DStack_1dc = DVar2;
      if (DAT_00406574 != 0) {
        FUN_00404b90(0x27fd);
        iVar4 = FUN_004025e5();
        if (iVar4 == 0) {
          FUN_00404b57(0x27ff);
          uVar10 = extraout_EDX_05;
        }
        else {
          DVar9 = GetTickCount();
          if (1 < DVar9 - DVar2) {
            GetTickCount();
          }
          FUN_00404b57(0x27fe);
          uVar10 = extraout_EDX_04;
        }
        goto LAB_00403683;
      }
      uVar6 = RpcMgmtInqStats(pvStack_1d0,&pRStack_1bc);
      while (uStack_1d8 = uVar6, uVar6 == 0) {
        RpcMgmtStatsVectorFree(&pRStack_1bc);
        uStack_1e0 = uStack_1e0 + 1;
        DVar2 = GetTickCount();
        if (DVar2 - DStack_1dc < 2) {
          uStack_1d8 = 1;
          uVar10 = extraout_EDX;
        }
        else {
          DVar2 = GetTickCount();
          uStack_1d8 = DVar2 - DStack_1dc;
          uVar10 = extraout_EDX_00;
        }
        if (DAT_004061cc < uStack_1d8) {
          FUN_00404b57(0x282d);
          DStack_1dc = GetTickCount();
          uStack_1e0 = 0;
          uVar10 = extraout_EDX_01;
        }
        uStack_1d4 = uStack_1d4 + 1;
        if (DAT_004061d8 <= uStack_1d4) goto LAB_00403277;
        uVar6 = RpcMgmtInqStats(pvStack_1d0,&pRStack_1bc);
      }
      if (((DAT_0040656c == 0) ||
          ((((((uVar6 != 0xc05d0002 && (uVar6 != 0xd05d0002)) && (uVar6 != 0x4f8)) &&
             (((uVar6 != 0x800704f8 && (uVar6 != 0xc05d0006)) &&
              ((uVar6 != 0xd05d0006 && ((uVar6 != 0xc05d0003 && (uVar6 != 0xc05d0004)))))))) &&
            ((uVar6 != 0x791 &&
             ((((uVar6 != 0x80070791 && (uVar6 != 0x52e)) && (uVar6 != 0x8007052e)) &&
              ((uVar6 != 0xc000006d && (uVar6 != 0xd000006d)))))))) &&
           ((((uVar6 != 5 && ((uVar6 != 0x80070005 && (uVar6 != 0xc0000022)))) &&
             ((uVar6 != 0xd0000022 &&
              ((((uVar6 != 0x56 && (uVar6 != 0x80070056)) && (uVar6 != 0xc000006a)) &&
               (((uVar6 != 0xd000006a && (uVar6 != 0xc0000064)) &&
                ((uVar6 != 0xd0000064 && ((uVar6 != 0x525 && (uVar6 != 0x80070525)))))))))))) &&
            ((((uVar6 != 0x520 &&
               ((((uVar6 != 0x80070520 && (uVar6 != 0xc000005f)) && (uVar6 != 0xd000005f)) &&
                (((uVar6 != 0x8009030e && (uVar6 != 0x8009030c)) &&
                 ((uVar6 != 0x80090361 && ((uVar6 != 0xc000042d && (uVar6 != 0x4f1)))))))))) &&
              (uVar6 != 0x800704f1)) &&
             (((((((uVar6 != 0xc0000388 && (uVar6 != 0xd0000388)) && (uVar6 != 0x80090350)) &&
                 ((uVar6 != 0x532 && (uVar6 != 0x80070532)))) && (uVar6 != 0xc0000071)) &&
               ((uVar6 != 0xd0000071 && (uVar6 != 0x773)))) &&
              (((uVar6 != 0x80070773 &&
                (((uVar6 != 0xc0000224 && (uVar6 != 0xd0000224)) && (uVar6 != 0x8c2)))) &&
               (uVar6 != 0x800708c2)))))))))))) || (local_1c4 != (undefined4 *)0x0)) {
        FUN_00404b57(0x2800);
        uVar13 = RpcErrorStartEnumeration(&uStack_1b8);
        uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if ((int)uVar13 != 0x6e1) {
          if ((int)uVar13 == 0) {
            iVar4 = RpcErrorGetNumberOfRecords(&uStack_1b8,&uStack_1a0);
            if (iVar4 != 0) goto LAB_004035d6;
            FUN_00404b57(0x2802);
            goto LAB_0040332f;
          }
          FUN_00404b57(0x2801);
          uVar10 = extraout_EDX_03;
        }
        uVar13 = CONCAT44(uVar10,RVar5);
        goto joined_r0x00403621;
      }
      uStack_14c = 0x14;
      uStack_13c = 0;
      uStack_148 = 0;
      puStack_144 = &DAT_00401130;
      pwStack_140 = L"RPCPing";
      if (DAT_00406580 == 9) {
        pwVar7 = L"Negotiate";
      }
      else if (DAT_00406580 == 10) {
        pwVar7 = L"NTLM";
      }
      else if (DAT_00406580 == 0x10) {
        pwVar7 = L"Kerberos";
      }
      else {
        pwVar7 = (wchar_t *)0x0;
      }
      iVar4 = SspiPromptForCredentialsW
                        (DAT_00406540,&uStack_14c,uVar6,pwVar7,0,&local_1c4,auStack_134,0);
      if (DAT_0040654c != 0) {
        DAT_0040653c = local_1c4;
      }
      puVar1 = local_1c4;
    } while (iVar4 == 0);
  }
  goto LAB_00402b45;
LAB_0040332f:
  iStack_d8 = 4;
  uStack_da = 4;
  uStack_100 = 1;
  iVar4 = RpcErrorGetNextRecord(&local_1c0,1,&uStack_100);
  if (iVar4 != 0x6e1) {
    if (iVar4 != 0) {
      FUN_00404b57(0x2803);
      goto LAB_004035d6;
    }
    if (pvStack_fc != (LPVOID)0x0) {
      FUN_00404b57(0x2804);
      DVar2 = 0;
      pvVar14 = pvStack_fc;
      pvVar8 = GetProcessHeap();
      HeapFree(pvVar8,DVar2,pvVar14);
    }
    FUN_00404b57(0x2805);
    FileTimeToSystemTime(aFStack_f4,&_Stack_90);
    FUN_00404b57(0x2806);
    FUN_00404b57(0x2807);
    FUN_00404b57(0x2808);
    FUN_00404b57(0x2809);
    FUN_00404b57(0x280a);
    FUN_00404b57(0x280b);
    DStack_1dc = 0;
    if (0 < iStack_d8) {
      piVar12 = aiStack_d0 + 2;
      do {
        iVar4 = piVar12[-2];
        if (iVar4 == 1) {
          DVar2 = 0x280c;
LAB_0040357b:
          FUN_00404b57(DVar2);
          pvVar14 = (LPVOID)*piVar12;
          DVar2 = 0;
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,DVar2,pvVar14);
        }
        else {
          if (iVar4 == 2) {
            DVar2 = 0x280d;
            goto LAB_0040357b;
          }
          if (iVar4 == 3) {
            DVar2 = 0x280e;
LAB_004034d0:
            FUN_00404b57(DVar2);
          }
          else {
            if (iVar4 == 4) {
              DVar2 = 0x280f;
              goto LAB_004034d0;
            }
            if (iVar4 == 5) {
              FUN_00404b57(0x2810);
            }
            else if (iVar4 == 6) {
              FUN_00404b57(0x2811);
            }
            else {
              if (iVar4 != 7) {
                DVar2 = 0x2812;
                goto LAB_004034d0;
              }
              UStack_2c.Data4[0] = '\0';
              UStack_2c.Data4[1] = '\0';
              UStack_2c.Data4[2] = '\0';
              UStack_2c.Data4[3] = '\0';
              UStack_2c.Data4[4] = '\0';
              UStack_2c.Data4[5] = '\0';
              UStack_2c.Data4[6] = '\0';
              UStack_2c.Data4[7] = '\0';
              uStack_1c = 0;
              uStack_18 = 0;
              _Size = 0x10;
              if ((uint)(int)(short)piVar12[1] < 0x10) {
                _Size = (int)(short)piVar12[1];
              }
              memcpy(UStack_2c.Data4,(void *)*piVar12,_Size);
              FUN_00404b57(0x2836);
            }
          }
        }
        piVar12 = piVar12 + 4;
        DStack_1dc = DStack_1dc + 1;
        uVar6 = uStack_1e0;
      } while ((int)DStack_1dc < iStack_d8);
    }
    goto LAB_0040332f;
  }
  RpcErrorResetEnumeration(&local_1c0);
LAB_004035d6:
  iVar4 = RpcErrorSaveErrorInfo(&local_1c0,&uStack_1a0,auStack_1a4);
  if (iVar4 == 0) {
    RpcErrorClearInformation();
    RpcErrorEndEnumeration(&uStack_1b8);
    uVar13 = RpcErrorLoadErrorInfo(uStack_19c,uStack_1a0,&pRStack_1bc);
joined_r0x00403621:
    uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 == 0) {
LAB_00403277:
      if ((uVar6 == 0) && (uStack_1e0 != 0)) {
        DVar2 = GetTickCount();
        if (1 < DVar2 - DStack_1dc) {
          GetTickCount();
        }
        FUN_00404b57(0x282d);
        uVar10 = extraout_EDX_02;
      }
LAB_00403683:
      FUN_00404ea0(local_c ^ (uint)auStack_1e4,uVar10);
      return;
    }
  }
LAB_00402b45:
  FUN_00404b57(0x2791);
LAB_00402a37:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_0040369e */

void FUN_0040369e(void)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  if (pvVar1 == (LPVOID)0x0) {
    FUN_00404b57(0x2726);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* Function: FUN_004036d4 */

wchar_t * __fastcall FUN_004036d4(wchar_t *param_1)

{
  HMODULE lpSource;
  DWORD DVar1;
  wchar_t *pwVar2;
  wchar_t *local_8;
  
  lpSource = (HMODULE)0x0;
  local_8 = param_1;
  if ((int)param_1 - 0x2ee1U < 0xc1) {
    pwVar2 = L"winhttp.dll";
  }
  else {
    if (((uint)param_1 >> 0x1c & 1) == 0 && ((uint)param_1 & 0xc0000000) != 0xc0000000) {
      DVar1 = 0x1100;
      goto LAB_00403726;
    }
    pwVar2 = L"ntdll.dll";
  }
  DVar1 = 0x900;
  lpSource = GetModuleHandleW(pwVar2);
LAB_00403726:
  DVar1 = FormatMessageW(DVar1,lpSource,(DWORD)param_1,0x400,(LPWSTR)&local_8,0,(va_list *)0x0);
  pwVar2 = L"Cannot retrieve text of system message";
  if (DVar1 != 0) {
    pwVar2 = local_8;
  }
  return pwVar2;
}



/* Function: FUN_00403753 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00403753(void *this,undefined4 param_1)

{
  code *pcVar1;
  short sVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined4 extraout_EDX;
  short *psVar8;
  undefined8 uVar9;
  DWORD DVar10;
  undefined4 uVar11;
  short local_198 [200];
  uint local_8;
  
  local_8 = DAT_00406180 ^ (uint)&stack0xfffffffc;
  pwVar3 = wcschr((wchar_t *)this,L',');
  if (pwVar3 == (wchar_t *)0x0) {
    FUN_00404b57(0x2813);
    goto LAB_004037a0;
  }
  *pwVar3 = L'\0';
  pwVar4 = wcschr(pwVar3 + 1,L',');
  if (pwVar4 == (wchar_t *)0x0) {
    DVar10 = 0x2814;
LAB_004037c8:
    FUN_00404b57(DVar10);
  }
  else {
    *pwVar4 = L'\0';
    pwVar7 = pwVar4 + 1;
    if ((*pwVar7 == L'*') && (pwVar4[2] == L'\0')) {
      FUN_00404b57(0x2815);
      iVar5 = _getch();
      sVar2 = (short)(char)iVar5;
      iVar5 = 0;
      local_198[0] = sVar2;
      while (sVar2 != 0xd) {
        if ((sVar2 == 3) || (sVar2 == 0x1a)) goto LAB_004037a0;
        iVar6 = _getch();
        sVar2 = (short)(char)iVar6;
        local_198[iVar5 + 1] = sVar2;
        iVar5 = iVar5 + 1;
      }
      uVar11 = 0x2830;
      FUN_00404b57(0x2830);
      if (399 < (uint)(iVar5 * 2)) {
        FUN_004053ff(uVar11,extraout_EDX);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_198[iVar5] = 0;
      psVar8 = local_198;
      do {
        sVar2 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar2 != 0);
      pwVar7 = (wchar_t *)FUN_0040369e();
      pwVar4 = (wchar_t *)
               FUN_00401c50(pwVar7,((int)psVar8 - (int)(local_198 + 1) >> 1) + 1,(int)local_198);
      if ((int)pwVar4 < 0) {
        FUN_004036d4(pwVar4);
        DVar10 = 0x278b;
        goto LAB_004037c8;
      }
    }
    uVar9 = SspiEncodeStringsAsAuthIdentity(this,pwVar3 + 1,pwVar7,param_1);
    if ((int)uVar9 == 0) {
      FUN_00404ea0(local_8 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar9 >> 0x20));
      return;
    }
    FUN_00404b57(0x2725);
  }
LAB_004037a0:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_004038fb */

void __fastcall FUN_004038fb(wchar_t *param_1,long *param_2)

{
  long lVar1;
  wchar_t *local_8;
  
  local_8 = param_1;
  lVar1 = wcstol(param_1,&local_8,0x10);
  *param_2 = lVar1;
  if (*local_8 != L'\0') {
    FUN_00404b57(0x2816);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* Function: FUN_00403941 */

void FUN_00403941(void)

{
  int iVar1;
  wchar_t *pwVar2;
  void *local_c;
  size_t local_8;
  
  local_8 = 0;
  local_c = (void *)0x0;
  DAT_00406560 = (void *)0x0;
  iVar1 = ConvertStringSecurityDescriptorToSecurityDescriptorW(DAT_004065b0,1,&local_c,&local_8);
  if (iVar1 == 0) {
    pwVar2 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar2);
    FUN_00404b57(0x283d);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_00406560 = (void *)FUN_0040369e();
  memcpy(DAT_00406560,local_c,local_8);
  LocalFree(local_c);
  return;
}



/* Function: FUN_004039c4 */

void __fastcall FUN_004039c4(DWORD param_1)

{
  if (DAT_0040657c == 0) {
    FUN_00404b57(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* Function: FUN_004039e3 */

void FUN_004039e3(void)

{
  int iVar1;
  
  if (DAT_0040657c != 0) {
    iVar1 = _wcsicmp((wchar_t *)PTR_u_ncacn_ip_tcp_00406000,L"ncacn_http");
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_00404b57(0x2817);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_00403a23 */

void FUN_00403a23(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if (DAT_00406568 == 0) {
    FUN_00404b57(0x2818);
  }
  else {
    pwVar2 = wcsstr((wchar_t *)DAT_00406568,L"RpcProxy=");
    if (pwVar2 == (wchar_t *)0x0) {
      FUN_00404b57(0x2819);
    }
    else {
      pwVar3 = wcschr(pwVar2,L',');
      if (pwVar3 != (wchar_t *)0x0) {
        *pwVar3 = L'\0';
      }
      pwVar4 = pwVar2;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      DAT_0040655c = (short *)FUN_0040369e();
      pwVar2 = (wchar_t *)
               FUN_00401c50(DAT_0040655c,((int)pwVar4 - (int)(pwVar2 + 1) >> 1) + 1,
                            (int)(pwVar2 + 9));
      if (-1 < (int)pwVar2) {
        if (pwVar3 != (wchar_t *)0x0) {
          *pwVar3 = L',';
        }
        return;
      }
      FUN_004036d4(pwVar2);
      FUN_00404b57(0x278b);
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_00403ae8 */

void __fastcall FUN_00403ae8(undefined4 param_1,undefined4 param_2)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  wchar_t *pwVar5;
  undefined2 uVar6;
  undefined4 extraout_EDX;
  bool bVar7;
  size_t local_210;
  wchar_t local_20c [258];
  uint local_8;
  
  local_8 = DAT_00406180 ^ (uint)&stack0xfffffffc;
  if (DAT_004065a8 != 1) {
    local_20c[0] = L'\0';
    do {
      FUN_00404b57(0x2838);
      eVar4 = _cgetws_s(local_20c,0x101,&local_210);
      if (eVar4 != 0) {
        FUN_00404b57(0x2794);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      pwVar3 = local_20c;
      pwVar5 = (wchar_t *)DAT_004065e0;
      param_2 = extraout_EDX;
      do {
        wVar1 = *pwVar3;
        uVar6 = (undefined2)((uint)param_2 >> 0x10);
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00403b4d:
          uVar2 = -(uint)bVar7 | 1;
          goto LAB_00403b51;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00403b4d;
        pwVar3 = pwVar3 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar2 = 0;
LAB_00403b51:
      if (uVar2 == 0) break;
      pwVar3 = local_20c;
      pwVar5 = (wchar_t *)DAT_004065ec;
      do {
        wVar1 = *pwVar3;
        uVar6 = (undefined2)((uint)param_2 >> 0x10);
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00403b8b:
          uVar2 = -(uint)bVar7 | 1;
          goto LAB_00403b8f;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00403b8b;
        pwVar3 = pwVar3 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar2 = 0;
LAB_00403b8f:
      if (uVar2 == 0) break;
      pwVar3 = local_20c;
      pwVar5 = (wchar_t *)DAT_004065e4;
      do {
        wVar1 = *pwVar3;
        uVar6 = (undefined2)((uint)param_2 >> 0x10);
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00403bc9:
          uVar2 = -(uint)bVar7 | 1;
          goto LAB_00403bcd;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00403bc9;
        pwVar3 = pwVar3 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar2 = 0;
LAB_00403bcd:
      if (uVar2 == 0) break;
      pwVar3 = local_20c;
      pwVar5 = (wchar_t *)DAT_004065e8;
      do {
        wVar1 = *pwVar3;
        uVar6 = (undefined2)((uint)param_2 >> 0x10);
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00403c07:
          uVar2 = -(uint)bVar7 | 1;
          goto LAB_00403c0b;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        param_2 = CONCAT22(uVar6,wVar1);
        bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00403c07;
        pwVar3 = pwVar3 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar2 = 0;
LAB_00403c0b:
    } while (uVar2 != 0);
  }
  FUN_00404ea0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00403c74 */

undefined4 __fastcall FUN_00403c74(undefined4 *param_1,wchar_t *param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_00404aab(param_3,(DWORD *)0x0,(va_list *)0x0);
  while( true ) {
    if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
      FUN_00404b57(0x282b);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar1 = _wcsicmp(param_2,(wchar_t *)*param_1);
    if (iVar1 == 0) break;
    param_1 = param_1 + 2;
  }
  return param_1[1];
}



/* Function: FUN_00403cce */

void FUN_00403cce(void)

{
  wchar_t *pwVar1;
  
  SetThreadUILanguage(0);
  DAT_0040661c = GetModuleHandleW((LPCWSTR)0x0);
  if (DAT_0040661c == (HMODULE)0x0) {
    pwVar1 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar1);
    FUN_00404b57(0x278f);
  }
  else {
    FUN_00403d75();
    DAT_004065e4 = FUN_00404aab(0x2839,(DWORD *)0x0,(va_list *)0x0);
    if (DAT_004065e4 != 0) {
      DAT_004065e8 = FUN_00404aab(0x283a,(DWORD *)0x0,(va_list *)0x0);
      if (DAT_004065e8 != 0) {
        DAT_004065e0 = FUN_00404aab(0x283b,(DWORD *)0x0,(va_list *)0x0);
        if (DAT_004065e0 != 0) {
          DAT_004065ec = FUN_00404aab(0x283c,(DWORD *)0x0,(va_list *)0x0);
          if (DAT_004065ec != 0) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_00403d75 */

void FUN_00403d75(void)

{
  HMODULE pHVar1;
  wchar_t *pwVar2;
  DWORD DVar3;
  
  pHVar1 = GetModuleHandleW(L"rpcrt4.dll");
  if (pHVar1 == (HMODULE)0x0) {
LAB_00403d89:
    pwVar2 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar2);
    DVar3 = 0x278f;
  }
  else {
    DAT_00406630 = GetProcAddress(pHVar1,"RpcCertMatchPrincipalName");
    if (DAT_00406630 != (FARPROC)0x0) {
      DAT_00406638 = GetProcAddress(pHVar1,"I_RpcAllocate");
      if (DAT_00406638 != (FARPROC)0x0) {
        DAT_00406634 = GetProcAddress(pHVar1,"I_RpcFree");
        if (DAT_00406634 != (FARPROC)0x0) {
          pHVar1 = LoadLibraryW(L"rpchttp.dll");
          if (pHVar1 == (HMODULE)0x0) goto LAB_00403d89;
          DAT_0040662c = GetProcAddress(pHVar1,"HttpParseNetworkOptions");
          if (DAT_0040662c != (FARPROC)0x0) {
            return;
          }
        }
      }
    }
    pwVar2 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar2);
    DVar3 = 0x2790;
  }
  FUN_00404b57(DVar3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_00403e36 */

void FUN_00403e36(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  DWORD DVar8;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  DWORD local_30;
  int local_2c;
  WCHAR local_28 [16];
  uint local_8;
  
  iVar1 = DAT_00406538;
  local_8 = DAT_00406180 ^ (uint)&stack0xfffffffc;
  local_2c = DAT_00406554;
  local_30 = 0xf;
  puVar2 = (undefined2 *)FUN_0040369e();
  *puVar2 = 0;
  puVar3 = (undefined2 *)FUN_0040369e();
  *puVar3 = 0;
  BVar4 = GetComputerNameW(local_28,&local_30);
  if (BVar4 == 0) {
    pwVar5 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar5);
    DVar8 = 0x281a;
  }
  else {
    local_44 = 0x14;
    local_40 = 0;
    local_34 = 0;
    local_3c = &DAT_00401130;
    local_38 = L"RPCPing";
    uVar7 = CredUIPromptForCredentialsW(&local_44,local_28,0,0,puVar2,0x202,puVar3,0x101,0,0x100);
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      if (iVar1 == 0) {
LAB_00403f2c:
        if (local_2c == 0) {
LAB_00403f55:
          FUN_00404ea0(local_8 ^ (uint)&stack0xfffffffc,uVar6);
          return;
        }
        uVar7 = SspiEncodeStringsAsAuthIdentity(puVar2,0,puVar3,&DAT_0040653c);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 == 0) goto LAB_00403f55;
      }
      else {
        uVar7 = SspiEncodeStringsAsAuthIdentity(puVar2,0,puVar3,&DAT_00406584);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 == 0) goto LAB_00403f2c;
      }
      FUN_00404b57(0x2725);
      goto LAB_00403eb2;
    }
    pwVar5 = (wchar_t *)GetLastError();
    FUN_004036d4(pwVar5);
    DVar8 = 0x281b;
  }
  FUN_00404b57(DVar8);
LAB_00403eb2:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_00403f6a */

void __fastcall FUN_00403f6a(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  wchar_t wVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  RPC_STATUS RVar7;
  wchar_t *pwVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar14;
  undefined4 extraout_EDX_01;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  DWORD DVar18;
  wchar_t *local_1c;
  wchar_t *local_10;
  int local_c;
  wchar_t *local_8;
  
  bVar4 = false;
  bVar5 = false;
  local_10 = (wchar_t *)0x0;
  local_1c = (wchar_t *)0x0;
  FUN_00403cce();
  puVar17 = &DAT_00406600;
  for (iVar12 = 7; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar17 = 0xffffffff;
    puVar17 = puVar17 + 1;
  }
  local_c = 0;
  iVar12 = param_1 + -1;
  piVar13 = (int *)(param_2 + 4);
  iVar11 = 0;
joined_r0x00403fac:
  if (iVar12 < 1) {
    FUN_00404b6e(0x272a);
    if ((local_10 != (wchar_t *)0x0) &&
       (DAT_00406580 = wcstol(local_10,&local_8,10), *local_8 != L'\0')) {
      DAT_00406580 = FUN_00403c74(&PTR_u_NTLM_004060a0,local_10,0x2732);
    }
    DAT_004061d4 = FUN_00403c74(&PTR_u_none_00406004,(wchar_t *)PTR_u_none_00406074,0x2733);
    if (DAT_004061d4 == 1) {
      if (DAT_00406580 != 0) {
        DVar18 = 0x281e;
        goto LAB_00404402;
      }
    }
    else {
      if (DAT_00406580 == 0) {
        DVar18 = 0x281d;
        goto LAB_00404402;
      }
      DAT_0040657c = 1;
    }
    if (DAT_004065c4 != (void *)0x0) {
      FUN_004039c4(0x272d);
      FUN_00403753(DAT_004065c4,&DAT_00406584);
    }
    if (bVar4) {
      FUN_004039c4(0x272d);
    }
    if (DAT_004065a4 == (wchar_t *)0x0) {
      if (DAT_0040657c != 0) {
        DAT_004061d0 = 1;
      }
    }
    else {
      FUN_004039c4(0x272e);
      DAT_004061d0 = FUN_00403c74(&PTR_u_static_00406108,DAT_004065a4,0x2736);
    }
    if (DAT_004065a0 == (wchar_t *)0x0) {
      if (DAT_0040657c != 0) {
        DAT_004061c8 = 3;
      }
    }
    else {
      FUN_004039c4(0x272f);
      DAT_004061c8 = FUN_00403c74(&PTR_u_anonymous_00406078,DAT_004065a0,0x2737);
    }
    if (DAT_004065b8 == 0) {
LAB_004044ad:
      if (DAT_0040658c == 0) {
LAB_004044f1:
        if (DAT_004065b0 != 0) {
          FUN_00403941();
        }
        if (DAT_004065bc != (void *)0x0) {
          FUN_004039e3();
          if (DAT_004065c0 == (wchar_t *)0x0) {
            DVar18 = 0x282f;
            goto LAB_00404402;
          }
          FUN_00403753(DAT_004065bc,&DAT_0040653c);
          DAT_0040654c = 1;
        }
        if (DAT_0040659c != (void *)0x0) {
          FUN_004039e3();
          if (DAT_004065ac == (wchar_t *)0x0) {
            DVar18 = 0x2820;
            goto LAB_00404402;
          }
          FUN_00403753(DAT_0040659c,&DAT_00406550);
          DAT_0040654c = 1;
        }
        if (!bVar5) goto LAB_00404622;
        wcstol(local_1c,&local_8,0x10);
        if (*local_8 != L'\0') {
          iVar12 = 0;
          pwVar8 = local_1c;
          goto LAB_004045ab;
        }
        FUN_004038fb(local_1c,(long *)&DAT_00406598);
        goto LAB_0040460f;
      }
      DAT_00406530 = wcstoul((wchar_t *)DAT_0040658c,&local_8,10);
      if (*local_8 == L'\0') {
        if (DAT_00406530 < 2) goto LAB_004044f1;
        DVar18 = 0x283f;
      }
      else {
        DVar18 = 0x283e;
      }
    }
    else {
      FUN_004039c4(0x2730);
      iVar12 = ConvertStringSidToSidW(DAT_004065b8,&DAT_00406570);
      if (iVar12 != 0) goto LAB_004044ad;
      DVar18 = 0x281f;
    }
    FUN_00404b57(DVar18);
    goto LAB_00404408;
  }
  sVar1 = *(short *)*piVar13;
  if ((sVar1 != 0x2f) && (sVar1 != 0x2d)) {
    FUN_00404b57(0x2728);
    iVar15 = iVar12;
    piVar16 = piVar13;
LAB_0040420a:
    iVar12 = iVar15 + -1;
    piVar13 = piVar16 + 1;
    goto joined_r0x00403fac;
  }
  uVar2 = ((short *)*piVar13)[1];
  iVar15 = iVar12 + -1;
  piVar16 = piVar13 + 1;
  if ((((iVar15 < 1) && (uVar2 != 0x71)) && (uVar2 != 0x70)) &&
     (((uVar2 != 0x62 && (uVar2 != 0x45)) && ((uVar2 != 0x3f && ((uVar2 != 99 && (uVar2 != 100))))))
     )) {
    DVar18 = 0x2729;
    goto LAB_0040430a;
  }
  if (uVar2 < 0x5b) {
    if (uVar2 == 0x5a) {
      DAT_0040658c = *piVar16;
    }
    else {
      switch(uVar2) {
      case 0x41:
        DAT_0040659c = (void *)*piVar16;
        break;
      case 0x42:
        DAT_00406628 = *piVar16;
        break;
      case 0x43:
        FUN_004038fb((wchar_t *)*piVar16,&DAT_00406534);
        bVar4 = true;
        goto LAB_0040417e;
      case 0x44:
        DAT_004065b0 = *piVar16;
        break;
      case 0x45:
        DAT_00406574 = 1;
        iVar12 = iVar15;
        piVar13 = piVar16;
        goto joined_r0x00403fac;
      case 0x46:
        local_1c = (wchar_t *)*piVar16;
        bVar5 = true;
        break;
      default:
switchD_00404033_caseD_47:
        FUN_00404b57(0x2711);
        FUN_00404b57(0x2712);
        FUN_00404b57(0x2713);
        FUN_00404b57(0x2714);
        FUN_00404b57(0x2715);
        iVar12 = 0;
        goto LAB_00404313;
      case 0x48:
        DAT_004065c0 = (wchar_t *)*piVar16;
        break;
      case 0x49:
        DAT_004065c4 = (void *)*piVar16;
        break;
      case 0x4d:
        DAT_004065a0 = (wchar_t *)*piVar16;
        break;
      case 0x4e:
        DAT_00406540 = *piVar16;
        break;
      case 0x4f:
        DAT_00406594 = *piVar16;
        break;
      case 0x50:
        DAT_004065bc = (void *)*piVar16;
        break;
      case 0x52:
        DAT_00406564 = *piVar16;
        break;
      case 0x53:
        DAT_004065b8 = *piVar16;
        break;
      case 0x54:
        DAT_004065a4 = (wchar_t *)*piVar16;
        break;
      case 0x55:
        DAT_004065ac = (wchar_t *)*piVar16;
      }
    }
    goto LAB_0040420a;
  }
  if (0x6f < uVar2) {
    if (uVar2 == 0x70) {
      DAT_0040656c = 1;
      iVar12 = iVar15;
      piVar13 = piVar16;
    }
    else if (uVar2 == 0x71) {
      DAT_004065a8 = 1;
      iVar12 = iVar15;
      piVar13 = piVar16;
    }
    else {
      if (uVar2 != 0x72) {
        if (uVar2 == 0x73) {
          DAT_00406548 = *piVar16;
        }
        else if (uVar2 == 0x74) {
          PTR_u_ncacn_ip_tcp_00406000 = (undefined *)*piVar16;
        }
        else {
          if (uVar2 != 0x75) {
            if (uVar2 != 0x76) goto switchD_00404033_caseD_47;
            DAT_004061dc = _wtoi((wchar_t *)*piVar16);
            goto LAB_0040417e;
          }
          local_10 = (wchar_t *)*piVar16;
        }
        goto LAB_0040420a;
      }
      DAT_004061cc = _wtoi((wchar_t *)*piVar16);
LAB_0040417e:
      iVar12 = iVar12 + -2;
      piVar13 = piVar13 + 2;
    }
    goto joined_r0x00403fac;
  }
  if (uVar2 == 0x6f) {
    DAT_00406568 = *piVar16;
    goto LAB_0040420a;
  }
  if (uVar2 == 0x61) {
    PTR_u_none_00406074 = (undefined *)*piVar16;
    goto LAB_0040420a;
  }
  if (uVar2 == 0x62) {
    DAT_00406578 = 1;
    iVar12 = iVar15;
    piVar13 = piVar16;
    goto joined_r0x00403fac;
  }
  if (uVar2 == 99) {
    DAT_004065b4 = 1;
    iVar12 = iVar15;
    piVar13 = piVar16;
    goto joined_r0x00403fac;
  }
  if (uVar2 == 0x65) {
    DAT_00406558 = *piVar16;
    goto LAB_0040420a;
  }
  if (uVar2 != 0x66) {
    if (uVar2 != 0x69) {
      if (uVar2 != 0x6e) goto switchD_00404033_caseD_47;
      if (iVar11 < 7) {
        iVar15 = _wtoi((wchar_t *)*piVar16);
        (&DAT_00406600)[iVar11] = iVar15;
        iVar11 = iVar11 + 1;
        local_c = iVar11;
      }
      else {
        FUN_00404b57(0x282e);
      }
      goto LAB_0040417e;
    }
    DAT_004061d8 = _wtoi((wchar_t *)*piVar16);
    iVar12 = iVar12 + -2;
    piVar13 = piVar13 + 2;
    if (DAT_004061d8 == 0) {
      DAT_004061d8 = 1000;
    }
    goto joined_r0x00403fac;
  }
  pwVar8 = (wchar_t *)*piVar16;
  iVar12 = iVar12 + -2;
  piVar13 = piVar13 + 2;
  DAT_00406590 = (UUID *)FUN_0040369e();
  pwVar6 = wcschr(pwVar8,L',');
  if (pwVar6 != (wchar_t *)0x0) {
    *pwVar6 = L'\0';
    DAT_004061c4 = _wtoi(pwVar6 + 1);
  }
  RVar7 = UuidFromStringW((RPC_WSTR)pwVar8,DAT_00406590);
  iVar11 = local_c;
  if (RVar7 == 0) goto joined_r0x00403fac;
  DVar18 = 0x281c;
LAB_0040430a:
  FUN_00404b57(DVar18);
  iVar12 = 1;
  goto LAB_00404313;
  while( true ) {
    iVar12 = iVar12 + 1;
    *pwVar8 = L'\0';
    pwVar8 = pwVar8 + 1;
    if (pwVar8 == (wchar_t *)0x0) break;
LAB_004045ab:
    pwVar8 = wcschr(pwVar8,L',');
    if (pwVar8 == (wchar_t *)0x0) break;
  }
  for (iVar12 = iVar12 + 1; iVar12 != 0; iVar12 = iVar12 + -1) {
    uVar9 = FUN_00403c74(&PTR_u_first_004060e0,local_1c,0x2734);
    DAT_00406598 = DAT_00406598 | uVar9;
    pwVar8 = local_1c;
    do {
      wVar3 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar3 != L'\0');
    local_1c = local_1c + ((int)pwVar8 - (int)(local_1c + 1) >> 1) + 1;
  }
LAB_0040460f:
  FUN_004039e3();
  DAT_0040654c = 1;
LAB_00404622:
  if (DAT_004065c0 != (wchar_t *)0x0) {
    FUN_004039e3();
    pwVar8 = DAT_004065c0;
    do {
      pwVar8 = wcschr(pwVar8,L',');
      if (pwVar8 == (wchar_t *)0x0) break;
      DAT_00406544 = DAT_00406544 + 1;
      *pwVar8 = L'\0';
      pwVar8 = pwVar8 + 1;
    } while (pwVar8 != (wchar_t *)0x0);
    DAT_00406544 = DAT_00406544 + 1;
    DAT_00406620 = (int *)FUN_0040369e();
    uVar9 = 0;
    pwVar8 = DAT_004065c0;
    if (DAT_00406544 != 0) {
      do {
        lVar10 = wcstol(pwVar8,&local_8,10);
        DAT_00406620[uVar9] = lVar10;
        piVar13 = (int *)0x0;
        uVar14 = extraout_EDX;
        if (*local_8 != L'\0') {
          iVar12 = FUN_00403c74(&PTR_u_NTLM_0040603c,pwVar8,0x2735);
          piVar13 = DAT_00406620;
          DAT_00406620[uVar9] = iVar12;
          uVar14 = extraout_EDX_00;
        }
        if (((DAT_00406620[uVar9] == 1) && ((DAT_00406598 & 1) == 0)) &&
           (iVar12 = FUN_00403ae8(piVar13,uVar14), iVar12 == 0)) goto LAB_00404408;
        if ((DAT_00406620[uVar9] == 0x10000) && (DAT_004065b4 == 0)) {
          DVar18 = 0x2835;
          goto LAB_00404402;
        }
        pwVar6 = pwVar8;
        do {
          wVar3 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar3 != L'\0');
        pwVar8 = pwVar8 + ((int)pwVar6 - (int)(pwVar8 + 1) >> 1) + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < DAT_00406544);
    }
    DAT_0040654c = 1;
  }
  if (DAT_00406628 == 0) {
LAB_00404765:
    if (DAT_00406578 == 0) {
LAB_004047a3:
      if (DAT_004065b4 == 0) {
LAB_00404839:
        if (DAT_004065ac != (wchar_t *)0x0) {
          FUN_004039e3();
          pwVar8 = DAT_004065ac;
          do {
            pwVar8 = wcschr(pwVar8,L',');
            if (pwVar8 == (wchar_t *)0x0) break;
            DAT_00406588 = DAT_00406588 + 1;
            *pwVar8 = L'\0';
            pwVar8 = pwVar8 + 1;
          } while (pwVar8 != (wchar_t *)0x0);
          DAT_00406588 = DAT_00406588 + 1;
          DAT_00406624 = FUN_0040369e();
          uVar9 = 0;
          pwVar8 = DAT_004065ac;
          if (DAT_00406588 != 0) {
            do {
              lVar10 = wcstol(pwVar8,&local_8,10);
              iVar12 = DAT_00406624;
              uVar14 = 0;
              *(long *)(DAT_00406624 + uVar9 * 4) = lVar10;
              if (*local_8 != L'\0') {
                uVar14 = FUN_00403c74(&PTR_u_NTLM_0040603c,pwVar8,0x2735);
                iVar12 = DAT_00406624;
                *(undefined4 *)(DAT_00406624 + uVar9 * 4) = uVar14;
                uVar14 = extraout_EDX_01;
              }
              if (((*(int *)(iVar12 + uVar9 * 4) == 1) && ((DAT_00406598 & 1) == 0)) &&
                 (iVar11 = FUN_00403ae8(iVar12,uVar14), iVar12 = DAT_00406624, iVar11 == 0))
              goto LAB_00404408;
              if (*(int *)(iVar12 + uVar9 * 4) == 0x10000) {
                DVar18 = 0x2827;
                goto LAB_00404402;
              }
              pwVar6 = pwVar8;
              do {
                wVar3 = *pwVar6;
                pwVar6 = pwVar6 + 1;
              } while (wVar3 != L'\0');
              pwVar8 = pwVar8 + ((int)pwVar6 - (int)(pwVar8 + 1) >> 1) + 1;
              uVar9 = uVar9 + 1;
            } while (uVar9 < DAT_00406588);
          }
          DAT_0040654c = 1;
        }
        if (DAT_00406564 == 0) {
          if (DAT_00406574 == 0) goto LAB_00404995;
        }
        else if (DAT_00406574 == 0) {
          DVar18 = 0x2828;
          goto LAB_00404402;
        }
        FUN_004039e3();
        FUN_00403a23();
        if ((DAT_00406558 != 0) || (DAT_00406590 != (UUID *)0x0)) {
          FUN_00404b6e(0x2829);
        }
LAB_00404995:
        if (DAT_0040656c != 0) {
          FUN_004039c4(0x2731);
        }
        return;
      }
      if (DAT_00406580 == 0xe) {
        if (DAT_004065c4 != (void *)0x0) {
          DVar18 = 0x2834;
          goto LAB_00404402;
        }
        DAT_00406538 = 1;
      }
      if ((DAT_00406544 == 1) && (*DAT_00406620 == 0x10000)) {
        DAT_00406554 = 1;
        if (DAT_004065bc == (void *)0x0) {
          if ((DAT_00406598 & 1) != 0) goto LAB_00404822;
          DVar18 = 0x2825;
        }
        else {
          DVar18 = 0x2824;
        }
      }
      else {
LAB_00404822:
        if ((DAT_00406538 != 0) || (DAT_00406554 != 0)) {
          FUN_00403e36();
          goto LAB_00404839;
        }
        DVar18 = 0x2826;
      }
    }
    else {
      FUN_004039e3();
      if ((DAT_00406598 & 1) == 0) {
        DVar18 = 0x2822;
      }
      else {
        if (DAT_00406574 != 0) {
          DAT_0040654c = 1;
          goto LAB_004047a3;
        }
        DVar18 = 0x2823;
      }
    }
  }
  else {
    FUN_004039e3();
    if ((DAT_00406598 & 1) != 0) {
      DAT_0040654c = 1;
      goto LAB_00404765;
    }
    DVar18 = 0x2821;
  }
LAB_00404402:
  FUN_00404b57(DVar18);
LAB_00404408:
  iVar12 = 1;
LAB_00404313:
                    /* WARNING: Subroutine does not return */
  exit(iVar12);
}



/* Function: FUN_00404a08 */

void __fastcall FUN_00404a08(LPCWSTR param_1,DWORD param_2)

{
  HANDLE hConsoleHandle;
  DWORD DVar1;
  BOOL BVar2;
  LPSTR lpMultiByteStr;
  LPCWSTR local_c;
  DWORD local_8;
  
  hConsoleHandle = DAT_004065dc;
  local_c = param_1;
  local_8 = param_2;
  DVar1 = GetFileType(DAT_004065dc);
  if (((DVar1 & 0xffff7fff) == 2) &&
     (BVar2 = GetConsoleMode(hConsoleHandle,(LPDWORD)&local_c), BVar2 != 0)) {
    WriteConsoleW(DAT_004065dc,param_1,local_8,&local_8,(LPVOID)0x0);
  }
  else {
    DVar1 = local_8;
    lpMultiByteStr = (LPSTR)malloc(local_8 * 2);
    if (lpMultiByteStr != (LPSTR)0x0) {
      local_8 = WideCharToMultiByte(1,0,param_1,DVar1,lpMultiByteStr,DVar1 * 2,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
      if (local_8 != 0) {
        WriteFile(DAT_004065dc,lpMultiByteStr,local_8,&local_8,(LPOVERLAPPED)0x0);
      }
      free(lpMultiByteStr);
    }
  }
  return;
}



/* Function: FUN_00404aab */

DWORD __fastcall FUN_00404aab(DWORD param_1,DWORD *param_2,va_list *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FILE *_File;
  char *_Format;
  DWORD local_c;
  DWORD local_8;
  
  local_c = param_1;
  local_8 = param_1;
  local_8 = FormatMessageW(0x900,DAT_0040661c,param_1,0,(LPWSTR)&local_c,0,param_3);
  if (local_8 == 0) {
    pwVar1 = (wchar_t *)GetLastError();
    pwVar2 = FUN_004036d4(pwVar1);
    _Format = "Error %d : %S returned in FormatMessage\n";
    _File = FUN_004054d9(2);
    fprintf(_File,_Format,pwVar1,pwVar2);
    local_c = 0;
  }
  if (param_2 != (DWORD *)0x0) {
    *param_2 = local_8;
  }
  return local_c;
}



/* Function: FUN_00404b20 */

void __fastcall FUN_00404b20(DWORD param_1,va_list param_2)

{
  LPCWSTR hMem;
  DWORD local_c;
  va_list local_8;
  
  local_c = param_1;
  local_8 = param_2;
  hMem = (LPCWSTR)FUN_00404aab(param_1,&local_c,&local_8);
  if (hMem != (LPCWSTR)0x0) {
    FUN_00404a08(hMem,local_c);
    LocalFree(hMem);
  }
  return;
}



/* Function: FUN_00404b57 */

void __cdecl FUN_00404b57(DWORD param_1)

{
  FUN_00404b20(param_1,&stack0x00000008);
  return;
}



/* Function: FUN_00404b6e */

void __cdecl FUN_00404b6e(DWORD param_1)

{
  if (1 < DAT_004061dc) {
    FUN_00404b20(param_1,&stack0x00000008);
    return;
  }
  return;
}



/* Function: FUN_00404b90 */

void __cdecl FUN_00404b90(DWORD param_1)

{
  if (2 < DAT_004061dc) {
    FUN_00404b20(param_1,&stack0x00000008);
    return;
  }
  return;
}



/* Function: FUN_00404bc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404bc0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00404e1f();
  DAT_004061f8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00404fa4(1);
  __set_app_type(iVar2);
  _DAT_004065c8 = 0xffffffff;
  _DAT_004065cc = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040620c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00406200;
  FUN_00405000();
  if (DAT_00406140 == 0) {
    __setusermatherr(FUN_00405000);
  }
  FUN_00405207();
  return 0;
}



/* Function: FUN_00404c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c30(void)

{
  _DAT_004061fc = DAT_00406208;
  _DAT_004061f4 =
       __wgetmainargs(&DAT_004061e8,(wchar_t ***)&DAT_004061ec,(wchar_t ***)&DAT_004061f0,
                      DAT_00406204,(_startupinfo *)&DAT_004061fc);
  return;
}



/* Function: FUN_00404c69 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00404c69(void)

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
    if (DAT_004065d0 != 0) {
      iVar4 = DAT_004065d0;
      iVar3 = DAT_004065d0;
    }
    DAT_004065d0 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00404cb1;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00404cb1:
  if (DAT_004065d4 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004065d4 == 0) {
    DAT_004065d4 = 1;
    iVar5 = FUN_00404de8((undefined4 *)&DAT_004010fc,(undefined4 *)&DAT_00401108);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004061e4 = 1;
  }
  if (DAT_004065d4 == 1) {
    initterm(&DAT_004010f0,&DAT_004010f8);
    DAT_004065d4 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_004065d0 = 0;
    UNLOCK();
  }
  if ((DAT_004065d8 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004065d8), pcVar2 = DAT_004065d8, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004071c0)(0,2,0);
    (*pcVar2)();
  }
  DAT_004061e0 = FUN_004029a7(DAT_004061e8,DAT_004061ec);
  if (DAT_004061f8 != 0) {
    if (DAT_004061e4 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_004061e0;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_004061e0);
}



/* Function: FUN_00404de8 */

void __cdecl FUN_00404de8(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004071c0)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00404e1f */

bool FUN_00404e1f(void)

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
  FUN_00405169();
  FUN_00404c69();
  return;
}



/* Function: FUN_00404ea0 */

void __fastcall FUN_00404ea0(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00406180) {
    return;
  }
  FUN_004052eb(param_1,param_2);
  return;
}



/* Function: FUN_00404ec0 */

undefined4 FUN_00404ec0(int *param_1)

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



/* Function: FUN_00404f10 */

undefined4 FUN_00404f10(void)

{
  SetUnhandledExceptionFilter(FUN_00404ec0);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00404f30 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00404f30(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00404fa4 */

undefined4 __cdecl FUN_00404fa4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00404f30(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00404fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00405000 */

undefined4 FUN_00405000(void)

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
  
  pcStack_10 = FUN_00405290;
  local_14 = ExceptionList;
  local_c = DAT_00406180 ^ 0x405558;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00405130((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00405130 */

bool __cdecl FUN_00405130(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00405169 */

void FUN_00405169(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00406180 == 0xbb40e64e) || ((DAT_00406180 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00406180 & 0xffff0000, DAT_00406180 = local_8, uVar1 == 0)) {
      DAT_00406180 = 0xbb40e64f;
    }
  }
  DAT_004061c0 = ~DAT_00406180;
  return;
}



/* Function: FUN_00405207 */

void FUN_00405207(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00405220. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00406180 ^ (uint)&param_2;
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



/* Function: FUN_00405290 */

void __cdecl
FUN_00405290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00406180,FUN_00404ea0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004052bb */

void __cdecl FUN_004052bb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_004052eb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004052eb(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00406320 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00406324 = &stack0x00000004;
  _DAT_00406260 = 0x10001;
  _DAT_00406210 = 0xc0000409;
  _DAT_00406214 = 1;
  _DAT_00406220 = 3;
  DAT_00406224 = 2;
  DAT_00406228 = DAT_00406180;
  DAT_0040622c = DAT_004061c0;
  uStack_c = DAT_00406180;
  uStack_8 = DAT_004061c0;
  _DAT_0040621c = unaff_retaddr;
  _DAT_004062ec = in_GS;
  _DAT_004062f0 = in_FS;
  _DAT_004062f4 = in_ES;
  _DAT_004062f8 = in_DS;
  _DAT_004062fc = unaff_EDI;
  _DAT_00406300 = unaff_ESI;
  _DAT_00406304 = unaff_EBX;
  _DAT_00406308 = param_2;
  _DAT_0040630c = param_1;
  _DAT_00406310 = in_EAX;
  _DAT_00406314 = unaff_EBP;
  DAT_00406318 = unaff_retaddr;
  _DAT_0040631c = in_CS;
  _DAT_00406328 = in_SS;
  FUN_004052bb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_004053ff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004053ff(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  
  _DAT_00406320 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00406260 = 0x10001;
  _DAT_00406324 = &stack0x00000004;
  _DAT_00406210 = 0xc0000409;
  _DAT_00406214 = 1;
  _DAT_00406220 = 1;
  DAT_00406224 = 8;
  _DAT_0040621c = unaff_retaddr;
  _DAT_004062ec = in_GS;
  _DAT_004062f0 = in_FS;
  _DAT_004062f4 = in_ES;
  _DAT_004062f8 = in_DS;
  _DAT_004062fc = unaff_EDI;
  _DAT_00406300 = unaff_ESI;
  _DAT_00406304 = unaff_EBX;
  _DAT_00406308 = param_2;
  _DAT_0040630c = param_1;
  _DAT_00406310 = in_EAX;
  DAT_00406318 = unaff_retaddr;
  _DAT_0040631c = in_CS;
  _DAT_00406328 = in_SS;
  FUN_004052bb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x004054bf. Too many branches */
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



/* Function: FUN_004054d9 */

FILE * __cdecl FUN_004054d9(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004054f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004054ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040550b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



