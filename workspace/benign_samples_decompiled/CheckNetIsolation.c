/* Function: FUN_00401f10 */

void FUN_00401f10(void)

{
  DAT_00407590 = FUN_004023d0;
  DAT_0040758c = DebugBreak;
  DAT_00407588 = FUN_00402410;
  DAT_004075a0 = FUN_00402740;
  DAT_0040759c = FUN_00402790;
  return;
}



/* Function: FUN_00401f50 */

short * __cdecl FUN_00401f50(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar2 = (int)param_2 - (int)param_1 >> 1;
  if (uVar2 != 0) {
    if (uVar2 < 0x80000000) {
      uVar2 = uVar2 - 1;
      uVar3 = FUN_004067ef(param_1,uVar2,param_3,&stack0x00000010);
      if ((((int)uVar3 < 0) || (uVar2 < uVar3)) || (uVar3 == uVar2)) {
        param_1[uVar2] = 0;
      }
    }
    else {
      *param_1 = 0;
    }
  }
  if (param_2 == param_1) {
    return param_1;
  }
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  return param_1 + ((int)psVar4 - (int)(param_1 + 1) >> 1);
}



/* Function: FUN_00401fd0 */

void __fastcall FUN_00401fd0(short *param_1,int param_2,undefined4 *param_3)

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
  
  pcVar2 = DAT_004075b4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00406a80;
  local_10 = ExceptionList;
  local_14 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_004075a4 != '\0')) {
      (*(code *)PTR_guard_check_icall_004081f8)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_0040223c;
    }
    switch(*param_3) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_004075a0;
    if ((*(byte *)(param_3 + 1) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,param_3[2],0x400,local_214,0x100,(va_list *)0x0);
    }
    else if (DAT_004075a0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004081f8)(param_3[3],local_214,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (param_3[9] == 0) {
      local_218 = FUN_00401f50(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_00401f50(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (param_3[0x15] != 0) {
      local_218 = FUN_00401f50(local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_00401f50(local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((param_3[5] != 0) || (param_3[0xc] != 0)) || (param_3[8] != 0)) {
      psVar3 = FUN_00401f50(psVar3,psVar1,L"    ");
      if (param_3[5] != 0) {
        psVar3 = FUN_00401f50(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (param_3[0xc] != 0) {
        psVar3 = FUN_00401f50(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (param_3[7] == 0) {
        if (param_3[8] == 0) {
          FUN_00401f50(psVar3,psVar1,&DAT_00401440);
        }
        else {
          FUN_00401f50(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00401f50(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_0040223c:
  ExceptionList = local_10;
  FUN_00405960(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402280(undefined4 param_1)

{
  _DAT_0040757c = param_1;
  return 1;
}



/* Function: FUN_004022a0 */

void FUN_004022a0(LPCWSTR param_1,int *param_2,char *param_3,uint param_4)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  CHAR *pCVar5;
  int iVar6;
  int iVar7;
  HMODULE local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_110 = (HMODULE)0x0;
  if ((param_1 != (LPCWSTR)0x0) && (BVar2 = GetModuleHandleExW(6,param_1,&local_110), BVar2 == 0)) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
LAB_00402332:
    FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 != (int *)0x0) {
    iVar6 = 0;
    if (param_1 != (LPCWSTR)0x0) {
      iVar6 = (int)param_1 - (int)local_110;
    }
    *param_2 = iVar6;
  }
  if (param_3 != (char *)0x0) {
    DVar3 = GetModuleFileNameA(local_110,local_10c,0x104);
    if (DVar3 == 0) goto LAB_00402332;
    pcVar4 = local_10c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pCVar5 = local_10c + ((int)pcVar4 - (int)(local_10c + 1));
    if (local_10c < pCVar5) {
      do {
        if (pCVar5[-1] == '\\') break;
        pCVar5 = pCVar5 + -1;
      } while (local_10c < pCVar5);
    }
    if (param_4 != 0) {
      if (param_4 < 0x80000000) {
        iVar7 = 0x7ffffffe - param_4;
        iVar6 = (int)pCVar5 - (int)param_3;
        do {
          if ((iVar7 + param_4 == 0) || (param_3[iVar6] == '\0')) break;
          *param_3 = param_3[iVar6];
          param_3 = param_3 + 1;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        pcVar4 = param_3 + -1;
        if (param_4 != 0) {
          pcVar4 = param_3;
        }
        *pcVar4 = '\0';
      }
      else {
        *param_3 = '\0';
      }
    }
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004023d0 */

undefined * FUN_004023d0(void)

{
  if (DAT_00407578 == '\0') {
    FUN_004022a0((LPCWSTR)FUN_00402280,(int *)0x0,&DAT_00407538,0x40);
    DAT_00407578 = '\x01';
  }
  return &DAT_00407538;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00402410 */

void FUN_00402410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00402460 */

uint __fastcall FUN_00402460(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < -0x7ff8fffe) {
    if (param_1 == 0x80070001) {
      return 0xc0000002;
    }
    if (param_1 == 0x80004005) {
      return 0xc0000001;
    }
  }
  else if ((int)param_1 < -0x7ff8fde9) {
    if (param_1 == 0x80070216) {
      return 0xc0000095;
    }
    switch(param_1) {
    case 0x80070002:
      return 0xc0000034;
    case 0x80070003:
      return 0xc000003a;
    case 0x8007000e:
      return 0xc0000017;
    case 0x80070057:
      return 0xc000000d;
    case 0x80070070:
      return 0xc000007f;
    case 0x8007007a:
      return 0xc0000023;
    case 0x8007007b:
      return 0xc0000033;
    case 0x8007007e:
      return 0xc0000135;
    case 0x800700ea:
      return 0x80000005;
    }
  }
  else if ((int)param_1 < -0x7ff8fb81) {
    if (param_1 == 0x8007047e) {
      return 0xc0000059;
    }
    switch(param_1) {
    case 0x8007023e:
      return 0xc0000025;
    case 0x80070246:
      return 0xc0000161;
    case 0x80070247:
      return 0xc0000163;
    case 0x80070272:
      return 0xc0000273;
    }
  }
  else if ((int)param_1 < -0x7ff8fa46) {
    if (param_1 == 0x800705b9) {
      return 0xc000a083;
    }
    if (param_1 == 0x8007050c) {
      return 0xc000042b;
    }
    if (param_1 == 0x8007054f) {
      return 0xc00000e5;
    }
  }
  else if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x10000000) != 0) {
    return param_1 & 0xefffffff;
  }
  if ((param_1 & 0x1fff0000) != 0x70000) {
    if ((param_1 & 0x1fff0000) != 0x90000) {
      return 0xc00000e5;
    }
    if ((int)param_1 < 1) {
      return param_1;
    }
    return param_1 & 0xffff | 0xc0090000;
  }
  uVar1 = param_1 & 0xffff;
  if (uVar1 != 0) {
    uVar1 = uVar1 | 0xc0070000;
  }
  return uVar1;
}



/* Function: FUN_00402740 */

void FUN_00402740(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00407534 == (HMODULE)0x0) {
    DAT_00407534 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00407534,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00402790 */

void FUN_00402790(undefined1 *param_1)

{
  uint uVar1;
  FARPROC pFVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = DAT_00407528;
  puStack_c = &LAB_00406ab0;
  local_10 = ExceptionList;
  uVar1 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2a = 0;
  local_2f = 0;
  local_28 = 0;
  local_38 = *(undefined4 *)(param_1 + 8);
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *param_1;
  local_2e = DAT_0040752c;
  local_2c = *(undefined2 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x24);
  local_20 = *(undefined4 *)(param_1 + 0x4c);
  local_1c = 0;
  local_8 = 0;
  local_14 = uVar1;
  if (DAT_00407528 == (FARPROC)0x0) {
    if (DAT_00407530 == (HMODULE)0x0) {
      DAT_00407530 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_00407530 != (HMODULE)0x0) goto LAB_00402836;
    }
    else {
LAB_00402836:
      pFVar2 = GetProcAddress(DAT_00407530,"WilFailureNotifyWatchers");
    }
    DAT_00407528 = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_00402862;
  }
  pFVar2 = DAT_00407528;
  (*(code *)PTR_guard_check_icall_004081f8)(0,&local_38,&local_1c,uVar1);
  (*pFVar2)();
LAB_00402862:
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_1c;
  if (local_1c._4_1_ == '\x01') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else if (local_1c._4_1_ == '\x02') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  else if (local_1c._4_1_ == '\x03') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  ExceptionList = local_10;
  FUN_00405960(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004028c0 */

void __fastcall
FUN_004028c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_004028f0 */

undefined4 FUN_004028f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return 0;
}



/* Function: FUN_00402920 */

void FUN_00402920(undefined4 *param_1)

{
  FwFree(*param_1);
  return;
}



/* Function: FUN_00402940 */

void __fastcall FUN_00402940(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_10 = 0;
  if (param_1 == 0) {
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(10,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
    FUN_0040678c(DAT_004077b0);
  }
  else {
    iVar1 = FwSidCopy(param_1,&local_18);
    if (iVar1 == 0) {
      iVar1 = NetworkIsolationGetAppContainerConfig(&local_10,(int)&local_10 + 4);
      if (iVar1 == 0) {
        uVar2 = FwArrayAppend(8,FUN_004028f0,&local_10,&local_18);
        iVar1 = FwHResultToWindowsError(uVar2);
        if (iVar1 == 0) {
          local_18 = local_18 & 0xffffffff00000000;
          iVar1 = NetworkIsolationSetAppContainerConfig((undefined4)local_10,local_10._4_4_);
          if (((iVar1 == 0) || ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000)) ||
             ((PTR_LOOP_00407000[0x1c] & 1) == 0)) goto LAB_00402a86;
          uVar2 = 0xe;
        }
        else {
          if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
             ((PTR_LOOP_00407000[0x1c] & 1) == 0)) goto LAB_00402a86;
          uVar2 = 0xd;
        }
      }
      else {
        if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
           ((PTR_LOOP_00407000[0x1c] & 1) == 0)) goto LAB_00402a86;
        uVar2 = 0xc;
      }
    }
    else {
      if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
         ((PTR_LOOP_00407000[0x1c] & 1) == 0)) goto LAB_00402a86;
      uVar2 = 0xb;
    }
    FUN_004028c0(uVar2,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
LAB_00402a86:
  if ((int)local_18 != 0) {
    FwFree((int)local_18);
  }
  if (local_10._4_4_ != 0) {
    FwSidAndAttributesFree((undefined4)local_10,local_10._4_4_);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402ac0 */

void __fastcall FUN_00402ac0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  if (param_1 == 0) {
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0xf,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
    FUN_0040678c(DAT_004077b0);
  }
  else {
    iVar2 = NetworkIsolationGetAppContainerConfig(&local_10,(int)&local_10 + 4);
    if (iVar2 == 0) {
      uVar4 = 0;
      if ((uint)local_10 != 0) {
        do {
          cVar1 = RtlEqualSid(*(undefined4 *)(local_10._4_4_ + uVar4 * 8),param_1);
          if (cVar1 == '\x01') {
            if (uVar4 < (uint)local_10) {
              FwArrayErase(8,FUN_00402920,&local_10,uVar4);
              iVar2 = FwHResultToWindowsError(0);
              if (iVar2 == 0) {
                iVar2 = NetworkIsolationSetAppContainerConfig((uint)local_10,local_10._4_4_);
                if (((iVar2 != 0) && ((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000)) &&
                   ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                  uVar3 = 0x12;
                  goto LAB_00402be2;
                }
              }
              else if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                      ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                uVar3 = 0x11;
                goto LAB_00402be2;
              }
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)local_10);
      }
    }
    else if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
            ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      uVar3 = 0x10;
LAB_00402be2:
      FUN_004028c0(uVar3,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
  }
  if (local_10._4_4_ != 0) {
    FwSidAndAttributesFree((uint)local_10,local_10._4_4_);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402c20 */

void FUN_00402c20(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  HLOCAL local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_18 = 0;
  local_14 = (HLOCAL)0x0;
  local_10 = 0;
  iVar1 = NetworkIsolationGetAppContainerConfig(&local_c,&local_18);
  if (iVar1 == 0) {
    FUN_0040678c(DAT_004077b4);
    uVar3 = 0;
    if (local_c != 0) {
      do {
        iVar1 = ConvertSidToStringSidW(*(undefined4 *)(local_18 + uVar3 * 8),&local_14);
        if (iVar1 == 0) {
          GetLastError();
          if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
             ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
            uVar2 = 0x15;
            goto LAB_00402d71;
          }
          break;
        }
        uVar2 = AppContainerLookupMoniker(*(undefined4 *)(local_18 + uVar3 * 8),&local_10);
        iVar1 = FwHResultToWindowsError(uVar2);
        if (iVar1 == 2) {
          local_10 = 0;
        }
        else if (iVar1 != 0) {
          if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
             ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
            uVar2 = 0x16;
            goto LAB_00402d71;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        FUN_0040678c(DAT_004077b8);
        LocalFree(local_14);
        local_14 = (HLOCAL)0x0;
        if (local_10 != 0) {
          AppContainerFreeMemory(local_10);
          local_10 = 0;
        }
      } while (uVar3 < local_c);
    }
  }
  else if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
          ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
    uVar2 = 0x14;
LAB_00402d71:
    FUN_004028c0(uVar2,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  if (local_14 != (HLOCAL)0x0) {
    LocalFree(local_14);
    local_14 = (HLOCAL)0x0;
  }
  if (AppContainerFreeMemory_exref != (code *)0x0) {
    AppContainerFreeMemory(local_10);
    local_10 = 0;
  }
  if (local_18 != 0) {
    FwSidAndAttributesFree(local_c,local_18);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402de0 */

undefined4 __fastcall FUN_00402de0(int param_1,short *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar4 = 0;
    do {
      if (*(short *)(iVar4 + param_1) == 0) break;
      sVar1 = o_towupper(*(short *)(iVar4 + param_1));
      sVar2 = o_towupper(*(undefined2 *)(iVar4 + (int)param_2));
      if (sVar1 != sVar2) {
        *param_3 = iVar4 + (int)param_2;
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar3 * 2;
    } while (param_2[iVar3] != 0);
  }
  if (param_2[iVar3] == 0) {
    *param_3 = (int)(param_2 + iVar3);
    return 0;
  }
  if (*(short *)(param_1 + iVar3 * 2) != 0) {
    return 0;
  }
  *param_3 = (int)(param_2 + iVar3);
  return 1;
}



/* Function: FUN_00402e90 */

DWORD __fastcall
FUN_00402e90(int param_1,int param_2,int *param_3,int *param_4,uint *param_5,undefined4 *param_6,
            undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  bool bVar6;
  int local_14;
  int local_c;
  int local_8;
  
  *param_5 = 0;
  local_c = 0;
  *param_6 = 0;
  *param_3 = 0;
  *param_8 = 0;
  *param_4 = 0;
  local_8 = param_2;
  if (param_1 < 2) {
    if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
      return 0x57;
    }
    if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
      return 0x57;
    }
    uVar3 = 0x18;
LAB_00403423:
    DVar4 = 0x57;
LAB_00403425:
    FUN_004028c0(uVar3,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    return DVar4;
  }
  iVar1 = lstrcmpiW(L"/?",*(LPCWSTR *)(param_2 + 4));
  if (((iVar1 == 0) || (iVar1 = lstrcmpiW(L"-?",*(LPCWSTR *)(param_2 + 4)), iVar1 == 0)) ||
     (iVar1 = lstrcmpiW(L"Help",*(LPCWSTR *)(param_2 + 4)), iVar1 == 0)) {
    *param_3 = 3;
  }
  else {
    iVar1 = lstrcmpiW(L"LoopbackExempt",*(LPCWSTR *)(param_2 + 4));
    if (iVar1 == 0) {
      *param_3 = 1;
    }
    else {
      iVar1 = lstrcmpiW(L"Debug",*(LPCWSTR *)(param_2 + 4));
      if (iVar1 == 0) {
        *param_3 = 2;
      }
    }
  }
  iVar5 = 1;
  iVar1 = 0;
  do {
    iVar2 = lstrcmpiW(L"-a",*(LPCWSTR *)(local_8 + iVar1 * 4));
    if ((iVar2 == 0) || (iVar2 = lstrcmpiW(L"/a",*(LPCWSTR *)(local_8 + iVar1 * 4)), iVar2 == 0)) {
      if (*param_4 != 0) {
        return 0x57;
      }
      *param_4 = 1;
LAB_004030b9:
      iVar5 = iVar5 + 1;
    }
    else {
      iVar2 = lstrcmpiW(L"-d",*(LPCWSTR *)(local_8 + iVar1 * 4));
      if ((iVar2 == 0) || (iVar2 = lstrcmpiW(L"/d",*(LPCWSTR *)(local_8 + iVar1 * 4)), iVar2 == 0))
      {
        if (*param_4 != 0) {
          return 0x57;
        }
        *param_4 = 2;
        goto LAB_004030b9;
      }
      iVar2 = lstrcmpiW(L"-c",*(LPCWSTR *)(local_8 + iVar1 * 4));
      if ((iVar2 == 0) || (iVar2 = lstrcmpiW(L"/c",*(LPCWSTR *)(local_8 + iVar1 * 4)), iVar2 == 0))
      {
        if (*param_4 != 0) {
          return 0x57;
        }
        *param_4 = 3;
        goto LAB_004030b9;
      }
      iVar2 = lstrcmpiW(L"-s",*(LPCWSTR *)(local_8 + iVar1 * 4));
      if ((iVar2 == 0) || (iVar2 = lstrcmpiW(L"/s",*(LPCWSTR *)(local_8 + iVar1 * 4)), iVar2 == 0))
      {
        if (*param_4 != 0) {
          return 0x57;
        }
        *param_4 = 4;
        goto LAB_004030b9;
      }
      iVar2 = lstrcmpiW(L"-is",*(LPCWSTR *)(local_8 + iVar1 * 4));
      if ((iVar2 == 0) || (iVar2 = lstrcmpiW(L"/is",*(LPCWSTR *)(local_8 + iVar1 * 4)), iVar2 == 0))
      {
        if (*param_4 != 0) {
          return 0x57;
        }
        *param_4 = 5;
        goto LAB_004030b9;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1);
  local_14 = 0;
  do {
    iVar1 = FUN_00402de0(0x401574,*(short **)(local_8 + local_14 * 4),&local_c);
    if ((iVar1 == 1) ||
       (iVar1 = FUN_00402de0(0x40157c,*(short **)(local_8 + local_14 * 4),&local_c), iVar1 == 1)) {
      if (local_c == 0) {
        if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
          return 0x57;
        }
        if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
          return 0x57;
        }
        uVar3 = 0x19;
        goto LAB_00403423;
      }
      uVar3 = FwStringCopy(local_c,param_7);
      DVar4 = FwHResultToWindowsError(uVar3);
      if (DVar4 != 0) {
        if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
          return DVar4;
        }
        if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
          return DVar4;
        }
        uVar3 = 0x1a;
        goto LAB_00403425;
      }
      *param_5 = *param_5 | 1;
      uVar3 = AppContainerDeriveSidFromMoniker(local_c,param_6);
      DVar4 = FwHResultToWindowsError(uVar3);
      if (DVar4 != 0) {
        if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
          return DVar4;
        }
        if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
          return DVar4;
        }
        uVar3 = 0x1b;
        goto LAB_00403425;
      }
      iVar5 = iVar5 + 1;
    }
    else {
      iVar1 = FUN_00402de0(0x401584,*(short **)(local_8 + local_14 * 4),&local_c);
      if ((iVar1 == 1) ||
         (iVar1 = FUN_00402de0(0x40158c,*(short **)(local_8 + local_14 * 4),&local_c), iVar1 == 1))
      {
        if (local_c == 0) {
          if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
            return 0x57;
          }
          if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
            return 0x57;
          }
          uVar3 = 0x1c;
          goto LAB_00403423;
        }
        *param_5 = *param_5 | 2;
        iVar1 = ConvertStringSidToSidW(local_c,param_6);
        if (iVar1 == 0) {
          DVar4 = GetLastError();
          if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
            return DVar4;
          }
          if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
            return DVar4;
          }
          uVar3 = 0x1d;
          goto LAB_00403425;
        }
        iVar5 = iVar5 + 1;
      }
      else {
        iVar1 = FUN_00402de0(0x401594,*(short **)(local_8 + local_14 * 4),&local_c);
        if ((iVar1 == 1) ||
           (iVar1 = FUN_00402de0(0x40159c,*(short **)(local_8 + local_14 * 4),&local_c), iVar1 == 1)
           ) {
          if (local_c == 0) {
            if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
              return 0x57;
            }
            if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
              return 0x57;
            }
            uVar3 = 0x1e;
            goto LAB_00403423;
          }
          *param_5 = *param_5 | 4;
          uVar3 = FwStringCopy(local_c,param_8);
          DVar4 = FwHResultToWindowsError(uVar3);
          if (DVar4 != 0) {
            if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
              return DVar4;
            }
            if ((PTR_LOOP_00407000[0x1c] & 1) == 0) {
              return DVar4;
            }
            uVar3 = 0x1f;
            goto LAB_00403425;
          }
          iVar5 = iVar5 + 1;
        }
        else {
          iVar1 = lstrcmpiW(L"-v",*(LPCWSTR *)(local_8 + local_14 * 4));
          if ((iVar1 == 0) ||
             (iVar1 = lstrcmpiW(L"/v",*(LPCWSTR *)(local_8 + local_14 * 4)), iVar1 == 0)) {
            *param_5 = *param_5 | 8;
            iVar5 = iVar5 + 1;
          }
          else {
            iVar1 = lstrcmpiW(L"-cac",*(LPCWSTR *)(local_8 + local_14 * 4));
            if ((iVar1 == 0) ||
               (iVar1 = lstrcmpiW(L"/cac",*(LPCWSTR *)(local_8 + local_14 * 4)), iVar1 == 0)) {
              *param_5 = *param_5 | 0x20;
              iVar5 = iVar5 + 1;
            }
            else {
              iVar1 = lstrcmpiW(L"-?",*(LPCWSTR *)(local_8 + local_14 * 4));
              if ((iVar1 == 0) ||
                 (iVar1 = lstrcmpiW(L"/?",*(LPCWSTR *)(local_8 + local_14 * 4)), iVar1 == 0)) {
                *param_5 = *param_5 | 0x10;
                iVar5 = iVar5 + 1;
              }
            }
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while (local_14 < param_1);
  iVar1 = *param_3;
  if (iVar1 == 0) {
    return 0x57;
  }
  if (iVar1 == 2) {
    bVar6 = *param_4 == 0;
  }
  else {
    if (iVar1 != 1) goto LAB_004033b1;
    if ((*param_4 == 0) && ((*param_5 & 0x10) == 0)) {
      return 0x57;
    }
    bVar6 = (*param_5 & 0x2c) == 0;
  }
  if (!bVar6) {
    return 0x57;
  }
LAB_004033b1:
  if ((((byte)*param_5 & 3) != 3) && (iVar5 == param_1 + -1)) {
    return 0;
  }
  return 0x57;
}



/* Function: FUN_00403450 */

void __cdecl FUN_00403450(int param_1,int param_2)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined *_Dst;
  uint uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_54 [4];
  int iStack_50;
  DWORD *local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  undefined1 auStack_34 [40];
  uint local_c;
  
  local_c = DAT_00407080 ^ (uint)auStack_54;
  local_4c = (DWORD *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_3c = 0;
  GetConsoleOutputCP();
  FUN_00406848(auStack_34,0x14,&DAT_004015cc);
  o__wsetlocale(0,auStack_34);
  DVar2 = FUN_00404b50();
  if (DVar2 != 0) {
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      uVar4 = 0x20;
      goto LAB_00403943;
    }
    goto LAB_00403958;
  }
  if (param_1 < 2) {
    FUN_0040678c(DAT_004077c8);
    DVar2 = 0x57;
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0x21,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
LAB_0040396a:
    pwVar6 = DAT_004077bc;
    if ((((local_40 == 3) || (local_40 == 0)) || (pwVar6 = DAT_004077c4, local_40 == 1)) ||
       (pwVar6 = DAT_004077c0, local_40 == 2)) {
      FUN_0040678c(pwVar6);
    }
  }
  else {
    iVar3 = lstrcmpiW(L"/?",*(LPCWSTR *)(param_2 + 4));
    if ((iVar3 == 0) || (iVar3 = lstrcmpiW(L"-?",*(LPCWSTR *)(param_2 + 4)), iVar3 == 0)) {
      FUN_0040678c(DAT_004077bc);
      goto LAB_00403a68;
    }
    DVar2 = FUN_00402e90(param_1,param_2,&local_40,&local_38,&local_3c,&local_4c,&local_48,&local_44
                        );
    if (DVar2 == 0x57) {
      FUN_0040678c(DAT_004077cc);
LAB_004035b5:
      if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
         ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
        uVar4 = 0x22;
LAB_00403943:
        FUN_004028c0(uVar4,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      }
LAB_00403958:
      bVar1 = false;
LAB_0040395a:
      if ((DVar2 == 0x57) && (!bVar1)) goto LAB_0040396a;
    }
    else {
      if (DVar2 != 0) goto LAB_004035b5;
      if ((local_3c & 0x10) == 0) {
        if (local_40 != 1) goto LAB_004037ea;
        if (local_38 != 1) {
          if (local_38 != 2) {
            if (local_38 != 3) {
              if (local_38 == 4) {
                DVar2 = FUN_00402c20();
                if (DVar2 != 0) {
                  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                     ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                    uVar4 = 0x27;
                    goto LAB_00403943;
                  }
                  goto LAB_00403958;
                }
              }
              else {
                if (local_38 != 5) goto LAB_00403963;
                DVar2 = FUN_00404eb0(local_4c,local_48);
                if (DVar2 == 0) {
                  FUN_0040678c(DAT_0040780c);
                  FUN_00404a30();
                }
                if (DAT_00407838 != 0) {
                  FwpmEngineClose0(DAT_00407838);
                }
                if (DVar2 != 0) {
                  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                     ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                    uVar4 = 0x28;
                    goto LAB_00403943;
                  }
                  goto LAB_00403958;
                }
              }
              goto LAB_004037ea;
            }
            DVar2 = NetworkIsolationSetAppContainerConfig(0,0);
            if (DVar2 == 0) goto LAB_004037ea;
            if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
               ((PTR_LOOP_00407000[0x1c] & 1) == 0)) {
              if (DVar2 == 0) goto LAB_004037ea;
            }
            else {
              FUN_004028c0(0x13,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
            }
            if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
               ((PTR_LOOP_00407000[0x1c] & 1) == 0)) goto LAB_00403958;
            uVar4 = 0x26;
            goto LAB_00403943;
          }
          DVar2 = FUN_00402ac0((int)local_4c);
          if (DVar2 != 0) {
            if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
               ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
              uVar4 = 0x25;
              goto LAB_00403943;
            }
            goto LAB_00403958;
          }
LAB_004037ea:
          if (local_40 == 2) {
            if (local_4c == (DWORD *)0x0) {
              DVar2 = 0x57;
              if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                 ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                FUN_004028c0(0x17,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                             *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
              }
            }
            else {
              DVar2 = FUN_00403de0(local_4c,local_3c >> 5 & 1);
              if (DVar2 == 0) {
                FUN_0040678c(DAT_0040780c);
                FUN_00404a30();
                FUN_0040678c(DAT_00407814);
                iVar3 = 5;
                do {
                  Sleep(1000);
                  FUN_0040678c(DAT_00407818);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                FUN_0040678c(DAT_004077e4);
                FUN_004041a0(extraout_ECX);
                FUN_00404650();
              }
              else if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                      ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                FUN_004028c0(0x25,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                             *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
              }
              _Dst = &DAT_00407608;
              iStack_50 = 2;
              do {
                iVar3 = 3;
                do {
                  FwCriticalSectionDestroy(_Dst);
                  FwEmptyWFAddresses(_Dst + 0x1c);
                  memset(_Dst,0,0x44);
                  _Dst = _Dst + 0x44;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                iStack_50 = iStack_50 + -1;
              } while (iStack_50 != 0);
              memset(&DAT_004075e8,0,0x1c4);
              if (DVar2 == 0) goto LAB_00403958;
            }
            if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
               ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
              uVar4 = 0x29;
              goto LAB_00403943;
            }
          }
          goto LAB_00403958;
        }
        DVar2 = FUN_00402940((int)local_4c);
        if (DVar2 == 0x57) {
          bVar1 = true;
          FUN_0040678c(DAT_00407820);
        }
        else {
          if (DVar2 == 0) goto LAB_004037ea;
          bVar1 = false;
        }
        if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
           ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
          FUN_004028c0(0x24,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
        }
        goto LAB_0040395a;
      }
      DVar2 = 0;
      if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
         ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
        FUN_004028c0(0x23,&DAT_004015d4,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      }
    }
LAB_00403963:
    if ((local_3c & 0x10) != 0) goto LAB_0040396a;
  }
  pwVar6 = DAT_00407810;
  if ((DVar2 == 5) || (pwVar6 = DAT_0040781c, DVar2 == 0)) {
    FUN_0040678c(pwVar6);
  }
  else if (DVar2 != 0x57) {
    FUN_0040678c(DAT_004077d0);
  }
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0x11,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  uVar5 = 0;
  do {
    if (*(wchar_t **)((int)&DAT_004077b0 + uVar5) != L"Unable to load string message\n") {
      FwFree(*(wchar_t **)((int)&DAT_004077b0 + uVar5));
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x88);
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0x12,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
LAB_00403a68:
  if (local_44 != 0) {
    FwFree(local_44);
  }
  if (local_4c != (DWORD *)0x0) {
    RtlFreeSid(local_4c);
    local_4c = (DWORD *)0x0;
  }
  if (local_48 != 0) {
    FwFree(local_48);
  }
  FUN_00405960(local_c ^ (uint)auStack_54);
  return;
}



/* Function: FUN_00403ac0 */

void __fastcall
FUN_00403ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,0);
  return;
}



/* Function: FUN_00403af0 */

void __thiscall FUN_00403af0(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

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
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_004017ec,this,pcVar2,pcVar3,0);
  return;
}



/* Function: FUN_00403b50 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00403b50(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_1c;
  uint local_18;
  int local_14;
  int iStack_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puVar5 = (uint *)0x0;
  _local_14 = 0;
  local_c = 0;
  iVar2 = ConvertStringSidToSidW(L"S-1-15-3-1",&local_14);
  if (iVar2 == 0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(10,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
  }
  else {
    iVar2 = ConvertStringSidToSidW(L"S-1-15-3-2",&iStack_10);
    if (iVar2 == 0) {
      GetLastError();
      if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
         ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
        FUN_004028c0(0xb,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      }
    }
    else {
      iVar2 = ConvertStringSidToSidW(L"S-1-15-3-3",&local_c);
      if (iVar2 == 0) {
        GetLastError();
        if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
           ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
          FUN_004028c0(0xc,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
        }
      }
      else {
        iVar2 = NetworkIsolationEnumAppContainers(2,&local_18,&local_1c);
        if (iVar2 == 0) {
          uVar3 = 0;
          if (local_18 != 0) {
            iVar2 = 0;
            do {
              cVar1 = RtlEqualSid(DAT_004075f8,*(undefined4 *)(iVar2 + local_1c));
              if (cVar1 == '\x01') {
                puVar5 = (uint *)(local_1c + 0x14 + uVar3 * 0x2c);
                break;
              }
              uVar3 = uVar3 + 1;
              iVar2 = iVar2 + 0x2c;
            } while (uVar3 < local_18);
          }
          if (uVar3 == local_18) {
            FUN_0040678c(DAT_004077d4);
            if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
               ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
              FUN_004028c0(0xe,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
            }
          }
          else {
            uVar3 = 0;
            do {
              uVar4 = 0;
              if (*puVar5 != 0) {
                do {
                  cVar1 = RtlEqualSid(*(undefined4 *)((int)&local_14 + uVar3),
                                      *(undefined4 *)(puVar5[1] + uVar4 * 8));
                  if (cVar1 == '\x01') {
                    *(undefined4 *)((int)&DAT_004075fc + uVar3) = 1;
                    break;
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 < *puVar5);
              }
              uVar3 = uVar3 + 4;
            } while (uVar3 < 0xc);
            if (DAT_00407600 == 1) {
              DAT_004075fc = 1;
            }
          }
        }
        else if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
          FUN_004028c0(0xd,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
        }
      }
    }
  }
  NetworkIsolationFreeAppContainers(local_1c);
  if (local_14 == 0) {
    LocalFree((HLOCAL)0x0);
  }
  if (iStack_10 == 0) {
    LocalFree((HLOCAL)0x0);
  }
  if (local_c == 0) {
    LocalFree((HLOCAL)0x0);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00403de0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined *_Dst;
  wchar_t *pwVar5;
  int iVar6;
  undefined4 *local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  wchar_t local_64 [46];
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  local_a4 = 0;
  pwVar4 = L"Check Network Isolation Tool Debug Session";
  pwVar5 = local_64;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pwVar5 = *(undefined4 *)pwVar4;
    pwVar4 = pwVar4 + 2;
    pwVar5 = pwVar5 + 2;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *ThreadLocalStoragePointer;
  local_b4 = (undefined4 *)0x0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = (undefined4 *)0x0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_84 = 0;
  local_6c = 0;
  *pwVar5 = *pwVar4;
  if (*(int *)(iVar1 + 4) < DAT_00407848) {
    FUN_00405ab4(&DAT_00407848);
    if (DAT_00407848 == -1) {
      _DAT_004075c8 = local_64;
      _DAT_004075cc = 0;
      _DAT_004075d0 = 0;
      _DAT_004075d4 = 18000000;
      _DAT_004075d8 = 0;
      _DAT_004075dc = 0;
      _DAT_004075e0 = 0;
      _DAT_004075e4 = 0;
      FUN_00405a62(&DAT_00407848);
    }
  }
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0xf,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  memset(&DAT_004075e8,0,0x1c4);
  _Dst = &DAT_00407608;
  iVar1 = 2;
  do {
    iVar6 = 3;
    do {
      iVar2 = iVar6;
      memset(_Dst,0,0x44);
      FwCriticalSectionCreate(_Dst);
      _Dst = _Dst + 0x44;
      iVar6 = iVar2 + -1;
    } while (iVar6 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_004075f4 = param_2;
  DAT_004075f8 = param_1;
  iVar1 = FUN_00403b50();
  if (iVar1 == 0) {
    iVar1 = FwpmEngineOpen0(0,10,0,&DAT_004075b8,&DAT_004075e8);
    if (iVar1 == 0) {
      local_b4 = &local_9c;
      uStack_8c = 1;
      local_88 = &local_80;
      local_80 = _DAT_00401298;
      uStack_7c = _UNK_0040129c;
      uStack_78 = _UNK_004012a0;
      uStack_74 = _UNK_004012a4;
      uStack_70 = 0;
      local_6c = 0x700000003;
      iVar1 = FwpmNetEventSubscribe4(DAT_004075e8,&local_b4,FUN_004042c0,0,&DAT_004075f0);
      if (iVar1 == 0) {
        local_6c = CONCAT44(8,(undefined4)local_6c);
        iVar1 = FwpmNetEventSubscribe4(DAT_004075e8,&local_b4,FUN_004042c0,0,&DAT_004075ec);
        if (iVar1 == 0) {
          iVar1 = FwpmEngineGetOption0(DAT_004075e8,1,&DAT_004077a0);
          if (iVar1 == 0) {
            iVar1 = FwpmEngineGetOption0(DAT_004075e8,1,&local_84);
            if (iVar1 == 0) {
              *(uint *)(local_84 + 4) = *(uint *)(local_84 + 4) | 0x1c;
              iVar1 = FwpmEngineSetOption0(DAT_004075e8,1,local_84);
              if (iVar1 == 0) {
                _DAT_004077a8 = 1;
                goto LAB_004040fa;
              }
              uVar3 = extraout_ECX_05;
              if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                 ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                iVar2 = 0x16;
                goto LAB_004040d8;
              }
            }
            else {
              uVar3 = extraout_ECX_04;
              if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
                 ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
                iVar2 = 0x15;
                goto LAB_004040d8;
              }
            }
          }
          else {
            uVar3 = extraout_ECX_03;
            if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
               ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
              iVar2 = 0x14;
              goto LAB_004040d8;
            }
          }
        }
        else {
          uVar3 = extraout_ECX_02;
          if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
             ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
            iVar2 = 0x13;
            goto LAB_004040d8;
          }
        }
      }
      else {
        uVar3 = extraout_ECX_01;
        if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
           ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
          iVar2 = 0x12;
          goto LAB_004040d8;
        }
      }
    }
    else {
      uVar3 = extraout_ECX_00;
      if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
         ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
        iVar2 = 0x11;
        goto LAB_004040d8;
      }
    }
  }
  else {
    uVar3 = extraout_ECX;
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      iVar2 = iVar2 + 0xf;
LAB_004040d8:
      FUN_004028c0(iVar2,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      uVar3 = extraout_ECX_06;
    }
  }
  FUN_004041a0(uVar3);
LAB_004040fa:
  if (local_84 != 0) {
    FwpmFreeMemory0(&local_84);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004041a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004041a0(undefined4 param_1)

{
  int iVar1;
  
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0x17,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  _DAT_004077a8 = 0;
  if (DAT_004077a0 != 0) {
    iVar1 = FwpmEngineSetOption0(DAT_004075e8,1,DAT_004077a0,param_1);
    if (iVar1 != 0) {
      if ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) {
        return;
      }
      if ((PTR_LOOP_00407000[0x1c] & 1) != 0) {
        FUN_004028c0(0x18,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      }
      goto LAB_00404261;
    }
    FwpmFreeMemory0(&DAT_004077a0);
  }
  FwpmNetEventUnsubscribe0(DAT_004075e8,DAT_004075ec);
  FwpmNetEventUnsubscribe0(DAT_004075e8,DAT_004075f0);
  FwpmEngineClose0(DAT_004075e8);
LAB_00404261:
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0x19,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  return;
}



/* Function: FUN_00404290 */

undefined4 FUN_00404290(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return 0;
}



/* Function: FUN_004042c0 */

void FUN_004042c0(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  void *this;
  int unaff_ESI;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined *puStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_00407080 ^ (uint)&puStack_58;
  local_50 = 0;
  iVar6 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(param_2 + 0x68) == 7) {
    local_50 = 0;
    iVar6 = **(int **)(param_2 + 0x6c);
  }
  else if (*(int *)(param_2 + 0x68) == 8) {
    local_50 = 1;
    iVar6 = **(int **)(param_2 + 0x6c);
  }
  else {
    FUN_004055df();
  }
  cVar2 = RtlEqualSid(DAT_004075f8,*(undefined4 *)(param_2 + 0x4c));
  if ((cVar2 == '\0') &&
     ((DAT_004075f4 != 1 ||
      (cVar2 = RtlIsParentOfChildAppContainer(DAT_004075f8,*(undefined4 *)(param_2 + 0x4c)),
      cVar2 == '\0')))) {
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0x1c,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      FUN_00405960(uStack_1c ^ (uint)&stack0xffffffa0);
      return;
    }
    goto LAB_00404632;
  }
  puVar1 = puStack_58;
  if (*(int *)(param_2 + 0xc) == 0) {
    local_50 = *(undefined4 *)(param_2 + 0x24);
    puStack_58 = &DAT_00407608 + (iVar6 + (int)puStack_58 * 3) * 0x44;
    uStack_4c = local_50;
    FwCriticalSectionEnter(puStack_58);
    piVar8 = &iStack_54;
    uVar3 = FwArrayAppend(8,FUN_004028f0,unaff_ESI + 0x2c,piVar8);
    iVar4 = FwHResultToWindowsError(uVar3);
    if (((iVar4 == 0) || ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000)) ||
       ((PTR_LOOP_00407000[0x1c] & 1) == 0)) {
      FwCriticalSectionLeave(piVar8);
      if (iStack_54 == 0) goto LAB_0040458a;
    }
    else {
      FUN_004028c0(0x1a,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      FwCriticalSectionLeave(piVar8);
    }
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0x1d,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      FUN_00405960(uStack_1c ^ (uint)&stack0xffffffa0);
      return;
    }
    goto LAB_00404632;
  }
  if (*(int *)(param_2 + 0xc) == 1) {
    local_48 = *(undefined8 *)(param_2 + 0x24);
    local_40 = *(undefined4 *)(param_2 + 0x2c);
    uStack_3c = *(undefined4 *)(param_2 + 0x30);
    uStack_38 = *(undefined4 *)(param_2 + 0x24);
    uStack_34 = *(undefined4 *)(param_2 + 0x28);
    local_30 = *(undefined4 *)(param_2 + 0x2c);
    uStack_2c = *(undefined4 *)(param_2 + 0x30);
    puStack_58 = &DAT_00407608 + (iVar6 + (int)puStack_58 * 3) * 0x44;
    FwCriticalSectionEnter(puStack_58);
    puVar9 = &uStack_4c;
    uVar3 = FwArrayAppend(0x20,FUN_00404290,unaff_ESI + 0x3c,puVar9);
    iVar4 = FwHResultToWindowsError(uVar3);
    if (((iVar4 == 0) || ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000)) ||
       ((PTR_LOOP_00407000[0x1c] & 1) == 0)) {
      FwCriticalSectionLeave(puVar9);
      if (iStack_54 == 0) goto LAB_0040458a;
    }
    else {
      FUN_004028c0(0x1b,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      FwCriticalSectionLeave(puVar9);
    }
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0x1e,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      FUN_00405960(uStack_1c ^ (uint)&stack0xffffffa0);
      return;
    }
  }
  else {
LAB_0040458a:
    if (iVar6 == 2) {
      if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
         ((PTR_LOOP_00407000[0x1c] & 4) == 0)) goto LAB_00404632;
      pcVar5 = "Allow";
      if (puVar1 != (undefined *)0x1) {
        pcVar5 = "Drop";
      }
      uVar3 = *(undefined4 *)(PTR_LOOP_00407000 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_00407000 + 0x10);
      this = (void *)0x1f;
    }
    else if (iVar6 == 0) {
      if (((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000) ||
         ((PTR_LOOP_00407000[0x1c] & 4) == 0)) goto LAB_00404632;
      pcVar5 = "Allow";
      if (puVar1 != (undefined *)0x1) {
        pcVar5 = "Drop";
      }
      uVar3 = *(undefined4 *)(PTR_LOOP_00407000 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_00407000 + 0x10);
      this = (void *)0x20;
    }
    else {
      if (((iVar6 != 1) || ((undefined **)PTR_LOOP_00407000 == &PTR_LOOP_00407000)) ||
         ((PTR_LOOP_00407000[0x1c] & 4) == 0)) goto LAB_00404632;
      pcVar5 = "Allow";
      if (puVar1 != (undefined *)0x1) {
        pcVar5 = "Drop";
      }
      uVar3 = *(undefined4 *)(PTR_LOOP_00407000 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_00407000 + 0x10);
      this = (void *)0x21;
    }
    FUN_00403af0(this,uVar7,uVar3,pcVar5);
  }
LAB_00404632:
  FUN_00405960(uStack_1c ^ (uint)&stack0xffffffa0);
  return;
}



/* Function: FUN_00404650 */

void FUN_00404650(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  wchar_t *pwVar8;
  undefined *local_dc;
  uint local_d8;
  undefined *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0 [4];
  undefined1 local_b0 [116];
  undefined1 local_3c [40];
  uint local_14;
  
  local_14 = DAT_00407080 ^ (uint)&stack0xfffffff0;
  local_c0[1] = 3;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_d4 = &DAT_00407608;
  local_dc = (undefined *)0x0;
  local_c0[0] = 3;
  do {
    local_d8 = 2;
    bVar1 = false;
    puVar6 = local_d4;
    do {
      FwCriticalSectionEnter(puVar6);
      if ((bVar1) || (iVar2 = IsAddressesEmpty(puVar6 + 0x1c), iVar2 == 0)) {
        bVar1 = true;
      }
      FwCriticalSectionLeave(puVar6);
      puVar6 = puVar6 + 0xcc;
      local_d8 = local_d8 + -1;
    } while (local_d8 != 0);
    iVar2 = *(int *)((int)&DAT_004075fc + (int)local_dc);
    if (bVar1) {
      iVar3 = iVar2;
      if (iVar2 != 0) {
joined_r0x0040471a:
        if (iVar2 != 1) goto LAB_0040471c;
      }
    }
    else {
      if (!bVar1) {
        iVar3 = 2;
        goto joined_r0x0040471a;
      }
LAB_0040471c:
      iVar3 = 3;
    }
    *(int *)((int)local_c0 + (int)local_dc + 4) = iVar3;
    local_dc = (undefined *)((int)local_dc + 4);
    local_d4 = local_d4 + 0x44;
    local_c0[0] = local_c0[0] + -1;
    if (local_c0[0] == 0) {
      FUN_0040678c(DAT_004077f8);
      uVar7 = 0;
      do {
        if (*(int *)((int)local_c0 + uVar7 + 4) != 3) {
          FUN_0040678c(DAT_004077fc);
        }
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0xc);
      FUN_0040678c(DAT_00407800);
      local_d8 = 0;
      do {
        iVar2 = local_c0[local_d8 + 1];
        if (iVar2 != 3) {
          FUN_0040678c(DAT_00407804);
          FUN_0040678c(DAT_00407808);
          uVar7 = 0;
          do {
            iVar3 = local_d8 + uVar7 * 3;
            iVar4 = IsAddressesEmpty(&DAT_00407624 + iVar3 * 0x44);
            if (iVar4 == 0) {
              if ((iVar2 == 1) && (uVar7 == 0)) {
                local_dc = &DAT_00407608 + iVar3 * 0x44;
                FwCriticalSectionEnter(local_dc);
                FUN_0040678c(DAT_004077f4);
              }
              else {
                local_dc = &DAT_00407608 + iVar3 * 0x44;
                FwCriticalSectionEnter(local_dc);
              }
              iVar4 = *(int *)(iVar3 * 0x44 + 0x407634);
              local_c0[0] = 0;
              if (iVar4 != 0) {
                local_d4 = (undefined *)0x0;
                if (iVar4 != 0) {
                  do {
                    if (((uint)local_d4 & 3) == 0) {
                      pwVar8 = DAT_004077dc;
                      if (local_d4 == (undefined *)0x0) {
                        pwVar8 = DAT_004077d8;
                      }
                      FUN_0040678c(pwVar8);
                    }
                    local_c0[0] = Ordinal_8(*(undefined4 *)
                                             (*(int *)(iVar3 * 0x44 + 0x407638) + (int)local_d4 * 8)
                                           );
                    RtlIpv4AddressToStringW(local_c0,local_3c);
                    FUN_0040678c(DAT_004077e0);
                    local_d4 = (undefined *)((int)local_d4 + 1);
                  } while (local_d4 < *(uint *)(iVar3 * 0x44 + 0x407634));
                }
                FUN_0040678c(L"\n");
              }
              iVar4 = *(int *)(iVar3 * 0x44 + 0x407644);
              local_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              if (iVar4 != 0) {
                local_d4 = (undefined *)0x0;
                if (iVar4 != 0) {
                  do {
                    if (((uint)local_d4 & 1) == 0) {
                      pwVar8 = DAT_004077ec;
                      if (local_d4 == (undefined *)0x0) {
                        pwVar8 = DAT_004077e8;
                      }
                      FUN_0040678c(pwVar8);
                    }
                    puVar5 = (undefined4 *)
                             ((int)local_d4 * 0x20 + *(int *)(iVar3 * 0x44 + 0x407648));
                    local_d0 = *puVar5;
                    uStack_cc = puVar5[1];
                    uStack_c8 = puVar5[2];
                    uStack_c4 = puVar5[3];
                    RtlIpv6AddressToStringW(&local_d0,local_b0);
                    FUN_0040678c(DAT_004077f0);
                    local_d4 = (undefined *)((int)local_d4 + 1);
                  } while (local_d4 < *(uint *)(iVar3 * 0x44 + 0x407644));
                }
                FUN_0040678c(DAT_004077e4);
              }
              FwCriticalSectionLeave(local_dc);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < 2);
          FUN_0040678c(DAT_004077e4);
        }
        local_d8 = local_d8 + 1;
      } while (local_d8 < 3);
      FUN_00405960(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}



/* Function: FUN_00404a00 */

undefined4 FUN_00404a00(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    SetEvent(DAT_004077a4);
  }
  return 1;
}



/* Function: FUN_00404a30 */

DWORD FUN_00404a30(void)

{
  HANDLE hHandle;
  DWORD DVar1;
  BOOL BVar2;
  
  hHandle = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  if (hHandle == (HANDLE)0x0) {
    DVar1 = GetLastError();
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
      FUN_004028c0(0x22,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
  }
  else {
    DAT_004077a4 = hHandle;
    BVar2 = SetConsoleCtrlHandler(FUN_00404a00,1);
    if (BVar2 == 0) {
      DVar1 = GetLastError();
      if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
         ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
        FUN_004028c0(0x23,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
      }
    }
    else {
      DVar1 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
      if (DVar1 == 0xffffffff) {
        DVar1 = GetLastError();
        if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
           ((PTR_LOOP_00407000[0x1c] & 1) != 0)) {
          FUN_004028c0(0x24,&DAT_004017ec,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
        }
      }
      else {
        if (DVar1 != 0) {
          FUN_004055df();
        }
        SetConsoleCtrlHandler((PHANDLER_ROUTINE)0x0,0);
      }
    }
  }
  if (DAT_004077a4 != (HANDLE)0x0) {
    CloseHandle(DAT_004077a4);
  }
  DAT_004077a4 = (HANDLE)0x0;
  return DVar1;
}



/* Function: FUN_00404b50 */

int FUN_00404b50(void)

{
  UINT UVar1;
  uint uVar2;
  HMODULE hInstance;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  uint uVar6;
  LPWSTR pWVar7;
  UINT uID;
  LPWSTR lpBuffer;
  int local_c;
  uint local_8;
  
  if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
     ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
    FUN_00403ac0(0xf,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
  }
  local_c = 0;
  local_8 = 0;
  ppuVar4 = (undefined **)PTR_LOOP_00407000;
  do {
    UVar1 = *(UINT *)((int)&DAT_004070d0 + local_8);
    if ((ppuVar4 != &PTR_LOOP_00407000) && (((uint)ppuVar4[7] & 8) != 0)) {
      FUN_00403ac0(10,&DAT_0040183c,ppuVar4[4],ppuVar4[5]);
    }
    pWVar7 = (LPWSTR)0x0;
    uVar6 = 0x40;
    do {
      FwFree(pWVar7);
      uVar2 = uVar6 * 2;
      if (0x2000 < uVar2) {
        iVar3 = 0x216;
        ppuVar4 = (undefined **)PTR_LOOP_00407000;
        goto LAB_00404cce;
      }
      pWVar7 = (LPWSTR)FwAlloc(uVar6 << 2);
      if (pWVar7 == (LPWSTR)0x0) {
        if ((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) {
          if ((PTR_LOOP_00407000[0x1c] & 1) != 0) {
            uVar5 = 0xb;
LAB_00404c77:
            FUN_004028c0(uVar5,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
          }
LAB_00404c8c:
          if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
             ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
            FUN_00403ac0(0xe,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
          }
        }
LAB_00404cb3:
        ppuVar4 = (undefined **)PTR_LOOP_00407000;
        *(wchar_t **)((int)&DAT_004077b0 + local_8) = L"Unable to load string message\n";
        iVar3 = 0;
        goto LAB_00404cce;
      }
      uID = UVar1;
      lpBuffer = pWVar7;
      uVar6 = uVar2;
      hInstance = GetModuleHandleW((LPCWSTR)0x0);
      iVar3 = LoadStringW(hInstance,uID,lpBuffer,uVar6);
      if (iVar3 == 0) {
        GetLastError();
        if ((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) {
          if ((PTR_LOOP_00407000[0x1c] & 1) != 0) {
            uVar5 = 0xc;
            goto LAB_00404c77;
          }
          goto LAB_00404c8c;
        }
        goto LAB_00404cb3;
      }
      uVar6 = uVar2;
    } while (iVar3 + 1U == uVar2);
    *(LPWSTR *)((int)&DAT_004077b0 + local_8) = pWVar7;
    if (((undefined **)PTR_LOOP_00407000 != &PTR_LOOP_00407000) &&
       ((PTR_LOOP_00407000[0x1c] & 8) != 0)) {
      FUN_00403ac0(0xd,&DAT_0040183c,*(undefined4 *)(PTR_LOOP_00407000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00407000 + 0x14));
    }
    iVar3 = 0;
    ppuVar4 = (undefined **)PTR_LOOP_00407000;
LAB_00404cce:
    if (iVar3 == 0) {
      iVar3 = local_c;
    }
    local_8 = local_8 + 4;
    local_c = iVar3;
    if (0x87 < local_8) {
      if ((ppuVar4 != &PTR_LOOP_00407000) && (((uint)ppuVar4[7] & 8) != 0)) {
        FUN_00403ac0(0x10,&DAT_0040183c,ppuVar4[4],ppuVar4[5]);
      }
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_00404d30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404d30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00407840;
  _DAT_00407844 = param_1;
  LOCK();
  DAT_00407840 = DAT_00407840 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404d50 */

void FUN_00404d50(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00407588;
  if (DAT_00407588 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404d90 */

void __fastcall FUN_00404d90(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004075a8;
  if (DAT_004075a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00407580;
  if (DAT_00407580 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(param_1);
    (*pcVar1)();
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00404d50(1);
  }
  FUN_00404d50(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404e50 */

void __fastcall FUN_00404e50(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00406ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405240(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404ea0 */

void FUN_00404ea0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00404eb0(DWORD *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  DWORD DVar4;
  FILE *pFVar5;
  wchar_t *pwVar6;
  void *unaff_retaddr;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  wchar_t *local_144;
  undefined *local_138;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  wchar_t *pwStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  PSECURITY_DESCRIPTOR local_90;
  undefined1 local_8c [24];
  undefined4 local_74;
  undefined8 local_5c;
  undefined8 local_54;
  DWORD local_48;
  WORD local_44 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  DWORD *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00407080 ^ (uint)&stack0xfffffffc;
  memset(local_8c,0,0x30);
  local_bc = 0;
  local_98 = 0;
  local_154 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  pwStack_ac = (wchar_t *)0x0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  memset(&uStack_150,0,0x94);
  local_90 = (PSECURITY_DESCRIPTOR)0x0;
  local_94 = 0;
  local_5c = 0;
  local_54 = 0;
  local_44[0] = 0;
  local_48 = 0;
  if ((param_2 == 0) && (param_1 == (DWORD *)0x0)) goto LAB_004051ca;
  local_74 = 1;
  iVar1 = FwpmEngineOpen0(0,0xffffffff,0,local_8c,&DAT_00407838);
  if (iVar1 != 0) {
    FUN_00404e50(unaff_retaddr);
    goto LAB_004051ca;
  }
  pwStack_ac = L"Allow AC loopback Inbound";
  local_bc = _DAT_00407158;
  uStack_b8 = uRam0040715c;
  uStack_b4 = uRam00407160;
  uStack_b0 = uRam00407164;
  iVar1 = FwpmProviderAdd0(DAT_00407838,&local_bc,0);
  pwVar6 = DAT_00407824;
  if (iVar1 != 0) goto LAB_004051b1;
  if (param_2 == 0) {
LAB_004050c8:
    if (param_1 == (DWORD *)0x0) goto LAB_004051ca;
    local_30 = 0;
    local_2c = 0xd;
    local_40 = _DAT_00401278;
    uStack_3c = _UNK_0040127c;
    uStack_38 = _UNK_00401280;
    uStack_34 = _UNK_00401284;
    local_28 = param_1;
LAB_004050f0:
    local_108 = &local_54;
    local_14 = 6;
    local_100 = &local_40;
    local_24 = _DAT_00401288;
    uStack_20 = _UNK_0040128c;
    uStack_1c = _UNK_00401290;
    uStack_18 = _UNK_00401294;
    local_154 = _DAT_00401910;
    uStack_150 = _UNK_00401914;
    uStack_14c = _UNK_00401918;
    uStack_148 = _UNK_0040191c;
    local_10 = 3;
    local_12c = _DAT_00401258;
    uStack_128 = _UNK_0040125c;
    uStack_124 = _UNK_00401260;
    uStack_120 = _UNK_00401264;
    local_c = 1;
    local_144 = L"Allow inbound AppContainer loopback";
    local_10c = 4;
    local_54 = 0xffffffffffffffff;
    local_104 = 2;
    local_138 = &DAT_00407158;
    local_11c = _DAT_00401900;
    uStack_118 = _UNK_00401904;
    uStack_114 = _UNK_00401908;
    uStack_110 = _UNK_0040190c;
    local_fc = 0x1002;
    iVar1 = FwpmFilterAdd0(DAT_00407838,&local_154,0,&local_5c);
    pwVar6 = DAT_00407834;
    if (iVar1 == 0) goto LAB_004051ca;
  }
  else {
    uVar2 = FwCreateSDDLStringFromPackageFamilyName(param_2,&local_94);
    iVar1 = FwHResultToWindowsError(uVar2);
    if (iVar1 != 0) goto LAB_004050c8;
    iVar1 = ConvertStringSecurityDescriptorToSecurityDescriptorW(local_94,1,&local_90,0);
    if (iVar1 != 0) {
      BVar3 = IsValidSecurityDescriptor(local_90);
      pwVar6 = DAT_0040782c;
      if (BVar3 == 0) {
        pFVar5 = (FILE *)o___acrt_iob_func(1);
        FUN_0040676b(pFVar5,pwVar6);
        goto LAB_004051ca;
      }
      BVar3 = GetSecurityDescriptorControl(local_90,local_44,&local_48);
      if (BVar3 == 0) {
        GetLastError();
        pwVar6 = DAT_00407830;
        goto LAB_004051b1;
      }
      DVar4 = GetSecurityDescriptorLength(local_90);
      local_30 = 0;
      local_40 = _DAT_00401268;
      uStack_3c = _UNK_0040126c;
      uStack_38 = _UNK_00401270;
      uStack_34 = _UNK_00401274;
      local_2c = 0xe;
      local_28 = (DWORD *)o_malloc(8);
      *local_28 = DVar4;
      local_28[1] = (DWORD)local_90;
      goto LAB_004050f0;
    }
    GetLastError();
    pwVar6 = DAT_00407828;
  }
LAB_004051b1:
  pFVar5 = (FILE *)o___acrt_iob_func(1);
  FUN_0040676b(pFVar5,pwVar6);
LAB_004051ca:
  if (local_90 != (HLOCAL)0x0) {
    LocalFree(local_90);
  }
  if (local_94 != 0) {
    FwFree(local_94);
  }
  FUN_00405960(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405210 */

void __fastcall FUN_00405210(void *param_1)

{
  FUN_004052a0(param_1);
  return;
}



/* Function: FUN_00405240 */

uint __thiscall FUN_00405240(void *this)

{
  uint in_stack_00000014;
  
  if (0 < (int)in_stack_00000014) {
    in_stack_00000014 = in_stack_00000014 & 0xffff | 0x80070000;
  }
  FUN_00402460(in_stack_00000014);
  FUN_00405210(this);
  return in_stack_00000014;
}



/* Function: FUN_004052a0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004052a0(void *this)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  int extraout_EDX;
  int *in_stack_00000014;
  undefined4 local_1480;
  uint local_147c;
  int local_1478;
  int local_1474;
  int local_1470;
  undefined4 local_146c;
  DWORD local_1468;
  undefined4 local_1464;
  undefined4 local_1460;
  char *local_145c;
  undefined4 local_1458;
  int local_1454;
  undefined4 local_1450;
  undefined8 local_144c;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  undefined4 uStack_143c;
  undefined4 uStack_1438;
  undefined4 local_1434;
  void *local_142c;
  WCHAR local_1428 [2048];
  undefined1 local_428 [1028];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_00406b10;
  local_1c = ExceptionList;
  uVar3 = DAT_00407080 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_144c = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  uStack_143c = 0;
  uStack_1438 = 0;
  local_14 = 0;
  local_1428[0] = L'\0';
  local_428[0] = 0;
  local_1478 = *in_stack_00000014;
  local_1474 = in_stack_00000014[1];
  local_24 = uVar3;
  local_1454 = FUN_00404d30(local_1478);
  local_147c = 0;
  local_1480 = 1;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_147c = 8;
  }
  LOCK();
  UNLOCK();
  local_1470 = DAT_0040783c + 1;
  local_146c = 0;
  DAT_0040783c = DAT_0040783c + 1;
  local_1468 = GetCurrentThreadId();
  pcVar1 = DAT_00407590;
  local_145c = "onecore\\net\\mpssvc\\chknetisolation\\cni_inloopback.cpp";
  local_1458 = 0x55;
  local_1464 = 0;
  local_1460 = 0;
  local_1450 = 0;
  uStack_1440 = 0;
  uStack_143c = 0;
  uStack_1438 = 0;
  local_144c = 0;
  uStack_1444 = 0;
  local_142c = this;
  if (DAT_00407590 == (code *)0x0) {
    local_1434 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004081f8)(uVar3);
    local_1434 = (*pcVar1)();
  }
  pcVar1 = DAT_0040759c;
  if (DAT_0040759c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(&local_1480);
    (*pcVar1)();
  }
  pcVar1 = DAT_00407598;
  if (DAT_00407598 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(&local_1480,local_428,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00407594;
  if (DAT_00407594 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(&local_1480);
    (*pcVar1)();
  }
  pcVar1 = DAT_00407584;
  if ((DAT_00407584 != (code *)0x0) && ((local_147c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004081f8)(&local_1480);
    (*pcVar1)();
  }
  pcVar1 = DAT_004075b0;
  if (-1 < local_1478) {
    FUN_00404ea0();
    goto LAB_004055c8;
  }
  if (DAT_004075ad == '\0') {
    if (DAT_004075b0 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_004081f8)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004054dc;
LAB_004054e5:
    pcVar1 = DAT_004075b4;
    if ((DAT_004075b4 != (code *)0x0) && (DAT_004075a4 == '\0')) {
      (*(code *)PTR_guard_check_icall_004081f8)(&local_1480,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_004054dc:
    pcVar1 = DAT_004075b4;
    if ((local_147c & 2) != 0) goto LAB_004054e5;
    if ((DAT_004075b4 != (code *)0x0) && (DAT_004075a4 == '\0')) {
      (*(code *)PTR_guard_check_icall_004081f8)(&local_1480,local_1428,0x800);
      (*pcVar1)();
    }
    if (local_1428[0] == L'\0') {
      FUN_00401fd0(local_1428,0x800,&local_1480);
    }
    OutputDebugStringW(local_1428);
  }
  pcVar1 = DAT_0040758c;
  if ((((local_147c & 4) != 0) || (DAT_004075ac != '\0')) && (DAT_0040758c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004081f8)();
    (*pcVar1)();
  }
  local_14 = 0xffffffff;
  if ((local_147c & 1) == 0) {
    ExceptionList = local_1c;
    FUN_00405960(local_24 ^ (uint)&stack0xfffffff0);
    return;
  }
LAB_004055c8:
  FUN_00404d90((int)&local_1480);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004055df */

void FUN_004055df(void)

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
      (*(code *)PTR_guard_check_icall_004081f8)(&local_28);
      (*pFVar2)();
    }
  }
  return;
}



/* Function: FUN_0040565a */

void FUN_0040565a(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00401950,DelayLoadFailureHook_exref,param_2,DAT_00401950);
  return;
}



/* Function: FUN_00405690 */

undefined4 FUN_00405690(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004056b5();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004056c1();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004056b5 */

undefined * FUN_004056b5(void)

{
  return &DAT_00407180;
}



/* Function: FUN_004056c1 */

undefined * FUN_004056c1(void)

{
  return &DAT_00407188;
}



/* Function: FUN_004056d0 */

undefined4 FUN_004056d0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004056b5();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004056c1();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00405700 */

void FUN_00405700(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_00405eea();
  o__set_fmode(uVar3);
  uVar3 = FUN_00405ee1();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0040617c();
    FUN_00405e14(FUN_004061b0);
    uVar3 = FUN_00405ed7();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00405ef6();
      guard_check_icall();
      guard_check_icall();
      FUN_00405f11();
      uVar3 = FUN_00405ee1();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00405f08();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00405ee1();
      iVar5 = thunk_FUN_00405ee1();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00405f84();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004057a0 */

undefined4 FUN_004057a0(void)

{
  FUN_00405f49();
  return 0;
}



/* Function: FUN_004057b0 */

void FUN_004057b0(void)

{
  undefined4 uVar1;
  
  FUN_004060f4();
  uVar1 = FUN_00405ee1();
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
    if (DAT_004071b8 != 1) {
      if (DAT_004071b8 == 0) {
        DAT_004071b8 = 1;
        iVar4 = initterm_e(&DAT_00401110,&DAT_00401128);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401100,&DAT_0040110c);
        DAT_004071b8 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00405f6c();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_004081f8)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00405f78();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      piVar5 = (int *)o___p___wargv();
      iVar4 = *piVar5;
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_00403450(*piVar5,iVar4);
      uVar6 = FUN_004060ac();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040593b;
    }
  }
  FUN_00405f84();
LAB_0040593b:
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



/* Function: FUN_00405960 */

void __fastcall FUN_00405960(int param_1)

{
  if (param_1 == DAT_00407080) {
    return;
  }
  FUN_004062b7();
  return;
}



/* Function: FUN_00405980 */

undefined4 FUN_00405980(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  __scrt_initialize_thread_safe_statics_platform_specific();
  uVar2 = ___scrt_initialize_onexit_tables(0);
  if ((char)uVar2 != '\0') {
    FUN_00405e14(FUN_00405a40);
    return 0;
  }
  FUN_00405f84();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: __scrt_initialize_thread_safe_statics_platform_specific */

/* Library Function - Single Match
    void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_00407198,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule != (HMODULE)0x0) ||
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule != (HMODULE)0x0)) {
    pFVar2 = GetProcAddress(hModule,"SleepConditionVariableCS");
    pFVar3 = GetProcAddress(hModule,"WakeAllConditionVariable");
    if (((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) ||
       (DAT_00407194 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0),
       pFVar2 = DAT_004071b0, pFVar3 = DAT_004071b4, DAT_00407194 != (HANDLE)0x0)) {
      DAT_004071b4 = pFVar3;
      DAT_004071b0 = pFVar2;
      return;
    }
  }
  FUN_00405f84();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405a40 */

void FUN_00405a40(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
  if (DAT_00407194 != (HANDLE)0x0) {
    CloseHandle(DAT_00407194);
  }
  return;
}



/* Function: FUN_00405a62 */

void FUN_00405a62(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
  DAT_00407040 = DAT_00407040 + 1;
  *param_1 = DAT_00407040;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_00407040;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
  FUN_00405b0b();
  return;
}



/* Function: FUN_00405ab4 */

void __cdecl FUN_00405ab4(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_00405afa:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_00407040;
      goto LAB_00405afa;
    }
    FUN_00405b49();
  } while( true );
}



/* Function: FUN_00405b0b */

void FUN_00405b0b(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_004071b4;
  if (DAT_004071b4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(&DAT_00407190);
    (*pcVar1)();
    return;
  }
  SetEvent(DAT_00407194);
  ResetEvent(DAT_00407194);
  return;
}



/* Function: FUN_00405b49 */

void FUN_00405b49(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_004071b0;
  if (DAT_004071b0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004081f8)(&DAT_00407190,&DAT_00407198,0xffffffff);
    (*pcVar1)();
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
  WaitForSingleObjectEx(DAT_00407194,100,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00407198);
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
      if (DAT_004071bc != 0) {
        uVar3 = DAT_004071bc;
        uVar1 = DAT_004071bc;
      }
      DAT_004071bc = uVar1;
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
    DAT_004071d9 = 1;
  }
  FUN_004063b9();
  cVar1 = FUN_00405f08();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00405f08();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00405f08();
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
  
  if (DAT_004071d8 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00405f84();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_004071c0 = 0xffffffff;
    _DAT_004071c4 = 0xffffffff;
    _DAT_004071c8 = 0xffffffff;
    _DAT_004071cc = 0xffffffff;
    _DAT_004071d0 = 0xffffffff;
    _DAT_004071d4 = 0xffffffff;
LAB_00405cd5:
    DAT_004071d8 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_004071c0);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_004071cc);
      if (uVar3 == 0) goto LAB_00405cd5;
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
  iVar1 = DAT_004071bc;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_004071bc = 0;
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
  if ((DAT_004071d9 == '\0') || (param_2 == '\0')) {
    FUN_00405f08();
    FUN_00405f08();
  }
  return 1;
}



/* Function: FUN_00405dde */

undefined4 __cdecl FUN_00405dde(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_004071c0 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_004071c0,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_00405e14 */

int __cdecl FUN_00405e14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00405dde(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00405e31 */

uint FUN_00405e31(void)

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
  if ((DAT_00407080 == 0xbb40e64e) || ((DAT_00407080 & 0xffff0000) == 0)) {
    DAT_00407080 = FUN_00405e31();
    if (DAT_00407080 == 0xbb40e64e) {
      DAT_00407080 = 0xbb40e64f;
    }
    else if ((DAT_00407080 & 0xffff0000) == 0) {
      DAT_00407080 = DAT_00407080 | (DAT_00407080 | 0x4711) << 0x10;
    }
  }
  DAT_004070c0 = ~DAT_00407080;
  return;
}



/* Function: FUN_00405ed7 */

undefined4 FUN_00405ed7(void)

{
  return 1;
}



/* Function: FUN_00405ee1 */

undefined4 FUN_00405ee1(void)

{
  return 0;
}



/* Function: FUN_00405eea */

undefined4 FUN_00405eea(void)

{
  return 0x4000;
}



/* Function: FUN_00405ef6 */

void FUN_00405ef6(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_004071e0);
  return;
}



/* Function: FUN_00405f08 */

undefined1 FUN_00405f08(void)

{
  return 1;
}



/* Function: FUN_00405f11 */

void FUN_00405f11(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00405f84();
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



/* Function: FUN_00405f49 */

void FUN_00405f49(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004056b5();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004056c1();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00405f6c */

undefined * FUN_00405f6c(void)

{
  return &DAT_00407850;
}



/* Function: FUN_00405f78 */

undefined * FUN_00405f78(void)

{
  return &DAT_0040784c;
}



/* Function: FUN_00405f84 */

void FUN_00405f84(void)

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
  FUN_0040616e();
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
    FUN_0040616e();
  }
  return;
}



/* Function: thunk_FUN_00405ee1 */

undefined4 thunk_FUN_00405ee1(void)

{
  return 0;
}



/* Function: FUN_004060ac */

uint FUN_004060ac(void)

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



/* Function: FUN_004060f4 */

void FUN_004060f4(void)

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



/* Function: FUN_0040616e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040616e(void)

{
  _DAT_004071e8 = 0;
  return;
}



/* Function: FUN_0040617c */

/* WARNING: Removing unreachable block (ram,0x0040618e) */
/* WARNING: Removing unreachable block (ram,0x0040618f) */
/* WARNING: Removing unreachable block (ram,0x00406195) */
/* WARNING: Removing unreachable block (ram,0x0040619f) */
/* WARNING: Removing unreachable block (ram,0x004061a6) */

void FUN_0040617c(void)

{
  return;
}



/* Function: FUN_004061b0 */

/* WARNING: Removing unreachable block (ram,0x004061c2) */
/* WARNING: Removing unreachable block (ram,0x004061c3) */
/* WARNING: Removing unreachable block (ram,0x004061c9) */
/* WARNING: Removing unreachable block (ram,0x004061d3) */
/* WARNING: Removing unreachable block (ram,0x004061da) */

void FUN_004061b0(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00407080 ^ (uint)&param_2;
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
  
  iVar1 = FUN_004069b2(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00407080,FUN_00405960,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00406287 */

void __cdecl FUN_00406287(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_004062b7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004062b7(void)

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
  _DAT_004072e8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_004072f0 = (undefined4)uVar9;
  _DAT_00407300 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00407304 = &stack0x00000004;
  _DAT_00407240 = 0x10001;
  _DAT_004071f0 = 0xc0000409;
  _DAT_004071f4 = 1;
  _DAT_00407200 = 1;
  DAT_00407204 = 2;
  _DAT_004071fc = unaff_retaddr;
  _DAT_004072cc = in_GS;
  _DAT_004072d0 = in_FS;
  _DAT_004072d4 = in_ES;
  _DAT_004072d8 = in_DS;
  _DAT_004072dc = unaff_EDI;
  _DAT_004072e0 = unaff_ESI;
  _DAT_004072e4 = unaff_EBX;
  _DAT_004072ec = uVar3;
  _DAT_004072f4 = unaff_EBP;
  DAT_004072f8 = unaff_retaddr;
  _DAT_004072fc = in_CS;
  _DAT_00407308 = in_SS;
  FUN_00406287((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_004063b9 */

/* WARNING: Removing unreachable block (ram,0x0040642a) */
/* WARNING: Removing unreachable block (ram,0x004063ee) */
/* WARNING: Removing unreachable block (ram,0x004064a2) */

undefined4 FUN_004063b9(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_00407510 = 0;
  DAT_004070c4 = DAT_004070c4 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_004070c4;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00407514 = DAT_00407514 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00407514 = DAT_00407514 | 2;
      }
    }
    DAT_00407510 = 1;
    uVar5 = DAT_004070c4 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_004070c4 | 6;
      DAT_00407510 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00407510 = 3;
        uVar5 = DAT_004070c4 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_00407510 = 5;
          uVar5 = DAT_004070c4 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_004070c4 = DAT_004070c4 | 0x6e;
            DAT_00407510 = 6;
            uVar5 = DAT_004070c4;
          }
        }
      }
    }
  }
  DAT_004070c4 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_004070c8 != 0;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@004065f0 */

void Unwind_004065f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___acrt_iob_func */

void __cdecl o___acrt_iob_func(void)

{
                    /* WARNING: Could not recover jumptable at 0x004065fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___acrt_iob_func();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___stdio_common_vfwprintf_s */

void __cdecl o___stdio_common_vfwprintf_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vfwprintf_s();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o___stdio_common_vswprintf_s */

void __cdecl o___stdio_common_vswprintf_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf_s();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040668c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004066f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: FID_conflict:__vfprintf_l */

/* Library Function - Multiple Matches With Different Base Names
    __vfprintf_l
    __vfprintf_p_l
    __vfprintf_s_l
    __vfscanf_l
     8 names - too many to list
   
   Library: Visual Studio 2019 Release */

int __cdecl
FID_conflict___vfprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004056b5();
  iVar2 = o___stdio_common_vfwprintf_s(*puVar1,puVar1[1],_File,_Format,_Locale,_ArgList);
  return iVar2;
}



/* Function: FUN_0040676b */

void __cdecl FUN_0040676b(FILE *param_1,wchar_t *param_2)

{
  FID_conflict___vfprintf_l(param_1,param_2,(_locale_t)0x0,&stack0x0000000c);
  return;
}



/* Function: FUN_0040678c */

void __cdecl FUN_0040678c(wchar_t *param_1)

{
  FILE *_File;
  
  _File = (FILE *)o___acrt_iob_func(1);
  FID_conflict___vfprintf_l(_File,param_1,(_locale_t)0x0,&stack0x00000008);
  return;
}



/* Function: FUN_004067b5 */

int __cdecl
FUN_004067b5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004056b5();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_004067ef */

void __cdecl
FUN_004067ef(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004067b5(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_00406812 */

int __cdecl
FUN_00406812(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004056b5();
  iVar2 = o___stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_00406848 */

void __cdecl FUN_00406848(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00406812(param_1,param_2,param_3,0,&stack0x00000010);
  return;
}



/* Function: DelayLoad_AppContainerLookupMoniker */

void DelayLoad_AppContainerLookupMoniker(void)

{
  FUN_00406876();
  return;
}



/* Function: FUN_00406876 */

void FUN_00406876(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040565a(&ImgDelayDescr_00406c04,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00406885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_00406890 */

void FUN_00406890(void)

{
  FUN_00406876();
  return;
}



/* Function: DelayLoad_AppContainerDeriveSidFromMoniker */

void DelayLoad_AppContainerDeriveSidFromMoniker(void)

{
  FUN_00406876();
  return;
}



/* Function: DelayLoad_FwFree */

void DelayLoad_FwFree(void)

{
  FUN_004068ba();
  return;
}



/* Function: FUN_004068ba */

void FUN_004068ba(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040565a(&ImgDelayDescr_00406c24,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x004068c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_FwArrayAppend */

void DelayLoad_FwArrayAppend(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwHResultToWindowsError */

void DelayLoad_FwHResultToWindowsError(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwArrayErase */

void DelayLoad_FwArrayErase(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwStringCopy */

void DelayLoad_FwStringCopy(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwCriticalSectionCreate */

void DelayLoad_FwCriticalSectionCreate(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwCriticalSectionDestroy */

void DelayLoad_FwCriticalSectionDestroy(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwCriticalSectionEnter */

void DelayLoad_FwCriticalSectionEnter(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwCriticalSectionLeave */

void DelayLoad_FwCriticalSectionLeave(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_IsAddressesEmpty */

void DelayLoad_IsAddressesEmpty(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwAlloc */

void DelayLoad_FwAlloc(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwCreateSDDLStringFromPackageFamilyName */

void DelayLoad_FwCreateSDDLStringFromPackageFamilyName(void)

{
  FUN_004068ba();
  return;
}



/* Function: DelayLoad_FwSidCopy */

void DelayLoad_FwSidCopy(void)

{
  FUN_0040698b();
  return;
}



/* Function: FUN_0040698b */

void FUN_0040698b(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040565a(&ImgDelayDescr_00406c44,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040699a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_FwSidAndAttributesFree */

void DelayLoad_FwSidAndAttributesFree(void)

{
  FUN_0040698b();
  return;
}



/* Function: FUN_004069b2 */

int __cdecl FUN_004069b2(int param_1)

{
  uint uVar1;
  
  if ((DAT_00407510 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



