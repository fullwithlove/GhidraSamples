/* Function: FUN_00401536 */

undefined4 __cdecl FUN_00401536(wchar_t *param_1,uint param_2,wchar_t *param_3)

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



/* Function: FUN_0040159d */

undefined4 __cdecl FUN_0040159d(char *param_1,uint param_2,char *param_3)

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



/* Function: FUN_00401602 */

void __cdecl FUN_00401602(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar9;
  undefined4 extraout_ECX_04;
  uint uVar10;
  undefined4 extraout_EDX;
  DWORD DVar11;
  undefined4 extraout_EDX_00;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint unaff_ESI;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined4 uStack_1d4;
  int iStack_1d0;
  byte *local_1cc;
  undefined4 *local_1c8;
  undefined1 uStack_1c4;
  undefined3 uStack_1c3;
  undefined1 auStack_1b8 [404];
  wchar_t awStack_24 [8];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_00405040 ^ (uint)&uStack_1d4;
  local_1c8 = param_2;
  iVar15 = 0;
  uStack_1d4 = (byte *)(uint)CONCAT12(1,(undefined2)uStack_1d4);
  local_1cc = (byte *)0x0;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  GetConsoleOutputCP();
  iVar6 = FUN_00401536(awStack_24,0xc,L".%u");
  if (iVar6 == 0) {
    _wsetlocale(0,awStack_24);
  }
  SetThreadPreferredUILanguages(0x100,(PCZZWSTR)0x0,(PULONG)0x0);
  DAT_00405c70 = *local_1c8;
  iVar6 = Ordinal_115(0x101,auStack_1b8);
  if (iVar6 != 0) {
    FUN_004035ed(2,0x2719);
    goto LAB_004016bf;
  }
  if (param_1 < 2) goto LAB_0040188e;
  uVar10 = unaff_ESI >> 0x10 & 0xff;
  iVar6 = 1;
  pbVar13 = (byte *)0x0;
  pbVar16 = (byte *)0x0;
  do {
    pbVar1 = *(byte **)(iStack_1d0 + iVar6 * 4);
    pbVar14 = pbVar13;
    pbVar17 = pbVar16;
    pbVar3 = uStack_1d4;
    if ((*pbVar1 == 0x2d) || (*pbVar1 == 0x2f)) {
      local_1cc = pbVar1 + 1;
      bVar4 = *local_1cc;
      if (bVar4 != 0) {
        do {
          iVar7 = toupper((int)(char)bVar4);
          if (iVar7 == 0x41) {
LAB_0040176f:
            iVar15 = 1;
          }
          else if (iVar7 == 0x44) {
            iVar15 = 3;
          }
          else {
            if (iVar7 == 0x47) goto LAB_0040176f;
            if (iVar7 == 0x4e) {
              unaff_ESI = CONCAT13(1,(int3)unaff_ESI);
            }
            else {
              if (iVar7 == 0x53) {
                iVar15 = 2;
                goto LAB_00401772;
              }
              if (iVar7 != 0x56) goto LAB_0040188e;
              unaff_ESI = unaff_ESI & 0xff000000;
            }
            if (iVar15 == 0) goto LAB_0040188e;
          }
LAB_00401772:
          local_1cc = local_1cc + 1;
          bVar4 = *local_1cc;
        } while (bVar4 != 0);
        uVar10 = unaff_ESI >> 0x10;
        pbVar3 = uStack_1d4;
      }
    }
    else {
      pbVar17 = pbVar1;
      if (((pbVar16 != (byte *)0x0) && (pbVar14 = pbVar1, pbVar17 = pbVar16, pbVar13 != (byte *)0x0)
          ) && (pbVar14 = pbVar13, pbVar3 = pbVar1, uStack_1d4 != (byte *)0x0)) goto LAB_0040188e;
    }
    uStack_1d4 = pbVar3;
    iVar6 = iVar6 + 1;
    _uStack_1c4 = CONCAT31(uStack_1c3,(char)uVar10);
    local_1c8 = (undefined4 *)CONCAT31(local_1c8._1_3_,(char)(uVar10 >> 8));
    pbVar13 = pbVar14;
    pbVar16 = pbVar17;
  } while (iVar6 < param_1);
  iVar6 = GetIpForwardTable(0,&stack0xfffffe28,0);
  if (iVar6 != 0x7a) {
    FUN_004035ed(2,0x2724);
LAB_004016bf:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar18 = FUN_0040262c();
  uVar12 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if ((DWORD)uVar18 != 0) {
    FUN_004036d4(extraout_ECX,0x271e,(DWORD)uVar18);
    goto LAB_004016bf;
  }
  if (iVar15 == 1) {
    if (((char)local_1c8 != '\0') && (pbVar17 == (byte *)0x0)) {
LAB_0040188e:
      FUN_0040248b();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar18 = FUN_00401977(pbVar17,pbVar14,(char)local_1c8,(char)_uStack_1c4);
    uVar12 = (undefined4)((ulonglong)uVar18 >> 0x20);
    piVar8 = (int *)uVar18;
    if (piVar8 == (int *)0x0) goto LAB_00401864;
    DVar11 = 0x271f;
    uVar9 = extraout_ECX_04;
  }
  else if (iVar15 == 2) {
    if ((pbVar17 == (byte *)0x0) || (pbVar14 == (byte *)0x0)) goto LAB_0040188e;
    cVar5 = FUN_004025a4();
    if (cVar5 == '\0') {
      piVar8 = (int *)0x2e4;
      uVar9 = extraout_ECX_02;
    }
    else {
      uVar18 = FUN_00401d27(pbVar17,(char *)pbVar14,(int)uStack_1d4);
      uVar12 = (undefined4)((ulonglong)uVar18 >> 0x20);
      piVar8 = (int *)uVar18;
      uVar9 = extraout_ECX_03;
      if (piVar8 == (int *)0x0) goto LAB_00401864;
    }
    DVar11 = 0x2720;
  }
  else {
    if (iVar15 != 3) goto LAB_00401864;
    cVar5 = FUN_004025a4();
    if (cVar5 == '\0') {
      piVar8 = (int *)0x2e4;
      uVar9 = extraout_ECX_00;
    }
    else {
      piVar8 = FUN_00401b67(pbVar17,(int)pbVar14);
      uVar9 = extraout_ECX_01;
      uVar12 = extraout_EDX;
      if (piVar8 == (int *)0x0) goto LAB_00401864;
    }
    DVar11 = 0x2721;
  }
  FUN_004036d4(uVar9,DVar11,(DWORD)piVar8);
  uVar12 = extraout_EDX_00;
LAB_00401864:
  FUN_00403a30(uStack_14 ^ (uint)&stack0xfffffe24,uVar12);
  return;
}



/* Function: FUN_0040189a */

void __fastcall
FUN_0040189a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  *param_1 = 1;
  param_1[1] = 3;
  param_1[2] = 6;
  param_1[3] = 1;
  param_1[4] = 2;
  param_1[5] = 1;
  param_1[6] = 4;
  param_1[7] = 0x16;
  param_1[8] = 1;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = (uint)*param_4;
  param_1[0xc] = (uint)param_4[1];
  param_1[0xd] = (uint)param_4[2];
  param_1[0xe] = (uint)param_4[3];
  return;
}



/* Function: FUN_00401913 */

undefined4 __fastcall FUN_00401913(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 *local_8;
  
  local_8 = param_1;
  puVar2 = (undefined4 *)Ordinal_11(param_2);
  if ((puVar2 != (undefined4 *)0xffffffff) ||
     ((iVar3 = Ordinal_52(param_2), iVar3 != 0 &&
      (puVar2 = *(undefined4 **)**(undefined4 **)(iVar3 + 0xc),
      *(undefined4 **)**(undefined4 **)(iVar3 + 0xc) != (undefined4 *)0xffffffff)))) {
    local_8 = puVar2;
    for (puVar2 = (undefined4 *)*param_1; puVar2 != param_1; puVar2 = (undefined4 *)*puVar2) {
      bVar1 = FUN_004035c2((char *)&local_8,(char *)(puVar2 + 2));
      if (CONCAT31(extraout_var,bVar1) != 0) {
        return puVar2[3];
      }
    }
  }
  return 0xffffffff;
}



/* Function: FUN_00401977 */

void __fastcall FUN_00401977(byte *param_1,byte *param_2,char param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined3 extraout_var;
  int *piVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_64;
  undefined4 local_60;
  byte *local_5c;
  int local_58;
  int local_54;
  char local_4d;
  char local_4c [68];
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
  local_54 = -1;
  local_64 = -1;
  local_4d = '\0';
  if ((param_2 == (byte *)0x0) && (param_3 != '\0')) {
    local_5c = (byte *)0x0;
    local_60 = 0;
    param_2 = param_1;
  }
  else {
    local_5c = param_1;
    if ((param_1 != (byte *)0x0) && (local_60 = FUN_004022c9(param_1,&local_58), local_58 != 1))
    goto LAB_004019c6;
  }
  uVar8 = FUN_00402758(2);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  piVar3 = (int *)uVar8;
  if (piVar3 != (int *)0x0) {
    if ((param_2 != (byte *)0x0) && (local_54 = FUN_00401913(piVar3,param_2), local_54 == -1)) {
LAB_004019c6:
      FUN_004035ed(2,0x2712);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    uVar8 = FUN_00402758(4);
    uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
    piVar4 = (int *)uVar8;
    if (piVar4 != (int *)0x0) {
      for (piVar1 = (int *)*piVar4; piVar1 != piVar4; piVar1 = (int *)*piVar1) {
        if (param_4 == '\0') {
LAB_00401a61:
          if (((local_5c == (byte *)0x0) ||
              (bVar2 = FUN_004035c2((char *)(piVar1 + 6),(char *)&local_60),
              CONCAT31(extraout_var,bVar2) != 0)) && ((param_3 == '\0' || (local_54 == piVar1[2]))))
          {
            if (local_64 != piVar1[2]) {
              local_64 = piVar1[2];
              piVar5 = (int *)*piVar3;
              local_54 = -1;
              for (; piVar5 != piVar3; piVar5 = (int *)*piVar5) {
                if (local_64 == piVar5[3]) {
                  local_54 = piVar5[3];
                  break;
                }
              }
              iVar6 = FUN_0040159d(local_4c,0x40,"%u.%u.%u.%u --- 0x%x");
              if (-1 < iVar6) {
                FUN_004035ed(1,0x2713);
              }
            }
            local_4d = '\x01';
            FUN_004021ca((int)piVar1);
          }
        }
        else if (piVar1[7] != 2) {
          for (piVar5 = (int *)*piVar3; piVar5 != piVar3; piVar5 = (int *)*piVar5) {
            if (piVar5[3] == piVar1[2]) {
              if ((char)piVar5[2] != '\x7f') goto LAB_00401a61;
              break;
            }
          }
        }
      }
      FUN_00402846(piVar4);
      FUN_00402846(piVar3);
      uVar7 = extraout_EDX;
      if (local_4d == '\0') {
        FUN_004035ed(1,0x2722);
        uVar7 = extraout_EDX_00;
      }
    }
  }
  FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return;
}



/* Function: FUN_00401b67 */

int * __fastcall FUN_00401b67(byte *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  int iVar7;
  DWORD DVar8;
  undefined4 local_38;
  undefined4 *local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = -1;
  local_20 = &local_38;
  local_14 = 0;
  local_1c = 1;
  local_18 = 0;
  local_10 = 0;
  if ((param_1 != (byte *)0x0) &&
     (((*param_1 != 0x2a || (param_1[1] != 0)) &&
      (local_10 = FUN_004022c9(param_1,&local_8), local_8 != (int *)0x1)))) {
    DVar8 = 0x2711;
LAB_00401bbe:
    FUN_004035ed(2,DVar8);
LAB_00401bc9:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (param_2 != 0) {
    piVar5 = (int *)FUN_00402758(2);
    if (piVar5 == (int *)0x0) {
      return local_8;
    }
    local_c = FUN_00401913(piVar5,param_2);
    if (local_c == -1) {
      DVar8 = 0x2712;
      goto LAB_00401bbe;
    }
    FUN_00402846(piVar5);
  }
  piVar5 = (int *)FUN_00402758(4);
  if (piVar5 != (int *)0x0) {
    bVar2 = false;
    iVar7 = local_c;
    for (piVar1 = (int *)*piVar5; piVar1 != piVar5; piVar1 = (int *)*piVar1) {
      local_8 = piVar1 + 2;
      if (((iVar7 == -1) || (iVar7 == *local_8)) &&
         ((local_10 == 0 ||
          (bVar4 = FUN_004035c2((char *)&local_10,(char *)(piVar1 + 6)), iVar7 = local_c,
          CONCAT31(extraout_var,bVar4) != 0)))) {
        puVar6 = (undefined4 *)SnmpUtilMemAlloc(200);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_004035ed(2,0x2714);
          goto LAB_00401bc9;
        }
        local_38 = 0xf;
        local_34 = puVar6;
        FUN_0040189a(puVar6,4,*local_8,(byte *)(piVar1 + 6));
        pcVar3 = DAT_00405c6c;
        local_30 = 2;
        local_2c = 2;
        (*(code *)PTR_guard_check_icall_00406150)(0xa3,&local_20,&local_14,&local_18);
        (*pcVar3)();
        SnmpUtilMemFree(local_34);
        if (local_14 != 0) {
          piVar5 = (int *)FUN_0040287f(local_14);
          return piVar5;
        }
        bVar2 = true;
        iVar7 = local_c;
      }
    }
    FUN_00402846(piVar5);
    if (!bVar2) {
      FUN_004035ed(2,0x271c);
    }
    local_8 = (int *)0x0;
  }
  return local_8;
}



/* Function: FUN_00401d27 */

void __fastcall FUN_00401d27(byte *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  DWORD DVar9;
  uint *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  byte *local_90;
  char *local_8c;
  byte *local_88;
  int local_84;
  int local_80;
  uint local_7c [2];
  undefined4 *local_74;
  undefined1 local_70;
  int local_6c;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined1 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined1 local_40;
  uint *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 local_28;
  int local_24;
  undefined4 local_14;
  undefined2 local_10;
  uint local_c;
  
  local_c = DAT_00405040 ^ (uint)&stack0xfffffffc;
  local_9c = local_7c + 1;
  pbVar7 = (byte *)0x0;
  local_98 = 4;
  iVar4 = -1;
  local_80 = 0;
  local_94 = 0;
  local_84 = 0;
  local_14 = 0;
  local_10 = 0;
  local_90 = param_1;
  local_8c = param_2;
  local_7c[0] = FUN_004022c9(param_1,&local_84);
  if (local_84 == 1) {
    local_84 = FUN_004024af(local_8c,(undefined1 *)&local_14);
    if (local_84 == 0) {
      if (param_3 != 0) {
        uVar8 = FUN_00402758(2);
        local_90 = (byte *)uVar8;
        if (local_90 == (byte *)0x0) goto LAB_004021b3;
        iVar4 = FUN_00401913((undefined4 *)local_90,param_3);
        FUN_00402846((int *)local_90);
        if (iVar4 == -1) goto LAB_00401d96;
      }
      puVar2 = (undefined4 *)SnmpUtilMemAlloc(200);
      if (puVar2 != (undefined4 *)0x0) {
        local_7c[1] = 0xf;
        local_74 = puVar2;
        FUN_0040189a(puVar2,1,iVar4,(byte *)local_7c);
        local_70 = 2;
        local_6c = iVar4;
        puVar2 = (undefined4 *)SnmpUtilMemAlloc(200);
        if (puVar2 != (undefined4 *)0x0) {
          local_60 = 0xf;
          local_5c = puVar2;
          FUN_0040189a(puVar2,2,iVar4,(byte *)local_7c);
          local_54 = &local_14;
          local_58 = 4;
          local_50 = 6;
          local_4c = 0;
          puVar2 = (undefined4 *)SnmpUtilMemAlloc(200);
          if (puVar2 != (undefined4 *)0x0) {
            local_48 = 0xf;
            local_44 = puVar2;
            FUN_0040189a(puVar2,3,iVar4,(byte *)local_7c);
            local_3c = local_7c;
            local_40 = 0x40;
            local_38 = 4;
            local_34 = 0;
            local_2c = (undefined4 *)SnmpUtilMemAlloc(200);
            if (local_2c != (undefined4 *)0x0) {
              local_30 = 0xf;
              FUN_0040189a(local_2c,4,iVar4,(byte *)local_7c);
              pcVar1 = DAT_00405c6c;
              local_28 = 2;
              local_24 = extraout_EDX;
              if (param_3 == 0) {
                local_90 = (byte *)FUN_00402758(extraout_EDX);
                iVar5 = iVar4;
                if ((local_90 != (byte *)0x0) &&
                   (local_88 = *(byte **)local_90, local_88 != local_90)) {
                  local_8c = (char *)0xffffffff;
                  bVar3 = (byte)local_7c[0] & 0xc0;
                  uVar6 = local_7c[0];
                  if (((local_7c[0] & 0xc0) == 0) || (bVar3 == 0x40)) {
                    local_8c = (char *)0xff;
                  }
                  else if (bVar3 == 0x80) {
                    local_8c = (char *)0xffff;
                  }
                  else if ((bVar3 == 0xc0) &&
                          (local_8c = (char *)0xffffff, (local_7c[0] & 0x30) != 0)) {
                    local_8c = (char *)0xffffffff;
                  }
                  do {
                    pcVar1 = DAT_00405c6c;
                    if ((*(uint *)(local_88 + 0x18) & (uint)local_8c) == ((uint)local_8c & uVar6)) {
                      local_6c = *(int *)(local_88 + 8);
                      local_74[10] = local_6c;
                      local_5c[10] = local_6c;
                      local_44[10] = local_6c;
                      local_2c[10] = local_6c;
                      (*(code *)PTR_guard_check_icall_00406150)(0xa3,&local_9c,&local_80,&local_94);
                      (*pcVar1)();
                      iVar5 = local_6c;
                      uVar6 = local_7c[0];
                      if (local_80 == 0) break;
                    }
                    local_88 = *(byte **)local_88;
                    iVar5 = iVar4;
                  } while (local_88 != local_90);
                }
                iVar4 = iVar5;
                if ((iVar5 == -1) && (pbVar7 = (byte *)FUN_00402758(2), pbVar7 != (byte *)0x0)) {
                  for (local_88 = *(byte **)pbVar7; pcVar1 = DAT_00405c6c, local_88 != pbVar7;
                      local_88 = *(byte **)local_88) {
                    if ((*(int *)(local_88 + 8) != 0) &&
                       ((*(uint *)(local_88 + 0x10) & *(uint *)(local_88 + 8)) ==
                        (*(uint *)(local_88 + 0x10) & local_7c[0]))) {
                      local_6c = *(int *)(local_88 + 0xc);
                      local_74[10] = local_6c;
                      local_5c[10] = local_6c;
                      local_44[10] = local_6c;
                      local_2c[10] = local_6c;
                      (*(code *)PTR_guard_check_icall_00406150)(0xa3,&local_9c,&local_80,&local_94);
                      (*pcVar1)();
                      if (local_80 == 0) {
                        iVar4 = local_6c;
                        iVar5 = local_6c;
                        if (local_6c != -1) goto LAB_0040214f;
                        break;
                      }
                    }
                  }
                  for (local_88 = *(byte **)pbVar7; pcVar1 = DAT_00405c6c, iVar4 = iVar5,
                      local_88 != pbVar7; local_88 = *(byte **)local_88) {
                    if (local_88[8] != 0x7f) {
                      local_6c = *(int *)(local_88 + 0xc);
                      local_74[10] = local_6c;
                      local_5c[10] = local_6c;
                      local_44[10] = local_6c;
                      local_2c[10] = local_6c;
                      (*(code *)PTR_guard_check_icall_00406150)(0xa3,&local_9c,&local_80,&local_94);
                      (*pcVar1)();
                      iVar4 = local_6c;
                      if (local_80 == 0) break;
                    }
                  }
                }
LAB_0040214f:
                if (local_90 != (byte *)0x0) {
                  FUN_00402846((int *)local_90);
                }
                if (pbVar7 != (byte *)0x0) {
                  FUN_00402846((int *)pbVar7);
                }
                if (((iVar4 == -1) && (local_80 == 0)) && (local_84 == 0)) {
                  local_80 = 5;
                }
              }
              else {
                (*(code *)PTR_guard_check_icall_00406150)(0xa3,&local_9c,&local_80,&local_94);
                (*pcVar1)();
              }
              SnmpUtilMemFree(local_74);
              SnmpUtilMemFree(local_5c);
              SnmpUtilMemFree(local_44);
              SnmpUtilMemFree(local_2c);
              uVar8 = CONCAT44(extraout_EDX_00,local_90);
LAB_004021b3:
              local_90 = (byte *)uVar8;
              FUN_00403a30(local_c ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar8 >> 0x20));
              return;
            }
          }
        }
      }
      FUN_004035ed(2,0x2714);
      goto LAB_00401dab;
    }
    DVar9 = 0x2712;
  }
  else {
LAB_00401d96:
    DVar9 = 0x2711;
  }
  FUN_004035ed(2,DVar9);
LAB_00401dab:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_004021ca */

void __fastcall FUN_004021ca(int param_1)

{
  int iVar1;
  DWORD DVar2;
  HLOCAL hMem;
  undefined4 extraout_EDX;
  wchar_t *pwVar3;
  uint uVar4;
  uint local_78;
  undefined1 local_74 [44];
  wchar_t local_48 [2];
  wchar_t local_44 [30];
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
  RtlIpv4AddressToStringW(param_1 + 0x18,local_74);
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00401536(local_48,0x20,L"%02x"), iVar1 < 0)) {
LAB_0040224f:
    local_48[0] = L'\0';
  }
  else {
    pwVar3 = local_44;
    uVar4 = 1;
    local_78 = 0x1e;
    if (1 < *(uint *)(param_1 + 0xc)) {
      do {
        iVar1 = FUN_00401536(pwVar3,local_78,L"-%02x");
        if (iVar1 < 0) goto LAB_0040224f;
        pwVar3 = pwVar3 + 3;
        local_78 = local_78 - 3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    DVar2 = 0x2715;
  }
  else if (iVar1 == 2) {
    DVar2 = 0x2716;
  }
  else if (iVar1 == 3) {
    DVar2 = 0x2717;
  }
  else if (iVar1 == 4) {
    DVar2 = 0x2718;
  }
  else {
    DVar2 = 0x2723;
  }
  hMem = (HLOCAL)FUN_0040370a(DVar2);
  FUN_004035ed(1,0x271d);
  LocalFree(hMem);
  FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004022c9 */

void __fastcall FUN_004022c9(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint _C;
  int iVar2;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  undefined4 *extraout_EDX_02;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 **ppuVar6;
  byte *pbVar7;
  int local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
  ppuVar6 = &local_18;
  *param_2 = 1;
  puVar3 = param_2;
  do {
    bVar1 = *param_1;
    puVar4 = (undefined4 *)0x0;
    local_1c = 10;
    pbVar7 = param_1;
    if (bVar1 == 0x30) {
      pbVar7 = param_1 + 1;
      local_1c = 8;
      bVar1 = *pbVar7;
      if ((bVar1 == 0x78) || (bVar1 == 0x58)) {
        pbVar7 = param_1 + 2;
        local_1c = 0x10;
        bVar1 = *pbVar7;
      }
    }
    while (bVar1 != 0) {
      _C = (uint)bVar1;
      iVar2 = isdigit(_C);
      puVar3 = extraout_EDX;
      if (iVar2 == 0) {
        if ((local_1c != 0x10) || (iVar2 = isxdigit(_C), puVar3 = extraout_EDX_00, iVar2 == 0))
        break;
        iVar2 = islower(_C);
        iVar5 = (int)puVar4 * 0x10 - ((-(uint)(iVar2 != 0) & 0x20) + 0x41);
        iVar2 = _C + 10;
        puVar3 = extraout_EDX_01;
      }
      else {
        iVar2 = local_1c * (int)puVar4;
        iVar5 = _C - 0x30;
      }
      puVar4 = (undefined4 *)(iVar5 + iVar2);
      bVar1 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    }
    bVar1 = *pbVar7;
    if (bVar1 != 0x2e) {
      if ((bVar1 == 0) || (iVar2 = isspace((uint)bVar1), puVar3 = extraout_EDX_02, iVar2 != 0)) {
        *ppuVar6 = puVar4;
        iVar2 = (int)ppuVar6 + (4 - (int)&local_18) >> 2;
        if (iVar2 == 1) goto LAB_00402476;
        if (iVar2 == 2) {
          if ((local_18 < (undefined4 *)0x100) &&
             (puVar3 = (undefined4 *)0xffffff, local_14 < 0x1000000)) goto LAB_00402476;
        }
        else if (iVar2 == 3) {
          puVar3 = local_18;
          if (((local_18 < (undefined4 *)0x100) && (local_14 < 0x100)) && (local_10 < 0x10000)) {
            puVar3 = (undefined4 *)((int)local_18 << 8);
            goto LAB_00402476;
          }
        }
        else if (((iVar2 == 4) && (puVar3 = local_18, local_18 < (undefined4 *)0x100)) &&
                ((local_14 < 0x100 && ((local_10 < 0x100 && (local_c < (undefined4 *)0x100)))))) {
          puVar3 = (undefined4 *)((int)local_18 << 8);
          goto LAB_00402476;
        }
      }
LAB_00402464:
      *param_2 = 0;
LAB_00402476:
      FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,puVar3);
      return;
    }
    if (&local_c <= ppuVar6) goto LAB_00402464;
    *ppuVar6 = puVar4;
    ppuVar6 = ppuVar6 + 1;
    param_1 = pbVar7 + 1;
  } while( true );
}



/* Function: FUN_0040248b */

void FUN_0040248b(void)

{
  FUN_004035ed(1,10000);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_004024af */

void __fastcall FUN_004024af(char *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
  iVar1 = sscanf_s(param_1,"%2x-%2x-%2x-%2x-%2x-%2x",local_20,local_1c,local_18,local_14,local_10,
                   local_c);
  if (iVar1 == 6) {
    *param_2 = local_20[0];
    param_2[1] = local_1c[0];
    param_2[2] = local_18[0];
    param_2[3] = local_14[0];
    param_2[4] = local_10[0];
    param_2[5] = local_c[0];
  }
  FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040252d */

void __fastcall FUN_0040252d(DWORD param_1)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  PSID local_18;
  BOOL local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
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
  FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_004025a4 */

undefined1 FUN_004025a4(void)

{
  char cVar1;
  
  cVar1 = FUN_0040252d(0x220);
  if (cVar1 == '\0') {
    cVar1 = FUN_0040252d(0x22c);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_004025ca */

undefined4 __fastcall FUN_004025ca(char *param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = '\0';
    }
  }
  else {
    iVar3 = 0x7ffffffe - param_2;
    iVar4 = (int)"\\inetmib1.dll" - (int)param_1;
    do {
      if ((iVar3 + param_2 == 0) || (param_1[iVar4] == '\0')) break;
      *param_1 = param_1[iVar4];
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    pcVar1 = param_1 + -1;
    if (param_2 != 0) {
      pcVar1 = param_1;
    }
    *pcVar1 = '\0';
    uVar2 = 0x8007007a;
    if (param_2 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: FUN_0040262c */

void FUN_0040262c(void)

{
  FARPROC pFVar1;
  char *pcVar2;
  UINT UVar3;
  int iVar4;
  HMODULE pHVar5;
  char *pcVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar7;
  time_t tVar8;
  undefined1 local_128 [8];
  undefined1 local_120 [4];
  CHAR local_11c [276];
  uint local_8;
  
  local_8 = DAT_00405040 ^ (uint)&stack0xfffffffc;
  tVar8 = time((time_t *)0x0);
  UVar3 = GetSystemDirectoryA(local_11c,0x104);
  if (UVar3 == 0) {
    GetLastError();
    uVar7 = extraout_EDX;
  }
  else {
    pcVar2 = local_11c;
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (DAT_00405c4c != 0) {
      iVar4 = FUN_004025ca(pcVar6,(int)&local_8 - (int)pcVar6);
      uVar7 = extraout_EDX_00;
      if (iVar4 < 0) goto LAB_00402744;
      pHVar5 = LoadLibraryExA(local_11c,(HANDLE)0x0,0);
      if (pHVar5 != (HMODULE)0x0) {
        DAT_00405c64 = GetProcAddress(pHVar5,"SnmpMgrOidToStr");
      }
    }
    iVar4 = FUN_004025ca(pcVar6,(int)&local_8 - (int)pcVar6);
    uVar7 = extraout_EDX_01;
    if ((((-1 < iVar4) &&
         (pHVar5 = LoadLibraryExA(local_11c,(HANDLE)0x0,0), uVar7 = extraout_EDX_02,
         pHVar5 != (HMODULE)0x0)) &&
        (DAT_00405c68 = GetProcAddress(pHVar5,"SnmpExtensionInit"), uVar7 = extraout_EDX_03,
        DAT_00405c68 != (FARPROC)0x0)) &&
       (DAT_00405c6c = GetProcAddress(pHVar5,"SnmpExtensionQuery"), pFVar1 = DAT_00405c68,
       uVar7 = extraout_EDX_04, DAT_00405c6c != (FARPROC)0x0)) {
      (*(code *)PTR_guard_check_icall_00406150)((int)tVar8,local_120,local_128);
      (*pFVar1)();
      uVar7 = extraout_EDX_05;
    }
  }
LAB_00402744:
  FUN_00403a30(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return;
}



/* Function: FUN_00402758 */

void __fastcall FUN_00402758(int param_1)

{
  FILE *_File;
  char *_Format;
  int iVar1;
  
  if (DAT_00405c4c != 0) {
    _Format = "GetTable: type = %d\n";
    iVar1 = param_1;
    _File = FUN_00403fa9(2);
    fprintf(_File,_Format,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0040278a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_00402800)[param_1])();
  return;
}



/* Function: FUN_00402846 */

void __fastcall FUN_00402846(int *param_1)

{
  int iVar1;
  int *pMem;
  code *pcVar2;
  
  while( true ) {
    pMem = (int *)*param_1;
    if (pMem == param_1) {
      SnmpUtilMemFree(param_1);
      return;
    }
    if (((int *)pMem[1] != param_1) || (iVar1 = *pMem, *(int **)(iVar1 + 4) != pMem)) break;
    *param_1 = iVar1;
    *(int **)(iVar1 + 4) = param_1;
    SnmpUtilMemFree(pMem);
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040287f */

undefined4 __fastcall FUN_0040287f(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) && (param_1 == 4)) {
    return 0xc;
  }
  return 0x57;
}



/* Function: FUN_004028ac */

undefined4 __fastcall FUN_004028ac(int *param_1,char *param_2,UINT param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  FILE *pFVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  SnmpVarBind *pSVar12;
  uint *puVar13;
  UINT *pUVar14;
  bool bVar15;
  UINT in_stack_ffffff78;
  int iVar16;
  SnmpVarBind **ppSVar17;
  char *pcVar18;
  UINT local_64 [6];
  SnmpVarBind local_4c;
  AsnObjectIdentifier local_34;
  SnmpVarBind *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  uint local_1c;
  char *local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  
  local_2c = &local_4c;
  local_28 = 1;
  local_20 = (char *)0x0;
  puVar10 = (uint *)0x0;
  local_24 = 0;
  local_1c = 0;
  local_18 = param_2;
  local_c = param_1;
  if (DAT_00405c4c != 0) {
    pcVar18 = "ReadTable: type = %d\n";
    pFVar4 = FUN_00403fa9(2);
    fprintf(pFVar4,pcVar18);
  }
  if (param_2 < (char *)0xb) {
    if ((param_2 == (char *)0xa) || (param_2 == (char *)0x1)) {
      uVar5 = GetIpStatisticsEx();
      return uVar5;
    }
    if (param_2 != (char *)0x5) {
      if (param_2 != (char *)0x6) {
        if (param_2 != (char *)0x8) goto LAB_00402967;
        goto LAB_0040291d;
      }
      goto LAB_00402e2b;
    }
  }
  else {
    if (param_2 == (char *)0xb) {
LAB_00402e2b:
      uVar5 = GetTcpStatisticsEx();
      return uVar5;
    }
    if (param_2 == (char *)0xd) {
LAB_0040291d:
      uVar5 = GetUdpStatisticsEx();
      return uVar5;
    }
    if (param_2 != (char *)0xf) {
LAB_00402967:
      local_4c.name.ids = (UINT *)SnmpUtilMemAlloc(200);
      if (local_4c.name.ids == (uint *)0x0) {
        return 8;
      }
      puVar8 = local_4c.name.ids;
      if (DAT_00405598 != 0) {
        puVar8 = local_4c.name.ids + DAT_00405598;
        puVar11 = &DAT_0040559c;
        puVar13 = local_4c.name.ids;
        for (uVar7 = DAT_00405598 & 0x3fffffff; param_2 = local_18, param_1 = local_c, uVar7 != 0;
            uVar7 = uVar7 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      if (param_2 < (char *)0x5) {
        if (param_2 == (char *)0x4) {
          puVar10 = &DAT_00405088;
        }
        else if (param_2 == (char *)0x0) {
          puVar10 = &DAT_00405238;
        }
        else if (param_2 == (char *)0x1) {
          puVar10 = &DAT_00405670;
        }
        else if (param_2 == (char *)0x2) {
          puVar10 = &DAT_004054c0;
        }
        else if (param_2 == (char *)0x3) {
          puVar10 = &DAT_004053e8;
        }
      }
      else if (param_2 == (char *)0x7) {
        puVar10 = &DAT_00405748;
      }
      else if (param_2 == (char *)0x9) {
        puVar10 = &DAT_00405310;
      }
      else if (param_2 == (char *)0xc) {
        puVar10 = &DAT_00405820;
      }
      else if (param_2 == (char *)0xe) {
        puVar10 = &DAT_00405160;
      }
      local_4c.name.idLength = *puVar10;
      uVar7 = 0;
      puVar11 = puVar10;
      if (local_4c.name.idLength != 0) {
        do {
          uVar7 = uVar7 + 1;
          *puVar8 = puVar11[1];
          local_4c.name.idLength = *puVar10;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar7 < local_4c.name.idLength);
      }
      local_4c.name.idLength = local_4c.name.idLength + DAT_00405598;
      local_4c.value.asnType = '\x05';
      local_10 = param_1;
LAB_00402a43:
      do {
        pcVar2 = DAT_00405c6c;
        pFVar4 = (FILE *)&local_20;
        ppSVar17 = &local_2c;
        uVar5 = 0xa1;
        (*(code *)PTR_guard_check_icall_00406150)();
        iVar16 = 0x402a64;
        (*pcVar2)();
        if (DAT_00405c4c != 0) {
          pcVar18 = "value=%8d oid= ";
          pFVar4 = FUN_00403fa9(2);
          uVar5 = 0x402a88;
          fprintf(pFVar4,pcVar18);
          pcVar2 = DAT_00405c64;
          if (DAT_00405c64 == (code *)0x0) {
LAB_00402ae4:
            iVar6 = 0;
            if (0 < (int)local_4c.name.idLength) {
              do {
                if (iVar6 < 6) {
                  pcVar18 = "%d.";
                }
                else if (iVar6 < 9) {
                  pcVar18 = "%2d.";
                }
                else {
                  pcVar18 = "%3d.";
                }
                pFVar4 = FUN_00403fa9(2);
                uVar5 = 0x402b1d;
                fprintf(pFVar4,pcVar18);
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)local_4c.name.idLength);
            }
          }
          else {
            local_14 = (uint *)0x0;
            (*(code *)PTR_guard_check_icall_00406150)();
            iVar6 = (*pcVar2)();
            if (iVar6 != 0) {
              pcVar18 = " %s ";
              pFVar4 = FUN_00403fa9(2);
              uVar5 = 0x402ac6;
              fprintf(pFVar4,pcVar18);
            }
            SnmpUtilMemFree(local_14);
            if ((DAT_00405c64 == (code *)0x0) || (1 < DAT_00405c4c)) goto LAB_00402ae4;
          }
          pcVar18 = "\n";
          pFVar4 = FUN_00403fa9(2);
          ppSVar17 = (SnmpVarBind **)0x402b3a;
          fprintf(pFVar4,pcVar18);
        }
        pcVar18 = local_18;
        if (local_20 != (char *)0x0) {
          SnmpUtilVarBindFree(&local_4c);
          uVar5 = FUN_0040287f((int)local_20);
          return uVar5;
        }
        if (local_4c.name.idLength < *puVar10 + DAT_00405598) {
LAB_00402df2:
          SnmpUtilVarBindFree(&local_4c);
          return 0;
        }
        uVar7 = (*puVar10 - puVar10[0x34]) + DAT_00405598;
        if (DAT_00405598 < uVar7) {
          local_14 = puVar10 + 1;
          uVar9 = DAT_00405598;
          do {
            if (local_4c.name.ids[uVar9] != *local_14) goto LAB_00402df2;
            local_14 = local_14 + 1;
            uVar9 = uVar9 + 1;
            param_1 = local_c;
          } while (uVar9 < uVar7);
        }
        if (local_18 == (char *)0x1) goto LAB_00402bcb;
        if (local_18 == (char *)0x6) {
          bVar15 = local_4c.name.ids[puVar10[0x33]] == 0xd;
          goto LAB_00402be9;
        }
        if (local_18 == (char *)0x8) {
          bVar15 = local_4c.name.ids[puVar10[0x33]] == 5;
          goto LAB_00402be9;
        }
      } while (((local_18 == (char *)0xc) || (local_18 == (char *)0xe)) &&
              (local_4c.name.ids[10] != 2));
      goto LAB_00402bef;
    }
  }
  uVar5 = GetIcmpStatisticsEx();
  return uVar5;
LAB_00402bcb:
  uVar7 = puVar10[0x33];
  if ((local_4c.name.ids[uVar7] == 0x14) || (local_4c.name.ids[uVar7] == 0x15)) goto LAB_00402a43;
  bVar15 = local_4c.name.ids[uVar7] == 0x16;
LAB_00402be9:
  if (bVar15) goto LAB_00402a43;
LAB_00402bef:
  if (local_10 == param_1) {
LAB_00402c0d:
    pFVar4 = (FILE *)0x402c16;
    local_10 = (int *)SnmpUtilMemAlloc(param_3);
    if (local_10 != (int *)0x0) {
      puVar1 = (undefined4 *)param_1[1];
      if ((int *)*puVar1 == param_1) {
        *local_10 = (int)param_1;
        local_10[1] = (int)puVar1;
        *puVar1 = local_10;
        param_1[1] = (int)local_10;
        goto LAB_00402c3b;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
    }
    SnmpUtilVarBindFree(&local_4c);
    return 8;
  }
  local_10 = (int *)*local_10;
  if (local_10 == param_1) {
    if (local_4c.name.ids[puVar10[0x33]] == local_1c) goto LAB_00402c0d;
  }
  else if (local_4c.name.ids[puVar10[0x33]] == local_1c) goto LAB_00402c3b;
  local_10 = (int *)*param_1;
LAB_00402c3b:
  piVar3 = local_10;
  uVar7 = local_4c.name.ids[puVar10[0x33]];
  local_1c = uVar7;
  switch(pcVar18) {
  case (char *)0x0:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00402e7e((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,(int)ppSVar17,(int)pFVar4
                );
    param_1 = local_c;
    break;
  case (char *)0x1:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00402fec((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x2:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403102((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,(undefined1 *)ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x3:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403188((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,(undefined1 *)ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x4:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403282((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,(undefined1 *)ppSVar17,
                 (int)pFVar4);
    param_1 = local_c;
    break;
  case (char *)0x6:
  case (char *)0xb:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_004032fd((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x7:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_004033cf((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,(undefined1 *)ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x8:
  case (char *)0xd:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403509((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0x9:
    pSVar12 = &local_4c;
    pUVar14 = local_64;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    param_1 = local_c;
    if (uVar7 == 1) {
      *(BYTE *)(piVar3 + 2) = *local_4c.value.asnValue.string.stream;
      *(undefined1 *)((int)piVar3 + 9) = *(undefined1 *)(local_64[3] + 1);
      *(undefined1 *)((int)piVar3 + 10) = *(undefined1 *)(local_64[3] + 2);
      *(undefined1 *)((int)piVar3 + 0xb) = *(undefined1 *)(local_64[3] + 3);
    }
    else if (uVar7 == 2) {
      piVar3[3] = local_4c.value.asnValue.number;
    }
    break;
  case (char *)0xc:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403455((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,ppSVar17);
    param_1 = local_c;
    break;
  case (char *)0xe:
    pSVar12 = &local_4c;
    pUVar14 = (UINT *)&stack0xffffff78;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pUVar14 = (pSVar12->name).idLength;
      pSVar12 = (SnmpVarBind *)&(pSVar12->name).ids;
      pUVar14 = pUVar14 + 1;
    }
    FUN_00403556((int)local_10,(int)puVar10,in_stack_ffffff78,iVar16,uVar5,ppSVar17);
    param_1 = local_c;
  }
  SnmpUtilOidCpy(&local_34,&local_4c.name);
  SnmpUtilVarBindFree(&local_4c);
  local_4c.name.idLength = local_34.idLength;
  local_4c.name.ids = local_34.ids;
  goto LAB_00402a43;
}



/* Function: FUN_00402e7e */

void __fastcall
FUN_00402e7e(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6,
            int param_7)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_4 + *(int *)(param_2 + 0xcc) * 4)) {
  case 1:
    *(int *)(param_1 + 8) = param_6;
    break;
  case 2:
    uVar1 = 0;
    *(int *)(param_1 + 0x60) = param_7;
    if (param_7 != 0) {
      do {
        *(undefined1 *)(param_1 + 100 + uVar1) = *(undefined1 *)(uVar1 + param_6);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x60));
    }
    break;
  case 3:
    *(int *)(param_1 + 0xc) = param_6;
    break;
  case 4:
    *(int *)(param_1 + 0x10) = param_6;
    break;
  case 5:
    *(int *)(param_1 + 0x14) = param_6;
    break;
  case 6:
    uVar1 = 0;
    *(int *)(param_1 + 0x18) = param_7;
    if (param_7 != 0) {
      do {
        *(undefined1 *)(param_1 + 0x1c + uVar1) = *(undefined1 *)(uVar1 + param_6);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
    break;
  case 7:
    *(int *)(param_1 + 0x24) = param_6;
    break;
  case 8:
    *(int *)(param_1 + 0x28) = param_6;
    break;
  case 9:
    *(int *)(param_1 + 0x2c) = param_6;
    break;
  case 10:
    *(int *)(param_1 + 0x30) = param_6;
    break;
  case 0xb:
    *(int *)(param_1 + 0x34) = param_6;
    break;
  case 0xc:
    *(int *)(param_1 + 0x38) = param_6;
    break;
  case 0xd:
    *(int *)(param_1 + 0x3c) = param_6;
    break;
  case 0xe:
    *(int *)(param_1 + 0x40) = param_6;
    break;
  case 0xf:
    *(int *)(param_1 + 0x44) = param_6;
    break;
  case 0x10:
    *(int *)(param_1 + 0x48) = param_6;
    break;
  case 0x11:
    *(int *)(param_1 + 0x4c) = param_6;
    break;
  case 0x12:
    *(int *)(param_1 + 0x50) = param_6;
    break;
  case 0x13:
    *(int *)(param_1 + 0x54) = param_6;
    break;
  case 0x14:
    *(int *)(param_1 + 0x58) = param_6;
    break;
  case 0x15:
    *(int *)(param_1 + 0x5c) = param_6;
  }
  return;
}



/* Function: FUN_00402fec */

void __fastcall
FUN_00402fec(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  switch(*(undefined4 *)(param_4 + *(int *)(param_2 + 0xcc) * 4)) {
  case 1:
    *(undefined4 *)(param_1 + 8) = param_6;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xc) = param_6;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = param_6;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x14) = param_6;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x18) = param_6;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x20) = param_6;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x24) = param_6;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x28) = param_6;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x2c) = param_6;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x34) = param_6;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x38) = param_6;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x3c) = param_6;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x40) = param_6;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x44) = param_6;
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 0x48) = param_6;
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x4c) = param_6;
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x50) = param_6;
    break;
  case 0x13:
    *(undefined4 *)(param_1 + 0x54) = param_6;
  }
  return;
}



/* Function: FUN_00403102 */

void __fastcall
FUN_00403102(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 *param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 8) = *param_6;
    *(undefined1 *)(param_1 + 9) = param_6[1];
    *(undefined1 *)(param_1 + 10) = param_6[2];
    *(undefined1 *)(param_1 + 0xb) = param_6[3];
  }
  else if (iVar1 == 2) {
    *(undefined1 **)(param_1 + 0xc) = param_6;
  }
  else if (iVar1 == 3) {
    *(undefined1 *)(param_1 + 0x10) = *param_6;
    *(undefined1 *)(param_1 + 0x11) = param_6[1];
    *(undefined1 *)(param_1 + 0x12) = param_6[2];
    *(undefined1 *)(param_1 + 0x13) = param_6[3];
  }
  else if (iVar1 == 4) {
    *(undefined1 **)(param_1 + 0x14) = param_6;
  }
  else if (iVar1 == 5) {
    *(undefined1 **)(param_1 + 0x18) = param_6;
  }
  return;
}



/* Function: FUN_00403188 */

void __fastcall
FUN_00403188(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 *param_6)

{
  switch(*(undefined4 *)(param_4 + *(int *)(param_2 + 0xcc) * 4)) {
  case 1:
    *(undefined1 *)(param_1 + 8) = *param_6;
    *(undefined1 *)(param_1 + 9) = param_6[1];
    *(undefined1 *)(param_1 + 10) = param_6[2];
    *(undefined1 *)(param_1 + 0xb) = param_6[3];
    break;
  case 2:
    *(undefined1 **)(param_1 + 0xc) = param_6;
    break;
  case 3:
    *(undefined1 **)(param_1 + 0x10) = param_6;
    break;
  case 4:
    *(undefined1 **)(param_1 + 0x14) = param_6;
    break;
  case 5:
    *(undefined1 **)(param_1 + 0x18) = param_6;
    break;
  case 6:
    *(undefined1 **)(param_1 + 0x1c) = param_6;
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x20) = *param_6;
    *(undefined1 *)(param_1 + 0x21) = param_6[1];
    *(undefined1 *)(param_1 + 0x22) = param_6[2];
    *(undefined1 *)(param_1 + 0x23) = param_6[3];
    break;
  case 8:
    *(undefined1 **)(param_1 + 0x24) = param_6;
    break;
  case 9:
    *(undefined1 **)(param_1 + 0x28) = param_6;
    break;
  case 10:
    *(undefined1 **)(param_1 + 0x2c) = param_6;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x30) = *param_6;
    *(undefined1 *)(param_1 + 0x31) = param_6[1];
    *(undefined1 *)(param_1 + 0x32) = param_6[2];
    *(undefined1 *)(param_1 + 0x33) = param_6[3];
    break;
  case 0xc:
    *(undefined1 **)(param_1 + 0x34) = param_6;
  }
  return;
}



/* Function: FUN_00403282 */

void __fastcall
FUN_00403282(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4);
  if (iVar1 == 1) {
    *(undefined1 **)(param_1 + 8) = param_6;
  }
  else if (iVar1 == 2) {
    uVar2 = 0;
    *(int *)(param_1 + 0xc) = param_7;
    if (param_7 != 0) {
      do {
        *(undefined1 *)(param_1 + 0x10 + uVar2) = param_6[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (iVar1 == 3) {
    *(undefined1 *)(param_1 + 0x18) = *param_6;
    *(undefined1 *)(param_1 + 0x19) = param_6[1];
    *(undefined1 *)(param_1 + 0x1a) = param_6[2];
    *(undefined1 *)(param_1 + 0x1b) = param_6[3];
  }
  else if (iVar1 == 4) {
    *(undefined1 **)(param_1 + 0x1c) = param_6;
  }
  return;
}



/* Function: FUN_004032fd */

void __fastcall
FUN_004032fd(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  switch(*(undefined4 *)(param_4 + *(int *)(param_2 + 0xcc) * 4)) {
  case 1:
    *(undefined4 *)(param_1 + 8) = param_6;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xc) = param_6;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = param_6;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x14) = param_6;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x18) = param_6;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x20) = param_6;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x24) = param_6;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x28) = param_6;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x2c) = param_6;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x30) = param_6;
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x34) = param_6;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x38) = param_6;
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x3c) = param_6;
  }
  return;
}



/* Function: FUN_004033cf */

void __fastcall
FUN_004033cf(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 *param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4);
  if (iVar1 == 1) {
    *(undefined1 **)(param_1 + 8) = param_6;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0xc) = *param_6;
    *(undefined1 *)(param_1 + 0xd) = param_6[1];
    *(undefined1 *)(param_1 + 0xe) = param_6[2];
    *(undefined1 *)(param_1 + 0xf) = param_6[3];
  }
  else if (iVar1 == 3) {
    *(undefined1 **)(param_1 + 0x10) = param_6;
  }
  else if (iVar1 == 4) {
    *(undefined1 *)(param_1 + 0x14) = *param_6;
    *(undefined1 *)(param_1 + 0x15) = param_6[1];
    *(undefined1 *)(param_1 + 0x16) = param_6[2];
    *(undefined1 *)(param_1 + 0x17) = param_6[3];
  }
  else if (iVar1 == 5) {
    *(undefined1 **)(param_1 + 0x18) = param_6;
  }
  return;
}



/* Function: FUN_00403455 */

void __fastcall
FUN_00403455(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4) == 7) {
    uVar2 = *(uint *)(param_4 + 0x2c);
    uVar4 = 0;
    uVar5 = 0;
    iVar6 = 0xc;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(param_1 + 8 + uVar5) = *(undefined1 *)(param_4 + iVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    if (0x10 < uVar2) {
      do {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *(undefined1 *)(param_1 + 0x18 + uVar4) = *(undefined1 *)(param_4 + iVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      uVar3 = Ordinal_14(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = uVar3;
    }
    uVar4 = 0;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + iVar6 * 4);
    uVar2 = *(uint *)(param_4 + 8 + iVar6 * 4);
    iVar6 = iVar6 + 3;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(param_1 + 0x20 + uVar5) = *(undefined1 *)(param_4 + iVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    if (0x10 < uVar2) {
      do {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *(undefined1 *)(param_1 + 0x30 + uVar4) = *(undefined1 *)(param_4 + iVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      uVar3 = Ordinal_14(*(undefined4 *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_4 + iVar6 * 4);
    *(undefined4 *)(param_1 + 0x38) = param_6;
  }
  return;
}



/* Function: FUN_00403509 */

void __fastcall
FUN_00403509(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = param_6;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0xc) = param_6;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x10) = param_6;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x14) = param_6;
  }
  return;
}



/* Function: FUN_00403556 */

void __fastcall
FUN_00403556(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_4 + *(int *)(param_2 + 0xcc) * 4) == 3) {
    uVar3 = *(uint *)(param_4 + 0x2c);
    uVar5 = 0;
    uVar8 = 0;
    iVar7 = 0xc;
    do {
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(undefined1 *)(param_1 + 8 + uVar8) = *(undefined1 *)(param_4 + iVar1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x10);
    if (0x10 < uVar3) {
      puVar6 = (undefined1 *)(param_4 + iVar7 * 4);
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 4;
        *(undefined1 *)(param_1 + 0x18 + uVar5) = uVar2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      uVar4 = Ordinal_14(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x1c) = param_6;
  }
  return;
}



/* Function: FUN_004035c2 */

bool __fastcall FUN_004035c2(char *param_1,char *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Function: FUN_004035ed */

DWORD __cdecl FUN_004035ed(int param_1,DWORD param_2)

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
    _File = FUN_00403fa9((param_1 == 2) + 1);
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



/* Function: FUN_004036d4 */

DWORD __fastcall FUN_004036d4(undefined4 param_1,DWORD param_2,DWORD param_3)

{
  HLOCAL hMem;
  DWORD DVar1;
  
  hMem = (HLOCAL)FUN_0040370a(param_3);
  DVar1 = FUN_004035ed(2,param_2);
  LocalFree(hMem);
  return DVar1;
}



/* Function: FUN_0040370a */

uint __cdecl FUN_0040370a(DWORD param_1)

{
  DWORD DVar1;
  va_list local_c;
  uint local_8;
  
  local_c = &stack0x00000008;
  local_8 = 0;
  DVar1 = FormatMessageW(0x1900,(LPCVOID)0x0,param_1,0,(LPWSTR)&local_8,0,&local_c);
  return -(uint)(DVar1 != 0) & local_8;
}



/* Function: FUN_00403750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403750(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_004039af();
  DAT_00405918 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00403c74(1);
  __set_app_type(iVar2);
  _DAT_00405c50 = 0xffffffff;
  _DAT_00405c54 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_00405c48;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00405c3c;
  FUN_00403cd0();
  if (DAT_00405000 == 0) {
    __setusermatherr(FUN_00403cd0);
  }
  FUN_00403ed7();
  return 0;
}



/* Function: FUN_004037c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037c0(void)

{
  _DAT_0040591c = DAT_00405c44;
  _DAT_00405914 =
       __getmainargs(&DAT_00405908,(char ***)&DAT_0040590c,(char ***)&DAT_00405910,DAT_00405c40,
                     (_startupinfo *)&DAT_0040591c);
  return;
}



/* Function: FUN_004037f9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004037f9(void)

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
    if (DAT_00405c58 != 0) {
      iVar4 = DAT_00405c58;
      iVar3 = DAT_00405c58;
    }
    DAT_00405c58 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00403841;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00403841:
  if (DAT_00405c5c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00405c5c == 0) {
    DAT_00405c5c = 1;
    iVar5 = FUN_00403978((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00405904 = 1;
  }
  if (DAT_00405c5c == 1) {
    initterm(&DAT_004010c8,&DAT_004010d0);
    DAT_00405c5c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00405c58 = 0;
    UNLOCK();
  }
  if ((DAT_00405c60 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00405c60), pcVar2 = DAT_00405c60, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00406150)(0,2,0);
    (*pcVar2)();
  }
  DAT_00405900 = FUN_00401602(DAT_00405908,DAT_0040590c);
  if (DAT_00405918 != 0) {
    if (DAT_00405904 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00405900;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00405900);
}



/* Function: FUN_00403978 */

void __cdecl FUN_00403978(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00406150)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_004039af */

bool FUN_004039af(void)

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
  FUN_00403e39();
  FUN_004037f9();
  return;
}



/* Function: FUN_00403a30 */

void __fastcall FUN_00403a30(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00405040) {
    return;
  }
  FUN_00403a76(param_1,param_2);
  return;
}



/* Function: FUN_00403a46 */

void __cdecl FUN_00403a46(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00403a76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00403a76(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00405a30 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00405a34 = &stack0x00000004;
  _DAT_00405970 = 0x10001;
  _DAT_00405920 = 0xc0000409;
  _DAT_00405924 = 1;
  _DAT_00405930 = 3;
  DAT_00405934 = 2;
  DAT_00405938 = DAT_00405040;
  DAT_0040593c = DAT_00405080;
  uStack_c = DAT_00405040;
  uStack_8 = DAT_00405080;
  _DAT_0040592c = unaff_retaddr;
  _DAT_004059fc = in_GS;
  _DAT_00405a00 = in_FS;
  _DAT_00405a04 = in_ES;
  _DAT_00405a08 = in_DS;
  _DAT_00405a0c = unaff_EDI;
  _DAT_00405a10 = unaff_ESI;
  _DAT_00405a14 = unaff_EBX;
  _DAT_00405a18 = param_2;
  _DAT_00405a1c = param_1;
  _DAT_00405a20 = in_EAX;
  _DAT_00405a24 = unaff_EBP;
  DAT_00405a28 = unaff_retaddr;
  _DAT_00405a2c = in_CS;
  _DAT_00405a38 = in_SS;
  FUN_00403a46((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_00403b90 */

undefined4 FUN_00403b90(int *param_1)

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



/* Function: FUN_00403be0 */

undefined4 FUN_00403be0(void)

{
  SetUnhandledExceptionFilter(FUN_00403b90);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00403c00 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00403c00(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00403c74 */

undefined4 __cdecl FUN_00403c74(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00403c00(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00403cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00403cd0 */

undefined4 FUN_00403cd0(void)

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
  
  pcStack_10 = FUN_00403f60;
  local_14 = ExceptionList;
  local_c = DAT_00405040 ^ 0x404010;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00403e00((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00403e00 */

bool __cdecl FUN_00403e00(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00403e39 */

void FUN_00403e39(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00405040 == 0xbb40e64e) || ((DAT_00405040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00405040 & 0xffff0000, DAT_00405040 = local_8, uVar1 == 0)) {
      DAT_00405040 = 0xbb40e64f;
    }
  }
  DAT_00405080 = ~DAT_00405040;
  return;
}



/* Function: FUN_00403ed7 */

void FUN_00403ed7(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403ef0. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00405040 ^ (uint)&param_2;
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



/* Function: FUN_00403f60 */

void __cdecl
FUN_00403f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00405040,FUN_00403a30,param_1,param_2,param_3,param_4);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403f8b. Too many branches */
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



/* Function: FUN_00403fa9 */

FILE * __cdecl FUN_00403fa9(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



