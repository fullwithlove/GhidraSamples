/* Function: FUN_00401000 */

undefined4 FUN_00401000(void)

{
  return 0;
}



/* Function: FUN_00401010 */

void FUN_00401010(void)

{
  return;
}



/* Function: FUN_00401020 */

void FUN_00401020(int param_1)

{
  FUN_00401050((int *)&DAT_00429b30,0x65,param_1,(int *)0x0);
  return;
}



/* Function: FUN_00401050 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00401261) */
/* WARNING: Removing unreachable block (ram,0x0040108c) */

void FUN_00401050(int *param_1,ushort param_2,int param_3,int *param_4)

{
  char cVar1;
  size_t _Size;
  undefined4 *puVar2;
  HMODULE pHVar3;
  int iVar4;
  errno_t eVar5;
  uint cchWideChar;
  longlong lVar6;
  int local_a44;
  LPWSTR local_a3c;
  LPWSTR local_a38;
  LPWSTR local_a0c;
  int local_9f4;
  uint local_9ec;
  uint local_9e8;
  WCHAR local_97c;
  undefined2 local_97a [523];
  WCHAR local_564 [520];
  LPWSTR local_154;
  int local_150;
  wchar_t *local_14c;
  int local_148;
  DWORD local_144;
  undefined **local_140;
  int local_13c [4];
  undefined4 *local_12c;
  uint local_128;
  CHAR local_124 [268];
  uint local_18;
  UINT local_14;
  HMODULE local_10;
  LPCSTR local_c;
  
  local_18 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_140 = ATL::CRegObject::vftable;
  FUN_004059e0(local_13c);
  local_148 = 0;
  if (param_4 != (int *)0x0) {
    for (; *param_4 != 0; param_4 = param_4 + 2) {
      FUN_00401ca0(&local_140,(LPCWSTR)*param_4,param_4[1]);
    }
  }
  local_148 = (**(code **)(*param_1 + 0x14))();
  if (local_148 < 0) {
    local_140 = ATL::CRegObject::vftable;
    FUN_00402ce0((int)&local_140);
    FUN_00401a80(local_13c);
    FUN_00408e70(local_13c);
  }
  else {
    local_14 = 3;
    local_12c = (undefined4 *)0x0;
    local_10 = DAT_00429c90;
    local_144 = GetModuleFileNameA(DAT_00429c90,local_124,0x104);
    if (local_144 == 0) {
      ATL::AtlHresultFromLastError();
      while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar2);
      }
      local_140 = ATL::CRegObject::vftable;
      FUN_00402ce0((int)&local_140);
      FUN_00401a80(local_13c);
      FUN_00408e70(local_13c);
    }
    else if (local_144 == 0x104) {
      while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar2);
      }
      local_140 = ATL::CRegObject::vftable;
      FUN_00402ce0((int)&local_140);
      FUN_00401a80(local_13c);
      FUN_00408e70(local_13c);
    }
    else {
      local_154 = (LPWSTR)0x0;
      local_c = local_124;
      if (local_c == (LPCSTR)0x0) {
        local_a38 = (LPWSTR)0x0;
      }
      else {
        iVar4 = lstrlenA(local_c);
        local_128 = iVar4 + 1;
        lVar6 = __allmul(local_128,(int)local_128 >> 0x1f,2,0);
        local_9e8 = (uint)((ulonglong)lVar6 >> 0x20);
        if ((((int)local_9e8 < 1) &&
            ((local_9ec = (uint)lVar6, lVar6 < 0 || (local_9ec < 0x80000000)))) &&
           ((local_9e8 < 0x80000000 || ((-2 < (int)local_9e8 && (0x7fffffff < local_9ec)))))) {
          local_128 = local_9ec;
          local_9f4 = 0;
        }
        else {
          local_9f4 = -0x7ff8ffa9;
        }
        if (local_9f4 < 0) {
          local_a3c = (LPWSTR)0x0;
        }
        else {
          if (((int)local_128 < 0x401) && (cVar1 = FUN_004018b0(), cVar1 != '\0')) {
            local_a0c = (LPWSTR)&stack0xfffff5b4;
          }
          else {
            _Size = FUN_00409f80(local_128,8);
            puVar2 = (undefined4 *)_malloc(_Size);
            if (puVar2 == (undefined4 *)0x0) {
              local_a0c = (LPWSTR)0x0;
            }
            else {
              *puVar2 = local_12c;
              local_a0c = (LPWSTR)(puVar2 + 2);
              local_12c = puVar2;
            }
          }
          cchWideChar = local_128 >> 1;
          if ((local_a0c == (LPWSTR)0x0) || (local_c == (LPCSTR)0x0)) {
            local_a3c = (LPWSTR)0x0;
          }
          else {
            *local_a0c = L'\0';
            iVar4 = MultiByteToWideChar(local_14,0,local_c,-1,local_a0c,cchWideChar);
            if (iVar4 == 0) {
              local_a3c = (LPWSTR)0x0;
            }
            else {
              local_a3c = local_a0c;
            }
          }
        }
        local_a38 = local_a3c;
      }
      local_154 = local_a38;
      if (local_a38 == (LPWSTR)0x0) {
        while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
          local_12c = (undefined4 *)*local_12c;
          _free(puVar2);
        }
        local_140 = ATL::CRegObject::vftable;
        FUN_00402ce0((int)&local_140);
        FUN_00401a80(local_13c);
        FUN_00408e70(local_13c);
      }
      else {
        FUN_004019e0(local_564,0x208,local_a38);
        if ((local_10 == (HMODULE)0x0) ||
           (pHVar3 = GetModuleHandleA((LPCSTR)0x0), local_10 == pHVar3)) {
          local_97c = L'\"';
          iVar4 = lstrlenW(local_564);
          eVar5 = _memcpy_s(local_97a,0x416,local_564,iVar4 * 2 + 2);
          if (eVar5 != 0) {
            while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
              local_12c = (undefined4 *)*local_12c;
              _free(puVar2);
            }
            local_140 = ATL::CRegObject::vftable;
            FUN_00402ce0((int)&local_140);
            FUN_00401a80(local_13c);
            FUN_00408e70(local_13c);
            goto LAB_00401897;
          }
          iVar4 = lstrlenW(&local_97c);
          local_97a[iVar4 + -1] = 0x22;
          local_97a[iVar4] = 0;
          local_150 = FUN_00401ca0(&local_140,L"Module",(int)&local_97c);
        }
        else {
          local_150 = FUN_00401ca0(&local_140,L"Module",(int)local_564);
        }
        if (local_150 < 0) {
          while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
            local_12c = (undefined4 *)*local_12c;
            _free(puVar2);
          }
          FUN_00401b80(&local_140);
        }
        else {
          local_150 = FUN_00401ca0(&local_140,L"Module_Raw",(int)local_564);
          if (local_150 < 0) {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
            ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                      ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_12c);
            FUN_00401b80(&local_140);
          }
          else {
            local_14c = L"REGISTRY";
            if (param_3 == 0) {
              local_a44 = FUN_00402ac0(&local_140,local_154,param_2,L"REGISTRY");
            }
            else {
              local_a44 = FUN_004022a0(&local_140,local_154,param_2,L"REGISTRY");
            }
            local_148 = local_a44;
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
            ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                      ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_12c);
            FUN_00401b80(&local_140);
          }
        }
      }
    }
  }
LAB_00401897:
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004018b0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004018b0(void)

{
  __security_check_cookie(DAT_00428870 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: AtlHresultFromLastError */

/* Library Function - Single Match
    long __cdecl ATL::AtlHresultFromLastError(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

long __cdecl ATL::AtlHresultFromLastError(void)

{
  undefined4 local_c;
  
  local_c = GetLastError();
  if (0 < (int)local_c) {
    local_c = local_c & 0xffff | 0x80070000;
  }
  return local_c;
}



/* Function: FUN_004019e0 */

void __cdecl FUN_004019e0(short *param_1,int param_2,short *param_3)

{
  short *psVar1;
  uint local_8;
  
  if (param_2 != 0) {
    local_8 = 0;
    for (; (local_8 < param_2 - 1U && (*param_3 != 0)); param_3 = param_3 + 1) {
      *param_1 = *param_3;
      psVar1 = param_1 + 1;
      if ((*param_3 == 0x27) && (local_8 = local_8 + 1, local_8 < param_2 - 1U)) {
        *psVar1 = *param_3;
        psVar1 = param_1 + 2;
      }
      param_1 = psVar1;
      local_8 = local_8 + 1;
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00401a80 */

undefined4 __fastcall FUN_00401a80(int *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < param_1[2]; local_8 = local_8 + 1) {
    if ((local_8 < 0) || (param_1[2] <= local_8)) {
      RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
    }
    FUN_004115fe(*(void **)(*param_1 + local_8 * 4));
    if ((local_8 < 0) || (param_1[2] <= local_8)) {
      param_1 = (int *)0x0;
      RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
    }
    param_1 = *(int **)(param_1[1] + local_8 * 4);
    FUN_004115fe(param_1);
  }
  FUN_00408e70(param_1);
  return 0;
}



/* Function: FUN_00401b50 */

undefined4 FUN_00401b50(void)

{
  return 0x80004001;
}



/* Function: FUN_00401b60 */

undefined4 FUN_00401b60(void)

{
  return 1;
}



/* Function: FUN_00401b70 */

undefined4 FUN_00401b70(void)

{
  return 0;
}



/* Function: FUN_00401b80 */

void __fastcall FUN_00401b80(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00420dd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = ATL::CRegObject::vftable;
  local_8 = 0;
  FUN_00401a80(param_1 + 1);
  local_8 = 1;
  FUN_00401a80(param_1 + 1);
  local_8 = 0xffffffff;
  FUN_00408e70(param_1 + 1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00401c10 */

void __fastcall FUN_00401c10(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00420df8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00401a80(param_1);
  local_8 = 0xffffffff;
  FUN_00408e70(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00401c70 */

undefined4 * __thiscall FUN_00401c70(void *this,uint param_1)

{
  FUN_00401b80((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00401ca0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00401ca0(undefined4 param_1,LPCWSTR param_2,int param_3)

{
  undefined4 *puVar1;
  uint cbMultiByte;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_84;
  LPCSTR local_78;
  LPCSTR local_74;
  LPSTR local_60;
  int local_48;
  uint local_40;
  uint local_3c;
  undefined4 *local_24;
  uint local_20;
  UINT local_1c;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00420e28;
  local_10 = ExceptionList;
  uVar3 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_84 = uVar3;
  if ((param_2 != (LPCWSTR)0x0) && (param_3 != 0)) {
    local_1c = 3;
    local_24 = (undefined4 *)0x0;
    local_8 = 0;
    local_14 = param_2;
    if (param_2 == (LPCWSTR)0x0) {
      local_74 = (LPCSTR)0x0;
    }
    else {
      iVar4 = lstrlenW(param_2);
      local_20 = iVar4 + 1;
      lVar5 = __allmul(local_20,(int)local_20 >> 0x1f,2,0);
      local_3c = (uint)((ulonglong)lVar5 >> 0x20);
      if ((((int)local_3c < 1) && ((local_40 = (uint)lVar5, lVar5 < 0 || (local_40 < 0x80000000))))
         && ((local_3c < 0x80000000 || ((-2 < (int)local_3c && (0x7fffffff < local_40)))))) {
        local_20 = local_40;
        local_48 = 0;
      }
      else {
        local_48 = -0x7ff8ffa9;
      }
      if (local_48 < 0) {
        local_78 = (LPCSTR)0x0;
      }
      else {
        if (((int)local_20 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
          local_60 = (LPSTR)&local_84;
        }
        else {
          local_60 = (LPSTR)FUN_00408c90(&local_24,local_20);
        }
        cbMultiByte = local_20;
        if ((local_60 == (LPSTR)0x0) || (local_14 == (LPCWSTR)0x0)) {
          local_78 = (LPCSTR)0x0;
        }
        else {
          *local_60 = '\0';
          iVar4 = WideCharToMultiByte(local_1c,0,local_14,-1,local_60,cbMultiByte,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (iVar4 == 0) {
            local_78 = (LPCSTR)0x0;
          }
          else {
            local_78 = local_60;
          }
        }
      }
      local_74 = local_78;
    }
    if (local_74 == (LPCSTR)0x0) {
      local_8 = 0xffffffff;
      while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
        local_24 = (undefined4 *)*local_24;
        _free(puVar1);
      }
    }
    else {
      FUN_00401ef0(local_74,param_3);
      local_8 = 0xffffffff;
      while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
        local_24 = (undefined4 *)*local_24;
        _free(puVar1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00401ef0 */

undefined4 FUN_00401ef0(LPCSTR param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00420e60;
  local_10 = ExceptionList;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != 0)) {
    ExceptionList = &local_10;
    iVar1 = lstrlenA(param_1);
    local_8 = 0;
    FUN_004114d0(iVar1 + 1);
    uVar2 = FUN_00401f81();
    return uVar2;
  }
  return 0;
}



/* Function: Catch_All@00401f74 */

undefined4 Catch_All_00401f74(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x401f88;
}



/* Function: FUN_00401f81 */

void FUN_00401f81(void)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar2 = lstrlenW(*(LPCWSTR *)(unaff_EBP + 0xc));
  *(int *)(unaff_EBP + -0x18) = iVar2 * 2 + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  lVar1 = (ulonglong)*(uint *)(unaff_EBP + -0x18) * 2;
  uVar3 = FUN_004114d0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)(unaff_EBP + -0x80) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x80);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
  FUN_00401ffa();
  return;
}



/* Function: Catch_All@00401fed */

undefined4 Catch_All_00401fed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
  return 0x402001;
}



/* Function: FUN_00401ffa */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_00401ffa(void)

{
  errno_t eVar1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
  if ((*(int *)(unaff_EBP + -0x2c) == 0) || (*(int *)(unaff_EBP + -0x28) == 0)) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0x8007000e;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x2c);
    eVar1 = _memcpy_s(*(void **)(unaff_EBP + -0x40),*(rsize_t *)(unaff_EBP + -0x14),
                      *(void **)(unaff_EBP + 8),*(rsize_t *)(unaff_EBP + -0x14));
    *(errno_t *)(unaff_EBP + -0x3c) = eVar1;
    *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x3c);
    switch(*(undefined4 *)(unaff_EBP + -0x84)) {
    case 0:
    case 0x50:
      break;
    default:
      FUN_00402270(0x80004005);
      break;
    case 0xc:
      FUN_00402270(0x8007000e);
      break;
    case 0x16:
    case 0x22:
      FUN_00402270(0x80070057);
    }
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x28);
    eVar1 = _memcpy_s(*(void **)(unaff_EBP + -0x48),*(rsize_t *)(unaff_EBP + -0x18),
                      *(void **)(unaff_EBP + 0xc),*(rsize_t *)(unaff_EBP + -0x18));
    *(errno_t *)(unaff_EBP + -0x44) = eVar1;
    *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x44);
    switch(*(undefined4 *)(unaff_EBP + -0x88)) {
    case 0:
    case 0x50:
      break;
    default:
      FUN_00402270(0x80004005);
      break;
    case 0xc:
      FUN_00402270(0x8007000e);
      break;
    case 0x16:
    case 0x22:
      FUN_00402270(0x80070057);
    }
    iVar2 = FUN_00408d70(*(void **)(unaff_EBP + -0x78),(undefined4 *)(unaff_EBP + -0x2c),
                         (undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0x8007000e;
    }
  }
  if (-1 < *(int *)(unaff_EBP + -0x20)) {
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(uint *)(unaff_EBP + -0x38) = (uint)(-1 < *(int *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x24);
  FUN_004115fe(*(void **)(unaff_EBP + -0x70));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_004115fe(*(void **)(unaff_EBP + -0x74));
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x38);
}



/* Function: FUN_00402270 */

void FUN_00402270(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = param_1;
  __CxxThrowException_8(&local_8,&DAT_0042556c);
  return;
}



/* Function: FUN_004022a0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_004022a0(void *param_1,LPCWSTR param_2,ushort param_3,LPCWSTR param_4)

{
  undefined4 *puVar1;
  uint cbMultiByte;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_80;
  LPCSTR local_74;
  LPCSTR local_70;
  LPSTR local_5c;
  int local_44;
  uint local_3c;
  uint local_38;
  undefined4 *local_24;
  uint local_20;
  UINT local_1c;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00420e88;
  local_10 = ExceptionList;
  uVar3 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 3;
  local_24 = (undefined4 *)0x0;
  local_8 = 0;
  local_14 = param_4;
  local_80 = uVar3;
  if (param_4 == (LPCWSTR)0x0) {
    local_70 = (LPCSTR)0x0;
  }
  else {
    iVar4 = lstrlenW(param_4);
    local_20 = iVar4 + 1;
    lVar5 = __allmul(local_20,(int)local_20 >> 0x1f,2,0);
    local_38 = (uint)((ulonglong)lVar5 >> 0x20);
    if ((((int)local_38 < 1) && ((local_3c = (uint)lVar5, lVar5 < 0 || (local_3c < 0x80000000)))) &&
       ((local_38 < 0x80000000 || ((-2 < (int)local_38 && (0x7fffffff < local_3c)))))) {
      local_20 = local_3c;
      local_44 = 0;
    }
    else {
      local_44 = -0x7ff8ffa9;
    }
    if (local_44 < 0) {
      local_74 = (LPCSTR)0x0;
    }
    else {
      if (((int)local_20 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
        local_5c = (LPSTR)&local_80;
      }
      else {
        local_5c = (LPSTR)FUN_00408c90(&local_24,local_20);
      }
      cbMultiByte = local_20;
      if ((local_5c == (LPSTR)0x0) || (local_14 == (LPCWSTR)0x0)) {
        local_74 = (LPCSTR)0x0;
      }
      else {
        *local_5c = '\0';
        iVar4 = WideCharToMultiByte(local_1c,0,local_14,-1,local_5c,cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          local_74 = (LPCSTR)0x0;
        }
        else {
          local_74 = local_5c;
        }
      }
    }
    local_70 = local_74;
  }
  if (local_70 == (LPCSTR)0x0) {
    local_8 = 0xffffffff;
    while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
      local_24 = (undefined4 *)*local_24;
      _free(puVar1);
    }
  }
  else {
    FUN_004024c0(param_1,param_2,(LPCSTR)(uint)param_3,local_70);
    local_8 = 0xffffffff;
    while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
      local_24 = (undefined4 *)*local_24;
      _free(puVar1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004024c0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_004024c0(void *this,LPCWSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uStack_14f8;
  LPCSTR local_14dc;
  LPCSTR local_14d8;
  uint local_4a0;
  undefined4 *local_49c;
  undefined4 *local_498;
  uint local_490;
  LPSTR local_48c;
  int local_488;
  int local_474;
  uint local_470;
  undefined8 local_46c;
  long lStack_464;
  undefined4 local_460;
  undefined4 local_45c;
  HGLOBAL local_458;
  long local_454;
  HRSRC local_450;
  undefined1 *local_44c;
  undefined1 local_448 [1028];
  uint local_44;
  undefined4 *local_40;
  uint local_3c;
  UINT local_38;
  DWORD local_30;
  undefined4 local_2c;
  void *local_28;
  HMODULE local_24;
  HGLOBAL local_20;
  LPCSTR local_1c;
  LPCWSTR local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00420ec3;
  local_10 = ExceptionList;
  uStack_14f8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_14f8;
  ExceptionList = &local_10;
  local_38 = 3;
  local_40 = (undefined4 *)0x0;
  local_2c = 0;
  local_44c = (undefined1 *)0x0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18 = param_1;
  local_44 = uStack_14f8;
  local_28 = this;
  if (param_1 == (LPCWSTR)0x0) {
    local_14d8 = (LPCSTR)0x0;
    local_14 = (undefined1 *)&uStack_14f8;
  }
  else {
    iVar3 = lstrlenW(param_1);
    local_470 = iVar3 + 1;
    local_3c = local_470;
    lVar4 = __allmul(local_470,(int)local_470 >> 0x1f,2,0);
    local_46c._4_4_ = (uint)((ulonglong)lVar4 >> 0x20);
    if ((((int)local_46c._4_4_ < 1) &&
        ((local_46c._0_4_ = (uint)lVar4, lVar4 < 0 || ((uint)local_46c < 0x80000000)))) &&
       ((local_46c._4_4_ < 0x80000000 ||
        ((-2 < (int)local_46c._4_4_ && (0x7fffffff < (uint)local_46c)))))) {
      local_3c = (uint)local_46c;
      local_474 = 0;
    }
    else {
      local_474 = -0x7ff8ffa9;
    }
    local_46c = lVar4;
    if (local_474 < 0) {
      local_14dc = (LPCSTR)0x0;
    }
    else {
      if (((int)local_3c < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
        local_48c = (LPSTR)&uStack_14f8;
        local_14 = (undefined1 *)&uStack_14f8;
      }
      else {
        local_48c = (LPSTR)FUN_00408c90(&local_40,local_3c);
      }
      local_490 = local_3c;
      if ((local_48c == (LPSTR)0x0) || (local_18 == (LPCWSTR)0x0)) {
        local_14dc = (LPCSTR)0x0;
      }
      else {
        *local_48c = '\0';
        local_488 = WideCharToMultiByte(local_38,0,local_18,-1,local_48c,local_3c,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        if (local_488 == 0) {
          local_14dc = (LPCSTR)0x0;
        }
        else {
          local_14dc = local_48c;
        }
      }
    }
    local_14d8 = local_14dc;
  }
  local_1c = local_14d8;
  if (local_14d8 == (LPCSTR)0x0) {
    local_45c = 0x8007000e;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_44c != local_448) {
      Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)&local_44c);
    }
    local_8 = 0xffffffff;
    while (puVar1 = local_40, local_40 != (undefined4 *)0x0) {
      local_498 = local_40;
      local_40 = (undefined4 *)*local_40;
      _free(puVar1);
    }
  }
  else {
    local_24 = LoadLibraryExA(local_14d8,(HANDLE)0x0,2);
    if (local_24 == (HMODULE)0x0) {
      local_454 = ATL::AtlHresultFromLastError();
    }
    else {
      local_450 = FindResourceA(local_24,param_2,param_3);
      if (local_450 == (HRSRC)0x0) {
        local_454 = ATL::AtlHresultFromLastError();
      }
      else {
        local_458 = LoadResource(local_24,local_450);
        if (local_458 != (HGLOBAL)0x0) {
          local_30 = SizeofResource(local_24,local_450);
          local_20 = local_458;
          if (local_30 <= local_30 + 1) {
            local_8 = CONCAT31(local_8._1_3_,2);
            iVar3 = AtlMultiply<>(&local_4a0,local_30 + 1,1);
            if (iVar3 < 0) {
              FUN_00402270(iVar3);
            }
            FUN_00409410(&local_44c,local_4a0);
            FUN_004028bc();
            return;
          }
          local_460 = 0x8007000e;
          local_8 = (uint)local_8._1_3_ << 8;
          if (local_44c != local_448) {
            Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)&local_44c);
          }
          local_8 = 0xffffffff;
          while (puVar1 = local_40, local_40 != (undefined4 *)0x0) {
            local_49c = local_40;
            local_40 = (undefined4 *)*local_40;
            _free(puVar1);
          }
          goto LAB_004029f4;
        }
        local_454 = ATL::AtlHresultFromLastError();
      }
    }
    if (local_24 != (HMODULE)0x0) {
      FreeLibrary(local_24);
    }
    lStack_464 = local_454;
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_44c != local_448) {
      Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)&local_44c);
    }
    local_8 = 0xffffffff;
    while (puVar1 = local_40, local_40 != (undefined4 *)0x0) {
      local_40 = (undefined4 *)*local_40;
      _free(puVar1);
    }
  }
LAB_004029f4:
  ExceptionList = local_10;
  __security_check_cookie(local_44 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: Catch_All@004028af */

undefined4 Catch_All_004028af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x4028c3;
}



/* Function: FUN_004028bc */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004028bc(void)

{
  uint uVar1;
  errno_t eVar2;
  undefined4 uVar3;
  uint unaff_EBP;
  
  *(undefined4 *)(unaff_EBP - 4) = 1;
  if (*(int *)(unaff_EBP - 0x448) == 0) {
    *(undefined4 *)(unaff_EBP - 0x450) = 0x8007000e;
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x4ac) = *(undefined4 *)(unaff_EBP - 0x448);
    eVar2 = _memcpy_s(*(void **)(unaff_EBP - 0x4ac),*(rsize_t *)(unaff_EBP - 0x2c),
                      *(void **)(unaff_EBP - 0x1c),*(rsize_t *)(unaff_EBP - 0x2c));
    *(errno_t *)(unaff_EBP - 0x4a8) = eVar2;
    *(undefined4 *)(unaff_EBP - 0x14e4) = *(undefined4 *)(unaff_EBP - 0x4a8);
    switch(*(undefined4 *)(unaff_EBP - 0x14e4)) {
    case 0:
    case 0x50:
      break;
    default:
      FUN_00402270(0x80004005);
      break;
    case 0xc:
      FUN_00402270(0x8007000e);
      break;
    case 0x16:
    case 0x22:
      FUN_00402270(0x80070057);
    }
    *(undefined1 *)(*(int *)(unaff_EBP - 0x448) + *(int *)(unaff_EBP - 0x2c)) = 0;
    *(undefined4 *)(unaff_EBP - 0x4b0) = *(undefined4 *)(unaff_EBP - 0x448);
    uVar3 = FUN_00402d00((void *)(unaff_EBP - 0x28),*(LPCSTR *)(unaff_EBP - 0x4b0),
                         *(int *)(unaff_EBP + 0x14));
    *(undefined4 *)(unaff_EBP - 0x450) = uVar3;
  }
  if (*(int *)(unaff_EBP - 0x20) != 0) {
    FreeLibrary(*(HMODULE *)(unaff_EBP - 0x20));
  }
  *(undefined4 *)(unaff_EBP - 0x460) = *(undefined4 *)(unaff_EBP - 0x450);
  *(undefined1 *)(unaff_EBP - 4) = 0;
  if (*(int *)(unaff_EBP - 0x448) != unaff_EBP - 0x444) {
    Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)(unaff_EBP - 0x448));
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  while (*(int *)(unaff_EBP - 0x3c) != 0) {
    *(undefined4 *)(unaff_EBP - 0x14cc) = *(undefined4 *)(unaff_EBP - 0x3c);
    *(undefined4 *)(unaff_EBP - 0x3c) = **(undefined4 **)(unaff_EBP - 0x3c);
    _free(*(void **)(unaff_EBP - 0x14cc));
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uVar1 = *(uint *)(unaff_EBP - 0x40);
  *(undefined4 *)(unaff_EBP - 0x14e8) = 0x402a12;
  __security_check_cookie(uVar1 ^ unaff_EBP);
  return;
}



/* Function: AtlMultiply<> */

/* Library Function - Multiple Matches With Same Base Name
    long __cdecl ATL::AtlMultiply<unsigned int>(unsigned int *,unsigned int,unsigned int)
    long __cdecl ATL::AtlMultiply<unsigned long>(unsigned long *,unsigned long,unsigned long)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 __cdecl AtlMultiply<>(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = (int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20);
  if (local_8 == 0) {
    local_c = (undefined4)((ulonglong)param_2 * (ulonglong)param_3);
    *param_1 = local_c;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}



/* Function: FUN_00402ac0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00402ac0(void *param_1,LPCWSTR param_2,ushort param_3,LPCWSTR param_4)

{
  undefined4 *puVar1;
  uint cbMultiByte;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint local_80;
  LPCSTR local_74;
  LPCSTR local_70;
  LPSTR local_5c;
  int local_44;
  uint local_3c;
  uint local_38;
  undefined4 *local_24;
  uint local_20;
  UINT local_1c;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00420e88;
  local_10 = ExceptionList;
  uVar3 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 3;
  local_24 = (undefined4 *)0x0;
  local_8 = 0;
  local_14 = param_4;
  local_80 = uVar3;
  if (param_4 == (LPCWSTR)0x0) {
    local_70 = (LPCSTR)0x0;
  }
  else {
    iVar4 = lstrlenW(param_4);
    local_20 = iVar4 + 1;
    lVar5 = __allmul(local_20,(int)local_20 >> 0x1f,2,0);
    local_38 = (uint)((ulonglong)lVar5 >> 0x20);
    if ((((int)local_38 < 1) && ((local_3c = (uint)lVar5, lVar5 < 0 || (local_3c < 0x80000000)))) &&
       ((local_38 < 0x80000000 || ((-2 < (int)local_38 && (0x7fffffff < local_3c)))))) {
      local_20 = local_3c;
      local_44 = 0;
    }
    else {
      local_44 = -0x7ff8ffa9;
    }
    if (local_44 < 0) {
      local_74 = (LPCSTR)0x0;
    }
    else {
      if (((int)local_20 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
        local_5c = (LPSTR)&local_80;
      }
      else {
        local_5c = (LPSTR)FUN_00408c90(&local_24,local_20);
      }
      cbMultiByte = local_20;
      if ((local_5c == (LPSTR)0x0) || (local_14 == (LPCWSTR)0x0)) {
        local_74 = (LPCSTR)0x0;
      }
      else {
        *local_5c = '\0';
        iVar4 = WideCharToMultiByte(local_1c,0,local_14,-1,local_5c,cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          local_74 = (LPCSTR)0x0;
        }
        else {
          local_74 = local_5c;
        }
      }
    }
    local_70 = local_74;
  }
  if (local_70 == (LPCSTR)0x0) {
    local_8 = 0xffffffff;
    while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
      local_24 = (undefined4 *)*local_24;
      _free(puVar1);
    }
  }
  else {
    FUN_004024c0(param_1,param_2,(LPCSTR)(uint)param_3,local_70);
    local_8 = 0xffffffff;
    while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
      local_24 = (undefined4 *)*local_24;
      _free(puVar1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402ce0 */

undefined4 FUN_00402ce0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00401a80((int *)(param_1 + 4));
  return uVar1;
}



/* Function: FUN_00402d00 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00402d00(void *this,LPCSTR param_1,int param_2)

{
  undefined4 uVar1;
  HKEY pHVar2;
  uchar local_1014 [4100];
  uint local_10;
  int local_c;
  LPVOID local_8;
  
  local_10 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_8 = (LPVOID)0x0;
  local_c = FUN_00403210(this,param_1,&local_8);
  if (-1 < local_c) {
    *(LPVOID *)this = local_8;
    while( true ) {
                    /* WARNING: Load size is inaccurate */
      if ((**this == '\0') || (local_c = FUN_00402fa0(this,local_1014), local_c < 0))
      goto LAB_00402e94;
      pHVar2 = (HKEY)FUN_00402ec0((LPCSTR)local_1014);
      if (pHVar2 == (HKEY)0x0) break;
      local_c = FUN_00402fa0(this,local_1014);
      if (local_c < 0) goto LAB_00402e94;
      if (local_1014[0] != '{') {
        local_c = -0x7ffdfff7;
        goto LAB_00402e94;
      }
      if (param_2 == 0) {
        local_c = FUN_00403e30(this,local_1014,pHVar2,0,0);
        if (local_c < 0) goto LAB_00402e94;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        uVar1 = *this;
        local_c = FUN_00403e30(this,local_1014,pHVar2,param_2,0);
        if (local_c < 0) {
          *(undefined4 *)this = uVar1;
          FUN_00403e30(this,local_1014,pHVar2,0,0);
          goto LAB_00402e94;
        }
      }
      FUN_00402f10((undefined4 *)this);
    }
    local_c = -0x7ffdfff7;
LAB_00402e94:
    CoTaskMemFree(local_8);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402ec0 */

undefined4 __cdecl FUN_00402ec0(LPCSTR param_1)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xd < local_8) {
      return 0;
    }
    iVar1 = lstrcmpiA(param_1,(&PTR_DAT_00422480)[local_8 * 2]);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(&DAT_00422484 + local_8 * 8);
}



/* Function: FUN_00402f10 */

void __fastcall FUN_00402f10(undefined4 *param_1)

{
  bool bVar1;
  LPSTR pCVar2;
  
  while( true ) {
    switch(*(undefined1 *)*param_1) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
      bVar1 = true;
      break;
    default:
      bVar1 = false;
    }
    if (!bVar1) break;
    pCVar2 = CharNextA((LPCSTR)*param_1);
    *param_1 = pCVar2;
  }
  return;
}



/* Function: FUN_00402fa0 */

undefined4 __thiscall FUN_00402fa0(void *this,undefined1 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  LPSTR pCVar4;
  int iVar5;
  int local_20;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_c;
  
  puVar2 = param_1;
  FUN_00402f10((undefined4 *)this);
                    /* WARNING: Load size is inaccurate */
  if (**this == '\0') {
    uVar3 = 0x80020009;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (**this == '\'') {
                    /* WARNING: Load size is inaccurate */
      pCVar4 = CharNextA(*this);
      *(LPSTR *)this = pCVar4;
                    /* WARNING: Load size is inaccurate */
      while (**this != '\0') {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
        if ((**this == '\'') && (pCVar4 = CharNextA(*this), *pCVar4 != '\'')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) break;
                    /* WARNING: Load size is inaccurate */
        if (**this == '\'') {
                    /* WARNING: Load size is inaccurate */
          pCVar4 = CharNextA(*this);
          *(LPSTR *)this = pCVar4;
        }
                    /* WARNING: Load size is inaccurate */
        local_c = *this;
                    /* WARNING: Load size is inaccurate */
        pCVar4 = CharNextA(*this);
        *(LPSTR *)this = pCVar4;
                    /* WARNING: Load size is inaccurate */
        iVar5 = *this - (int)local_c;
        if (puVar2 + 0x1000 <= param_1 + iVar5 + 1) {
          return 0x80020009;
        }
        for (local_14 = 0; local_14 < iVar5; local_14 = local_14 + 1) {
          *param_1 = *local_c;
          param_1 = param_1 + 1;
          local_c = local_c + 1;
        }
      }
                    /* WARNING: Load size is inaccurate */
      if (**this == '\0') {
        return 0x80020009;
      }
      *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
      pCVar4 = CharNextA(*this);
      *(LPSTR *)this = pCVar4;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      while (**this != '\0') {
                    /* WARNING: Load size is inaccurate */
        switch(**this) {
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          bVar1 = true;
          break;
        default:
          bVar1 = false;
        }
        if (bVar1) break;
                    /* WARNING: Load size is inaccurate */
        local_18 = *this;
                    /* WARNING: Load size is inaccurate */
        pCVar4 = CharNextA(*this);
        *(LPSTR *)this = pCVar4;
                    /* WARNING: Load size is inaccurate */
        iVar5 = *this - (int)local_18;
        if (puVar2 + 0x1000 <= param_1 + iVar5 + 1) {
          return 0x80020009;
        }
        for (local_20 = 0; local_20 < iVar5; local_20 = local_20 + 1) {
          *param_1 = *local_18;
          param_1 = param_1 + 1;
          local_18 = local_18 + 1;
        }
      }
      *param_1 = 0;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_00403210 */

void __thiscall FUN_00403210(void *this,LPCSTR param_1,undefined4 *param_2)

{
  LPCSTR lpsz;
  bool bVar1;
  LPVOID pvVar2;
  LPSTR pCVar3;
  int iVar4;
  uchar *local_134;
  int local_130;
  LPCWSTR local_124;
  uchar *local_120;
  errno_t local_11c;
  errno_t local_118;
  LPCSTR local_114;
  LPCSTR local_110;
  LPCSTR local_10c;
  rsize_t local_108;
  LPCSTR local_cc;
  rsize_t local_c8;
  uchar *local_90;
  int local_7c;
  int local_78;
  undefined4 local_74;
  size_t local_70;
  LPCSTR local_6c;
  uchar local_68 [32];
  uint local_48;
  LPCWSTR local_44;
  uchar *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  char local_31;
  int local_30;
  char local_29;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  char local_19;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00420ef8;
  local_10 = ExceptionList;
  local_48 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    local_18 = lstrlenA(param_1);
    local_18 = local_18 << 1;
    FUN_004038d0(&local_28,local_18);
    local_8 = 0;
    if (local_20 == (LPVOID)0x0) {
      local_74 = 0x8007000e;
      local_8 = 0xffffffff;
      CoTaskMemFree((LPVOID)0x0);
    }
    else {
      *(LPCSTR *)this = param_1;
      local_31 = '\0';
      if (&stack0x00000000 == (undefined1 *)0x31) {
        local_30 = -0x7fffbffd;
      }
      else {
        local_31 = DAT_00429aec;
        local_30 = 0;
      }
      if (local_30 < 0) {
        local_78 = local_30;
        local_8 = 0xffffffff;
        CoTaskMemFree(local_20);
      }
      else {
        local_14 = 0;
        local_29 = '\0';
        local_19 = '\0';
                    /* WARNING: Load size is inaccurate */
        while (**this != '\0') {
          if (local_31 == '\x01') {
            local_3c = L"HKCU\r\n{\tSoftware\r\n\t{\r\n\t\tClasses";
            local_38 = L"\r\n\t}\r\n}\r\n";
            if (local_14 == 0) {
              local_40 = (uchar *)0x0;
                    /* WARNING: Load size is inaccurate */
              local_90 = *this;
              local_40 = __mbsstr(local_90,"HKCR");
                    /* WARNING: Load size is inaccurate */
              if ((local_40 != (uchar *)0x0) && (local_40 == *this)) {
                    /* WARNING: Load size is inaccurate */
                pCVar3 = CharNextA(*this);
                *(LPSTR *)this = pCVar3;
                    /* WARNING: Load size is inaccurate */
                pCVar3 = CharNextA(*this);
                *(LPSTR *)this = pCVar3;
                    /* WARNING: Load size is inaccurate */
                pCVar3 = CharNextA(*this);
                *(LPSTR *)this = pCVar3;
                    /* WARNING: Load size is inaccurate */
                pCVar3 = CharNextA(*this);
                *(LPSTR *)this = pCVar3;
                iVar4 = FUN_00403bd0(&local_28,local_3c);
                if (iVar4 == 0) {
                  local_30 = -0x7ff8fff2;
                  break;
                }
                local_29 = '\x01';
              }
            }
                    /* WARNING: Load size is inaccurate */
            if (**this == '\'') {
              if (local_19 == '\0') {
                local_19 = '\x01';
              }
              else {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                if ((**this == '\'') && (pCVar3 = CharNextA(*this), *pCVar3 != '\'')) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  local_19 = '\0';
                }
                else {
                    /* WARNING: Load size is inaccurate */
                  pCVar3 = CharNextA(*this);
                  *(LPSTR *)this = pCVar3;
                    /* WARNING: Load size is inaccurate */
                  local_cc = *this;
                  pCVar3 = CharNextA(local_cc);
                  local_c8 = (int)pCVar3 - (int)local_cc;
                  iVar4 = FUN_004039a0(&local_28,local_cc,local_c8);
                  if (iVar4 == 0) {
                    local_30 = -0x7ff8fff2;
                    break;
                  }
                }
              }
            }
                    /* WARNING: Load size is inaccurate */
            if ((local_19 == '\0') && (**this == '{')) {
              local_14 = local_14 + 1;
            }
                    /* WARNING: Load size is inaccurate */
            if ((((local_19 == '\0') && (**this == '}')) &&
                (local_14 = local_14 + -1, local_14 == 0)) && (local_29 == '\x01')) {
              iVar4 = FUN_00403bd0(&local_28,local_38);
              if (iVar4 == 0) {
                local_30 = -0x7ff8fff2;
                break;
              }
              local_29 = '\0';
            }
          }
                    /* WARNING: Load size is inaccurate */
          if (**this == '%') {
                    /* WARNING: Load size is inaccurate */
            pCVar3 = CharNextA(*this);
            *(LPSTR *)this = pCVar3;
                    /* WARNING: Load size is inaccurate */
            if (**this == '%') {
                    /* WARNING: Load size is inaccurate */
              local_10c = *this;
              pCVar3 = CharNextA(local_10c);
              local_108 = (int)pCVar3 - (int)local_10c;
              iVar4 = FUN_004039a0(&local_28,local_10c,local_108);
              if (iVar4 == 0) {
                local_30 = -0x7ff8fff2;
                break;
              }
            }
            else {
                    /* WARNING: Load size is inaccurate */
              local_114 = *this;
              local_110 = (LPCSTR)0x0;
              if (local_114 == (LPCSTR)0x0) {
                local_6c = (LPCSTR)0x0;
              }
              else {
                for (; *local_114 != '\0'; local_114 = CharNextA(local_114)) {
                  if (*local_114 == '%') {
                    local_110 = local_114;
                    break;
                  }
                }
                local_6c = local_110;
              }
              local_110 = local_6c;
              if (local_6c == (LPCSTR)0x0) {
                local_30 = -0x7ffdfff7;
                break;
              }
                    /* WARNING: Load size is inaccurate */
              if (0x1f < (int)local_6c - *this) {
                local_30 = -0x7fffbffb;
                break;
              }
                    /* WARNING: Load size is inaccurate */
              local_70 = (int)local_6c - *this;
                    /* WARNING: Load size is inaccurate */
              local_120 = *this;
              local_118 = __mbsnbcpy_s(local_68,0x20,local_120,local_70);
              switch(local_118) {
              case 0:
              case 0x50:
                break;
              default:
                FUN_00402270(0x80004005);
                break;
              case 0xc:
                FUN_00402270(0x8007000e);
                break;
              case 0x16:
              case 0x22:
                FUN_00402270(0x80070057);
              }
              local_11c = local_118;
              local_134 = local_68;
              local_130 = *(int *)((int)this + 4);
              local_124 = (LPCWSTR)FUN_00408ef0((void *)(local_130 + 4),&local_134);
              local_44 = local_124;
              if (local_124 == (LPCWSTR)0x0) {
                local_30 = -0x7ffdfff7;
                break;
              }
              iVar4 = FUN_00403bd0(&local_28,local_124);
              if (iVar4 == 0) {
                local_30 = -0x7ff8fff2;
                break;
              }
                    /* WARNING: Load size is inaccurate */
              while (*this != local_6c) {
                    /* WARNING: Load size is inaccurate */
                pCVar3 = CharNextA(*this);
                *(LPSTR *)this = pCVar3;
              }
            }
          }
          else {
                    /* WARNING: Load size is inaccurate */
            lpsz = *this;
            pCVar3 = CharNextA(lpsz);
            iVar4 = FUN_004039a0(&local_28,lpsz,(int)pCVar3 - (int)lpsz);
            if (iVar4 == 0) {
              local_30 = -0x7ff8fff2;
              break;
            }
          }
                    /* WARNING: Load size is inaccurate */
          pCVar3 = CharNextA(*this);
          *(LPSTR *)this = pCVar3;
        }
        pvVar2 = local_20;
        if (-1 < local_30) {
          local_20 = (LPVOID)0x0;
          local_28 = 0;
          local_24 = 0;
          *param_2 = pvVar2;
        }
        local_7c = local_30;
        local_8 = 0xffffffff;
        CoTaskMemFree(local_20);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_48 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004038d0 */

/* WARNING: Removing unreachable block (ram,0x00403924) */
/* WARNING: Removing unreachable block (ram,0x00403940) */

undefined4 * __thiscall FUN_004038d0(void *this,int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 < 100) {
    param_1 = 1000;
  }
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = param_1;
  pvVar1 = CoTaskMemAlloc(*(SIZE_T *)((int)this + 4));
  *(LPVOID *)((int)this + 8) = pvVar1;
  if (*(int *)((int)this + 8) != 0) {
    **(undefined1 **)((int)this + 8) = 0;
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403980 */

void __fastcall FUN_00403980(int param_1)

{
  CoTaskMemFree(*(LPVOID *)(param_1 + 8));
  return;
}



/* Function: FUN_004039a0 */

/* WARNING: Removing unreachable block (ram,0x00403a43) */
/* WARNING: Removing unreachable block (ram,0x00403a5f) */

undefined4 __thiscall FUN_004039a0(void *this,void *param_1,rsize_t param_2)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  errno_t eVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this + 1 + param_2;
                    /* WARNING: Load size is inaccurate */
  if ((*this < iVar1) && ((int)param_2 < iVar1)) {
    if (*(int *)((int)this + 4) <= iVar1) {
      while (*(int *)((int)this + 4) <= iVar1) {
        if (0x3fffffff < *(int *)((int)this + 4)) {
          return 0;
        }
        *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      }
      pvVar3 = CoTaskMemRealloc(*(LPVOID *)((int)this + 8),*(SIZE_T *)((int)this + 4));
      if (pvVar3 == (LPVOID)0x0) {
        return 0;
      }
      *(LPVOID *)((int)this + 8) = pvVar3;
    }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    if (((*this < 0) || (*(int *)((int)this + 4) <= *this)) ||
       (*(int *)((int)this + 4) < *(int *)((int)this + 4) - *this)) {
      uVar2 = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      eVar4 = _memcpy_s((void *)(*(int *)((int)this + 8) + *this),*(int *)((int)this + 4) - *this,
                        param_1,param_2);
      switch(eVar4) {
      case 0:
      case 0x50:
        break;
      default:
        FUN_00402270(0x80004005);
        break;
      case 0xc:
        FUN_00402270(0x8007000e);
        break;
      case 0x16:
      case 0x22:
        FUN_00402270(0x80070057);
      }
                    /* WARNING: Load size is inaccurate */
      *(rsize_t *)this = *this + param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(*(int *)((int)this + 8) + *this) = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00403bd0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_00403bd0(void *this,LPCWSTR param_1)

{
  undefined4 *puVar1;
  uint cbMultiByte;
  char cVar2;
  uint uVar3;
  int iVar4;
  rsize_t rVar5;
  longlong lVar6;
  uint local_b0;
  LPCSTR local_a4;
  LPCSTR local_a0;
  LPSTR local_5c;
  int local_44;
  uint local_3c;
  uint local_38;
  undefined4 *local_24;
  uint local_20;
  UINT local_1c;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00420f28;
  local_10 = ExceptionList;
  uVar3 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b0 = uVar3;
  if (param_1 != (LPCWSTR)0x0) {
    local_1c = 3;
    local_24 = (undefined4 *)0x0;
    local_8 = 0;
    local_14 = param_1;
    if (param_1 == (LPCWSTR)0x0) {
      local_a0 = (LPCSTR)0x0;
    }
    else {
      iVar4 = lstrlenW(param_1);
      local_20 = iVar4 + 1;
      lVar6 = __allmul(local_20,(int)local_20 >> 0x1f,2,0);
      local_38 = (uint)((ulonglong)lVar6 >> 0x20);
      if ((((int)local_38 < 1) && ((local_3c = (uint)lVar6, lVar6 < 0 || (local_3c < 0x80000000))))
         && ((local_38 < 0x80000000 || ((-2 < (int)local_38 && (0x7fffffff < local_3c)))))) {
        local_20 = local_3c;
        local_44 = 0;
      }
      else {
        local_44 = -0x7ff8ffa9;
      }
      if (local_44 < 0) {
        local_a4 = (LPCSTR)0x0;
      }
      else {
        if (((int)local_20 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
          local_5c = (LPSTR)&local_b0;
        }
        else {
          local_5c = (LPSTR)FUN_00408c90(&local_24,local_20);
        }
        cbMultiByte = local_20;
        if ((local_5c == (LPSTR)0x0) || (local_14 == (LPCWSTR)0x0)) {
          local_a4 = (LPCSTR)0x0;
        }
        else {
          *local_5c = '\0';
          iVar4 = WideCharToMultiByte(local_1c,0,local_14,-1,local_5c,cbMultiByte,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (iVar4 == 0) {
            local_a4 = (LPCSTR)0x0;
          }
          else {
            local_a4 = local_5c;
          }
        }
      }
      local_a0 = local_a4;
    }
    if (local_a0 == (LPCSTR)0x0) {
      local_8 = 0xffffffff;
      while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
        local_24 = (undefined4 *)*local_24;
        _free(puVar1);
      }
    }
    else {
      rVar5 = lstrlenA(local_a0);
      FUN_004039a0(this,local_a0,rVar5);
      local_8 = 0xffffffff;
      while (puVar1 = local_24, local_24 != (undefined4 *)0x0) {
        local_24 = (undefined4 *)*local_24;
        _free(puVar1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403e30 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00403e30(void *this,uchar *param_1,HKEY param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  LPCSTR pCVar3;
  errno_t eVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  ulong local_2364;
  HKEY local_2360;
  HKEY local_235c;
  HKEY local_12fc;
  int local_11d0;
  int local_11cc;
  uchar *local_11c8;
  uchar *local_11c4;
  uchar *local_11c0;
  int local_1184;
  HRESULT local_1180;
  HRESULT local_117c;
  undefined4 local_1178;
  int local_1174;
  undefined4 local_1170;
  undefined4 local_116c;
  int local_1168;
  HKEY local_1164;
  undefined4 local_1160;
  int local_115c;
  HKEY local_1158;
  undefined4 local_1154;
  HKEY local_1150;
  undefined4 local_114c;
  CHAR local_1148 [4100];
  HKEY local_144;
  undefined4 local_140;
  uint local_13c;
  uchar local_138 [268];
  uint local_2c;
  int local_28;
  int local_24;
  ulong local_20;
  HKEY local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00420f6e;
  local_10 = ExceptionList;
  local_2c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (HKEY)0x0;
  local_18 = 0;
  local_8 = 0;
  local_14 = 1;
  local_24 = param_4;
  local_28 = 0;
  local_28 = FUN_00402fa0(this,param_1);
  if (-1 < local_28) {
LAB_00403ec9:
    if (*param_1 == '}') goto LAB_00404805;
    local_14 = 1;
    iVar2 = lstrcmpiA((LPCSTR)param_1,PTR_s_Delete_004223d0);
    local_13c = (uint)(iVar2 == 0);
    iVar2 = lstrcmpiA((LPCSTR)param_1,PTR_s_ForceRemove_004223c8);
    if ((iVar2 == 0) || (local_13c != 0)) {
      local_28 = FUN_00402fa0(this,param_1);
      if (local_28 < 0) goto LAB_00404805;
      if (param_3 == 0) goto LAB_0040413b;
      local_144 = (HKEY)0x0;
      local_140 = 0;
      local_8._0_1_ = 1;
      local_11c4 = param_1;
      local_11c0 = (uchar *)0x0;
      if (param_1 != (uchar *)0x0) {
        for (; *local_11c4 != '\0'; local_11c4 = (uchar *)CharNextA((LPCSTR)local_11c4)) {
          if (*local_11c4 == '\\') {
            local_11c0 = local_11c4;
            break;
          }
        }
      }
      local_11c8 = local_11c0;
      if (local_11c0 == (uchar *)0x0) {
        for (local_11cc = 0; local_11cc < 0xc; local_11cc = local_11cc + 1) {
          iVar2 = lstrcmpiA((LPCSTR)param_1,(&PTR_s_AppID_004223f4)[local_11cc]);
          if (iVar2 == 0) {
            local_11d0 = 0;
            goto LAB_00404064;
          }
        }
        local_11d0 = 1;
LAB_00404064:
        if (local_11d0 != 0) {
          local_144 = param_2;
          local_140 = 0;
          FUN_00404b20(&local_144,(LPCSTR)param_1);
          local_12fc = local_144;
          local_144 = (HKEY)0x0;
          local_140 = 0;
        }
        if (local_13c == 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          ATL::CRegKey::Close((CRegKey *)&local_144);
          goto LAB_0040413b;
        }
        local_28 = FUN_00402fa0(this,param_1);
        if (local_28 < 0) {
          local_8 = (uint)local_8._1_3_ << 8;
          ATL::CRegKey::Close((CRegKey *)&local_144);
        }
        else {
          local_28 = FUN_00405940(this,(char *)param_1);
          if (-1 < local_28) {
            local_8 = (uint)local_8._1_3_ << 8;
            ATL::CRegKey::Close((CRegKey *)&local_144);
            goto LAB_004047a2;
          }
          local_8 = (uint)local_8._1_3_ << 8;
          ATL::CRegKey::Close((CRegKey *)&local_144);
        }
        goto LAB_00404805;
      }
      local_116c = 0x80020009;
      local_8 = (uint)local_8._1_3_ << 8;
      ATL::CRegKey::Close((CRegKey *)&local_144);
      local_8 = 0xffffffff;
      ATL::CRegKey::Close((CRegKey *)&local_1c);
      goto LAB_00404823;
    }
LAB_0040413b:
    iVar2 = lstrcmpiA((LPCSTR)param_1,PTR_s_NoRemove_004223cc);
    if (iVar2 == 0) {
      local_14 = 0;
      local_28 = FUN_00402fa0(this,param_1);
      if (local_28 < 0) goto LAB_00404805;
    }
    iVar2 = lstrcmpiA((LPCSTR)param_1,PTR_DAT_004223c4);
    if (iVar2 == 0) {
      local_28 = FUN_00402fa0(this,local_1148);
      if ((local_28 < 0) || (local_28 = FUN_00402fa0(this,param_1), local_28 < 0))
      goto LAB_00404805;
      if (*param_1 != '=') {
        local_1170 = 0x80020009;
        local_8 = 0xffffffff;
        ATL::CRegKey::Close((CRegKey *)&local_1c);
        goto LAB_00404823;
      }
      if (param_3 != 0) {
        local_8._0_1_ = 2;
        local_1150 = param_2;
        local_114c = 0;
        local_28 = FUN_00404d30(this,&local_1150,local_1148,param_1);
        local_235c = local_1150;
        local_1150 = (HKEY)0x0;
        local_114c = 0;
        if (-1 < local_28) {
          local_8 = (uint)local_8._1_3_ << 8;
          ATL::CRegKey::Close((CRegKey *)&local_1150);
          goto LAB_004047a2;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_1174 = local_28;
        ATL::CRegKey::Close((CRegKey *)&local_1150);
        local_8 = 0xffffffff;
        ATL::CRegKey::Close((CRegKey *)&local_1c);
        goto LAB_00404823;
      }
      if ((param_4 == 0) && (local_14 != 0)) {
        local_1158 = (HKEY)0x0;
        local_1154 = 0;
        local_2360 = (HKEY)0x0;
        local_2364 = RegOpenKeyExA(param_2,(LPCSTR)0x0,0,0x20006,&local_2360);
        if (local_2364 == 0) {
          local_2364 = ATL::CRegKey::Close((CRegKey *)&local_1158);
          local_1158 = local_2360;
        }
        local_20 = local_2364;
        if (local_2364 != 0) {
          local_28 = _HRESULT_FROM_WIN32(local_2364);
          ATL::CRegKey::Close((CRegKey *)&local_1158);
          goto LAB_00404805;
        }
        local_20 = RegDeleteValueA(local_1158,local_1148);
        if ((local_20 != 0) && (local_20 != 2)) {
          local_28 = _HRESULT_FROM_WIN32(local_20);
          ATL::CRegKey::Close((CRegKey *)&local_1158);
          goto LAB_00404805;
        }
        ATL::CRegKey::Close((CRegKey *)&local_1158);
      }
      local_28 = FUN_00405940(this,(char *)param_1);
joined_r0x004043e2:
      if (local_28 < 0) goto LAB_00404805;
      goto LAB_00403ec9;
    }
    pCVar3 = FUN_00404ce0((LPSTR)param_1,'\\');
    if (pCVar3 != (LPCSTR)0x0) {
      local_1178 = 0x80020009;
      local_8 = 0xffffffff;
      ATL::CRegKey::Close((CRegKey *)&local_1c);
      goto LAB_00404823;
    }
    if (param_3 == 0) {
      if (param_4 == 0) {
        local_20 = FUN_00404a90(&local_1c,param_2,(LPCSTR)param_1,0x20019);
      }
      else {
        local_20 = 2;
      }
      if (local_20 != 0) {
        param_4 = 1;
      }
      eVar4 = __mbsnbcpy_s(local_138,0x104,param_1,0xffffffff);
      ATL::AtlCrtErrorCheck(eVar4);
      local_28 = FUN_00402fa0(this,param_1);
      if (((local_28 < 0) || (local_28 = FUN_00405940(this,(char *)param_1), local_28 < 0)) ||
         (((*param_1 == '{' && (iVar2 = lstrlenA((LPCSTR)param_1), iVar2 == 1)) &&
          (((local_28 = FUN_00403e30(this,param_1,local_1c,0,param_4), local_28 < 0 &&
            (param_4 == 0)) || (local_28 = FUN_00402fa0(this,param_1), local_28 < 0))))))
      goto LAB_00404805;
      param_4 = local_24;
      if (local_20 == 2) goto LAB_00403ec9;
      if (local_20 != 0) {
        if (local_24 == 0) goto LAB_00404633;
        goto LAB_00403ec9;
      }
      if ((local_24 != 0) && (bVar1 = FUN_004058f0(local_1c), CONCAT31(extraout_var,bVar1) != 0)) {
        iVar2 = FUN_004058a0((LPCSTR)local_138);
        if ((iVar2 != 0) && (local_14 != 0)) {
          FUN_00404b20(&local_1c,(LPCSTR)local_138);
        }
        goto LAB_00403ec9;
      }
      bVar1 = FUN_004058f0(local_1c);
      local_115c = CONCAT31(extraout_var_00,bVar1);
      local_20 = ATL::CRegKey::Close((CRegKey *)&local_1c);
      if (local_20 != 0) {
        local_1180 = _HRESULT_FROM_WIN32(local_20);
        local_8 = 0xffffffff;
        ATL::CRegKey::Close((CRegKey *)&local_1c);
        goto LAB_00404823;
      }
      if ((local_14 != 0) && (local_115c == 0)) {
        local_1164 = param_2;
        local_1160 = 0;
        local_20 = FUN_00404970(&local_1164,(LPCSTR)local_138);
        local_1164 = (HKEY)0x0;
        local_1160 = 0;
        if (local_20 == 0) {
          ATL::CRegKey::Close((CRegKey *)&local_1164);
          goto LAB_004047a2;
        }
        local_28 = _HRESULT_FROM_WIN32(local_20);
        ATL::CRegKey::Close((CRegKey *)&local_1164);
        goto LAB_00404805;
      }
    }
    else {
      local_20 = FUN_00404a90(&local_1c,param_2,(LPCSTR)param_1,0x2001f);
      if (((local_20 != 0) &&
          (local_20 = FUN_00404a90(&local_1c,param_2,(LPCSTR)param_1,0x20019), local_20 != 0)) &&
         (local_20 = FUN_004049f0(&local_1c,param_2,(LPCSTR)param_1,(LPSTR)0x0,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,(DWORD *)0x0), local_20 != 0)) {
        local_117c = _HRESULT_FROM_WIN32(local_20);
        local_8 = 0xffffffff;
        ATL::CRegKey::Close((CRegKey *)&local_1c);
        goto LAB_00404823;
      }
      local_28 = FUN_00402fa0(this,param_1);
      if ((local_28 < 0) ||
         ((*param_1 == '=' &&
          (local_28 = FUN_00404d30(this,&local_1c,(LPCSTR)0x0,param_1), local_28 < 0))))
      goto LAB_00404805;
    }
LAB_004047a2:
    if (((param_3 != 0) && (*param_1 == '{')) && (iVar2 = lstrlenA((LPCSTR)param_1), iVar2 == 1)) {
      local_28 = FUN_00403e30(this,param_1,local_1c,param_3,0);
      if (-1 < local_28) {
        local_28 = FUN_00402fa0(this,param_1);
        goto joined_r0x004043e2;
      }
      goto LAB_00404805;
    }
    goto LAB_00403ec9;
  }
  local_8 = 0xffffffff;
  local_1168 = local_28;
  ATL::CRegKey::Close((CRegKey *)&local_1c);
LAB_00404823:
  ExceptionList = local_10;
  __security_check_cookie(local_2c ^ (uint)&stack0xfffffffc);
  return;
LAB_00404633:
  local_28 = _HRESULT_FROM_WIN32(local_20);
LAB_00404805:
  local_1184 = local_28;
  local_8 = 0xffffffff;
  ATL::CRegKey::Close((CRegKey *)&local_1c);
  goto LAB_00404823;
}



/* Function: AtlCrtErrorCheck */

/* Library Function - Single Match
    int __cdecl ATL::AtlCrtErrorCheck(int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2012 Debug */

int __cdecl ATL::AtlCrtErrorCheck(int param_1)

{
  switch(param_1) {
  case 0:
  case 0x50:
    break;
  default:
    FUN_00402270(0x80004005);
    break;
  case 0xc:
    FUN_00402270(0x8007000e);
    break;
  case 0x16:
  case 0x22:
    FUN_00402270(0x80070057);
  }
  return param_1;
}



/* Function: _HRESULT_FROM_WIN32 */

/* Library Function - Single Match
    _HRESULT_FROM_WIN32
   
   Library: Visual Studio */

HRESULT __cdecl _HRESULT_FROM_WIN32(ulong x)

{
  undefined4 local_8;
  
  if ((int)x < 1) {
    local_8 = x;
  }
  else {
    local_8 = x & 0xffff | 0x80070000;
  }
  return local_8;
}



/* Function: FUN_00404930 */

void __fastcall FUN_00404930(int *param_1)

{
  if (*param_1 != 0) {
    RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}



/* Function: FUN_00404970 */

void __thiscall FUN_00404970(void *this,LPCSTR param_1)

{
                    /* WARNING: Load size is inaccurate */
  RegDeleteKeyA(*this,param_1);
  return;
}



/* Function: Close */

/* Library Function - Single Match
    public: long __thiscall ATL::CRegKey::Close(void)
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long __thiscall ATL::CRegKey::Close(CRegKey *this)

{
  LSTATUS local_8;
  
  local_8 = 0;
  if (*(int *)this != 0) {
    local_8 = RegCloseKey(*(HKEY *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  return local_8;
}



/* Function: FUN_004049f0 */

LSTATUS __thiscall
FUN_004049f0(void *this,HKEY param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4,REGSAM param_5,
            LPSECURITY_ATTRIBUTES param_6,DWORD *param_7)

{
  LSTATUS local_14;
  DWORD local_10;
  LSTATUS local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = RegCreateKeyExA(param_1,param_2,0,param_3,param_4,param_5,param_6,&local_8,&local_10);
  if (param_7 != (DWORD *)0x0) {
    *param_7 = local_10;
  }
  if (local_c == 0) {
    local_14 = 0;
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
      local_14 = RegCloseKey(*this);
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
    local_c = local_14;
    *(HKEY *)this = local_8;
  }
  return local_c;
}



/* Function: FUN_00404a90 */

LSTATUS __thiscall FUN_00404a90(void *this,HKEY param_1,LPCSTR param_2,REGSAM param_3)

{
  LSTATUS local_10;
  LSTATUS local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = RegOpenKeyExA(param_1,param_2,0,param_3,&local_8);
  if (local_c == 0) {
    local_10 = 0;
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
      local_10 = RegCloseKey(*this);
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
    local_c = local_10;
    *(HKEY *)this = local_8;
  }
  return local_c;
}



/* Function: FUN_00404b20 */

void __thiscall FUN_00404b20(void *this,LPCSTR param_1)

{
  LSTATUS LVar1;
  CHAR local_124 [260];
  uint local_20;
  LSTATUS local_1c;
  HKEY local_18;
  undefined4 local_14;
  _FILETIME local_10;
  DWORD local_8;
  
  local_20 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_18 = (HKEY)0x0;
  local_14 = 0;
                    /* WARNING: Load size is inaccurate */
  local_1c = FUN_00404a90(&local_18,*this,param_1,*(uint *)((int)this + 4) | 0x2001f);
  if (local_1c == 0) {
    do {
      local_8 = 0x100;
      LVar1 = RegEnumKeyExA(local_18,0,local_124,&local_8,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            &local_10);
      if (LVar1 != 0) {
        if (local_18 != (HKEY)0x0) {
          RegCloseKey(local_18);
          local_18 = (HKEY)0x0;
        }
        local_14 = 0;
                    /* WARNING: Load size is inaccurate */
        RegDeleteKeyA(*this,param_1);
        if (local_18 != (HKEY)0x0) {
          RegCloseKey(local_18);
          local_18 = (HKEY)0x0;
        }
        goto LAB_00404ccc;
      }
      local_1c = FUN_00404b20(&local_18,local_124);
    } while (local_1c == 0);
    if (local_18 != (HKEY)0x0) {
      RegCloseKey(local_18);
      local_18 = (HKEY)0x0;
    }
  }
  else if (local_18 != (HKEY)0x0) {
    RegCloseKey(local_18);
    local_18 = (HKEY)0x0;
  }
LAB_00404ccc:
  local_14 = 0;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404ce0 */

LPCSTR __cdecl FUN_00404ce0(LPSTR param_1,char param_2)

{
  LPSTR pCVar1;
  LPCSTR local_8;
  
  local_8 = (LPCSTR)0x0;
  if (param_1 == (LPSTR)0x0) {
    pCVar1 = (LPCSTR)0x0;
  }
  else {
    for (; (pCVar1 = local_8, *param_1 != '\0' && (pCVar1 = param_1, *param_1 != param_2));
        param_1 = CharNextA(param_1)) {
    }
  }
  return pCVar1;
}



/* Function: FUN_00404d30 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_00404d30(void *this,undefined4 *param_1,LPCSTR param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  longlong lVar6;
  uint uStack_1348;
  LPWSTR pWStack_132c;
  LPWSTR pWStack_1328;
  undefined4 uStack_130c;
  undefined4 *puStack_1308;
  uint uStack_1300;
  LPWSTR pWStack_12fc;
  int iStack_12f8;
  undefined4 uStack_12f4;
  uint uStack_12f0;
  size_t sStack_12ec;
  undefined4 *puStack_12e8;
  int iStack_12e4;
  uint uStack_12e0;
  undefined8 uStack_12dc;
  uint local_12c0;
  undefined4 uStack_127c;
  undefined4 auStack_1274 [67];
  uint uStack_1168;
  uint uStack_1164;
  undefined4 uStack_1160;
  undefined4 *puStack_115c;
  uint uStack_1158;
  UINT UStack_1154;
  LPWSTR pWStack_1150;
  BYTE *pBStack_114c;
  uint local_1138;
  undefined4 local_1134 [66];
  BYTE local_102c [4100];
  uint local_28;
  int local_24;
  ushort local_20 [2];
  ulong local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00420fc1;
  local_10 = ExceptionList;
  uStack_1348 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1348;
  ExceptionList = &local_10;
  local_20[0] = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = uStack_1348;
  local_24 = FUN_00402fa0(this,local_102c);
  if ((-1 < local_24) && (iVar3 = FUN_004056d0((LPCSTR)local_102c,local_20), iVar3 != 0)) {
                    /* WARNING: Load size is inaccurate */
    while (iVar3 = FUN_00405840(**this), iVar3 != 0) {
                    /* WARNING: Load size is inaccurate */
      pCVar4 = CharNextA(*this);
      *(LPSTR *)this = pCVar4;
    }
    local_24 = FUN_00402fa0(this,local_102c);
    if (-1 < local_24) {
      if (local_20[0] < 0x14) {
        if (local_20[0] == 0x13) {
          UStack_1154 = 3;
          puStack_115c = (undefined4 *)0x0;
          local_8 = 3;
          pBStack_114c = local_102c;
          if (pBStack_114c == (BYTE *)0x0) {
            pWStack_1328 = (LPWSTR)0x0;
          }
          else {
            iVar3 = lstrlenA((LPCSTR)pBStack_114c);
            uStack_12e0 = iVar3 + 1;
            uStack_1158 = uStack_12e0;
            lVar6 = __allmul(uStack_12e0,(int)uStack_12e0 >> 0x1f,2,0);
            uStack_12dc._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
            if ((((int)uStack_12dc._4_4_ < 1) &&
                ((uStack_12dc._0_4_ = (uint)lVar6, lVar6 < 0 || ((uint)uStack_12dc < 0x80000000))))
               && ((uStack_12dc._4_4_ < 0x80000000 ||
                   ((-2 < (int)uStack_12dc._4_4_ && (0x7fffffff < (uint)uStack_12dc)))))) {
              uStack_1158 = (uint)uStack_12dc;
              iStack_12e4 = 0;
            }
            else {
              iStack_12e4 = -0x7ff8ffa9;
            }
            uStack_12dc = lVar6;
            if (iStack_12e4 < 0) {
              pWStack_132c = (LPWSTR)0x0;
            }
            else {
              if (((int)uStack_1158 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
                pWStack_12fc = (LPWSTR)&uStack_1348;
                local_14 = (undefined1 *)&uStack_1348;
              }
              else {
                uStack_12f0 = uStack_1158;
                pWStack_12fc = (LPWSTR)uStack_12f4;
                sStack_12ec = FUN_00409f80(uStack_1158,8);
                puStack_12e8 = (undefined4 *)_malloc(sStack_12ec);
                if (puStack_12e8 == (undefined4 *)0x0) {
                  pWStack_12fc = (LPWSTR)0x0;
                }
                else {
                  *puStack_12e8 = puStack_115c;
                  pWStack_12fc = (LPWSTR)(puStack_12e8 + 2);
                  puStack_115c = puStack_12e8;
                }
              }
              uStack_1300 = uStack_1158 >> 1;
              if ((pWStack_12fc == (LPWSTR)0x0) || (pBStack_114c == (BYTE *)0x0)) {
                pWStack_132c = (LPWSTR)0x0;
              }
              else {
                *pWStack_12fc = L'\0';
                iStack_12f8 = MultiByteToWideChar(UStack_1154,0,(LPCSTR)pBStack_114c,-1,pWStack_12fc
                                                  ,uStack_1300);
                if (iStack_12f8 == 0) {
                  pWStack_132c = (LPWSTR)0x0;
                }
                else {
                  pWStack_132c = pWStack_12fc;
                }
              }
            }
            pWStack_1328 = pWStack_132c;
          }
          pWStack_1150 = pWStack_1328;
          if (pWStack_1328 == (LPWSTR)0x0) {
            uStack_127c = 0x8007000e;
            local_8 = 0xffffffff;
            while (puVar1 = puStack_115c, puStack_115c != (undefined4 *)0x0) {
              puStack_1308 = puStack_115c;
              puStack_115c = (undefined4 *)*puStack_115c;
              _free(puVar1);
            }
            goto LAB_00405613;
          }
          Ordinal_277(pWStack_1328,0,0,&uStack_1160);
          uStack_130c = uStack_1160;
          local_1c = RegSetValueExA((HKEY)*param_1,param_2,0,4,(BYTE *)&uStack_130c,4);
          local_8 = 0xffffffff;
          while (puVar1 = puStack_115c, puStack_115c != (undefined4 *)0x0) {
            puStack_115c = (undefined4 *)*puStack_115c;
            _free(puVar1);
          }
        }
        else if (local_20[0] == 8) {
          local_12c0 = (uint)(&stack0x00000000 != (undefined1 *)0x102c);
          if (local_12c0 == 0) {
            local_1c = 0xd;
          }
          else {
            iVar3 = lstrlenA((LPCSTR)local_102c);
            local_1c = RegSetValueExA((HKEY)*param_1,param_2,0,1,local_102c,iVar3 + 1);
          }
        }
        else if (local_20[0] == 0x11) {
          uStack_1168 = lstrlenA((LPCSTR)local_102c);
          if ((uStack_1168 & 1) == 0) {
            uStack_1164 = (int)uStack_1168 / 2;
            auStack_1274[0] = 0;
            local_8 = 5;
            uVar5 = FUN_00409fc0(uStack_1164,1);
            FUN_00409480(auStack_1274,uVar5);
            FUN_00405499();
            return;
          }
          goto LAB_00405613;
        }
      }
      else if (local_20[0] == 0x4008) {
        iVar3 = lstrlenA((LPCSTR)local_102c);
        local_1138 = iVar3 + 2;
        local_1134[0] = 0;
        local_8 = 1;
        uVar5 = FUN_00409fc0(local_1138,1);
        FUN_00409480(local_1134,uVar5);
        FUN_00404f27();
        return;
      }
      if (local_1c == 0) {
        local_24 = FUN_00402fa0(this,param_3);
      }
      else {
        local_18 = 0x204;
        _HRESULT_FROM_WIN32(local_1c);
      }
    }
  }
LAB_00405613:
  ExceptionList = local_10;
  __security_check_cookie(local_28 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: Catch_All@00404f1a */

undefined4 Catch_All_00404f1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return 0x404f2e;
}



/* Function: FUN_00404f27 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00404f27(void)

{
  uint uVar1;
  LPSTR pCVar2;
  BOOL BVar3;
  LSTATUS LVar4;
  undefined4 uVar5;
  uint unaff_EBP;
  
  *(undefined4 *)(unaff_EBP - 4) = 0;
  if (*(int *)(unaff_EBP - 0x1130) == 0) {
    *(undefined4 *)(unaff_EBP - 0x18) = 0xe;
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x1138) = *(undefined4 *)(unaff_EBP - 0x1130);
    *(uint *)(unaff_EBP - 0x113c) = unaff_EBP - 0x1028;
    *(undefined4 *)(unaff_EBP - 0x1134) = 0;
    while (**(char **)(unaff_EBP - 0x113c) != '\0') {
      pCVar2 = CharNextA(*(LPCSTR *)(unaff_EBP - 0x113c));
      *(LPSTR *)(unaff_EBP - 0x1140) = pCVar2;
      if ((**(char **)(unaff_EBP - 0x113c) == '\\') && (**(char **)(unaff_EBP - 0x1140) == '0')) {
        **(undefined1 **)(unaff_EBP - 0x1138) = 0;
        *(int *)(unaff_EBP - 0x1138) = *(int *)(unaff_EBP - 0x1138) + 1;
        pCVar2 = CharNextA(*(LPCSTR *)(unaff_EBP - 0x1140));
        *(LPSTR *)(unaff_EBP - 0x113c) = pCVar2;
      }
      else {
        **(undefined1 **)(unaff_EBP - 0x1138) = **(undefined1 **)(unaff_EBP - 0x113c);
        BVar3 = IsDBCSLeadByte(**(BYTE **)(unaff_EBP - 0x113c));
        if (BVar3 != 0) {
          *(int *)(unaff_EBP - 0x1138) = *(int *)(unaff_EBP - 0x1138) + 1;
          *(int *)(unaff_EBP - 0x113c) = *(int *)(unaff_EBP - 0x113c) + 1;
          if (**(char **)(unaff_EBP - 0x113c) == '\0') break;
          **(undefined1 **)(unaff_EBP - 0x1138) = **(undefined1 **)(unaff_EBP - 0x113c);
        }
        *(int *)(unaff_EBP - 0x1138) = *(int *)(unaff_EBP - 0x1138) + 1;
        *(int *)(unaff_EBP - 0x113c) = *(int *)(unaff_EBP - 0x113c) + 1;
      }
      *(int *)(unaff_EBP - 0x1134) = *(int *)(unaff_EBP - 0x1134) + 1;
    }
    **(undefined1 **)(unaff_EBP - 0x1138) = 0;
    *(int *)(unaff_EBP - 0x1138) = *(int *)(unaff_EBP - 0x1138) + 1;
    **(undefined1 **)(unaff_EBP - 0x1138) = 0;
    *(undefined4 *)(unaff_EBP - 0x12c0) = *(undefined4 *)(unaff_EBP - 0x1130);
    LVar4 = FUN_00405640(*(void **)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + 0xc),
                         *(BYTE **)(unaff_EBP - 0x12c0));
    *(LSTATUS *)(unaff_EBP - 0x18) = LVar4;
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  if (*(int *)(unaff_EBP - 0x1130) != unaff_EBP - 0x112c) {
    Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)(unaff_EBP - 0x1130));
  }
  if (*(int *)(unaff_EBP - 0x18) == 0) {
    uVar5 = FUN_00402fa0(*(void **)(unaff_EBP - 0x1318),*(undefined1 **)(unaff_EBP + 0x10));
    *(undefined4 *)(unaff_EBP - 0x20) = uVar5;
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x14) = 0x204;
    _HRESULT_FROM_WIN32(*(ulong *)(unaff_EBP - 0x18));
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uVar1 = *(uint *)(unaff_EBP - 0x24);
  *(undefined4 *)(unaff_EBP - 0x1338) = 0x405631;
  __security_check_cookie(uVar1 ^ unaff_EBP);
  return;
}



/* Function: Catch_All@0040548c */

undefined4 Catch_All_0040548c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 4;
  return 0x4054a0;
}



/* Function: FUN_00405499 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00405499(void)

{
  uint uVar1;
  LSTATUS LVar2;
  undefined4 uVar3;
  uint unaff_EBP;
  
  *(undefined4 *)(unaff_EBP - 4) = 4;
  if (*(int *)(unaff_EBP - 0x1270) == 0) {
    *(undefined4 *)(unaff_EBP - 0x127c) = 0x80004005;
    *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
    if (*(int *)(unaff_EBP - 0x1270) != unaff_EBP - 0x126c) {
      Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)(unaff_EBP - 0x1270));
    }
  }
  else {
    _memset(*(void **)(unaff_EBP - 0x1270),0,*(size_t *)(unaff_EBP - 0x1160));
    *(undefined4 *)(unaff_EBP - 0x1274) = 0;
    while (*(int *)(unaff_EBP - 0x1274) < *(int *)(unaff_EBP - 0x1164)) {
      *(int *)(unaff_EBP - 0x1334) = *(int *)(unaff_EBP - 0x1274) / 2 + *(int *)(unaff_EBP - 0x1270)
      ;
      uVar3 = *(undefined4 *)(unaff_EBP - 0x1274);
      uVar1 = FUN_004057a0(*(char *)((unaff_EBP - 0x1028) + *(int *)(unaff_EBP - 0x1274)));
      **(byte **)(unaff_EBP - 0x1334) =
           **(byte **)(unaff_EBP - 0x1334) |
           (byte)((uVar1 & 0xff) << (('\x01' - ((byte)uVar3 & 1)) * '\x04' & 0x1f));
      *(int *)(unaff_EBP - 0x1274) = *(int *)(unaff_EBP - 0x1274) + 1;
    }
    *(undefined4 *)(unaff_EBP - 0x1310) = *(undefined4 *)(unaff_EBP - 0x1270);
    *(undefined4 *)(unaff_EBP - 0x1314) = **(undefined4 **)(unaff_EBP + 8);
    LVar2 = RegSetValueExA(*(HKEY *)(unaff_EBP - 0x1314),*(LPCSTR *)(unaff_EBP + 0xc),0,3,
                           *(BYTE **)(unaff_EBP - 0x1310),*(DWORD *)(unaff_EBP - 0x1160));
    *(LSTATUS *)(unaff_EBP - 0x18) = LVar2;
    *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
    if (*(int *)(unaff_EBP - 0x1270) != unaff_EBP - 0x126c) {
      Concurrency::SchedulerPolicy::~SchedulerPolicy((SchedulerPolicy *)(unaff_EBP - 0x1270));
    }
    if (*(int *)(unaff_EBP - 0x18) == 0) {
      uVar3 = FUN_00402fa0(*(void **)(unaff_EBP - 0x1318),*(undefined1 **)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP - 0x20) = uVar3;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x14) = 0x204;
      _HRESULT_FROM_WIN32(*(ulong *)(unaff_EBP - 0x18));
    }
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uVar1 = *(uint *)(unaff_EBP - 0x24);
  *(undefined4 *)(unaff_EBP - 0x1338) = 0x405631;
  __security_check_cookie(uVar1 ^ unaff_EBP);
  return;
}



/* Function: FUN_00405640 */

LSTATUS __thiscall FUN_00405640(void *this,LPCSTR param_1,BYTE *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  BYTE *local_c;
  DWORD local_8;
  
  if (param_2 == (BYTE *)0x0) {
    LVar1 = 0xd;
  }
  else {
    local_8 = 0;
    local_c = param_2;
    do {
      iVar2 = lstrlenA((LPCSTR)local_c);
      iVar2 = iVar2 + 1;
      local_c = local_c + iVar2;
      local_8 = local_8 + iVar2;
    } while (iVar2 != 1);
                    /* WARNING: Load size is inaccurate */
    LVar1 = RegSetValueExA(*this,param_1,0,7,param_2,local_8);
  }
  return LVar1;
}



/* Function: FUN_004056d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004056d0(LPCSTR param_1,undefined2 *param_2)

{
  int iVar1;
  uint local_8;
  
  if ((DAT_00429b28 & 1) == 0) {
    DAT_00429b28 = DAT_00429b28 | 1;
    _DAT_00429b08 = PTR_DAT_004223b4;
    _DAT_00429b0c = 8;
    _DAT_00429b10 = PTR_DAT_004223b8;
    _DAT_00429b14 = 0x4008;
    _DAT_00429b18 = PTR_DAT_004223bc;
    _DAT_00429b1c = 0x13;
    _DAT_00429b20 = PTR_DAT_004223c0;
    _DAT_00429b24 = 0x11;
  }
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    iVar1 = lstrcmpiA(param_1,*(LPCSTR *)(&DAT_00429b08 + local_8 * 8));
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  *param_2 = *(undefined2 *)(&DAT_00429b0c + local_8 * 8);
  return 1;
}



/* Function: FUN_004057a0 */

uint __cdecl FUN_004057a0(char param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    uVar1 = (int)param_1 - 0x30;
    break;
  default:
    uVar1 = 0;
    break;
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
    uVar1 = (int)param_1 - 0x37;
    break;
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
    uVar1 = (int)param_1 - 0x57;
  }
  return uVar1;
}



/* Function: FUN_00405840 */

undefined4 FUN_00405840(undefined1 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004058a0 */

undefined4 FUN_004058a0(LPCSTR param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xb < local_8) {
      return 1;
    }
    iVar1 = lstrcmpiA(param_1,(&PTR_s_AppID_004223f4)[local_8]);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}



/* Function: FUN_004058f0 */

bool FUN_004058f0(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_8;
  
  local_8 = 0;
  LVar1 = RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_8,(LPDWORD)0x0,
                           (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (PFILETIME)0x0);
  return LVar1 == 0 && local_8 != 0;
}



/* Function: FUN_00405940 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00405940(void *this,char *param_1)

{
  undefined1 local_100c [4096];
  uint local_c;
  int local_8;
  
  local_8 = 0x40594d;
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  if ((*param_1 == '=') && (local_8 = FUN_00402fa0(this,param_1), -1 < local_8)) {
    FUN_00402f10((undefined4 *)this);
    local_8 = FUN_00402fa0(this,local_100c);
    if (-1 < local_8) {
      local_8 = FUN_00402fa0(this,param_1);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004059e0 */

undefined4 * __fastcall FUN_004059e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Function: FUN_00405a10 */

char * __cdecl FUN_00405a10(char *param_1,char *param_2)

{
  char cVar1;
  char *local_8;
  
  do {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    local_8 = param_2;
    while (*local_8 != '\0') {
      cVar1 = *local_8;
      local_8 = local_8 + 1;
      if (*param_1 == cVar1) {
        return param_1 + 1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}



/* Function: FUN_00405a70 */

void FUN_00405a70(void)

{
  _OSVERSIONINFOA local_a4;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_a4.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_a4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405ac0 */

LONG __fastcall FUN_00405ac0(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 8));
  if (((LVar1 == 0) && (*(int *)(param_1 + 0x154) == 0)) && (*(int *)(param_1 + 0x158) != 0)) {
    PostThreadMessageA(*(DWORD *)(param_1 + 0x150),0x12,0,0);
  }
  return LVar1;
}



/* Function: FUN_00405b20 */

bool __fastcall FUN_00405b20(int param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hSCObject;
  bool bVar1;
  
  bVar1 = false;
  hSCManager = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
  if (hSCManager != (SC_HANDLE)0x0) {
    hSCObject = OpenServiceA(hSCManager,(LPCSTR)(param_1 + 0x30),1);
    bVar1 = hSCObject != (SC_HANDLE)0x0;
    if (bVar1) {
      CloseServiceHandle(hSCObject);
    }
    CloseServiceHandle(hSCManager);
  }
  return bVar1;
}



/* Function: FUN_00405b90 */

void __cdecl FUN_00405b90(int param_1,char *param_2)

{
  char *local_110;
  char local_10c [256];
  uint local_c;
  HANDLE local_8;
  
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  _vsprintf(local_10c,param_2,&stack0x0000000c);
  local_110 = local_10c;
  if (*(int *)(param_1 + 0x154) == 0) {
    _puts(local_10c);
  }
  else {
    local_8 = RegisterEventSourceA((LPCSTR)0x0,(LPCSTR)(param_1 + 0x30));
    if (local_8 != (HANDLE)0x0) {
      ReportEventA(local_8,4,0,0,(PSID)0x0,1,0,&local_110,(LPVOID)0x0);
      DeregisterEventSource(local_8);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405c50 */

void FUN_00405c50(void)

{
  FUN_00405c70(&DAT_00429b30);
  return;
}



/* Function: FUN_00405c70 */

void __fastcall FUN_00405c70(void *param_1)

{
  SERVICE_STATUS_HANDLE pSVar1;
  
  *(undefined4 *)((int)param_1 + 0x138) = 2;
  pSVar1 = RegisterServiceCtrlHandlerA((LPCSTR)((int)param_1 + 0x30),FUN_00405d20);
  *(SERVICE_STATUS_HANDLE *)((int)param_1 + 0x130) = pSVar1;
  if (*(int *)((int)param_1 + 0x130) == 0) {
    FUN_00405b90((int)param_1,"Handler not installed");
  }
  else {
    FUN_00405dc0(param_1,2);
    *(undefined4 *)((int)param_1 + 0x140) = 0;
    *(undefined4 *)((int)param_1 + 0x148) = 0;
    *(undefined4 *)((int)param_1 + 0x14c) = 0;
    FUN_00405e00(param_1);
    FUN_00405dc0(param_1,1);
    FUN_00405b90((int)param_1,"Service stopped");
  }
  return;
}



/* Function: FUN_00405d20 */

void FUN_00405d20(undefined4 param_1)

{
  FUN_00405d40(&DAT_00429b30,param_1);
  return;
}



/* Function: FUN_00405d40 */

void __thiscall FUN_00405d40(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 1:
    FUN_00405dc0(this,3);
    PostThreadMessageA(*(DWORD *)((int)this + 0x150),0x12,0,0);
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    FUN_00405b90((int)this,"Bad service request");
  }
  return;
}



/* Function: FUN_00405dc0 */

void __thiscall FUN_00405dc0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x138) = param_1;
  SetServiceStatus(*(SERVICE_STATUS_HANDLE *)((int)this + 0x130),
                   (LPSERVICE_STATUS)((int)this + 0x134));
  return;
}



/* Function: FUN_00405e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00405e00(void *param_1)

{
  HRESULT HVar1;
  BOOL BVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  tagMSG local_20;
  
  local_24 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  _DAT_00429c80 = GetCurrentThreadId();
  CoInitialize((LPVOID)0x0);
  local_34 = DAT_00422678;
  local_30 = DAT_0042267c;
  local_2c = DAT_00422680;
  local_28 = DAT_00422684;
  HVar1 = CoInitializeSecurity
                    (&local_34,0,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,0,0,(void *)0x0,8,
                     (void *)0x0);
  if (HVar1 < 0) {
    FUN_00405b90((int)param_1,"CoInitializeSecurity failed: Error #0x%x");
  }
  FUN_00405ef0(&DAT_00429b30,0x14);
  FUN_00405b90((int)param_1,"Service started");
  FUN_00405dc0(param_1,4);
  while( true ) {
    BVar2 = GetMessageA(&local_20,(HWND)0x0,0,0);
    if (BVar2 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_00406040(0x429b30);
  CoUninitialize();
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405ef0 */

/* WARNING: Removing unreachable block (ram,0x00405f4e) */

int __thiscall FUN_00405ef0(void *this,ulong param_1)

{
  ulong *local_1c;
  int local_18;
  int local_c;
  int *local_8;
  
  local_c = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    local_8 = *(int **)((int)this + 0x2c);
    while ((*local_8 != 0 && (local_c == 0))) {
      local_c = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject((ulong)local_8,param_1);
      local_8 = local_8 + 9;
    }
  }
  if (local_c == 0) {
    local_18 = 1;
    local_1c = DAT_00429ccc;
    while ((local_1c < DAT_00429cd0 && (-1 < local_18))) {
      if (*local_1c != 0) {
        local_18 = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*local_1c,param_1);
      }
      local_1c = local_1c + 1;
    }
    local_c = local_18;
  }
  return local_c;
}



/* Function: RegisterClassObject */

/* Library Function - Single Match
    public: long __stdcall ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(unsigned long,unsigned
   long)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(ulong param_1,ulong param_2)

{
  DWORD in_stack_0000000c;
  int local_c;
  LPUNKNOWN local_8;
  
  local_8 = (LPUNKNOWN)0x0;
  if (*(int *)(param_1 + 8) == 0) {
    local_c = 0;
  }
  else {
    local_c = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),&DAT_00422688,&local_8);
    if (-1 < local_c) {
      local_c = CoRegisterClassObject
                          (*(IID **)param_1,local_8,param_2,in_stack_0000000c,
                           (LPDWORD)(param_1 + 0x14));
    }
    if (local_8 != (IUnknown *)0x0) {
      (*local_8->lpVtbl->Release)(local_8);
    }
  }
  return local_c;
}



/* Function: FUN_00406040 */

int __fastcall FUN_00406040(int param_1)

{
  int local_c;
  int *local_8;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_8 = *(int **)(param_1 + 0x2c);
    while ((*local_8 != 0 && (local_c == 0))) {
      if (local_8[5] == 0) {
        local_c = 0;
      }
      else {
        local_c = CoRevokeClassObject(local_8[5]);
      }
      local_8 = local_8 + 9;
    }
  }
  if (local_c == 0) {
    local_c = FUN_004060c0(0x429cc4);
  }
  return local_c;
}



/* Function: FUN_004060c0 */

int FUN_004060c0(int param_1)

{
  int *local_c;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = -0x7ff8ffa9;
  }
  else {
    local_8 = 0;
    local_c = *(int **)(param_1 + 8);
    while ((local_c < *(int **)(param_1 + 0xc) && (local_8 == 0))) {
      if (*local_c != 0) {
        if (*(int *)(*local_c + 0x14) == 0) {
          local_8 = 0;
        }
        else {
          local_8 = CoRevokeClassObject(*(DWORD *)(*local_c + 0x14));
        }
      }
      local_c = local_c + 1;
    }
  }
  return local_8;
}



/* Function: FUN_00406140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406140(HINSTANCE param_1)

{
  char cVar1;
  int iVar2;
  LPSTR pCStack0000000c;
  int local_2b0;
  HKEY local_2ac;
  HKEY local_2a8;
  LSTATUS local_2a4;
  HKEY local_2a0 [88];
  undefined4 local_140;
  int local_13c;
  int local_138;
  undefined2 local_134;
  undefined1 local_132;
  DWORD local_130;
  BYTE local_12c [268];
  uint local_20;
  LSTATUS local_1c;
  HKEY local_18;
  undefined4 local_14;
  LPCSTR local_10;
  HKEY local_c;
  undefined4 local_8;
  
  local_20 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  pCStack0000000c = GetCommandLineA();
  FUN_00408870(&DAT_00429b30,0x428008,param_1,100);
  _DAT_00429c84 = 1;
  _DAT_00429c88 = 0;
  local_134 = DAT_004226fc;
  local_132 = DAT_004226fe;
  local_10 = FUN_00405a10(pCStack0000000c,(char *)&local_134);
  do {
    if (local_10 == (LPCSTR)0x0) {
      local_c = (HKEY)0x0;
      local_8 = 0;
      local_2a0[0] = (HKEY)0x0;
      local_2a4 = RegOpenKeyExA((HKEY)0x80000000,"AppID",0,0x20019,local_2a0);
      if (local_2a4 == 0) {
        local_2a4 = ATL::CRegKey::Close((CRegKey *)&local_c);
        local_c = local_2a0[0];
      }
      local_1c = local_2a4;
      if (local_2a4 == 0) {
        local_18 = (HKEY)0x0;
        local_14 = 0;
        local_2a8 = local_c;
        local_2ac = (HKEY)0x0;
        local_2b0 = RegOpenKeyExA(local_c,"{13486D44-4821-11D2-A494-3CB306C10000}",0,0x20019,
                                  &local_2ac);
        if (local_2b0 == 0) {
          local_2b0 = ATL::CRegKey::Close((CRegKey *)&local_18);
          local_18 = local_2ac;
        }
        local_1c = local_2b0;
        if (local_2b0 == 0) {
          local_130 = 0x104;
          local_1c = FUN_00406420(&local_18,"LocalService",local_12c,&local_130);
          _DAT_00429c84 = 0;
          if ((local_1c == 0) && (cVar1 = FUN_00405a70(), cVar1 != '\0')) {
            _DAT_00429c84 = 1;
          }
          FUN_00408c20(&DAT_00429b30);
          local_140 = DAT_00429c70;
          ATL::CRegKey::Close((CRegKey *)&local_18);
          ATL::CRegKey::Close((CRegKey *)&local_c);
        }
        else {
          local_13c = local_2b0;
          ATL::CRegKey::Close((CRegKey *)&local_18);
          ATL::CRegKey::Close((CRegKey *)&local_c);
        }
      }
      else {
        local_138 = local_2a4;
        ATL::CRegKey::Close((CRegKey *)&local_c);
      }
LAB_0040640d:
      __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar2 = lstrcmpiA(local_10,"UnregServer");
    if (iVar2 == 0) {
      FUN_004084b0((int *)&DAT_00429b30);
      goto LAB_0040640d;
    }
    iVar2 = lstrcmpiA(local_10,"RegServer");
    if (iVar2 == 0) {
      FUN_004064d0(&DAT_00429b30,1,0);
      goto LAB_0040640d;
    }
    iVar2 = lstrcmpiA(local_10,"Service");
    if (iVar2 == 0) {
      FUN_004064d0(&DAT_00429b30,1,1);
      goto LAB_0040640d;
    }
    iVar2 = lstrcmpiA(local_10,"Embedding");
    if (iVar2 == 0) {
      _DAT_00429c88 = 1;
    }
    local_10 = FUN_00405a10(local_10,(char *)&local_134);
  } while( true );
}



/* Function: FUN_00406420 */

LSTATUS __thiscall FUN_00406420(void *this,LPCSTR param_1,LPBYTE param_2,DWORD *param_3)

{
  LSTATUS LVar1;
  DWORD local_c;
  DWORD local_8;
  
  local_c = *param_3;
  *param_3 = 0;
                    /* WARNING: Load size is inaccurate */
  LVar1 = RegQueryValueExA(*this,param_1,(LPDWORD)0x0,&local_8,param_2,&local_c);
  if (LVar1 == 0) {
    if ((local_8 == 1) || (local_8 == 2)) {
      if (param_2 != (LPBYTE)0x0) {
        if (local_c == 0) {
          *param_2 = '\0';
        }
        else if (param_2[local_c - 1] != '\0') {
          return 0xd;
        }
      }
      *param_3 = local_c;
      LVar1 = 0;
    }
    else {
      LVar1 = 0xd;
    }
  }
  return LVar1;
}



/* Function: FUN_004064d0 */

/* WARNING: Removing unreachable block (ram,0x00406924) */
/* WARNING: Removing unreachable block (ram,0x00406978) */

void __thiscall FUN_004064d0(void *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LSTATUS LVar4;
  BYTE local_1b4 [4];
  HKEY local_1b0;
  HKEY local_1ac;
  HKEY local_1a8;
  HKEY local_1a4;
  HKEY local_1a0;
  LSTATUS local_19c;
  HKEY local_198;
  LSTATUS local_194;
  HKEY local_190;
  HKEY local_18c;
  LSTATUS local_188;
  HKEY local_184 [12];
  HRESULT local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  int local_144;
  BYTE local_140 [264];
  uint local_38;
  int local_34;
  HRESULT local_30;
  HKEY local_2c;
  undefined4 local_28;
  LSTATUS local_24;
  HKEY local_20;
  undefined4 local_1c;
  HKEY local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00421008;
  local_10 = ExceptionList;
  uVar2 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = uVar2;
  local_30 = CoInitialize((LPVOID)0x0);
  if (-1 < local_30) {
    FUN_00408af0((int)this);
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this + 0x20))(this,100,1,0,uVar2);
    local_18 = (HKEY)0x0;
    local_14 = 0;
    local_8 = 0;
    local_184[0] = (HKEY)0x0;
    local_188 = RegOpenKeyExA((HKEY)0x80000000,"AppID",0,0x2001f,local_184);
    if (local_188 == 0) {
      local_188 = ATL::CRegKey::Close((CRegKey *)&local_18);
      local_18 = local_184[0];
    }
    local_24 = local_188;
    if (local_188 == 0) {
      local_20 = (HKEY)0x0;
      local_1c = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18c = local_18;
      local_190 = (HKEY)0x0;
      local_194 = RegOpenKeyExA(local_18,"{13486D44-4821-11D2-A494-3CB306C10000}",0,0x2001f,
                                &local_190);
      if (local_194 == 0) {
        local_194 = ATL::CRegKey::Close((CRegKey *)&local_20);
        local_20 = local_190;
      }
      local_24 = local_194;
      if (local_194 == 0) {
        RegDeleteValueA(local_20,"LocalService");
        local_2c = (HKEY)0x0;
        local_28 = 0;
        local_8 = CONCAT31(local_8._1_3_,2);
        cVar1 = FUN_00405a70();
        if (cVar1 == '\0') {
          local_198 = (HKEY)0x0;
          local_19c = RegOpenKeyExA((HKEY)0x80000002,
                                    "Software\\Microsoft\\Windows\\CurrentVersion\\RunServices",0,
                                    0x2001f,&local_198);
          if (local_19c == 0) {
            local_19c = ATL::CRegKey::Close((CRegKey *)&local_2c);
            local_2c = local_198;
          }
          local_24 = local_19c;
          if (local_19c == 0) {
            RegDeleteValueA(local_2c,"OpcEnum");
          }
        }
        iVar3 = FUN_00410ef0();
        if (iVar3 == 0) {
          local_34 = FUN_00410fb0("{13486D44-4821-11D2-A494-3CB306C10000}",(uchar *)"Everyone",1,1,7
                                 );
          if (local_34 != 0) {
            local_14c = 0x80004005;
            local_8._0_1_ = 1;
            ATL::CRegKey::Close((CRegKey *)&local_2c);
            local_8 = (uint)local_8._1_3_ << 8;
            ATL::CRegKey::Close((CRegKey *)&local_20);
            local_8 = 0xffffffff;
            ATL::CRegKey::Close((CRegKey *)&local_18);
            goto LAB_00406a89;
          }
          local_34 = FUN_00411110("{13486D44-4821-11D2-A494-3CB306C10000}",(uchar *)"Everyone",1,1,
                                  0x1f);
          if (local_34 != 0) {
            local_150 = 0x80004005;
            local_8._0_1_ = 1;
            ATL::CRegKey::Close((CRegKey *)&local_2c);
            local_8 = (uint)local_8._1_3_ << 8;
            ATL::CRegKey::Close((CRegKey *)&local_20);
            local_8 = 0xffffffff;
            ATL::CRegKey::Close((CRegKey *)&local_18);
            goto LAB_00406a89;
          }
        }
        else {
          local_1a0 = local_20;
          LVar4 = RegQueryValueExA(local_20,"LaunchPermission",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0
                                   ,(LPDWORD)0x0);
          if (LVar4 != 0) {
            local_1a4 = local_20;
            local_24 = RegSetValueExA(local_20,"LaunchPermission",0,3,&DAT_004280c8,0x6c);
          }
          local_1a8 = local_20;
          LVar4 = RegQueryValueExA(local_20,"AccessPermission",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0
                                   ,(LPDWORD)0x0);
          if (LVar4 != 0) {
            local_1ac = local_20;
            local_24 = RegSetValueExA(local_20,"AccessPermission",0,3,&DAT_004280c8,0x6c);
          }
        }
        local_1b0 = local_20;
        LVar4 = RegQueryValueExA(local_20,"AuthenticationLevel",(LPDWORD)0x0,(LPDWORD)0x0,
                                 (LPBYTE)0x0,(LPDWORD)0x0);
        if (LVar4 != 0) {
          local_1b4[0] = '\x01';
          local_1b4[1] = '\0';
          local_1b4[2] = '\0';
          local_1b4[3] = '\0';
          RegSetValueExA(local_20,"AuthenticationLevel",0,4,local_1b4,4);
        }
        if (param_2 != 0) {
          iVar3 = lstrlenA("OpcEnum");
          RegSetValueExA(local_20,"LocalService",0,1,(BYTE *)"OpcEnum",iVar3 + 1);
          cVar1 = FUN_00405a70();
          if (cVar1 == '\0') {
            GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_140,0x104);
            if (&stack0x00000000 != (undefined1 *)0x140) {
              iVar3 = lstrlenA((LPCSTR)local_140);
              RegSetValueExA(local_2c,"OpcEnum",0,1,local_140,iVar3 + 1);
            }
          }
          else {
            iVar3 = lstrlenA("-Service");
            RegSetValueExA(local_20,"ServiceParameters",0,1,(BYTE *)"-Service",iVar3 + 1);
            FUN_004089d0((int)this);
          }
        }
        local_30 = FUN_00406ab0(this,param_1,(void *)0x0);
        CoUninitialize();
        local_154 = local_30;
        local_8._0_1_ = 1;
        ATL::CRegKey::Close((CRegKey *)&local_2c);
        local_8 = (uint)local_8._1_3_ << 8;
        ATL::CRegKey::Close((CRegKey *)&local_20);
        local_8 = 0xffffffff;
        if (local_18 != (HKEY)0x0) {
          RegCloseKey(local_18);
          local_18 = (HKEY)0x0;
        }
        local_14 = 0;
      }
      else {
        local_148 = local_194;
        local_8 = local_8 & 0xffffff00;
        ATL::CRegKey::Close((CRegKey *)&local_20);
        local_8 = 0xffffffff;
        ATL::CRegKey::Close((CRegKey *)&local_18);
      }
    }
    else {
      local_144 = local_188;
      local_8 = 0xffffffff;
      ATL::CRegKey::Close((CRegKey *)&local_18);
    }
  }
LAB_00406a89:
  ExceptionList = local_10;
  __security_check_cookie(local_38 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406ab0 */

int __thiscall FUN_00406ab0(void *this,int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  int local_188;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = *(int **)((int)this + 0x2c);
  if (local_8 != (int *)0x0) {
    for (; *local_8 != 0; local_8 = local_8 + 9) {
      if ((param_2 == (void *)0x0) || (iVar1 = _memcmp(param_2,(void *)*local_8,0x10), iVar1 == 0))
      {
        local_c = (*(code *)local_8[1])(1);
        if (local_c < 0) break;
        iVar1 = 1;
        piVar2 = (int *)(*(code *)local_8[7])();
        local_c = FUN_00406bb0((GUID *)*local_8,piVar2,iVar1);
        if (local_c < 0) break;
      }
    }
  }
  if (-1 < local_c) {
    local_188 = FUN_00407570(0x429cc4,param_1,param_2);
    if ((-1 < local_188) && (DAT_00429ae4 != (code *)0x0)) {
      local_188 = (*DAT_00429ae4)(DAT_00429c90);
    }
    local_c = local_188;
  }
  return local_c;
}



/* Function: FUN_00406bb0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00406c60) */
/* WARNING: Removing unreachable block (ram,0x00406be1) */

void FUN_00406bb0(GUID *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  uint cbMultiByte;
  char cVar3;
  int iVar4;
  errno_t eVar5;
  longlong lVar6;
  LPSTR local_1fc;
  LPSTR local_1f8;
  LPSTR local_190;
  int local_178;
  uint local_170;
  uint local_16c;
  char local_154 [128];
  DWORD local_d4;
  HKEY local_d0;
  undefined4 local_cc;
  LSTATUS local_c8;
  HKEY local_c4;
  undefined4 local_c0;
  OLECHAR local_bc [64];
  LPSTR local_3c;
  undefined4 *local_38;
  uint local_34;
  UINT local_30;
  LPCWSTR local_28;
  int *local_24;
  int *local_20;
  HRESULT local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_24 = (int *)0x0;
  if (param_2 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    if ((((param_1->Data1 == DAT_00422cfc) &&
         (iVar4._0_2_ = param_1->Data2, iVar4._2_2_ = param_1->Data3, iVar4 == DAT_00422d00)) &&
        (*(int *)param_1->Data4 == DAT_00422d04)) && (*(int *)(param_1->Data4 + 4) == DAT_00422d08))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_24 = (int *)0x0;
    }
    else {
      local_1c = CoCreateInstance((IID *)&DAT_00422cec,(LPUNKNOWN)0x0,1,(IID *)&DAT_004227e0,
                                  &local_24);
      if (local_1c < 0) {
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))(local_24);
        }
      }
      else {
        local_1c = 0;
        for (local_20 = param_2; *local_20 != 0; local_20 = local_20 + 2) {
          puVar1 = (undefined4 *)local_20[1];
          local_18 = *puVar1;
          local_14 = puVar1[1];
          local_10 = puVar1[2];
          local_c = puVar1[3];
          if (param_3 == 0) {
            if (*local_20 == 1) {
              (**(code **)(*local_24 + 0x18))(local_24,param_1,1,&local_18);
            }
            else {
              (**(code **)(*local_24 + 0x20))(local_24,param_1,1,&local_18);
            }
          }
          else {
            if (*local_20 == 1) {
              local_1c = (**(code **)(*local_24 + 0x14))(local_24,param_1,1,&local_18);
            }
            else {
              local_1c = (**(code **)(*local_24 + 0x1c))(local_24,param_1,1,&local_18);
            }
            if (local_1c < 0) {
              if (local_24 != (int *)0x0) {
                (**(code **)(*local_24 + 8))(local_24);
              }
              goto LAB_00407429;
            }
          }
        }
        if (param_3 == 0) {
          StringFromGUID2(param_1,local_bc,0x40);
          local_30 = 3;
          local_38 = (undefined4 *)0x0;
          local_28 = local_bc;
          if (local_28 == (LPCWSTR)0x0) {
            local_1f8 = (LPSTR)0x0;
          }
          else {
            iVar4 = lstrlenW(local_28);
            local_34 = iVar4 + 1;
            lVar6 = __allmul(local_34,(int)local_34 >> 0x1f,2,0);
            local_16c = (uint)((ulonglong)lVar6 >> 0x20);
            if ((((int)local_16c < 1) &&
                ((local_170 = (uint)lVar6, lVar6 < 0 || (local_170 < 0x80000000)))) &&
               ((local_16c < 0x80000000 || ((-2 < (int)local_16c && (0x7fffffff < local_170)))))) {
              local_34 = local_170;
              local_178 = 0;
            }
            else {
              local_178 = -0x7ff8ffa9;
            }
            if (local_178 < 0) {
              local_1fc = (LPSTR)0x0;
            }
            else {
              if (((int)local_34 < 0x401) && (cVar3 = FUN_004018b0(), cVar3 != '\0')) {
                local_190 = &stack0xfffffdf0;
              }
              else {
                local_190 = (LPSTR)FUN_00408c90(&local_38,local_34);
              }
              cbMultiByte = local_34;
              if ((local_190 == (LPSTR)0x0) || (local_28 == (LPCWSTR)0x0)) {
                local_1fc = (LPSTR)0x0;
              }
              else {
                *local_190 = '\0';
                iVar4 = WideCharToMultiByte(local_30,0,local_28,-1,local_190,cbMultiByte,(LPCSTR)0x0
                                            ,(LPBOOL)0x0);
                if (iVar4 == 0) {
                  local_1fc = (LPSTR)0x0;
                }
                else {
                  local_1fc = local_190;
                }
              }
            }
            local_1f8 = local_1fc;
          }
          local_3c = local_1f8;
          if (local_1f8 != (LPSTR)0x0) {
            eVar5 = _strcpy_s(local_154,0x80,"CLSID\\");
            ATL::AtlCrtErrorCheck(eVar5);
            eVar5 = _strcat_s(local_154,0x80,local_3c);
            ATL::AtlCrtErrorCheck(eVar5);
            eVar5 = _strcat_s(local_154,0x80,"\\Required Categories");
            ATL::AtlCrtErrorCheck(eVar5);
            local_d0 = (HKEY)0x80000000;
            local_cc = 0;
            local_c4 = (HKEY)0x0;
            local_c0 = 0;
            local_d4 = 0;
            local_c8 = FUN_00404a90(&local_c4,(HKEY)0x80000000,local_154,0x20019);
            if (local_c8 == 0) {
              local_c8 = RegQueryInfoKeyA(local_c4,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_d4,
                                          (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                          (LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
              if (local_c4 != (HKEY)0x0) {
                RegCloseKey(local_c4);
                local_c4 = (HKEY)0x0;
              }
              local_c0 = 0;
              if ((local_c8 == 0) && (local_d4 == 0)) {
                RegDeleteKeyA(local_d0,local_154);
              }
            }
            eVar5 = _strcpy_s(local_154,0x80,"CLSID\\");
            switch(eVar5) {
            case 0:
            case 0x50:
              break;
            default:
              FUN_00402270(0x80004005);
              break;
            case 0xc:
              FUN_00402270(0x8007000e);
              break;
            case 0x16:
            case 0x22:
              FUN_00402270(0x80070057);
            }
            eVar5 = _strcat_s(local_154,0x80,local_3c);
            switch(eVar5) {
            case 0:
            case 0x50:
              break;
            default:
              FUN_00402270(0x80004005);
              break;
            case 0xc:
              FUN_00402270(0x8007000e);
              break;
            case 0x16:
            case 0x22:
              FUN_00402270(0x80070057);
            }
            eVar5 = _strcat_s(local_154,0x80,"\\Implemented Categories");
            switch(eVar5) {
            case 0:
            case 0x50:
              break;
            default:
              FUN_00402270(0x80004005);
              break;
            case 0xc:
              FUN_00402270(0x8007000e);
              break;
            case 0x16:
            case 0x22:
              FUN_00402270(0x80070057);
            }
            local_c8 = FUN_00404a90(&local_c4,local_d0,local_154,0x20019);
            if (local_c8 == 0) {
              local_c8 = RegQueryInfoKeyA(local_c4,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_d4,
                                          (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                          (LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
              if (local_c4 != (HKEY)0x0) {
                RegCloseKey(local_c4);
                local_c4 = (HKEY)0x0;
              }
              local_c0 = 0;
              if ((local_c8 == 0) && (local_d4 == 0)) {
                RegDeleteKeyA(local_d0,local_154);
              }
            }
            if (local_c4 != (HKEY)0x0) {
              RegCloseKey(local_c4);
              local_c4 = (HKEY)0x0;
            }
            local_c0 = 0;
            if (local_d0 != (HKEY)0x0) {
              RegCloseKey(local_d0);
              local_d0 = (HKEY)0x0;
            }
            local_cc = 0;
          }
          while (puVar1 = local_38, local_38 != (undefined4 *)0x0) {
            local_38 = (undefined4 *)*local_38;
            _free(puVar1);
          }
        }
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))(local_24);
        }
      }
    }
  }
LAB_00407429:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407570 */

int FUN_00407570(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *local_c;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = -0x7ff8ffa9;
  }
  else {
    local_8 = 0;
    for (local_c = *(int **)(param_1 + 8); local_c < *(int **)(param_1 + 0xc); local_c = local_c + 1
        ) {
      if ((*local_c != 0) &&
         ((puVar1 = (undefined4 *)*local_c, param_3 == (void *)0x0 ||
          (iVar2 = _memcmp(param_3,(void *)*puVar1,0x10), iVar2 == 0)))) {
        local_8 = (*(code *)puVar1[1])(1);
        if (local_8 < 0) break;
        iVar2 = 1;
        piVar3 = (int *)(*(code *)puVar1[7])();
        local_8 = FUN_00406bb0((GUID *)*puVar1,piVar3,iVar2);
        if (local_8 < 0) break;
      }
    }
    if ((-1 < local_8) && (param_2 != 0)) {
      local_8 = FUN_00407650(*(HMODULE *)(param_1 + 4),(LPCWSTR)0x0);
    }
  }
  return local_8;
}



/* Function: FUN_00407650 */

void FUN_00407650(HMODULE param_1,LPCWSTR param_2)

{
  rsize_t _MaxCount;
  errno_t eVar1;
  int iVar2;
  HMODULE hModule;
  char local_22d;
  wchar_t local_22c [259];
  undefined2 local_26;
  uint local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  FARPROC local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_20 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_8 = (int *)0x0;
  local_c = FUN_00407880(param_1,param_2,&local_10,&local_8);
  if (-1 < local_c) {
    local_1c = (wchar_t *)0x0;
    local_18 = (wchar_t *)0x0;
    local_c = (**(code **)(*local_8 + 0x24))(local_8,0xffffffff,0,0,0,&local_18);
    if ((-1 < local_c) && (local_18 != (wchar_t *)0x0)) {
      _MaxCount = Ordinal_7(local_18);
      eVar1 = _wcsncpy_s(local_22c,0x104,local_18,_MaxCount);
      ATL::AtlCrtErrorCheck(eVar1);
      local_26 = 0;
      iVar2 = FUN_00408440(local_22c);
      local_22c[iVar2] = L'\0';
      local_1c = local_22c;
    }
    local_14 = (FARPROC)0x0;
    local_22d = '\0';
    if (&stack0x00000000 == (undefined1 *)0x22d) {
      local_c = -0x7fffbffd;
    }
    else {
      local_22d = DAT_00429aec;
      local_c = 0;
    }
    if (local_c < 0) {
      Ordinal_6(local_18);
      FUN_00408fa0((int *)&local_8);
      Ordinal_6(local_10);
      goto LAB_0040786f;
    }
    if (local_22d == '\x01') {
      hModule = GetModuleHandleW(L"OLEAUT32.DLL");
      if (hModule != (HMODULE)0x0) {
        local_14 = GetProcAddress(hModule,"RegisterTypeLibForUser");
      }
    }
    if (local_14 == (FARPROC)0x0) {
      local_14 = Ordinal_163_exref;
    }
    local_c = (*local_14)(local_8,local_10,local_1c);
    Ordinal_6(local_18);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  Ordinal_6(local_10);
LAB_0040786f:
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407880 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00407956) */

void FUN_00407880(HMODULE param_1,LPCWSTR param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  errno_t eVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  LPWSTR local_258;
  LPWSTR local_254;
  LPWSTR local_248;
  LPWSTR local_244;
  LPCSTR local_238;
  LPCSTR local_234;
  LPWSTR local_21c;
  int local_204;
  uint local_1fc;
  uint local_1f8;
  LPWSTR local_1e0;
  int local_1c8;
  uint local_1c0;
  uint local_1bc;
  LPSTR local_1a4;
  int local_18c;
  uint local_184;
  uint local_180;
  undefined4 local_150;
  undefined1 local_14c;
  uint local_148;
  LPCSTR local_144;
  uint local_140;
  LPWSTR local_13c;
  int local_138;
  LPCSTR local_134;
  DWORD local_130;
  undefined4 *local_12c;
  uint local_128;
  CHAR local_124 [272];
  uint local_14;
  UINT local_10;
  LPCSTR local_c;
  LPCWSTR local_8;
  
  local_14 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  if ((param_3 != (int *)0x0) && (param_4 != (undefined4 *)0x0)) {
    *param_3 = 0;
    *param_4 = 0;
    local_10 = 3;
    local_12c = (undefined4 *)0x0;
    local_130 = GetModuleFileNameA(param_1,local_124,0x104);
    if (local_130 == 0) {
      ATL::AtlHresultFromLastError();
      while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar1);
      }
    }
    else if (local_130 == 0x104) {
      while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar1);
      }
    }
    else {
      local_134 = (LPCSTR)0x0;
      local_134 = FUN_004083d0(local_124);
      if (param_2 != (LPCWSTR)0x0) {
        local_8 = param_2;
        if (param_2 == (LPCWSTR)0x0) {
          local_234 = (LPCSTR)0x0;
        }
        else {
          iVar4 = lstrlenW(param_2);
          local_128 = iVar4 + 1;
          lVar6 = __allmul(local_128,(int)local_128 >> 0x1f,2,0);
          local_180 = (uint)((ulonglong)lVar6 >> 0x20);
          if ((((int)local_180 < 1) &&
              ((local_184 = (uint)lVar6, lVar6 < 0 || (local_184 < 0x80000000)))) &&
             ((local_180 < 0x80000000 || ((-2 < (int)local_180 && (0x7fffffff < local_184)))))) {
            local_128 = local_184;
            local_18c = 0;
          }
          else {
            local_18c = -0x7ff8ffa9;
          }
          if (local_18c < 0) {
            local_238 = (LPCSTR)0x0;
          }
          else {
            if (((int)local_128 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
              local_1a4 = &stack0xfffffda0;
            }
            else {
              local_1a4 = (LPSTR)FUN_00408c90(&local_12c,local_128);
            }
            uVar5 = local_128;
            if ((local_1a4 == (LPSTR)0x0) || (local_8 == (LPCWSTR)0x0)) {
              local_238 = (LPCSTR)0x0;
            }
            else {
              *local_1a4 = '\0';
              iVar4 = WideCharToMultiByte(local_10,0,local_8,-1,local_1a4,uVar5,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
              if (iVar4 == 0) {
                local_238 = (LPCSTR)0x0;
              }
              else {
                local_238 = local_1a4;
              }
            }
          }
          local_234 = local_238;
        }
        local_144 = local_234;
        if (local_234 == (LPCSTR)0x0) {
          while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
            local_12c = (undefined4 *)*local_12c;
            _free(puVar1);
          }
          goto LAB_004082e4;
        }
        local_140 = lstrlenA(local_234);
        local_148 = local_130 + local_140;
        if (((local_148 < local_130) || (local_148 < local_140)) || (0x10d < local_148)) {
          while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
            local_12c = (undefined4 *)*local_12c;
            _free(puVar1);
          }
          goto LAB_004082e4;
        }
        eVar3 = _strcpy_s(local_124 + local_130,0x10e - local_130,local_144);
        switch(eVar3) {
        case 0:
        case 0x50:
          break;
        default:
          FUN_00402270(0x80004005);
          break;
        case 0xc:
          FUN_00402270(0x8007000e);
          break;
        case 0x16:
        case 0x22:
          FUN_00402270(0x80070057);
        }
      }
      local_c = local_124;
      if (local_c == (LPCSTR)0x0) {
        local_244 = (LPWSTR)0x0;
      }
      else {
        iVar4 = lstrlenA(local_c);
        local_128 = iVar4 + 1;
        lVar6 = __allmul(local_128,(int)local_128 >> 0x1f,2,0);
        local_1bc = (uint)((ulonglong)lVar6 >> 0x20);
        if ((((int)local_1bc < 1) &&
            ((local_1c0 = (uint)lVar6, lVar6 < 0 || (local_1c0 < 0x80000000)))) &&
           ((local_1bc < 0x80000000 || ((-2 < (int)local_1bc && (0x7fffffff < local_1c0)))))) {
          local_128 = local_1c0;
          local_1c8 = 0;
        }
        else {
          local_1c8 = -0x7ff8ffa9;
        }
        if (local_1c8 < 0) {
          local_248 = (LPWSTR)0x0;
        }
        else {
          if (((int)local_128 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
            local_1e0 = (LPWSTR)&stack0xfffffda0;
          }
          else {
            local_1e0 = (LPWSTR)FUN_00408c90(&local_12c,local_128);
          }
          uVar5 = local_128 >> 1;
          if ((local_1e0 == (LPWSTR)0x0) || (local_c == (LPCSTR)0x0)) {
            local_248 = (LPWSTR)0x0;
          }
          else {
            *local_1e0 = L'\0';
            iVar4 = MultiByteToWideChar(local_10,0,local_c,-1,local_1e0,uVar5);
            if (iVar4 == 0) {
              local_248 = (LPWSTR)0x0;
            }
            else {
              local_248 = local_1e0;
            }
          }
        }
        local_244 = local_248;
      }
      local_13c = local_244;
      if (local_244 == (LPWSTR)0x0) {
        while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
          local_12c = (undefined4 *)*local_12c;
          _free(puVar1);
        }
      }
      else {
        local_138 = Ordinal_161();
        if (local_138 < 0) {
          local_150 = DAT_00422824;
          local_14c = DAT_00422828;
          if ((char *)0x104 < local_134 + (5 - (int)local_124)) {
            while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
              local_12c = (undefined4 *)*local_12c;
              _free(puVar1);
            }
            goto LAB_004082e4;
          }
          eVar3 = _strcpy_s(local_134,0x10e - ((int)local_134 - (int)local_124),(char *)&local_150);
          switch(eVar3) {
          case 0:
          case 0x50:
            break;
          default:
            FUN_00402270(0x80004005);
            break;
          case 0xc:
            FUN_00402270(0x8007000e);
            break;
          case 0x16:
          case 0x22:
            FUN_00402270(0x80070057);
          }
          local_c = local_124;
          if (local_c == (LPCSTR)0x0) {
            local_254 = (LPWSTR)0x0;
          }
          else {
            iVar4 = lstrlenA(local_c);
            local_128 = iVar4 + 1;
            lVar6 = __allmul(local_128,(int)local_128 >> 0x1f,2,0);
            local_1f8 = (uint)((ulonglong)lVar6 >> 0x20);
            if ((((int)local_1f8 < 1) &&
                ((local_1fc = (uint)lVar6, lVar6 < 0 || (local_1fc < 0x80000000)))) &&
               ((local_1f8 < 0x80000000 || ((-2 < (int)local_1f8 && (0x7fffffff < local_1fc)))))) {
              local_128 = local_1fc;
              local_204 = 0;
            }
            else {
              local_204 = -0x7ff8ffa9;
            }
            if (local_204 < 0) {
              local_258 = (LPWSTR)0x0;
            }
            else {
              if (((int)local_128 < 0x401) && (cVar2 = FUN_004018b0(), cVar2 != '\0')) {
                local_21c = (LPWSTR)&stack0xfffffd98;
              }
              else {
                local_21c = (LPWSTR)FUN_00408c90(&local_12c,local_128);
              }
              uVar5 = local_128 >> 1;
              if ((local_21c == (LPWSTR)0x0) || (local_c == (LPCSTR)0x0)) {
                local_258 = (LPWSTR)0x0;
              }
              else {
                *local_21c = L'\0';
                iVar4 = MultiByteToWideChar(local_10,0,local_c,-1,local_21c,uVar5);
                if (iVar4 == 0) {
                  local_258 = (LPWSTR)0x0;
                }
                else {
                  local_258 = local_21c;
                }
              }
            }
            local_254 = local_258;
          }
          local_13c = local_254;
          if (local_254 == (LPWSTR)0x0) {
            while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
              local_12c = (undefined4 *)*local_12c;
              _free(puVar1);
            }
            goto LAB_004082e4;
          }
          local_138 = Ordinal_161(local_254,param_4);
        }
        if (-1 < local_138) {
          iVar4 = Ordinal_2(local_13c);
          *param_3 = iVar4;
          if (*param_3 == 0) {
            local_138 = -0x7ff8fff2;
          }
        }
        while (puVar1 = local_12c, local_12c != (undefined4 *)0x0) {
          local_12c = (undefined4 *)*local_12c;
          _free(puVar1);
        }
      }
    }
  }
LAB_004082e4:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004083d0 */

LPCSTR __cdecl FUN_004083d0(LPSTR param_1)

{
  LPCSTR local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = (LPCSTR)0x0;
  }
  else {
    local_8 = (LPCSTR)0x0;
    for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
      if (*param_1 == '.') {
        local_8 = param_1;
      }
      else if (*param_1 == '\\') {
        local_8 = (LPCSTR)0x0;
      }
    }
    if (local_8 == (LPCSTR)0x0) {
      local_8 = param_1;
    }
  }
  return local_8;
}



/* Function: FUN_00408440 */

int FUN_00408440(LPWSTR param_1)

{
  WCHAR WVar1;
  int iVar2;
  LPWSTR pWVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == (LPWSTR)0x0) {
    iVar2 = 0;
  }
  else {
    local_8 = param_1;
    local_c = param_1;
    while (*local_c != L'\0') {
      pWVar3 = CharNextW(local_c);
      if (((*local_c == L'\\') || (*local_c == L'/')) ||
         (WVar1 = *local_c, local_c = pWVar3, WVar1 == L':')) {
        local_c = pWVar3;
        local_8 = pWVar3;
      }
    }
    iVar2 = (int)local_8 - (int)param_1 >> 1;
  }
  return iVar2;
}



/* Function: FUN_004084b0 */

HRESULT __fastcall FUN_004084b0(int *param_1)

{
  HRESULT HVar1;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    (**(code **)(*param_1 + 0x20))(param_1,100,0,0);
    FUN_00408af0((int)param_1);
    FUN_00408510(param_1,0,(void *)0x0);
    CoUninitialize();
    HVar1 = 0;
  }
  return HVar1;
}



/* Function: FUN_00408510 */

int __thiscall FUN_00408510(void *this,int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  int local_188;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = *(int **)((int)this + 0x2c);
  if (local_8 != (int *)0x0) {
    for (; *local_8 != 0; local_8 = local_8 + 9) {
      if ((param_2 == (void *)0x0) || (iVar1 = _memcmp(param_2,(void *)*local_8,0x10), iVar1 == 0))
      {
        iVar1 = 0;
        piVar2 = (int *)(*(code *)local_8[7])();
        local_c = FUN_00406bb0((GUID *)*local_8,piVar2,iVar1);
        if ((local_c < 0) || (local_c = (*(code *)local_8[1])(0), local_c < 0)) break;
      }
    }
  }
  if (-1 < local_c) {
    local_188 = 0;
    if (DAT_00429ae8 != (code *)0x0) {
      local_188 = (*DAT_00429ae8)();
    }
    if (-1 < local_188) {
      local_188 = FUN_00408610(0x429cc4,param_1,param_2);
    }
    local_c = local_188;
  }
  return local_c;
}



/* Function: FUN_00408610 */

int FUN_00408610(int param_1,int param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *local_c;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = -0x7ff8ffa9;
  }
  else {
    local_8 = 0;
    for (local_c = *(int **)(param_1 + 8); local_c < *(int **)(param_1 + 0xc); local_c = local_c + 1
        ) {
      if ((*local_c != 0) &&
         ((puVar1 = (undefined4 *)*local_c, param_3 == (void *)0x0 ||
          (iVar2 = _memcmp(param_3,(void *)*puVar1,0x10), iVar2 == 0)))) {
        iVar2 = 0;
        piVar3 = (int *)(*(code *)puVar1[7])();
        local_8 = FUN_00406bb0((GUID *)*puVar1,piVar3,iVar2);
        if ((local_8 < 0) || (local_8 = (*(code *)puVar1[1])(0), local_8 < 0)) break;
      }
    }
    if ((-1 < local_8) && (param_2 != 0)) {
      local_8 = FUN_004086f0(*(HMODULE *)(param_1 + 4),(LPCWSTR)0x0);
    }
  }
  return local_8;
}



/* Function: FUN_004086f0 */

int FUN_004086f0(HMODULE param_1,LPCWSTR param_2)

{
  int iVar1;
  HMODULE hModule;
  char local_19;
  FARPROC local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  local_c = FUN_00407880(param_1,param_2,&local_10,&local_8);
  if ((-1 < local_c) && (local_c = (**(code **)(*local_8 + 0x1c))(local_8,&local_14), -1 < local_c))
  {
    local_18 = (FARPROC)0x0;
    local_19 = '\0';
    if (&stack0x00000000 == (undefined1 *)0x19) {
      local_c = -0x7fffbffd;
    }
    else {
      local_19 = DAT_00429aec;
      local_c = 0;
    }
    iVar1 = local_c;
    if (local_c < 0) {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      Ordinal_6(local_10);
      return iVar1;
    }
    if ((local_19 == '\x01') &&
       (hModule = GetModuleHandleW(L"OLEAUT32.DLL"), hModule != (HMODULE)0x0)) {
      local_18 = GetProcAddress(hModule,"UnRegisterTypeLibForUser");
    }
    if (local_18 == (FARPROC)0x0) {
      local_18 = Ordinal_186_exref;
    }
    local_c = (*local_18)(local_14,(uint)*(ushort *)(local_14 + 0x18),
                          (uint)*(ushort *)(local_14 + 0x1a),*(undefined4 *)(local_14 + 0x10),
                          *(undefined4 *)(local_14 + 0x14));
    (**(code **)(*local_8 + 0x30))(local_8,local_14);
  }
  iVar1 = local_c;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  Ordinal_6(local_10);
  return iVar1;
}



/* Function: FUN_00408870 */

void __thiscall FUN_00408870(void *this,int param_1,HINSTANCE param_2,UINT param_3)

{
  FUN_00408920(this,param_1,param_2,(undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x154) = 1;
  LoadStringA(param_2,param_3,(LPSTR)((int)this + 0x30),0x100);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0x10;
  *(undefined4 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x13c) = 1;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  return;
}



/* Function: FUN_00408920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00408920(void *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *local_c;
  int *local_8;
  
  if (param_3 != (undefined4 *)0x0) {
    _DAT_00429af4 = *param_3;
    _DAT_00429af8 = param_3[1];
    _DAT_00429afc = param_3[2];
    _DAT_00429b00 = param_3[3];
  }
  if ((param_1 != -1) && (*(int *)((int)this + 0x2c) = param_1, *(int *)((int)this + 0x2c) != 0)) {
    for (local_8 = *(int **)((int)this + 0x2c); *local_8 != 0; local_8 = local_8 + 9) {
      (*(code *)local_8[8])(1);
    }
  }
  for (local_c = DAT_00429ccc; local_c < DAT_00429cd0; local_c = local_c + 1) {
    if (*local_c != 0) {
      (**(code **)(*local_c + 0x20))(1);
    }
  }
  return 0;
}



/* Function: FUN_004089d0 */

void __fastcall FUN_004089d0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  CHAR local_11c [268];
  uint local_10;
  SC_HANDLE local_c;
  SC_HANDLE local_8;
  
  local_10 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  bVar1 = FUN_00405b20(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
    if (local_8 == (SC_HANDLE)0x0) {
      MessageBoxA((HWND)0x0,"Couldn\'t open service manager",(LPCSTR)(param_1 + 0x30),0);
    }
    else {
      GetModuleFileNameA((HMODULE)0x0,local_11c,0x104);
      local_c = CreateServiceA(local_8,(LPCSTR)(param_1 + 0x30),(LPCSTR)(param_1 + 0x30),0xf01ff,
                               0x10,3,1,local_11c,(LPCSTR)0x0,(LPDWORD)0x0,"RPCSS",(LPCSTR)0x0,
                               (LPCSTR)0x0);
      if (local_c == (SC_HANDLE)0x0) {
        CloseServiceHandle(local_8);
        MessageBoxA((HWND)0x0,"Couldn\'t create service",(LPCSTR)(param_1 + 0x30),0);
      }
      else {
        CloseServiceHandle(local_c);
        CloseServiceHandle(local_8);
      }
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00408af0 */

undefined4 __fastcall FUN_00408af0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  int local_30;
  _SERVICE_STATUS local_2c;
  SC_HANDLE local_10;
  BOOL local_c;
  SC_HANDLE local_8;
  
  bVar1 = FUN_00405b20(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = 1;
  }
  else {
    local_8 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
    if (local_8 == (SC_HANDLE)0x0) {
      MessageBoxA((HWND)0x0,"Couldn\'t open service manager",(LPCSTR)(param_1 + 0x30),0);
      uVar2 = 0;
    }
    else {
      local_10 = OpenServiceA(local_8,(LPCSTR)(param_1 + 0x30),0x10020);
      if (local_10 == (SC_HANDLE)0x0) {
        CloseServiceHandle(local_8);
        MessageBoxA((HWND)0x0,"Couldn\'t open service",(LPCSTR)(param_1 + 0x30),0);
        uVar2 = 0;
      }
      else {
        ControlService(local_10,1,&local_2c);
        local_c = DeleteService(local_10);
        CloseServiceHandle(local_10);
        CloseServiceHandle(local_8);
        local_30 = 0;
        while( true ) {
          bVar1 = FUN_00405b20(param_1);
          if ((CONCAT31(extraout_var_00,bVar1) == 0) || (99 < local_30)) break;
          Sleep(100);
          local_30 = local_30 + 1;
        }
        if (local_c == 0) {
          MessageBoxA((HWND)0x0,"Service could not be deleted",(LPCSTR)(param_1 + 0x30),0);
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}



/* Function: FUN_00408c20 */

void __fastcall FUN_00408c20(void *param_1)

{
  BOOL BVar1;
  SERVICE_TABLE_ENTRYA local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14.lpServiceName = (LPSTR)((int)param_1 + 0x30);
  local_14.lpServiceProc = FUN_00405c50;
  local_c = 0;
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x154) != 0) {
    BVar1 = StartServiceCtrlDispatcherA(&local_14);
    if (BVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x154) = 0;
    }
  }
  if (*(int *)((int)param_1 + 0x154) == 0) {
    FUN_00405e00(param_1);
  }
  return;
}



/* Function: FUN_00408c90 */

undefined4 * __thiscall FUN_00408c90(void *this,int param_1)

{
  undefined4 *puVar1;
  int local_10;
  size_t local_c;
  
  if (-param_1 - 1U < 8) {
    local_10 = -0x7ff8ffa9;
  }
  else {
    local_c = param_1 + 8;
    local_10 = 0;
  }
  if (local_10 < 0) {
    FUN_00402270(local_10);
  }
  puVar1 = (undefined4 *)_malloc(local_c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    *puVar1 = *this;
    *(undefined4 **)this = puVar1;
    puVar1 = puVar1 + 2;
  }
  return puVar1;
}



/* Function: ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> */

/* Library Function - Single Match
    public: __thiscall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class
   ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<class ATL::CCRTAllocator>(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __thiscall
ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
          (CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *this)

{
  void *_Memory;
  
  while (*(int *)this != 0) {
    _Memory = *(void **)this;
    *(undefined4 *)this = **(undefined4 **)this;
    _free(_Memory);
  }
  return;
}



/* Function: FUN_00408d50 */

void __fastcall FUN_00408d50(int *param_1)

{
  FUN_00408e70(param_1);
  return;
}



/* Function: FUN_00408d70 */

undefined4 __thiscall FUN_00408d70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
                    /* WARNING: Load size is inaccurate */
  pvVar3 = __recalloc(*this,*(int *)((int)this + 8) + 1,4);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    *(void **)this = pvVar3;
    pvVar3 = __recalloc(*(void **)((int)this + 4),*(int *)((int)this + 8) + 1,4);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      *(void **)((int)this + 4) = pvVar3;
      iVar2 = *(int *)((int)this + 8);
                    /* WARNING: Load size is inaccurate */
      puVar1 = (undefined4 *)(*this + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_1;
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 4) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* Function: FUN_00408e70 */

void __fastcall FUN_00408e70(int *param_1)

{
  int local_8;
  
  if (*param_1 != 0) {
    for (local_8 = 0; local_8 < param_1[2]; local_8 = local_8 + 1) {
    }
    _free((void *)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    _free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}



/* Function: FUN_00408ef0 */

undefined4 __thiscall FUN_00408ef0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004093a0(this,param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    if ((iVar1 < 0) || (*(int *)((int)this + 8) <= iVar1)) {
      RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
    }
    uVar2 = *(undefined4 *)(*(int *)((int)this + 4) + iVar1 * 4);
  }
  return uVar2;
}



/* Function: Free */

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall ATL::CAutoVectorPtr<char>::Free(void)
    public: void __thiscall ATL::CAutoVectorPtr<int>::Free(void)
    public: void __thiscall ATL::CAutoVectorPtr<unsigned long>::Free(void)
    public: void __thiscall ATL::CAutoVectorPtr<void *>::Free(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __fastcall Free(undefined4 *param_1)

{
  FUN_004115fe((void *)*param_1);
  *param_1 = 0;
  return;
}



/* Function: ~CTempBuffer<> */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::~CTempBuffer<char,128,class ATL::CCRTAllocator>(void)
    public: __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::~CTempBuffer<unsigned char,128,class ATL::CCRTAllocator>(void)
    public: __thiscall ATL::CTempBuffer<wchar_t,10,class
   ATL::CCRTAllocator>::~CTempBuffer<wchar_t,10,class ATL::CCRTAllocator>(void)
    public: __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::~CTempBuffer<wchar_t,128,class ATL::CCRTAllocator>(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __fastcall ~CTempBuffer<>(SchedulerPolicy *param_1)

{
  if (*(SchedulerPolicy **)param_1 != param_1 + 4) {
    Concurrency::SchedulerPolicy::~SchedulerPolicy(param_1);
  }
  return;
}



/* Function: FUN_00408fa0 */

void __fastcall FUN_00408fa0(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(int *)*param_1 + 8))(*param_1);
  }
  return;
}



/* Function: FUN_00408fd0 */

undefined4 FUN_00408fd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0042103b;
  local_10 = ExceptionList;
  if (param_3 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_3 = 0;
    local_8 = 0;
    puVar1 = (undefined4 *)operator_new(0x28);
    local_8._0_1_ = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00409ae0(puVar1 + 1);
      *puVar1 = ATL::CComClassFactory::vftable;
      *puVar1 = ATL::CComObjectNoLock<class_ATL::CComClassFactory>::vftable;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    uVar2 = FUN_00409092();
    return uVar2;
  }
  return 0x80004003;
}



/* Function: Catch_All@00409085 */

undefined4 Catch_All_00409085(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x409099;
}



/* Function: FUN_00409092 */

undefined4 FUN_00409092(void)

{
  long lVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x24) = *(undefined4 *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x14) + 8;
    lVar1 = ATL::CComCriticalSection::Init(*(CComCriticalSection **)(unaff_EBP + -0x30));
    *(long *)(unaff_EBP + -0x2c) = lVar1;
    if (-1 < *(int *)(unaff_EBP + -0x2c)) {
      *(undefined1 *)(*(int *)(unaff_EBP + -0x30) + 0x18) = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x2c);
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      uVar2 = (**(code **)**(undefined4 **)(unaff_EBP + -0x14))
                        (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      }
      else {
        uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x14))(1);
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar2;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* Function: Init */

/* Library Function - Single Match
    public: long __thiscall ATL::CComCriticalSection::Init(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

long __thiscall ATL::CComCriticalSection::Init(CComCriticalSection *this)

{
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_00428870 ^ 0x425808;
  ExceptionList = &local_14;
  local_8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00409200 */

undefined4 FUN_00409200(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 local_8;
  
  local_8 = 0x80004003;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    if (param_2 != 0) {
      if ((((*param_3 == 0) && (param_3[1] == 0)) && (param_3[2] == 0xc0)) &&
         (param_3[3] == 0x46000000)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 0x80040110;
      }
    }
    local_8 = (**(code **)(param_1 + 0x24))(param_2,param_3,param_4);
  }
  return local_8;
}



/* Function: FUN_004092a0 */

undefined4 FUN_004092a0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*DAT_00429af0 + 8))();
  }
  else {
    (**(code **)(*DAT_00429af0 + 4))();
  }
  return 0;
}



/* Function: FUN_004092e0 */

undefined4 * __thiscall FUN_004092e0(void *this,uint param_1)

{
  FUN_00409310((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409310 */

void __fastcall FUN_00409310(undefined4 *param_1)

{
  *param_1 = ATL::CComClassFactory::vftable;
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  return;
}



/* Function: FUN_00409360 */

undefined4 FUN_00409360(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = FUN_00409710(0,param_2,param_3);
  }
  else {
    local_8 = FUN_004098e0(param_1,param_2,param_3);
  }
  return local_8;
}



/* Function: FUN_004093a0 */

int __thiscall FUN_004093a0(void *this,undefined4 *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)((int)this + 8) <= local_8) {
      return -1;
    }
                    /* WARNING: Load size is inaccurate */
    iVar1 = lstrcmpiA(*(LPCSTR *)(*this + local_8 * 4),(LPCSTR)*param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}



/* Function: FUN_00409410 */

undefined4 __thiscall FUN_00409410(void *this,uint param_1)

{
  if (param_1 < 0x401) {
    *(int *)this = (int)this + 4;
  }
  else {
    AllocateHeap(this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this;
}



/* Function: ~SchedulerPolicy */

/* Library Function - Single Match
    public: __thiscall Concurrency::SchedulerPolicy::~SchedulerPolicy(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Concurrency::SchedulerPolicy::~SchedulerPolicy(SchedulerPolicy *this)

{
  _free(*(void **)this);
  return;
}



/* Function: FUN_00409480 */

undefined4 __thiscall FUN_00409480(void *this,uint param_1)

{
  if (param_1 < 0x101) {
    *(int *)this = (int)this + 4;
  }
  else {
    AllocateHeap(this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this;
}



/* Function: FUN_004094c0 */

void FUN_004094c0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return;
}



/* Function: FUN_004094e0 */

LONG FUN_004094e0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x14))(1);
  }
  return LVar1;
}



/* Function: FUN_00409540 */

int FUN_00409540(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00409570(param_1,(int *)&PTR_DAT_004228f8,param_2,param_3);
  return iVar1;
}



/* Function: FUN_00409570 */

int FUN_00409570(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else if (param_4 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if ((((*param_3 == 0) && (param_3[1] == 0)) && (param_3[2] == 0xc0)) &&
       (param_3[3] == 0x46000000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      piVar3 = (int *)(param_1 + param_2[1]);
      (**(code **)(*piVar3 + 4))(piVar3);
      *param_4 = piVar3;
      iVar2 = 0;
    }
    else {
      for (; param_2[2] != 0; param_2 = param_2 + 3) {
        iVar2 = *param_2;
        if (iVar2 == 0) {
LAB_00409682:
          if (param_2[2] == 1) {
            piVar3 = (int *)(param_1 + param_2[1]);
            (**(code **)(*piVar3 + 4))(piVar3);
            *param_4 = piVar3;
            return 0;
          }
          iVar4 = (*(code *)param_2[2])(param_1,param_3,param_4,param_2[1]);
          if (iVar4 == 0) {
            return 0;
          }
          if ((iVar2 != 0) && (iVar4 < 0)) {
            return iVar4;
          }
        }
        else {
          piVar3 = (int *)*param_2;
          if (((*piVar3 == *param_3) && (piVar3[1] == param_3[1])) &&
             ((piVar3[2] == param_3[2] && (piVar3[3] == param_3[3])))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) goto LAB_00409682;
        }
      }
      iVar2 = -0x7fffbffe;
    }
  }
  return iVar2;
}



/* Function: FUN_00409710 */

undefined4 FUN_00409710(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421060;
  local_10 = ExceptionList;
  if (param_3 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_3 = 0;
    local_8 = 0;
    puVar1 = (undefined4 *)operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ATL::CComObject<class_COpcServerList>::vftable;
      puVar1[1] = ATL::CComObject<class_COpcServerList>::vftable;
      (**(code **)(*DAT_00429af0 + 4))();
    }
    uVar2 = FUN_004097de();
    return uVar2;
  }
  return 0x80004003;
}



/* Function: Catch_All@004097d1 */

undefined4 Catch_All_004097d1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x4097e5;
}



/* Function: FUN_004097de */

undefined4 FUN_004097de(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      uVar1 = (**(code **)**(undefined4 **)(unaff_EBP + -0x14))
                        (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
      }
      else {
        uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x20) + 0x20))(1);
        *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* Function: FUN_00409880 */

HRESULT FUN_00409880(undefined4 param_1,IID *param_2,LPOLESTR *param_3,LPOLESTR *param_4)

{
  HRESULT HVar1;
  
  HVar1 = OleRegGetUserType(param_2,1,param_4);
  if (-1 < HVar1) {
    HVar1 = ProgIDFromCLSID(param_2,param_3);
  }
  return HVar1;
}



/* Function: FUN_004098c0 */

void FUN_004098c0(undefined4 param_1,LPCOLESTR param_2,LPCLSID param_3)

{
  CLSIDFromProgID(param_2,param_3);
  return;
}



/* Function: FUN_004098e0 */

undefined4 FUN_004098e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_004210a1;
  local_10 = ExceptionList;
  if (param_3 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_3 = 0;
    local_8 = 0;
    puVar2 = (undefined4 *)operator_new(0x14);
    uVar1 = local_8 >> 8;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      local_8._0_1_ = 2;
      *puVar2 = ATL::CComAggObject<class_COpcServerList>::vftable;
      FUN_00409eb0(puVar2 + 2,param_1);
      local_8._0_1_ = 3;
      (**(code **)(*DAT_00429af0 + 4))();
      uVar1 = (uint)local_8._1_3_;
    }
    local_8 = uVar1 << 8;
    uVar3 = FUN_004099d0();
    return uVar3;
  }
  return 0x80004003;
}



/* Function: Catch_All@004099c3 */

undefined4 Catch_All_004099c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x4099d7;
}



/* Function: FUN_004099d0 */

undefined4 FUN_004099d0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (-1 < *(int *)(unaff_EBP + -0x30)) {
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x30);
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      uVar1 = (**(code **)**(undefined4 **)(unaff_EBP + -0x14))
                        (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10));
      *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
      }
      else {
        uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0xc))(1);
        *(undefined4 *)(unaff_EBP + -0x40) = uVar1;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* Function: FUN_00409a90 */

undefined4 * __thiscall FUN_00409a90(void *this,uint param_1)

{
  *(undefined ***)this = ATL::CComObjectNoLock<class_ATL::CComClassFactory>::vftable;
  *(undefined4 *)((int)this + 4) = 0xc0000001;
  FUN_00409310((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409ae0 */

undefined4 * __fastcall FUN_00409ae0(undefined4 *param_1)

{
  *param_1 = 0;
  _memset(param_1 + 1,0,0x18);
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



/* Function: AllocateHeap */

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,10,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __thiscall AllocateHeap(void *this,size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_00402270(0x8007000e);
  }
  *(void **)this = pvVar1;
  return;
}



/* Function: FUN_00409b60 */

int FUN_00409b60(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + 1;
  return *piVar1;
}



/* Function: FUN_00409ba0 */

int FUN_00409ba0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 2;
  *piVar2 = *piVar2 + -1;
  iVar1 = *piVar2;
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x20))(1);
  }
  return iVar1;
}



/* Function: FUN_00409c10 */

int FUN_00409c10(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00409570(param_1,(int *)&PTR_DAT_00422978,param_2,param_3);
  return iVar1;
}



/* Function: FUN_00409c40 */

int FUN_00409c40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + 1;
  return *piVar1;
}



/* Function: FUN_00409c80 */

int FUN_00409c80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 1;
  *piVar2 = *piVar2 + -1;
  iVar1 = *piVar2;
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  return iVar1;
}



/* Function: FUN_00409cf0 */

int FUN_00409cf0(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    local_8 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    local_8 = 0;
    if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) &&
       (param_2[3] == 0x46000000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *param_3 = param_1;
      (**(code **)(*param_1 + 4))(param_1);
    }
    else {
      local_8 = FUN_00409570((int)(param_1 + 2),(int *)&PTR_DAT_00422978,param_2,param_3);
    }
  }
  return local_8;
}



/* Function: FUN_00409da0 */

undefined4 * __thiscall FUN_00409da0(void *this,uint param_1)

{
  *(undefined ***)this = ATL::CComObject<class_COpcServerList>::vftable;
  *(undefined ***)((int)this + 4) = ATL::CComObject<class_COpcServerList>::vftable;
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  (**(code **)(*DAT_00429af0 + 8))();
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409e00 */

undefined4 * __thiscall FUN_00409e00(void *this,uint param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004210d6;
  local_10 = ExceptionList;
  uVar1 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = ATL::CComAggObject<class_COpcServerList>::vftable;
  local_8 = 1;
  *(undefined4 *)((int)this + 4) = 0xc0000001;
  (**(code **)(*DAT_00429af0 + 8))(uVar1);
  local_8 = 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_00409ea0 */

void FUN_00409ea0(void)

{
  return;
}



/* Function: FUN_00409eb0 */

undefined4 * __thiscall FUN_00409eb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = ATL::CComContainedObject<class_COpcServerList>::vftable;
  *(undefined ***)((int)this + 4) = ATL::CComContainedObject<class_COpcServerList>::vftable;
  *(undefined4 *)((int)this + 8) = param_1;
  return (undefined4 *)this;
}



/* Function: FUN_00409ef0 */

void FUN_00409ef0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(undefined4 *)(param_1 + 8));
  return;
}



/* Function: FUN_00409f20 */

void FUN_00409f20(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 8));
  return;
}



/* Function: FUN_00409f50 */

void FUN_00409f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}



/* Function: FUN_00409f80 */

int __cdecl FUN_00409f80(int param_1,uint param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (-param_1 - 1U < param_2) {
    local_c = -0x7ff8ffa9;
  }
  else {
    local_8 = param_1 + param_2;
    local_c = 0;
  }
  if (local_c < 0) {
    FUN_00402270(local_c);
  }
  return local_8;
}



/* Function: FUN_00409fc0 */

undefined4 __cdecl FUN_00409fc0(uint param_1,uint param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20);
  if (local_10 == 0) {
    local_14 = (undefined4)((ulonglong)param_1 * (ulonglong)param_2);
    local_8 = local_14;
    local_c = 0;
  }
  else {
    local_c = -0x7ff8ffa9;
  }
  if (local_c < 0) {
    FUN_00402270(local_c);
  }
  return local_8;
}



/* Function: FUN_0040a010 */

void FUN_0040a010(int param_1)

{
  FUN_00409ba0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040a020 */

void FUN_0040a020(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f50(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_0040a030 */

void FUN_0040a030(int param_1)

{
  FUN_00409b60(param_1 + -4);
  return;
}



/* Function: FUN_0040a040 */

void FUN_0040a040(int param_1)

{
  FUN_00409f20(param_1 + -4);
  return;
}



/* Function: FUN_0040a050 */

void FUN_0040a050(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00409c10(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_0040a060 */

void FUN_0040a060(int param_1)

{
  FUN_00409ef0(param_1 + -4);
  return;
}



/* Function: FUN_0040a070 */

void FUN_0040a070(int param_1,LPCOLESTR param_2,LPCLSID param_3)

{
  FUN_004098c0(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_0040a080 */

int __fastcall FUN_0040a080(int param_1)

{
  long lVar1;
  
  _memset((void *)(param_1 + 0x10),0,0x18);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  DAT_00429af0 = param_1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar1 = ATL::CComCriticalSection::Init((CComCriticalSection *)(param_1 + 0x10));
  if (lVar1 < 0) {
    DAT_00429ae0 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x24;
  }
  return param_1;
}



/* Function: FUN_0040a110 */

void __fastcall FUN_0040a110(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 8));
  return;
}



/* Function: FUN_0040a130 */

void __fastcall FUN_0040a130(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 8));
  return;
}



/* Function: FUN_0040a150 */

undefined4 __fastcall FUN_0040a150(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_0040a170 */

int __thiscall FUN_0040a170(void *this,undefined4 *param_1)

{
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    local_8 = -0x7fffbffd;
  }
  else {
    local_8 = 0;
    if (*(int *)((int)this + 0x28) == 0) {
      local_8 = CoCreateInstance((IID *)&DAT_00422d0c,(LPUNKNOWN)0x0,1,(IID *)&DAT_00422a54,
                                 (LPVOID *)((int)this + 0x28));
    }
    if (-1 < local_8) {
      *param_1 = *(undefined4 *)((int)this + 0x28);
      (**(code **)(**(int **)((int)this + 0x28) + 4))(*(undefined4 *)((int)this + 0x28));
    }
  }
  return local_8;
}



/* Function: FUN_0040a1f0 */

undefined4 FUN_0040a1f0(void)

{
  return 0x80004005;
}



/* Function: FUN_0040a200 */

void FUN_0040a200(int *param_1,LPCSTR param_2,int param_3,int *param_4)

{
  FUN_0040a320(param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040a230 */

void FUN_0040a230(int *param_1,ushort param_2,int param_3,int *param_4)

{
  FUN_00401050(param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040a260 */

undefined4 * __thiscall FUN_0040a260(void *this,uint param_1)

{
  *(undefined ***)this = ATL::CComModule::vftable;
  FUN_0040a2a0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a2a0 */

void __fastcall FUN_0040a2a0(int param_1)

{
  undefined4 local_18;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      if (param_1 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = param_1 + 4;
      }
      FUN_0040b590(local_18);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(undefined4 *)(param_1 + 0x28));
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_0040a320 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0040a531) */
/* WARNING: Removing unreachable block (ram,0x0040a35c) */

void FUN_0040a320(int *param_1,LPCSTR param_2,int param_3,int *param_4)

{
  char cVar1;
  size_t _Size;
  undefined4 *puVar2;
  HMODULE pHVar3;
  int iVar4;
  errno_t eVar5;
  long lVar6;
  uint cchWideChar;
  longlong lVar7;
  int local_a80;
  LPWSTR local_a7c;
  LPWSTR local_a74;
  LPCWSTR local_a70;
  LPWSTR local_a68;
  LPWSTR local_a64;
  LPWSTR local_a10;
  int local_9f8;
  uint local_9f0;
  uint local_9ec;
  WCHAR local_97c;
  undefined2 local_97a [523];
  WCHAR local_564 [520];
  LPWSTR local_154;
  int local_150;
  wchar_t *local_14c;
  int local_148;
  DWORD local_144;
  undefined **local_140;
  int local_13c [4];
  undefined4 *local_12c;
  uint local_128;
  CHAR local_124 [264];
  uint local_1c;
  UINT local_18;
  HMODULE local_14;
  LPCSTR local_10;
  LPCWSTR local_c;
  
  local_1c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_140 = ATL::CRegObject::vftable;
  FUN_004059e0(local_13c);
  local_148 = 0;
  if (param_4 != (int *)0x0) {
    for (; *param_4 != 0; param_4 = param_4 + 2) {
      FUN_00401ca0(&local_140,(LPCWSTR)*param_4,param_4[1]);
    }
  }
  local_148 = (**(code **)(*param_1 + 0x14))();
  if (local_148 < 0) {
    local_140 = ATL::CRegObject::vftable;
    FUN_00402ce0((int)&local_140);
    FUN_00401a80(local_13c);
    FUN_00408e70(local_13c);
  }
  else {
    local_18 = 3;
    local_12c = (undefined4 *)0x0;
    local_14 = DAT_00429c90;
    local_144 = GetModuleFileNameA(DAT_00429c90,local_124,0x104);
    if (local_144 == 0) {
      ATL::AtlHresultFromLastError();
      while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar2);
      }
      local_140 = ATL::CRegObject::vftable;
      FUN_00402ce0((int)&local_140);
      FUN_00401a80(local_13c);
      FUN_00408e70(local_13c);
    }
    else if (local_144 == 0x104) {
      while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
        local_12c = (undefined4 *)*local_12c;
        _free(puVar2);
      }
      local_140 = ATL::CRegObject::vftable;
      FUN_00402ce0((int)&local_140);
      FUN_00401a80(local_13c);
      FUN_00408e70(local_13c);
    }
    else {
      local_154 = (LPWSTR)0x0;
      local_10 = local_124;
      if (local_10 == (LPCSTR)0x0) {
        local_a64 = (LPWSTR)0x0;
      }
      else {
        iVar4 = lstrlenA(local_10);
        local_128 = iVar4 + 1;
        lVar7 = __allmul(local_128,(int)local_128 >> 0x1f,2,0);
        local_9ec = (uint)((ulonglong)lVar7 >> 0x20);
        if ((((int)local_9ec < 1) &&
            ((local_9f0 = (uint)lVar7, lVar7 < 0 || (local_9f0 < 0x80000000)))) &&
           ((local_9ec < 0x80000000 || ((-2 < (int)local_9ec && (0x7fffffff < local_9f0)))))) {
          local_128 = local_9f0;
          local_9f8 = 0;
        }
        else {
          local_9f8 = -0x7ff8ffa9;
        }
        if (local_9f8 < 0) {
          local_a68 = (LPWSTR)0x0;
        }
        else {
          if (((int)local_128 < 0x401) && (cVar1 = FUN_004018b0(), cVar1 != '\0')) {
            local_a10 = (LPWSTR)&stack0xfffff578;
          }
          else {
            _Size = FUN_00409f80(local_128,8);
            puVar2 = (undefined4 *)_malloc(_Size);
            if (puVar2 == (undefined4 *)0x0) {
              local_a10 = (LPWSTR)0x0;
            }
            else {
              *puVar2 = local_12c;
              local_a10 = (LPWSTR)(puVar2 + 2);
              local_12c = puVar2;
            }
          }
          cchWideChar = local_128 >> 1;
          if ((local_a10 == (LPWSTR)0x0) || (local_10 == (LPCSTR)0x0)) {
            local_a68 = (LPWSTR)0x0;
          }
          else {
            *local_a10 = L'\0';
            iVar4 = MultiByteToWideChar(local_18,0,local_10,-1,local_a10,cchWideChar);
            if (iVar4 == 0) {
              local_a68 = (LPWSTR)0x0;
            }
            else {
              local_a68 = local_a10;
            }
          }
        }
        local_a64 = local_a68;
      }
      local_154 = local_a64;
      if (local_a64 == (LPWSTR)0x0) {
        while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
          local_12c = (undefined4 *)*local_12c;
          _free(puVar2);
        }
        local_140 = ATL::CRegObject::vftable;
        FUN_00402ce0((int)&local_140);
        FUN_00401a80(local_13c);
        FUN_00408e70(local_13c);
      }
      else {
        FUN_004019e0(local_564,0x208,local_a64);
        if ((local_14 == (HMODULE)0x0) ||
           (pHVar3 = GetModuleHandleA((LPCSTR)0x0), local_14 == pHVar3)) {
          local_97c = L'\"';
          iVar4 = lstrlenW(local_564);
          eVar5 = _memcpy_s(local_97a,0x416,local_564,iVar4 * 2 + 2);
          if (eVar5 != 0) {
            while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
              local_12c = (undefined4 *)*local_12c;
              _free(puVar2);
            }
            local_140 = ATL::CRegObject::vftable;
            FUN_00402ce0((int)&local_140);
            FUN_00401a80(local_13c);
            FUN_00408e70(local_13c);
            goto LAB_0040ac7f;
          }
          iVar4 = lstrlenW(&local_97c);
          local_97a[iVar4 + -1] = 0x22;
          local_97a[iVar4] = 0;
          local_150 = FUN_00401ca0(&local_140,L"Module",(int)&local_97c);
        }
        else {
          local_150 = FUN_00401ca0(&local_140,L"Module",(int)local_564);
        }
        if (local_150 < 0) {
          while (puVar2 = local_12c, local_12c != (undefined4 *)0x0) {
            local_12c = (undefined4 *)*local_12c;
            _free(puVar2);
          }
          FUN_00401b80(&local_140);
        }
        else {
          local_150 = FUN_00401ca0(&local_140,L"Module_Raw",(int)local_564);
          if (local_150 < 0) {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
            ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                      ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_12c);
            FUN_00401b80(&local_140);
          }
          else {
            local_14c = L"REGISTRY";
            local_10 = param_2;
            if (param_2 == (LPCSTR)0x0) {
              local_a70 = (LPCWSTR)0x0;
            }
            else {
              iVar4 = lstrlenA(param_2);
              local_128 = iVar4 + 1;
              lVar6 = ATL::AtlMultiply<int>((int *)&local_128,local_128,2);
              if (lVar6 < 0) {
                local_a74 = (LPWSTR)0x0;
              }
              else {
                if (((int)local_128 < 0x401) && (cVar1 = FUN_004018b0(), cVar1 != '\0')) {
                  local_a7c = (LPWSTR)&stack0xfffff578;
                }
                else {
                  local_a7c = (LPWSTR)FUN_00408c90(&local_12c,local_128);
                }
                local_a74 = FUN_0040ad00(local_a7c,local_10,local_128 >> 1,local_18);
              }
              local_a70 = local_a74;
            }
            local_c = local_a70;
            if (local_a70 == (LPCWSTR)0x0) {
              ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
              ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                        ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_12c);
              FUN_00401b80(&local_140);
            }
            else {
              if (param_3 == 0) {
                local_a80 = FUN_0040b170(&local_140,local_154,local_a70,local_14c);
              }
              else {
                local_a80 = FUN_0040ad50(&local_140,local_154,local_a70,local_14c);
              }
              local_148 = local_a80;
              ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
              ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
                        ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)&local_12c);
              FUN_00401b80(&local_140);
            }
          }
        }
      }
    }
  }
LAB_0040ac7f:
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: AtlMultiply<int> */

/* Library Function - Single Match
    long __cdecl ATL::AtlMultiply<int>(int *,int,int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

long __cdecl ATL::AtlMultiply<int>(int *param_1,int param_2,int param_3)

{
  long lVar1;
  longlong lVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  lVar2 = __allmul(param_2,param_2 >> 0x1f,param_3,param_3 >> 0x1f);
  local_8 = (uint)((ulonglong)lVar2 >> 0x20);
  if ((((int)local_8 < 1) && ((local_c = (uint)lVar2, lVar2 < 0 || (local_c < 0x80000000)))) &&
     ((local_8 < 0x80000000 || ((-2 < (int)local_8 && (0x7fffffff < local_c)))))) {
    *param_1 = local_c;
    lVar1 = 0;
  }
  else {
    lVar1 = -0x7ff8ffa9;
  }
  return lVar1;
}



/* Function: FUN_0040ad00 */

LPWSTR FUN_0040ad00(LPWSTR param_1,LPCSTR param_2,int param_3,UINT param_4)

{
  int iVar1;
  
  if ((param_1 == (LPWSTR)0x0) || (param_2 == (LPCSTR)0x0)) {
    param_1 = (LPWSTR)0x0;
  }
  else {
    *param_1 = L'\0';
    iVar1 = MultiByteToWideChar(param_4,0,param_2,-1,param_1,param_3);
    if (iVar1 == 0) {
      param_1 = (LPWSTR)0x0;
    }
  }
  return param_1;
}



/* Function: FUN_0040ad50 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_0040ad50(void *param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint local_c8;
  LPCSTR local_bc;
  LPCSTR local_b8;
  LPSTR local_b0;
  LPSTR local_ac;
  LPSTR local_98;
  int local_80;
  uint local_78;
  uint local_74;
  LPSTR local_68;
  int local_50;
  uint local_48;
  uint local_44;
  undefined4 *local_2c;
  uint local_28;
  LPCSTR local_24;
  UINT local_20;
  LPCWSTR local_18;
  LPSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421108;
  local_10 = ExceptionList;
  uVar4 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 3;
  local_2c = (undefined4 *)0x0;
  local_8 = 0;
  local_c8 = uVar4;
  if ((param_3 == (LPCWSTR)0x0) || (param_4 == (LPCWSTR)0x0)) {
    local_8 = 0xffffffff;
    while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
      local_2c = (undefined4 *)*local_2c;
      _free(puVar1);
    }
  }
  else {
    local_18 = param_3;
    if (param_3 == (LPCWSTR)0x0) {
      local_ac = (LPSTR)0x0;
    }
    else {
      iVar5 = lstrlenW(param_3);
      local_28 = iVar5 + 1;
      lVar6 = __allmul(local_28,(int)local_28 >> 0x1f,2,0);
      local_44 = (uint)((ulonglong)lVar6 >> 0x20);
      if ((((int)local_44 < 1) && ((local_48 = (uint)lVar6, lVar6 < 0 || (local_48 < 0x80000000))))
         && ((local_44 < 0x80000000 || ((-2 < (int)local_44 && (0x7fffffff < local_48)))))) {
        local_28 = local_48;
        local_50 = 0;
      }
      else {
        local_50 = -0x7ff8ffa9;
      }
      if (local_50 < 0) {
        local_b0 = (LPSTR)0x0;
      }
      else {
        if (((int)local_28 < 0x401) && (cVar3 = FUN_004018b0(), cVar3 != '\0')) {
          local_68 = (LPSTR)&local_c8;
        }
        else {
          local_68 = (LPSTR)FUN_00408c90(&local_2c,local_28);
        }
        uVar2 = local_28;
        if ((local_68 == (LPSTR)0x0) || (local_18 == (LPCWSTR)0x0)) {
          local_b0 = (LPSTR)0x0;
        }
        else {
          *local_68 = '\0';
          iVar5 = WideCharToMultiByte(local_20,0,local_18,-1,local_68,uVar2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
          if (iVar5 == 0) {
            local_b0 = (LPSTR)0x0;
          }
          else {
            local_b0 = local_68;
          }
        }
      }
      local_ac = local_b0;
    }
    local_14 = local_ac;
    local_18 = param_4;
    if (param_4 == (LPCWSTR)0x0) {
      local_b8 = (LPCSTR)0x0;
    }
    else {
      iVar5 = lstrlenW(param_4);
      local_28 = iVar5 + 1;
      lVar6 = __allmul(local_28,(int)local_28 >> 0x1f,2,0);
      local_74 = (uint)((ulonglong)lVar6 >> 0x20);
      if ((((int)local_74 < 1) && ((local_78 = (uint)lVar6, lVar6 < 0 || (local_78 < 0x80000000))))
         && ((local_74 < 0x80000000 || ((-2 < (int)local_74 && (0x7fffffff < local_78)))))) {
        local_28 = local_78;
        local_80 = 0;
      }
      else {
        local_80 = -0x7ff8ffa9;
      }
      if (local_80 < 0) {
        local_bc = (LPCSTR)0x0;
      }
      else {
        if (((int)local_28 < 0x401) && (cVar3 = FUN_004018b0(), cVar3 != '\0')) {
          local_98 = (LPSTR)&local_c8;
        }
        else {
          local_98 = (LPSTR)FUN_00408c90(&local_2c,local_28);
        }
        uVar2 = local_28;
        if ((local_98 == (LPSTR)0x0) || (local_18 == (LPCWSTR)0x0)) {
          local_bc = (LPCSTR)0x0;
        }
        else {
          *local_98 = '\0';
          iVar5 = WideCharToMultiByte(local_20,0,local_18,-1,local_98,uVar2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
          if (iVar5 == 0) {
            local_bc = (LPCSTR)0x0;
          }
          else {
            local_bc = local_98;
          }
        }
      }
      local_b8 = local_bc;
    }
    local_24 = local_b8;
    if ((local_14 == (LPCSTR)0x0) || (local_b8 == (LPCSTR)0x0)) {
      local_8 = 0xffffffff;
      while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
        local_2c = (undefined4 *)*local_2c;
        _free(puVar1);
      }
    }
    else {
      FUN_004024c0(param_1,param_2,local_14,local_b8);
      local_8 = 0xffffffff;
      while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
        local_2c = (undefined4 *)*local_2c;
        _free(puVar1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b170 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_0040b170(void *param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint local_c8;
  LPCSTR local_bc;
  LPCSTR local_b8;
  LPSTR local_b0;
  LPSTR local_ac;
  LPSTR local_98;
  int local_80;
  uint local_78;
  uint local_74;
  LPSTR local_68;
  int local_50;
  uint local_48;
  uint local_44;
  undefined4 *local_2c;
  uint local_28;
  LPCSTR local_24;
  UINT local_20;
  LPCWSTR local_18;
  LPSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421108;
  local_10 = ExceptionList;
  uVar4 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 3;
  local_2c = (undefined4 *)0x0;
  local_8 = 0;
  local_c8 = uVar4;
  if ((param_3 == (LPCWSTR)0x0) || (param_4 == (LPCWSTR)0x0)) {
    local_8 = 0xffffffff;
    while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
      local_2c = (undefined4 *)*local_2c;
      _free(puVar1);
    }
  }
  else {
    local_18 = param_3;
    if (param_3 == (LPCWSTR)0x0) {
      local_ac = (LPSTR)0x0;
    }
    else {
      iVar5 = lstrlenW(param_3);
      local_28 = iVar5 + 1;
      lVar6 = __allmul(local_28,(int)local_28 >> 0x1f,2,0);
      local_44 = (uint)((ulonglong)lVar6 >> 0x20);
      if ((((int)local_44 < 1) && ((local_48 = (uint)lVar6, lVar6 < 0 || (local_48 < 0x80000000))))
         && ((local_44 < 0x80000000 || ((-2 < (int)local_44 && (0x7fffffff < local_48)))))) {
        local_28 = local_48;
        local_50 = 0;
      }
      else {
        local_50 = -0x7ff8ffa9;
      }
      if (local_50 < 0) {
        local_b0 = (LPSTR)0x0;
      }
      else {
        if (((int)local_28 < 0x401) && (cVar3 = FUN_004018b0(), cVar3 != '\0')) {
          local_68 = (LPSTR)&local_c8;
        }
        else {
          local_68 = (LPSTR)FUN_00408c90(&local_2c,local_28);
        }
        uVar2 = local_28;
        if ((local_68 == (LPSTR)0x0) || (local_18 == (LPCWSTR)0x0)) {
          local_b0 = (LPSTR)0x0;
        }
        else {
          *local_68 = '\0';
          iVar5 = WideCharToMultiByte(local_20,0,local_18,-1,local_68,uVar2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
          if (iVar5 == 0) {
            local_b0 = (LPSTR)0x0;
          }
          else {
            local_b0 = local_68;
          }
        }
      }
      local_ac = local_b0;
    }
    local_14 = local_ac;
    local_18 = param_4;
    if (param_4 == (LPCWSTR)0x0) {
      local_b8 = (LPCSTR)0x0;
    }
    else {
      iVar5 = lstrlenW(param_4);
      local_28 = iVar5 + 1;
      lVar6 = __allmul(local_28,(int)local_28 >> 0x1f,2,0);
      local_74 = (uint)((ulonglong)lVar6 >> 0x20);
      if ((((int)local_74 < 1) && ((local_78 = (uint)lVar6, lVar6 < 0 || (local_78 < 0x80000000))))
         && ((local_74 < 0x80000000 || ((-2 < (int)local_74 && (0x7fffffff < local_78)))))) {
        local_28 = local_78;
        local_80 = 0;
      }
      else {
        local_80 = -0x7ff8ffa9;
      }
      if (local_80 < 0) {
        local_bc = (LPCSTR)0x0;
      }
      else {
        if (((int)local_28 < 0x401) && (cVar3 = FUN_004018b0(), cVar3 != '\0')) {
          local_98 = (LPSTR)&local_c8;
        }
        else {
          local_98 = (LPSTR)FUN_00408c90(&local_2c,local_28);
        }
        uVar2 = local_28;
        if ((local_98 == (LPSTR)0x0) || (local_18 == (LPCWSTR)0x0)) {
          local_bc = (LPCSTR)0x0;
        }
        else {
          *local_98 = '\0';
          iVar5 = WideCharToMultiByte(local_20,0,local_18,-1,local_98,uVar2,(LPCSTR)0x0,(LPBOOL)0x0)
          ;
          if (iVar5 == 0) {
            local_bc = (LPCSTR)0x0;
          }
          else {
            local_bc = local_98;
          }
        }
      }
      local_b8 = local_bc;
    }
    local_24 = local_b8;
    if ((local_14 == (LPCSTR)0x0) || (local_b8 == (LPCSTR)0x0)) {
      local_8 = 0xffffffff;
      while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
        local_2c = (undefined4 *)*local_2c;
        _free(puVar1);
      }
    }
    else {
      FUN_004024c0(param_1,param_2,local_14,local_b8);
      local_8 = 0xffffffff;
      while (puVar1 = local_2c, local_2c != (undefined4 *)0x0) {
        local_2c = (undefined4 *)*local_2c;
        _free(puVar1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b590 */

void FUN_0040b590(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_c;
  
  if (param_1 == 0) {
    RaiseException(0xc0000005,1,0,(ULONG_PTR *)0x0);
  }
  local_c = *(undefined4 **)(param_1 + 8);
  while (local_c != (undefined4 *)0x0) {
    (*(code *)*local_c)(local_c[1]);
    puVar1 = (undefined4 *)local_c[2];
    FUN_004115f3(local_c);
    local_c = puVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Function: FUN_0040b610 */

void __thiscall FUN_0040b610(void *this,int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,L"APPID",&DAT_00422a70,this);
  return;
}



/* Function: FUN_0040b640 */

void FUN_0040b640(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  SchedulerPolicy *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_e0;
  SchedulerPolicy *local_d8;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined4 local_20 [4];
  uint local_10;
  undefined1 local_c [4];
  SchedulerPolicy *local_8;
  
  local_10 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_2c = (int *)0x0;
  local_24 = (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4,param_5,&local_2c);
  if (-1 < local_24) {
    piVar1 = (int *)operator_new(0x18);
    if (piVar1 == (int *)0x0) {
      local_d8 = (SchedulerPolicy *)0x0;
    }
    else {
      local_d8 = (SchedulerPolicy *)FUN_0040c5e0(piVar1);
    }
    local_8 = local_d8;
    while (local_24 = (**(code **)(*local_2c + 0xc))(local_2c,1,local_20,local_c), local_24 == 0) {
      FUN_0040c7a0(local_8,local_20);
    }
    (**(code **)(*local_2c + 8))(local_2c);
    this = local_8;
    if (local_24 < 0) {
      if (local_8 != (SchedulerPolicy *)0x0) {
        FUN_0040cd90((int)local_8);
        Concurrency::SchedulerPolicy::~SchedulerPolicy(this);
        FUN_004115f3(this);
      }
    }
    else {
      local_e0 = (int *)operator_new(0x1c);
      if (local_e0 == (int *)0x0) {
        local_e0 = (int *)0x0;
      }
      else {
        FUN_0040ce30((int)local_e0);
        local_e0[6] = 0;
        *local_e0 = (int)ATL::
                         CComObject<class_ATL::CComEnum<struct_IEnumGUID,&struct__GUID_const_IID_IEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
                         ::vftable;
        (**(code **)(*DAT_00429af0 + 4))();
      }
      local_28 = local_e0;
      if (*(int *)(local_8 + 0x10) - *(int *)(local_8 + 0xc) >> 4 == 0) {
        FUN_0040e500(local_e0,0,0,(int *)0x0,2);
      }
      else {
        iVar4 = 2;
        piVar1 = (int *)0x0;
        iVar2 = FUN_0040c720((int *)local_8);
        iVar2 = iVar2 + 0x10;
        iVar3 = FUN_0040c6c0((int *)local_8);
        FUN_0040e500(local_28,iVar3,iVar2,piVar1,iVar4);
      }
      local_24 = (**(code **)*local_28)(local_28,&DAT_00422d1c,param_6);
      if ((local_24 < 0) && (local_28 != (int *)0x0)) {
        (**(code **)(*local_28 + 0x1c))(1);
      }
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b880 */

void FUN_0040b880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  (**(code **)(*(int *)(param_1 + -4) + 0x1c))(param_1 + -4,param_2,param_3,param_4,param_5,param_6)
  ;
  return;
}



/* Function: FUN_0040b8b0 */

int FUN_0040b8b0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  iVar1 = FUN_0040c970(&local_c,(IID *)&DAT_00422cec,(LPUNKNOWN)0x0,0x17);
  local_8 = iVar1;
  if (iVar1 < 0) {
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
  }
  else {
    if (param_2 == 0) {
      param_2 = -1;
      param_3 = 0;
    }
    if (param_4 == 0) {
      param_4 = -1;
      param_5 = 0;
    }
    if (local_c == (int *)0x0) {
      _com_issue_error(-0x7fffbffd);
    }
    iVar1 = (**(code **)(*local_c + 0x14))(local_c,param_2,param_3,param_4,param_5,param_6);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
  }
  return iVar1;
}



/* Function: FUN_0040b980 */

void FUN_0040b980(int *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *local_110;
  SchedulerPolicy *local_fc;
  int local_ec [9];
  int *local_c8;
  int *local_c4;
  void *local_9c;
  int *local_98;
  int local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  SchedulerPolicy *local_54;
  SchedulerPolicy *local_50;
  int local_4c;
  int *local_48;
  SchedulerPolicy *local_44;
  uint local_40;
  uint local_3c;
  char local_35;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20 [4];
  uint local_10;
  undefined1 local_c [4];
  SchedulerPolicy *local_8;
  
  local_10 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  *param_6 = 0;
  local_48 = (int *)operator_new(0x18);
  if (local_48 == (int *)0x0) {
    local_fc = (SchedulerPolicy *)0x0;
  }
  else {
    local_fc = (SchedulerPolicy *)FUN_0040c5e0(local_48);
  }
  local_44 = local_fc;
  local_8 = local_fc;
  local_24 = (int *)0x0;
  local_2c = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4,param_5,&local_24);
  if (local_2c < 0) {
    local_4c = local_2c;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))(local_24);
    }
  }
  else {
    while (local_2c = (**(code **)(*local_24 + 0xc))(local_24,1,local_20,local_c), piVar3 = local_24
          , local_2c == 0) {
      FUN_0040c7a0(local_8,local_20);
    }
    local_98 = local_24;
    if (local_24 != (int *)0x0) {
      local_24 = (int *)0x0;
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (local_2c < 0) {
      local_54 = local_8;
      local_50 = local_8;
      if (local_8 != (SchedulerPolicy *)0x0) {
        FUN_0040cd90((int)local_8);
        Concurrency::SchedulerPolicy::~SchedulerPolicy(local_50);
        FUN_004115f3(local_50);
      }
      local_58 = local_2c;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(local_24);
      }
    }
    else {
      local_28 = (int *)0x0;
      local_2c = CoCreateInstance((IID *)&DAT_00422a94,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_0042299c,
                                  &local_28);
      if (-1 < local_2c) {
        local_34 = (int *)0x0;
        local_2c = (**(code **)(*local_28 + 0xc))
                             (local_28,param_2,param_3,param_4,param_5,&local_34);
        if (-1 < local_2c) {
          while (local_2c = (**(code **)(*local_34 + 0xc))(local_34,1,local_20,local_c),
                piVar3 = local_34, local_2c == 0) {
            local_35 = '\0';
            local_2c = 0;
            for (local_3c = 0;
                local_3c < (uint)(*(int *)(local_8 + 0x10) - *(int *)(local_8 + 0xc) >> 4);
                local_3c = local_3c + 1) {
              if ((uint)(*(int *)(local_8 + 0x10) - *(int *)(local_8 + 0xc) >> 4) <= local_3c) {
                FUN_00414040();
              }
              local_9c = (void *)(local_3c * 0x10 + *(int *)(local_8 + 0xc));
              iVar1 = _memcmp(local_9c,local_20,0x10);
              if (iVar1 == 0) {
                local_35 = '\x01';
                break;
              }
            }
            if (local_35 == '\0') {
              FUN_0040c7a0(local_8,local_20);
            }
          }
          local_c4 = local_34;
          if (local_34 != (int *)0x0) {
            local_34 = (int *)0x0;
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
        piVar3 = local_28;
        local_c8 = local_28;
        if (local_28 != (int *)0x0) {
          local_28 = (int *)0x0;
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        if (local_34 != (int *)0x0) {
          (**(code **)(*local_34 + 8))(local_34);
        }
      }
      if (param_2 != 0xffffffff) {
        for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
          iVar1 = _memcmp((void *)(local_40 * 0x10 + param_3),&DAT_00422c18,0x10);
          if (iVar1 == 0) {
            FUN_0040bea0(param_1,local_8);
            break;
          }
        }
      }
      local_5c = (int *)operator_new(0x1c);
      if (local_5c == (int *)0x0) {
        local_110 = (int *)0x0;
      }
      else {
        FUN_0040ce30((int)local_5c);
        FUN_0040be80(local_5c + 6);
        *local_5c = (int)ATL::
                         CComObject<class_ATL::CComEnum<struct_IOPCEnumGUID,&struct__GUID_const_IID_IOPCEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
                         ::vftable;
        (**(code **)(*DAT_00429af0 + 4))();
        local_110 = local_5c;
      }
      local_30 = local_110;
      if (*(int *)(local_8 + 0x10) - *(int *)(local_8 + 0xc) >> 4 == 0) {
        FUN_0040e500(local_110,0,0,(int *)0x0,2);
      }
      else {
        FUN_0040e120(local_ec,*(uint *)(local_8 + 0xc),(undefined4 *)local_8);
        iVar1 = FUN_0040dd30(local_ec);
        iVar4 = 2;
        piVar3 = (int *)0x0;
        iVar2 = FUN_0040c720((int *)local_8);
        FUN_0040e500(local_30,iVar1,iVar2 + 0x10,piVar3,iVar4);
      }
      local_2c = (**(code **)*local_30)(local_30,&DAT_00422ac8,param_6);
      if (local_2c < 0) {
        local_64 = local_30;
        local_60 = local_30;
        if (local_30 != (int *)0x0) {
          (**(code **)(*local_30 + 0x1c))(1);
        }
      }
      local_68 = local_2c;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))(local_28);
      }
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(local_24);
      }
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040be80 */

undefined4 * __fastcall FUN_0040be80(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_0040bea0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_0040bea0(void *this,void *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  LPCOLESTR local_97c;
  LPCOLESTR local_978;
  void *local_974;
  void *local_918;
  LPCOLESTR local_914;
  LPCOLESTR local_910;
  int local_90c;
  CLSID local_908;
  uint local_8f8;
  LONG local_8f4;
  HKEY local_8f0;
  CHAR local_8ec [2052];
  DWORD local_e8;
  CHAR local_e4 [204];
  uint local_18;
  LPCSTR local_14;
  UINT local_10;
  int local_8;
  
  local_18 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_10 = 3;
  local_e8 = 0;
  local_974 = this;
  do {
    LVar1 = RegEnumKeyA((HKEY)0x80000000,local_e8,local_e4,200);
    if (LVar1 != 0) {
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    LVar1 = RegOpenKeyExA((HKEY)0x80000000,local_e4,0,0x20019,&local_8f0);
    if (LVar1 == 0) {
      local_8f4 = 0x800;
      LVar1 = RegQueryValueA(local_8f0,"OPC",local_8ec,&local_8f4);
      if (LVar1 == 0) {
        local_14 = local_e4;
        if (local_14 == (LPCSTR)0x0) {
          local_978 = (LPCOLESTR)0x0;
        }
        else {
          local_8 = lstrlenA(local_14);
          local_8 = local_8 + 1;
          if (local_8 < 0x40000000) {
            local_910 = (LPCOLESTR)&local_97c;
            local_97c = local_914;
            if ((&stack0x00000000 == (undefined1 *)0x97c) || (local_14 == (LPCSTR)0x0)) {
              local_97c = (LPCOLESTR)0x0;
              local_910 = (LPCOLESTR)&local_97c;
            }
            else {
                    /* WARNING: Ignoring partial resolution of indirect */
              local_97c._0_2_ = 0;
              local_90c = MultiByteToWideChar(local_10,0,local_14,-1,(LPWSTR)&local_97c,local_8);
              if (local_90c == 0) {
                local_97c = (LPCOLESTR)0x0;
              }
              else {
                local_97c = local_910;
              }
            }
          }
          else {
            local_97c = (LPCOLESTR)0x0;
          }
          local_978 = local_97c;
        }
        CLSIDFromString(local_978,&local_908);
        for (local_8f8 = 0;
            local_8f8 < (uint)(*(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc) >> 4);
            local_8f8 = local_8f8 + 1) {
          if ((uint)(*(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc) >> 4) <= local_8f8
             ) {
            FUN_00414040();
          }
          local_918 = (void *)(local_8f8 * 0x10 + *(int *)((int)param_1 + 0xc));
          iVar2 = _memcmp(local_918,&local_908,0x10);
          if (iVar2 == 0) break;
        }
        if (local_8f8 == *(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc) >> 4) {
          FUN_0040c7a0(param_1,&local_908.Data1);
        }
      }
      RegCloseKey(local_8f0);
    }
    local_e8 = local_e8 + 1;
  } while( true );
}



/* Function: FUN_0040c130 */

int FUN_0040c130(int param_1,IID *param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5
                )

{
  SIZE_T cb;
  int iVar1;
  LPVOID pvVar2;
  
  *param_5 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x10))(param_1 + -4,param_2,param_3,param_4);
  if (-1 < iVar1) {
    iVar1 = FUN_0040c1d0(param_2,param_5);
    if (iVar1 < 0) {
      iVar1 = FUN_004143b5((short *)*param_3);
      cb = iVar1 * 2 + 2;
      pvVar2 = CoTaskMemAlloc(cb);
      *param_5 = pvVar2;
      _memcpy((void *)*param_5,(void *)*param_3,cb);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040c1d0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_0040c1d0(IID *param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  LPVOID pvVar2;
  undefined1 *local_c88;
  undefined1 *local_c84;
  uint *local_c80;
  uint *local_c7c;
  LSTATUS local_c70;
  LSTATUS local_c6c;
  undefined1 *local_c68;
  undefined1 *local_c64;
  int local_c60;
  LSTATUS local_c50;
  undefined4 local_c40;
  uint *local_c3c;
  int local_c38;
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  BYTE *local_c28;
  UINT local_c24;
  DWORD local_c20;
  BYTE local_c1c [1024];
  uint local_81c;
  undefined2 local_818;
  undefined1 local_816;
  undefined1 local_815 [2041];
  uint local_1c;
  LPCWSTR local_18;
  HKEY local_14;
  undefined4 local_10;
  int local_c;
  LPCWSTR local_8;
  
  local_1c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_c24 = 3;
  StringFromCLSID(param_1,&local_8);
  local_81c = DAT_004227d8;
  local_818 = DAT_004227dc;
  local_816 = DAT_004227de;
  _memset(local_815,0,0x7f9);
  local_18 = local_8;
  if (local_8 == (LPCWSTR)0x0) {
    local_c7c = (uint *)0x0;
  }
  else {
    local_c = lstrlenW(local_8);
    local_c = local_c + 1;
    if (local_c < 0x40000000) {
      local_c3c = (uint *)&local_c88;
      local_c80 = (uint *)local_c40;
      if ((&stack0x00000000 == (undefined1 *)0xc88) || (local_18 == (LPCWSTR)0x0)) {
        local_c80 = (uint *)0x0;
        local_c3c = (uint *)&local_c88;
      }
      else {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_c88._0_1_ = 0;
        local_c38 = WideCharToMultiByte(local_c24,0,local_18,-1,(LPSTR)&local_c88,local_c * 2,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        if (local_c38 == 0) {
          local_c80 = (uint *)0x0;
        }
        else {
          local_c80 = local_c3c;
        }
      }
    }
    else {
      local_c80 = (uint *)0x0;
    }
    local_c7c = local_c80;
  }
  FUN_004143e0(&local_81c,local_c7c);
  CoTaskMemFree(local_8);
  FUN_004143e0(&local_81c,(uint *)"\\VersionIndependentProgID");
  local_14 = (HKEY)0x0;
  local_10 = 0;
  LVar1 = FUN_00404a90(&local_14,(HKEY)0x80000000,(LPCSTR)&local_81c,0x20019);
  if (LVar1 == 0) {
    local_c20 = 0x400;
    FUN_00406420(&local_14,(LPCSTR)0x0,local_c1c,&local_c20);
    if (local_c20 == 0) {
      local_c34 = 0x80004005;
      local_c70 = 0;
      if (local_14 != (HKEY)0x0) {
        local_c70 = RegCloseKey(local_14);
        local_14 = (HKEY)0x0;
      }
    }
    else {
      local_c20 = local_c20 << 1;
      pvVar2 = CoTaskMemAlloc(local_c20);
      *param_2 = pvVar2;
      local_c28 = local_c1c;
      if (local_c28 == (BYTE *)0x0) {
        local_c84 = (undefined1 *)0x0;
      }
      else {
        local_c = lstrlenA((LPCSTR)local_c28);
        local_c = local_c + 1;
        if (local_c < 0x40000000) {
          local_c64 = (undefined1 *)&local_c88;
          local_c88 = local_c68;
          if ((&stack0x00000000 == (undefined1 *)0xc88) || (local_c28 == (BYTE *)0x0)) {
            local_c88 = (undefined1 *)0x0;
            local_c64 = (undefined1 *)&local_c88;
          }
          else {
                    /* WARNING: Ignoring partial resolution of indirect */
            local_c88._0_2_ = 0;
            local_c60 = MultiByteToWideChar(local_c24,0,(LPCSTR)local_c28,-1,(LPWSTR)&local_c88,
                                            local_c);
            if (local_c60 == 0) {
              local_c88 = (undefined1 *)0x0;
            }
            else {
              local_c88 = local_c64;
            }
          }
        }
        else {
          local_c88 = (undefined1 *)0x0;
        }
        local_c84 = local_c88;
      }
      _memcpy((void *)*param_2,local_c84,local_c20);
      local_c30 = 0;
      local_c6c = 0;
      if (local_14 != (HKEY)0x0) {
        local_c6c = RegCloseKey(local_14);
        local_14 = (HKEY)0x0;
      }
    }
  }
  else {
    local_c2c = 0x80040154;
    local_c50 = 0;
    if (local_14 != (HKEY)0x0) {
      local_c50 = RegCloseKey(local_14);
      local_14 = (HKEY)0x0;
    }
  }
  local_10 = 0;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040c5e0 */

int * __fastcall FUN_0040c5e0(int *param_1)

{
  undefined4 *local_b4;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421146;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &local_2e;
  local_20 = &local_2d;
  local_8 = 0;
  local_2c = (undefined4 *)FUN_0040eb50(1);
  if (local_2c == (undefined4 *)0x0) {
    local_b4 = (undefined4 *)0x0;
  }
  else {
    *local_2c = param_1;
    local_b4 = local_2c;
  }
  local_24 = local_b4;
  *param_1 = (int)local_b4;
  local_8 = 1;
  local_28 = local_2c;
  FUN_0040ccd0(param_1,0);
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040c6c0 */

void __fastcall FUN_0040c6c0(int *param_1)

{
  uint uVar1;
  int local_c;
  uint local_8;
  
  uVar1 = param_1[3];
  local_c = 0;
  if (((param_1 == (int *)0x0) || (uVar1 < (uint)param_1[3])) || ((uint)param_1[4] < uVar1)) {
    FUN_00414040();
  }
  local_c = *param_1;
  local_8 = uVar1;
  FUN_0040dd30(&local_c);
  return;
}



/* Function: FUN_0040c720 */

void __fastcall FUN_0040c720(int *param_1)

{
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_18 = param_1[4];
  local_c = 0;
  if (((param_1 == (int *)0x0) || (local_18 < (uint)param_1[3])) || ((uint)param_1[4] < local_18)) {
    FUN_00414040();
  }
  local_20 = *param_1;
  local_8 = local_18;
  local_1c = local_18;
  local_c = local_20;
  FUN_0040e1a0(&local_20,-1);
  local_14 = local_20;
  local_10 = local_1c;
  FUN_0040dd30(&local_14);
  return;
}



/* Function: FUN_0040c7a0 */

void __thiscall FUN_0040c7a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uint local_64;
  int local_1c [2];
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  if (*(int *)((int)this + 0xc) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0xc) >> 4;
  }
  if ((uint)(*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4) < local_64) {
    puVar1 = *(undefined4 **)((int)this + 0x10);
    FUN_0040f060(puVar1,1,param_1);
    *(undefined4 **)((int)this + 0x10) = puVar1 + 4;
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 0x10);
    local_14 = 0;
    if (((this == (void *)0x0) || (puVar1 < *(undefined4 **)((int)this + 0xc))) ||
       (*(undefined4 **)((int)this + 0x10) < puVar1)) {
      FUN_00414040();
    }
                    /* WARNING: Load size is inaccurate */
    local_14 = *this;
    local_10 = puVar1;
    local_c = local_14;
    local_8 = puVar1;
    FUN_0040cba0(this,local_1c,local_14,puVar1,param_1);
  }
  return;
}



/* Function: FUN_0040c8b0 */

int FUN_0040c8b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 6;
  *piVar2 = *piVar2 + -1;
  iVar1 = *piVar2;
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return iVar1;
}



/* Function: FUN_0040c920 */

int FUN_0040c920(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00409570(param_1,(int *)&PTR_DAT_00422b1c,param_2,param_3);
  return iVar1;
}



/* Function: FUN_0040c950 */

undefined4 FUN_0040c950(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  return 0;
}



/* Function: FUN_0040c970 */

int __thiscall FUN_0040c970(void *this,IID *param_1,LPUNKNOWN param_2,uint param_3)

{
  LPUNKNOWN local_c;
  HRESULT local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    (**(code **)(**this + 8))(*this);
  }
  if ((param_3 & 0x14) == 0) {
    local_8 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_00422b34,(LPVOID *)this);
  }
  else {
    local_8 = CoCreateInstance(param_1,param_2,param_3,(IID *)&DAT_00422688,&local_c);
    if (-1 < local_8) {
      local_8 = OleRun(local_c);
      if (-1 < local_8) {
        local_8 = (*local_c->lpVtbl->QueryInterface)(local_c,(IID *)&DAT_00422b34,(void **)this);
      }
      (*local_c->lpVtbl->Release)(local_c);
    }
  }
  if (local_8 < 0) {
    *(undefined4 *)this = 0;
  }
  return local_8;
}



/* Function: FUN_0040ca40 */

int FUN_0040ca40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + 1;
  return *piVar1;
}



/* Function: FUN_0040ca80 */

int FUN_0040ca80(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00409570(param_1,(int *)&PTR_DAT_00422b44,param_2,param_3);
  return iVar1;
}



/* Function: ~SchedulerPolicy */

/* Library Function - Single Match
    public: __thiscall Concurrency::SchedulerPolicy::~SchedulerPolicy(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Concurrency::SchedulerPolicy::~SchedulerPolicy(SchedulerPolicy *this)

{
  FUN_004115f3(*(void **)this);
  return;
}



/* Function: FUN_0040cae0 */

undefined4 * __thiscall FUN_0040cae0(void *this,uint param_1)

{
  *(undefined ***)this =
       ATL::
       CComObject<class_ATL::CComEnum<struct_IEnumGUID,&struct__GUID_const_IID_IEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
       ::vftable;
  *(undefined4 *)((int)this + 0x18) = 0xc0000001;
  (**(code **)(*DAT_00429af0 + 8))();
  FUN_0040e6d0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040cb40 */

undefined4 * __thiscall FUN_0040cb40(void *this,uint param_1)

{
  *(undefined ***)this =
       ATL::
       CComObject<class_ATL::CComEnum<struct_IOPCEnumGUID,&struct__GUID_const_IID_IOPCEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
       ::vftable;
  *(undefined4 *)((int)this + 0x18) = 0xc0000001;
  (**(code **)(*DAT_00429af0 + 8))();
  FUN_0040e6d0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040cba0 */

int * __thiscall
FUN_0040cba0(void *this,int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int local_38;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4 == 0) {
    local_38 = 0;
  }
  else {
    local_1c = *(uint *)((int)this + 0xc);
    local_10 = 0;
    if (((this == (void *)0x0) || (local_1c < *(uint *)((int)this + 0xc))) ||
       (*(uint *)((int)this + 0x10) < local_1c)) {
      FUN_00414040();
    }
                    /* WARNING: Load size is inaccurate */
    local_10 = *this;
    local_c = local_1c;
    if ((param_2 == 0) || (param_2 != local_10)) {
      FUN_00414040();
    }
    local_38 = (int)((int)param_3 - local_c) >> 4;
  }
  local_8 = local_38;
  FUN_0040ce80(this,param_2,param_3,1,param_4);
  local_20 = *(uint *)((int)this + 0xc);
  local_18 = 0;
  if (((this == (void *)0x0) || (local_20 < *(uint *)((int)this + 0xc))) ||
     (*(uint *)((int)this + 0x10) < local_20)) {
    FUN_00414040();
  }
                    /* WARNING: Load size is inaccurate */
  local_28 = *this;
  local_14 = local_20;
  local_24 = local_20;
  local_18 = local_28;
  FUN_0040e1a0(&local_28,local_8);
  *param_1 = local_28;
  param_1[1] = local_24;
  return param_1;
}



/* Function: FUN_0040ccd0 */

/* WARNING: Removing unreachable block (ram,0x0040cd2a) */

uint __thiscall FUN_0040ccd0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    if (param_1 < 0x10000000) {
      uVar2 = FUN_0040ea90(param_1);
      *(undefined4 *)((int)this + 0xc) = uVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
      *(uint *)((int)this + 0x14) = param_1 * 0x10 + *(int *)((int)this + 0xc);
    }
    else {
      this = (void *)FUN_0040d6f0();
    }
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}



/* Function: FUN_0040cd90 */

void __fastcall FUN_0040cd90(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    for (local_c = *(int *)(param_1 + 0xc); local_c != *(int *)(param_1 + 0x10);
        local_c = local_c + 0x10) {
    }
    FUN_004115f3(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Function: FUN_0040ce30 */

int __fastcall FUN_0040ce30(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



/* Function: FUN_0040ce80 */

/* WARNING: Removing unreachable block (ram,0x0040cf17) */
/* WARNING: Removing unreachable block (ram,0x0040cf8f) */

void __thiscall
FUN_0040ce80(void *this,undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint local_258;
  uint local_24c;
  undefined4 *local_23c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00421170;
  local_10 = ExceptionList;
  local_28 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_14 = &stack0xfffffd98;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0xc) == 0) {
    local_24c = 0;
  }
  else {
    local_24c = *(int *)((int)this + 0x14) - *(int *)((int)this + 0xc) >> 4;
  }
  local_18 = local_24c;
  if (param_3 == 0) {
    local_14 = &stack0xfffffd98;
    FUN_0040d6cc();
    return;
  }
  if (0xfffffffU - (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4) < param_3) {
    local_14 = &stack0xfffffd98;
    FUN_0040d6f0();
    FUN_0040d6cc();
    return;
  }
  if ((*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4) + param_3 <= local_24c) {
    if (param_3 <= (uint)(*(int *)((int)this + 0x10) - (int)param_2 >> 4)) {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      puVar5 = *(undefined4 **)((int)this + 0x10);
      uVar6 = FUN_0040f140(puVar5 + param_3 * -4,puVar5,*(undefined4 **)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = uVar6;
      FUN_0040ea40(param_2,puVar5 + param_3 * -4,puVar5);
      for (local_23c = param_2; local_23c != param_2 + param_3 * 4; local_23c = local_23c + 4) {
        *local_23c = uVar1;
        local_23c[1] = uVar2;
        local_23c[2] = uVar3;
        local_23c[3] = uVar4;
      }
      ExceptionList = local_10;
      __security_check_cookie(local_28 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_38 = *param_4;
    local_34 = param_4[1];
    local_30 = param_4[2];
    local_2c = param_4[3];
    local_14 = &stack0xfffffd98;
    FUN_0040f140(param_2,*(undefined4 **)((int)this + 0x10),param_2 + param_3 * 4);
    local_8 = 2;
    FUN_0040f060(*(undefined4 **)((int)this + 0x10),
                 param_3 - (*(int *)((int)this + 0x10) - (int)param_2 >> 4),&local_38);
    FUN_0040d541();
    return;
  }
  if (0xfffffff - (local_24c >> 1) < local_24c) {
    local_258 = 0;
  }
  else {
    local_258 = (local_24c >> 1) + local_24c;
  }
  local_18 = local_258;
  if (local_258 < (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4) + param_3) {
    local_18 = (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 4) + param_3;
  }
  local_14 = &stack0xfffffd98;
  local_20 = (undefined4 *)FUN_0040ea90(local_18);
  local_1c = (int)param_2 - *(int *)((int)this + 0xc) >> 4;
  local_24 = 0;
  local_8 = 0;
  FUN_0040f060(local_20 + local_1c * 4,param_3,param_4);
  local_24 = local_24 + 1;
  FUN_0040f260(*(undefined4 **)((int)this + 0xc),param_2,local_20);
  local_24 = local_24 + 1;
  FUN_0040f260(param_2,*(undefined4 **)((int)this + 0x10),local_20 + (local_1c + param_3) * 4);
  FUN_0040d2c5();
  return;
}



/* Function: Catch_All@0040d1e7 */

undefined4 Catch_All_0040d1e7(void)

{
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x20)) {
    *(int *)(unaff_EBP + -0x10c) = *(int *)(unaff_EBP + -0x18) * 0x10 + *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x108) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -0xfd) = *(undefined1 *)(unaff_EBP + -0xfe);
    *(undefined4 *)(unaff_EBP + -0x104) = *(undefined4 *)(unaff_EBP + -0x108);
    while (*(int *)(unaff_EBP + -0x104) != *(int *)(unaff_EBP + -0x10c)) {
      *(int *)(unaff_EBP + -0x104) = *(int *)(unaff_EBP + -0x104) + 0x10;
    }
  }
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    *(int *)(unaff_EBP + -0x11c) =
         *(int *)(unaff_EBP + -0x18) * 0x10 + *(int *)(unaff_EBP + -0x1c) +
         *(int *)(unaff_EBP + 0x10) * 0x10;
    *(int *)(unaff_EBP + -0x118) = *(int *)(unaff_EBP + -0x18) * 0x10 + *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -0x10d) = *(undefined1 *)(unaff_EBP + -0x10e);
    *(undefined4 *)(unaff_EBP + -0x114) = *(undefined4 *)(unaff_EBP + -0x118);
    while (*(int *)(unaff_EBP + -0x114) != *(int *)(unaff_EBP + -0x11c)) {
      *(int *)(unaff_EBP + -0x114) = *(int *)(unaff_EBP + -0x114) + 0x10;
    }
  }
  FUN_004115f3(*(void **)(unaff_EBP + -0x1c));
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40d2cc;
}



/* Function: FUN_0040d2c5 */

void FUN_0040d2c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + 0x10) =
       (*(int *)(*(int *)(unaff_EBP + -0x244) + 0x10) - *(int *)(*(int *)(unaff_EBP + -0x244) + 0xc)
       >> 4) + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(*(int *)(unaff_EBP + -0x244) + 0xc) != 0) {
    *(undefined4 *)(unaff_EBP + -0x134) = *(undefined4 *)(*(int *)(unaff_EBP + -0x244) + 0x10);
    *(undefined4 *)(unaff_EBP + -0x130) = *(undefined4 *)(*(int *)(unaff_EBP + -0x244) + 0xc);
    *(undefined4 *)(unaff_EBP + -300) = *(undefined4 *)(unaff_EBP + -0x134);
    *(undefined4 *)(unaff_EBP + -0x128) = *(undefined4 *)(unaff_EBP + -0x130);
    *(undefined1 *)(unaff_EBP + -0x11d) = *(undefined1 *)(unaff_EBP + -0x11e);
    *(undefined4 *)(unaff_EBP + -0x124) = *(undefined4 *)(unaff_EBP + -0x128);
    while (*(int *)(unaff_EBP + -0x124) != *(int *)(unaff_EBP + -300)) {
      *(int *)(unaff_EBP + -0x124) = *(int *)(unaff_EBP + -0x124) + 0x10;
    }
    *(int *)(unaff_EBP + -0x13c) =
         *(int *)(*(int *)(unaff_EBP + -0x244) + 0x14) -
         *(int *)(*(int *)(unaff_EBP + -0x244) + 0xc) >> 4;
    *(undefined4 *)(unaff_EBP + -0x138) = *(undefined4 *)(*(int *)(unaff_EBP + -0x244) + 0xc);
    FUN_004115f3(*(void **)(unaff_EBP + -0x138));
  }
  *(int *)(*(int *)(unaff_EBP + -0x244) + 0x14) =
       *(int *)(unaff_EBP + -0x14) * 0x10 + *(int *)(unaff_EBP + -0x1c);
  *(int *)(*(int *)(unaff_EBP + -0x244) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x244) + 0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_0040d6cc();
  return;
}



/* Function: Catch_All@0040d4c2 */

undefined4 Catch_All_0040d4c2(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x198) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(*(int *)(unaff_EBP + -0x244) + 0x10);
  *(undefined4 *)(unaff_EBP + -0x194) = *(undefined4 *)(unaff_EBP + -0x198);
  *(int *)(unaff_EBP + -400) = *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -0x185) = *(undefined1 *)(unaff_EBP + -0x186);
  *(undefined4 *)(unaff_EBP + -0x18c) = *(undefined4 *)(unaff_EBP + -400);
  while (*(int *)(unaff_EBP + -0x18c) != *(int *)(unaff_EBP + -0x194)) {
    *(int *)(unaff_EBP + -0x18c) = *(int *)(unaff_EBP + -0x18c) + 0x10;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40d548;
}



/* Function: FUN_0040d541 */

void FUN_0040d541(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(*(int *)(unaff_EBP + -0x244) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(*(int *)(unaff_EBP + -0x244) + 0x10);
  *(int *)(unaff_EBP + -0x1b0) =
       *(int *)(*(int *)(unaff_EBP + -0x244) + 0x10) + *(int *)(unaff_EBP + 0x10) * -0x10;
  *(undefined4 *)(unaff_EBP + -0x1ac) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x1a0) = *(undefined4 *)(unaff_EBP + -0x1b0);
  *(undefined4 *)(unaff_EBP + -0x1a8) = *(undefined4 *)(unaff_EBP + -0x1ac);
  while (*(int *)(unaff_EBP + -0x1a8) != *(int *)(unaff_EBP + -0x1a0)) {
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1a8);
    *puVar1 = *(undefined4 *)(unaff_EBP + -0x34);
    puVar1[1] = *(undefined4 *)(unaff_EBP + -0x30);
    puVar1[2] = *(undefined4 *)(unaff_EBP + -0x2c);
    puVar1[3] = *(undefined4 *)(unaff_EBP + -0x28);
    *(int *)(unaff_EBP + -0x1a8) = *(int *)(unaff_EBP + -0x1a8) + 0x10;
  }
  FUN_0040d6cc();
  return;
}



/* Function: FUN_0040d6cc */

void FUN_0040d6cc(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x40d6e4;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x24) ^ unaff_EBP);
  return;
}



/* Function: FUN_0040d6f0 */

void FUN_0040d6f0(void)

{
  undefined1 local_54 [28];
  undefined **local_38 [10];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004211a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040de60(local_54,"vector<T> too long");
  local_8 = 0;
  FUN_0040d770(local_38,local_54);
  local_38[0] = std::length_error::vftable;
  __CxxThrowException_8(local_38,&DAT_00425a0c);
  local_8 = 0xffffffff;
  FUN_0040da70(local_54,'\x01',0);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d770 */

undefined4 * __thiscall FUN_0040d770(void *this,void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004211d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004144c8((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  FUN_0040da70((void *)((int)this + 0xc),'\0',0);
  FUN_0040d940((void *)((int)this + 0xc),param_1,0,DAT_00422b7c);
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_0040d800 */

int __fastcall FUN_0040d800(int param_1)

{
  undefined4 local_10;
  
  if (*(uint *)(param_1 + 0x24) < 0x10) {
    local_10 = param_1 + 0x10;
  }
  else {
    local_10 = *(int *)(param_1 + 0x10);
  }
  return local_10;
}



/* Function: FUN_0040d840 */

exception * __thiscall FUN_0040d840(void *this,uint param_1)

{
  *(undefined ***)this = std::logic_error::vftable;
  FUN_0040da70((void *)((int)this + 0xc),'\x01',0);
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: FUN_0040d890 */

void __fastcall FUN_0040d890(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  FUN_0040da70(param_1 + 0xc,'\x01',0);
  exception::~exception(param_1);
  return;
}



/* Function: FUN_0040d8d0 */

exception * __thiscall FUN_0040d8d0(void *this,uint param_1)

{
  *(undefined ***)this = std::length_error::vftable;
  *(undefined ***)this = std::logic_error::vftable;
  FUN_0040da70((void *)((int)this + 0xc),'\x01',0);
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: FUN_0040d920 */

void __fastcall FUN_0040d920(void *param_1)

{
  FUN_0040da70(param_1,'\x01',0);
  return;
}



/* Function: FUN_0040d940 */

void * __thiscall FUN_0040d940(void *this,void *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_8;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_0041159e();
  }
  local_8 = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < local_8) {
    local_8 = param_3;
  }
  if (this == param_1) {
    FUN_0040db20(this,param_2 + local_8,DAT_00422b7c);
    FUN_0040db20(this,0,param_2);
  }
  else {
    bVar1 = FUN_0040dc30(this,local_8,'\0');
    if (bVar1) {
      if (*(uint *)((int)param_1 + 0x18) < 0x10) {
        local_60 = (int)param_1 + 4;
      }
      else {
        local_60 = *(int *)((int)param_1 + 4);
      }
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_50 = (void *)((int)this + 4);
      }
      else {
        local_50 = *(void **)((int)this + 4);
      }
      _memcpy_s(local_50,*(rsize_t *)((int)this + 0x18),(void *)(local_60 + param_2),local_8);
      *(uint *)((int)this + 0x14) = local_8;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_64 = (int)this + 4;
      }
      else {
        local_64 = *(int *)((int)this + 4);
      }
      *(undefined1 *)(local_64 + local_8) = 0;
    }
  }
  return this;
}



/* Function: FUN_0040da70 */

void __thiscall FUN_0040da70(void *this,char param_1,rsize_t param_2)

{
  void *_Src;
  int local_20;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x18))) {
    _Src = *(void **)((int)this + 4);
    if (param_2 != 0) {
      _memcpy_s((void *)((int)this + 4),0x10,_Src,param_2);
    }
    FUN_004115f3(_Src);
  }
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(rsize_t *)((int)this + 0x14) = param_2;
  if (*(uint *)((int)this + 0x18) < 0x10) {
    local_20 = (int)this + 4;
  }
  else {
    local_20 = *(int *)((int)this + 4);
  }
  *(undefined1 *)(local_20 + param_2) = 0;
  return;
}



/* Function: FUN_0040db20 */

int __thiscall FUN_0040db20(void *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_0041159e();
  }
  if (*(int *)((int)this + 0x14) - param_1 < param_2) {
    param_2 = *(int *)((int)this + 0x14) - param_1;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      local_24 = (int)this + 4;
    }
    else {
      local_24 = *(int *)((int)this + 4);
    }
    if (*(uint *)((int)this + 0x18) < 0x10) {
      local_28 = (int)this + 4;
    }
    else {
      local_28 = *(int *)((int)this + 4);
    }
    _memmove_s((void *)(local_28 + param_1),*(int *)((int)this + 0x18) - param_1,
               (void *)(local_24 + param_1 + param_2),
               (*(int *)((int)this + 0x14) - param_1) - param_2);
    iVar1 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar1;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      local_2c = (int)this + 4;
    }
    else {
      local_2c = *(int *)((int)this + 4);
    }
    *(undefined1 *)(local_2c + iVar1) = 0;
  }
  return (int)this;
}



/* Function: FUN_0040dc30 */

/* WARNING: Removing unreachable block (ram,0x0040dc4e) */
/* WARNING: Removing unreachable block (ram,0x0040dc61) */

bool __thiscall FUN_0040dc30(void *this,uint param_1,char param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  
  if (0xfffffffe < param_1) {
    FUN_00411566();
  }
  if (*(uint *)((int)this + 0x18) < param_1) {
    FUN_0040deb0(this,param_1);
  }
  else if ((param_2 == '\0') || (0xf < param_1)) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_34 = (undefined1 *)((int)this + 4);
      }
      else {
        local_34 = *(undefined1 **)((int)this + 4);
      }
      *local_34 = 0;
    }
  }
  else {
    if (param_1 < *(uint *)((int)this + 0x14)) {
      local_30 = param_1;
    }
    else {
      local_30 = *(rsize_t *)((int)this + 0x14);
    }
    FUN_0040da70(this,'\x01',local_30);
  }
  return param_1 != 0;
}



/* Function: FUN_0040dd30 */

int __fastcall FUN_0040dd30(int *param_1)

{
  int local_14;
  
  if (*param_1 == 0) {
    FUN_00414040();
  }
  if (*param_1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)*param_1;
  }
  if (*(uint *)(local_14 + 0x10) <= (uint)param_1[1]) {
    FUN_00414040();
  }
  return param_1[1];
}



/* Function: FUN_0040dda0 */

undefined4 * __thiscall FUN_0040dda0(void *this,exception *param_1)

{
  FUN_0040ddd0(this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_0040ddd0 */

exception * __thiscall FUN_0040ddd0(void *this,exception *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004211d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception((exception *)this,param_1);
  local_8 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  FUN_0040da70((void *)((int)this + 0xc),'\0',0);
  FUN_0040d940((void *)((int)this + 0xc),param_1 + 0xc,0,DAT_00422b7c);
  ExceptionList = local_10;
  return (exception *)this;
}



/* Function: FUN_0040de60 */

void * __thiscall FUN_0040de60(void *this,char *param_1)

{
  size_t sVar1;
  undefined1 local_d;
  undefined1 *local_c;
  
  local_c = &local_d;
  FUN_0040da70(this,'\0',0);
  sVar1 = _strlen(param_1);
  FUN_0040e260(this,param_1,sVar1);
  return this;
}



/* Function: FUN_0040deb0 */

/* WARNING: Removing unreachable block (ram,0x0040df00) */
/* WARNING: Removing unreachable block (ram,0x0040df71) */
/* WARNING: Removing unreachable block (ram,0x0040df13) */
/* WARNING: Removing unreachable block (ram,0x0040df8a) */

void __thiscall FUN_0040deb0(void *this,uint param_1)

{
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = param_1 | 0xf;
  if (local_1c == 0xffffffff) {
    local_1c = param_1;
  }
  else if ((local_1c / 3 < *(uint *)((int)this + 0x18) >> 1) &&
          (*(uint *)((int)this + 0x18) <= -(*(uint *)((int)this + 0x18) >> 1) - 2)) {
    local_1c = (*(uint *)((int)this + 0x18) >> 1) + *(int *)((int)this + 0x18);
  }
  local_8 = 0;
  FUN_0040e180(local_1c + 1);
  FUN_0040e05e();
  return;
}



/* Function: Catch_All@0040dff9 */

void Catch_All_0040dff9(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040ebb0(*(int *)(unaff_EBP + -0x18) + 1);
  *(undefined4 *)(unaff_EBP + -0x94) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x94);
  FUN_0040e04a();
  return;
}



/* Function: Catch_All@0040e028 */

undefined4 Catch_All_0040e028(void)

{
  int unaff_EBP;
  
  FUN_0040da70(*(void **)(unaff_EBP + -0x7c),'\x01',0);
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x40e051;
}



/* Function: FUN_0040e04a */

undefined4 FUN_0040e04a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x40e065;
}



/* Function: FUN_0040e05e */

void FUN_0040e05e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    if (*(uint *)(*(int *)(unaff_EBP + -0x7c) + 0x18) < 0x10) {
      *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x7c) + 4;
    }
    else {
      *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(*(int *)(unaff_EBP + -0x7c) + 4);
    }
    *(undefined1 *)(unaff_EBP + -0x5e) = *(undefined1 *)(unaff_EBP + -0x5f);
    _memcpy_s(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x18) + 1,
              *(void **)(unaff_EBP + -100),*(rsize_t *)(unaff_EBP + 0xc));
  }
  FUN_0040da70(*(void **)(unaff_EBP + -0x7c),'\x01',0);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x7c) + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x7c) + 0x18) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -0x76) = 0;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x7c) + 0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  if (*(uint *)(*(int *)(unaff_EBP + -0x7c) + 0x18) < 0x10) {
    *(int *)(unaff_EBP + -0x98) = *(int *)(unaff_EBP + -0x7c) + 4;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(*(int *)(unaff_EBP + -0x7c) + 4);
  }
  *(undefined1 *)(*(int *)(unaff_EBP + -0x98) + *(int *)(unaff_EBP + 0xc)) =
       *(undefined1 *)(unaff_EBP + -0x76);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_0040e120 */

undefined4 * __thiscall FUN_0040e120(void *this,uint param_1,undefined4 *param_2)

{
  *(undefined4 *)this = 0;
  if (((param_2 == (undefined4 *)0x0) || (param_1 < (uint)param_2[3])) ||
     ((uint)param_2[4] < param_1)) {
    FUN_00414040();
  }
  *(undefined4 *)this = *param_2;
  *(uint *)((int)this + 4) = param_1;
  return (undefined4 *)this;
}



/* Function: FUN_0040e180 */

void FUN_0040e180(uint param_1)

{
  FUN_0040ebb0(param_1);
  return;
}



/* Function: FUN_0040e1a0 */

int * __thiscall FUN_0040e1a0(void *this,int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    FUN_00414040();
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    local_1c = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_1c = **this;
  }
  if ((uint)(param_1 * 0x10 + *(int *)((int)this + 4)) <= *(uint *)(local_1c + 0x10)) {
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      local_20 = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      local_20 = **this;
    }
    if (*(uint *)(local_20 + 0xc) <= (uint)(param_1 * 0x10 + *(int *)((int)this + 4)))
    goto code_r0x0040e243;
  }
  FUN_00414040();
code_r0x0040e243:
  *(int *)((int)this + 4) = param_1 * 0x10 + *(int *)((int)this + 4);
  return (int *)this;
}



/* Function: FUN_0040e260 */

void * __thiscall FUN_0040e260(void *this,void *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_50;
  
  uVar2 = FUN_0040e350(this,(uint)param_1);
  if ((uVar2 & 0xff) == 0) {
    bVar1 = FUN_0040dc30(this,param_2,'\0');
    if (bVar1) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_50 = (void *)((int)this + 4);
      }
      else {
        local_50 = *(void **)((int)this + 4);
      }
      _memcpy_s(local_50,*(rsize_t *)((int)this + 0x18),param_1,param_2);
      *(uint *)((int)this + 0x14) = param_2;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_64 = (int)this + 4;
      }
      else {
        local_64 = *(int *)((int)this + 4);
      }
      *(undefined1 *)(local_64 + param_2) = 0;
    }
  }
  else {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      local_60 = (int)this + 4;
    }
    else {
      local_60 = *(int *)((int)this + 4);
    }
    this = FUN_0040d940(this,this,(int)param_1 - local_60,param_2);
  }
  return this;
}



/* Function: FUN_0040e350 */

uint __thiscall FUN_0040e350(void *this,uint param_1)

{
  void *in_EAX;
  int local_10;
  void *local_c;
  
  if (param_1 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      in_EAX = (void *)((int)this + 4);
      local_c = in_EAX;
    }
    else {
      in_EAX = this;
      local_c = *(void **)((int)this + 4);
    }
    if (local_c <= param_1) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        local_10 = (int)this + 4;
      }
      else {
        local_10 = *(int *)((int)this + 4);
      }
      in_EAX = this;
      if (param_1 < (uint)(local_10 + *(int *)((int)this + 0x14))) {
        return CONCAT31((int3)((uint)this >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



/* Function: FUN_0040e3c0 */

int FUN_0040e3c0(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int **local_44;
  int *local_14;
  int **local_10;
  int *local_c;
  int local_8;
  
  bVar1 = false;
  local_8 = -0x7fffbffd;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    local_8 = FUN_0040eda0(&local_c);
    if (-1 < local_8) {
      if ((param_1[5] & 2U) == 0) {
        local_44 = (int **)(param_1 + 1);
      }
      else {
        bVar1 = true;
        local_14 = param_1;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(param_1);
        }
        local_44 = &local_14;
      }
      local_10 = local_44;
      local_8 = FUN_0040e500(local_c,param_1[2],param_1[3],*local_44,0);
      if ((bVar1) && (local_14 != (int *)0x0)) {
        (**(code **)(*local_14 + 8))(local_14);
      }
      if (-1 < local_8) {
        local_c[4] = param_1[4];
        local_8 = FUN_00409570((int)local_c,(int *)&PTR_DAT_00422b1c,(int *)&DAT_00422d1c,param_2);
      }
      if ((local_8 < 0) && (local_c != (int *)0x0)) {
        (**(code **)(*local_c + 0x1c))(1);
      }
    }
  }
  return local_8;
}



/* Function: FUN_0040e500 */

undefined4 __thiscall FUN_0040e500(void *this,int param_1,int param_2,int *param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00421220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 == 3) {
    local_8 = 0;
    lVar1 = (ulonglong)(uint)(param_2 - param_1 >> 4) * 0x10;
    uVar2 = FUN_004114d0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(undefined4 *)((int)this + 8) = uVar2;
    uVar2 = FUN_0040e58b();
    return uVar2;
  }
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = param_2;
  FUN_0040ec40((void *)((int)this + 4),param_3);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 8);
  *(int *)((int)this + 0x14) = param_4;
  ExceptionList = local_10;
  return 0;
}



/* Function: Catch_All@0040e57e */

undefined4 Catch_All_0040e57e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40e592;
}



/* Function: FUN_0040e58b */

undefined4 FUN_0040e58b(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x10) =
       *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 8);
  if (*(int *)(*(int *)(unaff_EBP + -0x34) + 8) == 0) {
    uVar1 = 0x8007000e;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 8);
    while (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0xc)) {
      uVar1 = FUN_0040ecd0(*(void **)(*(int *)(unaff_EBP + -0x34) + 0x10),
                           *(void **)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
      if (*(int *)(unaff_EBP + -0x18) < 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 8);
        while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(*(int *)(unaff_EBP + -0x34) + 0x10)) {
          *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x1c);
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x10;
        }
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 8);
        FUN_004115fe(*(void **)(unaff_EBP + -0x24));
        *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x10) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0xc) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 8) = 0;
        uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
        goto LAB_0040e6ad;
      }
      *(int *)(*(int *)(unaff_EBP + -0x34) + 0x10) =
           *(int *)(*(int *)(unaff_EBP + -0x34) + 0x10) + 0x10;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
    }
    *(int *)(*(int *)(unaff_EBP + -0x34) + 0xc) =
         (*(int *)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + 8) >> 4) * 0x10 +
         *(int *)(*(int *)(unaff_EBP + -0x34) + 8);
    FUN_0040ec40((void *)(*(int *)(unaff_EBP + -0x34) + 4),*(int **)(unaff_EBP + 0x10));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x10) =
         *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 8);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x14) = *(undefined4 *)(unaff_EBP + 0x14);
    uVar1 = 0;
  }
LAB_0040e6ad:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



/* Function: FUN_0040e6d0 */

void __fastcall FUN_0040e6d0(int param_1)

{
  int *piVar1;
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    for (local_8 = *(int *)(param_1 + 8); local_8 != *(int *)(param_1 + 0xc);
        local_8 = local_8 + 0x10) {
    }
    FUN_004115fe(*(void **)(param_1 + 8));
  }
  piVar1 = (int *)(param_1 + 4);
  if (*piVar1 != 0) {
    (**(code **)(*(int *)*piVar1 + 8))(*piVar1);
  }
  return;
}



/* Function: FUN_0040e750 */

uint FUN_0040e750(int param_1,uint param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  uint local_20;
  uint local_10;
  uint local_c;
  void *local_8;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (param_2 == 0) {
    local_c = 0x80070057;
  }
  else if ((param_3 == (void *)0x0) || ((param_2 != 1 && (param_4 == (uint *)0x0)))) {
    local_c = 0x80004003;
  }
  else if (((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
          (*(int *)(param_1 + 0x10) == 0)) {
    local_c = 0x80004005;
  }
  else {
    local_20 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10) >> 4;
    local_c = (uint)(local_20 < param_2);
    if (param_2 < local_20) {
      local_20 = param_2;
    }
    local_10 = local_20;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_20;
    }
    local_8 = param_3;
    while (local_10 != 0) {
      uVar1 = FUN_0040ecd0(local_8,*(void **)(param_1 + 0x10));
      if ((int)uVar1 < 0) {
        for (; param_3 < local_8; param_3 = (void *)((int)param_3 + 0x10)) {
        }
        if (param_4 == (uint *)0x0) {
          return uVar1;
        }
        *param_4 = 0;
        return uVar1;
      }
      local_8 = (void *)((int)local_8 + 0x10);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x10;
      local_10 = local_10 - 1;
    }
  }
  return local_c;
}



/* Function: FUN_0040e890 */

uint FUN_0040e890(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  if (param_2 == 0) {
    uVar1 = 0x80070057;
  }
  else {
    local_10 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10) >> 4;
    if (param_2 <= local_10) {
      local_10 = param_2;
    }
    *(uint *)(param_1 + 0x10) = local_10 * 0x10 + *(int *)(param_1 + 0x10);
    uVar1 = (uint)(param_2 != local_10);
  }
  return uVar1;
}



/* Function: FUN_0040e900 */

int FUN_0040e900(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int **local_44;
  int *local_14;
  int **local_10;
  int *local_c;
  int local_8;
  
  bVar1 = false;
  local_8 = -0x7fffbffd;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    local_8 = FUN_0040ef00(&local_c);
    if (-1 < local_8) {
      if ((param_1[5] & 2U) == 0) {
        local_44 = (int **)(param_1 + 1);
      }
      else {
        bVar1 = true;
        local_14 = param_1;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(param_1);
        }
        local_44 = &local_14;
      }
      local_10 = local_44;
      local_8 = FUN_0040e500(local_c,param_1[2],param_1[3],*local_44,0);
      if ((bVar1) && (local_14 != (int *)0x0)) {
        (**(code **)(*local_14 + 8))(local_14);
      }
      if (-1 < local_8) {
        local_c[4] = param_1[4];
        local_8 = FUN_00409570((int)local_c,(int *)&PTR_DAT_00422b44,(int *)&DAT_00422be8,param_2);
      }
      if ((local_8 < 0) && (local_c != (int *)0x0)) {
        (**(code **)(*local_c + 0x1c))(1);
      }
    }
  }
  return local_8;
}



/* Function: FUN_0040ea40 */

void __cdecl FUN_0040ea40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040f1c0(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040ea90 */

void __cdecl FUN_0040ea90(uint param_1)

{
  char *local_14;
  undefined **local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x10) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_10,&local_14);
    local_10[0] = std::bad_alloc::vftable;
    __CxxThrowException_8(local_10,&DAT_00425bbc);
  }
  operator_new(param_1 << 4);
  return;
}



/* Function: FUN_0040eaf0 */

void __fastcall FUN_0040eaf0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  exception::~exception(param_1);
  return;
}



/* Function: FUN_0040eb10 */

exception * __thiscall FUN_0040eb10(void *this,uint param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: FUN_0040eb50 */

void __cdecl FUN_0040eb50(uint param_1)

{
  char *local_14;
  undefined **local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_10,&local_14);
    local_10[0] = std::bad_alloc::vftable;
    __CxxThrowException_8(local_10,&DAT_00425bbc);
  }
  operator_new(param_1 << 2);
  return;
}



/* Function: FUN_0040ebb0 */

void __cdecl FUN_0040ebb0(uint param_1)

{
  char *local_14;
  undefined **local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)param_1) == 0) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_10,&local_14);
    local_10[0] = std::bad_alloc::vftable;
    __CxxThrowException_8(local_10,&DAT_00425bbc);
  }
  operator_new(param_1);
  return;
}



/* Function: FUN_0040ec10 */

exception * __thiscall FUN_0040ec10(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0040ec40 */

int * __thiscall FUN_0040ec40(void *this,int *param_1)

{
  int *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == param_1) {
                    /* WARNING: Load size is inaccurate */
    local_8 = *this;
  }
  else if (this == (void *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      (**(code **)(**this + 8))(*this);
    }
    *(int **)this = param_1;
    local_8 = param_1;
  }
  return local_8;
}



/* Function: FUN_0040ecd0 */

undefined4 __cdecl FUN_0040ecd0(void *param_1,void *param_2)

{
  errno_t eVar1;
  
  eVar1 = _memcpy_s(param_1,0x10,param_2,0x10);
  switch(eVar1) {
  case 0:
  case 0x50:
    break;
  default:
    FUN_00402270(0x80004005);
    break;
  case 0xc:
    FUN_00402270(0x8007000e);
    break;
  case 0x16:
  case 0x22:
    FUN_00402270(0x80070057);
  }
  return 0;
}



/* Function: FUN_0040eda0 */

undefined4 FUN_0040eda0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421240;
  local_10 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_1 = 0;
    local_8 = 0;
    puVar1 = (undefined4 *)operator_new(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0040ce30((int)puVar1);
      puVar1[6] = 0;
      *puVar1 = ATL::
                CComObject<class_ATL::CComEnum<struct_IEnumGUID,&struct__GUID_const_IID_IEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
                ::vftable;
      (**(code **)(*DAT_00429af0 + 4))();
    }
    uVar2 = FUN_0040ee6d();
    return uVar2;
  }
  return 0x80004003;
}



/* Function: Catch_All@0040ee60 */

undefined4 Catch_All_0040ee60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40ee74;
}



/* Function: FUN_0040ee6d */

undefined4 FUN_0040ee6d(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
      }
      else {
        uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x20) + 0x1c))(1);
        *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* Function: FUN_0040ef00 */

undefined4 FUN_0040ef00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421260;
  local_10 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_1 = 0;
    local_8 = 0;
    puVar1 = (undefined4 *)operator_new(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0040ce30((int)puVar1);
      puVar1[6] = 0;
      *puVar1 = ATL::
                CComObject<class_ATL::CComEnum<struct_IOPCEnumGUID,&struct__GUID_const_IID_IOPCEnumGUID,struct__GUID,class_ATL::_Copy<struct__GUID>,class_ATL::CComSingleThreadModel>_>
                ::vftable;
      (**(code **)(*DAT_00429af0 + 4))();
    }
    uVar2 = FUN_0040efcd();
    return uVar2;
  }
  return 0x80004003;
}



/* Function: Catch_All@0040efc0 */

undefined4 Catch_All_0040efc0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40efd4;
}



/* Function: FUN_0040efcd */

undefined4 FUN_0040efcd(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (-1 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
      }
      else {
        uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x20) + 0x1c))(1);
        *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  }
  **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* Function: FUN_0040f060 */

void FUN_0040f060(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  FUN_0040f11f();
  return;
}



/* Function: Catch_All@0040f0f4 */

undefined4 Catch_All_0040f0f4(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 8)) {
    uVar1 = FUN_0040f0f6();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f126;
}



/* Function: FUN_0040f0f6 */

undefined4 FUN_0040f0f6(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 8)) {
    uVar1 = FUN_0040f0f6();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f126;
}



/* Function: FUN_0040f0ff */

undefined4 FUN_0040f0ff(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 8)) {
    uVar1 = FUN_0040f0f6();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f126;
}



/* Function: FUN_0040f11f */

void FUN_0040f11f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_0040f140 */

void __cdecl FUN_0040f140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040f2b0(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040f1c0 */

undefined4 * __cdecl FUN_0040f1c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = param_3;
  local_14 = param_2;
  while (param_1 != local_14) {
    local_18[-4] = local_14[-4];
    local_18[-3] = local_14[-3];
    local_18[-2] = local_14[-2];
    local_18[-1] = local_14[-1];
    local_18 = local_18 + -4;
    local_14 = local_14 + -4;
  }
  return param_3 + ((int)param_2 - (int)param_1 >> 4) * -4;
}



/* Function: FUN_0040f260 */

void __cdecl FUN_0040f260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040f2b0(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040f2b0 */

void FUN_0040f2b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004212a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  FUN_0040f371();
  return;
}



/* Function: Catch_All@0040f346 */

undefined4 Catch_All_0040f346(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    uVar1 = FUN_0040f348();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f378;
}



/* Function: FUN_0040f348 */

undefined4 FUN_0040f348(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    uVar1 = FUN_0040f348();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f378;
}



/* Function: FUN_0040f351 */

undefined4 FUN_0040f351(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    uVar1 = FUN_0040f348();
    return uVar1;
  }
  __CxxThrowException_8(0,(byte *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40f378;
}



/* Function: FUN_0040f371 */

undefined4 FUN_0040f371(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x10);
}



/* Function: FUN_0040f390 */

DWORD __cdecl FUN_0040f390(PACL param_1,PACL param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint local_18 [3];
  LPVOID local_c;
  uint local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_c = (LPVOID)0x0;
  BVar1 = GetAclInformation(param_1,local_18,0xc,AclSizeInformation);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    for (local_8 = 0; local_8 < local_18[0]; local_8 = local_8 + 1) {
      BVar1 = GetAce(param_1,local_8,&local_c);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        return DVar2;
      }
      BVar1 = AddAce(param_2,2,0xffffffff,local_c,(uint)*(ushort *)((int)local_c + 2));
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        return DVar2;
      }
    }
    DVar2 = 0;
  }
  return DVar2;
}



/* Function: FUN_0040f440 */

DWORD __cdecl FUN_0040f440(undefined4 *param_1,DWORD param_2,uchar *param_3)

{
  size_t _Size;
  PACL pAcl;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  PACL local_10;
  DWORD local_c;
  PSID local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = (PSID)0x0;
  local_10 = (PACL)0x0;
  if (param_1 == (undefined4 *)0x0) {
    local_c = 0xa0;
  }
  else {
    pAcl = (PACL)*param_1;
    local_c = FUN_00410d90(param_3,&local_8);
    if (local_c == 0) {
      BVar1 = GetAclInformation(pAcl,&local_1c,0xc,AclSizeInformation);
      if (BVar1 == 0) {
        local_c = GetLastError();
      }
      else {
        DVar2 = GetLengthSid(local_8);
        _Size = local_18 + 0x10 + DVar2;
        local_10 = (PACL)_malloc(_Size);
        if (local_10 == (PACL)0x0) {
          local_c = 0xe;
        }
        else {
          BVar1 = InitializeAcl(local_10,_Size,2);
          if (BVar1 == 0) {
            local_c = GetLastError();
          }
          else {
            BVar1 = AddAccessDeniedAce(local_10,2,param_2,local_8);
            if (BVar1 == 0) {
              local_c = GetLastError();
            }
            else {
              local_c = FUN_0040f390(pAcl,local_10);
              if (local_c == 0) {
                *param_1 = local_10;
              }
            }
          }
        }
      }
    }
    if (local_8 != (void *)0x0) {
      _free(local_8);
    }
  }
  return local_c;
}



/* Function: FUN_0040f5a0 */

DWORD __cdecl FUN_0040f5a0(undefined4 *param_1,DWORD param_2,uchar *param_3)

{
  size_t _Size;
  PACL pAcl;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  PACL local_10;
  DWORD local_c;
  PSID local_8;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = (PSID)0x0;
  local_10 = (PACL)0x0;
  if (param_1 == (undefined4 *)0x0) {
    local_c = 0xa0;
  }
  else {
    pAcl = (PACL)*param_1;
    local_c = FUN_00410d90(param_3,&local_8);
    if (local_c == 0) {
      BVar1 = GetAclInformation(pAcl,&local_1c,0xc,AclSizeInformation);
      if (BVar1 == 0) {
        local_c = GetLastError();
      }
      else {
        DVar2 = GetLengthSid(local_8);
        _Size = local_18 + 0x10 + DVar2;
        local_10 = (PACL)_malloc(_Size);
        if (local_10 == (PACL)0x0) {
          local_c = 0xe;
        }
        else {
          BVar1 = InitializeAcl(local_10,_Size,2);
          if (BVar1 == 0) {
            local_c = GetLastError();
          }
          else {
            local_c = FUN_0040f390(pAcl,local_10);
            if (local_c == 0) {
              BVar1 = AddAccessAllowedAce(local_10,2,param_2,local_8);
              if (BVar1 == 0) {
                local_c = GetLastError();
              }
              else {
                *param_1 = local_10;
              }
            }
          }
        }
      }
    }
    if ((local_c != 0) && (local_10 != (PACL)0x0)) {
      _free(local_10);
    }
    if (local_8 != (void *)0x0) {
      _free(local_8);
    }
  }
  return local_c;
}



/* Function: FUN_0040f710 */

DWORD __cdecl FUN_0040f710(PACL param_1,uchar *param_2,uint param_3,int param_4,int param_5)

{
  DWORD DVar1;
  char *pcVar2;
  BOOL BVar3;
  DWORD local_2c [3];
  char *local_20;
  DWORD local_1c;
  DWORD local_18;
  DWORD local_14;
  char *local_10;
  char *local_c;
  PSID local_8;
  
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_20 = (char *)0x0;
  local_c = (char *)0x0;
  local_10 = (char *)0x0;
  local_8 = (PSID)0x0;
  local_1c = 0;
  local_14 = 2;
  local_1c = FUN_00410d90(param_2,&local_8);
  if (local_1c == 0) {
    BVar3 = GetAclInformation(param_1,local_2c,0xc,AclSizeInformation);
    DVar1 = local_2c[0];
    if (BVar3 == 0) {
      local_1c = GetLastError();
    }
    else {
      while (local_18 = DVar1 - 1, -1 < (int)local_18) {
        BVar3 = GetAce(param_1,local_18,&local_20);
        pcVar2 = local_20;
        if (BVar3 == 0) {
          local_1c = GetLastError();
          break;
        }
        if (((param_5 == 0) || (param_5 == -1)) && (*local_20 == '\0')) {
          BVar3 = EqualSid(local_8,local_20 + 8);
          DVar1 = local_18;
          if (BVar3 != 0) {
            if ((param_4 == 0) || ((*(uint *)(pcVar2 + 4) & 0xffff) == 0)) {
              *(uint *)(pcVar2 + 4) = *(uint *)(pcVar2 + 4) | param_3;
            }
            else {
              *(uint *)(pcVar2 + 4) = ~param_3 & *(uint *)(pcVar2 + 4);
              if ((*(uint *)(pcVar2 + 4) & 0x1e) == 0) {
                if ((*(uint *)(pcVar2 + 4) & 0xffff) == 0) {
                  DeleteAce(param_1,local_18);
                }
              }
              else {
                *(uint *)(pcVar2 + 4) = *(uint *)(pcVar2 + 4) | 1;
              }
            }
            local_14 = 0;
            DVar1 = local_18;
          }
        }
        else if (((param_5 == 1) || (param_5 == -1)) && (*local_20 == '\x01')) {
          local_c = local_20;
          BVar3 = EqualSid(local_8,local_20 + 8);
          DVar1 = local_18;
          if (BVar3 != 0) {
            if ((param_4 == 0) || ((*(uint *)(local_c + 4) & 0xffff) == 0)) {
              *(uint *)(local_c + 4) = *(uint *)(local_c + 4) | param_3;
            }
            else {
              *(uint *)(local_c + 4) = ~param_3 & *(uint *)(local_c + 4);
              if ((*(uint *)(local_c + 4) & 0x1e) == 0) {
                if ((*(uint *)(local_c + 4) & 0xffff) == 0) {
                  DeleteAce(param_1,local_18);
                }
              }
              else {
                *(uint *)(local_c + 4) = *(uint *)(local_c + 4) | 1;
              }
            }
            local_14 = 0;
            DVar1 = local_18;
          }
        }
        else {
          DVar1 = local_18;
          if (((param_5 == 2) || (param_5 == -1)) && (*local_20 == '\x02')) {
            local_10 = local_20;
            BVar3 = EqualSid(local_8,local_20 + 8);
            DVar1 = local_18;
            if (BVar3 != 0) {
              if ((param_4 == 0) || ((*(uint *)(local_10 + 4) & 0xffff) == 0)) {
                *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) | param_3;
              }
              else {
                *(uint *)(local_10 + 4) = ~param_3 & *(uint *)(local_10 + 4);
                if ((*(uint *)(local_10 + 4) & 0x1e) == 0) {
                  if ((*(uint *)(local_10 + 4) & 0xffff) == 0) {
                    DeleteAce(param_1,local_18);
                  }
                }
                else {
                  *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) | 1;
                }
              }
              local_14 = 0;
              DVar1 = local_18;
            }
          }
        }
      }
    }
  }
  if (local_8 != (void *)0x0) {
    _free(local_8);
  }
  if (local_1c == 0) {
    local_1c = local_14;
  }
  return local_1c;
}



/* Function: FUN_0040fa40 */

DWORD __cdecl FUN_0040fa40(PACL param_1,uchar *param_2,int param_3)

{
  DWORD DVar1;
  char *pcVar2;
  BOOL BVar3;
  DWORD local_2c [3];
  char *local_20;
  DWORD local_1c;
  DWORD local_18;
  DWORD local_14;
  char *local_10;
  char *local_c;
  PSID local_8;
  
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_20 = (char *)0x0;
  local_c = (char *)0x0;
  local_10 = (char *)0x0;
  local_8 = (PSID)0x0;
  local_1c = 0;
  local_14 = 2;
  local_1c = FUN_00410d90(param_2,&local_8);
  if (local_1c == 0) {
    BVar3 = GetAclInformation(param_1,local_2c,0xc,AclSizeInformation);
    DVar1 = local_2c[0];
    if (BVar3 == 0) {
      local_1c = GetLastError();
    }
    else {
      while (local_18 = DVar1 - 1, -1 < (int)local_18) {
        BVar3 = GetAce(param_1,local_18,&local_20);
        pcVar2 = local_20;
        if (BVar3 == 0) {
          local_1c = GetLastError();
          break;
        }
        if (((param_3 == 0) || (param_3 == -1)) && (*local_20 == '\0')) {
          BVar3 = EqualSid(local_8,local_20 + 8);
          DVar1 = local_18;
          if (BVar3 != 0) {
            if ((*(uint *)(pcVar2 + 4) & 0xffff) != 0) {
              DeleteAce(param_1,local_18);
            }
            local_14 = 0;
            DVar1 = local_18;
          }
        }
        else if (((param_3 == 1) || (param_3 == -1)) && (*local_20 == '\x01')) {
          local_c = local_20;
          BVar3 = EqualSid(local_8,local_20 + 8);
          DVar1 = local_18;
          if (BVar3 != 0) {
            if ((*(uint *)(local_c + 4) & 0xffff) != 0) {
              DeleteAce(param_1,local_18);
            }
            local_14 = 0;
            DVar1 = local_18;
          }
        }
        else {
          DVar1 = local_18;
          if (((param_3 == 2) || (param_3 == -1)) && (*local_20 == '\x02')) {
            local_10 = local_20;
            BVar3 = EqualSid(local_8,local_20 + 8);
            DVar1 = local_18;
            if (BVar3 != 0) {
              if ((*(uint *)(local_10 + 4) & 0xffff) != 0) {
                DeleteAce(param_1,local_18);
              }
              local_14 = 0;
              DVar1 = local_18;
            }
          }
        }
      }
    }
  }
  if (local_8 != (void *)0x0) {
    _free(local_8);
  }
  if (local_1c == 0) {
    local_1c = local_14;
  }
  return local_1c;
}



/* Function: FUN_0040fc60 */

DWORD __cdecl FUN_0040fc60(int *param_1)

{
  DWORD _Size;
  void *pvVar1;
  BOOL BVar2;
  PSID local_10;
  DWORD local_c;
  void *local_8;
  
  local_10 = (PSID)0x0;
  local_8 = (void *)0x0;
  local_c = 0;
  if (param_1 == (int *)0x0) {
    local_c = 0xa0;
  }
  else {
    *param_1 = 0;
    local_c = FUN_00410a50(&local_10);
    if (local_c == 0) {
      _Size = GetLengthSid(local_10);
      pvVar1 = _malloc(_Size * 2 + 0x1c);
      *param_1 = (int)pvVar1;
      if (*param_1 == 0) {
        local_c = 0xe;
      }
      else {
        local_8 = (void *)(*param_1 + 0x14);
        pvVar1 = (void *)((int)local_8 + _Size);
        BVar2 = InitializeSecurityDescriptor((PSECURITY_DESCRIPTOR)*param_1,1);
        if (BVar2 == 0) {
          local_c = GetLastError();
        }
        else {
          BVar2 = InitializeAcl((PACL)((int)pvVar1 + _Size),_Size + 0x14,2);
          if (BVar2 == 0) {
            local_c = GetLastError();
          }
          else {
            BVar2 = SetSecurityDescriptorDacl
                              ((PSECURITY_DESCRIPTOR)*param_1,1,(PACL)((int)pvVar1 + _Size),0);
            if (BVar2 == 0) {
              local_c = GetLastError();
            }
            else {
              _memcpy(local_8,local_10,_Size);
              BVar2 = SetSecurityDescriptorGroup((PSECURITY_DESCRIPTOR)*param_1,local_8,0);
              if (BVar2 == 0) {
                local_c = GetLastError();
              }
              else {
                _memcpy(pvVar1,local_10,_Size);
                BVar2 = SetSecurityDescriptorOwner((PSECURITY_DESCRIPTOR)*param_1,pvVar1,0);
                if (BVar2 == 0) {
                  local_c = GetLastError();
                }
              }
            }
          }
        }
      }
    }
    if ((local_c != 0) && (*param_1 != 0)) {
      _free((void *)*param_1);
    }
    if (local_10 != (void *)0x0) {
      _free(local_10);
    }
  }
  return local_c;
}



/* Function: FUN_0040fe40 */

DWORD __cdecl FUN_0040fe40(undefined4 *param_1,undefined4 param_2)

{
  DWORD local_8;
  
  local_8 = 0xa0;
  switch(param_2) {
  case 1:
    local_8 = FUN_0040f5a0(param_1,0x1f,(uchar *)"Administrators");
    if ((local_8 == 0) &&
       (local_8 = FUN_0040f5a0(param_1,0x1f,(uchar *)"Offer Remote Assistance Helpers"),
       local_8 == 0)) {
      local_8 = FUN_0040f5a0(param_1,0xb,(uchar *)"Everyone");
    }
    break;
  case 2:
    local_8 = FUN_0040f5a0(param_1,7,(uchar *)"Everyone");
    if (local_8 == 0) {
      local_8 = FUN_0040f5a0(param_1,3,(uchar *)"Everyone");
    }
    break;
  default:
    _printf("WARNING: SetAclDefaults- Invalid security descriptor type.\n");
    break;
  case 4:
  case 0x10:
    local_8 = FUN_0040f5a0(param_1,0x1f,(uchar *)"SYSTEM");
    if ((local_8 == 0) &&
       (local_8 = FUN_0040f5a0(param_1,0x1f,(uchar *)"Administrators"), local_8 == 0)) {
      local_8 = FUN_0040f5a0(param_1,0x1f,(uchar *)"Interactive");
    }
    break;
  case 8:
  case 0x20:
    local_8 = FUN_0040f5a0(param_1,3,(uchar *)"SYSTEM");
    if (local_8 == 0) {
      local_8 = FUN_0040f5a0(param_1,7,"SELF");
    }
  }
  return local_8;
}



/* Function: FUN_00410040 */

DWORD __cdecl FUN_00410040(PSECURITY_DESCRIPTOR param_1,undefined4 *param_2)

{
  BOOL BVar1;
  PSID local_38;
  PACL local_34;
  BOOL local_30;
  PACL local_2c;
  DWORD local_28;
  DWORD local_24;
  PSECURITY_DESCRIPTOR local_20;
  DWORD local_1c;
  DWORD local_18;
  PSID local_14;
  BOOL local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_20 = (PSECURITY_DESCRIPTOR)0x0;
  local_c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  local_18 = 0;
  local_2c = (PACL)0x0;
  local_34 = (PACL)0x0;
  local_38 = (PSID)0x0;
  local_14 = (PSID)0x0;
  local_10 = 0;
  local_30 = 0;
  local_1c = 0;
  BVar1 = GetSecurityDescriptorSacl(param_1,&local_10,&local_34,&local_30);
  if (BVar1 == 0) {
    local_1c = GetLastError();
  }
  else {
    if ((local_34 != (PACL)0x0) && (local_10 != 0)) {
      local_24 = (DWORD)local_34->AclSize;
    }
    BVar1 = GetSecurityDescriptorDacl(param_1,&local_10,&local_2c,&local_30);
    if (BVar1 == 0) {
      local_1c = GetLastError();
    }
    else {
      if ((local_2c != (PACL)0x0) && (local_10 != 0)) {
        local_28 = (DWORD)local_2c->AclSize;
      }
      BVar1 = GetSecurityDescriptorOwner(param_1,&local_38,&local_30);
      if (BVar1 == 0) {
        local_1c = GetLastError();
      }
      else {
        local_8 = GetLengthSid(local_38);
        BVar1 = GetSecurityDescriptorGroup(param_1,&local_14,&local_30);
        if (BVar1 == 0) {
          local_1c = GetLastError();
        }
        else {
          local_18 = GetLengthSid(local_14);
          local_c = 0;
          MakeAbsoluteSD(param_1,local_20,&local_c,local_2c,&local_28,local_34,&local_24,local_38,
                         &local_8,local_14,&local_18);
          local_20 = _malloc(local_c);
          if (local_20 == (void *)0x0) {
            local_1c = 0xe;
          }
          else {
            _memset(local_20,0,local_c);
            BVar1 = InitializeSecurityDescriptor(local_20,1);
            if (BVar1 == 0) {
              local_1c = GetLastError();
            }
            else {
              BVar1 = MakeAbsoluteSD(param_1,local_20,&local_c,local_2c,&local_28,local_34,&local_24
                                     ,local_38,&local_8,local_14,&local_18);
              if (BVar1 == 0) {
                local_1c = GetLastError();
              }
            }
          }
        }
      }
    }
  }
  if ((local_1c != 0) && (local_20 != (void *)0x0)) {
    _free(local_20);
    local_20 = (void *)0x0;
  }
  *param_2 = local_20;
  return local_1c;
}



/* Function: FUN_00410290 */

LSTATUS __cdecl FUN_00410290(HKEY param_1,LPCSTR param_2,LPCSTR param_3,BYTE *param_4)

{
  DWORD cbData;
  LSTATUS local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_c = 0;
  local_8 = (HKEY)0x0;
  local_10 = RegCreateKeyExA(param_1,param_2,0,"",0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                             &local_c);
  if (local_10 == 0) {
    cbData = GetSecurityDescriptorLength(param_4);
    local_10 = RegSetValueExA(local_8,param_3,0,3,param_4,cbData);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return local_10;
}



/* Function: FUN_00410320 */

DWORD __cdecl
FUN_00410320(HKEY param_1,LPCSTR param_2,LPCSTR param_3,int *param_4,undefined4 *param_5)

{
  void *pvVar1;
  DWORD local_14;
  HKEY local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_10 = (HKEY)0x0;
  local_c = 0;
  local_8 = 0;
  if (param_4 == (int *)0x0) {
    local_14 = 0xa0;
  }
  else {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    *param_4 = 0;
    local_14 = RegOpenKeyExA(param_1,param_2,0,0xf003f,&local_10);
    if (local_14 == 0) {
      local_14 = RegQueryValueExA(local_10,param_3,(LPDWORD)0x0,&local_c,(LPBYTE)0x0,&local_8);
      if ((local_14 == 0) || (local_14 == 0x7a)) {
        pvVar1 = _malloc(local_8);
        *param_4 = (int)pvVar1;
        local_14 = RegQueryValueExA(local_10,param_3,(LPDWORD)0x0,&local_c,(LPBYTE)*param_4,&local_8
                                   );
      }
    }
    else if (local_14 != 2) {
      return local_14;
    }
    if (local_14 != 0) {
      if (*param_4 != 0) {
        _free((void *)*param_4);
      }
      *param_4 = 0;
      if ((param_5 != (undefined4 *)0x0) && (local_14 = FUN_0040fc60(param_4), local_14 == 0)) {
        *param_5 = 1;
      }
    }
    if (local_10 != (HKEY)0x0) {
      RegCloseKey(local_10);
    }
  }
  return local_14;
}



/* Function: FUN_00410460 */

DWORD __cdecl
FUN_00410460(HKEY param_1,LPCSTR param_2,LPCSTR param_3,uchar *param_4,int param_5,DWORD param_6,
            undefined4 param_7)

{
  BOOL BVar1;
  PSECURITY_DESCRIPTOR local_28;
  PACL local_24;
  BYTE *local_20;
  DWORD local_1c;
  PSECURITY_DESCRIPTOR local_18;
  BOOL local_14;
  DWORD local_10;
  int local_c;
  BOOL local_8;
  
  local_10 = 0;
  local_28 = (PSECURITY_DESCRIPTOR)0x0;
  local_20 = (BYTE *)0x0;
  local_18 = (PSECURITY_DESCRIPTOR)0x0;
  local_1c = 0;
  local_8 = 0;
  local_14 = 0;
  local_24 = (PACL)0x0;
  local_c = 0;
  local_10 = FUN_00410320(param_1,param_2,param_3,(int *)&local_28,&local_c);
  if (local_10 == 0) {
    BVar1 = GetSecurityDescriptorDacl(local_28,&local_8,&local_24,&local_14);
    if (BVar1 == 0) {
      local_10 = GetLastError();
    }
    else if ((local_c == 0) || (local_10 = FUN_0040fe40(&local_24,param_7), local_10 == 0)) {
      if (param_5 == 0) {
        local_10 = FUN_0040f440(&local_24,param_6,param_4);
      }
      else {
        local_10 = FUN_0040f5a0(&local_24,param_6,param_4);
      }
      if (local_10 == 0) {
        if (local_c == 0) {
          local_10 = FUN_00410040(local_28,&local_18);
          if (local_10 != 0) goto LAB_00410638;
        }
        else {
          local_18 = local_28;
        }
        BVar1 = SetSecurityDescriptorDacl(local_18,1,local_24,0);
        if (BVar1 == 0) {
          local_10 = GetLastError();
        }
        else {
          local_1c = 0;
          MakeSelfRelativeSD(local_18,local_20,&local_1c);
          local_20 = (BYTE *)_malloc(local_1c);
          if (local_20 == (BYTE *)0x0) {
            local_10 = 0xe;
          }
          else {
            BVar1 = MakeSelfRelativeSD(local_18,local_20,&local_1c);
            if (BVar1 == 0) {
              local_10 = GetLastError();
            }
            else {
              FUN_00410290(param_1,param_2,param_3,local_20);
            }
          }
        }
      }
    }
  }
LAB_00410638:
  if (local_28 != (void *)0x0) {
    _free(local_28);
  }
  if (local_20 != (BYTE *)0x0) {
    _free(local_20);
  }
  if ((local_18 != (void *)0x0) && (local_28 != local_18)) {
    _free(local_18);
  }
  return local_10;
}



/* Function: FUN_00410680 */

DWORD __cdecl
FUN_00410680(HKEY param_1,LPCSTR param_2,LPCSTR param_3,uchar *param_4,uint param_5,int param_6,
            int param_7)

{
  BOOL BVar1;
  PSECURITY_DESCRIPTOR local_24;
  PACL local_20;
  BYTE *local_1c;
  DWORD local_18;
  PSECURITY_DESCRIPTOR local_14;
  BOOL local_10;
  DWORD local_c;
  BOOL local_8;
  
  local_c = 0;
  local_24 = (PSECURITY_DESCRIPTOR)0x0;
  local_1c = (BYTE *)0x0;
  local_14 = (PSECURITY_DESCRIPTOR)0x0;
  local_18 = 0;
  local_8 = 0;
  local_10 = 0;
  local_20 = (PACL)0x0;
  local_c = FUN_00410320(param_1,param_2,param_3,(int *)&local_24,(undefined4 *)0x0);
  if (local_c == 0) {
    BVar1 = GetSecurityDescriptorDacl(local_24,&local_8,&local_20,&local_10);
    if (BVar1 == 0) {
      local_c = GetLastError();
    }
    else {
      local_c = FUN_0040f710(local_20,param_4,param_5,param_6,param_7);
      if (local_c == 2) {
        local_c = 0;
      }
      else if (local_c == 0) {
        local_c = FUN_00410040(local_24,&local_14);
        if (local_c == 0) {
          BVar1 = SetSecurityDescriptorDacl(local_14,1,local_20,0);
          if (BVar1 == 0) {
            local_c = GetLastError();
          }
          else {
            local_18 = 0;
            MakeSelfRelativeSD(local_14,local_1c,&local_18);
            local_1c = (BYTE *)_malloc(local_18);
            BVar1 = MakeSelfRelativeSD(local_14,local_1c,&local_18);
            if (BVar1 == 0) {
              local_c = GetLastError();
            }
            else {
              local_c = FUN_00410290(param_1,param_2,param_3,local_1c);
            }
          }
        }
      }
      else {
        local_c = GetLastError();
      }
    }
  }
  else if ((local_c == 2) && (param_6 != 0)) {
    local_c = 0;
  }
  if (local_24 != (void *)0x0) {
    _free(local_24);
  }
  if (local_1c != (BYTE *)0x0) {
    _free(local_1c);
  }
  if (local_14 != (void *)0x0) {
    _free(local_14);
  }
  return local_c;
}



/* Function: FUN_00410870 */

DWORD __cdecl FUN_00410870(HKEY param_1,LPCSTR param_2,LPCSTR param_3,uchar *param_4,int param_5)

{
  BOOL BVar1;
  PSECURITY_DESCRIPTOR local_24;
  PACL local_20;
  BYTE *local_1c;
  DWORD local_18;
  PSECURITY_DESCRIPTOR local_14;
  BOOL local_10;
  DWORD local_c;
  BOOL local_8;
  
  local_c = 0;
  local_24 = (PSECURITY_DESCRIPTOR)0x0;
  local_1c = (BYTE *)0x0;
  local_14 = (PSECURITY_DESCRIPTOR)0x0;
  local_18 = 0;
  local_8 = 0;
  local_10 = 0;
  local_20 = (PACL)0x0;
  local_c = FUN_00410320(param_1,param_2,param_3,(int *)&local_24,(undefined4 *)0x0);
  if (local_c == 0) {
    BVar1 = GetSecurityDescriptorDacl(local_24,&local_8,&local_20,&local_10);
    if (BVar1 == 0) {
      local_c = GetLastError();
    }
    else {
      local_c = FUN_0040fa40(local_20,param_4,param_5);
      if (local_c == 2) {
        local_c = 0;
      }
      else if (local_c == 0) {
        local_c = FUN_00410040(local_24,&local_14);
        if (local_c == 0) {
          BVar1 = SetSecurityDescriptorDacl(local_14,1,local_20,0);
          if (BVar1 == 0) {
            local_c = GetLastError();
          }
          else {
            local_18 = 0;
            MakeSelfRelativeSD(local_14,local_1c,&local_18);
            local_1c = (BYTE *)_malloc(local_18);
            BVar1 = MakeSelfRelativeSD(local_14,local_1c,&local_18);
            if (BVar1 == 0) {
              local_c = GetLastError();
            }
            else {
              local_c = FUN_00410290(param_1,param_2,param_3,local_1c);
            }
          }
        }
      }
      else {
        local_c = GetLastError();
      }
    }
  }
  else if (local_c == 2) {
    local_c = 0;
  }
  if (local_24 != (void *)0x0) {
    _free(local_24);
  }
  if (local_1c != (BYTE *)0x0) {
    _free(local_1c);
  }
  if (local_14 != (void *)0x0) {
    _free(local_14);
  }
  return local_c;
}



/* Function: FUN_00410a50 */

DWORD __cdecl FUN_00410a50(undefined4 *param_1)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  void *pvVar2;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  undefined4 *local_18;
  DWORD local_14;
  size_t local_10;
  HANDLE local_c;
  DWORD local_8;
  
  local_18 = (undefined4 *)0x0;
  local_c = (HANDLE)0x0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  TokenHandle = &local_c;
  DesiredAccess = 8;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  if (BVar1 == 0) {
    local_8 = GetLastError();
  }
  else {
    GetTokenInformation(local_c,TokenUser,(LPVOID)0x0,0,&local_14);
    local_18 = (undefined4 *)_malloc(local_14);
    BVar1 = GetTokenInformation(local_c,TokenUser,local_18,local_14,&local_14);
    if (BVar1 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_10 = GetLengthSid((PSID)*local_18);
      pvVar2 = _malloc(local_10);
      *param_1 = pvVar2;
      _memcpy((void *)*param_1,(void *)*local_18,local_10);
      CloseHandle(local_c);
    }
  }
  _free(local_18);
  return local_8;
}



/* Function: FUN_00410b50 */

void __cdecl FUN_00410b50(uchar *param_1,undefined4 *param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD _Size;
  void *pvVar3;
  PSID_IDENTIFIER_AUTHORITY local_30;
  _SID_IDENTIFIER_AUTHORITY local_28;
  int local_20;
  PSID local_1c;
  DWORD local_18;
  _SID_IDENTIFIER_AUTHORITY local_14;
  uint local_c;
  undefined4 local_8;
  
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_1c = (PSID)0x0;
  local_20 = 0;
  local_14.Value[0] = '\0';
  local_14.Value[1] = '\0';
  local_14.Value[2] = '\0';
  local_14.Value[3] = '\0';
  local_14.Value[4] = '\0';
  local_14.Value[5] = '\x05';
  local_28.Value[0] = '\0';
  local_28.Value[1] = '\0';
  local_28.Value[2] = '\0';
  local_28.Value[3] = '\0';
  local_28.Value[4] = '\0';
  local_28.Value[5] = '\x01';
  iVar1 = __mbsicmp(param_1,(uchar *)"Administrators");
  if (iVar1 == 0) {
    local_18 = 0x220;
  }
  else {
    iVar1 = __mbsicmp(param_1,(uchar *)"Power Users");
    if (iVar1 == 0) {
      local_18 = 0x223;
    }
    else {
      iVar1 = __mbsicmp(param_1,(uchar *)"Everyone");
      if (iVar1 == 0) {
        local_18 = 0;
        local_20 = 1;
      }
      else {
        iVar1 = __mbsicmp(param_1,(uchar *)"System");
        if (iVar1 == 0) {
          local_18 = 0x12;
        }
        else {
          iVar1 = __mbsicmp(param_1,"Self");
          if (iVar1 == 0) {
            local_18 = 10;
          }
          else {
            iVar1 = __mbsicmp(param_1,(uchar *)"Anonymous");
            if (iVar1 == 0) {
              local_18 = 7;
            }
            else {
              iVar1 = __mbsicmp(param_1,(uchar *)"Interactive");
              if (iVar1 != 0) goto LAB_00410d81;
              local_18 = 4;
            }
          }
        }
      }
    }
  }
  if ((local_18 == 0x220) || (local_18 == 0x223)) {
    iVar1 = AllocateAndInitializeSid(&local_14,'\x02',0x20,local_18,0,0,0,0,0,0,&local_1c);
  }
  else {
    if (local_20 == 0) {
      local_30 = &local_14;
    }
    else {
      local_30 = &local_28;
    }
    iVar1 = AllocateAndInitializeSid(local_30,'\x01',local_18,0,0,0,0,0,0,0,&local_1c);
  }
  if ((iVar1 != 0) && (BVar2 = IsValidSid(local_1c), BVar2 != 0)) {
    _Size = GetLengthSid(local_1c);
    pvVar3 = _malloc(_Size);
    *param_2 = pvVar3;
    if (param_2 != (undefined4 *)0x0) {
      BVar2 = CopySid(_Size,(PSID)*param_2,local_1c);
      if (BVar2 == 0) {
        _free((void *)*param_2);
        *param_2 = 0;
      }
      else {
        local_8 = 1;
      }
    }
    FreeSid(local_1c);
  }
LAB_00410d81:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00410d90 */

void __cdecl FUN_00410d90(uchar *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  BOOL BVar3;
  _SID_NAME_USE local_11c;
  DWORD local_118;
  DWORD local_114;
  DWORD local_110;
  CHAR local_10c;
  undefined1 local_10b [259];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_114 = 0;
  local_10c = '\0';
  _memset(local_10b,0,0xff);
  local_110 = 0;
  local_114 = 0;
  local_118 = 0xff;
  iVar1 = FUN_00410b50(param_1,param_2);
  if (iVar1 == 0) {
    LookupAccountNameA((LPCSTR)0x0,(LPCSTR)param_1,(PSID)*param_2,&local_114,&local_10c,&local_118,
                       &local_11c);
    local_110 = GetLastError();
    if (local_110 == 0x7a) {
      local_110 = 0;
      pvVar2 = _malloc(local_114);
      *param_2 = pvVar2;
      if (param_2 == (undefined4 *)0x0) {
        local_110 = 0xe;
      }
      else {
        local_118 = 0xff;
        BVar3 = LookupAccountNameA((LPCSTR)0x0,(LPCSTR)param_1,(PSID)*param_2,&local_114,&local_10c,
                                   &local_118,&local_11c);
        if (BVar3 == 0) {
          local_110 = GetLastError();
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00410ef0 */

void FUN_00410ef0(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_ac;
  ushort local_18;
  uint local_c;
  undefined4 local_8;
  
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_ac.dwOSVersionInfoSize = 0x9c;
  _memset(&local_ac.dwMajorVersion,0,0x98);
  BVar1 = GetVersionExA(&local_ac);
  if (BVar1 != 0) {
    if (local_ac.dwMajorVersion == 5) {
      if (local_ac.dwMinorVersion == 0) {
        local_8 = 1;
      }
      else if (local_ac.dwMinorVersion == 1) {
        if (local_18 < 2) {
          local_8 = 1;
        }
      }
      else if ((local_ac.dwMinorVersion == 2) && (local_18 == 0)) {
        local_8 = 1;
      }
    }
    else if (local_ac.dwMajorVersion < 5) {
      local_8 = 1;
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00410fb0 */

void __cdecl FUN_00410fb0(char *param_1,uchar *param_2,int param_3,int param_4,uint param_5)

{
  char *local_110;
  char local_10c;
  undefined1 local_10b [255];
  uint local_c;
  DWORD local_8;
  
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_10c = '\0';
  _memset(local_10b,0,0xff);
  local_8 = 0;
  if (*param_1 == '{') {
    local_110 = "APPID\\%s";
  }
  else {
    local_110 = "APPID\\{%s}";
  }
  __snprintf(&local_10c,0xff,local_110,param_1);
  if (param_3 == 0) {
    local_8 = FUN_00410870((HKEY)0x80000000,&local_10c,"AccessPermission",param_2,-1);
  }
  else {
    local_8 = FUN_00410870((HKEY)0x80000000,&local_10c,"AccessPermission",param_2,
                           (uint)(param_4 == 0));
    if ((local_8 == 0) &&
       (local_8 = FUN_00410680((HKEY)0x80000000,&local_10c,"AccessPermission",param_2,param_5,1,
                               (uint)(param_4 != 0)), local_8 == 0)) {
      local_8 = FUN_00410460((HKEY)0x80000000,&local_10c,"AccessPermission",param_2,param_4,param_5,
                             0x20);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00411110 */

void __cdecl FUN_00411110(char *param_1,uchar *param_2,int param_3,int param_4,uint param_5)

{
  char *local_110;
  char local_10c;
  undefined1 local_10b [255];
  uint local_c;
  DWORD local_8;
  
  local_c = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_10c = '\0';
  _memset(local_10b,0,0xff);
  local_8 = 0;
  if (*param_1 == '{') {
    local_110 = "APPID\\%s";
  }
  else {
    local_110 = "APPID\\{%s}";
  }
  __snprintf(&local_10c,0xff,local_110,param_1);
  if (param_3 == 0) {
    local_8 = FUN_00410870((HKEY)0x80000000,&local_10c,"LaunchPermission",param_2,-1);
  }
  else {
    local_8 = FUN_00410870((HKEY)0x80000000,&local_10c,"LaunchPermission",param_2,
                           (uint)(param_4 == 0));
    if ((local_8 == 0) &&
       (local_8 = FUN_00410680((HKEY)0x80000000,&local_10c,"LaunchPermission",param_2,param_5,1,
                               (uint)(param_4 != 0)), local_8 == 0)) {
      local_8 = FUN_00410460((HKEY)0x80000000,&local_10c,"LaunchPermission",param_2,param_4,param_5,
                             0x10);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00411263 */

void __fastcall FUN_00411263(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00411282 */

void * __fastcall FUN_00411282(void *param_1)

{
  _memset(param_1,0,0x18);
  return param_1;
}



/* Function: FUN_00411298 */

int __fastcall FUN_00411298(int param_1)

{
  FUN_00411282((void *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return param_1;
}



/* Function: FUN_004112b4 */

void __fastcall FUN_004112b4(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  FUN_00411263((undefined4 *)(param_1 + 0x2c));
  return;
}



/* Function: FUN_004112cc */

undefined4 * __fastcall FUN_004112cc(undefined4 *param_1)

{
  long lVar1;
  
  FUN_00411298((int)param_1);
  *param_1 = 0x38;
  param_1[2] = 0x400000;
  param_1[1] = 0x400000;
  param_1[3] = 0x900;
  param_1[4] = &DAT_00422d3c;
  lVar1 = ATL::CComCriticalSection::Init((CComCriticalSection *)(param_1 + 5));
  if (lVar1 < 0) {
    DAT_00429ae0 = 1;
  }
  return param_1;
}



/* Function: FUN_0041130c */

void __fastcall FUN_0041130c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[2];
    if (piVar3 < (int *)param_1[3]) {
      do {
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 0x10);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 < (int *)param_1[3]);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00411350 */

undefined4 * __fastcall FUN_00411350(undefined4 *param_1)

{
  long lVar1;
  
  FUN_00411282((CComCriticalSection *)(param_1 + 4));
  *param_1 = 0;
  param_1[1] = 0x400000;
  param_1[2] = &DAT_00426370;
  param_1[3] = &DAT_00426370;
  lVar1 = ATL::CComCriticalSection::Init((CComCriticalSection *)(param_1 + 4));
  if (lVar1 < 0) {
    DAT_00429ae0 = 1;
  }
  else {
    *param_1 = 0x28;
  }
  return param_1;
}



/* Function: _com_issue_error */

/* Library Function - Single Match
    void __stdcall _com_issue_error(long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void _com_issue_error(long param_1)

{
  (*(code *)PTR__com_raise_error_00428828)(param_1,0);
  return;
}



/* Function: _com_raise_error */

/* Library Function - Single Match
    void __stdcall _com_raise_error(long,struct IErrorInfo *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void _com_raise_error(long param_1,IErrorInfo *param_2)

{
  code *pcVar1;
  undefined **local_14;
  long local_10;
  IErrorInfo *local_c;
  undefined4 local_8;
  
  local_14 = &PTR__scalar_deleting_destructor__00422d4c;
  local_10 = param_1;
  local_c = param_2;
  local_8 = 0;
  __CxxThrowException_8(&local_14,&DAT_00425d54);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: _com_error */

/* Library Function - Single Match
    public: __thiscall _com_error::_com_error(class _com_error const &)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_com_error * __thiscall _com_error::_com_error(_com_error *this,_com_error *param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00422d4c;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 8);
  *(int **)(this + 8) = piVar1;
  *(undefined4 *)(this + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return this;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall _com_error::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2008 Release */

void * __thiscall _com_error::_scalar_deleting_destructor_(_com_error *this,uint param_1)

{
  int *piVar1;
  HANDLE hHeap;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00422d4c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)(this + 0xc) != 0) {
    hHeap = GetProcessHeap();
    if (hHeap != (HANDLE)0x0) {
      HeapFree(hHeap,0,*(LPVOID *)(this + 0xc));
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return this;
}



/* Function: FUN_004114d0 */

void FUN_004114d0(uint param_1)

{
  operator_new(param_1);
  return;
}



/* Function: FUN_004114db */

void __fastcall FUN_004114db(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  FUN_0040da70(param_1 + 0xc,'\x01',0);
  exception::~exception(param_1);
  return;
}



/* Function: FUN_004114fa */

undefined4 * __thiscall FUN_004114fa(void *this,undefined4 param_1)

{
  FUN_0040d770(this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_00411517 */

undefined4 * __thiscall FUN_00411517(void *this,undefined4 param_1)

{
  FUN_0040d770(this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_0041153f */

exception * __thiscall FUN_0041153f(void *this,byte param_1)

{
  *(undefined ***)this = std::out_of_range::vftable;
  FUN_004114db((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: FUN_00411566 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00411566(void)

{
  code *pcVar1;
  undefined1 local_54 [40];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x411572;
  FUN_0040de60(local_2c,"string too long");
  local_8 = 0;
  FUN_004114fa(local_54,local_2c);
  __CxxThrowException_8(local_54,&DAT_00425a0c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041159e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_0041159e(void)

{
  code *pcVar1;
  undefined1 local_54 [40];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4115aa;
  FUN_0040de60(local_2c,"invalid string position");
  local_8 = 0;
  FUN_00411517(local_54,local_2c);
  __CxxThrowException_8(local_54,&DAT_00425d88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004115d6 */

undefined4 * __thiscall FUN_004115d6(void *this,exception *param_1)

{
  FUN_0040ddd0(this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_004115f3 */

void FUN_004115f3(void *param_1)

{
  _free(param_1);
  return;
}



/* Function: FUN_004115fe */

void FUN_004115fe(void *param_1)

{
  FUN_004115f3(param_1);
  return;
}



/* Function: _memcpy_s */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
LAB_00411619:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_00411622:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00411619;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_00411622;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/* Function: _V6_HeapAlloc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2008 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_0042b908) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_004116cc();
  }
  return local_20;
}



/* Function: FUN_004116cc */

void FUN_004116cc(void)

{
  FUN_00414f48(4);
  return;
}



/* Function: _malloc */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  uint dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_00429e74 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_0042b8fc == 1) {
        dwBytes = _Size;
        if (_Size == 0) {
          dwBytes = 1;
        }
LAB_00411744:
        piVar1 = (int *)HeapAlloc(DAT_00429e74,0,dwBytes);
      }
      else if ((DAT_0042b8fc != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0))
      {
        sVar3 = _Size;
        if (_Size == 0) {
          sVar3 = 1;
        }
        dwBytes = sVar3 + 0xf & 0xfffffff0;
        goto LAB_00411744;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_0042a1c8 == 0) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (void *)0x0;
}



/* Function: _free */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2008 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_0042b8fc == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_004117f5();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_00429e74,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = __errno();
      DVar4 = GetLastError();
      iVar5 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/* Function: FUN_004117f5 */

void FUN_004117f5(void)

{
  FUN_00414f48(4);
  return;
}



/* Function: __security_check_cookie */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_00428870) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/* Function: __alloca_probe_16 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2008 Release */

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



/* Function: __allmul */

/* Library Function - Single Match
    __allmul
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* Function: ~type_info */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return this;
}



/* Function: operator== */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2008 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}



/* Function: __resetstkoflw */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2008 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  LPVOID pvVar4;
  uint dwSize;
  int iVar5;
  LPVOID lpAddress;
  undefined4 uStack_68;
  _SYSTEM_INFO local_58;
  _MEMORY_BASIC_INFORMATION local_34;
  DWORD local_18;
  PVOID local_14;
  undefined1 *local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  uStack_68 = 0x411912;
  local_10 = (undefined1 *)&uStack_68;
  SVar1 = VirtualQuery(&uStack_68,&local_34,0x1c);
  if (SVar1 != 0) {
    local_14 = local_34.AllocationBase;
    GetSystemInfo(&local_58);
    iVar5 = 0;
    hModule = GetModuleHandleW(L"kernel32.dll");
    if ((hModule != (HMODULE)0x0) &&
       (pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee"), pFVar2 != (FARPROC)0x0)) {
      local_c = 0;
      iVar3 = (*pFVar2)(&local_c);
      if ((iVar3 == 1) && (local_c != 0)) {
        iVar5 = local_c;
      }
    }
    dwSize = iVar5 + -1 + local_58.dwPageSize & ~(local_58.dwPageSize - 1);
    if (dwSize != 0) {
      dwSize = dwSize + local_58.dwPageSize;
    }
    if (dwSize < local_58.dwPageSize * 2) {
      dwSize = local_58.dwPageSize * 2;
    }
    lpAddress = (LPVOID)((~(local_58.dwPageSize - 1) & (uint)local_10) - dwSize);
    if (((LPVOID)(local_58.dwPageSize + (int)local_14) <= lpAddress) &&
       (pvVar4 = VirtualAlloc(lpAddress,dwSize,0x1000,4), pvVar4 != (LPVOID)0x0)) {
      VirtualProtect(lpAddress,dwSize,0x104,&local_18);
    }
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



/* Function: __except_handler4 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  PVOID pvVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  PVOID local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_00428870);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  pvVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)((int)param_2 + -4) = &local_1c;
    pvVar4 = *(PVOID *)((int)param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (pvVar4 == (PVOID)0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (uint *)(piVar5 + (int)pvVar4 * 3 + 4);
      local_c = (PVOID)*local_14;
      if ((undefined *)piVar5[(int)pvVar4 * 3 + 5] != (undefined *)0x0) {
        iVar2 = _EH4_CallFilterFunc((undefined *)piVar5[(int)pvVar4 * 3 + 5]);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_00411a98;
        }
        if (0 < iVar2) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_004233fc != (undefined *)0x0)) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_004233fc)
             , BVar3 != 0)) {
            (*(code *)PTR____DestructExceptionObject_004233fc)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(PVOID *)((int)param_2 + 0xc) != pvVar4) {
            _EH4_LocalUnwind((int)param_2,(uint)pvVar4,iVar1,&DAT_00428870);
          }
          *(PVOID *)((int)param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler((undefined *)local_14[2]);
          goto LAB_00411b5c;
        }
      }
      pvVar4 = local_c;
    } while (local_c != (PVOID)0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_00411b5c:
    if (*(int *)((int)pvVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)pvVar4,0xfffffffe,iVar1,&DAT_00428870);
  }
LAB_00411a98:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}



/* Function: _JumpToContinuation */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
                    /* WARNING: Load size is inaccurate */
  ExceptionList = *ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00411ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1)();
  return;
}



/* Function: FID_conflict:_CallMemberFunction1 */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00411bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: _UnwindNestedFrames */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2008 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x411be0,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* Function: FID_conflict:___CxxFrameHandler3 */

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



/* Function: CatchGuardHandler */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  _Var1 = ___InternalCxxFrameHandler
                    (param_1,*(EHRegistrationNode **)(param_2 + 0x10),(_CONTEXT *)param_3,
                     (void *)0x0,*(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
                     (EHRegistrationNode *)param_2,'\0');
  return _Var1;
}



/* Function: _CallSETranslator */

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x411d1d;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_00428870 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = (undefined4 *)ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = (code *)p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
                    /* WARNING: Load size is inaccurate */
      *local_2c = *ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}



/* Function: TranslatorGuardHandler */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),(_CONTEXT *)param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00411de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* Function: _GetRangeOfTrysToCheck */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2008 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}



/* Function: __CreateFrameInfo */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



/* Function: __IsExceptionObjectToBeDestroyed */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = (int *)p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/* Function: __FindAndUnlinkFrame */

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2008 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
  }
  else {
    p_Var2 = __getptd();
    pvVar1 = p_Var2->_pFrameInfoChain;
    do {
      pvVar3 = pvVar1;
      if (*(int *)((int)pvVar3 + 4) == 0) {
        _inconsistency();
        return;
      }
      pvVar1 = *(void **)((int)pvVar3 + 4);
    } while (param_1 != *(void **)((int)pvVar3 + 4));
    *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}



/* Function: _CallCatchBlock2 */

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  code *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_00428870 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = CatchGuardHandler;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* Function: __CxxThrowException@8 */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_00422dc0;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/* Function: __alloca_probe */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2008 Release */

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



/* Function: __mbsnbcpy_s */

/* Library Function - Single Match
    __mbsnbcpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __mbsnbcpy_s(uchar *_Dst,size_t _SizeInBytes,uchar *_Src,size_t _MaxCount)

{
  errno_t eVar1;
  
  eVar1 = __mbsnbcpy_s_l(_Dst,_SizeInBytes,_Src,_MaxCount,(_locale_t)0x0);
  return eVar1;
}



/* Function: _LocaleUpdate */

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2008 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_00429268) && ((p_Var2->_ownlocale & DAT_00429184) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_00429088) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_00429184) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}



/* Function: __mbsstr_l */

/* Library Function - Single Match
    __mbsstr_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbsstr_l(uchar *_Str,uchar *_Substr,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  size_t sVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  int local_c;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (*(int *)(local_18 + 8) == 0) {
    _Str = (uchar *)FUN_00418420((uint *)_Str,(char *)_Substr);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Substr == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else if (*_Substr == '\0') {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  else {
    sVar3 = _strlen((char *)_Substr);
    local_c = (int)_Str - sVar3;
    sVar3 = _strlen((char *)_Str);
    if (*_Str != '\0') {
      iVar5 = (int)_Str - (int)_Substr;
      do {
        if ((byte *)(sVar3 + local_c) < _Str) break;
        puVar4 = _Substr;
        bVar1 = *_Str;
        while (bVar1 != 0) {
          if (*puVar4 == '\0') goto LAB_004121b0;
          if (puVar4[iVar5] != *puVar4) break;
          puVar4 = puVar4 + 1;
          bVar1 = puVar4[iVar5];
        }
        if (*puVar4 == '\0') {
LAB_004121b0:
          if (local_10 == '\0') {
            return _Str;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return _Str;
        }
        pbVar7 = _Str + 1;
        iVar6 = iVar5 + 1;
        if ((*(byte *)(*_Str + 0x1d + local_18) & 4) != 0) {
          if (*pbVar7 == 0) break;
          pbVar7 = _Str + 2;
          iVar6 = iVar5 + 2;
        }
        iVar5 = iVar6;
        _Str = pbVar7;
      } while (*pbVar7 != 0);
    }
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    _Str = (uchar *)0x0;
  }
  return _Str;
}



/* Function: __mbsstr */

/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  uchar *puVar1;
  
  puVar1 = __mbsstr_l(_Str,_Substr,(_locale_t)0x0);
  return puVar1;
}



/* Function: _memset */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_0042b8e4 != 0)) {
    pauVar2 = __VEC_memzero((undefined1 (*) [16])_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = (uint *)_Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* Function: _puts */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _puts
   
   Library: Visual Studio 2008 Release */

int __cdecl _puts(char *_Str)

{
  int *piVar1;
  undefined **ppuVar2;
  uint uVar3;
  int _Flag;
  size_t _Count;
  size_t sVar4;
  undefined *puVar5;
  int local_20;
  
  local_20 = -1;
  if (_Str != (char *)0x0) {
    ppuVar2 = FUN_0041864b();
    if (((uint)ppuVar2[0xb] & 0x40) != 0) {
LAB_00412304:
      ppuVar2 = FUN_0041864b();
      __lock_file2(1,ppuVar2 + 8);
      ppuVar2 = FUN_0041864b();
      _Flag = __stbuf((FILE *)(ppuVar2 + 8));
      _Count = _strlen(_Str);
      ppuVar2 = FUN_0041864b();
      sVar4 = __fwrite_nolock(_Str,1,_Count,(FILE *)(ppuVar2 + 8));
      if (sVar4 == _Count) {
        ppuVar2 = FUN_0041864b();
        ppuVar2 = ppuVar2 + 9;
        *ppuVar2 = *ppuVar2 + -1;
        if ((int)*ppuVar2 < 0) {
          ppuVar2 = FUN_0041864b();
          __flsbuf(10,(FILE *)(ppuVar2 + 8));
        }
        else {
          ppuVar2 = FUN_0041864b();
          ppuVar2 = ppuVar2 + 8;
          **ppuVar2 = 10;
          *ppuVar2 = *ppuVar2 + 1;
        }
        local_20 = 0;
      }
      ppuVar2 = FUN_0041864b();
      __ftbuf(_Flag,(FILE *)(ppuVar2 + 8));
      FUN_004123a6();
      return local_20;
    }
    uVar3 = __fileno((FILE *)(ppuVar2 + 8));
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      puVar5 = &DAT_00429500;
    }
    else {
      puVar5 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_0042a7c0)[(int)uVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) == 0) {
      if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
        puVar5 = &DAT_00429500;
      }
      else {
        puVar5 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_0042a7c0)[(int)uVar3 >> 5]);
      }
      if ((puVar5[0x24] & 0x80) == 0) goto LAB_00412304;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* Function: FUN_004123a6 */

void FUN_004123a6(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_0041864b();
  __unlock_file2(1,ppuVar1 + 8);
  return;
}



/* Function: __vsprintf_l */

/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,param_3,_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}



/* Function: _vsprintf */

/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



/* Function: _memcmp */

/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
LAB_004139aa:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_004139aa;
  }
  if (_Size == 3) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_004139aa;
  }
  if (_Size == 4) {
                    /* WARNING: Load size is inaccurate */
    uVar2 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
    uVar3 = (uint)*_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_004139aa;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    if (*_Buf1 == *_Buf2) {
      iVar1 = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar3 = (uint)*_Buf1;
                    /* WARNING: Load size is inaccurate */
      uVar2 = (uint)*_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0xb) - (uint)*(byte *)((int)_Buf2 + 0xb);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0xf) - (uint)*(byte *)((int)_Buf2 + 0xf);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x13) - (uint)*(byte *)((int)_Buf2 + 0x13);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x17) - (uint)*(byte *)((int)_Buf2 + 0x17);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x1b) - (uint)*(byte *)((int)_Buf2 + 0x1b);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + 0x1f) - (uint)*(byte *)((int)_Buf2 + 0x1f);
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_00412918_caseD_0;
  case 1:
    goto switchD_00412918_caseD_1;
  case 2:
    goto switchD_00412918_caseD_2;
  case 3:
    goto switchD_00412918_caseD_3;
  case 4:
    goto switchD_00412918_caseD_4;
  case 5:
    goto switchD_00412918_caseD_5;
  case 6:
    goto switchD_00412918_caseD_6;
  case 7:
    goto switchD_00412918_caseD_7;
  case 8:
    goto switchD_00412918_caseD_8;
  case 9:
    goto switchD_00412918_caseD_9;
  case 10:
    goto switchD_00412918_caseD_a;
  case 0xb:
    goto switchD_00412918_caseD_b;
  case 0xc:
    goto switchD_00412918_caseD_c;
  case 0xd:
    goto switchD_00412918_caseD_d;
  case 0xe:
    goto switchD_00412918_caseD_e;
  case 0xf:
    goto switchD_00412918_caseD_f;
  case 0x10:
    goto switchD_00412918_caseD_10;
  case 0x11:
    goto switchD_00412918_caseD_11;
  case 0x12:
    goto switchD_00412918_caseD_12;
  case 0x13:
    goto switchD_00412918_caseD_13;
  case 0x14:
    goto switchD_00412918_caseD_14;
  case 0x15:
    goto switchD_00412918_caseD_15;
  case 0x16:
    goto switchD_00412918_caseD_16;
  case 0x17:
    goto switchD_00412918_caseD_17;
  case 0x18:
    goto switchD_00412918_caseD_18;
  case 0x1a:
    goto switchD_00412918_caseD_1a;
  case 0x1b:
    goto switchD_00412918_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 9)) - (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 5)) - (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_00412918_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if (((uVar3 == uVar2) ||
                (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0))
               && (iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)), iVar1 != 0)) {
              iVar1 = (uint)(0 < iVar1) * 2 + -1;
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_00412918_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 6)) - (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 2)) - (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 7)) - (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 3)) - (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_004134fe:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_00412918_caseD_1;
    }
    goto switchD_00412918_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
              (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 8)) - (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = (uint)*(byte *)((int)_Buf1 + (_Size - 4)) - (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if (iVar1 != 0) {
        iVar1 = (uint)(0 < iVar1) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00412918_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_004134fe;
  }
}



/* Function: _strcat_s */

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        piVar2 = __errno();
        eVar4 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00413af3;
      }
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00413af3:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* Function: _strcpy_s */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eVar4 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00413b67;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00413b67:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* Function: _wcsncpy_s */

/* Library Function - Single Match
    _wcsncpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_00413bd3:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          pwVar3 = _Dst;
          rVar4 = _SizeInWords;
          if (_MaxCount == 0xffffffff) {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if (wVar1 == L'\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if ((wVar1 == L'\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          piVar2 = __errno();
          eVar5 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00413be4;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_00413bd3;
  piVar2 = __errno();
  eVar5 = 0x16;
  *piVar2 = 0x16;
LAB_00413be4:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/* Function: __recalloc */

/* Library Function - Single Match
    __recalloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl __recalloc(void *_Memory,size_t _Count,size_t _Size)

{
  int *piVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    _NewSize = _Count * _Size;
    if (_Memory != (void *)0x0) {
      sVar3 = __msize(_Memory);
    }
    pvVar2 = _realloc(_Memory,_NewSize);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,_NewSize - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}



/* Function: bad_alloc */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_004288a0,1);
  *(undefined ***)this = vftable;
  return this;
}



/* Function: operator_new */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2008 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_10 [12];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_00429cf8 & 1) == 0) {
    _DAT_00429cf8 = _DAT_00429cf8 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_00429cec);
    _atexit((_func_4879 *)&LAB_004213a2);
  }
  FUN_0040ec10(local_10,(exception *)&DAT_00429cec);
  __CxxThrowException_8(local_10,&DAT_00425bbc);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/* Function: __purecall */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2008 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_0042a560);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Function: __onexit_nolock */

/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __onexit_nolock(int param_1)

{
  int *_Memory;
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  
  _Memory = (int *)__decode_pointer(DAT_0042b8f0);
  piVar1 = (int *)__decode_pointer(DAT_0042b8ec);
  if ((piVar1 < _Memory) || (iVar5 = (int)piVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return 0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return 0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
    }
    piVar1 = (int *)((int)pvVar4 + (iVar5 >> 2) * 4);
    DAT_0042b8f0 = __encode_pointer((int)pvVar4);
  }
  iVar5 = __encode_pointer(param_1);
  *piVar1 = iVar5;
  DAT_0042b8ec = __encode_pointer((int)(piVar1 + 1));
  return param_1;
}



/* Function: __onexit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00415be5();
  p_Var1 = (_onexit_t)__onexit_nolock((int)_Func);
  FUN_00413ec6();
  return p_Var1;
}



/* Function: FUN_00413ec6 */

void FUN_00413ec6(void)

{
  FUN_00415bee();
  return;
}



/* Function: _atexit */

/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: FUN_00413ee3 */

void __cdecl FUN_00413ee3(undefined4 param_1)

{
  DAT_00429cfc = param_1;
  return;
}



/* Function: __invoke_watson */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  uVar1 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_32c.ExceptionCode = 0;
  _memset(&local_32c.ExceptionFlags,0,0x4c);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_2d4 = 0x10001;
  local_32c.ExceptionCode = 0xc0000417;
  local_32c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_00419f3e();
  }
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __invalid_parameter */

/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                   uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__decode_pointer(DAT_00429cfc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00419f3e();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/* Function: FUN_00414040 */

void FUN_00414040(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* Function: _memcpy */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00414233_caseD_2;
        case 3:
          goto switchD_00414233_caseD_3;
        }
        goto switchD_00414233_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00414233_caseD_0;
      case 1:
        goto switchD_00414233_caseD_1;
      case 2:
        goto switchD_00414233_caseD_2;
      case 3:
        goto switchD_00414233_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00414233_caseD_2;
            case 3:
              goto switchD_00414233_caseD_3;
            }
            goto switchD_00414233_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00414233_caseD_2;
            case 3:
              goto switchD_00414233_caseD_3;
            }
            goto switchD_00414233_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00414233_caseD_2;
            case 3:
              goto switchD_00414233_caseD_3;
            }
            goto switchD_00414233_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_00414233_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_00414233_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_00414233_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_00414233_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_0042b8e4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy((undefined4 *)_Dst,(undefined4 *)_Src,_Size);
    return puVar1;
  }
  puVar1 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_004140ac_caseD_2;
      case 3:
        goto switchD_004140ac_caseD_3;
      }
      goto switchD_004140ac_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_004140ac_caseD_0;
    case 1:
      goto switchD_004140ac_caseD_1;
    case 2:
      goto switchD_004140ac_caseD_2;
    case 3:
      goto switchD_004140ac_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_004140ac_caseD_2;
          case 3:
            goto switchD_004140ac_caseD_3;
          }
          goto switchD_004140ac_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_004140ac_caseD_2;
          case 3:
            goto switchD_004140ac_caseD_3;
          }
          goto switchD_004140ac_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_004140ac_caseD_2;
          case 3:
            goto switchD_004140ac_caseD_3;
          }
          goto switchD_004140ac_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_004140ac_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_004140ac_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_004140ac_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_004140ac_caseD_0:
  return _Dst;
}



/* Function: FUN_004143b5 */

int __cdecl FUN_004143b5(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



/* Function: FUN_004143e0 */

uint * __cdecl FUN_004143e0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if ((byte)uVar4 == 0) goto LAB_00414433;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_00414445;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_00414445;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_00414445;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_00414433:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_00414445:
  uVar4 = (uint)param_2 & 3;
  while (uVar4 != 0) {
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_004144c0;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar4 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_004144c0:
        *(byte *)puVar5 = (byte)uVar4;
        return param_1;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return param_1;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return param_1;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return param_1;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}



/* Function: FUN_004144c8 */

void __fastcall FUN_004144c8(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::exception::vftable;
  return;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = (char *)_malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = vftable;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = pcVar1;
  return;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = (char *)_malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* Function: ~exception */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}



/* Function: FUN_004145bc */

char * __fastcall FUN_004145bc(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/* Function: FUN_004145c9 */

exception * __thiscall FUN_004145c9(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: _memmove_s */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00414641:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_00414641;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/* Function: _strlen */

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = (uint)_Str & 3;
  puVar2 = (uint *)_Str;
  while (uVar1 != 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    if ((char)uVar1 == '\0') goto LAB_004146b3;
    uVar1 = (uint)puVar2 & 3;
  }
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_004146b3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* Function: _printf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _printf
   
   Library: Visual Studio 2008 Release */

int __cdecl _printf(char *_Format,...)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int _Flag;
  _locale_t _Locale;
  va_list _ArgList;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    ppuVar3 = FUN_0041864b();
    __lock_file2(1,ppuVar3 + 8);
    ppuVar3 = FUN_0041864b();
    _Flag = __stbuf((FILE *)(ppuVar3 + 8));
    _ArgList = &stack0x00000008;
    _Locale = (_locale_t)0x0;
    ppuVar3 = FUN_0041864b();
    iVar2 = __output_l((FILE *)(ppuVar3 + 8),_Format,_Locale,_ArgList);
    ppuVar3 = FUN_0041864b();
    __ftbuf(_Flag,(FILE *)(ppuVar3 + 8));
    FUN_00414777();
  }
  return iVar2;
}



/* Function: FUN_00414777 */

void FUN_00414777(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_0041864b();
  __unlock_file2(1,ppuVar1 + 8);
  return;
}



/* Function: __get_printf_count_output */

/* Library Function - Single Match
    __get_printf_count_output
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_00429d00 == (DAT_00428870 | 1));
}



/* Function: __mbsicmp_l */

/* Library Function - Single Match
    __mbsicmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  byte *pbVar7;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte local_8;
  byte local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else {
    ptVar6 = local_18.mbcinfo;
    if ((local_18.mbcinfo)->ismbcodepage == 0) {
      iVar5 = __stricmp_l((char *)_Str1,(char *)_Str2,&local_18);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar1 = *_Str1;
        pbVar7 = _Str1 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar2 = (ushort)bVar1;
            _Str1 = pbVar7;
          }
          else {
            uVar2 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
            _Str1 = pbVar7;
          }
        }
        else if (*pbVar7 == 0) {
          uVar2 = 0;
          _Str1 = pbVar7;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str1,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar2 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) goto LAB_0041497e;
            uVar2 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          ptVar6 = local_18.mbcinfo;
          _Str1 = _Str1 + 2;
        }
        bVar1 = *_Str2;
        pbVar7 = _Str2 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar3 = (ushort)bVar1;
          }
          else {
            uVar3 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar3 = 0;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str2,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar3 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) {
LAB_0041497e:
              piVar4 = __errno();
              *piVar4 = 0x16;
              if (local_c != '\0') {
                *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              }
              return 0x7fffffff;
            }
            uVar3 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          pbVar7 = _Str2 + 2;
          ptVar6 = local_18.mbcinfo;
        }
        if (uVar3 != uVar2) {
          iVar5 = (-(uint)(uVar3 < uVar2) & 2) - 1;
          if (local_c == '\0') {
            return iVar5;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar5;
        }
        _Str2 = pbVar7;
      } while (uVar2 != 0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* Function: __mbsicmp */

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}



/* Function: __snprintf */

/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = __output_l(&local_24,_Format,(_locale_t)0x0,&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: fast_error_exit */

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_00429d0c == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}



/* Function: ___tmainCRTStartup */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  _STARTUPINFOA local_6c;
  int local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x414ac1;
  local_8 = 0;
  GetStartupInfoA(&local_6c);
  local_8 = 0xfffffffe;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    local_20 = (uint)(*(int *)(&UNK_004000e8 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0);
  }
  else {
    local_20 = 0;
  }
  iVar1 = __heap_init();
  if (iVar1 == 0) {
    fast_error_exit(0x1c);
  }
  iVar1 = __mtinit();
  if (iVar1 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = 1;
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0042b918 = GetCommandLineA();
  DAT_00429d04 = ___crtGetEnvironmentStringsA();
  iVar1 = __setargv();
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = __setenvp();
  if (iVar1 < 0) {
    __amsg_exit(9);
  }
  iVar1 = __cinit(1);
  if (iVar1 != 0) {
    __amsg_exit(iVar1);
  }
  __wincmdln();
  local_24 = FUN_00406140((HINSTANCE)&IMAGE_DOS_HEADER_00400000);
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(local_24);
  }
  __cexit();
  return local_24;
}



/* Function: entry */

void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00428870 ^ (uint)&param_2;
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



/* Function: FUN_00414c99 */

void FUN_00414c99(void)

{
  return;
}



/* Function: __cfltcvt_init */

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2008 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_00429560 = __cfltcvt;
  PTR_LAB_00429564 = __cropzeros;
  PTR_LAB_00429568 = __fassign;
  PTR_LAB_0042956c = __forcdecpt;
  PTR_LAB_00429570 = __positive;
  PTR_LAB_00429574 = __cfltcvt;
  PTR_LAB_00429578 = __cfltcvt_l;
  PTR_LAB_0042957c = __fassign_l;
  PTR_LAB_00429580 = __cropzeros_l;
  PTR_LAB_00429584 = __forcdecpt_l;
  return;
}



/* Function: __fpmath */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2008 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_00429d14 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00428870 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00428870 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: terminate */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if ((code *)p_Var1->_terminate != (code *)0x0) {
    (*(code *)p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Function: FUN_00414dbf */

void FUN_00414dbf(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if ((code *)p_Var1->_unexpected != (code *)0x0) {
    (*(code *)p_Var1->_unexpected)();
  }
  terminate();
  return;
}



/* Function: _inconsistency */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_00429d18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: __initp_eh_hooks */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Library: Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_00429d18 = __encode_pointer(0x414d86);
  return;
}



/* Function: __get_errno_from_oserr */

/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_004288d0)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x4288d4);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



/* Function: __errno */

/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2008 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_00428a38;
  }
  return &p_Var1->_terrno;
}



/* Function: ___doserrno */

/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2008 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_00428a3c;
  }
  return &p_Var1->_tdoserrno;
}



/* Function: __dosmaperr */

/* Library Function - Single Match
    __dosmaperr
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



/* Function: __mtinitlocks */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_00429d20;
  do {
    if ((&DAT_00428a44)[iVar2 * 2] == 1) {
      (&DAT_00428a40)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(&DAT_00428a40)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_00428a40)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* Function: __mtdeletelocks */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00428a40;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x428b60);
  puVar1 = &DAT_00428a40;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x428b60);
  return;
}



/* Function: FUN_00414f48 */

void __cdecl FUN_00414f48(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00428a40)[param_1 * 2]);
  return;
}



/* Function: __mtinitlocknum */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_00429e74 == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_00428a40 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = (LPCRITICAL_SECTION)__malloc_crt(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (BVar2 == 0) {
          _free(_Memory);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_00415019();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/* Function: FUN_00415019 */

void FUN_00415019(void)

{
  FUN_00414f48(10);
  return;
}



/* Function: __lock */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_00428a40)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00428a40)[_File * 2]);
  return;
}



/* Function: ___sbh_find_block */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2008 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0042b904;
  while( true ) {
    if (DAT_0042b900 * 0x14 + DAT_0042b904 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* Function: ___sbh_free_block */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2008 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_00429e70 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_0042b914 * 0x8000 + DAT_00429e70[3]),0x8000,0x4000);
        DAT_00429e70[2] = DAT_00429e70[2] | 0x80000000U >> ((byte)DAT_0042b914 & 0x1f);
        *(undefined4 *)(DAT_00429e70[4] + 0xc4 + DAT_0042b914 * 4) = 0;
        *(char *)(DAT_00429e70[4] + 0x43) = *(char *)(DAT_00429e70[4] + 0x43) + -1;
        if (*(char *)(DAT_00429e70[4] + 0x43) == '\0') {
          DAT_00429e70[1] = DAT_00429e70[1] & 0xfffffffe;
        }
        if (DAT_00429e70[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_00429e70[3],0,0x8000);
          HeapFree(DAT_00429e74,0,(LPVOID)DAT_00429e70[4]);
          _memmove(DAT_00429e70,DAT_00429e70 + 5,
                   (DAT_0042b900 * 0x14 - (int)DAT_00429e70) + -0x14 + DAT_0042b904);
          DAT_0042b900 = DAT_0042b900 + -1;
          if (DAT_00429e70 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_0042b90c = DAT_0042b904;
        }
      }
      DAT_00429e70 = param_1;
      DAT_0042b914 = uVar14;
    }
  }
  return;
}



/* Function: ___sbh_alloc_new_region */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_0042b900 == DAT_0042b910) {
    pvVar1 = HeapReAlloc(DAT_00429e74,0,DAT_0042b904,(DAT_0042b910 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0042b910 = DAT_0042b910 + 0x10;
    DAT_0042b904 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_0042b900 * 0x14 + (int)DAT_0042b904);
  pvVar1 = HeapAlloc(DAT_00429e74,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_0042b900 = DAT_0042b900 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_00429e74,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* Function: ___sbh_alloc_new_group */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2008 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



/* Function: ___sbh_resize_block */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/* Function: ___sbh_alloc_block */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2008 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_0042b904 + DAT_0042b900 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_0042b90c;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_0042b904;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_0042b90c && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_0042b90c) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_0042b904;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_0042b90c && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_0042b90c) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_0042b90c = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_00415ad6;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_00415ad6:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_00429e70)) && (local_8 == DAT_0042b914)) {
    DAT_00429e70 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}



/* Function: __heap_init */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2008 Release */

int __cdecl __heap_init(void)

{
  int in_stack_00000004;
  
  DAT_00429e74 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_00429e74 == (HANDLE)0x0) {
    return 0;
  }
  DAT_0042b8fc = 1;
  return 1;
}



/* Function: __crt_waiting_on_module_handle */

/* Library Function - Single Match
    __crt_waiting_on_module_handle
   
   Library: Visual Studio 2008 Release */

void __cdecl __crt_waiting_on_module_handle(LPCWSTR param_1)

{
  HMODULE pHVar1;
  DWORD dwMilliseconds;
  
  dwMilliseconds = 1000;
  do {
    Sleep(dwMilliseconds);
    pHVar1 = GetModuleHandleW(param_1);
    dwMilliseconds = dwMilliseconds + 1000;
    if (60000 < dwMilliseconds) {
      return;
    }
  } while (pHVar1 == (HMODULE)0x0);
  return;
}



/* Function: __amsg_exit */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer((int)PTR___exit_00428b64);
  (*pcVar1)(0xff);
  return;
}



/* Function: ___crtCorExitProcess */

/* Library Function - Single Match
    ___crtCorExitProcess
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___crtCorExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}



/* Function: ___crtExitProcess */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2008 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* Function: FUN_00415be5 */

void FUN_00415be5(void)

{
  __lock(8);
  return;
}



/* Function: FUN_00415bee */

void FUN_00415bee(void)

{
  FUN_00414f48(8);
  return;
}



/* Function: __initterm */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* Function: __initterm_e */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: __cinit */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (PTR___fpmath_00422e00 != (undefined *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_00422e00);
    if (BVar1 != 0) {
      (*(code *)PTR___fpmath_00422e00)(param_1);
    }
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_004222b8,(undefined4 *)&DAT_004222d0);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_0041b017);
    __initterm((undefined4 *)&DAT_004222b4);
    if (DAT_0042b8f8 != (code *)0x0) {
      BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0042b8f8);
      if (BVar1 != 0) {
        (*DAT_0042b8f8)(0,2,0);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: doexit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00415dda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2008 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_2c;
  int *local_24;
  int *local_20;
  
  __lock(8);
  if (DAT_00429ea8 != 1) {
    _DAT_00429ea4 = 1;
    DAT_00429ea0 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = (int *)__decode_pointer(DAT_0042b8f0);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)__decode_pointer(DAT_0042b8ec);
        local_2c = piVar1;
        local_24 = piVar2;
        local_20 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = __encoded_null();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = (code *)__decode_pointer(*piVar2);
            iVar3 = __encoded_null();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = (int *)__decode_pointer(DAT_0042b8f0);
            piVar6 = (int *)__decode_pointer(DAT_0042b8ec);
            if ((local_20 != piVar5) || (piVar1 = local_2c, local_24 != piVar6)) {
              piVar2 = piVar6;
              piVar1 = piVar5;
              local_2c = piVar5;
              local_24 = piVar6;
              local_20 = piVar5;
            }
          }
        }
      }
      __initterm((undefined4 *)&DAT_004222e0);
    }
    __initterm((undefined4 *)&DAT_004222e8);
  }
  FUN_00415dd4();
  if (param_3 == 0) {
    DAT_00429ea8 = 1;
    FUN_00414f48(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* Function: FUN_00415dd4 */

void FUN_00415dd4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00414f48(8);
  }
  return;
}



/* Function: _exit */

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2008 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}



/* Function: __exit */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __exit(int param_1)

{
  doexit(param_1,1,0);
  return;
}



/* Function: __cexit */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2008 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/* Function: __init_pointers */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2008 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_00416065(uVar1);
  FUN_0041bc61(uVar1);
  FUN_00413ee3(uVar1);
  FUN_00419e50(uVar1);
  FUN_0041bee2(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_00414c99();
  __initp_eh_hooks();
  PTR___exit_00428b64 = (undefined *)__encode_pointer(0x415dff);
  return;
}



/* Function: __NMSG_WRITE */

/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_00428b68)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_004288c0 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar4 = _strcpy_s(&DAT_00429eb0,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_00429fcd = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_00429ec9,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_00429ec9,0x2fb,"<program name unknown>"), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_00429ec9);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_00429ec9);
        eVar4 = _strncpy_s((char *)(sVar6 + 0x429e8e),(int)&DAT_0042a1c4 - (int)(sVar6 + 0x429e8e),
                           "...",3);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_00429eb0,0x314,"\n\n");
      if (eVar4 == 0) {
        eVar4 = _strcat_s(&DAT_00429eb0,0x314,*(char **)(local_8 * 8 + 0x428b6c));
        if (eVar4 == 0) {
          ___crtMessageBoxA(&DAT_00429eb0,"Microsoft Visual C++ Runtime Library",0x12010);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      puVar1 = (undefined4 *)(uVar2 * 8 + 0x428b6c);
      sVar6 = _strlen((char *)*puVar1);
      WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}



/* Function: __FF_MSGBANNER */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2008 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_004288c0 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}



/* Function: FUN_00416065 */

void __cdecl FUN_00416065(undefined4 param_1)

{
  DAT_0042a1c4 = param_1;
  return;
}



/* Function: __callnewh */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2008 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)__decode_pointer(DAT_0042a1c4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
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
  
  _DAT_0042a2e8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0042a2ec = &stack0x00000004;
  _DAT_0042a228 = 0x10001;
  _DAT_0042a1d0 = 0xc0000409;
  _DAT_0042a1d4 = 1;
  local_32c = DAT_00428870;
  local_328 = DAT_00428874;
  _DAT_0042a1dc = unaff_retaddr;
  _DAT_0042a2b4 = in_GS;
  _DAT_0042a2b8 = in_FS;
  _DAT_0042a2bc = in_ES;
  _DAT_0042a2c0 = in_DS;
  _DAT_0042a2c4 = unaff_EDI;
  _DAT_0042a2c8 = unaff_ESI;
  _DAT_0042a2cc = unaff_EBX;
  _DAT_0042a2d0 = in_EDX;
  _DAT_0042a2d4 = in_ECX;
  _DAT_0042a2d8 = in_EAX;
  _DAT_0042a2dc = unaff_EBP;
  DAT_0042a2e0 = unaff_retaddr;
  _DAT_0042a2e4 = in_CS;
  _DAT_0042a2f0 = in_SS;
  DAT_0042a220 = IsDebuggerPresent();
  FUN_00419f3e();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_004233f4);
  if (DAT_0042a220 == 0) {
    FUN_00419f3e();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* Function: _Type_info_dtor */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_0042a4f8;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_0042a4f4;
    do {
      piVar2 = piVar1;
      if (DAT_0042a4f8 == (int *)0x0) goto LAB_004161e6;
      piVar1 = DAT_0042a4f8;
    } while (*DAT_0042a4f8 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_0042a4f8[1];
    _free(_Memory);
LAB_004161e6:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00416209();
  return;
}



/* Function: FUN_00416209 */

void FUN_00416209(void)

{
  FUN_00414f48(0xe);
  return;
}



/* Function: _strcmp */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_00416264;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_00416230;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_00416264;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < ((byte *)_Str2)[1];
    if (bVar4 != ((byte *)_Str2)[1]) goto LAB_00416264;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = (char *)((byte *)_Str2 + 2);
  }
LAB_00416230:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < ((byte *)_Str2)[1];
    if (bVar4 != ((byte *)_Str2)[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < ((byte *)_Str2)[2];
    if (bVar4 != ((byte *)_Str2)[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < ((byte *)_Str2)[3];
    if (bVar3 != ((byte *)_Str2)[3]) break;
    _Str2 = (char *)((byte *)_Str2 + 4);
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00416264:
  return (uint)bVar5 * -2 + 1;
}



/* Function: __local_unwind4 */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_00416338;
  pvStack_28 = ExceptionList;
  local_20 = DAT_00428870 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_0041c290();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* Function: FUN_0041637e */

void FUN_0041637e(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* Function: _EH4_CallFilterFunc */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* Function: _EH4_TransferToHandler */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x004163c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: _EH4_GlobalUnwind */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4163df,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* Function: _EH4_LocalUnwind */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* Function: __ValidateImageBase */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}



/* Function: __FindPESection */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
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
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_00428870 ^ 0x425f58;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* Function: bad_exception */

/* Library Function - Single Match
    public: __thiscall std::bad_exception::bad_exception(char const *)
   
   Library: Visual Studio 2008 Release */

bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = vftable;
  return this;
}



/* Function: FUN_00416576 */

exception * __thiscall FUN_00416576(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004115f3(this);
  }
  return (exception *)this;
}



/* Function: ___TypeMatch */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_004165f5:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_004165d4:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_004165f5;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_004165d4;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: ___FrameUnwindFilter */

/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1)

{
  _ptiddata p_Var1;
  undefined4 extraout_EAX;
  
  if (*(int *)*param_1 == -0x1fbcb0b3) {
    p_Var1 = __getptd();
    if (0 < p_Var1->_ProcessingThrow) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
  }
  else if (*(int *)*param_1 == -0x1f928c9d) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = 0;
    terminate();
    return extraout_EAX;
  }
  return 0;
}



/* Function: ___FrameUnwindToState */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2008 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_0041670b();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* Function: FUN_0041670b */

void FUN_0041670b(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* Function: ___DestructExceptionObject */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2008 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(param_1[7] + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    FID_conflict__CallMemberFunction1(param_1[6],UNRECOVERED_JUMPTABLE);
  }
  return;
}



/* Function: ___AdjustPointer */

/* Library Function - Single Match
    ___AdjustPointer
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}



/* Function: IsInExceptionSpec */

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2008 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}



/* Function: FUN_00416864 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00416864(void *param_1)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  if (p_Var2->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  FUN_00414dbf();
  terminate();
  p_Var2 = __getptd();
  p_Var2->_curexcspec = param_1;
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: Catch_All@00416895 */

void Catch_All_00416895(void)

{
  code *pcVar1;
  _ptiddata p_Var2;
  int unaff_EBP;
  
  p_Var2 = __getptd();
  p_Var2->_curexcspec = *(void **)(unaff_EBP + 8);
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: CallCatchBlock */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00426018;
  uStack_c = 0x4168b9;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_004169d3();
  return local_20;
}



/* Function: FUN_004169d3 */

void FUN_004169d3(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}



/* Function: ___BuildCatchObjectHelper */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2008 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_00416ace;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_00416ace:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* Function: ___BuildCatchObject */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}



/* Function: CatchIt */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2008 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,(_s_FuncInfo *)param_4,param_6,0x100
                          ,(ulong)pEVar2);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}



/* Function: FindHandlerForForeignException */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,(_CONTEXT *)param_4,param_5,
                    (_s_FuncInfo *)0x0,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,
                    unaff_EBX,unaff_EDI,unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}



/* Function: FindHandler */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  _s_FuncInfo *p_Var1;
  uchar uVar2;
  bool bVar3;
  _ptiddata p_Var4;
  int iVar5;
  _s_TryBlockMapEntry *p_Var6;
  EHRegistrationNode *unaff_EBX;
  _s_FuncInfo *p_Var7;
  int *piVar8;
  int unaff_ESI;
  _s_FuncInfo *p_Var9;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar10;
  bad_exception in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var9 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 != -0x1f928c9d) goto LAB_004170bf;
  p_Var7 = (_s_FuncInfo *)0x19930520;
  if (*(int *)(param_1 + 0x10) != 3) goto LAB_00416f2c;
  iVar5 = *(int *)(param_1 + 0x14);
  if (((iVar5 != 0x19930520) && (iVar5 != 0x19930521)) && (iVar5 != 0x19930522)) goto LAB_00416f2c;
  if (*(int *)(param_1 + 0x1c) != 0) goto LAB_00416f2c;
  p_Var4 = __getptd();
  if (p_Var4->_curexception != (void *)0x0) {
    p_Var4 = __getptd();
    param_1 = (EHExceptionRecord *)p_Var4->_curexception;
    p_Var4 = __getptd();
    param_3 = (_CONTEXT *)p_Var4->_curcontext;
    iVar5 = _ValidateRead(param_1,1);
    if (iVar5 == 0) {
      _inconsistency();
    }
    if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
        ((iVar5 = *(int *)(param_1 + 0x14), iVar5 == 0x19930520 ||
         ((iVar5 == 0x19930521 || (iVar5 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0)) {
      _inconsistency();
    }
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec == (void *)0x0) goto LAB_00416f2c;
    p_Var4 = __getptd();
    piVar8 = (int *)p_Var4->_curexcspec;
    p_Var4 = __getptd();
    iVar5 = 0;
    p_Var4->_curexcspec = (void *)0x0;
    uVar2 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
    if (uVar2 != '\0') goto LAB_00416f2c;
    p_Var7 = (_s_FuncInfo *)0x0;
    if (0 < *piVar8) {
      do {
        bVar3 = type_info::operator==
                          (*(type_info **)((int)&p_Var7->maxState + piVar8[1]),
                           (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
        if (bVar3) goto LAB_00416efd;
        iVar5 = iVar5 + 1;
        p_Var7 = (_s_FuncInfo *)&p_Var7->pTryBlockMap;
      } while (iVar5 < *piVar8);
    }
    do {
      terminate();
LAB_00416efd:
      ___DestructExceptionObject((int *)param_1);
      std::bad_exception::bad_exception((bad_exception *)&stack0xffffffd0,"bad exception");
      __CxxThrowException_8(&stack0xffffffd0,&DAT_0042607c);
LAB_00416f2c:
      p_Var9 = (_s_FuncInfo *)param_1;
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
         ((p_Var1 = *(_s_FuncInfo **)(param_1 + 0x14), p_Var1 == p_Var7 ||
          ((p_Var1 == (_s_FuncInfo *)0x19930521 || (p_Var1 == (_s_FuncInfo *)0x19930522)))))) {
        if (param_5->nTryBlocks != 0) {
          p_Var6 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
          for (; local_14 < local_20; local_14 = local_14 + 1) {
            if ((p_Var6->tryLow <= local_c) && (local_c <= p_Var6->tryHigh)) {
              local_10 = p_Var6->pHandlerArray;
              for (local_1c = p_Var6->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
                piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
                for (local_18 = *piVar8; 0 < local_18; local_18 = local_18 + -1) {
                  piVar8 = piVar8 + 1;
                  p_Var9 = (_s_FuncInfo *)*piVar8;
                  iVar5 = ___TypeMatch((byte *)local_10,(byte *)p_Var9,*(uint **)(param_1 + 0x1c));
                  if (iVar5 != 0) {
                    local_5 = '\x01';
                    CatchIt(param_1,(EHRegistrationNode *)param_3,(_CONTEXT *)param_4,param_5,p_Var9
                            ,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                            unaff_ESI,unaff_EBX,(uchar)in_stack_ffffffd0);
                    goto LAB_00417015;
                  }
                }
                local_10 = local_10 + 1;
              }
            }
LAB_00417015:
            p_Var6 = p_Var6 + 1;
          }
        }
        if (param_6 != '\0') {
          ___DestructExceptionObject((int *)param_1);
        }
        if ((((local_5 != '\0') || ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521))
            || (param_5->pESTypeList == (ESTypeList *)0x0)) ||
           (uVar2 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI), uVar2 != '\0'))
        goto LAB_004170eb;
        __getptd();
        __getptd();
        p_Var4 = __getptd();
        p_Var4->_curexception = param_1;
        p_Var4 = __getptd();
        p_Var4->_curcontext = param_3;
        pEVar10 = param_8;
        if (param_8 == (EHRegistrationNode *)0x0) {
          pEVar10 = param_2;
        }
        _UnwindNestedFrames(pEVar10,param_1);
        ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
        FUN_00416864(param_5->pESTypeList);
        p_Var9 = param_5;
      }
LAB_004170bf:
      if (param_5->nTryBlocks == 0) goto LAB_004170eb;
      p_Var7 = param_5;
    } while (param_6 != '\0');
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var9,param_2,param_3,param_4,param_5,local_c,param_7,param_8);
LAB_004170eb:
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec != (void *)0x0) {
      _inconsistency();
    }
  }
  return;
}



/* Function: FUN_00417103 */

exception * __thiscall FUN_00417103(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_exception::vftable;
  return (exception *)this;
}



/* Function: ___InternalCxxFrameHandler */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}



/* Function: __encode_pointer */

/* Library Function - Single Match
    __encode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __encode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_00428c58);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_00428c54 != -1)) {
    iVar3 = DAT_00428c54;
    pcVar2 = (code *)TlsGetValue(DAT_00428c58);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_00417266;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_00417266:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* Function: __encoded_null */

/* Library Function - Single Match
    __encoded_null
   
   Library: Visual Studio 2008 Release */

void __encoded_null(void)

{
  __encode_pointer(0);
  return;
}



/* Function: __decode_pointer */

/* Library Function - Single Match
    __decode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __decode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_00428c58);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_00428c54 != -1)) {
    iVar3 = DAT_00428c54;
    pcVar2 = (code *)TlsGetValue(DAT_00428c58);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_004172e1;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_004172e1:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* Function: ___set_flsgetvalue */

/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2008 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_00428c58);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)__decode_pointer(DAT_0042a500);
    TlsSetValue(DAT_00428c58,lpTlsValue);
  }
  return lpTlsValue;
}



/* Function: __mtterm */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_00428c54 != -1) {
    iVar2 = DAT_00428c54;
    pcVar1 = (code *)__decode_pointer(DAT_0042a508);
    (*pcVar1)(iVar2);
    DAT_00428c54 = -1;
  }
  if (DAT_00428c58 != 0xffffffff) {
    TlsFree(DAT_00428c58);
    DAT_00428c58 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* Function: __initptd */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  _Ptd->_pxcptacttab = &DAT_00423588;
  _Ptd->_holdrand = 1;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1d) = pFVar1;
    pFVar1 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1f) = pFVar1;
  }
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_00428c60;
  __lock(0xd);
  InterlockedIncrement(&_Ptd->ptmbcinfo->refcount);
  FUN_00417442();
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_00429268;
  }
  ___addlocaleref(&_Ptd->ptlocinfo->refcount);
  FUN_0041744b();
  return;
}



/* Function: FUN_00417442 */

void FUN_00417442(void)

{
  FUN_00414f48(0xd);
  return;
}



/* Function: FUN_0041744b */

void FUN_0041744b(void)

{
  FUN_00414f48(0xc);
  return;
}



/* Function: __getptd_noexit */

/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_00428c54;
  pcVar1 = (code *)___set_flsgetvalue();
  _Ptd = (_ptiddata)(*pcVar1)(uVar4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_00428c54;
      p_Var5 = _Ptd;
      pcVar1 = (code *)__decode_pointer(DAT_0042a504);
      iVar2 = (*pcVar1)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}



/* Function: __getptd */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* Function: FUN_00417601 */

void FUN_00417601(void)

{
  FUN_00414f48(0xd);
  return;
}



/* Function: FUN_0041760d */

void FUN_0041760d(void)

{
  FUN_00414f48(0xc);
  return;
}



/* Function: __mtinit */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  undefined1 *puVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  if (hModule != (HMODULE)0x0) {
    DAT_0042a4fc = GetProcAddress(hModule,"FlsAlloc");
    DAT_0042a500 = GetProcAddress(hModule,"FlsGetValue");
    DAT_0042a504 = GetProcAddress(hModule,"FlsSetValue");
    DAT_0042a508 = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_0042a4fc == (FARPROC)0x0) || (DAT_0042a500 == (FARPROC)0x0)) ||
        (DAT_0042a504 == (FARPROC)0x0)) || (DAT_0042a508 == (FARPROC)0x0)) {
      DAT_0042a500 = TlsGetValue_exref;
      DAT_0042a4fc = (FARPROC)&LAB_004172f3;
      DAT_0042a504 = TlsSetValue_exref;
      DAT_0042a508 = TlsFree_exref;
    }
    DAT_00428c58 = TlsAlloc();
    if (DAT_00428c58 == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_00428c58,DAT_0042a500);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_0042a4fc = (FARPROC)__encode_pointer((int)DAT_0042a4fc);
    DAT_0042a500 = (FARPROC)__encode_pointer((int)DAT_0042a500);
    DAT_0042a504 = (FARPROC)__encode_pointer((int)DAT_0042a504);
    DAT_0042a508 = (FARPROC)__encode_pointer((int)DAT_0042a508);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      puVar5 = &LAB_004174e7;
      pcVar3 = (code *)__decode_pointer((int)DAT_0042a4fc);
      DAT_00428c54 = (*pcVar3)(puVar5);
      if ((DAT_00428c54 != -1) && (_Ptd = (_ptiddata)__calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_00428c54;
        p_Var6 = _Ptd;
        pcVar3 = (code *)__decode_pointer((int)DAT_0042a504);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}



/* Function: __CallSettingFrame@12 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/* Function: __mbsnbcpy_s_l */

/* Library Function - Single Match
    __mbsnbcpy_s_l
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__mbsnbcpy_s_l(uchar *_Dst,size_t _DstSizeInBytes,uchar *_Src,size_t _MaxCount,_locale_t _Locale)

{
  byte *pbVar1;
  uchar uVar2;
  int *piVar3;
  errno_t eVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  size_t sVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte *local_8;
  
  if (_MaxCount == 0) {
    if (_Dst == (uchar *)0x0) {
      if (_DstSizeInBytes == 0) {
        return 0;
      }
      goto LAB_00417829;
    }
  }
  else if (_Dst == (uchar *)0x0) goto LAB_00417829;
  if (_DstSizeInBytes == 0) {
LAB_00417829:
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_MaxCount == 0) {
    *_Dst = '\0';
    return 0;
  }
  if (_Src == (uchar *)0x0) {
    *_Dst = '\0';
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if ((local_18.mbcinfo)->ismbcodepage == 0) {
    eVar4 = _strncpy_s((char *)_Dst,_DstSizeInBytes,(char *)_Src,_MaxCount);
    goto LAB_004179ea;
  }
  puVar5 = _Dst;
  sVar8 = _DstSizeInBytes;
  if (_MaxCount == 0xffffffff) {
    do {
      uVar2 = *_Src;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      _Src = _Src + 1;
      if (uVar2 == '\0') break;
      sVar8 = sVar8 - 1;
    } while (sVar8 != 0);
  }
  else {
    do {
      puVar6 = puVar5;
      uVar2 = *_Src;
      *puVar6 = uVar2;
      puVar5 = puVar6 + 1;
      _Src = _Src + 1;
      if ((uVar2 == '\0') || (sVar8 = sVar8 - 1, sVar8 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (_MaxCount == 0) {
      *puVar5 = '\0';
      puVar5 = puVar6 + 2;
    }
  }
  if (sVar8 != 0) {
    if ((int)puVar5 - (int)_Dst < 2) {
LAB_004179f8:
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
    pbVar9 = puVar5 + -2;
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) == 0) goto LAB_004179f8;
LAB_004179dc:
    *pbVar9 = 0;
    piVar3 = __errno();
    eVar4 = 0x2a;
    *piVar3 = 0x2a;
LAB_004179ea:
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return eVar4;
    }
    return eVar4;
  }
  if ((*_Src == '\0') || (_MaxCount == 1)) {
    pbVar9 = puVar5 + -1;
    local_8 = pbVar9;
    while ((_Dst <= local_8 && (iVar7 = __ismbblead_l((uint)*local_8,&local_18), iVar7 != 0))) {
      local_8 = local_8 + -1;
    }
    if (((int)pbVar9 - (int)local_8 & 1U) != 0) goto LAB_004179dc;
  }
  if (_MaxCount != 0xffffffff) {
    *_Dst = '\0';
    piVar3 = __errno();
    *piVar3 = 0x22;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      return 0x22;
    }
    return 0x22;
  }
  if (1 < _DstSizeInBytes) {
    pbVar9 = _Dst + (_DstSizeInBytes - 2);
    pbVar1 = pbVar9;
    while ((_Dst <= pbVar1 && (iVar7 = __ismbblead_l((uint)*pbVar1,&local_18), iVar7 != 0))) {
      pbVar1 = pbVar1 + -1;
    }
    if (((int)pbVar9 - (int)pbVar1 & 1U) != 0) {
      *pbVar9 = 0;
      goto LAB_00417965;
    }
  }
  _Dst[_DstSizeInBytes - 1] = '\0';
LAB_00417965:
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return 0x50;
}



/* Function: CPtoLCID */

/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl CPtoLCID(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}



/* Function: setSBCS */

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  _memset((void *)(in_EAX + 0x1c),0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&DAT_00428c60 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_00428c60 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* Function: setSBUpLow */

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [256];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_00417c17:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_00417c17;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_00417bb5;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_00417bb5:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: ___updatetmbcinfo */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00429184) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_00429088) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_00428c60)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_00429088;
      lpAddend = (pthreadmbcinfo)PTR_DAT_00429088;
      InterlockedIncrement((LONG *)PTR_DAT_00429088);
    }
    FUN_00417ccc();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* Function: FUN_00417ccc */

void FUN_00417ccc(void)

{
  FUN_00414f48(0xd);
  return;
}



/* Function: getSystemCP */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_0042a50c = 0;
  if (unaff_ESI == -2) {
    DAT_0042a50c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_0042a50c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_0042a50c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_0042a50c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* Function: __setmbcp_nolock */

/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2008 Release */

void __cdecl __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int extraout_ECX;
  undefined2 *puVar9;
  int iVar10;
  undefined4 extraout_EDX;
  BYTE *pBVar11;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_00417d8f:
    if (*(uint *)((int)&DAT_00429090 + uVar5) != uVar4) goto code_r0x00417d9b;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_004290a0 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x42908c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar10 = CPtoLCID((int)unaff_EDI);
    *(int *)(param_2 + 0xc) = iVar10;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar9 = (undefined2 *)(&DAT_00429094 + extraout_ECX);
    iVar10 = 6;
    do {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_00417ec0;
  }
LAB_00417d7c:
  setSBCS(unaff_EDI);
LAB_00417f27:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00417d9b:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x00417da8;
  goto LAB_00417d8f;
code_r0x00417da8:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_00417f27;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar11 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar11[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = CPtoLCID((int)unaff_EDI);
      *(int *)(param_2 + 0xc) = iVar10;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_00417ec0:
    setSBUpLow(unaff_EDI);
    goto LAB_00417f27;
  }
  if (DAT_0042a50c == 0) goto LAB_00417f27;
  goto LAB_00417d7c;
}



/* Function: __setmbcp */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = (pthreadmbcinfo)__malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00428c60)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement((LONG *)ptVar3);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00429184 & 1) == 0)) {
          __lock(0xd);
          _DAT_0042a51c = ptVar3->mbcodepage;
          _DAT_0042a520 = ptVar3->ismbcodepage;
          _DAT_0042a524 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_0042a510)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_00428e80)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_00428f88)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_00429088);
          if ((LVar4 == 0) && (PTR_DAT_00429088 != &DAT_00428c60)) {
            _free(PTR_DAT_00429088);
          }
          PTR_DAT_00429088 = (undefined *)ptVar3;
          InterlockedIncrement((LONG *)ptVar3);
          FUN_00418097();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_00428c60) {
          _free(ptVar3);
        }
        piVar5 = __errno();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/* Function: FUN_00418097 */

void FUN_00418097(void)

{
  FUN_00414f48(0xd);
  return;
}



/* Function: ___initmbctable */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2008 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_0042b8f4 == 0) {
    __setmbcp(-3);
    DAT_0042b8f4 = 1;
  }
  return 0;
}



/* Function: ___freetlocinfo */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2008 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_00429660)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_004295a0) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_00429188) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  _free(_Memory);
  return;
}



/* Function: ___addlocaleref */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2008 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar2 = param_1 + 0x14;
  param_1 = (LONG *)0x6;
  do {
    if (((undefined *)pLVar2[-2] != &DAT_00429188) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar2);
    }
    if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar2[1]);
    }
    pLVar2 = pLVar2 + 4;
    param_1 = (LONG *)((int)param_1 + -1);
  } while (param_1 != (LONG *)0x0);
  InterlockedIncrement((LONG *)(pLVar1[0x35] + 0xb4));
  return;
}



/* Function: ___removelocaleref */

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2008 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar2 = param_1 + 0x14;
    param_1 = (LONG *)0x6;
    do {
      if (((undefined *)pLVar2[-2] != &DAT_00429188) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar2);
      }
      if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar2[1]);
      }
      pLVar2 = pLVar2 + 4;
      param_1 = (LONG *)((int)param_1 + -1);
    } while (param_1 != (LONG *)0x0);
    InterlockedDecrement((LONG *)(pLVar1[0x35] + 0xb4));
  }
  return pLVar1;
}



/* Function: __updatetlocinfoEx_nolock */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2008 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_00429190)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}



/* Function: ___updatetlocinfo */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2008 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00429184) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_00418407();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}



/* Function: FUN_00418407 */

void FUN_00418407(void)

{
  FUN_00414f48(0xc);
  return;
}



/* Function: FUN_00418420 */

uint * __cdecl FUN_00418420(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    puVar5 = FUN_0041c836(param_1);
    return puVar5;
  }
  do {
    cVar3 = (char)*param_1;
    do {
      while (puVar5 = param_1, param_1 = (uint *)((int)puVar5 + 1), cVar3 != *param_2) {
        if (cVar3 == '\0') {
          return (uint *)0x0;
        }
        cVar3 = *(char *)param_1;
      }
      cVar3 = *(char *)param_1;
      pcVar6 = param_2;
      puVar4 = puVar5;
    } while (cVar3 != param_2[1]);
    do {
      if (pcVar6[2] == '\0') {
        return puVar5;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar6[2]) break;
      pcVar1 = pcVar6 + 3;
      if (*pcVar1 == '\0') {
        return puVar5;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar6 = pcVar6 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* Function: fastzero_I */

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



/* Function: __VEC_memzero */

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}



/* Function: FUN_0041858c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_0041858c(void)

{
  return 1;
}



/* Function: __get_sse2_info */

/* WARNING: Removing unreachable block (ram,0x00418619) */
/* WARNING: Removing unreachable block (ram,0x00418606) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_0041858c(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Function: FUN_0041864b */

undefined ** FUN_0041864b(void)

{
  return &PTR_DAT_00429280;
}



/* Function: __lock_file */

/* Library Function - Single Match
    __lock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_00429280) || ((FILE *)&DAT_004294e0 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)(_File + -0x21494) >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}



/* Function: __lock_file2 */

/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* Function: __unlock_file */

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x42927f < _File) && (_File < (FILE *)0x4294e1)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_00414f48(((int)(_File + -0x21494) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* Function: __unlock_file2 */

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_00414f48(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* Function: __stbuf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_0041864b();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_0041864b();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_0042a54c = _DAT_0042a54c + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_0042a550 + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_00418889;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_00418889:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}



/* Function: __ftbuf */

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



/* Function: __flsbuf */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_004188f6:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_004188f6;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_0041864b(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_0041864b(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_00429500;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_0042a7c0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_00418a1e;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_00418a1e:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/* Function: __fwrite_nolock */

/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint _Size_00;
  uint uVar5;
  uint uVar6;
  char *_Buf;
  uint local_c;
  char *local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if ((_File != (FILE *)0x0) &&
       ((_DstBuf != (void *)0x0 && (_Count <= (uint)(0xffffffff / (ulonglong)_Size))))) {
      uVar6 = _Size * _Count;
      uVar5 = uVar6;
      if ((_File->_flag & 0x10cU) == 0) {
        local_c = 0x1000;
      }
      else {
        local_c = _File->_bufsiz;
      }
      do {
        while( true ) {
          if (uVar5 == 0) {
            return _Count;
          }
          uVar4 = _File->_flag & 0x108;
          if (uVar4 == 0) break;
          uVar3 = _File->_cnt;
          if (uVar3 == 0) break;
          if ((int)uVar3 < 0) {
            _File->_flag = _File->_flag | 0x20;
            goto LAB_00418b81;
          }
          _Size_00 = uVar5;
          if (uVar3 <= uVar5) {
            _Size_00 = uVar3;
          }
          _memcpy(_File->_ptr,_DstBuf,_Size_00);
          _File->_cnt = _File->_cnt - _Size_00;
          _File->_ptr = _File->_ptr + _Size_00;
          uVar5 = uVar5 - _Size_00;
LAB_00418b3d:
          local_8 = (char *)((int)_DstBuf + _Size_00);
          _DstBuf = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_00418b81;
          uVar4 = uVar5;
          if (local_c != 0) {
            uVar4 = uVar5 - uVar5 % local_c;
          }
          _Buf = (char *)_DstBuf;
          uVar3 = uVar4;
          iVar2 = __fileno(_File);
          uVar3 = __write(iVar2,_Buf,uVar3);
          if (uVar3 != 0xffffffff) {
            _Size_00 = uVar4;
            if (uVar3 <= uVar4) {
              _Size_00 = uVar3;
            }
            uVar5 = uVar5 - _Size_00;
            if (uVar4 <= uVar3) goto LAB_00418b3d;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_00418b81:
          return (uVar6 - uVar5) / _Size;
        }
                    /* WARNING: Load size is inaccurate */
        iVar2 = __flsbuf((int)*_DstBuf,_File);
        if (iVar2 == -1) goto LAB_00418b81;
        _DstBuf = (void *)((int)_DstBuf + 1);
        local_c = _File->_bufsiz;
        uVar5 = uVar5 - 1;
        if ((int)local_c < 1) {
          local_c = 1;
        }
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}



/* Function: __ioinit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x418ba2;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = (undefined4 *)__calloc_crt(0x20,0x40);
  if (puVar2 == (undefined4 *)0x0) {
LAB_00418de1:
    iVar7 = -1;
  }
  else {
    DAT_0042a7b4 = 0x20;
    DAT_0042a7c0 = puVar2;
    for (; puVar2 < DAT_0042a7c0 + 0x200; puVar2 = puVar2 + 0x10) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xd) = 0;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      local_24 = 1;
      while ((UVar10 = UVar9, (int)DAT_0042a7b4 < (int)UVar9 &&
             (puVar2 = (undefined4 *)__calloc_crt(0x20,0x40), UVar10 = DAT_0042a7b4,
             puVar2 != (undefined4 *)0x0))) {
        (&DAT_0042a7c0)[local_24] = puVar2;
        DAT_0042a7b4 = DAT_0042a7b4 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x200; puVar2 = puVar2 + 0x10) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar2[0xe] = 0;
          *(undefined1 *)(puVar2 + 0xd) = 0;
          puVar1 = (&DAT_0042a7c0)[local_24];
        }
        local_24 = local_24 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar5 = *(HANDLE *)local_20;
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar5), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x40 + (int)(&DAT_0042a7c0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(puVar2 + 3),4000);
            if (BVar4 == 0) goto LAB_00418de1;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_0042a7c0 + iVar7 * 0x10;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar5 = GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(piVar8 + 3),4000);
          if (BVar4 == 0) goto LAB_00418de1;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_0042a7b4);
    iVar7 = 0;
  }
  return iVar7;
}



/* Function: __fileno */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2008 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    iVar2 = _File->_file;
  }
  return iVar2;
}



/* Function: write_char */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/* Function: write_multi_char */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}



/* Function: write_string */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2008 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* Function: __output_l */

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  int iVar8;
  undefined *puVar9;
  int extraout_ECX;
  uint uVar10;
  byte *pbVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  FILE *local_250;
  int local_24c;
  wchar_t *local_248;
  int local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  int local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_250 = _File;
  local_228 = (wchar_t *)_ArgList;
  local_24c = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_244 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_00429500;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0042a7c0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_00429500;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0042a7c0)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_00418fc6;
      }
    }
    else {
LAB_00418fc6:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_22c = 0;
        local_224 = 0;
        local_248 = (wchar_t *)0x0;
        iVar8 = 0;
        while ((local_215 != 0 &&
               (pbVar11 = (byte *)_Format + 1, local_240 = pbVar11, -1 < local_22c))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)(char)(&DAT_00423508)[(char)local_215] & 0xf;
          }
          else {
            uVar4 = 0;
          }
          local_270 = (int)(char)(&DAT_00423528)[uVar4 * 8 + iVar8] >> 4;
          switch(local_270) {
          case 0:
switchD_0041903f_caseD_0:
            local_23c = 0;
            iVar8 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar8 != 0) {
              write_char();
              local_240 = (byte *)_Format + 2;
              if (*pbVar11 == 0) goto LAB_00418f2d;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_244 = 0;
            local_238 = 0;
            local_234 = 0;
            local_214 = 0;
            local_23c = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_238 = *(int *)_ArgList;
              if (local_238 < 0) {
                local_214 = local_214 | 4;
                local_238 = -local_238;
              }
            }
            else {
              local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = (wchar_t *)((int)_ArgList + 4);
              local_21c = *(int *)_ArgList;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar11;
              if ((bVar1 == 0x36) && (((byte *)_Format)[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_240 = (byte *)_Format + 3;
              }
              else if ((bVar1 == 0x33) && (((byte *)_Format)[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_240 = (byte *)_Format + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_0041903f_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar11 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_240 = (byte *)_Format + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_0041952a:
                local_214 = local_214 | 0x40;
LAB_00419531:
                local_224 = 10;
LAB_0041953b:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x20) == 0) {
                    uVar4 = *(uint *)_ArgList;
                    if ((local_214 & 0x40) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (int)uVar4 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar4 = (uint)(ushort)*(wchar_t *)_ArgList;
                    }
                    else {
                      uVar4 = (uint)*(wchar_t *)_ArgList;
                    }
                    uVar10 = (int)uVar4 >> 0x1f;
                  }
                }
                else {
                  uVar4 = *(uint *)_ArgList;
                  uVar10 = *(uint *)((int)_ArgList + 4);
                  local_228 = (wchar_t *)((int)_ArgList + 8);
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
                  bVar14 = uVar4 != 0;
                  uVar4 = -uVar4;
                  uVar10 = -(uVar10 + bVar14);
                  local_214 = local_214 | 0x100;
                }
                uVar15 = CONCAT44(uVar10,uVar4);
                if ((local_214 & 0x9000) == 0) {
                  uVar10 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar4 == 0 && uVar10 == 0) {
                  local_234 = 0;
                }
                pwVar13 = &local_11;
                while( true ) {
                  uVar4 = uVar10;
                  iVar8 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar15 == 0 && uVar4 == 0)) break;
                  local_21c = iVar8;
                  uVar15 = __aulldvrm((uint)uVar15,uVar4,local_224,(int)local_224 >> 0x1f);
                  iVar8 = extraout_ECX + 0x30;
                  if (0x39 < iVar8) {
                    iVar8 = iVar8 + local_24c;
                  }
                  *(char *)pwVar13 = (char)iVar8;
                  pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                  uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
                  local_264 = uVar4;
                }
                local_224 = (int)&local_11 + -(int)pwVar13;
                local_220 = (wchar_t *)((int)pwVar13 + 1);
                local_21c = iVar8;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar13 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar13 + 1;
                  local_220 = pwVar13;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00419356;
                }
                if (local_215 == 0x41) {
LAB_004192d5:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_004192e8:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar13 = local_210;
                  sVar12 = local_264;
                  pwVar17 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar12 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_248 = (wchar_t *)__malloc_crt(sVar12);
                      pwVar13 = local_248;
                      pwVar17 = local_248;
                      if (local_248 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar13 = local_210;
                        sVar12 = local_264;
                        pwVar17 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar17;
                  local_264 = sVar12;
                  local_27c = *(undefined4 *)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 8);
                  local_278 = *(undefined4 *)((int)_ArgList + 4);
                  plVar19 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar16 = &local_27c;
                  pwVar17 = pwVar13;
                  sVar12 = local_264;
                  iVar8 = local_21c;
                  uVar18 = local_274;
                  pcVar6 = (code *)__decode_pointer((int)PTR_LAB_00429578);
                  (*pcVar6)(puVar16,pwVar17,sVar12,iVar5,iVar8,uVar18,plVar19);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar13;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_00429584);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar13;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_00429580);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((char)*pwVar13 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar13 + 1);
                    pwVar13 = local_220;
                  }
LAB_00419488:
                  local_224 = _strlen((char *)pwVar13);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_004193c9:
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                    local_224 = 1;
                  }
                  else {
                    eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList
                                     );
                    if (eVar7 != 0) {
                      local_244 = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_004192d5;
              }
              else {
                if (local_215 == 0x58) goto LAB_0041968f;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  pwVar13 = (wchar_t *)PTR_s__null__00429540;
                  local_220 = (wchar_t *)PTR_s__null__00429540;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar17 = *(wchar_t **)(psVar2 + 2), pwVar17 == (wchar_t *)0x0))
                  goto LAB_00419488;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar17;
                  if ((local_214 & 0x800) == 0) {
                    local_23c = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_23c = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_004192e8;
                  if (local_215 == 99) goto LAB_004193c9;
                }
              }
LAB_00419867:
              if (local_244 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_004198b0;
                      local_230 = 0x20;
                    }
                    else {
                      local_230 = 0x2b;
                    }
                  }
                  else {
                    local_230 = 0x2d;
                  }
                  local_234 = 1;
                }
LAB_004198b0:
                iVar8 = (local_238 - local_224) - local_234;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar8);
                }
                write_string(local_234);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar8);
                }
                if ((local_23c == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar13 = local_220;
                  do {
                    _WCh = *pwVar13;
                    local_264 = local_264 - 1;
                    pwVar13 = pwVar13 + 1;
                    eVar7 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar7 != 0) || (local_26c[0] == 0)) {
                      local_22c = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_22c) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar8);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_00419356:
                  iVar8 = local_21c;
                  if (local_21c == -1) {
                    iVar8 = 0x7fffffff;
                  }
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  local_220 = *(wchar_t **)_ArgList;
                  if ((local_214 & 0x810) == 0) {
                    pwVar13 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar13 = (wchar_t *)PTR_s__null__00429540;
                      local_220 = (wchar_t *)PTR_s__null__00429540;
                    }
                    for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar13 != '\0'));
                        pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                    }
                    local_224 = (int)pwVar13 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__00429544;
                    }
                    local_23c = 1;
                    for (pwVar13 = local_220;
                        (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar13 != L'\0'));
                        pwVar13 = pwVar13 + 1) {
                    }
                    local_224 = (int)pwVar13 - (int)local_220 >> 1;
                  }
                  goto LAB_00419867;
                }
                if (local_215 == 0x75) goto LAB_00419531;
                if (local_215 != 0x78) goto LAB_00419867;
                local_24c = 0x27;
LAB_004196bb:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_24c + 'Q';
                  local_230 = 0x30;
                  local_234 = 2;
                }
                goto LAB_0041953b;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_0041968f:
                local_24c = 7;
                goto LAB_004196bb;
              }
              if ((char)local_215 < 'e') goto LAB_00419867;
              if ((char)local_215 < 'h') goto LAB_004192e8;
              if (local_215 == 0x69) goto LAB_0041952a;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_00419867;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_0041953b;
              }
              piVar3 = *(int **)_ArgList;
              local_228 = (wchar_t *)((int)_ArgList + 4);
              iVar8 = __get_printf_count_output();
              if (iVar8 == 0) goto LAB_00418f2d;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_22c;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_22c;
              }
              local_244 = 1;
            }
            if (local_248 != (wchar_t *)0x0) {
              _free(local_248);
              local_248 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_240;
          iVar8 = local_270;
          _Format = (char *)local_240;
          _ArgList = (va_list)local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_00419a2a;
      }
    }
  }
LAB_00418f2d:
  piVar3 = __errno();
  *piVar3 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_00419a2a:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}



/* Function: _realloc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_0042b8fc == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_00419c33;
      __lock(4);
      local_24 = (uint *)___sbh_find_block((int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_0042b908) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)___sbh_find_block((int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = (int *)_Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = (int *)HeapAlloc(DAT_00429e74,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_00419b9e();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = (int *)HeapReAlloc(DAT_00429e74,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_0042a1c8 == 0) {
        piVar4 = __errno();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_00419c60;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != (uint *)0x0) goto LAB_00419c3f;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_00419c33;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_00429e74,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_0042a1c8 == 0) {
        piVar4 = __errno();
LAB_00419c60:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_00419c33:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_00419c3f:
  *piVar4 = 0xc;
  return (void *)0x0;
}



/* Function: FUN_00419b9e */

void FUN_00419b9e(void)

{
  FUN_00414f48(4);
  return;
}



/* Function: __msize */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_0042b8fc == 3) {
      __lock(4);
      uVar3 = ___sbh_find_block((int)_Memory);
      if (uVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_00419d0f();
      if (uVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_00429e74,0,_Memory);
  }
  return sVar2;
}



/* Function: FUN_00419d0f */

void FUN_00419d0f(void)

{
  FUN_00414f48(4);
  return;
}



/* Function: _abort */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  _PHNDLR p_Var2;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_00429548 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_00429548 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: __set_abort_behavior */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2008 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_00429548;
  DAT_00429548 = ~_Mask & DAT_00429548 | _Flags & _Mask;
  return uVar1;
}



/* Function: FUN_00419e50 */

void __cdecl FUN_00419e50(undefined4 param_1)

{
  DAT_0042a560 = param_1;
  return;
}



/* Function: __malloc_crt */

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_0042a564 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0042a564 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* Function: __calloc_crt */

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_0042a564 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0042a564 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* Function: __realloc_crt */

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_0042a564 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0042a564 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* Function: FUN_00419f3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419f3e(void)

{
  _DAT_0042a7b0 = 0;
  return;
}



/* Function: FUN_00419f46 */

void __cdecl FUN_00419f46(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}



/* Function: __VEC_memcpy */

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_00419f46(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/* Function: _memmove */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0041a293_caseD_2;
        case 3:
          goto switchD_0041a293_caseD_3;
        }
        goto switchD_0041a293_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0041a293_caseD_0;
      case 1:
        goto switchD_0041a293_caseD_1;
      case 2:
        goto switchD_0041a293_caseD_2;
      case 3:
        goto switchD_0041a293_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a293_caseD_2;
            case 3:
              goto switchD_0041a293_caseD_3;
            }
            goto switchD_0041a293_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a293_caseD_2;
            case 3:
              goto switchD_0041a293_caseD_3;
            }
            goto switchD_0041a293_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0041a293_caseD_2;
            case 3:
              goto switchD_0041a293_caseD_3;
            }
            goto switchD_0041a293_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_0041a293_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_0041a293_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_0041a293_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_0041a293_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_0042b8e4 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy((undefined4 *)_Dst,(undefined4 *)_Src,_Size);
    return puVar1;
  }
  puVar1 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0041a10c_caseD_2;
      case 3:
        goto switchD_0041a10c_caseD_3;
      }
      goto switchD_0041a10c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0041a10c_caseD_0;
    case 1:
      goto switchD_0041a10c_caseD_1;
    case 2:
      goto switchD_0041a10c_caseD_2;
    case 3:
      goto switchD_0041a10c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a10c_caseD_2;
          case 3:
            goto switchD_0041a10c_caseD_3;
          }
          goto switchD_0041a10c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a10c_caseD_2;
          case 3:
            goto switchD_0041a10c_caseD_3;
          }
          goto switchD_0041a10c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined1 *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0041a10c_caseD_2;
          case 3:
            goto switchD_0041a10c_caseD_3;
          }
          goto switchD_0041a10c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_0041a10c_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_0041a10c_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0041a10c_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_0041a10c_caseD_0:
  return _Dst;
}



/* Function: __isleadbyte_l */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/* Function: _isleadbyte */

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2008 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Function: __freea */

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2008 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/* Function: __crtLCMapStringA_stat */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  LPCWSTR pWVar6;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  if (DAT_0042a568 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_0042a568 = 2;
      }
    }
    else {
      DAT_0042a568 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_0041a4f1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_0041a4f1:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_0042a568 == 2) || (DAT_0042a568 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_0041a813;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_0041a813;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_0041a7f0;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = (char *)_malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_0041a7f0:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_0041a813;
  }
  if (DAT_0042a568 != 1) goto LAB_0041a813;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_0041a813;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      pWVar6 = (LPCWSTR)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_0041a599:
        local_10 = pWVar6 + 4;
      }
    }
    else {
      pWVar6 = (LPCWSTR)_malloc(uVar1);
      local_10 = pWVar6;
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_0041a599;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_0041a813;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        pWVar6 = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_0041a6a9;
          pWVar6 = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          pWVar6 = (LPCWSTR)_malloc(uVar1);
          if (pWVar6 != (LPCWSTR)0x0) {
            pWVar6[0] = L'\xdddd';
            pWVar6[1] = L'\0';
            pWVar6 = pWVar6 + 4;
          }
        }
      }
      if (pWVar6 != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,pWVar6,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,pWVar6,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(pWVar6);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_0041a6a9:
  __freea(local_10);
LAB_0041a813:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/* Function: ___crtLCMapStringA */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Function: ___ascii_stricmp */

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2008 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = (char *)((byte *)_Str1 + 1);
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = (char *)((byte *)_Str2 + 1);
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}



/* Function: __stricmp_l */

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = (char *)((byte *)_Str2 + 1);
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}



/* Function: __CxxUnhandledExceptionFilter */

/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
    terminate();
  }
  return 0;
}



/* Function: __XcptFilter */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2008 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  p_Var5 = __getptd_noexit();
  if (p_Var5 != (_ptiddata)0x0) {
    puVar1 = (ulong *)p_Var5->_pxcptacttab;
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + DAT_0042955c * 3);
    if ((puVar1 + DAT_0042955c * 3 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      p_Var5 = (_ptiddata)0x0;
    }
    else if (pcVar2 == (code *)0x5) {
      puVar6[2] = 0;
      p_Var5 = (_ptiddata)0x1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = _ExceptionPtr;
        if (puVar6[1] == 8) {
          if (DAT_00429550 < DAT_00429554 + DAT_00429550) {
            iVar7 = DAT_00429550 * 0xc;
            iVar8 = DAT_00429550;
            do {
              *(undefined4 *)(iVar7 + 8 + (int)p_Var5->_pxcptacttab) = 0;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar8 < DAT_00429554 + DAT_00429550);
          }
          uVar4 = *puVar6;
          iVar8 = p_Var5->_tfpecode;
          if (uVar4 == 0xc000008e) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            p_Var5->_tfpecode = 0x8a;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar8;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar3;
      }
      p_Var5 = (_ptiddata)0xffffffff;
    }
  }
  return (int)p_Var5;
}



/* Function: __wincmdln */

/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2008 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_0042b8f4 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_0042b918;
  if (DAT_0042b918 == (byte *)0x0) {
    pbVar4 = &DAT_00422ca8;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* Function: __setenvp */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_0042b8f4 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_00429d04;
  if (DAT_00429d04 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = (undefined4 *)__calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_00429d04;
    DAT_00429e88 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_00429d04);
          DAT_00429d04 = (char *)0x0;
          *puVar1 = 0;
          _DAT_0042b8e8 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = (char *)__calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_00429e88);
            DAT_00429e88 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}



/* Function: parse_cmdline */

/* Library Function - Single Match
    _parse_cmdline
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_0041acf9;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_0041acf9:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* Function: __setargv */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2008 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_0042b8f4 == 0) {
    ___initmbctable();
  }
  DAT_0042a674 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_0042a570,0x104);
  _DAT_00429e98 = &DAT_0042a570;
  if ((DAT_0042b918 == (char *)0x0) || (local_8 = DAT_0042b918, *DAT_0042b918 == '\0')) {
    local_8 = &DAT_0042a570;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) &&
       (puVar2 = (undefined4 *)__malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_00429e7c = local_c - 1;
      _DAT_00429e80 = puVar2;
      return 0;
    }
  }
  return -1;
}



/* Function: ___crtGetEnvironmentStringsA */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2008 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_0042a678 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_0042a678 = 1;
      goto LAB_0041af0f;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_0042a678 = 2;
    }
  }
  if (DAT_0042a678 != 1) {
    if ((DAT_0042a678 != 2) && (DAT_0042a678 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_0041af0f:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar5 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar4 = pWVar5;
      pWVar5 = pWVar4 + 1;
    } while (*pWVar5 != L'\0');
    pWVar5 = pWVar4 + 2;
    WVar2 = *pWVar5;
  }
  iVar6 = ((int)pWVar5 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = (LPSTR)__malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0))
     && (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                     (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



/* Function: __RTC_Initialize */

/* WARNING: Removing unreachable block (ram,0x0041b005) */
/* WARNING: Removing unreachable block (ram,0x0041b00b) */
/* WARNING: Removing unreachable block (ram,0x0041b00d) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2008 Release */

void __RTC_Initialize(void)

{
  return;
}



/* Function: ___security_init_cookie */

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

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
  if ((DAT_00428870 == 0xbb40e64e) || ((DAT_00428870 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00428870 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00428870 == 0xbb40e64e) {
      DAT_00428870 = 0xbb40e64f;
    }
    else if ((DAT_00428870 & 0xffff0000) == 0) {
      DAT_00428870 = DAT_00428870 | DAT_00428870 << 0x10;
    }
    DAT_00428874 = ~DAT_00428870;
  }
  else {
    DAT_00428874 = ~DAT_00428870;
  }
  return;
}



/* Function: __forcdecpt_l */

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2008 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = (char *)((byte *)_Buf + 1);
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = (char *)((byte *)_Buf + 2);
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = (char *)((byte *)_Buf + 1);
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* Function: __cropzeros_l */

/* Library Function - Single Match
    __cropzeros_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}



/* Function: __positive */

/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __positive(double *arg)

{
  double dVar1;
  
  dVar1 = *arg;
  if (!NAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}



/* Function: __fassign_l */

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



/* Function: __fassign */

/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  __fassign_l(flag,argument,number,(_locale_t)0x0);
  return;
}



/* Function: __shift */

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2008 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



/* Function: __forcdecpt */

/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2008 Release */

void __cdecl __forcdecpt(char *_Buf)

{
  __forcdecpt_l(_Buf,(_locale_t)0x0);
  return;
}



/* Function: __cropzeros */

/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __cropzeros(char *_Buf)

{
  __cropzeros_l(_Buf,(_locale_t)0x0);
  return;
}



/* Function: __cftoe2_l */

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *_Dst;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar5 = 0x16;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 1) {
      iVar5 = 0;
    }
    if (iVar5 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar3 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar3 = in_EAX + 1;
      }
      puVar4 = puVar3;
      if (0 < param_2) {
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar4;
        *puVar4 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar3 = (undefined1 *)0xffffffff;
      }
      else {
        puVar3 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar7 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar3,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar5 = param_4[1] + -1;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
          _Dst[1] = '-';
        }
        if (99 < iVar5) {
          pcVar7 = (char *)0x64;
          iVar6 = iVar5 / 100;
          iVar5 = iVar5 % 100;
          _Dst[2] = _Dst[2] + (char)iVar6;
        }
        if (9 < iVar5) {
          pcVar7 = (char *)0xa;
          iVar6 = iVar5 / 10;
          iVar5 = iVar5 % 10;
          _Dst[3] = _Dst[3] + (char)iVar6;
        }
        _Dst[4] = _Dst[4] + (char)iVar5;
      }
      if (((DAT_0042a6f0 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar7 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (int)pcVar7;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (int)pcVar7;
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  iVar6 = 0;
  *piVar1 = iVar5;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar6;
}



/* Function: __cftoe_l */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2008 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __cftoe */

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}



/* Function: __cftoa_l */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  int *piVar2;
  size_t _SizeInBytes;
  errno_t eVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar8;
  short sVar9;
  int unaff_EBX;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    iVar15 = 0x16;
LAB_0041b51f:
    iVar16 = 0;
    *piVar2 = iVar15;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return iVar16;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    piVar2 = __errno();
    iVar15 = 0x22;
    goto LAB_0041b51f;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar3 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar3 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar4 = _strrchr(param_2 + 2,0x65);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar4[3] = '\0';
    }
    goto LAB_0041b843;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar9 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar11 = param_2 + 3;
  pcVar4 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar11 = '\0';
  }
  else {
    *pcVar11 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar13 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar13 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar9;
      }
      local_8 = local_8 + -4;
      *pcVar4 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar13 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar10 = pcVar4, 8 < (ushort)uVar13)) {
      while( true ) {
        pcVar5 = pcVar10 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar10 = pcVar5;
      }
      if (pcVar5 == pcVar11) {
        pcVar10[-2] = pcVar10[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)sVar9 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar4,0x30,param_4);
    pcVar4 = pcVar4 + param_4;
  }
  if (*pcVar11 == '\0') {
    pcVar4 = pcVar11;
  }
  *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar13 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar6 = (uint)(uVar13 & 0x7ff);
  uVar7 = uVar6 - local_18;
  uVar6 = (uint)(uVar6 < local_18);
  uVar8 = -uVar6;
  if (uVar6 == 0) {
    pcVar4[1] = '+';
  }
  else {
    pcVar4[1] = '-';
    bVar12 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar8 = -(uVar8 + bVar12);
  }
  pcVar10 = pcVar4 + 2;
  *pcVar10 = '0';
  pcVar11 = pcVar10;
  if (((int)uVar8 < 0) || (((int)uVar8 < 1 && (uVar7 < 1000)))) {
LAB_0041b7f2:
    if ((-1 < (int)uVar8) && ((0 < (int)uVar8 || (99 < uVar7)))) goto LAB_0041b7fd;
  }
  else {
    uVar14 = __alldvrm(uVar7,uVar8,1000,0);
    local_14 = (undefined4)((ulonglong)uVar14 >> 0x20);
    *pcVar10 = (char)uVar14 + '0';
    pcVar11 = pcVar4 + 3;
    uVar8 = 0;
    uVar7 = extraout_ECX;
    if (pcVar11 == pcVar10) goto LAB_0041b7f2;
LAB_0041b7fd:
    uVar14 = __alldvrm(uVar7,uVar8,100,0);
    local_14 = (undefined4)((ulonglong)uVar14 >> 0x20);
    *pcVar11 = (char)uVar14 + '0';
    pcVar11 = pcVar11 + 1;
    uVar8 = 0;
    uVar7 = extraout_ECX_00;
  }
  if ((pcVar11 != pcVar10) || ((-1 < (int)uVar8 && ((0 < (int)uVar8 || (9 < uVar7)))))) {
    uVar14 = __alldvrm(uVar7,uVar8,10,0);
    *pcVar11 = (char)uVar14 + '0';
    pcVar11 = pcVar11 + 1;
    uVar7 = extraout_ECX_01;
  }
  *pcVar11 = (char)uVar7 + '0';
  pcVar11[1] = '\0';
LAB_0041b843:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/* Function: __cftof2_l */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2008 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    piVar2 = __errno();
    uVar4 = 0x16;
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      iVar1 = in_EAX[1];
      if (iVar1 < 0) {
        if ((param_3 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
          param_2 = -iVar1;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Function: __cftof_l */

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2008 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __cftog_l */

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2008 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __cfltcvt_l */

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}



/* Function: __cfltcvt */

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}



/* Function: __initp_misc_cfltcvt_tab */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2008 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_00429560 + uVar3);
    iVar2 = __encode_pointer(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/* Function: __setdefaultprecision */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2008 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}



/* Function: __ms_p5_test_fdiv */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_00423608 - (_DAT_00423608 / _DAT_00423610) * _DAT_00423610) {
    return 1;
  }
  return 0;
}



/* Function: __ms_p5_mp_test_fdiv */

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2008 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}



/* Function: FUN_0041bc61 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041bc61(undefined4 param_1)

{
  _DAT_0042a67c = param_1;
  return;
}



/* Function: ___crtInitCritSecAndSpinCount */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl ___crtInitCritSecAndSpinCount(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  BOOL BVar1;
  
  BVar1 = InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return BVar1;
}



/* Function: __initp_misc_winsig */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2008 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_0042a680 = param_1;
  DAT_0042a684 = param_1;
  DAT_0042a688 = param_1;
  DAT_0042a68c = param_1;
  return;
}



/* Function: siglookup */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2008 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_0042955c * 0xc + param_1);
  if ((DAT_0042955c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: ___get_sigabrt */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2008 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)__decode_pointer(DAT_0042a688);
  return p_Var1;
}



/* Function: _raise */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2008 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  _ptiddata p_Var7;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var7 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_0042a680;
        iVar4 = DAT_0042a680;
        goto LAB_0041bde7;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_0041bdc5;
        if (_SigNum != 8) goto LAB_0041bda9;
      }
    }
    p_Var7 = __getptd_noexit();
    if (p_Var7 == (_ptiddata)0x0) {
      return -1;
    }
    uVar1 = siglookup((uint)p_Var7->_pxcptacttab);
    puVar6 = (undefined4 *)(uVar1 + 8);
    pcVar3 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_0042a68c;
      iVar4 = DAT_0042a68c;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_0042a684;
      iVar4 = DAT_0042a684;
    }
    else {
      if (_SigNum != 0x16) {
LAB_0041bda9:
        piVar2 = __errno();
        *piVar2 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_0041bdc5:
      puVar6 = &DAT_0042a688;
      iVar4 = DAT_0042a688;
    }
LAB_0041bde7:
    local_20 = 1;
    pcVar3 = (code *)__decode_pointer(iVar4);
  }
  iVar4 = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    iVar4 = __exit(3);
  }
  if (local_20 != iVar4) {
    __lock(iVar4);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var7->_tpxcptinfoptrs;
    p_Var7->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var7->_tfpecode;
      p_Var7->_tfpecode = 0x8c;
      goto LAB_0041be4b;
    }
  }
  else {
LAB_0041be4b:
    if (_SigNum == 8) {
      for (local_28 = DAT_00429550; local_28 < DAT_00429554 + DAT_00429550; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var7->_pxcptacttab) = 0;
      }
      goto LAB_0041be85;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_0041be85:
  FUN_0041bea6();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var7->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var7->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var7->_tfpecode = local_34;
  }
  return 0;
}



/* Function: FUN_0041bea6 */

void FUN_0041bea6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00414f48(0);
  }
  return;
}



/* Function: FUN_0041bee2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041bee2(undefined4 param_1)

{
  _DAT_0042a694 = param_1;
  return;
}



/* Function: ___crtMessageBoxA */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_18 [8];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = __encoded_null();
  local_8 = 0;
  if (DAT_0042a698 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_0042a698 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0042a69c = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_0042a6a0 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetUserObjectInformationA");
    DAT_0042a6a8 = __encode_pointer((int)pFVar2);
    if (DAT_0042a6a8 != 0) {
      pFVar2 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_0042a6a4 = __encode_pointer((int)pFVar2);
    }
  }
  if ((DAT_0042a6a4 != iVar1) && (DAT_0042a6a8 != iVar1)) {
    pcVar3 = (code *)__decode_pointer(DAT_0042a6a4);
    pcVar4 = (code *)__decode_pointer(DAT_0042a6a8);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar5 = (*pcVar3)(), iVar5 == 0 ||
         (iVar5 = (*pcVar4)(iVar5,1,local_18,0xc,local_c), iVar5 == 0)) || ((local_10 & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_0041c033;
    }
  }
  if ((((DAT_0042a69c != iVar1) &&
       (pcVar3 = (code *)__decode_pointer(DAT_0042a69c), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_0042a6a0 != iVar1 &&
      (pcVar3 = (code *)__decode_pointer(DAT_0042a6a0), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_0041c033:
  pcVar3 = (code *)__decode_pointer(DAT_0042a698);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar3)(local_8,_LpText,_LpCaption,_UType);
  return iVar1;
}



/* Function: _strncpy_s */

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_0041c080:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          piVar2 = __errno();
          eVar5 = 0x22;
          *piVar2 = 0x22;
          goto LAB_0041c091;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_0041c080;
  piVar2 = __errno();
  eVar5 = 0x16;
  *piVar2 = 0x16;
LAB_0041c091:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}



/* Function: __set_error_mode */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_00429d0c;
      DAT_00429d0c = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_00429d0c;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* Function: __global_unwind2 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x41c174,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* Function: __local_unwind2 */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_0041c17c;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_0041c290();
    }
  }
  ExceptionList = local_20;
  return;
}



/* Function: __NLG_Notify1 */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00429590 = param_1;
  DAT_0042958c = in_EAX;
  DAT_00429594 = unaff_EBP;
  return in_EAX;
}



/* Function: __NLG_Notify */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00429590 = param_1;
  DAT_0042958c = in_EAX;
  DAT_00429594 = unaff_EBP;
  return;
}



/* Function: FUN_0041c290 */

void FUN_0041c290(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* Function: _ValidateRead */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2008 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* Function: x_ismbbtype_l */

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    if (uVar1 == 0) goto LAB_0041c2e9;
  }
  uVar1 = 1;
LAB_0041c2e9:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Function: __ismbblead_l */

/* Library Function - Single Match
    __ismbblead_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}



/* Function: __ismbblead */

/* Library Function - Single Match
    __ismbblead
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* Function: __crtGetStringTypeA_stat */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  LPCWSTR pWVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_c = in_ECX;
  if (DAT_0042a6e8 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_0042a6e8 = 2;
      }
      goto LAB_0041c384;
    }
    DAT_0042a6e8 = 1;
  }
  else {
LAB_0041c384:
    if ((DAT_0042a6e8 == 2) || (DAT_0042a6e8 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_0041c4d1;
    }
    if (DAT_0042a6e8 != 1) goto LAB_0041c4d1;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_0041c4d1;
  lpWideCharStr = (LPCWSTR)0x0;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      pWVar3 = (LPCWSTR)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0041c414:
        lpWideCharStr = pWVar3 + 4;
      }
    }
    else {
      pWVar3 = (LPCWSTR)_malloc(_Size);
      lpWideCharStr = pWVar3;
      if (pWVar3 != (LPCWSTR)0x0) {
        pWVar3[0] = L'\xdddd';
        pWVar3[1] = L'\0';
        goto LAB_0041c414;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_0041c4d1:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/* Function: ___crtGetStringTypeA */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Function: ___free_lc_time */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}



/* Function: ___free_lconv_num */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00429660) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_00429664) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00429668) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* Function: ___free_lconv_mon */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_0042966c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_00429670) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_00429674) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_00429678) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_0042967c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_00429680) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_00429684) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* Function: _strcspn */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* Function: _strpbrk */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)(uint)bVar1;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* Function: FUN_0041c836 */

uint * __cdecl FUN_0041c836(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_EAX;
  uVar7 = (uint)param_1 & 3;
  while (uVar7 != 0) {
    if ((char)*param_1 == cVar6) {
      return param_1;
    }
    if ((char)*param_1 == '\0') {
      return (uint *)0x0;
    }
    uVar7 = (uint)((int)param_1 + 1) & 3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar7 = in_EAX | in_EAX << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == cVar6) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* Function: __flush */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2008 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



/* Function: __fflush_nolock */

/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __fileno(_File);
        iVar1 = __commit(iVar1);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* Function: flsall */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  void *_File;
  FILE *_File_00;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_0042b8e0; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_0042a8c0 + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_0042a8c0 + _Index * 4);
      if ((_File_00->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File_00->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_0041cadf();
    }
  }
  FUN_0041cb0e();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/* Function: FUN_0041cadf */

void FUN_0041cadf(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_0042a8c0 + unaff_ESI * 4));
  return;
}



/* Function: FUN_0041cb0e */

void FUN_0041cb0e(void)

{
  FUN_00414f48(1);
  return;
}



/* Function: __isatty */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2008 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  uint uVar2;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
    return 0;
  }
  if ((_FileHandle < 0) || (DAT_0042a7b4 <= (uint)_FileHandle)) {
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0;
  }
  else {
    uVar2 = (int)*(char *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
            0x40;
  }
  return uVar2;
}



/* Function: __lseeki64_nolock */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2008 Release */

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
LAB_0041cbb5:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_0041cbb5;
      }
    }
    pbVar1 = (byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/* Function: __lseeki64 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0042a7b4)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        puVar1 = ___doserrno();
        *puVar1 = 0;
        piVar2 = __errno();
        *piVar2 = 9;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_0041cd18();
      }
      goto LAB_0041cd12;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_0041cd12:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/* Function: FUN_0041cd18 */

void FUN_0041cd18(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Function: __write_nolock */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR WVar1;
  wchar_t wVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  _ptiddata p_Var6;
  BOOL BVar7;
  DWORD nNumberOfBytesToWrite;
  int iVar8;
  uint uVar9;
  char cVar10;
  WCHAR *pWVar11;
  char *pcVar12;
  int unaff_EDI;
  WCHAR *pWVar13;
  ushort uVar14;
  UINT local_1ae8;
  uint local_1ae4;
  char local_1add;
  int *local_1adc;
  char *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  char *local_1acc;
  WCHAR *local_1ac8;
  DWORD local_1ac4;
  WCHAR *local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_1ad0 = (WCHAR *)_Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_0041d448;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_0041d448;
  }
  piVar4 = &DAT_0042a7c0 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_0041d448;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_0041d0b9:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_0041d3b9:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_0041d3c5:
      if (local_1acc != (char *)0x0) goto LAB_0041d448;
      goto LAB_0041d3ce;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_0041d40a;
      do {
        local_1ac0 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac8 - (int)local_1ad0;
        pWVar11 = local_1abc;
        do {
          if (_MaxCharCount <= uVar9) break;
          pWVar13 = (WCHAR *)((int)local_1ac8 + 1);
          WVar1 = *local_1ac8;
          uVar9 = uVar9 + 1;
          if ((char)WVar1 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          *(char *)pWVar11 = (char)WVar1;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          local_1ac8 = pWVar13;
        } while (local_1ac0 < (WCHAR *)0x13ff);
        BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                          (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) goto LAB_0041d3b9;
        local_1acc = local_1acc + (int)local_1ad8;
      } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
              (piVar4 = local_1adc, (uint)((int)local_1ac8 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_0041d3c5;
    }
    local_1ac0 = local_1ad0;
    if (cVar10 == '\x02') {
      if (_MaxCharCount != 0) {
        do {
          local_1ac8 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac0 - (int)local_1ad0;
          pWVar11 = local_1abc;
          do {
            if (_MaxCharCount <= uVar9) break;
            pWVar13 = local_1ac0 + 1;
            WVar1 = *local_1ac0;
            uVar9 = uVar9 + 2;
            if (WVar1 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_1ac8 = local_1ac8 + 1;
            }
            local_1ac8 = local_1ac8 + 1;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            local_1ac0 = pWVar13;
          } while (local_1ac8 < (WCHAR *)0x13fe);
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_0041d3b9;
          local_1acc = local_1acc + (int)local_1ad8;
        } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
                (piVar4 = local_1adc, (uint)((int)local_1ac0 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_0041d3c5;
      }
    }
    else if (_MaxCharCount != 0) {
      do {
        local_1ac8 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac0 - (int)local_1ad0;
        pWVar11 = local_6bc;
        do {
          if (_MaxCharCount <= uVar9) break;
          WVar1 = *local_1ac0;
          local_1ac0 = local_1ac0 + 1;
          uVar9 = uVar9 + 2;
          if (WVar1 == L'\n') {
            *pWVar11 = L'\r';
            pWVar11 = pWVar11 + 1;
            local_1ac8 = local_1ac8 + 1;
          }
          local_1ac8 = local_1ac8 + 1;
          *pWVar11 = WVar1;
          pWVar11 = pWVar11 + 1;
        } while (local_1ac8 < (WCHAR *)0x6a8);
        pcVar12 = (char *)0x0;
        iVar5 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar11 - (int)local_6bc) / 2,
                                    local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) goto LAB_0041d3b9;
        do {
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),local_1414 + (int)pcVar12,
                            iVar5 - (int)pcVar12,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_1ac4 = GetLastError();
            break;
          }
          pcVar12 = pcVar12 + (int)local_1ad8;
        } while ((int)pcVar12 < iVar5);
      } while ((iVar5 <= (int)pcVar12) &&
              (local_1acc = (char *)((int)local_1ac0 - (int)local_1ad0), local_1acc < _MaxCharCount)
              );
      goto LAB_0041d3c5;
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_0041d0b9;
    local_1ae8 = GetConsoleCP();
    local_1ac8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac0 = (WCHAR *)0x0;
      pWVar11 = local_1ad0;
      do {
        piVar4 = local_1adc;
        if (local_1add == '\0') {
          cVar10 = (char)*pWVar11;
          local_1ae4 = (uint)(cVar10 == '\n');
          iVar5 = *local_1adc + iVar8;
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar5 = _isleadbyte(CONCAT22(cVar10 >> 7,(short)cVar10));
            if (iVar5 == 0) {
              uVar14 = 1;
              pWVar13 = pWVar11;
              goto LAB_0041cf20;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar11)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar8 + 0x34 + *piVar4) = (char)*pWVar11;
              *(undefined4 *)(iVar8 + 0x38 + *piVar4) = 1;
              break;
            }
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar11,2);
            if (iVar5 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar5 + 0x34);
            *(undefined4 *)(iVar5 + 0x38) = 0;
            uVar14 = 2;
            pWVar13 = &local_10;
            local_10._1_1_ = cVar10;
LAB_0041cf20:
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar13,(uint)uVar14);
            if (iVar5 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_1ae8,0,(LPCWSTR)&local_1ac4,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ac8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_0041d3b9;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_0041d3b9;
            if ((int)local_1ac8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            local_1ac4 = (DWORD)(ushort)*pWVar11;
            local_1ae4 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_1ac0 = local_1ac0 + 1;
          }
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            wVar2 = __putwch_nolock((wchar_t)local_1ac4);
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_0041d3b9;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_0041d3b9;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_0041d3c5;
    }
LAB_0041d3ce:
    piVar4 = local_1adc;
    if (local_1ac4 != 0) {
      if (local_1ac4 == 5) {
        piVar4 = __errno();
        *piVar4 = 9;
        puVar3 = ___doserrno();
        *puVar3 = 5;
      }
      else {
        __dosmaperr(local_1ac4);
      }
      goto LAB_0041d448;
    }
  }
LAB_0041d40a:
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_0041d448:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}



/* Function: __write */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2008 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0042a7b4)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_0041d527();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* Function: FUN_0041d527 */

void FUN_0041d527(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Function: __getbuf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_0042a54c = _DAT_0042a54c + 1;
  pcVar1 = (char *)__malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



/* Function: __wctomb_s_l */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_0041d59e:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_0041d635;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_0041d670:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_0041d59e;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_0041d635:
          piVar2 = __errno();
          *piVar2 = 0x22;
          __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_0041d670;
      }
    }
    piVar2 = __errno();
    *piVar2 = 0x2a;
    piVar2 = __errno();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}



/* Function: _wctomb_s */

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/* Function: __aulldvrm */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2008 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Function: strtoxl */

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2008 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_0041d85e:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_0041d85e;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_0041d8c4;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_0041d8c4;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_0041d8c4;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_0041d8c4:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_0041d921:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_0041d921;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_0041d921;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* Function: _strtol */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2008 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_0042a528 == 0) {
    ppuVar2 = &PTR_DAT_00429270;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* Function: __isdigit_l */

/* Library Function - Single Match
    __isdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}



/* Function: _isdigit */

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2008 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_0042a528 == 0) {
    return *(ushort *)(PTR_DAT_00429258 + _C * 2) & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Function: __calloc_impl */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2008 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      piVar1 = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_0042b8fc == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_0042b908)) {
          __lock(4);
          piVar1 = ___sbh_alloc_block(_Size);
          FUN_0041db7a();
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            goto LAB_0041db2f;
          }
        }
        else {
LAB_0041db2f:
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        piVar1 = (int *)HeapAlloc(DAT_00429e74,8,(SIZE_T)dwBytes);
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_0042a1c8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/* Function: FUN_0041db7a */

void FUN_0041db7a(void)

{
  FUN_00414f48(4);
  return;
}



/* Function: ___ansicp */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2008 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: ___convertcp */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  LPCWSTR pWVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_0041dd87;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = uVar6 == 0;
    if (bVar7) goto LAB_0041dd87;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      pWVar4 = (LPCWSTR)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_0041dcc7:
        local_20 = pWVar4 + 4;
      }
    }
    else {
      pWVar4 = (LPCWSTR)_malloc(_Size);
      local_20 = pWVar4;
      if (pWVar4 != (LPCWSTR)0x0) {
        pWVar4[0] = L'\xdddd';
        pWVar4[1] = L'\0';
        goto LAB_0041dcc7;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = (LPSTR)__calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_0041dd87:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __tolower_l */

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2) & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_0041ddfa:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_0041ddfa;
    uVar2 = (uint)local_c;
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/* Function: _tolower */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2008 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_0042a528 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/* Function: _strrchr */

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2008 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/* Function: FID_conflict:__atoflt_l */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0041df66:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041dfa6;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_0041df98:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041dfa6;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_0041df98;
    goto LAB_0041df66;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_0041dfa6:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/* Function: FID_conflict:__atoflt_l */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0041e00e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041e04e;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_0041e040:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041e04e;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_0041e040;
    goto LAB_0041e00e;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_0041e04e:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/* Function: __fptostr */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    piVar1 = __errno();
    eVar7 = 0x16;
    *piVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf + 1;
      if (0 < _Digits) {
        do {
          cVar5 = *pcVar6;
          if (cVar5 == '\0') {
            cVar5 = '0';
          }
          else {
            pcVar6 = pcVar6 + 1;
          }
          *pcVar3 = cVar5;
          pcVar3 = pcVar3 + 1;
          _Digits = _Digits + -1;
        } while (0 < _Digits);
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    piVar1 = __errno();
    eVar7 = 0x22;
    *piVar1 = 0x22;
  }
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}



/* Function: ___dtold */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2008 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_0041e1d0;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_0041e1d0:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}



/* Function: __fltout2 */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2008 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = _I10_OUTPUT(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}



/* Function: __alldvrm */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2008 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Function: __aullshr */

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2008 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}



/* Function: __controlfp_s */

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    piVar2 = __errno();
    eVar3 = 0x16;
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}



/* Function: _atol */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2008 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* Function: __fclose_nolock */

/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar3 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar3 = __flush(_File);
      __freebuf(_File);
      iVar2 = __fileno(_File);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar3;
}



/* Function: __commit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2008 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0042a7b4)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_0042a7c0)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_0042a7c0)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_0041e5af;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_0041e5af:
        FUN_0041e5c4();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* Function: FUN_0041e5c4 */

void FUN_0041e5c4(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Function: __free_osfhnd */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0042a7b4)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    piVar1 = (int *)((&DAT_0042a7c0)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_004288c0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0041e630;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0041e630:
      *(undefined4 *)(iVar3 + (&DAT_0042a7c0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}



/* Function: __get_osfhandle */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2008 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  intptr_t *piVar3;
  intptr_t iVar4;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if (((_FileHandle < 0) || (DAT_0042a7b4 <= (uint)_FileHandle)) ||
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x40 + (&DAT_0042a7c0)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) == 0)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar3;
  }
  return iVar4;
}



/* Function: ___lock_fhandle */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2008 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  BOOL BVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x40 + (&DAT_0042a7c0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(iVar2 + 0xc),4000);
      local_20 = (uint)(BVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_0041e762();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_0042a7c0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  }
  return local_20;
}



/* Function: FUN_0041e762 */

void FUN_0041e762(void)

{
  FUN_00414f48(10);
  return;
}



/* Function: __unlock_fhandle */

/* Library Function - Single Match
    __unlock_fhandle
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0042a7c0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
}



/* Function: __putwch_nolock */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2008 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  if (DAT_00429750 != 0) {
    if (DAT_004297f4 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_004297f4 == (HANDLE)0xffffffff) goto LAB_0041e83e;
    BVar2 = WriteConsoleW(DAT_004297f4,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_00429750 = 1;
      goto LAB_0041e83e;
    }
    if ((DAT_00429750 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_0041e83e;
    DAT_00429750 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_004297f4 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_004297f4,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_0041e83e:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}



/* Function: __mbtowc_l */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_0041e8a6;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        piVar3 = __errno();
        *piVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_0041e8a6:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



/* Function: _mbtowc */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2008 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/* Function: __isctype_l */

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}



/* Function: FID_conflict:__ld12tod */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2008 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_0041ef41;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_0042975c - 1;
    iVar4 = (int)(DAT_0042975c + ((int)DAT_0042975c >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_0042975c & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_0041eb75;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_0041eb7c;
LAB_0041eb75:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_0041eb7c:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_0041eb8a;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_0041eb8a:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_00429758 - DAT_0042975c)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_00429758 < iVar12) {
        if (iVar12 < DAT_00429754) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_00429768;
          iVar2 = (int)(DAT_00429760 + ((int)DAT_00429760 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00429760 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_00429760 + ((int)DAT_00429760 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00429760 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_00429768 + DAT_00429754;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_0041ef41;
      }
      local_14 = DAT_00429758 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_0042975c - 1;
      iVar12 = (int)(DAT_0042975c + ((int)DAT_0042975c >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_0042975c & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_0041ed2d;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_0041ed2d:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_00429760 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_0041ef41:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_00429760 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_00429764 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_00429764 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/* Function: FID_conflict:__ld12tod */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2008 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_0041f485;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_00429774 - 1;
    iVar4 = (int)(DAT_00429774 + ((int)DAT_00429774 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_00429774 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_0041f0b9;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_0041f0c0;
LAB_0041f0b9:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_0041f0c0:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_0041f0ce;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_0041f0ce:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_00429770 - DAT_00429774)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_00429770 < iVar12) {
        if (iVar12 < DAT_0042976c) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_00429780;
          iVar2 = (int)(DAT_00429778 + ((int)DAT_00429778 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00429778 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_00429778 + ((int)DAT_00429778 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_00429778 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_00429780 + DAT_0042976c;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_0041f485;
      }
      local_14 = DAT_00429770 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_00429774 - 1;
      iVar12 = (int)(DAT_00429774 + ((int)DAT_00429774 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_00429774 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_0041f271;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_0041f271:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_00429778 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_0041f485:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_00429778 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_0042977c == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_0042977c == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}



/* Function: ___strgtold12_l */

/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2008 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  int *piVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined *puVar17;
  ushort uVar18;
  char *pcVar19;
  undefined4 uVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar23 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (_Locale != (_locale_t)0x0) {
    local_58 = str;
    for (; (((cVar8 = *str, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) || (cVar8 == '\r'))
        ; str = str + 1) {
    }
LAB_0041f54f:
    cVar8 = *str;
    pcVar19 = str + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_0041f56c:
        iVar16 = 3;
        goto LAB_0041f56e;
      }
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_0041f583:
        iVar16 = 5;
        str = pcVar19;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar16 = 2;
        str = pcVar19;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_0041f59d;
          goto LAB_0041f728;
        }
        iVar16 = 2;
        uVar7 = 0x8000;
        str = pcVar19;
      }
      goto LAB_0041f54f;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_0041f56c;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_0041f5d4;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_0041f604;
      if (cVar8 == '0') goto LAB_0041f59d;
      goto LAB_0041f5e4;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_0041f56c;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_0041f583;
      str = local_58;
      if (cVar8 != '0') goto LAB_0041f753;
LAB_0041f59d:
      iVar16 = 1;
      str = pcVar19;
      goto LAB_0041f54f;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
      if (cVar8 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_0041f677;
LAB_0041f5d4:
      bVar4 = true;
      iVar16 = 4;
      str = pcVar19;
      goto LAB_0041f54f;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
LAB_0041f677:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_0041f604:
        bVar4 = true;
        iVar16 = 0xb;
        str = pcVar19 + -1;
      }
      else {
LAB_0041f5e4:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_0041f728;
        iVar16 = 6;
        str = pcVar19;
      }
      goto LAB_0041f54f;
    case 5:
      bVar6 = true;
      str = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_0041f56e;
      }
      goto LAB_0041f753;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_0041f70f;
        if (cVar8 == '-') goto LAB_0041f703;
LAB_0041f6f6:
        str = local_58;
        if (cVar8 != '0') goto LAB_0041f753;
        iVar16 = 8;
        str = pcVar19;
        goto LAB_0041f54f;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_0041f6f6;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_0041f728;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_0041f7b5;
    default:
      goto switchD_0041f55b_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar8 == '+') {
LAB_0041f70f:
          iVar16 = 7;
          str = pcVar19;
        }
        else {
          if (cVar8 != '-') goto LAB_0041f753;
LAB_0041f703:
          local_6c = -1;
          iVar16 = 7;
          str = pcVar19;
        }
        goto LAB_0041f54f;
      }
      iVar16 = 10;
      pcVar19 = str;
switchD_0041f55b_caseD_a:
      str = pcVar19;
      if (iVar16 != 10) goto LAB_0041f54f;
      goto LAB_0041f753;
    }
    iVar16 = 9;
LAB_0041f56e:
    str = pcVar19 + -1;
    goto LAB_0041f54f;
  }
  piVar9 = __errno();
  *piVar9 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_0041fb80;
LAB_0041f7b5:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_0041f7d0;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    goto LAB_0041f7b5;
  }
  local_68 = 0x1451;
LAB_0041f7d0:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar19;
    pcVar19 = pcVar19 + 1;
  }
LAB_0041f728:
  str = pcVar19 + -1;
LAB_0041f753:
  *p_end_ptr = str;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_0041fb62;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar2 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar12 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + scale);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - decpt);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_0041fb62;
      puVar17 = &DAT_00429798;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar17 = &DAT_004298f8;
        }
        if (mult12 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        uVar12 = uVar13;
        uVar14 = uStack_2e;
        iVar1 = uStack_2a;
        uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar2 = local_3c;
joined_r0x0041f85d:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
          uVar13 = (int)local_58 >> 3;
          puVar17 = puVar17 + 0x54;
          uVar10 = (uint)local_58 & 7;
          local_58 = (char *)uVar13;
          if (uVar10 != 0) {
            puVar11 = (ushort *)(puVar17 + uVar10 * 0xc);
            if (0x7fff < *puVar11) {
              local_4c = (ushort)*(undefined4 *)puVar11;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar11 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar11 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar11 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar11 + 4);
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              puVar11 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar14 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar1 = 0;
            uStack_26 = 0;
            uVar15 = puVar11[5] & 0x7fff;
            uVar21 = (puVar11[5] ^ uStack_38._2_2_) & 0x8000;
            uVar18 = uVar15 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar15 < 0x7fff)) && (uVar18 < 0xbffe)) {
              if (0x3fbf < uVar18) {
                if ((((uVar12 & 0x7fff0000) == 0) &&
                    (uVar18 = uVar18 + 1, (uVar12 & 0x7fffffff) == 0)) &&
                   ((iVar2 == 0 && (uVar3 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar12 = uVar12 & 0xffff;
                  uVar14 = 0;
                  iVar1 = 0;
                }
                else if (((uVar15 == 0) &&
                         (uVar18 = uVar18 + 1, (*(uint *)(puVar11 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar11 + 2) == 0 && (*(int *)puVar11 == 0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar12 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar3 = 0;
                  iVar2 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar11 + 4;
                      do {
                        bVar4 = false;
                        uVar14 = *(uint *)(psVar24 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar4) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar18 = uVar18 + 0xc002;
                  if ((short)uVar18 < 1) {
LAB_0041fa18:
                    uVar18 = uVar18 - 1;
                    if ((short)uVar18 < 0) {
                      uVar14 = (uint)(ushort)-uVar18;
                      uVar18 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar12 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar13 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar14 = uVar14 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar12 >> 1);
                        local_30 = (byte)uVar13;
                        uStack_2f = (undefined1)(uVar13 >> 8);
                      } while (uVar14 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar15 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar15 >> 0xf;
                      iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar2 | (ushort)uStack_2a >> 0xf;
                      uVar18 = uVar18 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar2 >> 0x10);
                    } while (0 < (short)uVar18);
                    if ((short)uVar18 < 1) goto LAB_0041fa18;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar14 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar18 = uVar18 + 1;
                          iVar1 = 0;
                          uVar14 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar14 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar14;
                      uStack_2e._2_2_ = (ushort)(uVar14 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar18 < 0x7fff) {
                    local_40 = uVar14;
                    local_3c = iVar1;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar18 | uVar21;
                    uVar12 = CONCAT22(uVar18 | uVar21,uStack_26);
                    uVar3 = uVar14;
                    iVar2 = iVar1;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar12;
                    uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
                    uVar3 = 0;
                    iVar2 = 0;
                  }
                }
                goto joined_r0x0041f85d;
              }
              uVar12 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar12;
            uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
            uVar14 = 0;
            iVar1 = 0;
            uVar3 = 0;
            iVar2 = 0;
          }
          goto joined_r0x0041f85d;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar2;
      local_40._2_2_ = (undefined2)(uVar3 >> 0x10);
      local_40._0_2_ = (undefined2)uVar3;
      uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar12;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar20 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar13 = uVar12;
      uStack_2e = uVar14;
      uStack_2a = iVar1;
      local_3c = iVar2;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar20 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_0041fb62:
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar20 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar7;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar20;
LAB_0041fb80:
  uStack_38 = uVar13;
  local_40 = uVar3;
  uVar14 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar14;
}



/* Function: $I10_OUTPUT */

/* WARNING: Removing unreachable block (ram,0x004200fb) */
/* WARNING: Removing unreachable block (ram,0x00420105) */
/* WARNING: Removing unreachable block (ram,0x0042010a) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2008 Release */

void __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  errno_t eVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  ushort uVar17;
  ushort uVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  ushort *local_70;
  ushort *local_6c;
  undefined *local_68;
  int local_5c;
  int local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  int local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar3 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar20 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar7 = param_3 & 0x8000;
  uVar12 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar7 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar12 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar7 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    iVar1 = iVar3;
    goto LAB_00420498;
  }
  if ((short)uVar12 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar7 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_0041fcf6;
        pcVar24 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_0041fcf6:
          pcVar24 = "1#QNAN";
          goto LAB_0041fcfb;
        }
        pcVar24 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar24 = "1#SNAN";
LAB_0041fcfb:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar24);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_00420498;
  }
  local_50 = (short)(((uVar12 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar12 * 0x4d10
                    >> 0x10);
  uVar14 = (uint)local_50;
  local_24._0_2_ = 0;
  local_1a = (undefined1)uVar12;
  bStack_19 = (byte)(uVar12 >> 8);
  uStack_1e = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  local_24._2_2_ = (ushort)param_1;
  local_68 = &DAT_00429798;
  uStack_20 = uStack_12;
  if (-uVar14 != 0) {
    iVar4 = param_1;
    uVar12 = -uVar14;
    iVar1 = iVar3;
    if (0 < (int)uVar14) {
      local_68 = &DAT_004298f8;
      uVar12 = uVar14;
    }
    while (uVar12 != 0) {
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
      local_24._2_2_ = (ushort)iVar4;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      local_68 = local_68 + 0x54;
      if ((uVar12 & 7) != 0) {
        puVar9 = (ushort *)(local_68 + (uVar12 & 7) * 0xc);
        if (0x7fff < *puVar9) {
          local_40 = (ushort)*(undefined4 *)puVar9;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar9 >> 0x10);
          puVar2 = puVar9 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar9 + 2) >> 0x10);
          puVar9 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_58 = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12 = 0;
        local_10._0_2_ = 0;
        iVar20 = 0;
        local_10._2_2_ = 0;
        local_c = 0;
        iVar3 = 0;
        uStack_a = 0;
        uVar17 = (puVar9[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar8 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar11 = puVar9[5] & 0x7fff;
        uVar18 = uVar11 + uVar8;
        if (((uVar8 < 0x7fff) && (uVar11 < 0x7fff)) && (uVar18 < 0xbffe)) {
          if (0x3fbf < uVar18) {
            if (((uVar8 == 0) &&
                (uVar18 = uVar18 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((CONCAT22(uStack_1e,uStack_20) == 0 &&
                (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto LAB_0042000c;
            }
            if ((((uVar11 == 0) && (uVar18 = uVar18 + 1, (*(uint *)(puVar9 + 4) & 0x7fffffff) == 0))
                && (*(int *)(puVar9 + 2) == 0)) && (*(int *)puVar9 == 0)) goto LAB_0041fe2b;
            local_5c = 0;
            psVar19 = (short *)&local_10;
            local_44 = 5;
            do {
              local_54 = local_44;
              if (0 < local_44) {
                local_70 = (ushort *)((int)&local_24 + local_5c * 2);
                local_6c = puVar9 + 4;
                do {
                  bVar5 = false;
                  uVar14 = *(uint *)(psVar19 + -2) + (uint)*local_70 * (uint)*local_6c;
                  if ((uVar14 < *(uint *)(psVar19 + -2)) ||
                     (uVar14 < (uint)*local_70 * (uint)*local_6c)) {
                    bVar5 = true;
                  }
                  *(uint *)(psVar19 + -2) = uVar14;
                  if (bVar5) {
                    *psVar19 = *psVar19 + 1;
                  }
                  local_70 = local_70 + 1;
                  local_6c = local_6c + -1;
                  local_54 = local_54 + -1;
                } while (0 < local_54);
              }
              psVar19 = psVar19 + 1;
              local_5c = local_5c + 1;
              local_44 = local_44 + -1;
            } while (0 < local_44);
            uVar18 = uVar18 + 0xc002;
            if ((short)uVar18 < 1) {
LAB_0041ff3c:
              uVar18 = uVar18 - 1;
              if ((short)uVar18 < 0) {
                uVar14 = (uint)(ushort)-uVar18;
                uVar18 = 0;
                do {
                  if ((local_14 & 1) != 0) {
                    local_58 = local_58 + 1;
                  }
                  iVar3 = CONCAT22(uStack_a,local_c);
                  uVar21 = CONCAT22(local_10._2_2_,(ushort)local_10);
                  iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
                  local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                  uStack_a = uStack_a >> 1;
                  local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                  uVar22 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                  uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                  uVar14 = uVar14 - 1;
                  local_10._0_2_ = (ushort)(uVar21 >> 1);
                  local_14 = (byte)uVar22;
                  uStack_13 = (undefined1)(uVar22 >> 8);
                } while (uVar14 != 0);
                if (local_58 != 0) {
                  local_14 = local_14 | 1;
                }
              }
            }
            else {
              do {
                uVar11 = local_10._2_2_;
                uVar8 = uStack_12;
                if ((uStack_a & 0x8000) != 0) break;
                iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                local_14 = (byte)iVar20;
                uStack_13 = (undefined1)((uint)iVar20 >> 8);
                uStack_12 = (ushort)((uint)iVar20 >> 0x10);
                iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
                local_10._0_2_ = (ushort)iVar20 | uVar8 >> 0xf;
                local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
                iVar20 = CONCAT22(uStack_a,local_c) * 2;
                local_c = (ushort)iVar20 | uVar11 >> 0xf;
                uVar18 = uVar18 - 1;
                uStack_a = (ushort)((uint)iVar20 >> 0x10);
              } while (0 < (short)uVar18);
              if ((short)uVar18 < 1) goto LAB_0041ff3c;
            }
            if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
               (iVar3 = CONCAT22(local_c,local_10._2_2_),
               iVar20 = CONCAT22((ushort)local_10,uStack_12),
               (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
              if (CONCAT22((ushort)local_10,uStack_12) == -1) {
                uStack_12 = 0;
                local_10._0_2_ = 0;
                iVar20 = 0;
                if (CONCAT22(local_c,local_10._2_2_) == -1) {
                  local_10._2_2_ = 0;
                  local_c = 0;
                  if (uStack_a == 0xffff) {
                    uStack_a = 0x8000;
                    uVar18 = uVar18 + 1;
                    iVar3 = 0;
                    iVar20 = 0;
                  }
                  else {
                    uStack_a = uStack_a + 1;
                    iVar3 = 0;
                    iVar20 = 0;
                  }
                }
                else {
                  iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                  local_10._2_2_ = (ushort)iVar3;
                  local_c = (ushort)((uint)iVar3 >> 0x10);
                }
              }
              else {
                iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
                uStack_12 = (ushort)iVar20;
                local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
                iVar3 = CONCAT22(local_c,local_10._2_2_);
              }
            }
            local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_12 = (ushort)iVar20;
            local_c = (ushort)((uint)iVar3 >> 0x10);
            local_10._2_2_ = (ushort)iVar3;
            if (uVar18 < 0x7fff) {
              bStack_19 = (byte)(uVar18 >> 8) | (byte)(uVar17 >> 8);
              local_24._0_2_ = uStack_12;
              local_24._2_2_ = (ushort)local_10;
              uStack_20 = local_10._2_2_;
              iVar4 = CONCAT22(local_10._2_2_,(ushort)local_10);
              uStack_1e = local_c;
              uStack_1c = uStack_a;
              local_1a = (undefined1)uVar18;
            }
            else {
              uStack_20 = 0;
              uStack_1e = 0;
              local_24._0_2_ = 0;
              local_24._2_2_ = 0;
              iVar4 = 0;
              iVar10 = ((uVar17 == 0) - 1 & 0x80000000) + 0x7fff8000;
              uStack_1c = (ushort)iVar10;
              local_1a = (undefined1)((uint)iVar10 >> 0x10);
              bStack_19 = (byte)((uint)iVar10 >> 0x18);
            }
            goto LAB_0042000c;
          }
LAB_0041fe2b:
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar20 = ((uVar17 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
        }
        uStack_20 = 0;
        uStack_1e = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar4 = 0;
        iVar20 = 0;
        iVar3 = 0;
      }
LAB_0042000c:
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
      local_24._2_2_ = (ushort)iVar4;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      uStack_12 = (ushort)iVar20;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar12 = (int)uVar12 >> 3;
    }
  }
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar12 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
  if (0x3ffe < (ushort)(uVar12 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    local_c = 0;
    uStack_a = 0;
    uVar14 = uVar12 >> 0x10 & 0x7fff;
    iVar20 = uVar14 + 0x3ffb;
    if (((ushort)uVar14 < 0x7fff) && ((ushort)iVar20 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar20) {
        if (((((ushort)uVar14 == 0) &&
             (iVar20 = uVar14 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_1e,uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          param_2 = 0;
          uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
          goto LAB_004202d0;
        }
        local_5c = 0;
        psVar19 = (short *)&local_10;
        local_44 = 5;
        do {
          local_58 = local_44;
          if (0 < local_44) {
            local_4c = &local_2c;
            puVar9 = (ushort *)((int)&local_24 + local_5c * 2);
            do {
              bVar5 = false;
              uVar14 = *(uint *)(psVar19 + -2) + (uint)*local_4c * (uint)*puVar9;
              if ((uVar14 < *(uint *)(psVar19 + -2)) || (uVar14 < (uint)*local_4c * (uint)*puVar9))
              {
                bVar5 = true;
              }
              *(uint *)(psVar19 + -2) = uVar14;
              if (bVar5) {
                *psVar19 = *psVar19 + 1;
              }
              local_4c = local_4c + -1;
              puVar9 = puVar9 + 1;
              local_58 = local_58 + -1;
            } while (0 < local_58);
          }
          psVar19 = psVar19 + 1;
          local_5c = local_5c + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar20 = iVar20 + 0xc002;
        if ((short)iVar20 < 1) {
LAB_004201c9:
          uVar18 = (ushort)(iVar20 + 0xffff);
          if ((short)uVar18 < 0) {
            uVar14 = -(iVar20 + 0xffff);
            uVar12 = uVar14 & 0xffff;
            uVar18 = uVar18 + (short)uVar14;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,local_c);
              uVar14 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar21 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = uVar12 - 1;
              local_10._0_2_ = (ushort)(uVar14 >> 1);
              local_14 = (byte)uVar21;
              uStack_13 = (undefined1)(uVar21 >> 8);
            } while (uVar12 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar8 = local_10._2_2_;
            uVar18 = uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined1)((uint)iVar3 >> 8);
            uStack_12 = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar3 | uVar18 >> 0xf;
            local_10._2_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | uVar8 >> 0xf;
            iVar20 = iVar20 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar20);
          uVar18 = (ushort)iVar20;
          if ((short)uVar18 < 1) goto LAB_004201c9;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (iVar20 = CONCAT22(local_c,local_10._2_2_), uVar14 = CONCAT22((ushort)local_10,uStack_12)
           , (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            uVar14 = 0;
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar18 = uVar18 + 1;
                iVar20 = 0;
                uVar14 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                iVar20 = 0;
                uVar14 = 0;
              }
            }
            else {
              iVar20 = CONCAT22(local_c,local_10._2_2_) + 1;
            }
          }
          else {
            uVar14 = CONCAT22((ushort)local_10,uStack_12) + 1;
            iVar20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)(uVar14 >> 0x10);
        uStack_12 = (ushort)uVar14;
        local_c = (ushort)((uint)iVar20 >> 0x10);
        local_10._2_2_ = (ushort)iVar20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar18 < 0x7fff) {
          bStack_19 = (byte)(uVar18 >> 8) | bStack_19 & 0x80;
          uStack_20 = local_10._2_2_;
          uStack_1e = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar18;
        }
        else {
          uStack_20 = 0;
          uStack_1e = 0;
          uVar14 = 0;
          iVar20 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        }
        goto LAB_004202d0;
      }
      iVar20 = 0;
    }
    else {
      iVar20 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1e = 0;
    uStack_20 = 0;
    uStack_1c = (ushort)iVar20;
    local_1a = (undefined1)((uint)iVar20 >> 0x10);
    bStack_19 = (byte)((uint)iVar20 >> 0x18);
    param_2 = 0;
    uVar14 = 0;
  }
LAB_004202d0:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar12 = uVar14;
    do {
      uVar14 = uVar12 << 1;
      iVar3 = CONCAT22(uStack_1e,uStack_20) * 2;
      uStack_20 = (ushort)iVar3 | (ushort)(uVar12 >> 0x1f);
      iVar4 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar4 | uStack_1e >> 0xf;
      local_48 = local_48 + -1;
      uStack_1e = (ushort)((uint)iVar3 >> 0x10);
      local_1a = (undefined1)((uint)iVar4 >> 0x10);
      bStack_19 = (byte)((uint)iVar4 >> 0x18);
      uVar12 = uVar14;
    } while (local_48 != 0);
    if ((iVar20 < 0) && (uVar21 = -iVar20 & 0xff, uVar21 != 0)) {
      do {
        iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar22 = CONCAT22(uStack_1e,uStack_20);
        iVar20 = CONCAT22(uStack_1e,uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_1e = uStack_1e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
        uVar14 = uVar12 >> 1 | iVar20 << 0x1f;
        uVar21 = uVar21 - 1;
        uStack_20 = (ushort)(uVar22 >> 1);
        local_24._0_2_ = (ushort)(uVar12 >> 1);
        local_24._2_2_ = (ushort)(uVar14 >> 0x10);
        uVar12 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar21);
    }
    psVar19 = param_6 + 2;
    psVar15 = psVar19;
    uVar18 = uStack_1e;
    for (iVar20 = param_4 + 1; 0 < iVar20; iVar20 = iVar20 + -1) {
      local_24._2_2_ = (ushort)(uVar14 >> 0x10);
      local_24._0_2_ = (ushort)uVar14;
      iVar1 = CONCAT22(uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar12 = CONCAT22(uVar18,uStack_20) * 2;
      uVar21 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar18 >> 0xf)) * 2 |
               uVar12 >> 0x1f;
      uVar22 = (uVar12 | local_24._2_2_ >> 0xf) * 2 | (uVar14 << 1) >> 0x1f;
      uVar12 = uVar14 * 5;
      if ((uVar12 < uVar14 * 4) || (uVar23 = uVar22, uVar12 < uVar14)) {
        uVar23 = uVar22 + 1;
        bVar5 = false;
        if ((uVar23 < uVar22) || (uVar23 == 0)) {
          bVar5 = true;
        }
        if (bVar5) {
          uVar21 = uVar21 + 1;
        }
      }
      uVar22 = CONCAT22(uVar18,uStack_20) + uVar23;
      if ((uVar22 < uVar23) || (uVar22 < CONCAT22(uVar18,uStack_20))) {
        uVar21 = uVar21 + 1;
      }
      iVar3 = (uVar21 + local_38) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar22 >> 0x1f);
      uVar14 = uVar14 * 10;
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      uStack_20 = (ushort)(uVar22 * 2) | (ushort)(uVar12 >> 0x1f);
      *(char *)psVar15 = (char)((uint)iVar3 >> 0x18) + '0';
      psVar15 = (short *)((int)psVar15 + 1);
      uStack_1e = (ushort)(uVar22 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar18;
      uVar18 = uStack_1e;
    }
    psVar16 = psVar15 + -1;
    uStack_1e = uVar18;
    if (*(char *)((int)psVar15 + -1) < '5') {
      for (; (psVar19 <= psVar16 && ((char)*psVar16 == '0')); psVar16 = (short *)((int)psVar16 + -1)
          ) {
      }
      if (psVar16 < psVar19) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar7 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar19 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_00420498;
      }
    }
    else {
      for (; (psVar19 <= psVar16 && ((char)*psVar16 == '9')); psVar16 = (short *)((int)psVar16 + -1)
          ) {
        *(char *)psVar16 = '0';
      }
      if (psVar16 < psVar19) {
        psVar16 = (short *)((int)psVar16 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar16 = (char)*psVar16 + '\x01';
    }
    cVar13 = ((char)psVar16 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar13;
    *(undefined1 *)(cVar13 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar7 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_00420498:
  uStack_3e = iVar1;
  local_24 = uVar14;
  local_10 = param_2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __hw_cw */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2008 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/* Function: ___hw_cw_sse2 */

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2008 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}



/* Function: __control87 */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2008 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  uVar5 = 0;
  if (DAT_0042b8e4 != 0) {
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}



/* Function: ___ascii_strnicmp */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar5 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00420981;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar5 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00420981:
      _MaxCount = 0xffffffff;
      if (!bVar5) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}



/* Function: __close_nolock */

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_0042a7c0 + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_0042a7c0 + 0x44) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_004209f7;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004209f9;
    }
  }
LAB_004209f7:
  DVar4 = 0;
LAB_004209f9:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}



/* Function: __close */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2008 Release */

int __cdecl __close(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0042a7b4)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0042a7c0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_00420af0();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* Function: FUN_00420af0 */

void FUN_00420af0(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Function: __freebuf */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* Function: ___initconout */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2008 Release */

void __cdecl ___initconout(void)

{
  DAT_004297f4 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/* Function: ___mtold12 */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2008 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_00428870 ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    do {
      uVar2 = *param_3;
      uVar10 = *param_3;
      uVar1 = param_3[1];
      uVar11 = param_3[2];
      uVar9 = param_3[1] * 2;
      bVar4 = false;
      uVar8 = (param_3[2] * 2 | param_3[1] >> 0x1f) * 2 | uVar9 >> 0x1f;
      uVar3 = uVar2 * 4;
      uVar9 = (uVar9 | uVar2 >> 0x1f) * 2 | uVar2 * 2 >> 0x1f;
      uVar2 = uVar3 + uVar10;
      *param_3 = uVar3;
      param_3[1] = uVar9;
      param_3[2] = uVar8;
      if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
        bVar4 = true;
      }
      bVar5 = false;
      *param_3 = uVar2;
      if (bVar4) {
        uVar10 = uVar9 + 1;
        if ((uVar10 < uVar9) || (uVar10 == 0)) {
          bVar5 = true;
        }
        param_3[1] = uVar10;
        if (bVar5) {
          param_3[2] = uVar8 + 1;
        }
      }
      uVar10 = param_3[1] + uVar1;
      bVar4 = false;
      if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
        bVar4 = true;
      }
      param_3[1] = uVar10;
      if (bVar4) {
        param_3[2] = param_3[2] + 1;
      }
      param_3[2] = param_3[2] + uVar11;
      bVar4 = false;
      uVar1 = uVar2 * 2;
      uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
      uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
      *param_3 = uVar1;
      param_3[1] = uVar11;
      param_3[2] = uVar10;
      uVar2 = uVar1 + (int)*param_1;
      if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
        bVar4 = true;
      }
      *param_3 = uVar2;
      if (bVar4) {
        uVar2 = uVar11 + 1;
        bVar4 = false;
        if ((uVar2 < uVar11) || (uVar2 == 0)) {
          bVar4 = true;
        }
        param_3[1] = uVar2;
        if (bVar4) {
          param_3[2] = uVar10 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: ___set_fpsr_sse2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2008 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_0042b8e4 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_00429acc == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/* Function: RtlUnwind */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00420db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* Function: Unwind@00420dc0 */

void Unwind_00420dc0(void)

{
  int unaff_EBP;
  
  FUN_00401c10((int *)(*(int *)(unaff_EBP + -0x50) + 4));
  return;
}



/* Function: Unwind@00420dcb */

void Unwind_00420dcb(void)

{
  int unaff_EBP;
  
  FUN_00408d50(*(int **)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@00420df0 */

void Unwind_00420df0(void)

{
  int unaff_EBP;
  
  FUN_00408d50(*(int **)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@00420e20 */

void Unwind_00420e20(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@00420e50 */

void Unwind_00420e50(void)

{
  int unaff_EBP;
  
  Free((undefined4 *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00420e58 */

void Unwind_00420e58(void)

{
  int unaff_EBP;
  
  Free((undefined4 *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@00420e80 */

void Unwind_00420e80(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@00420eb0 */

void Unwind_00420eb0(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@00420eb8 */

void Unwind_00420eb8(void)

{
  int unaff_EBP;
  
  ~CTempBuffer<>((SchedulerPolicy *)(unaff_EBP + -0x448));
  return;
}



/* Function: Unwind@00420ef0 */

void Unwind_00420ef0(void)

{
  int unaff_EBP;
  
  FUN_00403980(unaff_EBP + -0x24);
  return;
}



/* Function: Unwind@00420f20 */

void Unwind_00420f20(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@00420f50 */

void Unwind_00420f50(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00420f58 */

void Unwind_00420f58(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x140));
  return;
}



/* Function: Unwind@00420f63 */

void Unwind_00420f63(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x114c));
  return;
}



/* Function: Unwind@00420fa0 */

void Unwind_00420fa0(void)

{
  int unaff_EBP;
  
  ~CTempBuffer<>((SchedulerPolicy *)(unaff_EBP + -0x1130));
  return;
}



/* Function: Unwind@00420fab */

void Unwind_00420fab(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x1158));
  return;
}



/* Function: Unwind@00420fb6 */

void Unwind_00420fb6(void)

{
  int unaff_EBP;
  
  ~CTempBuffer<>((SchedulerPolicy *)(unaff_EBP + -0x1270));
  return;
}



/* Function: Unwind@00420ff0 */

void Unwind_00420ff0(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00420ff8 */

void Unwind_00420ff8(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421000 */

void Unwind_00421000(void)

{
  int unaff_EBP;
  
  FUN_00404930((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00421030 */

void Unwind_00421030(void)

{
  int unaff_EBP;
  
  FUN_004115f3(*(void **)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@00421080 */

void Unwind_00421080(void)

{
  int unaff_EBP;
  
  FUN_004115f3(*(void **)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0042108b */

void Unwind_0042108b(void)

{
  FUN_00409ea0();
  return;
}



/* Function: Unwind@00421096 */

void Unwind_00421096(void)

{
  FUN_00409ea0();
  return;
}



/* Function: Unwind@004210c0 */

void Unwind_004210c0(void)

{
  FUN_00409ea0();
  return;
}



/* Function: Unwind@004210cb */

void Unwind_004210cb(void)

{
  FUN_00409ea0();
  return;
}



/* Function: Unwind@00421100 */

void Unwind_00421100(void)

{
  int unaff_EBP;
  
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>::
  ~CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>
            ((CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00421130 */

void Unwind_00421130(void)

{
  FUN_00409ea0();
  return;
}



/* Function: Unwind@0042113b */

void Unwind_0042113b(void)

{
  int unaff_EBP;
  
  Concurrency::SchedulerPolicy::~SchedulerPolicy(*(SchedulerPolicy **)(unaff_EBP + -0xac));
  return;
}



/* Function: Unwind@004211a0 */

void Unwind_004211a0(void)

{
  int unaff_EBP;
  
  FUN_0040d920((void *)(unaff_EBP + -0x50));
  return;
}



/* Function: Unwind@004211d0 */

void Unwind_004211d0(void)

{
  int unaff_EBP;
  
  exception::~exception(*(exception **)(unaff_EBP + -0x7c));
  return;
}



/* Function: Unwind@004212bb */

void Unwind_004212bb(void)

{
  int unaff_EBP;
  
  FUN_0040d920((void *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_00421300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421300(void)

{
  FUN_0040a080(0x429b30);
  _DAT_00429b04 = &DAT_00429b30;
  _DAT_00429b30 = CServiceModule::vftable;
  _atexit(FUN_00421370);
  return;
}



/* Function: FUN_00421370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421370(void)

{
  _DAT_00429b30 = ATL::CComModule::vftable;
  FUN_0040a2a0(0x429b30);
  return;
}



/* Function: FUN_0042138e */

void FUN_0042138e(void)

{
  FUN_004112b4(0x429c8c);
  return;
}



/* Function: FUN_00421398 */

void FUN_00421398(void)

{
  FUN_0041130c((int *)&DAT_00429cc4);
  return;
}



