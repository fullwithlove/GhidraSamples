/* Function: FUN_00402520 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00402520(void)

{
  PTR_PTR_00405000 = (undefined *)&PTR_FUN_00401504;
  FUN_00403b1f(FUN_00404620);
  return;
}



/* Function: FUN_00402560 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00402560(void)

{
  PTR_PTR_00405008 = (undefined *)&PTR_FUN_0040151c;
  FUN_00403b1f(FUN_004045f0);
  return;
}



/* Function: FUN_004025b0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004025b0(void)

{
  PTR_PTR_00405004 = (undefined *)&PTR_FUN_00401534;
  FUN_00403b1f(FUN_004045c0);
  return;
}



/* Function: length */

/* Library Function - Single Match
    public: static unsigned int __cdecl std::char_traits<char>::length(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

uint __cdecl std::char_traits<char>::length(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (*param_1 == '\0') {
    return 0;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}



/* Function: FUN_0040261b */

void __fastcall FUN_0040261b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004014ec;
  return;
}



/* Function: FUN_00402630 */

undefined4 * __thiscall FUN_00402630(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004014ec;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: operator== */

/* Library Function - Single Match
    public: bool __thiscall std::error_condition::operator==(class std::error_condition const
   &)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall std::error_condition::operator==(error_condition *this,error_condition *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_00402680 */

void __thiscall FUN_00402680(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



/* Function: FUN_004026a0 */

void __thiscall FUN_004026a0(void *this,undefined4 param_1,error_condition *param_2)

{
  code *pcVar1;
  error_condition *this_00;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_004060f0)(&local_c,param_1);
  this_00 = (error_condition *)(*pcVar1)();
  std::error_condition::operator==(this_00,param_2);
  return;
}



/* Function: equivalent */

/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_00402710 */

char * FUN_00402710(void)

{
  return "generic";
}



/* Function: FUN_00402720 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00402720(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040370c(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_00402770 */

undefined4 * __thiscall FUN_00402770(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004042e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_004014ec;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_004027cb */

void __fastcall FUN_004027cb(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004014ec;
  return;
}



/* Function: FUN_00402810 */

char * FUN_00402810(void)

{
  return "iostream";
}



/* Function: FUN_00402820 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00402820(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  if (param_2 == 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (param_1,"iostream stream error");
  }
  else {
    FUN_00402720(param_1,param_2);
  }
  return param_1;
}



/* Function: FUN_00402870 */

undefined4 * __thiscall FUN_00402870(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00404350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_004014ec;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_004028d0 */

char * FUN_004028d0(void)

{
  return "system";
}



/* Function: FUN_004028e0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004028e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040373e(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_00402930 */

int * FUN_00402930(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404373;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0040370c(param_2);
  *param_1 = param_2;
  if (iVar1 == 0) {
    param_1[1] = (int)&PTR_PTR_00405004;
  }
  else {
    param_1[1] = (int)&PTR_PTR_00405000;
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00402995 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00402995(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  wchar_t ******ppppppwVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  longlong lVar5;
  DWORD DVar6;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  wchar_t *****local_44 [5];
  uint local_30;
  wchar_t *****local_2c [5];
  uint local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x4029a1;
  local_50 = param_4;
  local_54 = 0;
  local_4c = 0;
  iStack_48 = 0;
  local_5c = 0;
  local_58 = 0;
  if (param_3 < 2) goto LAB_00402b1c;
  FUN_00402b7e(local_44,*(short **)(param_4 + 4));
  iVar3 = iStack_48;
  local_8 = 0;
  iVar1 = local_4c;
  if (2 < param_3) {
    iVar4 = 2;
    iStack_48 = local_4c;
    do {
      FUN_00402b7e(local_2c,*(short **)(local_50 + iVar4 * 4));
      local_8 = CONCAT31(local_8._1_3_,1);
      ppppppwVar2 = local_2c;
      if (7 < local_18) {
        ppppppwVar2 = (wchar_t ******)local_2c[0];
      }
      iVar1 = _wcsicmp((wchar_t *)ppppppwVar2,L"-mionly");
      lVar5 = CONCAT44(iVar3,iStack_48);
      if (iVar1 == 0) {
        local_54 = 1;
      }
      else {
        ppppppwVar2 = local_2c;
        if (7 < local_18) {
          ppppppwVar2 = (wchar_t ******)local_2c[0];
        }
        iVar1 = _wcsicmp((wchar_t *)ppppppwVar2,L"-timeout");
        lVar5 = CONCAT44(iVar3,iStack_48);
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
          if ((param_3 <= iVar4) || (iVar3 = NtQuerySystemTime(&local_5c), iVar3 < 0)) {
            local_8 = local_8 & 0xffffff00;
            FUN_00402c16(local_2c,'\x01',0);
            goto LAB_00402b0b;
          }
          lVar5 = _wtoi64(*(wchar_t **)(local_50 + iVar4 * 4));
          lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x61c46800,8);
          lVar5 = lVar5 + CONCAT44(local_58,local_5c);
        }
      }
      iVar3 = (int)((ulonglong)lVar5 >> 0x20);
      iStack_48 = (int)lVar5;
      local_8 = local_8 & 0xffffff00;
      FUN_00402c16(local_2c,'\x01',0);
      iVar4 = iVar4 + 1;
      iVar1 = iStack_48;
    } while (iVar4 < param_3);
  }
  ppppppwVar2 = local_44;
  if (7 < local_30) {
    ppppppwVar2 = (wchar_t ******)local_44[0];
  }
  iVar4 = _wcsicmp((wchar_t *)ppppppwVar2,L"start");
  if (iVar4 == 0) {
    if (local_54 == 0) {
      FUN_004033b7(L"ENABLED");
    }
    if (iVar1 != 0 || iVar3 != 0) {
      FUN_004033b7(L"TIMEOUT");
    }
    DVar6 = 2;
LAB_00402b57:
    FUN_00403415(DVar6);
  }
  else {
    ppppppwVar2 = local_44;
    if (7 < local_30) {
      ppppppwVar2 = (wchar_t ******)local_44[0];
    }
    iVar3 = _wcsicmp((wchar_t *)ppppppwVar2,L"stop");
    if (iVar3 == 0) {
      FUN_004033b7(L"ENABLED");
      DVar6 = 3;
      goto LAB_00402b57;
    }
  }
LAB_00402b0b:
  local_8 = 0xffffffff;
  FUN_00402c16(local_44,'\x01',0);
  param_1 = extraout_ECX;
  param_2 = extraout_EDX;
LAB_00402b1c:
  FUN_00403c02(param_1,param_2);
  return;
}



/* Function: FUN_00402b6e */

void __fastcall FUN_00402b6e(void *param_1)

{
  FUN_00402c16(param_1,'\x01',0);
  return;
}



/* Function: FUN_00402b7e */

undefined4 * __thiscall FUN_00402b7e(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  if (*param_1 != 0) {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  }
  FUN_00402cdd((undefined4 *)this,(undefined4 *)param_1,uVar3);
  return (undefined4 *)this;
}



/* Function: FUN_00402bcf */

void __fastcall FUN_00402bcf(void *param_1)

{
  FUN_00402c67(param_1,'\x01',0);
  return;
}



/* Function: basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> */

/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  uVar1 = char_traits<char>::length(param_1);
  FUN_00402da9(this,(undefined4 *)param_1,uVar1);
  return this;
}



/* Function: FUN_00402c16 */

void __thiscall FUN_00402c16(void *this,char param_1,int param_2)

{
  void *_Src;
  
  if ((param_1 != '\0') && (7 < *(uint *)((int)this + 0x14))) {
                    /* WARNING: Load size is inaccurate */
    _Src = *this;
    if (param_2 != 0) {
      memcpy(this,_Src,param_2 * 2);
    }
    operator_delete(_Src);
  }
  *(undefined4 *)((int)this + 0x14) = 7;
  FUN_00402cb6(this,param_2);
  return;
}



/* Function: FUN_00402c67 */

void __thiscall FUN_00402c67(void *this,char param_1,size_t param_2)

{
  void *_Src;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
                    /* WARNING: Load size is inaccurate */
    _Src = *this;
    if (param_2 != 0) {
      memcpy(this,_Src,param_2);
    }
    operator_delete(_Src);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  FUN_00402d84(this,param_2);
  return;
}



/* Function: FUN_00402cb6 */

void __thiscall FUN_00402cb6(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = *this;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined2 *)((int)pvVar1 + param_1 * 2) = 0;
  return;
}



/* Function: FUN_00402cdd */

undefined4 * __thiscall FUN_00402cdd(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar2 = (undefined4 *)*param_1;
      }
      if (param_2 < (undefined4 *)((int)puVar2 + param_1[4] * 2)) {
        puVar2 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        FUN_00402e80(param_1,param_1,(int)param_2 - (int)puVar2 >> 1,param_3);
        return extraout_ECX;
      }
    }
  }
  bVar1 = FUN_00402e30(param_1,param_3);
  puVar2 = extraout_ECX_00;
  if (bVar1) {
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    if (param_3 != 0) {
      memcpy(puVar2,param_2,param_3 * 2);
    }
    FUN_00402cb6(param_1,param_3);
    puVar2 = extraout_ECX_01;
  }
  return puVar2;
}



/* Function: FUN_00402d73 */

void FUN_00402d73(void)

{
  code *pcVar1;
  
  FUN_004036e4("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402d84 */

void __thiscall FUN_00402d84(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = *this;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined1 *)((int)pvVar1 + param_1) = 0;
  return;
}



/* Function: FUN_00402da9 */

undefined4 * __thiscall FUN_00402da9(void *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = FUN_00402f50(this,param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00402f91(this,param_2,'\0');
    if (bVar1) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      if (param_2 != 0) {
        memcpy(pvVar3,param_1,param_2);
      }
      FUN_00402d84(this,param_2);
    }
  }
  else {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    this = FUN_00402ff9(this,(undefined4 *)this,(int)param_1 - (int)pvVar3,param_2);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402e1f */

void FUN_00402e1f(void)

{
  code *pcVar1;
  
  FUN_004036bc("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402e30 */

bool __thiscall FUN_00402e30(void *this,uint param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  if (param_1 < 0x7fffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_00403085(this,param_1);
    }
    else if (param_1 == 0) {
      puVar3 = (undefined2 *)this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        puVar3 = *this;
      }
      *(undefined4 *)((int)this + 0x10) = 0;
      *puVar3 = 0;
    }
    return param_1 != 0;
  }
  FUN_00402e1f();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_00402e80 */

undefined4 * __thiscall FUN_00402e80(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  
  if (param_2 <= (uint)param_1[4]) {
    uVar6 = param_1[4] - param_2;
    if (param_3 < uVar6) {
      uVar6 = param_3;
    }
    if ((undefined4 *)this == param_1) {
      if (*(uint *)((int)this + 0x10) < uVar6 + param_2) goto LAB_00402f44;
      FUN_00402cb6(this,uVar6 + param_2);
      if (*(uint *)((int)this + 0x10) <= param_2) {
        puVar3 = (undefined2 *)this;
        if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
          puVar3 = *this;
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *puVar3 = 0;
        return (undefined4 *)this;
      }
      if (param_2 == 0) {
        return (undefined4 *)this;
      }
      pvVar5 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar5 = *this;
      }
      uVar6 = *(uint *)((int)this + 0x10) - param_2;
      if (uVar6 != 0) {
        memmove(pvVar5,(void *)((int)pvVar5 + param_2 * 2),uVar6 * 2);
      }
    }
    else {
      bVar2 = FUN_00402e30(this,uVar6);
      if (!bVar2) {
        return (undefined4 *)this;
      }
      if (7 < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      pvVar5 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar5 = *this;
      }
      if (uVar6 != 0) {
        memcpy(pvVar5,(void *)((int)param_1 + param_2 * 2),uVar6 * 2);
      }
    }
    FUN_00402cb6(this,uVar6);
    return (undefined4 *)this;
  }
LAB_00402f44:
  FUN_00402d73();
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}



/* Function: FUN_00402f50 */

uint __thiscall FUN_00402f50(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    in_EAX = (undefined4 *)this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      in_EAX = *this;
    }
    if (in_EAX <= param_1) {
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar2 = *this;
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x10) + (int)pvVar2);
      return CONCAT31((int3)((uint)puVar1 >> 8),param_1 < puVar1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



/* Function: FUN_00402f91 */

bool __thiscall FUN_00402f91(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 0xffffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_0040317e(this,param_1);
    }
    else if ((param_2 == '\0') || (0xf < param_1)) {
      if (param_1 == 0) {
        puVar4 = (undefined1 *)this;
        if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
          puVar4 = *this;
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *puVar4 = 0;
      }
    }
    else {
      uVar3 = *(uint *)((int)this + 0x10);
      if (param_1 < *(uint *)((int)this + 0x10)) {
        uVar3 = param_1;
      }
      FUN_00402c67(this,'\x01',uVar3);
    }
    return param_1 != 0;
  }
  FUN_00402e1f();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_00402ff9 */

undefined4 * __thiscall FUN_00402ff9(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  undefined4 *puVar3;
  uint _Size;
  
  if ((uint)param_1[4] < param_2) {
    FUN_00402d73();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  _Size = param_1[4] - param_2;
  if (param_3 < _Size) {
    _Size = param_3;
  }
  if ((undefined4 *)this == param_1) {
    FUN_004032eb(this,param_2 + _Size);
    FUN_0040327a(this,0,param_2);
  }
  else {
    bVar2 = FUN_00402f91(this,_Size,'\0');
    if (bVar2) {
      if (0xf < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      _Dst = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        _Dst = *this;
      }
      if (_Size != 0) {
        memcpy(_Dst,(void *)(param_2 + (int)param_1),_Size);
      }
      FUN_00402d84(this,_Size);
    }
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403085 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_00403085(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = 0x7ffffffe, uVar1 <= 0x7ffffffe - uVar2)) {
      param_1 = uVar2 + uVar1;
    }
  }
  FUN_00403314(param_1 + 1);
  FUN_0040311b();
  return;
}



/* Function: Catch@004030ea */

undefined * Catch_004030ea(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00403314(*(int *)(unaff_EBP + 8) + 1);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return &DAT_0040310e;
}



/* Function: FUN_0040311b */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040311b(void)

{
  undefined4 *_Src;
  void *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _Src = unaff_EDI;
    if (7 < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    memcpy(unaff_EBX,_Src,*(int *)(unaff_EBP + 0xc) * 2);
  }
  FUN_00402c16(unaff_EDI,'\x01',0);
  *unaff_EDI = unaff_EBX;
  unaff_EDI[5] = unaff_ESI;
  FUN_00402cb6(unaff_EDI,*(int *)(unaff_EBP + 0xc));
  return;
}



/* Function: Catch@0040315d */

void Catch_0040315d(void)

{
  int unaff_EBP;
  
  FUN_00402c16(*(void **)(unaff_EBP + -0x18),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0040317e */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_0040317e(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if (uVar3 / 3 < uVar2) {
      if (-uVar2 - 2 < uVar1) {
        param_1 = 0xfffffffe;
      }
      else {
        param_1 = uVar2 + uVar1;
      }
    }
  }
  FUN_0040334a(param_1 + 1);
  FUN_00403218();
  return;
}



/* Function: Catch@004031e4 */

undefined * Catch_004031e4(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040334a(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return &DAT_0040320b;
}



/* Function: FUN_00403218 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00403218(void)

{
  undefined4 *_Src;
  void *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _Src = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    memcpy(unaff_EBX,_Src,*(size_t *)(unaff_EBP + 0xc));
  }
  FUN_00402c67(unaff_EDI,'\x01',0);
  *unaff_EDI = unaff_EBX;
  unaff_EDI[5] = unaff_ESI;
  FUN_00402d84(unaff_EDI,*(int *)(unaff_EBP + 0xc));
  return;
}



/* Function: Catch@00403259 */

void Catch_00403259(void)

{
  int unaff_EBP;
  
  FUN_00402c67(*(void **)(unaff_EBP + -0x1c),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0040327a */

undefined4 * __thiscall FUN_0040327a(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t _Size;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_00402d73();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      _Size = (uVar1 - param_2) - param_1;
      if (_Size != 0) {
        memmove((void *)((int)pvVar3 + param_1),(void *)((int)((int)pvVar3 + param_1) + param_2),
                _Size);
      }
      FUN_00402d84(this,uVar1 - param_2);
    }
  }
  else {
    FUN_00402d84(this,param_1);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004032eb */

void * __thiscall FUN_004032eb(void *this,uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    FUN_00402d84(this,param_1);
    return this;
  }
  FUN_00402d73();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



/* Function: FUN_00403314 */

int FUN_00403314(uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x80000000) && (iVar2 = FUN_004034f0(param_1 * 2), iVar2 != 0)) {
    return iVar2;
  }
  FUN_00403697();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: FUN_0040334a */

void FUN_0040334a(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_004034f0(param_1);
    if (iVar2 == 0) {
      FUN_00403697();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* Function: FUN_00403373 */

void __fastcall FUN_00403373(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404540;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  RegCloseKey((HKEY)*param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004033b7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

LSTATUS __fastcall FUN_004033b7(LPCWSTR param_1)

{
  LSTATUS LVar1;
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4033c3;
  LVar1 = RegCreateKeyW((HKEY)0x80000002,
                        L"System\\CurrentControlSet\\Control\\AppID\\Configuration\\SMARTLOCKER",
                        local_14);
  if (LVar1 == 0) {
    local_8 = 0;
    LVar1 = RegSetValueExW(local_14[0],param_1,0,0xb,&stack0x00000004,8);
    local_8 = 0xffffffff;
    RegCloseKey(local_14[0]);
  }
  return LVar1;
}



/* Function: FUN_00403415 */

void __fastcall FUN_00403415(DWORD param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  _SERVICE_STATUS local_24;
  uint local_8;
  
  local_8 = DAT_004050c0 ^ (uint)&stack0xfffffffc;
  hSCManager = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,1);
  if (hSCManager == (SC_HANDLE)0x0) {
    GetLastError();
    uVar2 = extraout_EDX;
    goto LAB_004034da;
  }
  hService = OpenServiceW(hSCManager,L"applockerfltr",0x32);
  if (hService == (SC_HANDLE)0x0) {
    GetLastError();
  }
  else {
    BVar1 = ChangeServiceConfigW
                      (hService,0xffffffff,param_1,0xffffffff,(LPCWSTR)0x0,(LPCWSTR)0x0,(LPDWORD)0x0
                       ,(LPCWSTR)0x0,(LPCWSTR)0x0,(LPCWSTR)0x0,(LPCWSTR)0x0);
    if (BVar1 == 0) {
LAB_004034c1:
      GetLastError();
    }
    else if (param_1 == 2) {
      BVar1 = StartServiceW(hService,0,(LPCWSTR *)0x0);
      if (BVar1 == 0) {
        GetLastError();
      }
    }
    else if ((param_1 == 3) && (BVar1 = ControlService(hService,1,&local_24), BVar1 == 0))
    goto LAB_004034c1;
    CloseServiceHandle(hService);
  }
  CloseServiceHandle(hSCManager);
  uVar2 = extraout_EDX_00;
LAB_004034da:
  FUN_00403a60(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_004034f0 */

void __cdecl FUN_004034f0(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  FUN_00403697();
  return;
}



/* Function: FUN_00403520 */

exception * __thiscall FUN_00403520(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401000;
  return (exception *)this;
}



/* Function: FUN_00403547 */

exception * __fastcall FUN_00403547(exception *param_1)

{
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404593;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = "bad allocation";
  exception::exception(param_1,&local_14,1);
  *(undefined ***)param_1 = &PTR_FUN_00401000;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_004035b0 */

exception * __thiscall FUN_004035b0(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401008;
  return (exception *)this;
}



/* Function: FUN_004035d7 */

exception * __thiscall FUN_004035d7(void *this,char *param_1)

{
  char *local_8;
  
  local_8 = param_1;
  exception::exception((exception *)this,&local_8);
  *(undefined ***)this = &PTR_FUN_00401008;
  return (exception *)this;
}



/* Function: FUN_00403610 */

void __fastcall FUN_00403610(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00401000;
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00403630 */

void __fastcall FUN_00403630(exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00403bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00403640 */

exception * __thiscall FUN_00403640(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401000;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_00403670 */

exception * __thiscall FUN_00403670(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_00403697 */

void FUN_00403697(void)

{
  exception local_10 [12];
  
  FUN_00403547(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004049b4);
}



/* Function: FUN_004036bc */

void FUN_004036bc(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_004035d7(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00404a24);
}



/* Function: FUN_004036e4 */

void FUN_004036e4(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_004035d7(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00404a60);
}



/* Function: FUN_0040370c */

int __cdecl FUN_0040370c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_00401268;
  if (PTR_s_address_family_not_supported_0040126c != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: FUN_0040373e */

int __cdecl FUN_0040373e(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_00401010;
  if (PTR_s_permission_denied_00401014 != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: FUN_00403770 */

undefined4 FUN_00403770(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_004039cf();
  DAT_0040514c = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00403df4(1);
  __set_app_type(iVar2);
  DAT_0040549c = 0xffffffff;
  DAT_004054a0 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_00405160;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00405154;
  FUN_00403e50();
  if (DAT_00405104 == 0) {
    __setusermatherr(FUN_00403e50);
  }
  FUN_00404057();
  return 0;
}



/* Function: FUN_004037e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037e0(void)

{
  _DAT_00405150 = DAT_0040515c;
  _DAT_00405148 =
       __wgetmainargs(&DAT_0040513c,(wchar_t ***)&DAT_00405140,(wchar_t ***)&DAT_00405144,
                      DAT_00405158,(_startupinfo *)&DAT_00405150);
  return;
}



/* Function: FUN_00403819 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00403819(void)

{
  bool bVar1;
  code *pcVar2;
  code **ppcVar3;
  code **ppcVar4;
  BOOL BVar5;
  code **extraout_ECX;
  undefined4 **ppuVar6;
  undefined4 **extraout_EDX;
  undefined4 **extraout_EDX_00;
  undefined4 **extraout_EDX_01;
  undefined4 **extraout_EDX_02;
  undefined8 uVar7;
  undefined4 **ppuVar8;
  void *local_14;
  
  ppuVar8 = *(undefined4 ***)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    ppuVar6 = &DAT_00405494;
    ppcVar4 = (code **)0x0;
    LOCK();
    ppcVar3 = (code **)ppuVar8;
    if (DAT_00405494 != (undefined4 *)0x0) {
      ppcVar4 = (code **)DAT_00405494;
      ppcVar3 = (code **)DAT_00405494;
    }
    DAT_00405494 = ppcVar3;
    UNLOCK();
    if (ppcVar4 == (code **)0x0) goto LAB_00403861;
    if (ppcVar4 == (code **)ppuVar8) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00403861:
  if (DAT_00405498 == 1) {
    ppuVar8 = (undefined4 **)0x1f;
    _amsg_exit(0x1f);
    ppuVar6 = extraout_EDX;
  }
  else if (DAT_00405498 == 0) {
    DAT_00405498 = 1;
    ppuVar8 = (undefined4 **)&DAT_00401634;
    uVar7 = FUN_00403998((undefined4 *)&DAT_00401628,(undefined4 *)&DAT_00401634);
    ppuVar6 = (undefined4 **)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00405138 = 1;
  }
  if (DAT_00405498 == 1) {
    ppuVar8 = (undefined4 **)&DAT_00401624;
    initterm(&DAT_00401610);
    DAT_00405498 = 2;
    ppuVar6 = extraout_EDX_00;
  }
  if (!bVar1) {
    ppuVar8 = &DAT_00405494;
    LOCK();
    DAT_00405494 = (undefined4 *)0x0;
    UNLOCK();
  }
  if (DAT_004054a4 != (code *)0x0) {
    ppuVar8 = (undefined4 **)&DAT_004054a4;
    BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004054a4);
    pcVar2 = DAT_004054a4;
    ppuVar6 = extraout_EDX_01;
    if (BVar5 != 0) {
      (*(code *)PTR_guard_check_icall_004060f0)(0,2,0);
      (*pcVar2)();
      ppuVar8 = (undefined4 **)extraout_ECX;
      ppuVar6 = extraout_EDX_02;
    }
  }
  DAT_00405134 = FUN_00402995(ppuVar8,ppuVar6,DAT_0040513c,DAT_00405140);
  if (DAT_0040514c != 0) {
    if (DAT_00405138 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00405134;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00405134);
}



/* Function: FUN_00403998 */

void __cdecl FUN_00403998(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004060f0)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_004039cf */

bool FUN_004039cf(void)

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
  FUN_00403fb9();
  FUN_00403819();
  return;
}



/* Function: FUN_00403a60 */

void __fastcall FUN_00403a60(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_004050c0) {
    return;
  }
  FUN_0040410b(param_1,param_2);
  return;
}



/* Function: FUN_00403a76 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_00403a76(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00404ac0;
  uStack_c = 0x403a82;
  local_20[0] = DAT_004054a0;
  if (DAT_004054a0 == -1) {
    (*(code *)PTR_guard_check_icall_004060f0)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_004054a0;
    local_24 = DAT_0040549c;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_004054a0 = local_20[0];
    DAT_0040549c = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_00403b10();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_00403b10 */

void FUN_00403b10(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_00403b1f */

int __cdecl FUN_00403b1f(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_00403a76(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: operator_delete */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00403b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: FUN_00403b60 */

void __cdecl
FUN_00403b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_004050c0,FUN_00403a60,param_1,param_2,param_3,param_4);
  return;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00403b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00403ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1,param_2);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00403bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: ~exception */

void __thiscall exception::~exception(exception *this)

{
                    /* WARNING: Could not recover jumptable at 0x00403bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~exception(this);
  return;
}



/* Function: what */

char * __thiscall exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00403bdc. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: __EH_epilog3 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* Function: FUN_00403c02 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00403c02(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_00403a60(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP,param_2);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004050c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __EH_prolog3_GS */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_GS
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_GS(int param_1)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004050c0 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004050c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_00403ce0 */

type_info * __thiscall FUN_00403ce0(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (type_info *)this;
}



/* Function: FUN_00403d10 */

undefined4 FUN_00403d10(int *param_1)

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



/* Function: FUN_00403d60 */

undefined4 FUN_00403d60(void)

{
  SetUnhandledExceptionFilter(FUN_00403d10);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00403d80 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00403d80(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00403df4 */

undefined4 __cdecl FUN_00403df4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00403d80(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00403e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00403e50 */

undefined4 FUN_00403e50(void)

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
  
  pcStack_10 = FUN_00403b60;
  local_14 = ExceptionList;
  local_c = DAT_004050c0 ^ 0x404b00;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00403f80((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00403f80 */

bool __cdecl FUN_00403f80(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00403fb9 */

void FUN_00403fb9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_004050c0 == 0xbb40e64e) || ((DAT_004050c0 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_004050c0 & 0xffff0000, DAT_004050c0 = local_8, uVar1 == 0)) {
      DAT_004050c0 = 0xbb40e64f;
    }
  }
  DAT_00405100 = ~DAT_004050c0;
  return;
}



/* Function: FUN_00404057 */

void FUN_00404057(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404070. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004050c0 ^ (uint)&param_2;
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



/* Function: FUN_004040db */

void __cdecl FUN_004040db(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040410b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040410b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00405278 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040527c = &stack0x00000004;
  _DAT_004051b8 = 0x10001;
  _DAT_00405168 = 0xc0000409;
  _DAT_0040516c = 1;
  _DAT_00405178 = 3;
  DAT_0040517c = 2;
  DAT_00405180 = DAT_004050c0;
  DAT_00405184 = DAT_00405100;
  uStack_c = DAT_004050c0;
  uStack_8 = DAT_00405100;
  _DAT_00405174 = unaff_retaddr;
  _DAT_00405244 = in_GS;
  _DAT_00405248 = in_FS;
  _DAT_0040524c = in_ES;
  _DAT_00405250 = in_DS;
  _DAT_00405254 = unaff_EDI;
  _DAT_00405258 = unaff_ESI;
  _DAT_0040525c = unaff_EBX;
  _DAT_00405260 = param_2;
  _DAT_00405264 = param_1;
  _DAT_00405268 = in_EAX;
  _DAT_0040526c = unaff_EBP;
  DAT_00405270 = unaff_retaddr;
  _DAT_00405274 = in_CS;
  _DAT_00405280 = in_SS;
  FUN_004040db((_EXCEPTION_POINTERS *)&PTR_DAT_004014e4);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040421f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040422b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404243. Too many branches */
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



/* Function: Unwind@0040429a */

void Unwind_0040429a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402bcf(*(void **)(unaff_EBP + 8));
    return;
  }
  return;
}



/* Function: Unwind@004042db */

void Unwind_004042db(void)

{
  int unaff_EBP;
  
  FUN_0040261b(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0040430b */

void Unwind_0040430b(void)

{
  int unaff_EBP;
  
  FUN_0040261b(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0040433b */

void Unwind_0040433b(void)

{
  int unaff_EBP;
  
  FUN_004027cb(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00404343 */

void Unwind_00404343(void)

{
  int unaff_EBP;
  
  FUN_0040261b(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00404396 */

void Unwind_00404396(void)

{
  int unaff_EBP;
  
  FUN_00402b6e((void *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@0040439e */

void Unwind_0040439e(void)

{
  int unaff_EBP;
  
  FUN_00402b6e((void *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0040441e */

void Unwind_0040441e(void)

{
  FUN_0040261b(&PTR_PTR_00405000);
  return;
}



/* Function: Unwind@00404450 */

void Unwind_00404450(void)

{
  FUN_0040261b(&PTR_PTR_00405008);
  return;
}



/* Function: Unwind@0040445a */

void Unwind_0040445a(void)

{
  FUN_004027cb(&PTR_PTR_00405008);
  return;
}



/* Function: Unwind@0040448c */

void Unwind_0040448c(void)

{
  FUN_0040261b(&PTR_PTR_00405004);
  return;
}



/* Function: Unwind@00404496 */

void Unwind_00404496(void)

{
  FUN_004027cb(&PTR_PTR_00405004);
  return;
}



/* Function: Unwind@004044c8 */

void Unwind_004044c8(void)

{
  FUN_004027cb(&PTR_PTR_00405004);
  return;
}



/* Function: Unwind@004044d2 */

void Unwind_004044d2(void)

{
  FUN_0040261b(&PTR_PTR_00405004);
  return;
}



/* Function: Unwind@00404504 */

void Unwind_00404504(void)

{
  FUN_004027cb(&PTR_PTR_00405008);
  return;
}



/* Function: Unwind@0040450e */

void Unwind_0040450e(void)

{
  FUN_0040261b(&PTR_PTR_00405008);
  return;
}



/* Function: Unwind@00404563 */

void Unwind_00404563(void)

{
  int unaff_EBP;
  
  FUN_00403373((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* Function: FUN_004045c0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004045c0(void)

{
  PTR_PTR_00405004 = (undefined *)&PTR_FUN_004014ec;
  return &LAB_004044e1;
}



/* Function: FUN_004045f0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004045f0(void)

{
  PTR_PTR_00405008 = (undefined *)&PTR_FUN_004014ec;
  return &LAB_0040451d;
}



/* Function: FUN_00404620 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00404620(void)

{
  PTR_PTR_00405000 = (undefined *)&PTR_FUN_004014ec;
  return &LAB_0040442d;
}



