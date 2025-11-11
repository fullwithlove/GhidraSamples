/* generated suspicious slices */

/* ==== slice[0] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:1-37 ==== */
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

/* ==== slice[1] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:13-73 ==== */
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


/* ==== slice[2] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:74-134 ==== */
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

/* ==== slice[3] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:101-161 ==== */
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



/* ==== slice[4] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:143-203 ==== */
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

/* ==== slice[5] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:223-283 ==== */
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


/* ==== slice[6] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:376-436 ==== */
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

/* ==== slice[7] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:451-511 ==== */
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


/* ==== slice[8] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:487-547 ==== */



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

/* ==== slice[9] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:536-596 ==== */
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

/* ==== slice[10] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:581-641 ==== */
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

/* ==== slice[11] file:347b5474c93b1bba28e78ddebd3387b88ebb4355188e877576cd3575193b31e9.c trigger:indirect_call severity:mid lines:616-676 ==== */
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

