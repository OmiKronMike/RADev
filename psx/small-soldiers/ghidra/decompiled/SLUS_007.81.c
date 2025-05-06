typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong u_long;

typedef ushort u_short;

typedef uchar u_char;

typedef struct MATRIX MATRIX, *PMATRIX;

struct MATRIX {
    short m[3][3];
    long t[3];
};

typedef struct VECTOR VECTOR, *PVECTOR;

struct VECTOR {
    long vx;
    long vy;
    long vz;
    long pad;
};

typedef struct SVECTOR SVECTOR, *PSVECTOR;

struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short pad;
};

typedef struct CVECTOR CVECTOR, *PCVECTOR;

struct CVECTOR {
    u_char r;
    u_char g;
    u_char b;
    u_char cd;
};

typedef struct DVECTOR DVECTOR, *PDVECTOR;

struct DVECTOR {
    short vx;
    short vy;
};

typedef struct GsOT_TAG GsOT_TAG, *PGsOT_TAG;

struct GsOT_TAG {
    uint p:24;
    uchar num:8;
};

typedef struct GsRVIEW2 GsRVIEW2, *PGsRVIEW2;

typedef struct _GsCOORDINATE2 _GsCOORDINATE2, *P_GsCOORDINATE2;

typedef struct _GsCOORDINATE2 GsCOORDINATE2;

typedef struct GsCOORD2PARAM GsCOORD2PARAM, *PGsCOORD2PARAM;

struct GsCOORD2PARAM {
    struct VECTOR scale;
    struct SVECTOR rotate;
    struct VECTOR trans;
};

struct _GsCOORDINATE2 {
    ulong flg;
    struct MATRIX coord;
    struct MATRIX workm;
    struct GsCOORD2PARAM *param;
    struct _GsCOORDINATE2 *super;
    struct _GsCOORDINATE2 *sub;
};

struct GsRVIEW2 {
    long vpx;
    long vpy;
    long vpz;
    long vrx;
    long vry;
    long vrz;
    long rz;
    GsCOORDINATE2 *super;
};

typedef struct GsOT GsOT, *PGsOT;

struct GsOT {
    ulong length;
    struct GsOT_TAG *org;
    ulong offset;
    ulong point;
    struct GsOT_TAG *tag;
};

typedef struct GsIMAGE GsIMAGE, *PGsIMAGE;

struct GsIMAGE {
    ulong pmode;
    short px;
    short py;
    ushort pw;
    ushort ph;
    ulong *pixel;
    short cx;
    short cy;
    ushort cw;
    ushort ch;
    ulong *clut;
};

typedef struct GsF_LIGHT GsF_LIGHT, *PGsF_LIGHT;

struct GsF_LIGHT {
    int vx;
    int vy;
    int vz;
    uchar r;
    uchar g;
    uchar b;
};

typedef struct VERTC VERTC, *PVERTC;

struct VERTC {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
    struct CVECTOR col;
};

typedef struct CdlLOC CdlLOC, *PCdlLOC;

struct CdlLOC {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
};

typedef struct CdlATV CdlATV, *PCdlATV;

struct CdlATV {
    u_char val0;
    u_char val1;
    u_char val2;
    u_char val3;
};

typedef struct CdlFILE CdlFILE, *PCdlFILE;

struct CdlFILE {
    struct CdlLOC pos;
    u_long size;
    char name[16];
};

typedef struct RECT RECT, *PRECT;

struct RECT {
    short x;
    short y;
    short w;
    short h;
};

typedef struct LINE_F3 LINE_F3, *PLINE_F3;

struct LINE_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    u_long pad;
};

typedef struct LINE_F4 LINE_F4, *PLINE_F4;

struct LINE_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
    u_long pad;
};

typedef struct DR_MOVE DR_MOVE, *PDR_MOVE;

struct DR_MOVE {
    u_long tag;
    u_long code[5];
};

typedef struct DIRENTRY DIRENTRY, *PDIRENTRY;

struct DIRENTRY {
};

typedef struct SpuVoiceAttr SpuVoiceAttr, *PSpuVoiceAttr;

typedef struct SpuVolume SpuVolume, *PSpuVolume;

struct SpuVolume {
    short left;
    short right;
};

struct SpuVoiceAttr {
    ulong voice;
    ulong mask;
    struct SpuVolume volume;
    struct SpuVolume volmode;
    struct SpuVolume volumex;
    ushort pitch;
    ushort note;
    ushort sample_note;
    short envx;
    ulong addr;
    ulong loop_addr;
    long a_mode;
    long s_mode;
    long r_mode;
    ushort ar;
    ushort dr;
    ushort sr;
    ushort rr;
    ushort sl;
    ushort adsr1;
    ushort adsr2;
};

typedef struct SpuExtAttr SpuExtAttr, *PSpuExtAttr;

struct SpuExtAttr {
    struct SpuVolume volume;
    long reverb;
    long mix;
};

typedef struct SpuCommonAttr SpuCommonAttr, *PSpuCommonAttr;

struct SpuCommonAttr {
    ulong mask;
    struct SpuVolume mvol;
    struct SpuVolume mvolmode;
    struct SpuVolume mvolx;
    struct SpuExtAttr cd;
    struct SpuExtAttr ext;
};

typedef struct SpuReverbAttr SpuReverbAttr, *PSpuReverbAttr;

struct SpuReverbAttr {
    ulong mask;
    long mode;
    struct SpuVolume depth;
    long delay;
    long feedback;
};




undefined4 FUN_80011518(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  
  iVar2 = 0;
  do {
    iVar1 = FUN_80027320(2,param_1,0);
    if (iVar1 != 0) {
      iVar2 = 0;
      while ((iVar1 = FUN_80027320(0x15,0,0), iVar1 == 0 ||
             (iVar1 = FUN_800272b8(0,auStack_20), iVar1 != 2))) {
        printf("Retrying CdlSeekL.\n");
        iVar2 = iVar2 + 1;
        FUN_80027074();
        if (9 < iVar2) {
          return 1;
        }
      }
      return 1;
    }
    printf("Retrying CdlSetLoc.\n");
    iVar2 = iVar2 + 1;
    FUN_80027074();
  } while (iVar2 < 10);
  return 0;
}



undefined4 FUN_800115f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [8];
  
  iVar2 = 0;
  while (((iVar1 = FUN_80011518(param_4), iVar1 == 0 ||
          (iVar1 = FUN_80029f84(param_1,param_2,param_3), iVar1 == 0)) ||
         (iVar1 = FUN_8002a084(0,auStack_28), iVar1 != 0))) {
    printf("Retrying CdlRead.\n");
    iVar2 = iVar2 + 1;
    FUN_80027074();
    if (9 < iVar2) {
      return 1;
    }
  }
  return 1;
}



CdlFILE * FUN_800116a0(CdlFILE *param_1,char *param_2,int param_3)

{
  CdlFILE *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pCVar1 = CdSearchFile(param_1,param_2);
    if (pCVar1 != (CdlFILE *)0x0) {
      if (param_3 == 0) {
        return pCVar1;
      }
      pCVar1 = (CdlFILE *)FUN_80011518(pCVar1);
      return pCVar1;
    }
    iVar2 = iVar2 + 1;
    FUN_80027074();
    printf("Retrying CdSearchFile (%s).\n",param_2);
  } while (iVar2 < 10);
  return (CdlFILE *)0x0;
}



char * FUN_80011750(char *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  *param_1 = DAT_80041a2c;
  if (param_3 != 0) {
    strcat(param_1,s_cdrom__80041a30);
  }
  if (*param_2 != 0x5c) {
    strcat(param_1,&DAT_80041a38);
  }
  iVar2 = FUN_80033d14(param_1);
  pbVar3 = (byte *)(param_1 + iVar2);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    if (bVar1 < 0x61) {
      *pbVar3 = bVar1;
    }
    else {
      *pbVar3 = bVar1 - 0x20;
    }
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *param_2;
  }
  *pbVar3 = 0;
  strcat(param_1,&DAT_80041a3c);
  return param_1;
}



int FUN_80011838(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_230 [4];
  int local_22c;
  undefined1 auStack_118 [256];
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_80011750(auStack_118,param_1,0);
  iVar1 = FUN_800116a0(auStack_230,auStack_118,0);
  if (iVar1 == 0) {
    printf("=>=>=>=> FILE TRANSFER ERROR: %s\n",auStack_118);
  }
  else {
    uVar3 = local_22c + 0x7ffU >> 0xb;
    iVar2 = param_3;
    if ((param_3 != 0) || (iVar2 = FUN_8001c388(uVar3 << 0xb | 1), iVar2 != 0)) {
      iVar1 = FUN_800115f0(uVar3,iVar2,0x80,auStack_230);
      if (iVar1 != 0) {
        iVar4 = local_22c;
      }
      goto LAB_8001191c;
    }
  }
  if ((param_3 == 0) && (iVar2 != 0)) {
    FUN_8001c0ac(iVar2);
  }
  iVar2 = 0;
LAB_8001191c:
  if ((iVar2 != 0) && (param_3 == 0)) {
    *(undefined1 *)(iVar2 + iVar4) = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  return iVar2;
}



int FUN_8001195c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  iVar2 = *param_1;
  if (0 < iVar2) {
    param_1 = param_1 + iVar2;
    do {
      iVar1 = FUN_8001c388(*param_1);
      if (iVar1 != 0) {
        *param_2 = iVar2;
        return iVar1;
      }
      iVar1 = *param_1;
      param_1 = param_1 + -1;
      iVar3 = iVar2 + -1;
      printf("Could not load i=%d size=%ld\n",iVar2,iVar1);
      iVar2 = iVar3;
    } while (0 < iVar3);
  }
  return 0;
}



undefined4 FUN_8001272c(short *param_1,short *param_2)

{
  MATRIX *r0;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  SVECTOR *r0_00;
  undefined1 local_18 [24];
  
  r0_00 = (SVECTOR *)local_18;
  uVar4 = 0;
  r0 = (MATRIX *)&DAT_8009bc90;
  iVar2 = *(int *)(*(int *)(DAT_8009a6d0 + 0x2d0) + 0xac);
  gte_SetRotMatrix((MATRIX *)&DAT_8009bc90);
  gte_SetTransMatrix(r0);
  iVar1 = *(int *)(iVar2 + 0x48);
  iVar3 = *(int *)(iVar2 + 0x4c);
  if (*(int *)(iVar2 + 0x44) < 0) {
    r0_00->vx = *param_1;
  }
  else {
    r0_00->vx = *param_2;
  }
  if (iVar1 < 0) {
    r0_00->vy = param_1[1];
  }
  else {
    r0_00->vy = param_2[1];
  }
  if (iVar3 < 0) {
    r0_00->vz = param_1[2];
  }
  else {
    r0_00->vz = param_2[2];
  }
  gte_ldv0(r0_00);
  gte_rtps();
  iVar1 = *(int *)(iVar2 + 100);
  iVar3 = *(int *)(iVar2 + 0x68);
  if (*(int *)(iVar2 + 0x60) < 0) {
    r0_00->vx = *param_1;
  }
  else {
    r0_00->vx = *param_2;
  }
  if (iVar1 < 0) {
    *(short *)((int)r0_00 + 2) = param_1[1];
  }
  else {
    *(short *)((int)r0_00 + 2) = param_2[1];
  }
  if (iVar3 < 0) {
    *(short *)((int)r0_00 + 4) = param_1[2];
  }
  else {
    *(short *)((int)r0_00 + 4) = param_2[2];
  }
  gte_stflg((long *)((int)r0_00 + 0x10));
  if (((ulonglong)r0_00[2] & 0x20000) == 0) {
    gte_ldv0(r0_00);
    gte_rtps();
    iVar1 = *(int *)(iVar2 + 0x80);
    iVar3 = *(int *)(iVar2 + 0x84);
    if (*(int *)(iVar2 + 0x7c) < 0) {
      r0_00->vx = *param_1;
    }
    else {
      r0_00->vx = *param_2;
    }
    if (iVar1 < 0) {
      *(short *)((int)r0_00 + 2) = param_1[1];
    }
    else {
      *(short *)((int)r0_00 + 2) = param_2[1];
    }
    if (iVar3 < 0) {
      *(short *)((int)r0_00 + 4) = param_1[2];
    }
    else {
      *(short *)((int)r0_00 + 4) = param_2[2];
    }
    gte_stsxy((long *)((int)r0_00 + 8));
    if (-1 < r0_00[1].vx) {
      gte_ldv0(r0_00);
      gte_rtps();
      iVar1 = *(int *)(iVar2 + 0x9c);
      iVar3 = *(int *)(iVar2 + 0xa0);
      if (*(int *)(iVar2 + 0x98) < 0) {
        r0_00->vx = *param_1;
      }
      else {
        r0_00->vx = *param_2;
      }
      if (iVar1 < 0) {
        *(short *)((int)r0_00 + 2) = param_1[1];
      }
      else {
        *(short *)((int)r0_00 + 2) = param_2[1];
      }
      if (iVar3 < 0) {
        *(short *)((int)r0_00 + 4) = param_1[2];
      }
      else {
        *(short *)((int)r0_00 + 4) = param_2[2];
      }
      gte_stsxy((long *)((int)r0_00 + 8));
      if (r0_00[1].vx <= DAT_8009bcb4) {
        gte_ldv0(r0_00);
        gte_rtps();
        iVar1 = *(int *)(iVar2 + 0xb8);
        iVar3 = *(int *)(iVar2 + 0xbc);
        if (*(int *)(iVar2 + 0xb4) < 0) {
          r0_00->vx = *param_1;
        }
        else {
          r0_00->vx = *param_2;
        }
        if (iVar1 < 0) {
          *(short *)((int)r0_00 + 2) = param_1[1];
        }
        else {
          *(short *)((int)r0_00 + 2) = param_2[1];
        }
        if (iVar3 < 0) {
          *(short *)((int)r0_00 + 4) = param_1[2];
        }
        else {
          *(short *)((int)r0_00 + 4) = param_2[2];
        }
        gte_stsxy((long *)((int)r0_00 + 8));
        if (-1 < r0_00[1].vy) {
          gte_ldv0(r0_00);
          gte_rtps();
          iVar1 = *(int *)(iVar2 + 0xd4);
          iVar3 = *(int *)(iVar2 + 0xd8);
          if (*(int *)(iVar2 + 0xd0) < 0) {
            r0_00->vx = *param_1;
          }
          else {
            r0_00->vx = *param_2;
          }
          if (iVar1 < 0) {
            *(short *)((int)r0_00 + 2) = param_1[1];
          }
          else {
            *(short *)((int)r0_00 + 2) = param_2[1];
          }
          if (iVar3 < 0) {
            *(short *)((int)r0_00 + 4) = param_1[2];
          }
          else {
            *(short *)((int)r0_00 + 4) = param_2[2];
          }
          gte_stsxy((long *)((int)r0_00 + 8));
          if (r0_00[1].vy <= DAT_8009bcb8) {
            gte_ldv0(r0_00);
            gte_rtps();
            gte_stsz((long *)((int)r0_00 + 0x14));
            if (*(int *)((int)r0_00 + 0x14) << 0x10 <= *(int *)(iVar2 + 0x34)) {
              uVar4 = 1;
            }
          }
        }
      }
    }
  }
  return uVar4;
}



void FUN_80012b58(int param_1,int param_2,int param_3,int *param_4,short *param_5)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar17 = (uint)*(short *)(param_1 + 0x34);
  uVar16 = (uint)*(short *)(param_1 + 0x36);
  uVar15 = (uint)*(short *)(param_1 + 0x38);
  uVar18 = (uint)*(ushort *)(param_1 + 0x80);
  iVar12 = 0;
  if (param_4 == (int *)0x0) {
    iVar6 = param_2 * 0x10 + *(int *)(param_1 + 0x8c);
    iVar3 = *(int *)(iVar6 + 8);
    pbVar2 = (byte *)(param_3 * 8 + iVar3);
    uVar13 = (uint)*pbVar2;
    uVar10 = (uint)pbVar2[1];
    iVar6 = *(int *)(iVar6 + 0xc);
    iVar11 = uVar10 - uVar13;
    piVar4 = (int *)(iVar6 + (uint)*(ushort *)(uVar10 * 8 + iVar3 + 2) * 4);
    piVar7 = (int *)(iVar6 + (uint)*(ushort *)(uVar13 * 8 + iVar3 + 2) * 4);
    if (iVar11 == 2) {
      iVar12 = 1;
    }
    else if (iVar11 == 4) {
      iVar12 = 2;
    }
    param_3 = param_3 - uVar13;
    if (param_3 == 2) {
      uVar10 = iVar12 - 1;
      iVar12 = 0;
      if (uVar18 != 0) {
        do {
          iVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar11 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar6 = (iVar11 << 0x16) >> 0x16;
          iVar3 = (iVar11 << 0xc) >> 0x16;
          *param_5 = (short)(iVar6 << (uVar17 & 0x1f)) +
                     (short)((((iVar5 << 0x16) >> 0x16) - iVar6 << (uVar17 & 0x1f)) >>
                            (uVar10 & 0x1f));
          iVar6 = (iVar11 << 2) >> 0x16;
          param_5[1] = (short)(iVar3 << (uVar16 & 0x1f)) +
                       (short)((((iVar5 << 0xc) >> 0x16) - iVar3 << (uVar16 & 0x1f)) >>
                              (uVar10 & 0x1f));
          param_5[2] = (short)(iVar6 << (uVar15 & 0x1f)) +
                       (short)((((iVar5 << 2) >> 0x16) - iVar6 << (uVar15 & 0x1f)) >>
                              (uVar10 & 0x1f));
          param_5 = param_5 + 4;
        } while (iVar12 < (int)uVar18);
        return;
      }
    }
    else if (param_3 < 3) {
      if (param_3 == 1) {
        if (iVar12 == 1) {
          if ((((int)uVar17 < 1) && ((int)uVar16 < 1)) && ((int)uVar15 < 1)) {
            iVar12 = 0;
            if (uVar18 != 0) {
              do {
                iVar3 = *piVar4;
                piVar4 = piVar4 + 1;
                iVar6 = *piVar7;
                piVar7 = piVar7 + 1;
                iVar12 = iVar12 + 1;
                *param_5 = (short)(((iVar6 << 0x16) >> 0x16) + ((iVar3 << 0x16) >> 0x16) >> 1);
                param_5[1] = (short)(((iVar6 << 0xc) >> 0x16) + ((iVar3 << 0xc) >> 0x16) >> 1);
                param_5[2] = (short)(((iVar6 << 2) >> 0x16) + ((iVar3 << 2) >> 0x16) >> 1);
                param_5 = param_5 + 4;
              } while (iVar12 < (int)uVar18);
              return;
            }
          }
          else {
            uVar10 = 1;
            if (0 < (int)uVar17) {
              uVar10 = uVar17 - 1;
            }
            uVar13 = 1;
            if (0 < (int)uVar16) {
              uVar13 = uVar16 - 1;
            }
            uVar14 = 1;
            if (0 < (int)uVar15) {
              uVar14 = uVar15 - 1;
            }
            iVar12 = 0;
            if (uVar18 != 0) {
              do {
                iVar3 = *piVar7;
                iVar11 = *piVar4;
                iVar6 = (iVar3 << 0x16) >> 0x16;
                if (uVar17 == 0) {
                  sVar1 = (short)(iVar6 + ((iVar11 << 0x16) >> 0x16) >> 1);
                }
                else {
                  sVar1 = (short)(iVar6 + ((iVar11 << 0x16) >> 0x16) << (uVar10 & 0x1f));
                }
                *param_5 = sVar1;
                if (uVar16 == 0) {
                  sVar1 = (short)(((iVar3 << 0xc) >> 0x16) + ((iVar11 << 0xc) >> 0x16) >> 1);
                }
                else {
                  sVar1 = (short)(((iVar3 << 0xc) >> 0x16) + ((iVar11 << 0xc) >> 0x16) <<
                                 (uVar13 & 0x1f));
                }
                param_5[1] = sVar1;
                if (uVar15 == 0) {
                  sVar1 = (short)(((iVar3 << 2) >> 0x16) + ((iVar11 << 2) >> 0x16) >> 1);
                }
                else {
                  sVar1 = (short)(((iVar3 << 2) >> 0x16) + ((iVar11 << 2) >> 0x16) <<
                                 (uVar14 & 0x1f));
                }
                param_5[2] = sVar1;
                param_5 = param_5 + 4;
                piVar4 = piVar4 + 1;
                iVar12 = iVar12 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar12 < (int)uVar18);
              return;
            }
          }
        }
        else {
          iVar6 = 0;
          if (uVar18 != 0) {
            do {
              iVar8 = *piVar4;
              piVar4 = piVar4 + 1;
              iVar5 = *piVar7;
              piVar7 = piVar7 + 1;
              iVar6 = iVar6 + 1;
              iVar3 = (iVar5 << 0x16) >> 0x16;
              iVar11 = (iVar5 << 0xc) >> 0x16;
              *param_5 = (short)(iVar3 << (uVar17 & 0x1f)) +
                         (short)((((iVar8 << 0x16) >> 0x16) - iVar3 << (uVar17 & 0x1f)) >> iVar12);
              iVar3 = (iVar5 << 2) >> 0x16;
              param_5[1] = (short)(iVar11 << (uVar16 & 0x1f)) +
                           (short)((((iVar8 << 0xc) >> 0x16) - iVar11 << (uVar16 & 0x1f)) >> iVar12)
              ;
              param_5[2] = (short)(iVar3 << (uVar15 & 0x1f)) +
                           (short)((((iVar8 << 2) >> 0x16) - iVar3 << (uVar15 & 0x1f)) >> iVar12);
              param_5 = param_5 + 4;
            } while (iVar6 < (int)uVar18);
            return;
          }
        }
      }
    }
    else {
      if (param_3 != 3) {
        return;
      }
      iVar6 = 0;
      if (uVar18 != 0) {
        uVar10 = iVar12 - 1;
        do {
          iVar9 = *piVar4;
          piVar4 = piVar4 + 1;
          iVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar6 = iVar6 + 1;
          iVar11 = (iVar8 << 0x16) >> 0x16;
          iVar3 = ((iVar9 << 0x16) >> 0x16) - iVar11 << (uVar17 & 0x1f);
          iVar5 = (iVar8 << 0xc) >> 0x16;
          *param_5 = (short)(iVar11 << (uVar17 & 0x1f)) + (short)(iVar3 >> (uVar10 & 0x1f)) +
                     (short)(iVar3 >> iVar12);
          iVar3 = ((iVar9 << 0xc) >> 0x16) - iVar5 << (uVar16 & 0x1f);
          iVar11 = (iVar8 << 2) >> 0x16;
          param_5[1] = (short)(iVar5 << (uVar16 & 0x1f)) + (short)(iVar3 >> (uVar10 & 0x1f)) +
                       (short)(iVar3 >> iVar12);
          iVar3 = ((iVar9 << 2) >> 0x16) - iVar11 << (uVar15 & 0x1f);
          param_5[2] = (short)(iVar11 << (uVar15 & 0x1f)) + (short)(iVar3 >> (uVar10 & 0x1f)) +
                       (short)(iVar3 >> iVar12);
          param_5 = param_5 + 4;
        } while (iVar6 < (int)uVar18);
        return;
      }
    }
  }
  else {
    iVar12 = 0;
    if (uVar18 != 0) {
      do {
        *param_5 = (short)(((*param_4 << 0x16) >> 0x16) << (uVar17 & 0x1f));
        iVar12 = iVar12 + 1;
        param_5[1] = (short)(((*param_4 << 0xc) >> 0x16) << (uVar16 & 0x1f));
        iVar6 = *param_4;
        param_4 = param_4 + 1;
        param_5[2] = (short)(((iVar6 << 2) >> 0x16) << (uVar15 & 0x1f));
        param_5 = param_5 + 4;
      } while (iVar12 < (int)uVar18);
      return;
    }
  }
  return;
}



void FUN_80013a44(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = param_2 == 0;
  uVar6 = param_2 - 1;
  if (param_1 != 0) {
    piVar4 = *(int **)(param_1 + 0x20);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x20);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x20);
          bVar3 = *(byte *)(iVar5 + 0x1f) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x20);
          bVar3 = *(byte *)(iVar5 + 0x1f) | 2;
        }
        *(byte *)(iVar5 + 0x1f) = bVar3;
        piVar4 = *(int **)(param_1 + 0x20);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x2c;
      } while (iVar8 < *piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x28);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x28);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x28);
          bVar3 = *(byte *)(iVar5 + 0x2b) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x28);
          bVar3 = *(byte *)(iVar5 + 0x2b) | 2;
        }
        *(byte *)(iVar5 + 0x2b) = bVar3;
        if (!bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x28);
          uVar2 = (ushort)((uVar6 & 3) << 5);
          *(ushort *)(iVar5 + 0x1a) = *(ushort *)(iVar5 + 0x1a) & 0xff9f | uVar2;
          iVar5 = iVar7 + *(int *)(param_1 + 0x28);
          *(ushort *)(iVar5 + 0x3a) = *(ushort *)(iVar5 + 0x3a) & 0xff9f | uVar2;
        }
        piVar4 = *(int **)(param_1 + 0x28);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x44;
      } while (iVar8 < *piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x24);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x24);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x24);
          bVar3 = *(byte *)(iVar5 + 0x27) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x24);
          bVar3 = *(byte *)(iVar5 + 0x27) | 2;
        }
        *(byte *)(iVar5 + 0x27) = bVar3;
        piVar4 = *(int **)(param_1 + 0x24);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x3c;
      } while (iVar8 < *piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x2c);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x2c);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x2c);
          bVar3 = *(byte *)(iVar5 + 0x33) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x2c);
          bVar3 = *(byte *)(iVar5 + 0x33) | 2;
        }
        *(byte *)(iVar5 + 0x33) = bVar3;
        if (!bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x2c);
          uVar2 = (ushort)((uVar6 & 3) << 5);
          *(ushort *)(iVar5 + 0x1e) = *(ushort *)(iVar5 + 0x1e) & 0xff9f | uVar2;
          iVar5 = iVar7 + *(int *)(param_1 + 0x2c);
          *(ushort *)(iVar5 + 0x46) = *(ushort *)(iVar5 + 0x46) & 0xff9f | uVar2;
        }
        piVar4 = *(int **)(param_1 + 0x2c);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x54;
      } while (iVar8 < *piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x30);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x30);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x30);
          bVar3 = *(byte *)(iVar5 + 0x27) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x30);
          bVar3 = *(byte *)(iVar5 + 0x27) | 2;
        }
        *(byte *)(iVar5 + 0x27) = bVar3;
        piVar4 = *(int **)(param_1 + 0x30);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x3c;
      } while (iVar8 < *piVar4);
    }
    piVar4 = *(int **)(param_1 + 0x34);
    if ((piVar4 != (int *)0x0) && (iVar8 = 0, 0 < *piVar4)) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + (int)piVar4;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x34);
          bVar3 = *(byte *)(iVar5 + 0xb) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(iVar5 + 0xb) | 2;
        }
        *(byte *)(iVar5 + 0xb) = bVar3;
        if (bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x34);
          bVar3 = *(byte *)(iVar5 + 0x33) & 0xfd;
        }
        else {
          iVar5 = iVar7 + *(int *)(param_1 + 0x34);
          bVar3 = *(byte *)(iVar5 + 0x33) | 2;
        }
        *(byte *)(iVar5 + 0x33) = bVar3;
        if (!bVar1) {
          iVar5 = iVar7 + *(int *)(param_1 + 0x34);
          uVar2 = (ushort)((uVar6 & 3) << 5);
          *(ushort *)(iVar5 + 0x1e) = *(ushort *)(iVar5 + 0x1e) & 0xff9f | uVar2;
          iVar5 = iVar7 + *(int *)(param_1 + 0x34);
          *(ushort *)(iVar5 + 0x46) = *(ushort *)(iVar5 + 0x46) & 0xff9f | uVar2;
        }
        piVar4 = *(int **)(param_1 + 0x34);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0x54;
      } while (iVar8 < *piVar4);
    }
  }
  return;
}



undefined4 FUN_80014dd8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uchar auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 auStack_20 [8];
  
  memset(auStack_58,'\0',8);
  uVar5 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x110) - *(int *)(param_2 + 0x110);
    iVar3 = iVar2 >> 0x10;
    local_48 = (undefined2)((uint)iVar2 >> 0x10);
    iVar1 = *(int *)(param_1 + 0x114) - *(int *)(param_2 + 0x114);
    iVar2 = iVar1 >> 0x10;
    local_46 = (undefined2)((uint)iVar1 >> 0x10);
    iVar4 = *(int *)(param_1 + 0x118) - *(int *)(param_2 + 0x118);
    iVar1 = iVar4 >> 0x10;
    local_44 = (undefined2)((uint)iVar4 >> 0x10);
    local_40 = *(undefined4 *)(param_1 + 0x110);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    local_3c = *(int *)(param_1 + 0x114) - (*(int *)(param_1 + 0x260) >> 1);
    local_38 = *(undefined4 *)(param_1 + 0x118);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    local_30 = *(undefined4 *)(param_2 + 0x110);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    local_2c = *(int *)(param_2 + 0x114) - (*(int *)(param_2 + 0x260) >> 1);
    local_28 = *(undefined4 *)(param_2 + 0x118);
    iVar4 = iVar2;
    if (iVar3 < iVar2) {
      iVar4 = iVar3;
      iVar3 = iVar2;
    }
    iVar2 = iVar3;
    if (iVar3 < iVar1) {
      iVar2 = iVar1;
      iVar1 = iVar3;
    }
    if (iVar2 + (iVar4 + iVar1 >> 2) < param_3) {
      iVar3 = FUN_8001f528(&local_40,&local_30,auStack_58,auStack_50,auStack_20,1);
      uVar5 = 0;
      if (iVar3 < 0) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



void FUN_800151cc(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [40];
  
  puVar2 = auStack_38;
  iVar1 = *(int *)(param_1 + 0xac);
  if ((((*(uint *)(param_1 + 8) & 0x1000) != 0) && ((*(uint *)(param_1 + 0x30) & 0x8000) == 0)) &&
     (0 < *(short *)(iVar1 + 0x6e))) {
    iVar1 = *(int *)(*(short *)(iVar1 + 0x6c) * 0x10 + *(int *)(*(int *)(iVar1 + 8) + 0x8c) + 8) +
            *(short *)(iVar1 + 0x6e) * 8;
    if (*(int *)(iVar1 + 4) << 0xc < 0) {
      FUN_80055d88(param_1);
    }
    *(int *)(param_1 + 0xe4) =
         *(int *)(param_1 + 0xe4) + ((*(int *)(iVar1 + 4) << 2) >> 0x16) * 0x10000;
    gte_SetRotMatrix((MATRIX *)(param_1 + 0x288));
    *(short *)(puVar2 + 0x10) = (short)((*(int *)(iVar1 + 4) << 0x16) >> 0x16);
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined2 *)(puVar2 + 0x14) = 0;
    *(short *)(puVar2 + 0x12) = (short)((iVar1 << 0xc) >> 0x16);
    FUN_8002c134(puVar2 + 0x10,puVar2 + 0x18);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + *(int *)(puVar2 + 0x18) * 0x10000;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + *(int *)(puVar2 + 0x1c) * 0x10000;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + *(int *)(puVar2 + 0x20) * 0x10000;
  }
  return;
}



undefined4 FUN_80015320(int param_1,short param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar11 = 0;
  bVar1 = false;
  iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xac) + 8) + 0x7b4);
  puVar6 = (uint *)(iVar8 + param_2 * 0x10);
  if ((param_2 < 0) || (iVar8 == 0)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x28;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (param_3 == 0) {
    uVar3 = *puVar6;
    if ((uVar3 & *(uint *)(param_1 + 0xbc)) != 0) {
      *(uint **)(param_1 + 200) = puVar6;
      *(short *)(param_1 + 0xcc) = param_2;
      *(uint *)(param_1 + 0xd0) = puVar6[3];
      iVar8 = *(int *)(param_1 + 0xac);
      bVar1 = true;
      memcpy(*(uchar **)(iVar8 + 0x40),*(uchar **)(iVar8 + 0x3c),
             (uint)*(ushort *)(iVar8 + 0x38) << 3);
      *(undefined2 *)(*(int *)(param_1 + 0xac) + 0x50) = 4;
      *(undefined2 *)(*(int *)(param_1 + 0xac) + 0x52) = 0xffff;
      goto LAB_8001546c;
    }
    if (((uVar3 & *(uint *)(param_1 + 0xb8)) == 0) &&
       ((((uVar3 & *(uint *)(param_1 + 0xc0)) != 0 || ((uVar3 & *(uint *)(param_1 + 0xc4)) != 0)) ||
        (*(int *)(param_1 + 200) != 0)))) goto LAB_8001546c;
  }
  *(uint **)(param_1 + 200) = puVar6;
  *(short *)(param_1 + 0xcc) = param_2;
  *(uint *)(param_1 + 0xd0) = puVar6[3];
  bVar1 = true;
  *(undefined2 *)(*(int *)(param_1 + 0xac) + 0x50) = 0;
LAB_8001546c:
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    FUN_80051bf8(param_1,0xf);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1ac);
    FUN_80054654(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    if (*(uint *)(param_1 + 0xdc) < 0x1e) {
      memcpy(*(uchar **)(param_1 + 0xd8),(uchar *)(*(int *)(*(int *)(param_1 + 0xac) + 8) + 0xac),
             *(uint *)(param_1 + 0xdc) * 0x3c);
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0xac) + 8);
      puVar5 = (undefined4 *)(iVar8 + 0xac);
      puVar2 = *(undefined4 **)(param_1 + 0xd8);
      do {
        puVar7 = puVar2;
        puVar4 = puVar5;
        uVar11 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        *puVar7 = *puVar4;
        puVar7[1] = uVar11;
        puVar7[2] = uVar9;
        puVar7[3] = uVar10;
        puVar5 = puVar4 + 4;
        puVar2 = puVar7 + 4;
      } while (puVar5 != (undefined4 *)(iVar8 + 0x7ac));
      uVar11 = puVar4[5];
      puVar7[4] = *puVar5;
      puVar7[5] = uVar11;
      uVar3 = 0x1e;
      iVar8 = 0x708;
      if (0x1e < *(uint *)(param_1 + 0xdc)) {
        do {
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xd8)) = 0;
          iVar8 = iVar8 + 0x3c;
        } while (uVar3 < *(uint *)(param_1 + 0xdc));
      }
    }
    *(undefined2 *)(param_1 + 0xd4) = 0xffff;
    uVar11 = 1;
    if (*(int *)(param_1 + 0xac) != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xac) + 0x70) = 0;
    }
  }
  return uVar11;
}



undefined4 FUN_800155b4(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  psVar3 = *(short **)(param_1 + 8);
  uVar6 = 0;
  if (psVar3 == (short *)0x0) {
    uVar6 = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    iVar5 = 0x1d;
    iVar4 = param_1 + 0x6cc;
    do {
      *(undefined4 *)(iVar4 + 0xac) = 0;
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + -0x3c;
    } while (-1 < iVar5);
    sVar1 = *psVar3;
    iVar4 = 0;
    *(short *)(param_1 + 0x7b8) = sVar1;
    sVar2 = psVar3[2];
    *(short **)(param_1 + 0x7b4) = psVar3 + 4;
    *(short *)(param_1 + 0x88) = sVar2;
    if (sVar1 != 0) {
      do {
        iVar5 = iVar4 * 0x10 + *(int *)(param_1 + 0x7b4);
        *(int *)(iVar5 + 0xc) = (int)psVar3 + *(int *)(iVar5 + 0xc);
        iVar4 = iVar4 + 1;
        uVar6 = 0;
      } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x7b8));
    }
  }
  return uVar6;
}



void FUN_800156b8(int param_1,SVECTOR *param_2)

{
  MATRIX *r0;
  
  r0 = (MATRIX *)(param_1 + 0x288);
  gte_SetRotMatrix(r0);
  gte_SetTransMatrix(r0);
  gte_ldv0(param_2);
  gte_rtv0();
  gte_stsv(param_2);
  return;
}


/*
Unable to decompile 'FUN_80015734'
Cause: Exception while decompiling 80015734: process: timeout

*/


void FUN_80019610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20 [2];
  
  iVar2 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 200) == 0) {
    FUN_80015320(param_1,0,0,0);
  }
  else {
    local_20[0] = *(undefined4 *)(param_1 + 0xd0);
    do {
      if (*(short *)(iVar2 + 0x6e) < *(short *)(param_1 + 0xd4)) {
        *(short *)(iVar2 + 0x6e) = *(short *)(iVar2 + 0x6e) + 1;
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_80015734(local_20,param_1,param_1 + 0xb8,iVar2 + 0x6c,1);
      }
      if ((iVar1 == 0) || (param_2 != *(short *)(iVar2 + 0x6e))) {
        iVar1 = 0;
      }
      *(undefined4 *)(param_1 + 0xd0) = local_20[0];
    } while (iVar1 == 0);
  }
  return;
}



undefined4 FUN_800199f8(int param_1)

{
  short sVar1;
  MATRIX *r0;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *flag;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_260 [200];
  uchar local_198 [8];
  uchar local_190 [8];
  uchar local_188 [56];
  uchar auStack_150 [8];
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  short local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 local_12c;
  undefined2 local_128;
  undefined2 local_126;
  undefined2 local_124;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  uchar auStack_110 [16];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_34;
  
  puVar8 = auStack_260;
  uVar6 = 1;
  iVar5 = *(int *)(param_1 + 0x2d4);
  memset(local_198,'\0',8);
  memset(local_190,'\0',8);
  memset(local_188,'\0',8);
  local_34 = 0;
  memset(auStack_150,'\0',8);
  memset(auStack_110,'\0',0x10);
  local_100 = 0x1000;
  local_fc = 0x1000;
  local_f8 = 0x1000;
  local_f4 = 0;
  local_144 = 0x400;
  local_140 = 200;
  local_148 = 0;
  local_146 = 0xffe0;
  local_13e = 0xffe0;
  local_13c = 0x404;
  iVar7 = 0x200000;
  if (*(int *)(iVar5 + 0x94) == 1) {
    local_138 = -*(short *)(param_1 + 0x268);
    *(undefined4 *)(iVar5 + 0x94) = 0;
  }
  else {
    local_138 = *(short *)(param_1 + 0x268);
    *(undefined4 *)(iVar5 + 0x94) = 1;
  }
  local_130 = 200;
  local_136 = 0xffe0;
  local_12e = 0xffe0;
  local_128 = 0xfe00;
  local_134 = 0;
  local_12c = 0;
  local_126 = 0xffa0;
  local_124 = 10;
  local_120 = 0x200;
  local_11e = 0xffa0;
  local_11c = 10;
  PushMatrix();
  r0 = (MATRIX *)(param_1 + 0x288);
  gte_SetRotMatrix(r0);
  gte_SetTransMatrix(r0);
  flag = (long *)(puVar8 + 0x228);
  RotTrans((SVECTOR *)(puVar8 + 0x118),(VECTOR *)(puVar8 + 0x170),flag);
  RotTrans((SVECTOR *)(puVar8 + 0x120),(VECTOR *)(puVar8 + 0x180),flag);
  RotTrans((SVECTOR *)(puVar8 + 0x128),(VECTOR *)(puVar8 + 400),flag);
  RotTrans((SVECTOR *)(puVar8 + 0x130),(VECTOR *)(puVar8 + 0x1a0),flag);
  RotTrans((SVECTOR *)(puVar8 + 0x140),(VECTOR *)(puVar8 + 0x1b0),flag);
  RotTrans((SVECTOR *)(puVar8 + 0x138),(VECTOR *)(puVar8 + 0x1c0),flag);
  PopMatrix();
  *(int *)(puVar8 + 0x18) = *(int *)(puVar8 + 0x170) << 0x10;
  *(int *)(puVar8 + 0x20) = *(int *)(puVar8 + 0x178) << 0x10;
  *(int *)(puVar8 + 0x1c) = *(int *)(puVar8 + 0x174) << 0x10;
  *(int *)(puVar8 + 0x2c) = *(int *)(puVar8 + 0x184) << 0x10;
  *(int *)(puVar8 + 0x28) = *(int *)(puVar8 + 0x180) << 0x10;
  *(int *)(puVar8 + 0x38) = *(int *)(puVar8 + 0x1a0) << 0x10;
  *(int *)(puVar8 + 0x30) = *(int *)(puVar8 + 0x188) << 0x10;
  *(int *)(puVar8 + 0x40) = *(int *)(puVar8 + 0x1a8) << 0x10;
  *(int *)(puVar8 + 0x3c) = *(int *)(puVar8 + 0x1a4) << 0x10;
  *(int *)(puVar8 + 0x4c) = *(int *)(puVar8 + 0x194) << 0x10;
  *(int *)(puVar8 + 0x48) = *(int *)(puVar8 + 400) << 0x10;
  *(int *)(puVar8 + 0x68) = *(int *)(puVar8 + 0x1c0) << 0x10;
  *(int *)(puVar8 + 0x50) = *(int *)(puVar8 + 0x198) << 0x10;
  *(int *)(puVar8 + 0x70) = *(int *)(puVar8 + 0x1c8) << 0x10;
  *(int *)(puVar8 + 0x6c) = *(int *)(puVar8 + 0x1c4) << 0x10;
  *(int *)(puVar8 + 0x78) = *(int *)(puVar8 + 0x1b0) << 0x10;
  *(int *)(puVar8 + 0x7c) = *(int *)(puVar8 + 0x1b4) << 0x10;
  *(int *)(puVar8 + 0x80) = *(int *)(puVar8 + 0x1b8) << 0x10;
  *(undefined4 *)(puVar8 + 0x58) = *(undefined4 *)(param_1 + 0x110);
  *(int *)(puVar8 + 0x5c) = *(int *)(param_1 + 0x114) + -0x600000;
  *(undefined4 *)(puVar8 + 0x60) = *(undefined4 *)(param_1 + 0x118);
  if ((*(int *)(param_1 + (*(uint **)(param_1 + 0x2d4))[0x15] * 4 + 0x40) == 1) &&
     ((**(uint **)(param_1 + 0x2d4) & 8) != 0)) {
    uVar6 = *(undefined4 *)(param_1 + 0x114);
    uVar4 = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(puVar8 + 0x2c) = uVar6;
    *(undefined4 *)(puVar8 + 0x30) = uVar4;
    *(int *)(puVar8 + 0x2c) = *(int *)(puVar8 + 0x2c) + 0x80000;
    iVar5 = *(int *)(param_1 + 0x2d4);
    uVar6 = *(undefined4 *)(iVar5 + 0xa0);
    uVar4 = *(undefined4 *)(iVar5 + 0xa4);
    *(undefined4 *)(puVar8 + 0x38) = *(undefined4 *)(iVar5 + 0x9c);
    *(undefined4 *)(puVar8 + 0x3c) = uVar6;
    *(undefined4 *)(puVar8 + 0x40) = uVar4;
    *(undefined4 *)(puVar8 + 0x3c) = *(undefined4 *)(puVar8 + 0x2c);
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x22c;
    *(undefined4 *)(puVar8 + 0x14) = 1;
    FUN_8001f528(puVar8 + 0x28,puVar8 + 0x38,puVar8 + 200,puVar8 + 0xe8);
    *(undefined4 *)(puVar8 + 0x8c) = 0;
    *(int *)(puVar8 + 0x88) = (int)*(short *)(puVar8 + 200);
    *(int *)(puVar8 + 0x90) = (int)*(short *)(puVar8 + 0xcc);
    sVar1 = *(short *)(param_1 + 0x28c);
    *(undefined4 *)(puVar8 + 0x9c) = 0;
    *(int *)(puVar8 + 0x98) = (int)sVar1;
    *(int *)(puVar8 + 0xa0) = (int)*(short *)(param_1 + 0x298);
    FUN_8002cb58(puVar8 + 0x88,puVar8 + 0x98,puVar8 + 0xa8);
    if (*(int *)(puVar8 + 0xac) < 1) {
      if (*(int *)(puVar8 + 0xac) < 0) {
        iVar7 = *(int *)(param_1 + 0x144) - iVar7;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x144) + iVar7 * 2;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x144) + iVar7;
    }
    *(int *)(param_1 + 0x144) = iVar7;
    return 0;
  }
  *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x22c;
  *(undefined4 *)(puVar8 + 0x14) = 1;
  iVar2 = FUN_8001f528(puVar8 + 0x18,puVar8 + 0x48,puVar8 + 200,puVar8 + 0xe0);
  if (iVar2 < 0) {
    if (*(int *)(iVar5 + 0x94) == *(int *)(iVar5 + 0x98)) {
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
    iVar2 = *(int *)(iVar5 + 0x94);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar5 + 0x84) = 0;
      iVar2 = *(int *)(iVar5 + 0x94);
    }
    if (iVar2 == 1) {
      *(undefined4 *)(iVar5 + 0x88) = 0;
    }
    if ((*(int *)(iVar5 + 0x84) != 0) || (*(int *)(iVar5 + 0x88) != 0)) {
      uVar6 = 0;
    }
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x230;
    *(undefined4 *)(puVar8 + 0x14) = 1;
    iVar2 = FUN_8001f528(puVar8 + 0x78,puVar8 + 0x58,puVar8 + 0xd0,puVar8 + 0x108);
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x234;
    *(undefined4 *)(puVar8 + 0x14) = 1;
    iVar3 = FUN_8001f528(puVar8 + 0x68,puVar8 + 0x58,puVar8 + 0xd8,puVar8 + 0x108);
    if ((iVar2 < 0) && (iVar3 < 0)) {
      return uVar6;
    }
    if (iVar3 < 0) {
      *(undefined4 *)(iVar5 + 0x8c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x8c) = 1;
    }
    if (iVar2 < 0) {
      *(undefined4 *)(iVar5 + 0x90) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x90) = 1;
    }
    if (iVar3 < 0) {
      if (iVar2 < 0) goto LAB_8001a120;
      iVar7 = *(int *)(param_1 + 0x138) - (iVar7 >> 1);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x138) + (iVar7 >> 1);
    }
    *(int *)(param_1 + 0x138) = iVar7;
  }
  else {
    *(int *)(iVar5 + 0x98) = *(int *)(iVar5 + 0x94);
    if (*(int *)(iVar5 + 0x94) == 0) {
      *(undefined4 *)(iVar5 + 0x84) = 1;
    }
    if (*(int *)(iVar5 + 0x94) == 1) {
      *(undefined4 *)(iVar5 + 0x88) = 1;
    }
    if (*(int *)(param_1 + 0x144) != 0) {
      return 0;
    }
    *(undefined4 *)(puVar8 + 0x8c) = 0;
    *(int *)(puVar8 + 0x88) = (int)*(short *)(puVar8 + 200);
    *(int *)(puVar8 + 0x90) = (int)*(short *)(puVar8 + 0xcc);
    sVar1 = *(short *)(param_1 + 0x28c);
    *(undefined4 *)(puVar8 + 0x9c) = 0;
    *(int *)(puVar8 + 0x98) = (int)sVar1;
    *(int *)(puVar8 + 0xa0) = (int)*(short *)(param_1 + 0x298);
    FUN_8002cb58(puVar8 + 0x88,puVar8 + 0x98,puVar8 + 0xa8);
    if (*(short *)(puVar8 + 0xca) < -10000) {
      return 0;
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20000000;
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x230;
    *(undefined4 *)(puVar8 + 0x14) = 1;
    iVar2 = FUN_8001f528(puVar8 + 0x78,puVar8 + 0x58,puVar8 + 0xd0,puVar8 + 0x108);
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x234;
    *(undefined4 *)(puVar8 + 0x14) = 1;
    iVar3 = FUN_8001f528(puVar8 + 0x68,puVar8 + 0x58,puVar8 + 0xd8,puVar8 + 0x108);
    if ((iVar2 < 0) && (iVar3 < 0)) {
      if (*(int *)(puVar8 + 0xac) < 0) {
        iVar7 = *(int *)(param_1 + 0x144) + iVar7;
      }
      else if (*(int *)(puVar8 + 0xac) < 1) {
        iVar7 = *(int *)(param_1 + 0x144) + iVar7 * 2;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x144) - iVar7;
      }
      *(int *)(param_1 + 0x144) = iVar7;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (iVar3 < 0) {
      *(undefined4 *)(iVar5 + 0x8c) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x8c) = 1;
    }
    if (iVar2 < 0) {
      *(undefined4 *)(iVar5 + 0x90) = 0;
    }
    else {
      *(undefined4 *)(iVar5 + 0x90) = 1;
    }
    if ((iVar3 < 0) || (*(short *)(puVar8 + 0xda) < -9999)) {
      if ((iVar2 < 0) || (*(short *)(puVar8 + 0xd2) < -9999)) goto LAB_8001a120;
      iVar7 = *(int *)(param_1 + 0x144) - iVar7;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x144) + iVar7;
    }
    *(int *)(param_1 + 0x144) = iVar7;
  }
LAB_8001a120:
  if (-1 < iVar3) {
    *(uint *)(param_1 + 0xe8) =
         *(int *)(param_1 + 0xe8) + (*(short *)(puVar8 + 0xd8) * 8 + 0x8000U & 0xffff0000);
    *(uint *)(param_1 + 0xf0) =
         *(int *)(param_1 + 0xf0) + (*(short *)(puVar8 + 0xdc) * 8 + 0x8000U & 0xffff0000);
  }
  if (-1 < iVar2) {
    *(uint *)(param_1 + 0xe8) =
         *(int *)(param_1 + 0xe8) + (*(short *)(puVar8 + 0xd0) * 8 + 0x8000U & 0xffff0000);
    *(uint *)(param_1 + 0xf0) =
         *(int *)(param_1 + 0xf0) + (*(short *)(puVar8 + 0xd4) * 8 + 0x8000U & 0xffff0000);
  }
  return 0;
}



void FUN_8001a1dc(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_28 [4];
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_5 == 0) {
    local_48[0] = (int)*(short *)(param_1 + 0x28c);
    local_48[2] = (int)*(short *)(param_1 + 0x298);
  }
  else {
    local_48[0] = -(int)*(short *)(param_1 + 0x28c);
    local_48[2] = -(int)*(short *)(param_1 + 0x298);
  }
  local_48[1] = 0;
  local_34 = 0;
  local_38 = param_2 - *(int *)(param_1 + 0x110) >> 0x10;
  local_30 = param_4 - *(int *)(param_1 + 0x118) >> 0x10;
  FUN_8002cb58(local_48,&local_38,local_28);
  local_24 = local_24 >> 4;
  iVar1 = -0x80;
  if ((local_24 < -0x80) || (iVar1 = 0x80, 0x80 < local_24)) {
    local_24 = iVar1;
  }
  if (local_24 + 0x20U < 0x41) {
    if (local_18 < 0) {
      local_18 = -local_18;
    }
    if (local_10 < 0) {
      local_10 = -local_10;
    }
    if (local_14 < 0) {
      local_14 = -local_14;
    }
    iVar1 = local_18;
    if (local_18 < local_14) {
      iVar1 = local_14;
      local_14 = local_18;
    }
    iVar2 = local_10;
    if (iVar1 < local_10) {
      iVar2 = iVar1;
      iVar1 = local_10;
    }
    if (local_38 < 0) {
      local_38 = -local_38;
    }
    if (local_30 < 0) {
      local_30 = -local_30;
    }
    if (local_34 < 0) {
      local_34 = -local_34;
    }
    iVar4 = local_38;
    if (local_38 < local_34) {
      iVar4 = local_34;
      local_34 = local_38;
    }
    iVar3 = local_30;
    if (iVar4 < local_30) {
      iVar3 = iVar4;
      iVar4 = local_30;
    }
    if (iVar1 + (local_14 + iVar2 >> 2) <= iVar4 + (local_34 + iVar3 >> 2)) goto LAB_8001a3b8;
  }
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + local_24 * 0x10000;
LAB_8001a3b8:
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfff0000;
  return;
}



void FUN_8001a3d8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_38 [4];
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  
  uVar5 = **(uint **)(param_1 + 0x2d4);
  iVar1 = 1;
  if ((uVar5 & 4) != 0) {
    iVar1 = FUN_80014dd8(param_1,param_2,0x800);
    *(int *)(param_1 + param_3 * 4 + 0x40) = iVar1;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_800199f8(param_1,uVar5);
  }
  if (iVar1 != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_2 == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x100000) != 0) {
    return;
  }
  if (param_4 == 0) {
    local_58[0] = (int)*(short *)(param_1 + 0x28c);
    local_58[2] = (int)*(short *)(param_1 + 0x298);
  }
  else {
    local_58[0] = -(int)*(short *)(param_1 + 0x28c);
    local_58[2] = -(int)*(short *)(param_1 + 0x298);
  }
  local_58[1] = 0;
  local_44 = 0;
  local_48 = *(int *)(param_2 + 0x110) - *(int *)(param_1 + 0x110) >> 0x10;
  local_40 = *(int *)(param_2 + 0x118) - *(int *)(param_1 + 0x118) >> 0x10;
  local_24 = 0;
  local_28 = (int)*(short *)(param_2 + 0x28c) - (int)*(short *)(param_1 + 0x112);
  local_20 = (int)*(short *)(param_2 + 0x298) - (int)*(short *)(param_1 + 0x11a);
  FUN_8002cb58(local_58,&local_48,local_38);
  local_34 = local_34 >> 2;
  iVar1 = -0x80;
  if ((local_34 < -0x80) || (iVar1 = 0x80, 0x80 < local_34)) {
    local_34 = iVar1;
  }
  if (local_34 + 0x10U < 0x21) {
    if (local_28 < 0) {
      local_28 = -local_28;
    }
    if (local_20 < 0) {
      local_20 = -local_20;
    }
    if (local_24 < 0) {
      local_24 = -local_24;
    }
    iVar1 = local_28;
    if (local_28 < local_24) {
      iVar1 = local_24;
      local_24 = local_28;
    }
    iVar3 = local_20;
    if (iVar1 < local_20) {
      iVar3 = iVar1;
      iVar1 = local_20;
    }
    if (local_48 < 0) {
      local_48 = -local_48;
    }
    if (local_40 < 0) {
      local_40 = -local_40;
    }
    if (local_44 < 0) {
      local_44 = -local_44;
    }
    iVar4 = local_48;
    if (local_48 < local_44) {
      iVar4 = local_44;
      local_44 = local_48;
    }
    iVar2 = local_40;
    if (iVar4 < local_40) {
      iVar2 = iVar4;
      iVar4 = local_40;
    }
    if (iVar1 + (local_24 + iVar3 >> 2) <= iVar4 + (local_44 + iVar2 >> 2)) goto LAB_8001a654;
  }
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + local_34 * 0x10000;
LAB_8001a654:
  iVar3 = *(int *)(param_1 + 0x138);
  iVar1 = iVar3 + -0xfff0000;
  if ((0xfff0000 < iVar3) || (iVar1 = iVar3 + 0xfff0000, iVar3 < 0)) {
    *(int *)(param_1 + 0x138) = iVar1;
  }
  return;
}



undefined4 FUN_8001ad14(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_b8 [4];
  int local_a8 [4];
  undefined1 local_98 [4];
  int local_94;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  undefined4 local_74;
  int local_70;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  uchar auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined1 auStack_28 [8];
  
  iVar7 = 1;
  uVar8 = **(uint **)(param_1 + 0x2d4);
  if ((DAT_8009e878 == 0) || ((int)param_2 < 0)) {
    uVar1 = 0;
  }
  else {
    puVar4 = (ushort *)
             ((param_2 & 0xffff) * 0x14 + *(int *)((param_2 >> 0x10) * 0xc + DAT_8009e878 + 4));
    local_68 = *puVar4;
    local_66 = puVar4[1];
    local_64 = puVar4[2];
    if ((uVar8 & 4) != 0) {
      memset(auStack_60,'\0',8);
      iVar7 = 0;
      iVar2 = (int)*(short *)(param_1 + 0x112) - (uint)local_68;
      local_50 = (undefined2)iVar2;
      iVar2 = iVar2 * 0x10000 >> 0x10;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      local_38 = (uint)local_68 << 0x10;
      iVar5 = (int)*(short *)(param_1 + 0x116) - (uint)local_66;
      local_4e = (undefined2)iVar5;
      iVar5 = iVar5 * 0x10000 >> 0x10;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      iVar3 = (int)*(short *)(param_1 + 0x11a) - (uint)local_64;
      local_4c = (undefined2)iVar3;
      iVar3 = iVar3 * 0x10000 >> 0x10;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      local_48 = *(undefined4 *)(param_1 + 0x110);
      local_30 = (uint)local_64 << 0x10;
      local_44 = *(int *)(param_1 + 0x114) + -0x640000;
      local_34 = (uint)local_66 * 0x10000 + -0x640000;
      local_40 = *(undefined4 *)(param_1 + 0x118);
      iVar6 = iVar2;
      if (iVar2 < iVar5) {
        iVar6 = iVar5;
        iVar5 = iVar2;
      }
      iVar2 = iVar6;
      if (iVar6 < iVar3) {
        iVar2 = iVar3;
        iVar3 = iVar6;
      }
      if (iVar2 + (iVar5 + iVar3 >> 2) < 0x400) {
        iVar2 = FUN_8001f528(&local_48,&local_38,auStack_60,auStack_58,auStack_28,1);
        iVar7 = 0;
        if (iVar2 < 0) {
          iVar7 = 1;
        }
      }
      *(int *)(param_1 + param_3 * 4 + 0x40) = iVar7;
    }
    if (iVar7 == 0) {
      iVar7 = FUN_800199f8(param_1,uVar8);
    }
    uVar1 = 1;
    if (iVar7 == 1) {
      local_b8[0] = (int)*(short *)(param_1 + 0x28c);
      local_b8[1] = 0;
      local_b8[2] = (int)*(short *)(param_1 + 0x298);
      local_a8[1] = 0;
      local_a8[0] = (int)(short)local_68 - (int)*(short *)(param_1 + 0x112);
      local_a8[2] = (int)(short)local_64 - (int)*(short *)(param_1 + 0x11a);
      local_84 = 0;
      local_88 = (int)(short)local_68 - (int)*(short *)(param_1 + 0x112);
      local_80 = (int)(short)local_64 - (int)*(short *)(param_1 + 0x11a);
      local_74 = 0;
      local_78 = (int)*(short *)(param_1 + 0x28c) - (int)*(short *)(param_1 + 0x112);
      local_70 = (int)*(short *)(param_1 + 0x298) - (int)*(short *)(param_1 + 0x11a);
      FUN_8002cb58(local_b8,local_a8,local_98);
      local_94 = local_94 >> 2;
      iVar7 = -0x80;
      if ((local_94 < -0x80) || (iVar7 = 0x80, 0x80 < local_94)) {
        local_94 = iVar7;
      }
      if (local_88 < 0) {
        local_88 = -local_88;
      }
      if (local_80 < 0) {
        local_80 = -local_80;
      }
      if (local_84 < 0) {
        local_84 = -local_84;
      }
      iVar7 = local_88;
      if (local_88 < local_84) {
        iVar7 = local_84;
        local_84 = local_88;
      }
      iVar2 = local_80;
      if (iVar7 < local_80) {
        iVar2 = iVar7;
        iVar7 = local_80;
      }
      if (iVar7 + (local_84 + iVar2 >> 2) < (int)*(short *)(param_1 + 0x268)) {
        if ((int)(param_2 & 0xffff) < *(int *)((param_2 >> 0x10) * 0xc + DAT_8009e878) + -1) {
          *(int *)(*(int *)(param_1 + 0x2d4) + 0xc) = *(int *)(*(int *)(param_1 + 0x2d4) + 0xc) + 1;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x2d4) + 0xc) =
               *(uint *)(*(int *)(param_1 + 0x2d4) + 0xc) & 0xffff0000;
        }
      }
      uVar1 = 0xfff0000;
      *(uint *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + local_94 * 0x10000 & 0xfff0000;
    }
  }
  return uVar1;
}



uint FUN_8001b6e8(int param_1,uint param_2)

{
  uint uVar1;
  MATRIX *r0;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [24];
  undefined2 local_88;
  short local_86;
  undefined2 local_84;
  undefined2 local_80;
  short local_7e;
  undefined2 local_7c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  
  puVar11 = auStack_a0;
  if ((DAT_8009e878 == 0) || ((int)param_2 < 0)) {
    uVar1 = 0;
  }
  else {
    puVar5 = *(undefined2 **)((param_2 >> 0x10) * 0xc + DAT_8009e878 + 4);
    local_88 = *puVar5;
    local_86 = -puVar5[1];
    local_84 = puVar5[2];
    local_80 = puVar5[10];
    local_7e = -puVar5[0xb];
    local_7c = puVar5[0xc];
    local_38 = *(undefined2 *)(param_1 + 0x11c);
    local_36 = 0;
    local_34 = *(undefined2 *)(param_1 + 0x102);
    PushMatrix();
    r0 = (MATRIX *)(param_1 + 0x288);
    gte_SetRotMatrix(r0);
    gte_SetTransMatrix(r0);
    RotTrans((SVECTOR *)(puVar11 + 0x68),(VECTOR *)(puVar11 + 0x48),(long *)(puVar11 + 0x88));
    PopMatrix();
    iVar2 = *(int *)(puVar11 + 0x48) * 0x10000 + *(int *)(param_1 + 0xe8);
    iVar6 = (iVar2 >> 0x10) - (int)*(short *)(puVar11 + 0x18);
    *(int *)(puVar11 + 0x58) = iVar2;
    iVar2 = *(int *)(puVar11 + 0x4c) * 0x10000 + *(int *)(param_1 + 0xec);
    *(int *)(puVar11 + 0x5c) = iVar2;
    iVar3 = (iVar2 >> 0x10) - (int)*(short *)(puVar11 + 0x1a);
    iVar8 = *(int *)(param_1 + 0xf0);
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = -iVar3;
    }
    *(int *)(puVar11 + 0x2c) = iVar3;
    iVar3 = iVar6;
    if (iVar6 < 0) {
      iVar3 = -iVar6;
    }
    *(int *)(puVar11 + 0x28) = iVar6;
    iVar10 = (int)*(short *)(puVar11 + 0x20) - (int)*(short *)(puVar11 + 0x18);
    iVar9 = (int)*(short *)(puVar11 + 0x22) - (int)*(short *)(puVar11 + 0x1a);
    *(int *)(puVar11 + 0x38) = iVar10;
    *(int *)(puVar11 + 0x3c) = iVar9;
    iVar7 = (int)*(short *)(puVar11 + 0x24) - (int)*(short *)(puVar11 + 0x1c);
    iVar8 = *(int *)(puVar11 + 0x50) * 0x10000 + iVar8;
    iVar4 = (iVar8 >> 0x10) - (int)*(short *)(puVar11 + 0x1c);
    iVar6 = iVar4;
    if (iVar4 < 0) {
      iVar6 = -iVar4;
    }
    *(int *)(puVar11 + 0x60) = iVar8;
    *(int *)(puVar11 + 0x30) = iVar4;
    *(int *)(puVar11 + 0x40) = iVar7;
    iVar8 = iVar3;
    if (iVar3 < iVar2) {
      iVar8 = iVar2;
      iVar2 = iVar3;
    }
    iVar3 = iVar6;
    if (iVar8 < iVar6) {
      iVar3 = iVar8;
      iVar8 = iVar6;
    }
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    iVar6 = iVar9;
    if (iVar10 < iVar9) {
      iVar6 = iVar10;
      iVar10 = iVar9;
    }
    iVar9 = iVar10;
    if (iVar10 < iVar7) {
      iVar9 = iVar7;
      iVar7 = iVar10;
    }
    uVar1 = (uint)(iVar9 + (iVar6 + iVar7 >> 2) < iVar8 + (iVar2 + iVar3 >> 2));
    if (uVar1 != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x16c);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x174);
      *(int *)(puVar11 + 0x78) = (int)*(short *)(puVar11 + 0x18) << 0x10;
      *(int *)(puVar11 + 0x80) = (int)*(short *)(puVar11 + 0x1c) << 0x10;
      *(int *)(puVar11 + 0x7c) = (int)*(short *)(puVar11 + 0x1a) << 0x10;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      uVar1 = FUN_8001a1dc(param_1,*(undefined4 *)(puVar11 + 0x78),*(undefined4 *)(puVar11 + 0x7c),
                           *(undefined4 *)(puVar11 + 0x80));
    }
  }
  return uVar1;
}



void FUN_8001bdf4(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  DAT_800a3538 = param_1;
  DAT_800a353c = param_2;
  printf("Custom heap initialization called (addr=0x%lX, size=0x%lX.\n",param_1,param_2);
  piVar2 = (int *)(param_1 + 0xfU & 0xfffffff0);
  iVar1 = (param_2 >> 4) - 2;
  DAT_800a3548 = 0;
  DAT_800a354c = 0;
  DAT_800393a0 = piVar2;
  DAT_800a3540 = iVar1;
  DAT_800a3544 = iVar1;
  DAT_800a3550 = param_1;
  DAT_800a3554 = param_2;
  piVar2[3] = -0x4a9dbc61 - (iVar1 + (int)piVar2);
  *piVar2 = iVar1;
  DAT_800393a8 = piVar2 + iVar1 * 4;
  DAT_800393a4 = piVar2;
  piVar2[1] = (int)piVar2;
  piVar2[2] = 0;
  *DAT_800393a8 = 0;
  DAT_800393a8[1] = (int)piVar2;
  DAT_800393a8[2] = 0;
  DAT_800393a8[3] = -0x4a9dbc61 - (int)piVar2;
  DAT_800a3558 = 0x10000;
  printf("Returning from InitHeap()...\n");
  return;
}



uint * FUN_8001bef4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1 == 0) {
LAB_8001c098:
    puVar3 = (uint *)0x0;
  }
  else {
    setCopReg(0,Status,Status & 0xfffffbfe,0);
    uVar7 = (param_1 + 0xfU >> 4) + 1;
    puVar2 = (uint *)DAT_800393a0[1];
    puVar6 = DAT_800393a0;
    while (puVar3 = puVar2, uVar4 = *puVar3, uVar4 < uVar7) {
      if (puVar3 == DAT_800393a0) goto LAB_8001c078;
      puVar6 = puVar3;
      puVar2 = (uint *)puVar3[1];
    }
    uVar5 = uVar4 - uVar7;
    if (uVar4 == uVar7) {
      if (puVar3 == puVar6) {
LAB_8001c078:
        setCopReg(0,Status,Status,0);
        printf("\nCan\'t allocate 0x%08X bytes !\n",uVar7 * 0x10);
        goto LAB_8001c098;
      }
      uVar4 = puVar3[1];
      puVar6[1] = uVar4;
      puVar6[3] = 0xb562439f - (*puVar6 + uVar4 + puVar6[2]);
    }
    else {
      *puVar3 = uVar5;
      puVar3[3] = 0xb562439f - (uVar5 + puVar3[1] + puVar3[2]);
      puVar3 = puVar3 + uVar5 * 4;
    }
    uVar4 = param_3 | 0x80000000 | DAT_800a3558;
    DAT_800a3544 = DAT_800a3544 - uVar7;
    DAT_800393a0 = puVar6;
    puVar3[3] = 0xb562439f - (uVar7 + param_2 + uVar4);
    iVar1 = DAT_800a3548;
    *puVar3 = uVar7;
    puVar3[1] = param_2;
    puVar3[2] = uVar4;
    DAT_800a354c = DAT_800a354c + uVar7;
    if (iVar1 < DAT_800a354c) {
      DAT_800a3548 = DAT_800a354c;
    }
    if (DAT_800a3544 < DAT_800a3540) {
      DAT_800a3540 = DAT_800a3544;
    }
    DAT_800a3558 = DAT_800a3558 + 0x10000;
    setCopReg(0,Status,Status,0);
    puVar3 = puVar3 + 4;
  }
  return puVar3;
}



uint FUN_8001c0ac(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  
  setCopReg(0,Status,Status & 0xfffffbfe,0);
  piVar6 = (int *)(param_1 + -0x10);
  if (*(int *)(param_1 + -0x10) + *(int *)(param_1 + -0xc) + *(int *)(param_1 + -8) +
      *(int *)(param_1 + -4) == -0x4a9dbc61) {
    piVar2 = piVar6 + *(int *)(param_1 + -0x10) * 4;
    if (*piVar2 + piVar2[1] + piVar2[2] + piVar2[3] == -0x4a9dbc61) {
      if (*(int *)(param_1 + -8) < 0) {
        *(undefined4 *)(param_1 + -8) = 0;
        DAT_800a3544 = DAT_800a3544 + *(int *)(param_1 + -0x10);
        piVar5 = (int *)DAT_800393a0[1];
        DAT_800a354c = DAT_800a354c - *(int *)(param_1 + -0x10);
        piVar2 = piVar5;
        if (DAT_800393a0 != piVar5) {
          while( true ) {
            piVar5 = piVar2;
            if (((DAT_800393a0 < piVar6) && (piVar6 < piVar5)) ||
               ((piVar5 <= DAT_800393a0 && ((DAT_800393a0 < piVar6 || (piVar6 < piVar5)))))) break;
            piVar2 = (int *)piVar5[1];
            DAT_800393a0 = piVar5;
          }
        }
        if (piVar6 + *piVar6 * 4 == piVar5) {
          *piVar6 = *piVar6 + *piVar5;
          *(int *)(param_1 + -0xc) = piVar5[1];
          if (DAT_800393a0 == piVar5) {
            DAT_800393a0 = piVar6;
          }
        }
        else {
          *(int **)(param_1 + -0xc) = piVar5;
        }
        iVar3 = *DAT_800393a0;
        if (DAT_800393a0 + iVar3 * 4 == piVar6) {
          *DAT_800393a0 = iVar3 + *piVar6;
          DAT_800393a0[1] = *(int *)(param_1 + -0xc);
          piVar6 = DAT_800393a0;
        }
        else {
          DAT_800393a0[1] = (int)piVar6;
          DAT_800393a0[3] = -0x4a9dbc61 - ((int)piVar6 + DAT_800393a0[2] + iVar3);
        }
        piVar6[3] = -0x4a9dbc61 - (*piVar6 + piVar6[1] + piVar6[2]);
        setCopReg(0,Status,Status,0);
        return Status;
      }
      pcVar4 = "WARNING - Attempt to free an already free memory block !\n";
    }
    else {
      pcVar4 = "WARNING - Memory overrun detected during free() !\n";
    }
  }
  else {
    pcVar4 = "WARNING - Attempt to free an invalid or corrupt memory block !\n";
  }
  setCopReg(0,Status,Status,0);
  uVar1 = printf("%s",pcVar4);
  trap(0);
  return uVar1;
}



void FUN_8001c388(undefined4 param_1)

{
  FUN_8001bef4(param_1,0,0);
  return;
}



void FUN_8001c3f4(void)

{
  FUN_8001bdf4(DAT_800a3538,DAT_800a353c);
  return;
}



undefined4 * FUN_8001c424(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 != 1) {
    param_1 = param_1 * param_2;
  }
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_8001bef4(param_1,param_3,param_4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1 + 3;
      iVar2 = puVar1[-4] + -1;
      puVar4 = puVar1;
      do {
        *puVar4 = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 4;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + 4;
      } while (iVar2 != 0);
    }
  }
  return puVar1;
}



undefined4 * FUN_8001c4a4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  if (param_2 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_8001bef4(param_2,param_3,param_4);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1 == (undefined4 *)0x0) {
      return puVar4;
    }
    iVar3 = (param_2 + 0xfU >> 4) * 4;
    puVar2 = puVar4;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_8001c0ac(param_1);
  return puVar4;
}



char * FUN_8001c660(char *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar1 = false;
  bVar2 = false;
  pcVar3 = param_2;
  do {
    switch(*param_1) {
    case '\0':
      bVar2 = true;
      if (0 < iVar4) {
        *pcVar3 = '\0';
LAB_8001c700:
        bVar2 = true;
      }
      break;
    default:
      if (!bVar1) {
LAB_8001c710:
        iVar4 = iVar4 + 1;
        *pcVar3 = *param_1;
        pcVar3 = pcVar3 + 1;
      }
      break;
    case '\t':
    case ' ':
      if (0 < iVar4) goto LAB_8001c710;
      break;
    case '\n':
      bVar1 = false;
      if (0 < iVar4) {
        *pcVar3 = '\0';
        goto LAB_8001c700;
      }
      break;
    case '\r':
      break;
    case '/':
      if (param_1[1] == '/') {
        bVar1 = true;
        param_1 = param_1 + 1;
      }
    }
    param_1 = param_1 + 1;
    if (bVar2) {
      pcVar3 = (char *)0x0;
      if (0 < iVar4) {
        param_2[iVar4] = '\0';
        strcat(param_2," . . . . .");
        pcVar3 = param_1;
      }
      return pcVar3;
    }
  } while( true );
}



undefined8 FUN_8001caf0(short *param_1,short *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  psVar10 = (short *)(DAT_800a357c + *param_2 * 8);
  psVar9 = (short *)(DAT_800a357c + param_2[1] * 8);
  psVar11 = (short *)(DAT_800a357c + param_2[2] * 8);
  puVar4 = (undefined1 *)(DAT_800a3580 + ((ushort)param_2[3] & 0xfff) * 8);
  bVar1 = false;
  if ((*(short *)(puVar4 + 2) < 1) && ((int)*psVar10 <= (int)*param_1)) {
    puVar4 = (undefined1 *)(int)*psVar11;
    if ((int)puVar4 <= (int)*psVar9) {
      puVar4 = (undefined1 *)(int)*psVar9;
    }
    if ((int)*param_1 <= (int)puVar4) {
      puVar7 = (undefined1 *)(int)psVar9[2];
      puVar8 = (undefined1 *)(int)psVar10[2];
      puVar6 = (undefined1 *)(int)psVar11[2];
      puVar4 = puVar7;
      if ((int)puVar8 < (int)puVar7) {
        puVar4 = puVar8;
      }
      puVar5 = puVar6;
      if ((int)puVar4 < (int)puVar6) {
        puVar5 = puVar4;
      }
      if ((int)puVar5 <= (int)param_1[2]) {
        if ((int)puVar8 >= (int)puVar7) {
          puVar7 = puVar8;
        }
        puVar4 = puVar6;
        if ((int)puVar6 <= (int)puVar7) {
          puVar4 = puVar7;
        }
        if ((int)param_1[2] <= (int)puVar4) goto LAB_8001cbf0;
      }
    }
  }
  bVar1 = true;
LAB_8001cbf0:
  uVar2 = 0;
  if (!bVar1) {
    puVar4 = (undefined1 *)(int)psVar9[2];
    gte_ldSXY0(local_18);
    gte_ldSXY1(local_10);
    gte_ldSXY2(local_20);
    gte_nclip();
    iVar3 = gte_stMAC0();
    uVar2 = 0;
    if (iVar3 < 1) {
      puVar4 = local_8;
      gte_ldSXY0(local_10);
      gte_ldSXY1(puVar4);
      gte_ldSXY2(local_20);
      gte_nclip();
      iVar3 = gte_stMAC0();
      uVar2 = 0;
      if (iVar3 < 1) {
        gte_ldSXY0(puVar4);
        gte_ldSXY1(local_18);
        gte_ldSXY2(local_20);
        gte_nclip();
        puVar4 = (undefined1 *)gte_stMAC0();
        uVar2 = 1;
        if (0 < (int)puVar4) {
          uVar2 = 0;
        }
      }
    }
  }
  return CONCAT44(puVar4,uVar2);
}



int FUN_8001ccc0(short *param_1,int param_2,short *param_3,short param_4,int *param_5,int param_6,
                int param_7)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  iVar8 = -0x7fff;
  iVar6 = 0x7fff;
  iVar7 = -1;
  for (iVar5 = 0; iVar5 < param_4; iVar5 = iVar5 + 1) {
    if (((param_6 == 0) ||
        (*(short *)((*(ushort *)(*param_3 * 10 + param_2 + 6) & 0xfff) * 8 + DAT_800a3580 + 2) <
         -0x5a80)) && (iVar1 = FUN_8001caf0(param_1,param_2 + *param_3 * 10), iVar1 != 0)) {
      psVar4 = (short *)(*param_3 * 10 + param_2);
      psVar2 = (short *)(DAT_800a3580 + ((ushort)psVar4[3] & 0xfff) * 8);
      iVar3 = (int)psVar2[1];
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = -iVar3;
      }
      if (iVar1 < 0x101) {
        sVar9 = *(short *)(DAT_800a357c + *psVar4 * 8 + 2);
      }
      else {
        iVar1 = -((int)*psVar2 * (int)*param_1 + (int)psVar2[2] * (int)param_1[2] +
                 psVar4[4] * 0x8000);
        sVar9 = (short)(iVar1 / iVar3);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
          trap(0x1800);
        }
      }
      iVar3 = (int)sVar9;
      iVar1 = (iVar3 + 0x10) - (int)param_1[1];
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar1 < iVar6) && ((param_7 == 0 || (param_1[1] <= iVar3)))) {
        iVar7 = (int)*param_3;
        iVar6 = iVar1;
        iVar8 = iVar3;
      }
    }
    param_3 = param_3 + 1;
  }
  *param_5 = iVar7;
  return iVar8;
}



void FUN_8001cf10(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)DAT_800a3560;
  iVar5 = (int)DAT_800a3562;
  puVar1 = DAT_800a3574;
  do {
    iVar4 = (int)(short)*puVar1;
    if (iVar4 < 0) {
      FUN_8001ccc0(param_1,DAT_800a3584,DAT_800a3578 + (short)puVar1[1] * 2,(int)(short)~*puVar1,
                   param_2,param_3,param_4);
      return;
    }
    uVar2 = (uint)(short)puVar1[1];
    if ((int)uVar2 < 0) {
      uVar2 = ~uVar2;
      iVar6 = iVar5 + (uint)puVar1[2];
      iVar3 = iVar7;
      if ((int)(iVar5 + (uint)puVar1[2]) <= (int)param_1[2]) goto LAB_8001cff0;
      iVar4 = iVar4 * 3;
    }
    else {
      iVar3 = iVar7 + (uint)puVar1[2];
      iVar6 = iVar5;
      if (*param_1 < iVar3) {
        iVar4 = iVar4 * 3;
      }
      else {
LAB_8001cff0:
        iVar4 = uVar2 * 3;
        iVar5 = iVar6;
        iVar7 = iVar3;
      }
    }
    puVar1 = DAT_800a3574 + iVar4;
  } while( true );
}



int FUN_8001d014(int param_1,int param_2,short *param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_s2;
  
  DAT_80041a84 = param_5;
  if (param_2 != 0) {
    unaff_s2 = FUN_80035404(&DAT_1f8003fc);
  }
  DAT_80041a78 = *(undefined2 *)(param_1 + 2);
  DAT_80041a7a = *(undefined2 *)(param_1 + 6);
  DAT_80041a7c = *(undefined2 *)(param_1 + 10);
  iVar2 = FUN_8001cf10(&DAT_80041a78,&DAT_80041a80,param_4,DAT_80041a84);
  if (param_2 != 0) {
    FUN_80035404(unaff_s2);
  }
  iVar4 = DAT_80041a80;
  if ((param_3 != (short *)0x0) && (iVar2 != -0x7fff)) {
    puVar3 = (undefined4 *)
             ((*(ushort *)(DAT_80041a80 * 10 + DAT_800a3584 + 6) & 0xfff) * 8 + DAT_800a3580);
    uVar6 = puVar3[1];
    *(undefined4 *)param_3 = *puVar3;
    *(undefined4 *)(param_3 + 2) = uVar6;
    param_3[3] = *(ushort *)(iVar4 * 10 + DAT_800a3584 + 6) >> 0xc;
    if (param_3[1] < 0) {
      iVar4 = FUN_800338d4((int)*param_3);
      iVar5 = FUN_800338d4((int)param_3[2]);
      if (iVar4 < iVar5) {
        sVar1 = param_3[2];
      }
      else {
        sVar1 = *param_3;
      }
      sVar1 = FUN_800338d4((int)sVar1);
      iVar4 = (int)sVar1;
      if (0 < iVar4) {
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (param_3[1] * -0x10 == -0x80000000)) {
          trap(0x1800);
        }
        if ((param_3[1] * -0x10) / iVar4 < 0x1c) {
          param_3[3] = param_3[3] | 0x10;
        }
      }
    }
  }
  return iVar2;
}



undefined8 FUN_8001d1fc(void)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  undefined1 *puVar5;
  short *in_a3;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  psVar6 = (short *)(DAT_800a357c + *in_a3 * 8);
  psVar3 = (short *)(DAT_800a3580 + ((ushort)in_a3[3] & 0xfff) * 8);
  iVar8 = (int)*psVar3;
  iVar7 = (int)psVar3[2];
  iVar1 = iVar8;
  if (iVar8 < 0) {
    iVar1 = -iVar8;
  }
  iVar4 = iVar7;
  if (iVar7 < 0) {
    iVar4 = -iVar7;
  }
  if (iVar1 < iVar4) {
    if (-1 < iVar7) {
      puVar5 = local_10;
      gte_ldSXY0(local_18);
      gte_ldSXY1(puVar5);
      gte_ldSXY2(local_20);
      gte_nclip();
      iVar1 = gte_stMAC0();
      uVar2 = 0;
      if (iVar1 < 1) {
        gte_ldSXY0(local_10);
        gte_ldSXY1(local_8);
        gte_ldSXY2(local_20);
        gte_nclip();
        puVar5 = (undefined1 *)(int)*psVar6;
        iVar1 = gte_stMAC0();
        uVar2 = 0;
        if (iVar1 < 1) {
          puVar5 = local_18;
          gte_ldSXY0(local_8);
          gte_ldSXY1(puVar5);
          gte_ldSXY2(local_20);
          gte_nclip();
          iVar1 = gte_stMAC0();
          uVar2 = 0;
          if (iVar1 < 1) {
            uVar2 = 1;
          }
        }
      }
      goto LAB_8001d854;
    }
    puVar5 = local_10;
    gte_ldSXY0(local_18);
    gte_ldSXY1(puVar5);
    gte_ldSXY2(local_20);
    gte_nclip();
    iVar1 = gte_stMAC0();
    uVar2 = 0;
    if (iVar1 < 0) goto LAB_8001d854;
    gte_ldSXY0(local_10);
    gte_ldSXY1(local_8);
    gte_ldSXY2(local_20);
    gte_nclip();
    puVar5 = (undefined1 *)(int)*psVar6;
    iVar1 = gte_stMAC0();
    if (-1 < iVar1) {
      gte_ldSXY0(local_8);
      gte_ldSXY1(local_18);
      gte_ldSXY2(local_20);
      gte_nclip();
      iVar1 = gte_stMAC0();
code_r0x8001d6e4:
      puVar5 = local_18;
      uVar2 = 1;
      if (-1 < iVar1) goto LAB_8001d854;
    }
  }
  else if (iVar8 < 1) {
    puVar5 = local_10;
    gte_ldSXY0(local_18);
    gte_ldSXY1(puVar5);
    gte_ldSXY2(local_20);
    gte_nclip();
    iVar1 = gte_stMAC0();
    uVar2 = 0;
    if (0 < iVar1) goto LAB_8001d854;
    gte_ldSXY0(local_10);
    gte_ldSXY1(local_8);
    gte_ldSXY2(local_20);
    gte_nclip();
    puVar5 = (undefined1 *)(int)psVar6[2];
    iVar1 = gte_stMAC0();
    if (iVar1 < 1) {
      gte_ldSXY0(local_8);
      gte_ldSXY1(local_18);
      gte_ldSXY2(local_20);
      gte_nclip();
      puVar5 = (undefined1 *)gte_stMAC0();
      uVar2 = 1;
      if ((int)puVar5 < 1) goto LAB_8001d854;
    }
  }
  else {
    puVar5 = local_10;
    gte_ldSXY0(local_18);
    gte_ldSXY1(puVar5);
    gte_ldSXY2(local_20);
    gte_nclip();
    iVar1 = gte_stMAC0();
    uVar2 = 0;
    if (iVar1 < 0) goto LAB_8001d854;
    gte_ldSXY0(local_10);
    gte_ldSXY1(local_8);
    gte_ldSXY2(local_20);
    gte_nclip();
    puVar5 = (undefined1 *)(int)psVar6[2];
    iVar1 = gte_stMAC0();
    if (-1 < iVar1) {
      gte_ldSXY0(local_8);
      gte_ldSXY1(local_18);
      gte_ldSXY2(local_20);
      gte_nclip();
      iVar1 = gte_stMAC0();
      goto code_r0x8001d6e4;
    }
  }
  uVar2 = 0;
LAB_8001d854:
  return CONCAT44(puVar5,uVar2);
}



int FUN_8001d85c(SVECTOR *param_1,int param_2,undefined4 param_3,undefined4 param_4,short *param_5,
                undefined2 param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  SVECTOR *r0;
  int iVar13;
  uint uVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  SVECTOR *r0_00;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int in_stack_00000028;
  undefined1 auStack_78 [16];
  SVECTOR local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined2 local_48;
  int local_40;
  
  puVar24 = auStack_78;
  puVar23 = &DAT_800a3560;
  iVar20 = -param_2;
  puVar25 = local_60;
  puVar21 = local_58;
  r0_00 = &local_68;
  local_48 = param_6;
  local_40 = in_stack_00000028;
  for (iVar22 = 0; iVar22 < *(short *)(puVar24 + 0x30); iVar22 = iVar22 + 1) {
    psVar19 = (short *)(*(int *)(puVar24 + 0x84) + *param_5 * 10);
    sVar1 = *psVar19;
    *(uint *)(puVar24 + 0x3c) = *(int *)(puVar23 + 0x10) + ((ushort)psVar19[3] & 0xfff) * 8;
    iVar11 = *(int *)(puVar23 + 0xe);
    psVar18 = (short *)(iVar11 + sVar1 * 8);
    psVar17 = (short *)(iVar11 + psVar19[1] * 8);
    iVar15 = (int)psVar18[1];
    iVar13 = (int)psVar17[1];
    psVar12 = (short *)(iVar11 + psVar19[2] * 8);
    iVar11 = iVar15;
    if (iVar15 < iVar13) {
      iVar11 = iVar13;
      iVar13 = iVar15;
    }
    iVar7 = (int)psVar12[1];
    bVar6 = iVar11 < iVar7;
    iVar15 = iVar11;
    if ((iVar7 < iVar13) || (iVar15 = iVar7, iVar7 = iVar13, bVar6)) {
      iVar13 = iVar7;
      iVar11 = iVar15;
    }
    iVar15 = 0;
    if ((param_1->vy <= iVar11) && (iVar13 <= (int)param_1->vy + *(int *)(puVar24 + 0x80))) {
      sVar1 = param_1->vx;
      sVar2 = param_1->vz;
      bVar6 = false;
      if (sVar1 + param_2 < (int)*psVar18) {
LAB_8001da60:
        bVar6 = true;
      }
      else {
        iVar11 = (int)*psVar12;
        if ((int)*psVar12 <= (int)*psVar17) {
          iVar11 = (int)*psVar17;
        }
        if (iVar11 < sVar1 - param_2) goto LAB_8001da60;
        iVar13 = (int)psVar17[2];
        iVar7 = (int)psVar18[2];
        *(int *)(puVar24 + 0x48) = sVar2 + param_2;
        iVar11 = (int)psVar12[2];
        iVar15 = iVar13;
        if (iVar7 < iVar13) {
          iVar15 = iVar7;
        }
        iVar8 = iVar11;
        if (iVar15 < iVar11) {
          iVar8 = iVar15;
        }
        if (*(int *)(puVar24 + 0x48) < iVar8) goto LAB_8001da60;
        if (iVar7 >= iVar13) {
          iVar13 = iVar7;
        }
        if (iVar11 <= iVar13) {
          iVar11 = iVar13;
        }
        if (iVar11 < sVar2 - param_2) goto LAB_8001da60;
      }
      iVar15 = 0;
      if (!bVar6) {
        psVar16 = (short *)(*(int *)(puVar23 + 0x10) + ((ushort)psVar19[3] & 0xfff) * 8);
        iVar11 = (int)psVar16[2];
        iVar13 = (int)psVar16[1];
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        iVar7 = (int)*psVar16;
        iVar15 = iVar13;
        if (iVar13 < 0) {
          iVar15 = -iVar13;
        }
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (iVar11 <= iVar7) {
          iVar11 = iVar7;
        }
        if (iVar15 < iVar11) {
          *(int *)(puVar24 + 0x40) = iVar22;
          *(undefined2 **)(puVar24 + 0x44) = puVar23;
          iVar15 = FUN_8001d1fc(param_1,param_2,*(undefined4 *)(puVar24 + 0x80),psVar19);
          iVar22 = *(int *)(puVar24 + 0x40);
          puVar23 = *(undefined2 **)(puVar24 + 0x44);
        }
        else if ((*(int *)(puVar24 + 0x94) == 0) || (iVar15 = 0, -1 < iVar13)) {
          sVar3 = psVar18[2];
          sVar4 = *psVar17;
          sVar5 = psVar17[2];
          *(short *)(puVar24 + 0x18) = *psVar18;
          *(short *)(puVar24 + 0x1a) = sVar3;
          *(short *)(puVar24 + 0x20) = sVar4;
          *(short *)(puVar24 + 0x22) = sVar5;
          sVar4 = (short)param_2;
          sVar3 = (short)iVar20;
          if (psVar16[1] < 0) {
            sVar5 = -sVar4;
            if (psVar18[2] <= psVar17[2]) {
              sVar5 = sVar4;
            }
            *(short *)(puVar24 + 0x10) = sVar1 + sVar5;
            sVar5 = sVar3;
            if (*psVar18 <= *psVar17) {
              sVar5 = sVar4;
            }
            *(short *)(puVar24 + 0x12) = sVar2 - sVar5;
            gte_ldSXY0(puVar25);
            gte_ldSXY1(puVar21);
            gte_ldSXY2(r0_00);
            gte_nclip();
            sVar5 = psVar12[2];
            *(short *)(puVar24 + 0x28) = *psVar12;
            *(short *)(puVar24 + 0x2a) = sVar5;
            iVar11 = gte_stMAC0();
            iVar15 = 0;
            if (iVar11 < 1) {
              sVar5 = -sVar4;
              if (psVar17[2] <= psVar12[2]) {
                sVar5 = sVar4;
              }
              *(short *)(puVar24 + 0x10) = sVar1 + sVar5;
              sVar5 = sVar3;
              if (*psVar17 <= *psVar12) {
                sVar5 = sVar4;
              }
              *(short *)(puVar24 + 0x12) = sVar2 - sVar5;
              gte_ldSXY0(puVar21);
              gte_ldSXY1(puVar24 + 0x28);
              gte_ldSXY2(r0_00);
              gte_nclip();
              sVar5 = -sVar4;
              if (psVar12[2] <= psVar18[2]) {
                sVar5 = sVar4;
              }
              *(short *)(puVar24 + 0x10) = sVar1 + sVar5;
              if (*psVar12 <= *psVar18) {
                sVar3 = sVar4;
              }
              *(short *)(puVar24 + 0x12) = sVar2 - sVar3;
              iVar11 = gte_stMAC0();
              iVar15 = 0;
              if (iVar11 < 1) {
                gte_ldSXY0(puVar24 + 0x28);
                gte_ldSXY1(puVar25);
                gte_ldSXY2(r0_00);
                gte_nclip();
                iVar11 = gte_stMAC0();
                if (iVar11 < 1) {
                  iVar15 = 1;
                }
              }
            }
          }
          else {
            sVar5 = sVar3;
            if (psVar18[2] <= psVar17[2]) {
              sVar5 = sVar4;
            }
            *(short *)(puVar24 + 0x10) = sVar1 - sVar5;
            sVar5 = -sVar4;
            if (*psVar18 <= *psVar17) {
              sVar5 = sVar4;
            }
            *(short *)(puVar24 + 0x12) = sVar2 + sVar5;
            gte_ldSXY0(puVar25);
            gte_ldSXY1(puVar21);
            gte_ldSXY2(r0_00);
            gte_nclip();
            sVar5 = psVar12[2];
            *(short *)(puVar24 + 0x28) = *psVar12;
            *(short *)(puVar24 + 0x2a) = sVar5;
            iVar11 = gte_stMAC0();
            iVar15 = 0;
            if (-1 < iVar11) {
              sVar5 = sVar3;
              if (psVar17[2] <= psVar12[2]) {
                sVar5 = sVar4;
              }
              *(short *)(puVar24 + 0x10) = sVar1 - sVar5;
              sVar5 = -sVar4;
              if (*psVar17 <= *psVar12) {
                sVar5 = sVar4;
              }
              *(short *)(puVar24 + 0x12) = sVar2 + sVar5;
              gte_ldSXY0(puVar21);
              gte_ldSXY1(puVar24 + 0x28);
              gte_ldSXY2(r0_00);
              gte_nclip();
              if (psVar12[2] <= psVar18[2]) {
                sVar3 = sVar4;
              }
              *(short *)(puVar24 + 0x10) = sVar1 - sVar3;
              sVar1 = -sVar4;
              if (*psVar12 <= *psVar18) {
                sVar1 = sVar4;
              }
              *(short *)(puVar24 + 0x12) = sVar2 + sVar1;
              iVar11 = gte_stMAC0();
              if (-1 < iVar11) {
                gte_ldSXY0(puVar24 + 0x28);
                gte_ldSXY1(puVar25);
                gte_ldSXY2(r0_00);
                gte_nclip();
                iVar11 = gte_stMAC0();
                iVar15 = 1;
                if (-1 < iVar11) goto LAB_8001dde8;
              }
              iVar15 = 0;
            }
          }
        }
      }
    }
LAB_8001dde8:
    iVar11 = 0;
    if (iVar15 != 0) {
      gte_ldsvrtrow0(*(SVECTOR **)(puVar24 + 0x90));
      gte_ldsv(*(SVECTOR **)(puVar24 + 0x3c));
      gte_rtir_sf0();
      iVar13 = gte_stMAC1();
      if (iVar13 < 0) {
        r0 = (SVECTOR *)(*(int *)(puVar23 + 0x10) + ((ushort)psVar19[3] & 0xfff) * 8);
        gte_ldsvrtrow0(param_1);
        gte_ldsv(r0);
        gte_rtir_sf0();
        iVar13 = gte_stMAC1();
        uVar14 = (iVar13 >> 0xf) + (int)psVar19[4];
        bVar6 = true;
        if ((-1 < (int)(uVar14 ^ uVar14 + (*(int *)(puVar24 + 0x80) * (int)r0->vy >> 0xf))) &&
           (bVar6 = false, -1 < (int)uVar14)) {
          sVar1 = (short)param_2;
          sVar2 = -sVar1;
          if (r0->vx < 1) {
            sVar2 = sVar1;
          }
          *(short *)(puVar24 + 0x10) = param_1->vx + sVar2;
          *(short *)(puVar24 + 0x12) = param_1->vy;
          sVar2 = -sVar1;
          if (r0->vz < 1) {
            sVar2 = sVar1;
          }
          *(short *)(puVar24 + 0x14) = param_1->vz + sVar2;
          gte_ldsvrtrow0(r0_00);
          gte_ldsv(r0);
          gte_rtir_sf0();
          iVar13 = gte_stMAC1();
          uVar9 = (iVar13 >> 0xf) + (int)psVar19[4];
          if (((int)(uVar9 ^ uVar9 + (*(int *)(puVar24 + 0x80) * (int)r0->vy >> 0xf)) < 0) ||
             (bVar6 = false, (int)(uVar9 ^ uVar14) < 0)) {
            bVar6 = true;
          }
        }
        if (bVar6) {
          iVar11 = 1;
        }
      }
      if (iVar11 != 0) {
        iVar11 = 0;
        if (0 < in_stack_00000028) {
          piVar10 = *(int **)(puVar24 + 0x98);
          do {
            if (*piVar10 == (int)*param_5) break;
            iVar11 = iVar11 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar11 < in_stack_00000028);
          if (iVar11 < in_stack_00000028) goto LAB_8001e004;
        }
        *(int *)(in_stack_00000028 * 4 + *(int *)(puVar24 + 0x98)) = (int)*param_5;
        in_stack_00000028 = in_stack_00000028 + 1;
        if (*(int *)(puVar24 + 0x9c) <= in_stack_00000028) break;
      }
    }
LAB_8001e004:
    param_5 = param_5 + 1;
  }
  return in_stack_00000028 - *(int *)(puVar24 + 0x38);
}



int FUN_8001e04c(short *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                ,int param_6,undefined4 param_7)

{
  short sVar1;
  short sVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  ushort local_116 [111];
  undefined4 local_38;
  int local_30;
  short *local_2c;
  
  puVar3 = DAT_800a3574;
  iVar14 = 0;
  iVar15 = 0;
  iVar11 = 0;
  sVar1 = *param_1;
  sVar2 = param_1[2];
  iVar8 = (int)DAT_800a3564;
  iVar9 = (int)DAT_800a3562;
  iVar7 = (int)DAT_800a3566;
  local_38 = DAT_800a3584;
  puVar6 = DAT_800a3574;
  iVar10 = (int)DAT_800a3560;
  do {
    if ((short)*puVar6 < 0) {
      local_12c = param_7;
      local_128 = param_5;
      local_130 = param_4;
      local_124 = param_6;
      local_120 = iVar15;
      local_30 = param_6;
      local_2c = param_1;
      iVar9 = FUN_8001d85c(param_1,param_2,param_3,local_38,DAT_800a3578 + (short)puVar6[1] * 2,
                           (int)(short)~*puVar6);
      if (((0 < iVar9) && (iVar15 = iVar15 + iVar9, local_30 <= iVar15)) || (iVar14 < 1)) {
        return iVar15;
      }
      iVar8 = (int)*(short *)((int)&local_130 + iVar11 + 2);
      uVar4 = (uint)*(short *)((int)local_116 + iVar11 + -0x1c);
      iVar7 = (int)*(short *)((int)&local_12c + iVar11 + 2);
      iVar14 = iVar14 + -1;
      iVar9 = (int)*(short *)((int)&local_12c + iVar11);
      iVar5 = (int)*(short *)((int)&local_130 + iVar11);
      param_6 = local_30;
      param_1 = local_2c;
      iVar11 = iVar11 + -0x1c;
    }
    else {
      uVar4 = (uint)(short)puVar6[1];
      iVar5 = iVar10;
      if ((int)uVar4 < 0) {
        iVar12 = iVar9 + (uint)puVar6[2];
        if (sVar2 - param_2 < iVar12) {
          iVar13 = iVar11;
          if ((iVar12 < sVar2 + param_2) && (iVar14 < 8)) {
            iVar13 = iVar11 + 0x1c;
            *(short *)((int)local_116 + iVar11 + 2) = (short)iVar10;
            *(short *)((int)local_116 + iVar11 + 4) = (short)iVar8;
            *(short *)((int)local_116 + iVar11 + 6) = (short)iVar12;
            *(short *)((int)local_116 + iVar11 + 8) = (short)iVar7;
            iVar14 = iVar14 + 1;
            *(ushort *)((int)local_116 + iVar11) = ~puVar6[1];
          }
          uVar4 = (uint)(short)*puVar6;
          iVar7 = iVar12 + -1;
          iVar11 = iVar13;
        }
        else {
          uVar4 = ~uVar4;
          iVar9 = iVar12;
        }
      }
      else {
        iVar5 = iVar10 + (uint)puVar6[2];
        if (sVar1 - param_2 < iVar5) {
          iVar12 = iVar11;
          if ((iVar5 < sVar1 + param_2) && (iVar14 < 8)) {
            iVar12 = iVar11 + 0x1c;
            *(short *)((int)local_116 + iVar11 + 2) = (short)iVar5;
            *(short *)((int)local_116 + iVar11 + 4) = (short)iVar8;
            *(short *)((int)local_116 + iVar11 + 6) = (short)iVar9;
            *(short *)((int)local_116 + iVar11 + 8) = (short)iVar7;
            iVar14 = iVar14 + 1;
            *(ushort *)((int)local_116 + iVar11) = puVar6[1];
          }
          uVar4 = (uint)(short)*puVar6;
          iVar8 = iVar5 + -1;
          iVar5 = iVar10;
          iVar11 = iVar12;
        }
      }
    }
    puVar6 = puVar3 + uVar4 * 3;
    iVar10 = iVar5;
  } while( true );
}



undefined4 FUN_8001e2b0(SVECTOR *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  SVECTOR *pSVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  short *psVar16;
  SVECTOR *r0;
  SVECTOR *r0_00;
  short *psVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  SVECTOR *pSVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  SVECTOR *r2;
  int *piVar24;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  
  piVar24 = (int *)local_30;
  iVar11 = (int)param_1->vy;
  iVar7 = (int)param_1[1].vy;
  if (iVar11 < iVar7) {
    param_1[0xb].vx = (short)iVar11;
    param_1[0xb].vy = (short)((uint)iVar11 >> 0x10);
    iVar11 = iVar7;
  }
  else {
    iVar11 = (int)param_1->vy;
    param_1[0xb].vx = (short)iVar7;
    param_1[0xb].vy = (short)((uint)iVar7 >> 0x10);
  }
  param_1[0xb].vz = (short)iVar11;
  param_1[0xb].pad = (short)((uint)iVar11 >> 0x10);
  puVar19 = &DAT_800a3560;
  pSVar20 = param_1 + 1;
  puVar22 = &local_28;
  puVar21 = &local_24;
  r2 = param_1 + 6;
  sVar1 = param_1[1].vy;
  sVar2 = param_1[1].vz;
  param_1[3].vx = param_1[1].vx - param_1->vx;
  sVar3 = param_1->vy;
  param_1[3].vz = sVar2 - param_1->vz;
  param_1[3].vy = sVar1 - sVar3;
  sVar1 = param_1[9].vz;
  sVar2 = param_1[9].pad;
  param_1[10].vz = -1;
  param_1[10].pad = -1;
  param_1[10].vx = sVar1;
  param_1[10].vy = sVar2;
  for (iVar7 = 0; iVar11._0_2_ = param_1[8].vx, iVar11._2_2_ = param_1[8].vy, iVar7 < iVar11;
      iVar7 = iVar7 + 1) {
    psVar17 = (short *)(*(int *)(param_1 + 7) + *(short *)(iVar7 * 2 + *(int *)&param_1[7].vz) * 10)
    ;
    *(uint *)(param_1 + 0xc) = *(int *)(puVar19 + 0x10) + ((ushort)psVar17[3] & 0xfff) * 8;
    *(int *)&param_1[0xc].vz = *(int *)(puVar19 + 0xe) + *psVar17 * 8;
    *(int *)(param_1 + 0xd) = *(int *)(puVar19 + 0xe) + psVar17[1] * 8;
    iVar8 = *(int *)(puVar19 + 0xe) + psVar17[2] * 8;
    *(int *)&param_1[0xd].vz = iVar8;
    iVar12 = (int)*(short *)(*(int *)&param_1[0xc].vz + 2);
    iVar9 = (int)*(short *)(*(int *)(param_1 + 0xd) + 2);
    iVar11 = iVar12;
    if (iVar12 < iVar9) {
      iVar11 = iVar9;
      iVar9 = iVar12;
    }
    iVar12 = (int)*(short *)(iVar8 + 2);
    iVar8 = iVar12;
    if ((iVar9 <= iVar12) && (iVar8 = iVar9, iVar11 < iVar12)) {
      iVar11 = iVar12;
    }
    *piVar24 = iVar8;
    piVar24[1] = iVar11;
    iVar9._0_2_ = param_1[0xb].vx;
    iVar9._2_2_ = param_1[0xb].vy;
    if ((iVar9 <= piVar24[1]) &&
       (iVar8._0_2_ = param_1[0xb].vz, iVar8._2_2_ = param_1[0xb].pad, *piVar24 <= iVar8)) {
      pSVar5 = *(SVECTOR **)(param_1 + 0xc);
      gte_ldsvrtrow0(param_1);
      uVar23._0_2_ = pSVar20->vx;
      uVar23._2_2_ = pSVar20->vy;
      uVar18._0_2_ = pSVar20->vz;
      uVar18._2_2_ = pSVar20->pad;
      gte_ldR31R32(uVar23);
      gte_ldR33(uVar18);
      gte_ldsv(pSVar5);
      gte_rtir_sf0();
      uVar23 = gte_stMAC1();
      *puVar22 = uVar23;
      uVar23 = gte_stMAC3();
      *puVar21 = uVar23;
      uVar15 = (*(int *)((int)piVar24 + 8) >> 0xf) + (int)psVar17[4];
      *(uint *)((int)piVar24 + 8) = uVar15;
      uVar13 = (*(int *)((int)piVar24 + 0xc) >> 0xf) + (int)psVar17[4];
      *(uint *)((int)piVar24 + 0xc) = uVar13;
      if ((-1 < (int)uVar15) && ((int)(uVar15 ^ uVar13) < 0)) {
        if ((int)uVar15 < 0) {
          uVar15 = -uVar15;
        }
        if ((int)uVar13 < 0) {
          uVar13 = -uVar13;
        }
        iVar11 = uVar15 + uVar13;
        iVar9 = (int)(uVar15 << 0xc) / iVar11;
        if (iVar11 == 0) {
          trap(0x1c00);
        }
        if ((iVar11 == -1) && (uVar15 << 0xc == -0x80000000)) {
          trap(0x1800);
        }
        iVar12._0_2_ = param_1[10].vx;
        iVar12._2_2_ = param_1[10].vy;
        if (iVar9 < iVar12) {
          r0_00 = param_1 + 2;
          gte_ldIR0(iVar9);
          gte_ldsv(param_1 + 3);
          gte_gpf12();
          gte_stsv(r0_00);
          sVar1 = param_1->vy;
          param_1[2].vx = param_1[2].vx + param_1->vx;
          param_1[2].vy = param_1[2].vy + sVar1;
          psVar16 = *(short **)&param_1[0xc].vz;
          param_1[2].vz = param_1[2].vz + param_1->vz;
          sVar1 = r0_00->vy;
          sVar2 = r0_00->vz;
          sVar3 = psVar16[1];
          sVar4 = psVar16[2];
          r0 = param_1 + 4;
          param_1[4].vx = param_1[2].vx - *psVar16;
          param_1[4].vz = sVar2 - sVar4;
          param_1[4].vy = sVar1 - sVar3;
          psVar14 = *(short **)&param_1[0xc].vz;
          psVar16 = *(short **)(param_1 + 0xd);
          sVar1 = psVar16[1];
          sVar2 = psVar16[2];
          sVar3 = psVar14[1];
          sVar4 = psVar14[2];
          pSVar5 = param_1 + 5;
          param_1[5].vx = *psVar16 - *psVar14;
          param_1[5].vz = sVar2 - sVar4;
          param_1[5].vy = sVar1 - sVar3;
          gte_OuterProduct12SV(r0,pSVar5,r2);
          gte_ldsvrtrow0(*(SVECTOR **)(param_1 + 0xc));
          gte_ldsv(r2);
          gte_rtir_sf0();
          iVar11 = gte_stMAC1();
          if (-1 < iVar11) {
            psVar16 = *(short **)(param_1 + 0xd);
            sVar1 = r0_00->vy;
            sVar2 = r0_00->vz;
            sVar3 = psVar16[1];
            sVar4 = psVar16[2];
            param_1[4].vx = param_1[2].vx - *psVar16;
            r0->vz = sVar2 - sVar4;
            r0->vy = sVar1 - sVar3;
            psVar14 = *(short **)(param_1 + 0xd);
            psVar16 = *(short **)&param_1[0xd].vz;
            sVar1 = psVar16[1];
            sVar2 = psVar16[2];
            sVar3 = psVar14[1];
            sVar4 = psVar14[2];
            param_1[5].vx = *psVar16 - *psVar14;
            pSVar5->vz = sVar2 - sVar4;
            pSVar5->vy = sVar1 - sVar3;
            gte_OuterProduct12SV(r0,pSVar5,r2);
            gte_ldsvrtrow0(*(SVECTOR **)(param_1 + 0xc));
            gte_ldsv(r2);
            gte_rtir_sf0();
            iVar11 = gte_stMAC1();
            if (-1 < iVar11) {
              psVar16 = *(short **)&param_1[0xd].vz;
              sVar1 = r0_00->vy;
              sVar2 = r0_00->vz;
              sVar3 = psVar16[1];
              sVar4 = psVar16[2];
              param_1[4].vx = param_1[2].vx - *psVar16;
              r0->vz = sVar2 - sVar4;
              r0->vy = sVar1 - sVar3;
              psVar14 = *(short **)&param_1[0xd].vz;
              psVar16 = *(short **)&param_1[0xc].vz;
              sVar1 = psVar16[1];
              sVar2 = psVar16[2];
              sVar3 = psVar14[1];
              sVar4 = psVar14[2];
              param_1[5].vx = *psVar16 - *psVar14;
              pSVar5->vz = sVar2 - sVar4;
              pSVar5->vy = sVar1 - sVar3;
              gte_OuterProduct12SV(r0,pSVar5,r2);
              gte_ldsvrtrow0(*(SVECTOR **)(param_1 + 0xc));
              gte_ldsv(r2);
              gte_rtir_sf0();
              iVar11 = gte_stMAC1();
              if (-1 < iVar11) {
                iVar11 = *(int *)&param_1[7].vz;
                param_1[10].vx = (short)iVar9;
                param_1[10].vy = (short)((uint)iVar9 >> 0x10);
                param_1[9].vz = (short)iVar9;
                param_1[9].pad = (short)((uint)iVar9 >> 0x10);
                iVar11 = (int)*(short *)(iVar7 * 2 + iVar11);
                puVar10 = *(undefined4 **)(param_1 + 9);
                param_1[10].vz = (short)iVar11;
                param_1[10].pad = (short)((uint)iVar11 >> 0x10);
                uVar23 = *(undefined4 *)&param_1[2].vz;
                *puVar10 = *(undefined4 *)(param_1 + 2);
                puVar10[1] = uVar23;
                puVar10 = *(undefined4 **)&param_1[8].vz;
                uVar23 = (*(undefined4 **)(param_1 + 0xc))[1];
                *puVar10 = **(undefined4 **)(param_1 + 0xc);
                puVar10[1] = uVar23;
                *(short *)(*(int *)&param_1[8].vz + 6) = psVar17[4];
              }
            }
          }
        }
      }
    }
  }
  uVar6._0_2_ = param_1[10].vz;
  uVar6._2_2_ = param_1[10].pad;
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_8001e9d4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar14;
  int iVar15;
  undefined2 uVar16;
  int iVar17;
  undefined2 uVar18;
  int iVar19;
  undefined2 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  short local_12a [5];
  int local_120 [4];
  ushort local_10e [5];
  int local_104 [53];
  int local_30;
  
  psVar3 = DAT_800a3574;
  iVar23 = 0;
  local_30 = -1;
  _DAT_1f800000 = *param_1;
  _DAT_1f800004 = param_1[1];
  _DAT_1f800008 = *param_2;
  _DAT_1f80000c = param_2[1];
  iVar13 = (int)DAT_1f800000;
  iVar15 = (int)DAT_800a3560;
  iVar21 = (int)DAT_800a3564;
  iVar17 = (int)DAT_800a3562;
  iVar19 = (int)DAT_800a3566;
  DAT_1f80004c = 0x7fff;
  iVar22 = 0;
  iVar9 = (int)DAT_1f800008;
  iVar12 = (int)DAT_1f800004;
  iVar11 = (int)DAT_1f80000c;
  DAT_1f800038 = DAT_800a3584;
  psVar10 = DAT_800a3574;
  DAT_1f800044 = param_3;
  DAT_1f800048 = param_4;
  do {
    if (*psVar10 < 0) {
      DAT_1f80003c = DAT_800a3578 + psVar10[1] * 2;
      DAT_80041a88 = (DAT_80041a88 + -1) - (int)*psVar10;
      DAT_1f800040 = ~(int)*psVar10;
      uVar4 = FUN_80035404(&DAT_1f8003fc);
      iVar9 = FUN_8001e2b0(0x1f800000);
      FUN_80035404(uVar4);
      if (-1 < iVar9) {
        local_30 = iVar9;
      }
      if ((-1 < local_30) || (iVar23 < 1)) {
        *param_5 = DAT_1f80004c;
        return local_30;
      }
      iVar21 = (int)*(short *)((int)local_12a + iVar22 + 4);
      iVar19 = (int)*(short *)((int)local_12a + iVar22 + 8);
      iVar13 = *(int *)((int)local_12a + iVar22 + 10);
      iVar12 = *(int *)((int)local_120 + iVar22 + 8);
      uVar8 = (uint)*(short *)((int)local_12a + iVar22);
      iVar11 = *(int *)((int)local_120 + iVar22 + 0xc);
      iVar23 = iVar23 + -1;
      iVar9 = *(int *)((int)local_120 + iVar22 + 4);
      iVar15 = (int)*(short *)((int)local_12a + iVar22 + 2);
      iVar24 = (int)*(short *)((int)local_12a + iVar22 + 6);
      iVar22 = iVar22 + -0x1c;
LAB_8001eea4:
      iVar7 = uVar8 << 1;
      iVar17 = iVar24;
    }
    else {
      uVar16 = (undefined2)iVar17;
      uVar18 = (undefined2)iVar19;
      uVar20 = (undefined2)iVar21;
      uVar14 = (undefined2)iVar15;
      if (psVar10[1] < 0) {
        iVar24 = iVar17 + (uint)(ushort)psVar10[2];
        if (iVar24 <= iVar12) {
          if ((iVar11 < iVar24) && (iVar17 = iVar11 - iVar12, iVar23 < 8)) {
            iVar7 = iVar17;
            if (iVar17 != 0) {
              iVar5 = (iVar24 - iVar12) * 0x10000;
              iVar7 = iVar5 / iVar17;
              if (iVar17 == 0) {
                trap(0x1c00);
              }
              if ((iVar17 == -1) && (iVar5 == -0x80000000)) {
                trap(0x1800);
              }
            }
            iVar23 = iVar23 + 1;
            *(undefined2 *)((int)local_10e + iVar22 + 2) = uVar14;
            *(undefined2 *)((int)local_10e + iVar22 + 4) = uVar20;
            *(undefined2 *)((int)local_10e + iVar22 + 6) = uVar16;
            *(short *)((int)local_10e + iVar22 + 8) = (short)iVar24 + -1;
            sVar1 = *psVar10;
            *(int *)((int)local_104 + iVar22 + 0xc) = iVar11;
            *(int *)((int)local_104 + iVar22 + 4) = iVar9;
            *(int *)((int)local_104 + iVar22 + 8) = iVar24;
            *(short *)((int)local_10e + iVar22) = sVar1;
            iVar9 = iVar13 + ((iVar9 - iVar13) * iVar7 >> 0x10);
            *(int *)((int)local_10e + iVar22 + 10) = iVar9;
            sVar1 = psVar10[1];
            iVar11 = iVar24;
            iVar22 = iVar22 + 0x1c;
          }
          else {
            sVar1 = psVar10[1];
          }
          uVar8 = ~(int)sVar1;
          goto LAB_8001eea4;
        }
        if ((iVar24 < iVar11) && (iVar19 = iVar11 - iVar12, iVar23 < 8)) {
          iVar7 = iVar19;
          if (iVar19 != 0) {
            iVar5 = (iVar24 - iVar12) * 0x10000;
            iVar7 = iVar5 / iVar19;
            if (iVar19 == 0) {
              trap(0x1c00);
            }
            if ((iVar19 == -1) && (iVar5 == -0x80000000)) {
              trap(0x1800);
            }
          }
          iVar23 = iVar23 + 1;
          *(undefined2 *)((int)local_10e + iVar22 + 2) = uVar14;
          *(undefined2 *)((int)local_10e + iVar22 + 4) = uVar20;
          *(short *)((int)local_10e + iVar22 + 6) = (short)iVar24;
          *(undefined2 *)((int)local_10e + iVar22 + 8) = uVar18;
          uVar2 = psVar10[1];
          *(int *)((int)local_104 + iVar22 + 0xc) = iVar11;
          *(int *)((int)local_104 + iVar22 + 4) = iVar9;
          *(int *)((int)local_104 + iVar22 + 8) = iVar24;
          *(ushort *)((int)local_10e + iVar22) = ~uVar2;
          iVar9 = iVar13 + ((iVar9 - iVar13) * iVar7 >> 0x10);
          *(int *)((int)local_10e + iVar22 + 10) = iVar9;
          iVar11 = iVar24;
          iVar22 = iVar22 + 0x1c;
        }
        iVar19 = iVar24 + -1;
        uVar8 = (uint)*psVar10;
        iVar7 = uVar8 << 1;
      }
      else {
        iVar7 = iVar15 + (uint)(ushort)psVar10[2];
        if (iVar7 <= iVar13) {
          iVar15 = iVar7;
          iVar24 = iVar17;
          if ((iVar9 < iVar7) && (iVar17 = iVar9 - iVar13, iVar23 < 8)) {
            iVar5 = iVar17;
            if (iVar17 != 0) {
              iVar6 = (iVar7 - iVar13) * 0x10000;
              iVar5 = iVar6 / iVar17;
              if (iVar17 == 0) {
                trap(0x1c00);
              }
              if ((iVar17 == -1) && (iVar6 == -0x80000000)) {
                trap(0x1800);
              }
            }
            iVar23 = iVar23 + 1;
            *(undefined2 *)((int)local_10e + iVar22 + 2) = uVar14;
            *(short *)((int)local_10e + iVar22 + 4) = (short)iVar7 + -1;
            *(undefined2 *)((int)local_10e + iVar22 + 6) = uVar16;
            *(undefined2 *)((int)local_10e + iVar22 + 8) = uVar18;
            sVar1 = *psVar10;
            *(int *)((int)local_104 + iVar22 + 4) = iVar9;
            *(int *)((int)local_10e + iVar22 + 10) = iVar7;
            *(int *)((int)local_104 + iVar22 + 0xc) = iVar11;
            *(short *)((int)local_10e + iVar22) = sVar1;
            iVar11 = iVar12 + ((iVar11 - iVar12) * iVar5 >> 0x10);
            *(int *)((int)local_104 + iVar22 + 8) = iVar11;
            uVar8 = (uint)psVar10[1];
            iVar9 = iVar7;
            iVar22 = iVar22 + 0x1c;
          }
          else {
            uVar8 = (uint)psVar10[1];
          }
          goto LAB_8001eea4;
        }
        if ((iVar7 < iVar9) && (iVar21 = iVar9 - iVar13, iVar23 < 8)) {
          iVar24 = iVar21;
          if (iVar21 != 0) {
            iVar5 = (iVar7 - iVar13) * 0x10000;
            iVar24 = iVar5 / iVar21;
            if (iVar21 == 0) {
              trap(0x1c00);
            }
            if ((iVar21 == -1) && (iVar5 == -0x80000000)) {
              trap(0x1800);
            }
          }
          iVar23 = iVar23 + 1;
          *(short *)((int)local_10e + iVar22 + 2) = (short)iVar7;
          *(undefined2 *)((int)local_10e + iVar22 + 4) = uVar20;
          *(undefined2 *)((int)local_10e + iVar22 + 6) = uVar16;
          *(undefined2 *)((int)local_10e + iVar22 + 8) = uVar18;
          sVar1 = psVar10[1];
          *(int *)((int)local_104 + iVar22 + 4) = iVar9;
          *(int *)((int)local_10e + iVar22 + 10) = iVar7;
          *(int *)((int)local_104 + iVar22 + 0xc) = iVar11;
          *(short *)((int)local_10e + iVar22) = sVar1;
          iVar11 = iVar12 + ((iVar11 - iVar12) * iVar24 >> 0x10);
          *(int *)((int)local_104 + iVar22 + 8) = iVar11;
          iVar9 = iVar7;
          iVar22 = iVar22 + 0x1c;
        }
        iVar21 = iVar7 + -1;
        uVar8 = (uint)*psVar10;
        iVar7 = uVar8 << 1;
      }
    }
    psVar10 = psVar3 + iVar7 + uVar8;
  } while( true );
}



int FUN_8001f34c(int *param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_30;
  int local_2c;
  int local_28 [2];
  
  if (param_5 < param_3 >> 0x10) {
    local_30 = (*param_2 >> 1) + (*param_1 >> 1);
    local_2c = (param_2[1] >> 1) + (param_1[1] >> 1);
    local_28[0] = (param_2[2] >> 1) + (param_1[2] >> 1);
    iVar1 = FUN_8001f34c(&local_30,param_2,param_3 >> 1,param_4,param_5,param_6,param_7);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_8001f34c(param_1,&local_30,param_3 >> 1,param_4,param_5,param_6,param_7),
       iVar1 == 0)) {
      return 0;
    }
    iVar1 = 1;
  }
  else {
    local_30 = CONCAT22(*(short *)((int)param_1 + 6) - (short)param_6,
                        *(undefined2 *)((int)param_1 + 2));
    local_2c = CONCAT22(local_2c._2_2_,*(undefined2 *)((int)param_1 + 10));
    iVar1 = FUN_8001e04c(&local_30,param_5,param_6,param_4,local_28,2,param_7);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)
               ((*(ushort *)(local_28[0] * 10 + DAT_800a3584 + 6) & 0xfff) * 8 + DAT_800a3580);
      uVar3 = puVar2[1];
      *param_4 = *puVar2;
      param_4[1] = uVar3;
      *(undefined2 *)((int)param_4 + 6) = *(undefined2 *)(local_28[0] * 10 + DAT_800a3584 + 8);
    }
  }
  return iVar1;
}



int FUN_8001f528(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                uint param_6)

{
  int iVar1;
  int iVar2;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  
  local_40 = *(undefined2 *)(param_2 + 2);
  local_3e = *(undefined2 *)(param_2 + 6);
  local_3c = *(undefined2 *)(param_2 + 10);
  local_38 = *(undefined2 *)(param_1 + 2);
  local_36 = *(undefined2 *)(param_1 + 6);
  local_34 = *(undefined2 *)(param_1 + 10);
  iVar1 = FUN_8001e9d4(&local_40,&local_38,param_3,param_4,param_5);
  if (((iVar1 < 0) && ((param_6 & 1) != 0)) &&
     (iVar2 = FUN_80054ec8(param_1,param_2,param_5,param_3,param_4), iVar2 != 0)) {
    iVar1 = 0x7fff;
  }
  return iVar1;
}



void main(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  FUN_80025e24();
  iVar3 = 0;
  ResetCallback();
  FUN_80027074();
  FUN_80030984(0);
  FUN_80030af8(0);
  do {
    do {
      FUN_800381e4(&DAT_80039444,&DAT_80039466);
      FUN_80035d64();
      VSync(0);
      VSync(0);
      VSync(0);
      VSync(0);
      VSync(0);
      FUN_8001fa44((&PTR_s_SHELL_BIN_800393b0)[iVar3 * 3],&DAT_80041ac0);
      FUN_8001c3f4();
      FUN_80035d84();
      VSync(0);
      VSync(0);
      VSync(0);
      VSync(0);
      iVar2 = 0;
      (*(code *)(&PTR_FUN_800393b4)[iVar3 * 3])();
      FUN_80030984(3);
      FUN_80030d00(0);
      VSync(0);
      VSync(0);
      VSync(0);
      VSync(0);
      FUN_800353e4();
      StopRCnt(0xf2000000);
      StopRCnt(0xf2000001);
      StopRCnt(0xf2000002);
      StopRCnt(0xf2000003);
      FUN_80030984(1);
      FUN_8002773c(0);
      FUN_8002a14c(0);
      FUN_8002730c(0);
      FUN_800272f8(0);
      FUN_80030c08(0);
      VSyncCallback((f *)0x0);
      do {
        InterruptCallback(iVar2,0);
        printf(&DAT_80041aac,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      StopCallback();
      FUN_800353f4();
      FUN_80027074();
      FUN_80030984(3);
      bVar1 = iVar3 != 0;
      iVar3 = 0;
    } while (bVar1);
    iVar3 = 1;
  } while( true );
}



undefined4 FUN_8001fa44(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  uVar2 = 0;
  iVar1 = FUN_80011838(param_1,auStack_10,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  FUN_800353e4();
  FlushCache();
  FUN_800353f4();
  return uVar2;
}



void FUN_8001fa98(void)

{
  undefined2 uVar1;
  word wVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  word *pwVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  dword *pdVar9;
  word *pwVar10;
  
  pdVar9 = &VOICE_00_LEFT_RIGHT;
  iVar7 = 0;
  do {
    iVar8 = 0;
    puVar4 = &DAT_80039494;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar8 = iVar8 + 1;
      *(undefined2 *)pdVar9 = uVar1;
      pdVar9 = (dword *)((int)pdVar9 + 2);
    } while (iVar8 < 8);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
  pwVar10 = &SPU_MAIN_VOL_L;
  iVar7 = 0;
  pwVar5 = &DAT_800394a4;
  do {
    wVar2 = *pwVar5;
    pwVar5 = pwVar5 + 1;
    iVar7 = iVar7 + 1;
    *pwVar10 = wVar2;
    pwVar10 = pwVar10 + 1;
  } while (iVar7 < 0x10);
  FUN_8001fbd8(0x18);
  iVar7 = 0;
  puVar6 = &UNK_800a36a8;
  do {
    iVar8 = 0xf;
    puVar3 = (undefined4 *)(puVar6 + 0x3c);
    do {
      *puVar3 = 0;
      iVar8 = iVar8 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar8);
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x40;
  } while (iVar7 < 0x20);
  DAT_800a3624 = 0x3c;
  DAT_800a3620 = 0;
  DAT_800a361c = 0;
  return;
}



void FUN_8001fbd8(byte param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  SpuVoiceAttr local_60;
  
  FUN_80023008(0);
  DAT_800a4768 = 0;
  SpuInitMalloc(0x20,&DAT_800a3eb8);
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800a4500)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0xc0);
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800a44e0)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x18);
  DAT_800a4840 = 0;
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800a47e8)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x10);
  DAT_800a47c4 = param_1;
  if (0x17 < param_1) {
    DAT_800a47c4 = 0x18;
  }
  uVar1 = 0;
  local_60.mask = 0x60093;
  local_60.pitch = 0x1000;
  local_60.addr = 0x1000;
  local_60.adsr1 = 0x80ff;
  local_60.volume.left = 0;
  local_60.volume.right = 0;
  local_60.adsr2 = 0x4000;
  if ('\0' < (char)DAT_800a47c4) {
    do {
      uVar2 = uVar1 & 0xffff;
      local_60.voice = 1 << (uVar1 & 0x1f);
      (&DAT_800a3fd2)[uVar2 * 0x1b] = 0x18;
      (&DAT_800a3fd0)[uVar2 * 0x1b] = 0xff;
      (&DAT_800a3fed)[uVar2 * 0x36] = 0;
      (&DAT_800a3fd4)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fd6)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fe0)[uVar2 * 0x1b] = 0xffff;
      (&DAT_800a3fe2)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fe4)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fe6)[uVar2 * 0x1b] = 0xff;
      (&DAT_800a3fd8)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fdc)[uVar2 * 0x1b] = 0;
      (&DAT_800a3fda)[uVar2 * 0x36] = 0x40;
      (&DAT_800a3fee)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ff0)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ff2)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ff4)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ffa)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ffc)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ffe)[uVar2 * 0x1b] = 0;
      (&DAT_800a4000)[uVar2 * 0x1b] = 0;
      (&DAT_800a4002)[uVar2 * 0x1b] = 0;
      (&DAT_800a3ff6)[uVar2 * 0x1b] = 0;
      SpuSetVoiceAttr(&local_60);
      DAT_800a47e2 = (undefined2)uVar1;
      FUN_80020738(1);
      uVar1 = uVar1 + 1;
    } while ((int)(uVar1 & 0xffff) < (int)(char)DAT_800a47c4);
  }
  DAT_800a46d0 = 0;
  DAT_800a46d8 = 0x3fff;
  DAT_800a46da = 0x3fff;
  DAT_800a46d4 = 0;
  DAT_800a3fc0 = 0;
  DAT_800a3fc2 = 0;
  DAT_800a46c8 = 0;
  DAT_800a3fc4 = 0;
  DAT_800a3fc6 = 0;
  DAT_800a3fc8 = 0;
  DAT_800a3fca = 0;
  DAT_800a47f8 = 0;
  DAT_800a47b0 = 0;
  DAT_800a47b2 = 0x80;
  FUN_80020cd8();
  return;
}



uint FUN_8001ff28(uint param_1,short param_2,short param_3,undefined2 param_4,ushort param_5,
                 undefined1 param_6)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  int iVar10;
  byte local_138 [128];
  char local_b8 [128];
  short local_38;
  int local_30;
  
  sVar2 = (short)param_1;
  iVar10 = *(int *)(&DAT_800a3628 + (param_1 & 0xff) * 4) +
           ((int)((int)sVar2 & 0xff00U) >> 8) * 0xb0;
  local_38 = param_3;
  iVar4 = FUN_8006cc60((int)param_2,(int)param_3);
  uVar6 = 0xffffffff;
  if (iVar4 == 0) {
    DAT_800a47ca = (undefined1)param_4;
    DAT_800a47cb = 0;
    if ((int)sVar2 == 0x21) {
      DAT_800a47cc = (undefined1)param_5;
    }
    else {
      DAT_800a47cc = (undefined1)
                     ((int)((uint)param_5 *
                           (int)*(short *)((uint)*(byte *)(iVar10 + 0x17) * 2 + iVar10 + 0x60)) /
                     0x7f);
    }
    DAT_800a47cd = param_6;
    puVar5 = (undefined1 *)(local_38 * 0x10 + DAT_800a47b4);
    DAT_800a47d2 = puVar5[1];
    DAT_800a47d3 = puVar5[4];
    DAT_800a47c8 = *puVar5;
    uVar6 = 0xffffffff;
    DAT_800a47de = sVar2;
    if ((int)DAT_800a47cf < (int)(uint)*(ushort *)(DAT_800a47bc + 0x12)) {
      if (param_5 == 0) {
        uVar6 = FUN_8002049c((int)sVar2,(int)param_2,(int)local_38,param_4);
      }
      else {
        bVar1 = FUN_8006c5d0(local_b8,local_138);
        bVar9 = 0;
        uVar6 = 0;
        if (bVar1 != 0) {
          local_30 = (int)sVar2;
          uVar7 = 0;
          do {
            DAT_800a47e0 = (ushort)local_138[uVar7];
            DAT_800a47d4 = local_b8[uVar7];
            pcVar8 = (char *)(((int)DAT_800a47d4 + DAT_800a47cf * 0x10 & 0xffffU) * 0x20 +
                             DAT_800a47c0);
            DAT_800a47d7 = *pcVar8;
            DAT_800a47d5 = pcVar8[2];
            DAT_800a47d6 = pcVar8[3];
            DAT_800a47d8 = pcVar8[4];
            DAT_800a47d9 = pcVar8[5];
            DAT_800a47dc = pcVar8[1];
            DAT_800a47da = pcVar8[6];
            DAT_800a47db = pcVar8[7];
            uVar7 = FUN_8006ad30(0);
            uVar7 = uVar7 & 0xff;
            DAT_800a47e2 = (short)uVar7;
            if ((int)uVar7 < (int)DAT_800a47c4) {
              (&DAT_800a3fed)[uVar7 * 0x36] = 1;
              (&DAT_800a3fd2)[DAT_800a47e2 * 0x1b] = 0;
              (&DAT_800a3fe0)[DAT_800a47e2 * 0x1b] = sVar2;
              (&DAT_800a3fe8)[DAT_800a47e2 * 0x1b] = (short)DAT_800a47c9;
              (&DAT_800a3fe2)[DAT_800a47e2 * 0x1b] = (short)DAT_800a47cf;
              (&DAT_800a3fe4)[DAT_800a47e2 * 0x1b] = local_38;
              if (local_30 != 0x21) {
                (&DAT_800a3fd8)[DAT_800a47e2 * 0x1b] = param_5;
                (&DAT_800a3fdc)[DAT_800a47e2 * 0x1b] = (ushort)*(byte *)(iVar10 + 0x17);
              }
              (&DAT_800a3fda)[DAT_800a47e2 * 0x36] = param_6;
              (&DAT_800a3fe6)[DAT_800a47e2 * 0x1b] = (short)DAT_800a47d4;
              (&DAT_800a3fde)[DAT_800a47e2 * 0x1b] = param_4;
              *(short *)(&DAT_800a3fea + DAT_800a47e2 * 0x36) = (short)DAT_800a47d7;
              (&DAT_800a3fd0)[DAT_800a47e2 * 0x1b] = DAT_800a47e0;
              FUN_8006afc0();
              if (DAT_800a47e0 == 0xff) {
                FUN_8006b480((undefined1)DAT_800a47e2);
              }
              else {
                uVar3 = FUN_8006b1c0();
                FUN_80020808(bVar1,uVar3);
              }
              uVar6 = uVar6 | 1 << ((int)DAT_800a47e2 & 0x1fU);
            }
            else {
              uVar6 = 0xffffffff;
            }
            bVar9 = bVar9 + 1;
            uVar7 = (uint)bVar9;
          } while (bVar9 < bVar1);
        }
      }
    }
  }
  return uVar6;
}



int FUN_8002049c(short param_1,short param_2,short param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if ('\0' < DAT_800a47c4) {
    do {
      uVar1 = uVar2 & 0xff;
      if (((((DAT_80039488 & 1 << (uVar2 & 0x1f)) == 0) &&
           ((int)(short)(&DAT_800a3fde)[uVar1 * 0x1b] == (param_4 & 0xffff))) &&
          ((&DAT_800a3fe4)[uVar1 * 0x1b] == param_3)) &&
         (((&DAT_800a3fe0)[uVar1 * 0x1b] == param_1 && ((&DAT_800a3fe8)[uVar1 * 0x1b] == param_2))))
      {
        if ((&DAT_800a3fd0)[uVar1 * 0x1b] == 0xff) {
          iVar3 = iVar3 + 1;
          FUN_8006ba00();
        }
        else {
          DAT_800a47e2 = (ushort)uVar2 & 0xff;
          FUN_80020738(0);
          iVar3 = iVar3 + 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)(uVar2 & 0xff) < (int)DAT_800a47c4);
  }
  return iVar3;
}



void FUN_80020738(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = (uint)DAT_800a47e2;
  if (uVar1 < 0x10) {
    uVar3 = (ushort)(1 << (uVar1 & 0x1f));
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = (ushort)(1 << (uVar1 - 0x10 & 0x1f));
  }
  (&DAT_800a3fed)[uVar1 * 0x36] = 0;
  (&DAT_800a3fd4)[uVar1 * 0x1b] = 0;
  (&DAT_800a3fd0)[uVar1 * 0x1b] = 0;
  DAT_800a46c8 = DAT_800a46c8 | uVar3;
  DAT_800a3fc0 = DAT_800a3fc0 & ~DAT_800a46c8;
  DAT_800a46ca = DAT_800a46ca | uVar2;
  DAT_800a3fc2 = DAT_800a3fc2 & ~DAT_800a46ca;
  return;
}



void FUN_80020808(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)(((int)((int)DAT_800a47cc * (uint)*(byte *)(DAT_800a47bc + 0x18) * 0x3fff) / 0x3f01)
                 * (int)DAT_800a47d2 * (int)DAT_800a47d5) / 0x3f01;
  iVar1 = *(int *)(&DAT_800a3628 + (DAT_800a47de & 0xff) * 4) +
          ((int)((int)(short)DAT_800a47de & 0xff00U) >> 8) * 0xb0;
  uVar6 = uVar5;
  if ((int)(short)DAT_800a47de != 0x21) {
    uVar6 = (uVar5 * *(ushort *)(iVar1 + 0x58)) / 0x7f;
    uVar5 = (uVar5 * *(ushort *)(iVar1 + 0x5a)) / 0x7f;
  }
  uVar2 = (uint)DAT_800a47d6;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = (uint)DAT_800a47d3;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = (uint)DAT_800a47cd;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = uVar5;
  if ((DAT_800a47b0 == 1) && (uVar2 = uVar6, uVar6 < uVar5)) {
    uVar6 = uVar5;
    uVar2 = uVar5;
  }
  if (DAT_800a47de != 0x21) {
    uVar6 = (uVar6 * uVar6) / 0x3fff;
    uVar2 = (uVar2 * uVar2) / 0x3fff;
  }
  uVar5 = (int)DAT_800a47e2 & 0x1fff;
  (&DAT_800a4504)[uVar5 * 8] = param_2;
  (&DAT_800a4500)[uVar5 * 8] = (short)uVar6;
  (&DAT_800a4502)[uVar5 * 8] = (short)uVar2;
  (&DAT_800a44e0)[DAT_800a47e2] = (&DAT_800a44e0)[DAT_800a47e2] | 7;
  (&DAT_800a3fd4)[DAT_800a47e2 * 0x1b] = param_2;
  uVar6 = (uint)DAT_800a47e2;
  if ((int)uVar6 < 0x10) {
    uVar4 = (ushort)(1 << (uVar6 & 0x1f));
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = (ushort)(1 << (uVar6 - 0x10 & 0x1f));
  }
  if ((DAT_800a47dc & 4) == 0) {
    DAT_800a3fc4 = DAT_800a3fc4 & ~uVar4;
    DAT_800a3fc6 = DAT_800a3fc6 & ~uVar3;
  }
  else {
    DAT_800a3fc4 = DAT_800a3fc4 | uVar4;
    DAT_800a3fc6 = DAT_800a3fc6 | uVar3;
  }
  DAT_800a3fc8 = DAT_800a3fc8 & ~uVar4;
  DAT_800a3fc2 = DAT_800a3fc2 | uVar3;
  DAT_800a3fca = DAT_800a3fca & ~uVar3;
  DAT_800a3fc0 = DAT_800a3fc0 | uVar4;
  DAT_800a46c8 = DAT_800a46c8 & ~DAT_800a3fc0;
  DAT_800a46ca = DAT_800a46ca & ~DAT_800a3fc2;
  return;
}



void FUN_80020cd8(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  short *psVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  SpuVoiceAttr local_68;
  
  DAT_800a4684 = DAT_800a4684 + 1 & 0xf;
  (&DAT_800a4688)[DAT_800a4684] = 0;
  uVar4 = 0;
  if ('\0' < DAT_800a47c4) {
    psVar10 = &DAT_800a3fd6;
    iVar6 = 0;
    do {
      SpuGetVoiceEnvelope(uVar4,psVar10);
      if (*(short *)((int)&DAT_800a3fd6 + iVar6) == 0) {
        (&DAT_800a4688)[DAT_800a4684] = (&DAT_800a4688)[DAT_800a4684] | 1 << (uVar4 & 0x1f);
      }
      psVar10 = psVar10 + 0x1b;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x36;
    } while ((int)uVar4 < (int)DAT_800a47c4);
  }
  iVar6 = 0;
  if (DAT_800a47f8 == '\0') {
    uVar4 = 0xffffffff;
    puVar2 = &DAT_800a4688;
    do {
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 & *puVar2;
      puVar2 = puVar2 + 1;
    } while (iVar6 < 0xf);
    uVar5 = 0;
    if ('\0' < DAT_800a47c4) {
      pcVar7 = &DAT_800a3fed;
      do {
        uVar3 = 1 << (uVar5 & 0x1f);
        if ((uVar4 & uVar3) != 0) {
          if (*pcVar7 == '\x02') {
            uVar1 = 0;
            if (0xf < (int)uVar5) {
              uVar3 = 0;
              uVar1 = 1 << (uVar5 - 0x10 & 0x1f);
            }
            FUN_80022828(0,(uVar1 & 0xff) << 0x10 | (int)(short)uVar3);
          }
          *pcVar7 = '\0';
        }
        uVar5 = uVar5 + 1;
        pcVar7 = pcVar7 + 0x36;
      } while ((int)uVar5 < (int)DAT_800a47c4);
    }
  }
  iVar6 = 0;
  DAT_800a3fc0 = DAT_800a3fc0 & ~DAT_800a46c8;
  iVar8 = 0;
  DAT_800a3fc2 = DAT_800a3fc2 & ~DAT_800a46ca;
  do {
    if (*(short *)((int)&DAT_800a3fee + iVar8) != 0) {
      (*DAT_800a4680)(iVar6);
    }
    if (*(short *)((int)&DAT_800a3ffa + iVar8) != 0) {
      (*DAT_800a44f8)(iVar6);
    }
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0x36;
  } while (iVar6 < 0x18);
  uVar4 = 0;
  pbVar9 = &DAT_800a44e0;
  psVar10 = &DAT_800a4500;
  puVar15 = &DAT_800a450a;
  puVar14 = &DAT_800a4508;
  puVar13 = &DAT_800a4506;
  puVar12 = &DAT_800a4504;
  psVar11 = &DAT_800a4502;
  do {
    local_68.voice = 1 << (uVar4 & 0x1f);
    local_68.mask = 0;
    if ((*pbVar9 & 1) != 0) {
      local_68.mask = 3;
      local_68.volume.left = *psVar10;
      local_68.volume.right = *psVar11;
    }
    if ((*pbVar9 & 4) != 0) {
      local_68.mask = local_68.mask | 0x10;
      local_68.pitch = *puVar12;
    }
    if ((*pbVar9 & 8) != 0) {
      local_68.mask = local_68.mask | 0x80;
      local_68.addr = (uint)*puVar13 << 3;
    }
    if ((*pbVar9 & 0x10) != 0) {
      local_68.mask = local_68.mask | 0x60000;
      local_68.adsr1 = *puVar14;
      local_68.adsr2 = *puVar15;
    }
    if (local_68.mask != 0) {
      SpuSetVoiceAttr(&local_68);
    }
    *pbVar9 = 0;
    pbVar9 = pbVar9 + 1;
    puVar15 = puVar15 + 8;
    puVar14 = puVar14 + 8;
    puVar13 = puVar13 + 8;
    puVar12 = puVar12 + 8;
    psVar11 = psVar11 + 8;
    uVar4 = uVar4 + 1;
    psVar10 = psVar10 + 8;
  } while ((int)uVar4 < 0x18);
  SpuSetKey(0,(uint)CONCAT12((undefined1)DAT_800a46ca,DAT_800a46c8));
  SpuSetKey(1,(uint)CONCAT12((undefined1)DAT_800a3fc2,DAT_800a3fc0));
  FUN_80022b18(8,(uint)CONCAT12((undefined1)DAT_800a3fc6,DAT_800a3fc4));
  FUN_80022828(8,(uint)CONCAT12((undefined1)DAT_800a3fca,DAT_800a3fc8));
  DAT_800a46c8 = 0;
  DAT_800a46ca = 0;
  DAT_800a3fc0 = 0;
  DAT_800a3fc2 = 0;
  DAT_800a3fc8 = 0;
  DAT_800a3fca = 0;
  return;
}



uint __addsf3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((param_1 & 0x7fffffff) == 0) {
ADDSF3_OBJ_64:
    uVar7 = ADDSF3_OBJ_194();
    return uVar7;
  }
  if ((param_2 & 0x7fffffff) != 0) {
    uVar5 = (int)param_1 >> 0x17 & 0xff;
    uVar6 = (int)param_2 >> 0x17 & 0xff;
    if (uVar5 <= uVar6 + 0x19) {
      if (uVar6 <= uVar5 + 0x19) {
        uVar2 = param_1 & 0x7fffff | 0x800000;
        iVar3 = uVar2 * 0x40;
        uVar1 = param_2 & 0x7fffff | 0x800000;
        iVar4 = uVar1 * 0x40;
        if ((int)param_1 < 0) {
          iVar3 = uVar2 * -0x40;
        }
        if ((param_2 & 0x80000000) != 0) {
          iVar4 = uVar1 * -0x40;
        }
        if (uVar6 < uVar5) {
          uVar7 = ADDSF3_OBJ_C4(iVar4 >> (uVar5 - uVar6 & 0x1f));
          return uVar7;
        }
        uVar5 = (iVar3 >> (uVar6 - uVar5 & 0x1f)) + iVar4;
        if ((int)uVar5 < 0) {
          uVar5 = -uVar5;
          uVar7 = 0x80000000;
        }
        else if (uVar5 == 0) {
          uVar7 = ADDSF3_OBJ_194();
          return uVar7;
        }
        for (; (uVar5 & 0xe0000000) == 0; uVar5 = uVar5 << 1) {
          uVar6 = uVar6 - 1;
        }
        if ((uVar5 & 0x40000000) != 0) {
          uVar5 = (int)uVar5 >> 1;
          uVar6 = uVar6 + 1;
        }
        uVar1 = uVar5 + 0x20;
        if ((uVar5 & 0x40) == 0) {
          uVar1 = uVar5 + 0x1f;
        }
        if ((uVar1 & 0x40000000) != 0) {
          uVar1 = (int)uVar1 >> 1;
          uVar6 = uVar6 + 1;
        }
        if (uVar6 < 0xff) {
          return uVar7 | uVar6 << 0x17 | (int)uVar1 >> 6 & 0xff7fffffU;
        }
        _err_math(0x22,10);
        uVar7 = ADDSF3_OBJ_190();
        return uVar7;
      }
      goto ADDSF3_OBJ_64;
    }
  }
  uVar7 = ADDSF3_OBJ_194();
  return uVar7;
}



uint ADDSF3_OBJ_C4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int in_v1;
  uint uVar2;
  uint unaff_s0;
  
  uVar2 = in_v1 + param_1;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
    unaff_s0 = 0x80000000;
  }
  else if (uVar2 == 0) {
    uVar2 = ADDSF3_OBJ_194();
    return uVar2;
  }
  for (; (uVar2 & 0xe0000000) == 0; uVar2 = uVar2 << 1) {
    param_3 = param_3 - 1;
  }
  if ((uVar2 & 0x40000000) != 0) {
    uVar2 = (int)uVar2 >> 1;
    param_3 = param_3 + 1;
  }
  uVar1 = uVar2 + 0x20;
  if ((uVar2 & 0x40) == 0) {
    uVar1 = uVar2 + 0x1f;
  }
  if ((uVar1 & 0x40000000) != 0) {
    uVar1 = (int)uVar1 >> 1;
    param_3 = param_3 + 1;
  }
  if (param_3 < 0xff) {
    return unaff_s0 | param_3 << 0x17 | (int)uVar1 >> 6 & 0xff7fffffU;
  }
  _err_math(0x22,10);
  uVar2 = ADDSF3_OBJ_190();
  return uVar2;
}



undefined4 ADDSF3_OBJ_190(void)

{
  undefined4 in_a3;
  
  return in_a3;
}



void ADDSF3_OBJ_194(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80021420)
// WARNING: Removing unreachable block (ram,0x80021434)
// WARNING: Removing unreachable block (ram,0x80021438)

uint __divsf3(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = ((int)param_1 >> 0x17 & 0xffU) - ((int)param_2 >> 0x17 & 0xffU);
  iVar5 = iVar6 + 0x7e;
  uVar7 = param_1 & 0x80000000 ^ param_2 & 0x80000000;
  if ((param_2 & 0x7fffffff) == 0) {
    uVar1 = 0x4f000000;
    if (uVar7 != 0) {
      uVar7 = DIVSF3_OBJ_134();
      return uVar7;
    }
  }
  else {
    if ((param_1 & 0x7fffffff) == 0) {
      uVar7 = DIVSF3_OBJ_134();
      return uVar7;
    }
    uVar4 = param_1 & 0x7fffff | 0x800000;
    uVar3 = param_2 & 0x7fffff | 0x800000;
    uVar1 = 0x1000000;
    if (uVar4 < uVar3) {
      uVar4 = uVar4 << 1;
      iVar5 = iVar6 + 0x7d;
    }
    uVar2 = 0;
    do {
      if ((int)uVar3 <= (int)uVar4) {
        uVar2 = uVar2 | uVar1;
        uVar4 = uVar4 - uVar3;
      }
      uVar1 = (int)uVar1 >> 1;
      uVar4 = uVar4 << 1;
    } while (uVar1 != 0);
    if (-1 < iVar5) {
      uVar7 = DIVSF3_OBJ_F0((int)(uVar2 + 1) >> 1,uVar3,uVar4,iVar5 + 1);
      return uVar7;
    }
    uVar1 = uVar7 | (int)(uVar2 + (1 << (-iVar5 & 0x1fU))) >> (-iVar5 + 1U & 0x1f) & 0xff7fffffU;
  }
  return uVar1;
}



uint DIVSF3_OBJ_F0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint unaff_s0;
  
  if (0xfe < param_4) {
    _err_math(0x22,0xe);
    uVar1 = DIVSF3_OBJ_130();
    return uVar1;
  }
  return unaff_s0 | param_4 << 0x17 | param_1 & 0xff7fffff;
}



undefined4 DIVSF3_OBJ_130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



void DIVSF3_OBJ_134(void)

{
  return;
}



uint FUN_800215f8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0x9d;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 < 0) {
      uVar3 = 0x80000000;
      param_1 = -param_1;
    }
    for (; param_1 < 0x1000000; param_1 = param_1 << 4) {
      iVar1 = iVar1 + -4;
    }
    for (; param_1 < 0x40000000; param_1 = param_1 << 1) {
      iVar1 = iVar1 + -1;
    }
    uVar2 = param_1 + 0x40;
    if ((int)uVar2 < 0) {
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 >> 8;
    }
    else {
      uVar2 = uVar2 >> 7;
    }
    uVar3 = uVar3 | iVar1 << 0x17 | uVar2 & 0xff7fffff;
  }
  return uVar3;
}



uint __gtsf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != param_2) && (((param_1 & 0x7fffffff) != 0 || ((param_2 & 0x7fffffff) != 0)))) {
    uVar4 = param_1 & 0x80000000;
    uVar1 = (uint)(uVar4 == 0);
    if (uVar4 == (param_2 & 0x80000000)) {
      uVar3 = (int)param_1 >> 0x17 & 0xff;
      uVar2 = (int)param_2 >> 0x17 & 0xff;
      uVar1 = (uint)(uVar4 == 0);
      if (((uVar3 <= uVar2) && (uVar1 = (uint)((int)param_1 < 0), uVar3 == uVar2)) &&
         (uVar1 = (uint)(uVar4 == 0),
         (param_1 & 0x7fffff | 0x800000) <= (param_2 & 0x7fffff | 0x800000))) {
        uVar1 = (uint)((int)param_1 < 0);
      }
    }
    return uVar1;
  }
  uVar1 = GTSF2_OBJ_90();
  return uVar1;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void GTSF2_OBJ_90(void)

{
  return;
}



undefined4 __ltsf2(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != param_2) && (((param_1 & 0x7fffffff) != 0 || ((param_2 & 0x7fffffff) != 0)))) {
    uVar4 = param_1 & 0x80000000;
    if (uVar4 != (param_2 & 0x80000000)) {
      if (uVar4 != 0) {
        return 0xffffffff;
      }
      uVar1 = LTSF2_OBJ_A8();
      return uVar1;
    }
    uVar3 = (int)param_1 >> 0x17 & 0xff;
    uVar2 = (int)param_2 >> 0x17 & 0xff;
    if ((uVar3 < uVar2) ||
       ((uVar3 == uVar2 && ((param_1 & 0x7fffff | 0x800000) < (param_2 & 0x7fffff | 0x800000))))) {
      if (uVar4 != 0) {
        return 0;
      }
      uVar1 = LTSF2_OBJ_A8();
      return uVar1;
    }
    if ((int)param_1 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



void LTSF2_OBJ_A8(void)

{
  return;
}



uint __mulsf3(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 & 0x80000000 ^ param_2 & 0x80000000;
  if (((param_1 & 0x7fffffff) == 0) || ((param_2 & 0x7fffffff) == 0)) {
    uVar5 = MULSF3_OBJ_130();
    return uVar5;
  }
  iVar2 = (int)(param_1 & 0x7fffff | 0x800000) >> 8;
  iVar1 = (int)(param_2 & 0x7fffff | 0x800000) >> 8;
  uVar4 = iVar2 * iVar1 + ((int)((param_1 & 0xff) * iVar1) >> 8) +
          ((int)((param_2 & 0xff) * iVar2) >> 8);
  if ((uVar4 & 0x80000000) != 0) {
    uVar5 = MULSF3_OBJ_EC();
    return uVar5;
  }
  uVar4 = uVar4 + 0x40;
  if ((uVar4 & 0x80000000) != 0) {
    uVar5 = MULSF3_OBJ_EC();
    return uVar5;
  }
  iVar1 = ((int)param_1 >> 0x17 & 0xffU) + ((int)param_2 >> 0x17 & 0xffU) + -0x7f;
  if (0xfe < iVar1) {
    _err_math(0x22,0xc);
    uVar3 = 0x7f800000;
    if (uVar5 != 0) {
      uVar3 = 0xff800000;
    }
    uVar5 = MULSF3_OBJ_12C(uVar3);
    return uVar5;
  }
  return uVar5 | iVar1 * 0x800000 | uVar4 >> 7 & 0xff7fffff;
}



uint MULSF3_OBJ_EC(void)

{
  uint uVar1;
  int in_v1;
  undefined4 uVar2;
  uint in_a3;
  uint unaff_s0;
  
  if (0xfe < in_v1) {
    _err_math(0x22,0xc);
    uVar2 = 0x7f800000;
    if (unaff_s0 != 0) {
      uVar2 = 0xff800000;
    }
    uVar1 = MULSF3_OBJ_12C(uVar2);
    return uVar1;
  }
  return unaff_s0 | in_v1 << 0x17 | in_a3 & 0xff7fffff;
}



void MULSF3_OBJ_12C(void)

{
  return;
}



void MULSF3_OBJ_130(void)

{
  return;
}



// Possible NEGSF2.OBJ/__negsf2

uint FUN_80021948(uint param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 ^ 0x80000000;
  }
  return param_1;
}



void __subsf3(uint param_1,uint param_2)

{
  if ((param_2 & 0x7fffffff) == 0) {
    SUBSF3_OBJ_50();
    return;
  }
  if ((param_1 & 0x7fffffff) != 0) {
    __addsf3(param_1,param_2 ^ 0x80000000);
    SUBSF3_OBJ_50();
    return;
  }
  FUN_80021948(param_2);
  return;
}



void SUBSF3_OBJ_50(void)

{
  return;
}



undefined4 _err_math(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  DAT_800394d0 = param_1;
  DAT_800394d4 = param_2;
  if (param_1 == 0x21) {
    uVar1 = FERR_OBJ_4C(0xf4000002,0x301);
    return uVar1;
  }
  if (param_1 != 0x22) {
    uVar1 = FERR_OBJ_54();
    return uVar1;
  }
  DeliverEvent(0xf4000002,0x302);
  return 0;
}



undefined4 FERR_OBJ_4C(ulong param_1,ulong param_2)

{
  DeliverEvent(param_1,param_2);
  return 0;
}



undefined4 FERR_OBJ_54(void)

{
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Possible S_I.OBJ/SpuInit

void SsUtReverbOff(void)

{
  _SpuInit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _SpuInit(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_a0;
  
  ResetCallback();
  _spu_init();
  if (in_a0 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_80039542;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  SpuStart();
  DAT_800394ec = 0;
  DAT_800394f0 = 0;
  DAT_800394fc = 0;
  DAT_80039500 = 0;
  DAT_80039502 = 0;
  DAT_80039504 = 0;
  DAT_80039508 = 0;
  DAT_800394f4 = DAT_800399c8;
  _spu_FsetRXX(0xd1,DAT_800399c8,0);
  DAT_800399b8 = 0;
  DAT_800399bc = 0;
  DAT_800399c0 = 0;
  DAT_800394e8 = 0;
  DAT_80039974 = 0;
  DAT_800394e4 = 0;
  DAT_80039510 = 0;
  DAT_8003950c = 0;
  DAT_80039944 = 0;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void SpuStart(void)

{
  if (DAT_80039948 == 0) {
    DAT_80039948 = 1;
    FUN_800353e4();
    FUN_800226f8(_spu_FiDMA);
    DAT_800394e0 = OpenEvent(0xf0000009,0x20,0x2000,(func *)0x0);
    EnableEvent(DAT_800394e0);
    FUN_800353f4();
  }
  return;
}



undefined4 _spu_init(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  *(uint *)PTR_DMA_DPCR_80039968 = *(uint *)PTR_DMA_DPCR_80039968 | 0xb0000;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  DAT_80039974 = 0;
  DAT_80039978 = 0;
  DAT_80039970 = 0;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = 0;
  *(undefined2 *)(puVar1 + 0x182) = 0;
  *(undefined2 *)(puVar1 + 0x1aa) = 0;
  _spu_Fw1ts();
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = 0;
  *(undefined2 *)(puVar1 + 0x182) = 0;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  if ((*(ushort *)(puVar1 + 0x1ae) & 0x7ff) != 0) {
    uVar4 = 1;
    do {
      if (0xf00 < uVar4) {
        printf("SPU:T/O [%s]\n","wait (reset)");
        uVar3 = SPU_OBJ_D4(0);
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x7ff) != 0);
  }
  iVar5 = 0;
  puVar6 = &DAT_800a4888;
  DAT_8003997c = 2;
  DAT_80039980 = 3;
  DAT_80039984 = 8;
  DAT_80039988 = 7;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ac) = 4;
  *(undefined2 *)(puVar2 + 0x184) = 0;
  *(undefined2 *)(puVar2 + 0x186) = 0;
  *(undefined2 *)(puVar2 + 0x18c) = 0xffff;
  *(undefined2 *)(puVar2 + 0x18e) = 0xffff;
  *(undefined2 *)(puVar2 + 0x198) = 0;
  *(undefined2 *)(puVar2 + 0x19a) = 0;
  do {
    *puVar6 = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 10);
  if (param_1 == 0) {
    DAT_80039970 = 0x200;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 400) = 0;
    *(undefined2 *)(puVar1 + 0x192) = 0;
    *(undefined2 *)(puVar1 + 0x194) = 0;
    *(undefined2 *)(puVar1 + 0x196) = 0;
    *(undefined2 *)(puVar1 + 0x1b0) = 0;
    *(undefined2 *)(puVar1 + 0x1b2) = 0;
    *(undefined2 *)(puVar1 + 0x1b4) = 0;
    *(undefined2 *)(puVar1 + 0x1b6) = 0;
    SPU_OBJ_280(&DAT_80039998,0x10);
    iVar5 = 0;
    puVar6 = (undefined2 *)PTR_VOICE_00_LEFT_RIGHT_80039958;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0x3fff;
      puVar6[3] = 0x200;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar5 < 0x18);
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x188) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18a) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x18c) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18e) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
  }
  DAT_8003998c = 1;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) = 0xc000;
  DAT_80039990 = 0;
  DAT_80039994 = 0;
  return 0;
}



undefined4 SPU_OBJ_D4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int unaff_s0;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  puVar3 = &DAT_800a4888;
  DAT_8003997c = 2;
  DAT_80039980 = 3;
  DAT_80039984 = 8;
  DAT_80039988 = 7;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ac) = 4;
  *(undefined2 *)(puVar1 + 0x184) = 0;
  *(undefined2 *)(puVar1 + 0x186) = 0;
  *(undefined2 *)(puVar1 + 0x18c) = 0xffff;
  *(undefined2 *)(puVar1 + 0x18e) = 0xffff;
  *(undefined2 *)(puVar1 + 0x198) = 0;
  *(undefined2 *)(puVar1 + 0x19a) = 0;
  do {
    *puVar3 = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  } while (param_1 < 10);
  if (unaff_s0 == 0) {
    DAT_80039970 = 0x200;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 400) = 0;
    *(undefined2 *)(puVar1 + 0x192) = 0;
    *(undefined2 *)(puVar1 + 0x194) = 0;
    *(undefined2 *)(puVar1 + 0x196) = 0;
    *(undefined2 *)(puVar1 + 0x1b0) = 0;
    *(undefined2 *)(puVar1 + 0x1b2) = 0;
    *(undefined2 *)(puVar1 + 0x1b4) = 0;
    *(undefined2 *)(puVar1 + 0x1b6) = 0;
    SPU_OBJ_280(&DAT_80039998,0x10);
    iVar2 = 0;
    puVar3 = (undefined2 *)PTR_VOICE_00_LEFT_RIGHT_80039958;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0x3fff;
      puVar3[3] = 0x200;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar2 < 0x18);
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x188) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18a) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x18c) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18e) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
  }
  DAT_8003998c = 1;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) = 0xc000;
  DAT_80039990 = 0;
  DAT_80039994 = 0;
  return 0;
}



void SPU_OBJ_280(undefined2 *param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae);
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) = DAT_80039970;
  _spu_Fw1ts();
  bVar3 = param_2 < 0x41;
  if (param_2 != 0) {
    do {
      puVar4 = PTR_VOICE_00_LEFT_RIGHT_80039958;
      uVar7 = 0x40;
      if (bVar3) {
        uVar7 = param_2;
      }
      iVar5 = 0;
      if (0 < (int)uVar7) {
        do {
          uVar2 = *param_1;
          param_1 = param_1 + 1;
          iVar5 = iVar5 + 2;
          *(undefined2 *)(puVar4 + 0x1a8) = uVar2;
        } while (iVar5 < (int)uVar7);
      }
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf | 0x10;
      _spu_Fw1ts();
      if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x400) != 0) {
        uVar6 = 1;
        do {
          if (0xf00 < uVar6) {
            printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
            SPU_OBJ_390();
            return;
          }
          uVar6 = uVar6 + 1;
        } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x400) != 0);
      }
      param_2 = param_2 - uVar7;
      _spu_Fw1ts();
      _spu_Fw1ts();
      bVar3 = param_2 < 0x41;
    } while (param_2 != 0);
  }
  puVar4 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(puVar4 + 0x1ae) & 0x7ff) != (uVar1 & 0x7ff)) {
    uVar7 = 1;
    do {
      if (0xf00 < uVar7) {
        printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
        SPU_OBJ_424();
        return;
      }
      uVar7 = uVar7 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x7ff) != (uVar1 & 0x7ff));
  }
  return;
}



void SPU_OBJ_390(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s0;
  uint unaff_s1;
  undefined2 *unaff_s2;
  ushort unaff_s3;
  
  do {
    do {
      unaff_s1 = unaff_s1 - unaff_s0;
      _spu_Fw1ts();
      _spu_Fw1ts();
      puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
      if (unaff_s1 == 0) {
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf;
        if ((*(ushort *)(puVar2 + 0x1ae) & 0x7ff) != unaff_s3) {
          uVar4 = 1;
          do {
            if (0xf00 < uVar4) {
              printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
              SPU_OBJ_424();
              return;
            }
            uVar4 = uVar4 + 1;
          } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x7ff) != unaff_s3);
        }
        return;
      }
      unaff_s0 = 0x40;
      if (unaff_s1 < 0x41) {
        unaff_s0 = unaff_s1;
      }
      iVar3 = 0;
      if (0 < (int)unaff_s0) {
        do {
          uVar1 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          iVar3 = iVar3 + 2;
          *(undefined2 *)(puVar2 + 0x1a8) = uVar1;
        } while (iVar3 < (int)unaff_s0);
      }
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf | 0x10;
      _spu_Fw1ts();
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x400) == 0);
    uVar4 = 1;
    do {
      if (0xf00 < uVar4) {
        printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
        SPU_OBJ_390();
        return;
      }
      uVar4 = uVar4 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ae) & 0x400) != 0);
  } while( true );
}



void SPU_OBJ_424(void)

{
  return;
}



void _spu_FiDMA(void)

{
  undefined *puVar1;
  uint uVar2;
  
  if (DAT_800399a8 == 0) {
    _spu_Fw1ts();
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_80039990 != (code *)0x0) {
    (*DAT_80039990)();
    SPU_OBJ_4EC();
    return;
  }
  DeliverEvent(0xf0000009,0x20);
  return;
}



void SPU_OBJ_4EC(void)

{
  return;
}



void _spu_Fr_(undefined4 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) = param_2;
  _spu_Fw1ts();
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x30;
  _spu_Fw1ts();
  SPU_OBJ_AB0();
  *(undefined4 *)PTR_DMA_SPU_MADR_8003995c = param_1;
  *(uint *)PTR_DMA_SPU_BCR_80039960 = param_3 << 0x10 | 0x10;
  DAT_800399a8 = 1;
  *(undefined4 *)PTR_DMA_SPU_CHCR_80039964 = 0x1000200;
  return;
}



undefined4 _spu_t(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 == 1) {
    DAT_800399a8 = 0;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) != DAT_80039970) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_800399a8 = 0;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) != DAT_80039970);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xffcf | 0x20;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = SPU_OBJ_814();
      return uVar2;
    }
    DAT_800399a8 = 1;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) != DAT_80039970) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_800399a8 = 1;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) != DAT_80039970);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x30;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 2) {
    DAT_80039970 = (short)(param_2 >> (DAT_80039980 & 0x1f));
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1a6) = DAT_80039970;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 3) {
    uVar4 = 0x20;
    if (DAT_800399a8 == 1) {
      uVar4 = 0x30;
    }
    uVar3 = 1;
    uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa);
    while ((uVar1 & 0x30) != uVar4) {
      if (0xf00 < uVar3) {
        return 0xfffffffe;
      }
      uVar3 = uVar3 + 1;
      uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa);
    }
    if (DAT_800399a8 != 1) {
      SPU_OBJ_A88();
      DAT_800399b0 = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
      DAT_800399ac = param_2;
      *(uint *)PTR_DMA_SPU_MADR_8003995c = param_2;
      *(uint *)PTR_DMA_SPU_BCR_80039960 = DAT_800399b0 << 0x10 | 0x10;
      uVar2 = 0x1000201;
      if (DAT_800399a8 == 1) {
        uVar2 = 0x1000200;
      }
      *(undefined4 *)PTR_DMA_SPU_CHCR_80039964 = uVar2;
      return 0;
    }
    SPU_OBJ_AB0();
    uVar2 = SPU_OBJ_78C();
    return uVar2;
  }
  uVar2 = SPU_OBJ_814();
  return uVar2;
}



undefined4 SPU_OBJ_78C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_s0;
  
  DAT_800399ac = unaff_s0[-1];
  DAT_800399b0 = (*unaff_s0 >> 6) + (uint)((*unaff_s0 & 0x3f) != 0);
  *(uint *)PTR_DMA_SPU_MADR_8003995c = DAT_800399ac;
  *(uint *)PTR_DMA_SPU_BCR_80039960 = DAT_800399b0 << 0x10 | 0x10;
  param_3 = param_3 | 0x201;
  if (DAT_800399a8 == 1) {
    param_3 = 0x1000200;
  }
  *(uint *)PTR_DMA_SPU_CHCR_80039964 = param_3;
  return 0;
}



void SPU_OBJ_814(void)

{
  return;
}



undefined4 _spu_Fw(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_80039974 == 0) {
    _spu_t(2,(uint)DAT_80039970 << (DAT_80039980 & 0x1f));
    _spu_t(1);
    _spu_t(3,param_1,param_2);
    uVar1 = SPU_OBJ_894();
    return uVar1;
  }
  SPU_OBJ_280(param_1,param_2);
  return param_2;
}



void SPU_OBJ_894(void)

{
  return;
}



undefined4 _spu_Fr(undefined4 param_1,undefined4 param_2)

{
  _spu_t(2,(uint)DAT_80039970 << (DAT_80039980 & 0x1f));
  _spu_t(0);
  _spu_t(3,param_1,param_2);
  return param_2;
}



void _spu_FsetRXX(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_1 * 2) = (short)param_2;
    SPU_OBJ_948();
    return;
  }
  *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_1 * 2) =
       (short)(param_2 >> (DAT_80039980 & 0x1f));
  return;
}



void SPU_OBJ_948(void)

{
  return;
}



uint _spu_FsetRXXa(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_8003997c != 0) {
    if (DAT_80039984 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_80039984 != 0) {
      param_2 = param_2 + DAT_80039984 & ~DAT_80039988;
    }
  }
  if (param_1 != -2) {
    if (param_1 == -1) {
      uVar1 = SPU_OBJ_9EC();
      return uVar1;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_1 * 2) =
         (short)(param_2 >> (DAT_80039980 & 0x1f));
    return param_2;
  }
  uVar1 = SPU_OBJ_9EC();
  return uVar1;
}



void SPU_OBJ_9EC(void)

{
  return;
}



uint _spu_FgetRXXa(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != -1) {
    uVar1 = SPU_OBJ_A28();
    return uVar1;
  }
  return (uint)*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_1 * 2);
}



void SPU_OBJ_A28(void)

{
  return;
}



void _spu_FsetPCR(int param_1)

{
  *(uint *)PTR_DMA_DPCR_80039968 = *(uint *)PTR_DMA_DPCR_80039968 & 0xfff8ffff;
  if (param_1 != 0) {
    SPU_OBJ_A7C(0x30000);
    return;
  }
  *(uint *)PTR_DMA_DPCR_80039968 = *(uint *)PTR_DMA_DPCR_80039968 | 0x50000;
  return;
}



void SPU_OBJ_A7C(uint param_1)

{
  uint *in_v0;
  uint in_v1;
  
  *in_v0 = in_v1 | param_1;
  return;
}



void SPU_OBJ_A88(void)

{
  *(uint *)PTR_SPU_DELAY_8003996c = *(uint *)PTR_SPU_DELAY_8003996c & 0xf0ffffff | 0x20000000;
  return;
}



void SPU_OBJ_AB0(void)

{
  *(uint *)PTR_SPU_DELAY_8003996c = *(uint *)PTR_SPU_DELAY_8003996c & 0xf0ffffff | 0x22000000;
  return;
}



void _spu_Fw1ts(void)

{
  SPU_OBJ_B18();
  return;
}



void SPU_OBJ_B18(void)

{
  undefined4 local_res0;
  
  for (; local_res0 < 0x3c; local_res0 = local_res0 + 1) {
  }
  return;
}



// Possible S_DCB.OBJ/_SpuDataCallback

void FUN_800226f8(undefined4 param_1)

{
  DMACallback(4,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// Possible S_IH.OBJ/SpuInitHot

void SsUtReverbOn(void)

{
  _SpuInit();
  return;
}



// Possible S_Q.OBJ/SpuQuit

void FUN_80022748(void)

{
  if (DAT_80039948 == 1) {
    DAT_80039948 = 0;
    FUN_800353e4();
    DAT_80039990 = 0;
    DAT_80039994 = 0;
    FUN_800226f8(0);
    CloseEvent(DAT_800394e0);
    DisableEvent(DAT_800394e0);
    FUN_800353f4();
  }
  return;
}



long SpuInitMalloc(long num,char *top)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = DAT_80039980;
  if (num < 1) {
    lVar2 = S_M_INIT_OBJ_4C();
    return lVar2;
  }
  top[0] = '\x10';
  top[1] = '\x10';
  top[2] = '\0';
  top[3] = '@';
  DAT_800399bc = 0;
  DAT_800399b8 = num;
  DAT_800399c0 = top;
  *(int *)(top + 4) = (0x10000 << (uVar1 & 0x1f)) + -0x1010;
  return num;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void S_M_INIT_OBJ_4C(void)

{
  return;
}



// Possible S_SNV.OBJ/SpuSetNoiseVoice

void FUN_80022828(undefined4 param_1,undefined4 param_2)

{
  _SpuSetAnyVoice(param_1,param_2,0xca,0xcb);
  return;
}



uint _SpuSetAnyVoice(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  
  uVar4 = (ushort)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  if (param_1 == 1) {
    if ((DAT_80039944 & 1) != 0) {
      *(ushort *)(&DAT_800a4700 + param_3 * 2) = *(ushort *)(&DAT_800a4700 + param_3 * 2) | uVar4;
      *(ushort *)(&DAT_800a4700 + param_4 * 2) =
           *(ushort *)(&DAT_800a4700 + param_4 * 2) | uVar1 & 0xff;
      DAT_80039510 = DAT_80039510 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      uVar2 = S_SAV_OBJ_130();
      return uVar2;
    }
    puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_4 * 2);
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 2) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 2) | uVar4;
    *puVar3 = *puVar3 | uVar1 & 0xff;
    uVar2 = S_SAV_OBJ_2AC();
    return uVar2;
  }
  if (1 < param_1) {
    if (param_1 != 8) {
      uVar2 = S_SAV_OBJ_2B4();
      return uVar2;
    }
    if ((DAT_80039944 & 1) != 0) {
      *(ushort *)(&DAT_800a4700 + param_3 * 2) = uVar4;
      *(ushort *)(&DAT_800a4700 + param_4 * 2) = uVar1 & 0xff;
      DAT_80039510 = DAT_80039510 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      uVar2 = S_SAV_OBJ_2A4();
      return uVar2;
    }
    puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_4 * 2);
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 2) = uVar4;
    *puVar3 = uVar1 & 0xff;
    return param_2 & 0xffffff;
  }
  if (param_1 != 0) {
    uVar2 = S_SAV_OBJ_2B4();
    return uVar2;
  }
  if ((DAT_80039944 & 1) != 0) {
    *(ushort *)(&DAT_800a4700 + param_3 * 2) = *(ushort *)(&DAT_800a4700 + param_3 * 2) & ~uVar4;
    *(ushort *)(&DAT_800a4700 + param_4 * 2) =
         *(ushort *)(&DAT_800a4700 + param_4 * 2) & ~(uVar1 & 0xff);
    DAT_80039510 = DAT_80039510 | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    uVar2 = S_SAV_OBJ_200();
    return uVar2;
  }
  puVar3 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_4 * 2);
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 2) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 2) & ~uVar4;
  *puVar3 = *puVar3 & ~(uVar1 & 0xff);
  uVar2 = S_SAV_OBJ_2AC();
  return uVar2;
}



void S_SAV_OBJ_130(void)

{
  S_SAV_OBJ_2AC();
  return;
}



void S_SAV_OBJ_200(void)

{
  S_SAV_OBJ_2AC();
  return;
}



uint S_SAV_OBJ_2A4(void)

{
  uint in_v0;
  uint in_t0;
  
  return in_t0 & (in_v0 | 0xffff) & 0xffffff;
}



uint S_SAV_OBJ_2AC(void)

{
  uint in_t2;
  
  return in_t2 & 0xffffff;
}



uint S_SAV_OBJ_2B4(void)

{
  uint in_v0;
  uint in_t2;
  
  return in_t2 & in_v0;
}



// Possible S_SRV.OBJ/SpuSetReverbVoice

void FUN_80022b18(undefined4 param_1,undefined4 param_2)

{
  _SpuSetAnyVoice(param_1,param_2,0xcc,0xcd);
  return;
}



void SpuSetKey(long on_off,ulong voice_bit)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  uVar3 = voice_bit & 0xffffff;
  uVar2 = (ushort)uVar3;
  uVar4 = (ushort)(uVar3 >> 0x10);
  if (on_off == 0) {
    if ((DAT_80039944 & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x18c) = uVar2;
      *(ushort *)(puVar1 + 0x18e) = uVar4;
      DAT_800394e4 = DAT_800394e4 & ~uVar3;
    }
    else {
      DAT_80039510 = DAT_80039510 | 1;
      DAT_8003950c = DAT_8003950c & ~uVar3;
      if ((DAT_800a4888 & uVar3) != 0) {
        DAT_800a4888 = DAT_800a4888 & (ushort)~uVar3;
      }
      DAT_800a488c = uVar2;
      DAT_800a488e = uVar4;
      if (((uint)DAT_800a488a & uVar3 >> 0x10) != 0) {
        DAT_800a488a = DAT_800a488a & ~uVar4;
        S_SK_OBJ_1B4();
        return;
      }
    }
  }
  else if (on_off == 1) {
    if ((DAT_80039944 & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x188) = uVar2;
      *(ushort *)(puVar1 + 0x18a) = uVar4;
      S_SK_OBJ_1AC();
      return;
    }
    DAT_80039510 = DAT_80039510 | 1;
    DAT_8003950c = DAT_8003950c | uVar3;
    if ((DAT_800a488c & uVar3) != 0) {
      DAT_800a488c = DAT_800a488c & ~uVar2;
    }
    DAT_800a4888 = uVar2;
    DAT_800a488a = uVar4;
    if (((uint)DAT_800a488e & uVar3 >> 0x10) != 0) {
      DAT_800a488e = DAT_800a488e & ~uVar4;
      S_SK_OBJ_1B4();
      return;
    }
  }
  return;
}



void S_SK_OBJ_1AC(void)

{
  undefined4 in_v0;
  
  DAT_800394e4 = in_v0;
  return;
}



void S_SK_OBJ_1B4(void)

{
  return;
}



void SpuSetKeyOnWithAttr(SpuVoiceAttr *attr)

{
  SpuSetVoiceAttr(attr);
  SpuSetKey(1,attr->voice);
  return;
}



// Possible S_W.OBJ/SpuWrite

ulong SpuRead(uchar *addr,ulong size)

{
  if (0x7eff0 < size) {
    size = 0x7eff0;
  }
  _spu_Fw(addr,size);
  if (DAT_80039990 == 0) {
    DAT_8003998c = 0;
  }
  return size;
}



ulong SpuWrite0(ulong size)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int local_28;
  
  iVar2 = DAT_80039974;
  local_28 = 0;
  bVar1 = DAT_80039974 == 1;
  if (bVar1) {
    DAT_80039974 = 0;
  }
  if (DAT_80039990 != 0) {
    local_28 = DAT_80039990;
    DAT_80039990 = 0;
  }
  if (size < 0x401) {
    uVar3 = size & 0xffffffc0;
    if (uVar3 < size) {
      uVar3 = uVar3 + 0x40;
    }
    _spu_t(2,(uint)DAT_80039970 << (DAT_80039980 & 0x1f));
    _spu_t(1);
    _spu_t(3,&DAT_80039544,uVar3);
    WaitEvent(DAT_800394e0);
    if (bVar1) {
      DAT_80039974 = iVar2;
    }
    if (local_28 != 0) {
      DAT_80039990 = local_28;
    }
    return uVar3;
  }
  uVar3 = S_W0_OBJ_B8();
  return uVar3;
}



int S_W0_OBJ_B8(void)

{
  int iVar1;
  uint unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 unaff_s5;
  int unaff_s6;
  int in_stack_00000010;
  
  while( true ) {
    _spu_t(2,unaff_s2);
    _spu_t(1);
    _spu_t(3,&DAT_80039544,unaff_s0);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    unaff_s3 = unaff_s3 + unaff_s0;
    WaitEvent(DAT_800394e0);
    if (unaff_s4 == 0) {
      if (unaff_s6 != 0) {
        DAT_80039974 = unaff_s5;
      }
      if (in_stack_00000010 != 0) {
        DAT_80039990 = in_stack_00000010;
      }
      return unaff_s3;
    }
    if (0x400 < unaff_s1) break;
    unaff_s0 = unaff_s1 & 0xffffffc0;
    unaff_s4 = 0;
    if (unaff_s0 < unaff_s1) {
      unaff_s0 = unaff_s0 + 0x40;
    }
  }
  iVar1 = S_W0_OBJ_B8();
  return iVar1;
}



ulong SpuSetTransferStartAddr(ulong addr)

{
  ulong uVar1;
  
  if (addr - 0x1010 < 0x7efe9) {
    DAT_80039970 = _spu_FsetRXXa(0xffffffff);
    uVar1 = S_STSA_OBJ_4C();
    return uVar1;
  }
  return 0;
}



void S_STSA_OBJ_4C(void)

{
  return;
}



long SpuIsTransferCompleted(long flag)

{
  bool bVar1;
  long lVar2;
  
  if ((DAT_800394e8 != 1) && (DAT_8003998c != 1)) {
    lVar2 = TestEvent(DAT_800394e0);
    if (flag == 1) {
      bVar1 = lVar2 == 0;
      lVar2 = 1;
      if (bVar1) {
        do {
          lVar2 = TestEvent(DAT_800394e0);
        } while (lVar2 == 0);
        lVar2 = S_ITC_OBJ_88();
        return lVar2;
      }
    }
    else if (lVar2 != 1) {
      return lVar2;
    }
    DAT_8003998c = lVar2;
    return lVar2;
  }
  lVar2 = S_ITC_OBJ_90();
  return lVar2;
}



void S_ITC_OBJ_88(void)

{
  undefined4 in_v0;
  
  DAT_8003998c = in_v0;
  return;
}



void S_ITC_OBJ_90(void)

{
  return;
}



// Possible S_IT.OBJ/_spu_setInTransfer

void FUN_80023008(int param_1)

{
  DAT_8003998c = (uint)(param_1 != 1);
  return;
}



long SpuRGetAllKeysStatus(long min_,long max_,char *status)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = min_;
  if (min_ < 0) {
    uVar2 = 0;
  }
  if (min_ < 0x18) {
    if (0x17 < max_) {
      max_ = 0x17;
    }
    lVar1 = -3;
    if (-1 < max_) {
      if (max_ < (int)uVar2) goto SR_GAKS_OBJ_38;
      lVar1 = 0;
      if ((int)uVar2 < max_ + 1) {
        pcVar3 = status + uVar2;
        do {
          if ((DAT_800394e4 & 1 << (uVar2 & 0x1f)) != 0) {
            if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar2 * 0x10 + 0xc) != 0) {
              *pcVar3 = '\x01';
              lVar1 = SR_GAKS_OBJ_B8();
              return lVar1;
            }
            *pcVar3 = '\x03';
            lVar1 = SR_GAKS_OBJ_B8();
            return lVar1;
          }
          if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar2 * 0x10 + 0xc) != 0) {
            *pcVar3 = '\x02';
            lVar1 = SR_GAKS_OBJ_B8();
            return lVar1;
          }
          *pcVar3 = '\0';
          uVar2 = uVar2 + 1;
          pcVar3 = pcVar3 + 1;
        } while ((int)uVar2 < max_ + 1);
        lVar1 = 0;
      }
    }
    return lVar1;
  }
SR_GAKS_OBJ_38:
  lVar1 = SR_GAKS_OBJ_CC();
  return lVar1;
}



undefined4 SR_GAKS_OBJ_B8(undefined4 param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int in_t0;
  undefined1 in_t1;
  undefined1 in_t2;
  
  while( true ) {
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    if (param_2 <= (int)param_4) {
      return 0;
    }
    if ((DAT_800394e4 & in_t0 << (param_4 & 0x1f)) != 0) break;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_4 * 0x10 + 0xc) != 0) {
      *param_3 = in_t1;
      uVar1 = SR_GAKS_OBJ_B8();
      return uVar1;
    }
    *param_3 = 0;
  }
  if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_4 * 0x10 + 0xc) != 0) {
    *param_3 = (char)in_t0;
    uVar1 = SR_GAKS_OBJ_B8();
    return uVar1;
  }
  *param_3 = in_t2;
  uVar1 = SR_GAKS_OBJ_B8();
  return uVar1;
}



void SR_GAKS_OBJ_CC(void)

{
  return;
}



void SpuGetAllKeysStatus(char *status)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((DAT_800394e4 & 1 << (uVar1 & 0x1f)) != 0) {
      if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar1 * 0x10 + 0xc) != 0) {
        *status = '\x01';
        SR_GAKS_OBJ_144();
        return;
      }
      *status = '\x03';
      SR_GAKS_OBJ_144();
      return;
    }
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar1 * 0x10 + 0xc) != 0) {
      *status = '\x02';
      SR_GAKS_OBJ_144();
      return;
    }
    *status = '\0';
    uVar1 = uVar1 + 1;
    status = status + 1;
  } while ((int)uVar1 < 0x18);
  return;
}



void SR_GAKS_OBJ_144(undefined4 param_1,undefined1 *param_2,uint param_3,int param_4)

{
  undefined1 in_t0;
  undefined1 in_t1;
  int in_t2;
  
  while( true ) {
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    if (in_t2 <= (int)param_3) {
      return;
    }
    if ((DAT_800394e4 & param_4 << (param_3 & 0x1f)) != 0) break;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 0x10 + 0xc) != 0) {
      *param_2 = in_t0;
      SR_GAKS_OBJ_144();
      return;
    }
    *param_2 = 0;
  }
  if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_3 * 0x10 + 0xc) != 0) {
    *param_2 = (char)param_4;
    SR_GAKS_OBJ_144();
    return;
  }
  *param_2 = in_t1;
  SR_GAKS_OBJ_144();
  return;
}



void SpuSetVoiceVolume(int vNum,short volL,short volR)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10);
  *puVar1 = volL & 0x7fff;
  puVar1[1] = volR & 0x7fff;
  S_SVV_OBJ_60();
  return;
}



void S_SVV_OBJ_60(void)

{
  undefined4 local_res0;
  
  for (; local_res0 < 2; local_res0 = local_res0 + 1) {
  }
  return;
}



void SpuSetVoicePitch(int vNum,ushort pitch)

{
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10 + 4) = pitch;
  S_SVP_OBJ_54();
  return;
}



void S_SVP_OBJ_54(void)

{
  undefined4 local_res0;
  
  for (; local_res0 < 2; local_res0 = local_res0 + 1) {
  }
  return;
}



void SpuSetVoiceStartAddr(int vNum,ulong startAddr)

{
  _spu_FsetRXXa(vNum << 3 | 3);
  S_SVSA_OBJ_50();
  return;
}



void S_SVSA_OBJ_50(void)

{
  int in_stack_00000010;
  
  for (; in_stack_00000010 < 2; in_stack_00000010 = in_stack_00000010 + 1) {
  }
  return;
}



void SpuSetVoiceADSRAttr(int vNum,ushort AR,ushort DR,ushort SR,ushort RR,ushort SL,long ARmode,
                        long SRmode,long RRmode)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)((SR & 0x7f) << 6) | RR & 0x1f;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10 + 8) =
       (ushort)((AR & 0x7f) << 8) | (ushort)((DR & 0xf) << 4) | SL & 0xf |
       (ushort)(ARmode == 5) << 0xf;
  if (SRmode == 5) {
    S_SVADA_OBJ_BC();
    return;
  }
  if (SRmode < 6) {
    if (SRmode != 1) {
      S_SVADA_OBJ_C0();
      return;
    }
    S_SVADA_OBJ_BC();
    return;
  }
  if (SRmode != 7) {
    S_SVADA_OBJ_C0();
    return;
  }
  uVar2 = uVar1 | 0xc000;
  if (RRmode == 7) {
    uVar2 = uVar1 | 0xc020;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10 + 10) = uVar2;
  S_SVADA_OBJ_120();
  return;
}



void S_SVADA_OBJ_BC(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  ushort uVar1;
  ushort in_t0;
  
  uVar1 = param_4 | in_t0;
  if (param_1 == 7) {
    uVar1 = param_4 | in_t0 | 0x20;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_2 * 2 + 10) = uVar1;
  S_SVADA_OBJ_120();
  return;
}



void S_SVADA_OBJ_C0(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  int in_v0;
  ushort uVar1;
  ushort in_t0;
  
  uVar1 = param_4 | in_t0;
  if (param_1 == in_v0) {
    uVar1 = param_4 | in_t0 | 0x20;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + param_2 * 2 + 10) = uVar1;
  S_SVADA_OBJ_120();
  return;
}



void S_SVADA_OBJ_120(void)

{
  undefined4 local_res0;
  
  for (; local_res0 < 2; local_res0 = local_res0 + 1) {
  }
  return;
}



void SpuSetVoiceAttr(SpuVoiceAttr *arg)

{
  short sVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  
  uVar10 = 0;
  uVar9 = arg->mask;
  puVar11 = &DAT_80039514;
  bVar2 = uVar9 == 0;
  do {
    if ((arg->voice & 1 << (uVar10 & 0x1f)) != 0) {
      if ((bVar2) || ((uVar9 & 0x10) != 0)) {
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 4) = arg->pitch;
      }
      if ((bVar2) || ((uVar9 & 0x40) != 0)) {
        *puVar11 = arg->sample_note;
      }
      if ((bVar2) || ((uVar9 & 0x20) != 0)) {
        uVar3 = FUN_80023ae4(*puVar11 >> 8,*puVar11 & 0xff,arg->note >> 8,arg->note & 0xff);
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 4) = uVar3;
      }
      if ((bVar2) || ((uVar9 & 1) != 0)) {
        uVar6 = 0;
        uVar5 = (arg->volume).left & 0x7fff;
        if ((bVar2) || ((uVar9 & 4) != 0)) {
          switch((int)(((ushort)(arg->volmode).left - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar6 = 0x8000;
            break;
          case 1:
            uVar6 = 0x9000;
            break;
          case 2:
            uVar6 = 0xa000;
            break;
          case 3:
            uVar6 = 0xb000;
            break;
          case 4:
            uVar6 = 0xc000;
            break;
          case 5:
            uVar6 = 0xd000;
            break;
          case 6:
            uVar6 = 0xe000;
          }
        }
        if (uVar6 != 0) {
          sVar1 = (arg->volume).left;
          if (0x7f < sVar1) {
            S_SVA_OBJ_1A0(uVar6,0x7f);
            return;
          }
          if (sVar1 < 0) {
            uVar5 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10) = uVar5 | uVar6;
      }
      if ((bVar2) || ((uVar9 & 2) != 0)) {
        uVar6 = 0;
        uVar5 = (arg->volume).right & 0x7fff;
        if ((bVar2) || ((uVar9 & 8) != 0)) {
          switch((int)(((ushort)(arg->volmode).right - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar6 = 0x8000;
            break;
          case 1:
            uVar6 = 0x9000;
            break;
          case 2:
            uVar6 = 0xa000;
            break;
          case 3:
            uVar6 = 0xb000;
            break;
          case 4:
            uVar6 = 0xc000;
            break;
          case 5:
            uVar6 = 0xd000;
            break;
          case 6:
            uVar6 = 0xe000;
          }
        }
        if (uVar6 != 0) {
          sVar1 = (arg->volume).right;
          if (0x7f < sVar1) {
            S_SVA_OBJ_280(uVar6,0x7f);
            return;
          }
          if (sVar1 < 0) {
            uVar5 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 2) = uVar5 | uVar6;
      }
      if ((bVar2) || ((uVar9 & 0x80) != 0)) {
        _spu_FsetRXXa(uVar10 << 3 | 3,arg->addr);
      }
      if ((bVar2) || ((uVar9 & 0x10000) != 0)) {
        _spu_FsetRXXa(uVar10 << 3 | 7,arg->loop_addr);
      }
      if ((bVar2) || ((uVar9 & 0x20000) != 0)) {
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) = arg->adsr1;
      }
      if ((bVar2) || ((uVar9 & 0x40000) != 0)) {
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 10) = arg->adsr2;
      }
      if ((bVar2) || ((uVar9 & 0x800) != 0)) {
        uVar7 = (uint)arg->ar;
        if (0x7f < uVar7) {
          uVar7 = 0x7f;
        }
        uVar8 = 0;
        if (((bVar2) || ((uVar9 & 0x100) != 0)) && (arg->a_mode == 5)) {
          uVar8 = 0x80;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) & 0xff |
             (ushort)((uVar7 | uVar8) << 8);
      }
      if ((bVar2) || ((uVar9 & 0x1000) != 0)) {
        uVar7 = (uint)arg->dr;
        if (0xf < uVar7) {
          uVar7 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) & 0xff0f |
             (ushort)(uVar7 << 4);
      }
      if ((bVar2) || ((uVar9 & 0x2000) != 0)) {
        uVar7 = (uint)arg->sr;
        if (0x7f < uVar7) {
          uVar7 = 0x7f;
        }
        uVar8 = 0x100;
        if ((bVar2) || ((uVar9 & 0x200) != 0)) {
          iVar4 = arg->s_mode;
          if (iVar4 == 5) {
            S_SVA_OBJ_480();
            return;
          }
          if (iVar4 < 6) {
            if (iVar4 == 1) {
              S_SVA_OBJ_480();
              return;
            }
            S_SVA_OBJ_480();
            return;
          }
          if (iVar4 != 7) {
            S_SVA_OBJ_480();
            return;
          }
          uVar8 = 0x300;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 10) & 0x3f |
             (ushort)((uVar7 | uVar8) << 6);
      }
      if ((bVar2) || ((uVar9 & 0x4000) != 0)) {
        uVar6 = arg->rr;
        if (0x1f < uVar6) {
          uVar6 = 0x1f;
        }
        uVar5 = 0;
        if ((((bVar2) || ((uVar9 & 0x400) != 0)) && (arg->r_mode != 3)) && (arg->r_mode == 7)) {
          uVar5 = 0x20;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 10) & 0xffc0 |
             uVar6 | uVar5;
      }
      if ((bVar2) || ((uVar9 & 0x8000) != 0)) {
        uVar6 = arg->sl;
        if (0xf < uVar6) {
          uVar6 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + uVar10 * 0x10 + 8) & 0xfff0 | uVar6;
      }
    }
    uVar10 = uVar10 + 1;
    puVar11 = puVar11 + 1;
    if (0x17 < (int)uVar10) {
      S_SVA_OBJ_5C0();
      return;
    }
  } while( true );
}



void S_SVA_OBJ_13C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x80023594:
  uVar3 = 0x8000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      goto code_r0x80023594;
    case 1:
      uVar3 = 0x9000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_144(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x8002359c:
  uVar3 = 0x9000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      goto code_r0x8002359c;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_14C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800235a4:
  uVar3 = 0xa000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      goto code_r0x800235a4;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_154(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800235ac:
  uVar3 = 0xb000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      goto code_r0x800235ac;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_15C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800235b4:
  uVar3 = 0xc000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      goto code_r0x800235b4;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_164(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800235bc:
  uVar3 = 0xd000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      goto code_r0x800235bc;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_16C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800235c4:
  uVar3 = 0xe000;
  goto S_SVA_OBJ_170;
  do {
    switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_170:
      do {
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
            uVar3 = 0;
            uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
              switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < *(short *)((int)unaff_s0 + 10)) {
                S_SVA_OBJ_280(uVar3,0x7f);
                return;
              }
              if (*(short *)((int)unaff_s0 + 10) < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
        uVar3 = 0;
        param_2 = (ushort)unaff_s0[2] & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 4) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      goto code_r0x800235c4;
    }
  } while( true );
}



void S_SVA_OBJ_170(int param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
  do {
    if (param_1 != 0) {
      if (0x7f < (short)unaff_s0[2]) {
        S_SVA_OBJ_1A0(param_1,0x7f);
        return;
      }
      if ((short)unaff_s0[2] < 0) {
        param_2 = 0;
      }
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | (ushort)param_1;
    do {
      if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
        uVar3 = 0;
        uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
        if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
          switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar3 = 0x8000;
            break;
          case 1:
            uVar3 = 0x9000;
            break;
          case 2:
            uVar3 = 0xa000;
            break;
          case 3:
            uVar3 = 0xb000;
            break;
          case 4:
            uVar3 = 0xc000;
            break;
          case 5:
            uVar3 = 0xd000;
            break;
          case 6:
            uVar3 = 0xe000;
          }
        }
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            uVar2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(undefined2 *)((int)unaff_s0 + 0x3a);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xc];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0;
        if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
          uVar5 = 0x80;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
             (ushort)((uVar4 | uVar5) << 8);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
        uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
        if (0xf < uVar4) {
          uVar4 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
             (ushort)(uVar4 << 4);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xd];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0x100;
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
          uVar5 = unaff_s0[10];
          if (uVar5 == 5) {
            S_SVA_OBJ_480();
            return;
          }
          if ((int)uVar5 < 6) {
            if (uVar5 == 1) {
              S_SVA_OBJ_480();
              return;
            }
            S_SVA_OBJ_480();
            return;
          }
          if (uVar5 != 7) {
            S_SVA_OBJ_480();
            return;
          }
          uVar5 = 0x300;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
             (ushort)((uVar4 | uVar5) << 6);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
        uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
        if (0x1f < uVar3) {
          uVar3 = 0x1f;
        }
        uVar2 = 0;
        if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
           (unaff_s0[0xb] == 7)) {
          uVar2 = 0x20;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
             uVar3 | uVar2;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
        uVar3 = (ushort)unaff_s0[0xe];
        if (0xf < uVar3) {
          uVar3 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
      }
      do {
        unaff_s4 = unaff_s4 + 1;
        unaff_s5 = unaff_s5 + 1;
        if (0x17 < (int)unaff_s4) {
          S_SVA_OBJ_5C0();
          return;
        }
      } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
      unaff_s3 = unaff_s4 * 8;
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
        *unaff_s5 = (ushort)unaff_s0[6];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
        uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,*(ushort *)((int)unaff_s0 + 0x16) >> 8,
                             *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
      }
    } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
    param_1 = 0;
    param_2 = (ushort)unaff_s0[2] & 0x7fff;
    if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
      switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
      case 0:
        param_1 = 0x8000;
        break;
      case 1:
        param_1 = 0x9000;
        break;
      case 2:
        param_1 = 0xa000;
        break;
      case 3:
        param_1 = 0xb000;
        break;
      case 4:
        param_1 = 0xc000;
        break;
      case 5:
        param_1 = 0xd000;
        break;
      case 6:
        param_1 = 0xe000;
      }
    }
  } while( true );
}



void S_SVA_OBJ_1A0(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
  do {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2) = param_2 | param_1;
    do {
      if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
        uVar3 = 0;
        uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
        if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
          switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar3 = 0x8000;
            break;
          case 1:
            uVar3 = 0x9000;
            break;
          case 2:
            uVar3 = 0xa000;
            break;
          case 3:
            uVar3 = 0xb000;
            break;
          case 4:
            uVar3 = 0xc000;
            break;
          case 5:
            uVar3 = 0xd000;
            break;
          case 6:
            uVar3 = 0xe000;
          }
        }
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            uVar2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = uVar2 | uVar3;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(undefined2 *)((int)unaff_s0 + 0x3a);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xc];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0;
        if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
          uVar5 = 0x80;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
             (ushort)((uVar4 | uVar5) << 8);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
        uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
        if (0xf < uVar4) {
          uVar4 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
             (ushort)(uVar4 << 4);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xd];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0x100;
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
          uVar5 = unaff_s0[10];
          if (uVar5 == 5) {
            S_SVA_OBJ_480();
            return;
          }
          if ((int)uVar5 < 6) {
            if (uVar5 == 1) {
              S_SVA_OBJ_480();
              return;
            }
            S_SVA_OBJ_480();
            return;
          }
          if (uVar5 != 7) {
            S_SVA_OBJ_480();
            return;
          }
          uVar5 = 0x300;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
             (ushort)((uVar4 | uVar5) << 6);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
        uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
        if (0x1f < uVar3) {
          uVar3 = 0x1f;
        }
        uVar2 = 0;
        if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
           (unaff_s0[0xb] == 7)) {
          uVar2 = 0x20;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
             uVar3 | uVar2;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
        uVar3 = (ushort)unaff_s0[0xe];
        if (0xf < uVar3) {
          uVar3 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
      }
      do {
        unaff_s4 = unaff_s4 + 1;
        unaff_s5 = unaff_s5 + 1;
        if (0x17 < (int)unaff_s4) {
          S_SVA_OBJ_5C0();
          return;
        }
      } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
      unaff_s3 = unaff_s4 * 8;
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
        *unaff_s5 = (ushort)unaff_s0[6];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
        uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,*(ushort *)((int)unaff_s0 + 0x16) >> 8,
                             *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
      }
    } while ((unaff_s2 == 0) && ((unaff_s1 & 1) == 0));
    param_1 = 0;
    param_2 = (ushort)unaff_s0[2] & 0x7fff;
    if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
      switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
      case 0:
        param_1 = 0x8000;
        break;
      case 1:
        param_1 = 0x9000;
        break;
      case 2:
        param_1 = 0xa000;
        break;
      case 3:
        param_1 = 0xb000;
        break;
      case 4:
        param_1 = 0xc000;
        break;
      case 5:
        param_1 = 0xd000;
        break;
      case 6:
        param_1 = 0xe000;
      }
    }
    if (param_1 != 0) {
      if (0x7f < (short)unaff_s0[2]) {
        S_SVA_OBJ_1A0(param_1,0x7f);
        return;
      }
      if ((short)unaff_s0[2] < 0) {
        param_2 = 0;
      }
    }
  } while( true );
}



void S_SVA_OBJ_21C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x80023674:
  uVar3 = 0x8000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      goto code_r0x80023674;
    case 1:
      uVar3 = 0x9000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_224(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x8002367c:
  uVar3 = 0x9000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      goto code_r0x8002367c;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_22C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x80023684:
  uVar3 = 0xa000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      goto code_r0x80023684;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_234(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x8002368c:
  uVar3 = 0xb000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      goto code_r0x8002368c;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_23C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x80023694:
  uVar3 = 0xc000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      goto code_r0x80023694;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_244(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x8002369c:
  uVar3 = 0xd000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      goto code_r0x8002369c;
    case 6:
      uVar3 = 0xe000;
      break;
    }
  } while( true );
}



void S_SVA_OBJ_24C(undefined4 param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
code_r0x800236a4:
  uVar3 = 0xe000;
  goto S_SVA_OBJ_250;
  do {
    switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
    case 0:
      uVar3 = 0x8000;
    default:
S_SVA_OBJ_250:
      do {
        if (uVar3 != 0) {
          if (0x7f < *(short *)((int)unaff_s0 + 10)) {
            S_SVA_OBJ_280(uVar3,0x7f);
            return;
          }
          if (*(short *)((int)unaff_s0 + 10) < 0) {
            param_2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | uVar3;
        do {
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
            _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(undefined2 *)((int)unaff_s0 + 0x3a);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xc];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0;
            if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
              uVar5 = 0x80;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
                 (ushort)((uVar4 | uVar5) << 8);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
            uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
            if (0xf < uVar4) {
              uVar4 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
                 (ushort)(uVar4 << 4);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
            uVar4 = (uint)(ushort)unaff_s0[0xd];
            if (0x7f < uVar4) {
              uVar4 = 0x7f;
            }
            uVar5 = 0x100;
            if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
              uVar5 = unaff_s0[10];
              if (uVar5 == 5) {
                S_SVA_OBJ_480();
                return;
              }
              if ((int)uVar5 < 6) {
                if (uVar5 == 1) {
                  S_SVA_OBJ_480();
                  return;
                }
                S_SVA_OBJ_480();
                return;
              }
              if (uVar5 != 7) {
                S_SVA_OBJ_480();
                return;
              }
              uVar5 = 0x300;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
                 (ushort)((uVar4 | uVar5) << 6);
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
            uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            uVar2 = 0;
            if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
               (unaff_s0[0xb] == 7)) {
              uVar2 = 0x20;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
                 uVar3 | uVar2;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
            uVar3 = (ushort)unaff_s0[0xe];
            if (0xf < uVar3) {
              uVar3 = 0xf;
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
                 *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
          }
          do {
            unaff_s4 = unaff_s4 + 1;
            unaff_s5 = unaff_s5 + 1;
            if (0x17 < (int)unaff_s4) {
              S_SVA_OBJ_5C0();
              return;
            }
          } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
          unaff_s3 = unaff_s4 * 8;
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
            *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
            *unaff_s5 = (ushort)unaff_s0[6];
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
            uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                                 *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                                 *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
            *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
          }
          if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
            uVar3 = 0;
            uVar2 = (ushort)unaff_s0[2] & 0x7fff;
            if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
              switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
              case 0:
                uVar3 = 0x8000;
                break;
              case 1:
                uVar3 = 0x9000;
                break;
              case 2:
                uVar3 = 0xa000;
                break;
              case 3:
                uVar3 = 0xb000;
                break;
              case 4:
                uVar3 = 0xc000;
                break;
              case 5:
                uVar3 = 0xd000;
                break;
              case 6:
                uVar3 = 0xe000;
              }
            }
            if (uVar3 != 0) {
              if (0x7f < (short)unaff_s0[2]) {
                S_SVA_OBJ_1A0(uVar3,0x7f);
                return;
              }
              if ((short)unaff_s0[2] < 0) {
                uVar2 = 0;
              }
            }
            *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
          }
        } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
        uVar3 = 0;
        param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
      } while ((unaff_s2 == 0) && ((unaff_s1 & 8) == 0));
      break;
    case 1:
      uVar3 = 0x9000;
      break;
    case 2:
      uVar3 = 0xa000;
      break;
    case 3:
      uVar3 = 0xb000;
      break;
    case 4:
      uVar3 = 0xc000;
      break;
    case 5:
      uVar3 = 0xd000;
      break;
    case 6:
      goto code_r0x800236a4;
    }
  } while( true );
}



void S_SVA_OBJ_250(int param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
  do {
    if (param_1 != 0) {
      if (0x7f < *(short *)((int)unaff_s0 + 10)) {
        S_SVA_OBJ_280(param_1,0x7f);
        return;
      }
      if (*(short *)((int)unaff_s0 + 10) < 0) {
        param_2 = 0;
      }
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | (ushort)param_1;
    do {
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(undefined2 *)((int)unaff_s0 + 0x3a);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xc];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0;
        if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
          uVar5 = 0x80;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
             (ushort)((uVar4 | uVar5) << 8);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
        uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
        if (0xf < uVar4) {
          uVar4 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
             (ushort)(uVar4 << 4);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xd];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0x100;
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
          uVar5 = unaff_s0[10];
          if (uVar5 == 5) {
            S_SVA_OBJ_480();
            return;
          }
          if ((int)uVar5 < 6) {
            if (uVar5 == 1) {
              S_SVA_OBJ_480();
              return;
            }
            S_SVA_OBJ_480();
            return;
          }
          if (uVar5 != 7) {
            S_SVA_OBJ_480();
            return;
          }
          uVar5 = 0x300;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
             (ushort)((uVar4 | uVar5) << 6);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
        uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
        if (0x1f < uVar3) {
          uVar3 = 0x1f;
        }
        uVar2 = 0;
        if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
           (unaff_s0[0xb] == 7)) {
          uVar2 = 0x20;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
             uVar3 | uVar2;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
        uVar3 = (ushort)unaff_s0[0xe];
        if (0xf < uVar3) {
          uVar3 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
      }
      do {
        unaff_s4 = unaff_s4 + 1;
        unaff_s5 = unaff_s5 + 1;
        if (0x17 < (int)unaff_s4) {
          S_SVA_OBJ_5C0();
          return;
        }
      } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
      unaff_s3 = unaff_s4 * 8;
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
        *unaff_s5 = (ushort)unaff_s0[6];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
        uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,*(ushort *)((int)unaff_s0 + 0x16) >> 8,
                             *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
        uVar3 = 0;
        uVar2 = (ushort)unaff_s0[2] & 0x7fff;
        if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
          switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar3 = 0x8000;
            break;
          case 1:
            uVar3 = 0x9000;
            break;
          case 2:
            uVar3 = 0xa000;
            break;
          case 3:
            uVar3 = 0xb000;
            break;
          case 4:
            uVar3 = 0xc000;
            break;
          case 5:
            uVar3 = 0xd000;
            break;
          case 6:
            uVar3 = 0xe000;
          }
        }
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            uVar2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
      }
    } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
    param_1 = 0;
    param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
    if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
      switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
      case 0:
        param_1 = 0x8000;
        break;
      case 1:
        param_1 = 0x9000;
        break;
      case 2:
        param_1 = 0xa000;
        break;
      case 3:
        param_1 = 0xb000;
        break;
      case 4:
        param_1 = 0xc000;
        break;
      case 5:
        param_1 = 0xd000;
        break;
      case 6:
        param_1 = 0xe000;
      }
    }
  } while( true );
}



void S_SVA_OBJ_280(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
  do {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 2) = param_2 | param_1;
    do {
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
        _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(undefined2 *)((int)unaff_s0 + 0x3a);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) = (short)unaff_s0[0xf];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xc];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0;
        if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
          uVar5 = 0x80;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff |
             (ushort)((uVar4 | uVar5) << 8);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
        uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
        if (0xf < uVar4) {
          uVar4 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xff0f |
             (ushort)(uVar4 << 4);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x2000) != 0)) {
        uVar4 = (uint)(ushort)unaff_s0[0xd];
        if (0x7f < uVar4) {
          uVar4 = 0x7f;
        }
        uVar5 = 0x100;
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x200) != 0)) {
          uVar5 = unaff_s0[10];
          if (uVar5 == 5) {
            S_SVA_OBJ_480();
            return;
          }
          if ((int)uVar5 < 6) {
            if (uVar5 == 1) {
              S_SVA_OBJ_480();
              return;
            }
            S_SVA_OBJ_480();
            return;
          }
          if (uVar5 != 7) {
            S_SVA_OBJ_480();
            return;
          }
          uVar5 = 0x300;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
             (ushort)((uVar4 | uVar5) << 6);
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
        uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
        if (0x1f < uVar3) {
          uVar3 = 0x1f;
        }
        uVar2 = 0;
        if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
           (unaff_s0[0xb] == 7)) {
          uVar2 = 0x20;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
             uVar3 | uVar2;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
        uVar3 = (ushort)unaff_s0[0xe];
        if (0xf < uVar3) {
          uVar3 = 0xf;
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
             *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
      }
      do {
        unaff_s4 = unaff_s4 + 1;
        unaff_s5 = unaff_s5 + 1;
        if (0x17 < (int)unaff_s4) {
          S_SVA_OBJ_5C0();
          return;
        }
      } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
      unaff_s3 = unaff_s4 * 8;
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
        *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
        *unaff_s5 = (ushort)unaff_s0[6];
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
        uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,*(ushort *)((int)unaff_s0 + 0x16) >> 8,
                             *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
        *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
      }
      if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
        uVar3 = 0;
        uVar2 = (ushort)unaff_s0[2] & 0x7fff;
        if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
          switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar3 = 0x8000;
            break;
          case 1:
            uVar3 = 0x9000;
            break;
          case 2:
            uVar3 = 0xa000;
            break;
          case 3:
            uVar3 = 0xb000;
            break;
          case 4:
            uVar3 = 0xc000;
            break;
          case 5:
            uVar3 = 0xd000;
            break;
          case 6:
            uVar3 = 0xe000;
          }
        }
        if (uVar3 != 0) {
          if (0x7f < (short)unaff_s0[2]) {
            S_SVA_OBJ_1A0(uVar3,0x7f);
            return;
          }
          if ((short)unaff_s0[2] < 0) {
            uVar2 = 0;
          }
        }
        *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
      }
    } while ((unaff_s2 == 0) && ((unaff_s1 & 2) == 0));
    param_1 = 0;
    param_2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
    if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
      switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
      case 0:
        param_1 = 0x8000;
        break;
      case 1:
        param_1 = 0x9000;
        break;
      case 2:
        param_1 = 0xa000;
        break;
      case 3:
        param_1 = 0xb000;
        break;
      case 4:
        param_1 = 0xc000;
        break;
      case 5:
        param_1 = 0xd000;
        break;
      case 6:
        param_1 = 0xe000;
      }
    }
    if (param_1 != 0) {
      if (0x7f < *(short *)((int)unaff_s0 + 10)) {
        S_SVA_OBJ_280(param_1,0x7f);
        return;
      }
      if (*(short *)((int)unaff_s0 + 10) < 0) {
        param_2 = 0;
      }
    }
  } while( true );
}



void S_SVA_OBJ_480(undefined4 param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  ushort *unaff_s5;
  
  while( true ) {
    do {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0x3f |
           (ushort)((param_2 | param_3) << 6);
      do {
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x4000) != 0)) {
          uVar3 = *(ushort *)((int)unaff_s0 + 0x36);
          if (0x1f < uVar3) {
            uVar3 = 0x1f;
          }
          uVar2 = 0;
          if ((((unaff_s2 != 0) || ((unaff_s1 & 0x400) != 0)) && (unaff_s0[0xb] != 3)) &&
             (unaff_s0[0xb] == 7)) {
            uVar2 = 0x20;
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) =
               *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 10) & 0xffc0 |
               uVar3 | uVar2;
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x8000) != 0)) {
          uVar3 = (ushort)unaff_s0[0xe];
          if (0xf < uVar3) {
            uVar3 = 0xf;
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) =
               *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s3 * 2 + 8) & 0xfff0 | uVar3;
        }
        do {
          unaff_s4 = unaff_s4 + 1;
          unaff_s5 = unaff_s5 + 1;
          if (0x17 < (int)unaff_s4) {
            S_SVA_OBJ_5C0();
            return;
          }
        } while ((*unaff_s0 & 1 << (unaff_s4 & 0x1f)) == 0);
        unaff_s3 = unaff_s4 * 8;
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x10) != 0)) {
          *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = (short)unaff_s0[5];
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x40) != 0)) {
          *unaff_s5 = (ushort)unaff_s0[6];
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x20) != 0)) {
          uVar1 = FUN_80023ae4(*unaff_s5 >> 8,*unaff_s5 & 0xff,
                               *(ushort *)((int)unaff_s0 + 0x16) >> 8,
                               *(ushort *)((int)unaff_s0 + 0x16) & 0xff);
          *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 4) = uVar1;
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 1) != 0)) {
          uVar3 = 0;
          uVar2 = (ushort)unaff_s0[2] & 0x7fff;
          if ((unaff_s2 != 0) || ((unaff_s1 & 4) != 0)) {
            switch((int)(((ushort)unaff_s0[3] - 1) * 0x10000) >> 0x10) {
            case 0:
              uVar3 = 0x8000;
              break;
            case 1:
              uVar3 = 0x9000;
              break;
            case 2:
              uVar3 = 0xa000;
              break;
            case 3:
              uVar3 = 0xb000;
              break;
            case 4:
              uVar3 = 0xc000;
              break;
            case 5:
              uVar3 = 0xd000;
              break;
            case 6:
              uVar3 = 0xe000;
            }
          }
          if (uVar3 != 0) {
            if (0x7f < (short)unaff_s0[2]) {
              S_SVA_OBJ_1A0(uVar3,0x7f);
              return;
            }
            if ((short)unaff_s0[2] < 0) {
              uVar2 = 0;
            }
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10) = uVar2 | uVar3;
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 2) != 0)) {
          uVar3 = 0;
          uVar2 = *(ushort *)((int)unaff_s0 + 10) & 0x7fff;
          if ((unaff_s2 != 0) || ((unaff_s1 & 8) != 0)) {
            switch((int)((*(ushort *)((int)unaff_s0 + 0xe) - 1) * 0x10000) >> 0x10) {
            case 0:
              uVar3 = 0x8000;
              break;
            case 1:
              uVar3 = 0x9000;
              break;
            case 2:
              uVar3 = 0xa000;
              break;
            case 3:
              uVar3 = 0xb000;
              break;
            case 4:
              uVar3 = 0xc000;
              break;
            case 5:
              uVar3 = 0xd000;
              break;
            case 6:
              uVar3 = 0xe000;
            }
          }
          if (uVar3 != 0) {
            if (0x7f < *(short *)((int)unaff_s0 + 10)) {
              S_SVA_OBJ_280(uVar3,0x7f);
              return;
            }
            if (*(short *)((int)unaff_s0 + 10) < 0) {
              uVar2 = 0;
            }
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 2) = uVar2 | uVar3;
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x80) != 0)) {
          _spu_FsetRXXa(unaff_s3 | 3,unaff_s0[7]);
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x10000) != 0)) {
          _spu_FsetRXXa(unaff_s3 | 7,unaff_s0[8]);
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x20000) != 0)) {
          *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 8) =
               *(undefined2 *)((int)unaff_s0 + 0x3a);
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x40000) != 0)) {
          *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 10) = (short)unaff_s0[0xf]
          ;
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x800) != 0)) {
          uVar4 = (uint)(ushort)unaff_s0[0xc];
          if (0x7f < uVar4) {
            uVar4 = 0x7f;
          }
          uVar5 = 0;
          if (((unaff_s2 != 0) || ((unaff_s1 & 0x100) != 0)) && (unaff_s0[9] == 5)) {
            uVar5 = 0x80;
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 8) =
               *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 8) & 0xff |
               (ushort)((uVar4 | uVar5) << 8);
        }
        if ((unaff_s2 != 0) || ((unaff_s1 & 0x1000) != 0)) {
          uVar4 = (uint)*(ushort *)((int)unaff_s0 + 0x32);
          if (0xf < uVar4) {
            uVar4 = 0xf;
          }
          *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 8) =
               *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s4 * 0x10 + 8) & 0xff0f |
               (ushort)(uVar4 << 4);
        }
      } while ((unaff_s2 == 0) && ((unaff_s1 & 0x2000) == 0));
      param_2 = (uint)(ushort)unaff_s0[0xd];
      if (0x7f < param_2) {
        param_2 = 0x7f;
      }
      param_3 = 0x100;
    } while ((unaff_s2 == 0) && ((unaff_s1 & 0x200) == 0));
    uVar4 = unaff_s0[10];
    if (uVar4 == 5) {
      S_SVA_OBJ_480();
      return;
    }
    if ((int)uVar4 < 6) {
      if (uVar4 == 1) {
        S_SVA_OBJ_480();
        return;
      }
      S_SVA_OBJ_480();
      return;
    }
    if (uVar4 != 7) break;
    param_3 = 0x300;
  }
  S_SVA_OBJ_480();
  return;
}



void S_SVA_OBJ_5C0(void)

{
  int in_stack_00000010;
  
  for (; in_stack_00000010 < 2; in_stack_00000010 = in_stack_00000010 + 1) {
  }
  return;
}



uint FUN_80023ae4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar5 = ((param_3 & 0xffff) * 0x80 + (param_4 & 0xffff)) -
          ((param_1 & 0xffff) * 0x80 + (param_2 & 0xffff));
  iVar4 = iVar5;
  if (iVar5 < 0) {
    iVar4 = -iVar5;
  }
  uVar1 = iVar4 / 0x600;
  uVar2 = iVar4 % 0x600;
  if (iVar5 < 0) {
    if (uVar2 != 0) {
      uVar1 = uVar1 + 1;
      uVar2 = 0x600 - uVar2;
    }
    uVar1 = 0x1000 >> (uVar1 & 0x1f);
  }
  else {
    uVar1 = 0x1000 << (uVar1 & 0x1f);
  }
  uVar1 = uVar1 & 0xffff;
  uVar3 = 0x103b;
  local_8 = uVar1 * 0x103b;
  iVar5 = uVar1 << 0xc;
  iVar4 = 0;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if (uVar2 >> 5 != 0) {
    local_8 = uVar1 * 0x103b;
    do {
      iVar5 = local_8;
      uVar3 = uVar3 * 0x103b >> 0xc;
      local_8 = uVar1 * uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uVar2 >> 5));
  }
  uVar1 = iVar5 + ((uint)(local_8 - iVar5) >> 5) * (uVar2 & 0x1f) >> 0xc;
  uVar2 = uVar1 & 0xffff;
  if (0x3fff < uVar1) {
    uVar2 = 0x3fff;
  }
  return uVar2;
}



uint FUN_80023c1c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar1 = (int)(~param_3 & 0xffff) >> 0xf;
  uVar5 = 0xf;
  do {
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) break;
    uVar5 = uVar3 - 1;
    uVar1 = (int)(~param_3 & 0xffff) >> (uVar5 & 0x1f);
    uVar3 = 0;
  } while (-1 < (int)uVar5);
  iVar9 = 1 << (uVar3 & 0x1f);
  uVar5 = 0x1000;
  iVar7 = 0;
  iVar10 = iVar9 * 0x1000;
  do {
    uVar5 = uVar5 * 0x103b >> 0xc;
    iVar4 = 0;
    iVar8 = 0;
    uVar6 = iVar9 * uVar5 - iVar10 >> 5;
    uVar1 = uVar6;
    do {
      if (((uint)(iVar10 + iVar8) >> 0xc <= (param_3 & 0xffff)) &&
         (iVar2 = iVar7 * 0x20 + iVar4, (param_3 & 0xffff) < iVar10 + uVar1 >> 0xc))
      goto LAB_80023d00;
      uVar1 = uVar1 + uVar6;
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + uVar6;
    } while (iVar4 < 0x20);
    iVar7 = iVar7 + 1;
    iVar10 = iVar9 * uVar5;
  } while (iVar7 < 0x30);
  iVar2 = 0x600;
LAB_80023d00:
  iVar7 = iVar2;
  if (iVar2 < 0) {
    iVar7 = iVar2 + 0x7f;
  }
  return ((param_1 & 0xffff) + (iVar7 >> 7) + (uVar3 - 0xc) * 0xc) * 0x100 |
         (param_2 & 0xffff) + iVar2 + (iVar7 >> 7) * -0x80;
}



void SpuGetVoiceVolume(int vNum,short *volL,short *volR)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10);
  uVar2 = *(ushort *)((int)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10) + 2);
  if (0x3fff < uVar1) {
    *volL = uVar1 + 0x8000;
    S_GVV_OBJ_38();
    return;
  }
  *volL = uVar1;
  if (0x3fff < uVar2) {
    *volR = uVar2 + 0x8000;
    S_GVV_OBJ_58();
    return;
  }
  *volR = uVar2;
  return;
}



void S_GVV_OBJ_38(ushort param_1,undefined4 param_2,ushort *param_3)

{
  if (0x3fff < param_1) {
    *param_3 = param_1 + 0x8000;
    S_GVV_OBJ_58();
    return;
  }
  *param_3 = param_1;
  return;
}



void S_GVV_OBJ_58(void)

{
  return;
}



void SpuGetVoiceEnvelope(int vNum,short *envx)

{
  *envx = *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + vNum * 0x10 + 0xc);
  return;
}



void SpuSetCommonMasterVolume(short mvol_left,short mvol_right)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = mvol_left & 0x7fff;
  *(ushort *)(puVar1 + 0x182) = mvol_right & 0x7fff;
  return;
}



void SpuSetCommonCDMix(long cd_mix)

{
  if (cd_mix == 0) {
    S_SCCM_OBJ_38();
    return;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  return;
}



void S_SCCM_OBJ_38(void)

{
  undefined2 in_v0;
  int in_v1;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  return;
}



// WARNING: Removing unreachable block (ram,0x80023e9c)
// WARNING: Removing unreachable block (ram,0x80023ec4)
// WARNING: Removing unreachable block (ram,0x80023f70)
// WARNING: Removing unreachable block (ram,0x80023ed4)
// WARNING: Removing unreachable block (ram,0x80023edc)
// WARNING: Removing unreachable block (ram,0x80023f60)
// WARNING: Removing unreachable block (ram,0x80023ee8)
// WARNING: Removing unreachable block (ram,0x80023ef0)
// WARNING: Removing unreachable block (ram,0x80023efc)
// WARNING: Removing unreachable block (ram,0x80023f58)
// WARNING: Removing unreachable block (ram,0x80023f0c)
// WARNING: Removing unreachable block (ram,0x80023f14)
// WARNING: Removing unreachable block (ram,0x80023f68)
// WARNING: Removing unreachable block (ram,0x80023f1c)
// WARNING: Removing unreachable block (ram,0x80023f80)
// WARNING: Removing unreachable block (ram,0x80023f24)
// WARNING: Removing unreachable block (ram,0x80023f2c)
// WARNING: Removing unreachable block (ram,0x80023f38)
// WARNING: Removing unreachable block (ram,0x80023f78)
// WARNING: Removing unreachable block (ram,0x80023f40)
// WARNING: Removing unreachable block (ram,0x80023f48)
// WARNING: Removing unreachable block (ram,0x80023f50)
// WARNING: Removing unreachable block (ram,0x80023f88)
// WARNING: Removing unreachable block (ram,0x80023f90)
// WARNING: Removing unreachable block (ram,0x80023f9c)
// WARNING: Removing unreachable block (ram,0x80024040)
// WARNING: Removing unreachable block (ram,0x80023fac)
// WARNING: Removing unreachable block (ram,0x80023fb4)
// WARNING: Removing unreachable block (ram,0x80024030)
// WARNING: Removing unreachable block (ram,0x80023fc0)
// WARNING: Removing unreachable block (ram,0x80023fc8)
// WARNING: Removing unreachable block (ram,0x80023fd4)
// WARNING: Removing unreachable block (ram,0x80024028)
// WARNING: Removing unreachable block (ram,0x80023fdc)
// WARNING: Removing unreachable block (ram,0x80023fe4)
// WARNING: Removing unreachable block (ram,0x80024038)
// WARNING: Removing unreachable block (ram,0x80023fec)
// WARNING: Removing unreachable block (ram,0x80024050)
// WARNING: Removing unreachable block (ram,0x80023ff4)
// WARNING: Removing unreachable block (ram,0x80023ffc)
// WARNING: Removing unreachable block (ram,0x80024008)
// WARNING: Removing unreachable block (ram,0x80024048)
// WARNING: Removing unreachable block (ram,0x80024010)
// WARNING: Removing unreachable block (ram,0x80024018)
// WARNING: Removing unreachable block (ram,0x80024020)
// WARNING: Removing unreachable block (ram,0x80024058)
// WARNING: Removing unreachable block (ram,0x80024060)
// WARNING: Removing unreachable block (ram,0x80024070)
// WARNING: Removing unreachable block (ram,0x8002407c)
// WARNING: Removing unreachable block (ram,0x80024090)
// WARNING: Removing unreachable block (ram,0x8002409c)
// WARNING: Removing unreachable block (ram,0x8002410c)
// WARNING: Removing unreachable block (ram,0x80024114)
// WARNING: Removing unreachable block (ram,0x80024184)
// WARNING: Removing unreachable block (ram,0x80024188)
// WARNING: Removing unreachable block (ram,0x8002419c)
// WARNING: Removing unreachable block (ram,0x800241a4)
// WARNING: Removing unreachable block (ram,0x800241ac)
// WARNING: Removing unreachable block (ram,0x800241b4)
// WARNING: Removing unreachable block (ram,0x800241bc)
// WARNING: Removing unreachable block (ram,0x800241c0)
// WARNING: Removing unreachable block (ram,0x800241d0)
// WARNING: Removing unreachable block (ram,0x800241d4)

void SpuGetVoiceAttr(SpuVoiceAttr *arg)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((arg->voice & uVar1) != 0) {
      S_GVA_OBJ_48();
      return;
    }
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x18);
  return;
}



void S_GVA_OBJ_48(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  ushort uVar9;
  int unaff_s0;
  int unaff_s1;
  
  uVar8 = 0;
  if (unaff_s1 != -1) {
    uVar7 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s1 * 0x10);
    uVar9 = *(ushort *)((int)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s1 * 0x10) + 2);
    if ((uVar7 & 0x8000) != 0) {
      uVar5 = uVar7 & 0xf000;
      if (uVar5 == 0xb000) {
        S_GVA_OBJ_144(param_1,uVar7,4);
        return;
      }
      if (uVar5 < 0xb001) {
        if (uVar5 == 0x9000) {
          S_GVA_OBJ_144(param_1,uVar7,2);
          return;
        }
        if (uVar5 < 0x9001) {
          if (uVar5 != 0x8000) {
            S_GVA_OBJ_148(param_1,uVar7 & 0xfff);
            return;
          }
          S_GVA_OBJ_144(param_1,uVar7,1);
          return;
        }
        if (uVar5 != 0xa000) {
          S_GVA_OBJ_148(param_1,uVar7 & 0xfff);
          return;
        }
        S_GVA_OBJ_144(param_1,uVar7,3);
        return;
      }
      if (uVar5 == 0xd000) {
        S_GVA_OBJ_144(param_1,uVar7,6);
        return;
      }
      if (uVar5 < 0xd001) {
        if (uVar5 != 0xc000) {
          S_GVA_OBJ_148(param_1,uVar7 & 0xfff);
          return;
        }
        S_GVA_OBJ_144(param_1,uVar7,5);
        return;
      }
      if ((uVar5 != 0xe000) && (uVar5 != 0xf000)) {
        S_GVA_OBJ_148(param_1,uVar7 & 0xfff);
        return;
      }
      uVar8 = 7;
      uVar7 = uVar7 & 0xfff;
    }
    uVar6 = 0;
    if ((uVar9 & 0x8000) != 0) {
      uVar5 = uVar9 & 0xf000;
      if (uVar5 == 0xb000) {
        S_GVA_OBJ_214(4);
        return;
      }
      if (uVar5 < 0xb001) {
        if (uVar5 == 0x9000) {
          S_GVA_OBJ_214(2);
          return;
        }
        if (uVar5 < 0x9001) {
          if (uVar5 != 0x8000) {
            S_GVA_OBJ_218();
            return;
          }
          S_GVA_OBJ_214(1);
          return;
        }
        if (uVar5 != 0xa000) {
          S_GVA_OBJ_218();
          return;
        }
        S_GVA_OBJ_214(3);
        return;
      }
      if (uVar5 == 0xd000) {
        S_GVA_OBJ_214(6);
        return;
      }
      if (uVar5 < 0xd001) {
        if (uVar5 != 0xc000) {
          S_GVA_OBJ_218();
          return;
        }
        S_GVA_OBJ_214(5);
        return;
      }
      if ((uVar5 != 0xe000) && (uVar5 != 0xf000)) {
        S_GVA_OBJ_218();
        return;
      }
      uVar6 = 7;
      uVar9 = uVar9 & 0xfff;
    }
    if (0x3fff < uVar7) {
      *(ushort *)(unaff_s0 + 8) = uVar7 + 0x8000;
      S_GVA_OBJ_238();
      return;
    }
    *(ushort *)(unaff_s0 + 8) = uVar7;
    if (0x3fff < uVar9) {
      *(ushort *)(unaff_s0 + 10) = uVar9 + 0x8000;
      S_GVA_OBJ_258();
      return;
    }
    *(ushort *)(unaff_s0 + 10) = uVar9;
    *(undefined2 *)(unaff_s0 + 0xe) = uVar6;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    *(undefined2 *)(unaff_s0 + 0xc) = uVar8;
    *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar1 + unaff_s1 * 4 + 0x200);
    *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar1 + unaff_s1 * 4 + 0x202);
    *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar1 + unaff_s1 * 0x10 + 4);
    iVar3 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                         *(undefined2 *)(unaff_s0 + 0x14));
    if (-1 < iVar3) {
      *(short *)(unaff_s0 + 0x16) = (short)iVar3;
      S_GVA_OBJ_2D0();
      return;
    }
    *(undefined2 *)(unaff_s0 + 0x16) = 0;
    *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
    uVar2 = DAT_80039980;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    *(undefined2 *)(unaff_s0 + 0x1a) =
         *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s1 * 0x10 + 0xc);
    *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar1 + unaff_s1 * 0x10 + 6) << (uVar2 & 0x1f);
    *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar1 + unaff_s1 * 0x10 + 0xe) << (uVar2 & 0x1f)
    ;
    uVar7 = *(ushort *)(puVar1 + unaff_s1 * 0x10 + 8);
    uVar9 = *(ushort *)(puVar1 + unaff_s1 * 0x10 + 10);
    uVar4 = 5;
    if ((uVar7 & 0x8000) == 0) {
      uVar4 = 1;
    }
    *(undefined4 *)(unaff_s0 + 0x24) = uVar4;
    uVar5 = uVar9 & 0xe000;
    if (uVar5 == 0xc000) {
      S_GVA_OBJ_378();
      return;
    }
    if (uVar5 == 0x8000) {
      S_GVA_OBJ_378();
      return;
    }
    uVar4 = 1;
    if (uVar5 == 0x4000) {
      uVar4 = 3;
    }
    *(undefined4 *)(unaff_s0 + 0x28) = uVar4;
    uVar4 = 7;
    if ((uVar9 & 0x20) == 0) {
      uVar4 = 3;
    }
    *(undefined4 *)(unaff_s0 + 0x2c) = uVar4;
    *(ushort *)(unaff_s0 + 0x30) = uVar7 >> 8 & 0x3f;
    *(short *)(unaff_s0 + 0x32) = (short)((uVar7 & 0xf0) >> 4);
    *(ushort *)(unaff_s0 + 0x34) = uVar9 >> 6 & 0x7f;
    *(ushort *)(unaff_s0 + 0x36) = uVar9 & 0x1f;
    *(ushort *)(unaff_s0 + 0x38) = uVar7 & 0xf;
    *(ushort *)(unaff_s0 + 0x3a) = uVar7;
    *(ushort *)(unaff_s0 + 0x3c) = uVar9;
  }
  return;
}



void S_GVA_OBJ_144(undefined4 param_1,ushort param_2,undefined2 param_3,ushort param_4)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  param_2 = param_2 & 0xfff;
  uVar8 = 0;
  if ((param_4 & 0x8000) != 0) {
    uVar6 = param_4 & 0xf000;
    if (uVar6 == 0xb000) {
      S_GVA_OBJ_214(4);
      return;
    }
    if (uVar6 < 0xb001) {
      if (uVar6 == 0x9000) {
        S_GVA_OBJ_214(2);
        return;
      }
      if (uVar6 < 0x9001) {
        if (uVar6 != 0x8000) {
          S_GVA_OBJ_218();
          return;
        }
        S_GVA_OBJ_214(1);
        return;
      }
      if (uVar6 != 0xa000) {
        S_GVA_OBJ_218();
        return;
      }
      S_GVA_OBJ_214(3);
      return;
    }
    if (uVar6 == 0xd000) {
      S_GVA_OBJ_214(6);
      return;
    }
    if (uVar6 < 0xd001) {
      if (uVar6 != 0xc000) {
        S_GVA_OBJ_218();
        return;
      }
      S_GVA_OBJ_214(5);
      return;
    }
    if ((uVar6 != 0xe000) && (uVar6 != 0xf000)) {
      S_GVA_OBJ_218();
      return;
    }
    uVar8 = 7;
    param_4 = param_4 & 0xfff;
  }
  if (0x3fff < param_2) {
    *(ushort *)(unaff_s0 + 8) = param_2 + 0x8000;
    S_GVA_OBJ_238();
    return;
  }
  *(ushort *)(unaff_s0 + 8) = param_2;
  if (0x3fff < param_4) {
    *(ushort *)(unaff_s0 + 10) = param_4 + 0x8000;
    S_GVA_OBJ_258();
    return;
  }
  *(ushort *)(unaff_s0 + 10) = param_4;
  *(undefined2 *)(unaff_s0 + 0xe) = uVar8;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar2 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar2 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar2 + unaff_s2 * 2 + 4);
  iVar4 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar4) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar4;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar3 = DAT_80039980;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar2 + unaff_s2 * 2 + 6) << (uVar3 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar2 + unaff_s2 * 2 + 0xe) << (uVar3 & 0x1f);
  uVar6 = *(ushort *)(puVar2 + unaff_s2 * 2 + 8);
  uVar1 = *(ushort *)(puVar2 + unaff_s2 * 2 + 10);
  uVar5 = 5;
  if ((uVar6 & 0x8000) == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar5;
  uVar7 = uVar1 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar5 = 1;
  if (uVar7 == 0x4000) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar5;
  uVar5 = 7;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar5;
  *(ushort *)(unaff_s0 + 0x30) = uVar6 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar6 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar1 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar1 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar6 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar6;
  *(ushort *)(unaff_s0 + 0x3c) = uVar1;
  return;
}



void S_GVA_OBJ_148(undefined4 param_1,ushort param_2,undefined2 param_3,ushort param_4)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  uVar8 = 0;
  if ((param_4 & 0x8000) != 0) {
    uVar6 = param_4 & 0xf000;
    if (uVar6 == 0xb000) {
      S_GVA_OBJ_214(4);
      return;
    }
    if (uVar6 < 0xb001) {
      if (uVar6 == 0x9000) {
        S_GVA_OBJ_214(2);
        return;
      }
      if (uVar6 < 0x9001) {
        if (uVar6 != 0x8000) {
          S_GVA_OBJ_218();
          return;
        }
        S_GVA_OBJ_214(1);
        return;
      }
      if (uVar6 != 0xa000) {
        S_GVA_OBJ_218();
        return;
      }
      S_GVA_OBJ_214(3);
      return;
    }
    if (uVar6 == 0xd000) {
      S_GVA_OBJ_214(6);
      return;
    }
    if (uVar6 < 0xd001) {
      if (uVar6 != 0xc000) {
        S_GVA_OBJ_218();
        return;
      }
      S_GVA_OBJ_214(5);
      return;
    }
    if ((uVar6 != 0xe000) && (uVar6 != 0xf000)) {
      S_GVA_OBJ_218();
      return;
    }
    uVar8 = 7;
    param_4 = param_4 & 0xfff;
  }
  if (0x3fff < param_2) {
    *(ushort *)(unaff_s0 + 8) = param_2 + 0x8000;
    S_GVA_OBJ_238();
    return;
  }
  *(ushort *)(unaff_s0 + 8) = param_2;
  if (0x3fff < param_4) {
    *(ushort *)(unaff_s0 + 10) = param_4 + 0x8000;
    S_GVA_OBJ_258();
    return;
  }
  *(ushort *)(unaff_s0 + 10) = param_4;
  *(undefined2 *)(unaff_s0 + 0xe) = uVar8;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar2 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar2 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar2 + unaff_s2 * 2 + 4);
  iVar4 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar4) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar4;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar3 = DAT_80039980;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar2 + unaff_s2 * 2 + 6) << (uVar3 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar2 + unaff_s2 * 2 + 0xe) << (uVar3 & 0x1f);
  uVar6 = *(ushort *)(puVar2 + unaff_s2 * 2 + 8);
  uVar1 = *(ushort *)(puVar2 + unaff_s2 * 2 + 10);
  uVar5 = 5;
  if ((uVar6 & 0x8000) == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar5;
  uVar7 = uVar1 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar5 = 1;
  if (uVar7 == 0x4000) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar5;
  uVar5 = 7;
  if ((uVar1 & 0x20) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar5;
  *(ushort *)(unaff_s0 + 0x30) = uVar6 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar6 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar1 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar1 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar6 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar6;
  *(ushort *)(unaff_s0 + 0x3c) = uVar1;
  return;
}



void S_GVA_OBJ_214(undefined2 param_1,ushort param_2,undefined2 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  param_4 = param_4 & 0xfff;
  if (0x3fff < param_2) {
    *(ushort *)(unaff_s0 + 8) = param_2 + 0x8000;
    S_GVA_OBJ_238();
    return;
  }
  *(ushort *)(unaff_s0 + 8) = param_2;
  if (0x3fff < param_4) {
    *(ushort *)(unaff_s0 + 10) = param_4 + 0x8000;
    S_GVA_OBJ_258();
    return;
  }
  *(ushort *)(unaff_s0 + 10) = param_4;
  *(undefined2 *)(unaff_s0 + 0xe) = param_1;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar3 + unaff_s2 * 2 + 4);
  iVar5 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar5) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar5;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar4 = DAT_80039980;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 6) << (uVar4 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 0xe) << (uVar4 & 0x1f);
  uVar1 = *(ushort *)(puVar3 + unaff_s2 * 2 + 8);
  uVar2 = *(ushort *)(puVar3 + unaff_s2 * 2 + 10);
  uVar6 = 5;
  if ((uVar1 & 0x8000) == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
  uVar7 = uVar2 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar6 = 1;
  if (uVar7 == 0x4000) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar6;
  uVar6 = 7;
  if ((uVar2 & 0x20) == 0) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar6;
  *(ushort *)(unaff_s0 + 0x30) = uVar1 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar1 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar2 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar2 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar1 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar1;
  *(ushort *)(unaff_s0 + 0x3c) = uVar2;
  return;
}



void S_GVA_OBJ_218(undefined2 param_1,ushort param_2,undefined2 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (0x3fff < param_2) {
    *(ushort *)(unaff_s0 + 8) = param_2 + 0x8000;
    S_GVA_OBJ_238();
    return;
  }
  *(ushort *)(unaff_s0 + 8) = param_2;
  if (0x3fff < param_4) {
    *(ushort *)(unaff_s0 + 10) = param_4 + 0x8000;
    S_GVA_OBJ_258();
    return;
  }
  *(ushort *)(unaff_s0 + 10) = param_4;
  *(undefined2 *)(unaff_s0 + 0xe) = param_1;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar3 + unaff_s2 * 2 + 4);
  iVar5 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar5) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar5;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar4 = DAT_80039980;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 6) << (uVar4 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 0xe) << (uVar4 & 0x1f);
  uVar1 = *(ushort *)(puVar3 + unaff_s2 * 2 + 8);
  uVar2 = *(ushort *)(puVar3 + unaff_s2 * 2 + 10);
  uVar6 = 5;
  if ((uVar1 & 0x8000) == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
  uVar7 = uVar2 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar6 = 1;
  if (uVar7 == 0x4000) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar6;
  uVar6 = 7;
  if ((uVar2 & 0x20) == 0) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar6;
  *(ushort *)(unaff_s0 + 0x30) = uVar1 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar1 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar2 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar2 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar1 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar1;
  *(ushort *)(unaff_s0 + 0x3c) = uVar2;
  return;
}



void S_GVA_OBJ_238(undefined2 param_1,undefined4 param_2,undefined2 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (0x3fff < param_4) {
    *(ushort *)(unaff_s0 + 10) = param_4 + 0x8000;
    S_GVA_OBJ_258();
    return;
  }
  *(ushort *)(unaff_s0 + 10) = param_4;
  *(undefined2 *)(unaff_s0 + 0xe) = param_1;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar3 + unaff_s2 * 2 + 4);
  iVar5 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar5) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar5;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar4 = DAT_80039980;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 6) << (uVar4 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 0xe) << (uVar4 & 0x1f);
  uVar1 = *(ushort *)(puVar3 + unaff_s2 * 2 + 8);
  uVar2 = *(ushort *)(puVar3 + unaff_s2 * 2 + 10);
  uVar6 = 5;
  if ((uVar1 & 0x8000) == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
  uVar7 = uVar2 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar6 = 1;
  if (uVar7 == 0x4000) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar6;
  uVar6 = 7;
  if ((uVar2 & 0x20) == 0) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar6;
  *(ushort *)(unaff_s0 + 0x30) = uVar1 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar1 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar2 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar2 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar1 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar1;
  *(ushort *)(unaff_s0 + 0x3c) = uVar2;
  return;
}



void S_GVA_OBJ_258(undefined2 param_1,undefined4 param_2,undefined2 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s0 + 0xe) = param_1;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0xc) = param_3;
  *(undefined2 *)(unaff_s0 + 0x10) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x200);
  *(undefined2 *)(unaff_s0 + 0x12) = *(undefined2 *)(puVar3 + in_t0 * 2 + 0x202);
  *(undefined2 *)(unaff_s0 + 0x14) = *(undefined2 *)(puVar3 + unaff_s2 * 2 + 4);
  iVar5 = FUN_80023c1c((ushort)(&DAT_80039514)[unaff_s1] >> 8,(&DAT_80039514)[unaff_s1] & 0xff,
                       *(undefined2 *)(unaff_s0 + 0x14));
  if (-1 < iVar5) {
    *(short *)(unaff_s0 + 0x16) = (short)iVar5;
    S_GVA_OBJ_2D0();
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x16) = 0;
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar4 = DAT_80039980;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 6) << (uVar4 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 0xe) << (uVar4 & 0x1f);
  uVar1 = *(ushort *)(puVar3 + unaff_s2 * 2 + 8);
  uVar2 = *(ushort *)(puVar3 + unaff_s2 * 2 + 10);
  uVar6 = 5;
  if ((uVar1 & 0x8000) == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar6;
  uVar7 = uVar2 & 0xe000;
  if (uVar7 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar7 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar6 = 1;
  if (uVar7 == 0x4000) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar6;
  uVar6 = 7;
  if ((uVar2 & 0x20) == 0) {
    uVar6 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar6;
  *(ushort *)(unaff_s0 + 0x30) = uVar1 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar1 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar2 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar2 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar1 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar1;
  *(ushort *)(unaff_s0 + 0x3c) = uVar2;
  return;
}



void S_GVA_OBJ_2D0(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s0 + 0x18) = (&DAT_80039514)[unaff_s1];
  uVar4 = DAT_80039980;
  puVar3 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(unaff_s0 + 0x1a) =
       *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + unaff_s2 * 2 + 0xc);
  *(uint *)(unaff_s0 + 0x1c) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 6) << (uVar4 & 0x1f);
  *(uint *)(unaff_s0 + 0x20) = (uint)*(ushort *)(puVar3 + unaff_s2 * 2 + 0xe) << (uVar4 & 0x1f);
  uVar1 = *(ushort *)(puVar3 + unaff_s2 * 2 + 8);
  uVar2 = *(ushort *)(puVar3 + unaff_s2 * 2 + 10);
  uVar5 = 5;
  if ((uVar1 & 0x8000) == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)(unaff_s0 + 0x24) = uVar5;
  uVar6 = uVar2 & 0xe000;
  if (uVar6 == 0xc000) {
    S_GVA_OBJ_378();
    return;
  }
  if (uVar6 == 0x8000) {
    S_GVA_OBJ_378();
    return;
  }
  uVar5 = 1;
  if (uVar6 == 0x4000) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x28) = uVar5;
  uVar5 = 7;
  if ((uVar2 & 0x20) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar5;
  *(ushort *)(unaff_s0 + 0x30) = uVar1 >> 8 & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((uVar1 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = uVar2 >> 6 & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = uVar2 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = uVar1 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = uVar1;
  *(ushort *)(unaff_s0 + 0x3c) = uVar2;
  return;
}



void S_GVA_OBJ_378(uint param_1,uint param_2)

{
  undefined4 in_v0;
  undefined4 uVar1;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x28) = in_v0;
  uVar1 = 7;
  if ((param_1 & 0x20) == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(unaff_s0 + 0x2c) = uVar1;
  *(ushort *)(unaff_s0 + 0x30) = (ushort)(param_2 >> 8) & 0x3f;
  *(short *)(unaff_s0 + 0x32) = (short)((param_2 & 0xf0) >> 4);
  *(ushort *)(unaff_s0 + 0x34) = (ushort)(param_1 >> 6) & 0x7f;
  *(ushort *)(unaff_s0 + 0x36) = (ushort)param_1 & 0x1f;
  *(ushort *)(unaff_s0 + 0x38) = (ushort)param_2 & 0xf;
  *(ushort *)(unaff_s0 + 0x3a) = (ushort)param_2;
  *(ushort *)(unaff_s0 + 0x3c) = (ushort)param_1;
  return;
}



void SpuGetCommonAttr(SpuCommonAttr *attr)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180);
  uVar4 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182);
  if ((uVar3 & 0x8000) == 0) {
    S_GCA_OBJ_EC(attr,0,0);
    return;
  }
  uVar2 = uVar3 & 0xf000;
  if (uVar2 == 0xb000) {
    S_GCA_OBJ_E8(attr,0,4);
    return;
  }
  if (uVar2 < 0xb001) {
    if (uVar2 == 0x9000) {
      S_GCA_OBJ_E8(attr,0,2);
      return;
    }
    if (uVar2 < 0x9001) {
      if (uVar2 != 0x8000) {
        S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
        return;
      }
      S_GCA_OBJ_E8(attr,0,1);
      return;
    }
    if (uVar2 != 0xa000) {
      S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
      return;
    }
    S_GCA_OBJ_E8(attr,0,3);
    return;
  }
  if (uVar2 == 0xd000) {
    S_GCA_OBJ_E8(attr,0,6);
    return;
  }
  if (uVar2 < 0xd001) {
    if (uVar2 != 0xc000) {
      S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
      return;
    }
    S_GCA_OBJ_E8(attr,0,5);
    return;
  }
  if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
    S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
    return;
  }
  uVar3 = uVar3 & 0xfff;
  uVar2 = uVar4 & 0xf000;
  if ((uVar4 & 0x8000) == 0) {
    S_GCA_OBJ_1C0(attr,0);
    return;
  }
  if (uVar2 != 0xb000) {
    if (uVar2 < 0xb001) {
      if (uVar2 == 0x9000) {
        S_GCA_OBJ_1BC(attr,2);
        return;
      }
      if (uVar2 < 0x9001) {
        if (uVar2 != 0x8000) {
          S_GCA_OBJ_1C0();
          return;
        }
        S_GCA_OBJ_1BC(attr,1);
        return;
      }
      if (uVar2 != 0xa000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(attr,3);
      return;
    }
    if (uVar2 == 0xd000) {
      S_GCA_OBJ_1BC(attr,6);
      return;
    }
    if (uVar2 < 0xd001) {
      if (uVar2 != 0xc000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(attr,5);
      return;
    }
    if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
      S_GCA_OBJ_1C0();
      return;
    }
    uVar4 = uVar4 & 0xfff;
    if (0x3fff < uVar3) {
      (attr->mvol).left = uVar3 + 0x8000;
      S_GCA_OBJ_1E0();
      return;
    }
    (attr->mvol).left = uVar3;
    if (0x3fff < uVar4) {
      (attr->mvol).right = uVar4 + 0x8000;
      S_GCA_OBJ_200();
      return;
    }
    (attr->mvol).right = uVar4;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    (attr->mvolmode).left = 7;
    (attr->mvolmode).right = 7;
    (attr->mvolx).left = *(short *)(puVar1 + 0x1b8);
    (attr->mvolx).right = *(short *)(puVar1 + 0x1ba);
    (attr->cd).volume.left = *(short *)(puVar1 + 0x1b0);
    (attr->cd).volume.right = *(short *)(puVar1 + 0x1b2);
    if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
      (attr->cd).reverb = 1;
      S_GCA_OBJ_260();
      return;
    }
    (attr->cd).reverb = 0;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
      (attr->cd).mix = 1;
      S_GCA_OBJ_28C();
      return;
    }
    (attr->cd).mix = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
    (attr->ext).volume.left = *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
    (attr->ext).volume.right = *(short *)(puVar1 + 0x1b6);
    if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
      (attr->ext).reverb = 1;
      S_GCA_OBJ_2D0();
      return;
    }
    (attr->ext).reverb = 0;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
      (attr->ext).mix = 1;
      S_GCA_OBJ_2FC();
      return;
    }
    (attr->ext).mix = 0;
    return;
  }
  S_GCA_OBJ_1BC(attr,4);
  return;
}



void S_GCA_OBJ_E8(int param_1,undefined4 param_2,undefined2 param_3,ushort param_4)

{
  undefined *puVar1;
  ushort in_t0;
  ushort uVar2;
  
  param_4 = param_4 & 0xfff;
  uVar2 = in_t0 & 0xf000;
  if ((in_t0 & 0x8000) == 0) {
    S_GCA_OBJ_1C0(param_1,0);
    return;
  }
  if (uVar2 == 0xb000) {
    S_GCA_OBJ_1BC(param_1,4);
    return;
  }
  if (uVar2 < 0xb001) {
    if (uVar2 == 0x9000) {
      S_GCA_OBJ_1BC(param_1,2);
      return;
    }
    if (uVar2 < 0x9001) {
      if (uVar2 != 0x8000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(param_1,1);
      return;
    }
    if (uVar2 != 0xa000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,3);
    return;
  }
  if (uVar2 == 0xd000) {
    S_GCA_OBJ_1BC(param_1,6);
    return;
  }
  if (uVar2 < 0xd001) {
    if (uVar2 != 0xc000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,5);
    return;
  }
  if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
    S_GCA_OBJ_1C0();
    return;
  }
  uVar2 = in_t0 & 0xfff;
  if (0x3fff < param_4) {
    *(ushort *)(param_1 + 4) = param_4 + 0x8000;
    S_GCA_OBJ_1E0();
    return;
  }
  *(ushort *)(param_1 + 4) = param_4;
  if (0x3fff < uVar2) {
    *(ushort *)(param_1 + 6) = uVar2 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = uVar2;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = 7;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_EC(int param_1,undefined4 param_2,undefined2 param_3,ushort param_4)

{
  undefined *puVar1;
  ushort in_t0;
  ushort uVar2;
  
  uVar2 = in_t0 & 0xf000;
  if ((in_t0 & 0x8000) == 0) {
    S_GCA_OBJ_1C0(param_1,0);
    return;
  }
  if (uVar2 == 0xb000) {
    S_GCA_OBJ_1BC(param_1,4);
    return;
  }
  if (uVar2 < 0xb001) {
    if (uVar2 == 0x9000) {
      S_GCA_OBJ_1BC(param_1,2);
      return;
    }
    if (uVar2 < 0x9001) {
      if (uVar2 != 0x8000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(param_1,1);
      return;
    }
    if (uVar2 != 0xa000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,3);
    return;
  }
  if (uVar2 == 0xd000) {
    S_GCA_OBJ_1BC(param_1,6);
    return;
  }
  if (uVar2 < 0xd001) {
    if (uVar2 != 0xc000) {
      S_GCA_OBJ_1C0();
      return;
    }
    S_GCA_OBJ_1BC(param_1,5);
    return;
  }
  if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
    S_GCA_OBJ_1C0();
    return;
  }
  uVar2 = in_t0 & 0xfff;
  if (0x3fff < param_4) {
    *(ushort *)(param_1 + 4) = param_4 + 0x8000;
    S_GCA_OBJ_1E0();
    return;
  }
  *(ushort *)(param_1 + 4) = param_4;
  if (0x3fff < uVar2) {
    *(ushort *)(param_1 + 6) = uVar2 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = uVar2;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = 7;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_1BC(int param_1,undefined2 param_2,undefined2 param_3,ushort param_4)

{
  undefined *puVar1;
  ushort in_t0;
  ushort uVar2;
  
  uVar2 = in_t0 & 0xfff;
  if (0x3fff < param_4) {
    *(ushort *)(param_1 + 4) = param_4 + 0x8000;
    S_GCA_OBJ_1E0();
    return;
  }
  *(ushort *)(param_1 + 4) = param_4;
  if (0x3fff < uVar2) {
    *(ushort *)(param_1 + 6) = uVar2 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = uVar2;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_1C0(int param_1,undefined2 param_2,undefined2 param_3,ushort param_4)

{
  undefined *puVar1;
  ushort in_t0;
  
  if (0x3fff < param_4) {
    *(ushort *)(param_1 + 4) = param_4 + 0x8000;
    S_GCA_OBJ_1E0();
    return;
  }
  *(ushort *)(param_1 + 4) = param_4;
  if (0x3fff < in_t0) {
    *(ushort *)(param_1 + 6) = in_t0 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = in_t0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_1E0(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined *puVar1;
  ushort in_t0;
  
  if (0x3fff < in_t0) {
    *(ushort *)(param_1 + 6) = in_t0 + 0x8000;
    S_GCA_OBJ_200();
    return;
  }
  *(ushort *)(param_1 + 6) = in_t0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_200(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar1 + 0x1b8);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(puVar1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(puVar1 + 0x1b0);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(puVar1 + 0x1b2);
  if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    S_GCA_OBJ_260();
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_260(int param_1)

{
  undefined *puVar1;
  
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    S_GCA_OBJ_28C();
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_28C(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(puVar1 + 0x1b6);
  if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    S_GCA_OBJ_2D0();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void S_GCA_OBJ_2D0(int param_1)

{
  if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    S_GCA_OBJ_2FC();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void S_GCA_OBJ_2FC(void)

{
  return;
}



void SpuSetCommonAttr(SpuCommonAttr *attr)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = attr->mask;
  bVar2 = uVar6 == 0;
  uVar5 = 0;
  if (bVar2) {
S_SCA_OBJ_2C:
    switch((attr->mvolmode).left) {
    default:
S_SCA_OBJ_90:
      uVar4 = (attr->mvol).left;
      uVar3 = 0;
      break;
    case 1:
      uVar3 = 0x8000;
      break;
    case 2:
      uVar3 = 0x9000;
      break;
    case 3:
      uVar3 = 0xa000;
      break;
    case 4:
      uVar3 = 0xb000;
      break;
    case 5:
      uVar3 = 0xc000;
      break;
    case 6:
      uVar3 = 0xd000;
      break;
    case 7:
      uVar3 = 0xe000;
    }
    if (uVar3 != 0) {
      sVar1 = (attr->mvol).left;
      uVar4 = 0x7f;
      if ((sVar1 < 0x80) && (uVar4 = 0, -1 < sVar1)) {
        uVar4 = (attr->mvol).left;
      }
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar4 & 0x7fff | uVar3;
  }
  else if ((uVar6 & 1) != 0) {
    if ((uVar6 & 4) != 0) goto S_SCA_OBJ_2C;
    goto S_SCA_OBJ_90;
  }
  if (bVar2) {
S_SCA_OBJ_EC:
    switch((attr->mvolmode).right) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar4 = 0x8000;
      break;
    case 2:
      uVar4 = 0x9000;
      break;
    case 3:
      uVar4 = 0xa000;
      break;
    case 4:
      uVar4 = 0xb000;
      break;
    case 5:
      uVar4 = 0xc000;
      break;
    case 6:
      uVar4 = 0xd000;
      break;
    case 7:
      uVar4 = 0xe000;
    }
  }
  else {
    if ((uVar6 & 2) == 0) goto S_SCA_OBJ_194;
    if ((uVar6 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    uVar5 = (attr->mvol).right;
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    sVar1 = (attr->mvol).right;
    uVar5 = 0x7f;
    if ((sVar1 < 0x80) && (uVar5 = 0, -1 < sVar1)) {
      uVar5 = (attr->mvol).right;
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar5 & 0x7fff | uVar4;
S_SCA_OBJ_194:
  if ((bVar2) || ((uVar6 & 0x40) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = (attr->cd).volume.left;
  }
  if ((bVar2) || ((uVar6 & 0x80) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = (attr->cd).volume.right;
  }
  if ((bVar2) || ((uVar6 & 0x400) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = (attr->ext).volume.left;
  }
  if ((bVar2) || ((uVar6 & 0x800) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = (attr->ext).volume.right;
  }
  if ((bVar2) || ((uVar6 & 0x100) != 0)) {
    if ((attr->cd).reverb == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((bVar2) || ((uVar6 & 0x200) != 0)) {
    if ((attr->cd).mix == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((bVar2) || ((uVar6 & 0x1000) != 0)) {
    if ((attr->ext).reverb == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((bVar2) || ((uVar6 & 0x2000) != 0)) {
    if ((attr->ext).mix == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_58(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0x8000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_60(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0x9000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_68(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0xa000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_70(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0xb000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_78(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0xc000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_80(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0xd000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_88(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 4) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 4))) {
    uVar1 = *(ushort *)(param_1 + 4);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = uVar1 & 0x7fff | 0xe000;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x800245e8)
// WARNING: Removing unreachable block (ram,0x800245fc)
// WARNING: Removing unreachable block (ram,0x80024604)
// WARNING: Removing unreachable block (ram,0x80024608)

void S_SCA_OBJ_90(int param_1)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = *(ushort *)(param_1 + 4) & 0x7fff;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_98(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  if (param_2 != 0) {
    param_3 = 0x7f;
    if ((*(short *)(param_1 + 4) < 0x80) && (param_3 = 0, -1 < *(short *)(param_1 + 4))) {
      param_3 = *(ushort *)(param_1 + 4);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x180) = param_3 & 0x7fff | (ushort)param_2;
  if (in_t2 == 0) {
    if ((in_t1 & 2) == 0) goto S_SCA_OBJ_194;
    if ((in_t1 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    in_t0 = *(ushort *)(param_1 + 6);
    uVar1 = 0;
  }
  else {
S_SCA_OBJ_EC:
    switch(*(undefined2 *)(param_1 + 10)) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar1 = 0x8000;
      break;
    case 2:
      uVar1 = 0x9000;
      break;
    case 3:
      uVar1 = 0xa000;
      break;
    case 4:
      uVar1 = 0xb000;
      break;
    case 5:
      uVar1 = 0xc000;
      break;
    case 6:
      uVar1 = 0xd000;
      break;
    case 7:
      uVar1 = 0xe000;
    }
  }
  if (uVar1 != 0) {
    in_t0 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (in_t0 = 0, -1 < *(short *)(param_1 + 6))) {
      in_t0 = *(ushort *)(param_1 + 6);
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = in_t0 & 0x7fff | uVar1;
S_SCA_OBJ_194:
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_118(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0x8000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_120(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0x9000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_128(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0xa000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_130(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0xb000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_138(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0xc000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_140(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0xd000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_148(int param_1)

{
  ushort uVar1;
  uint in_t1;
  int in_t2;
  
  uVar1 = 0x7f;
  if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
    uVar1 = *(ushort *)(param_1 + 6);
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 & 0x7fff | 0xe000;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x800246a8)
// WARNING: Removing unreachable block (ram,0x800246bc)
// WARNING: Removing unreachable block (ram,0x800246c4)
// WARNING: Removing unreachable block (ram,0x800246c8)

void S_SCA_OBJ_150(int param_1)

{
  uint in_t1;
  int in_t2;
  
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = *(ushort *)(param_1 + 6) & 0x7fff;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_158(int param_1,int param_2)

{
  ushort uVar1;
  ushort in_t0;
  uint in_t1;
  int in_t2;
  
  uVar1 = in_t0 & 0x7fff;
  if (param_2 != 0) {
    uVar1 = 0x7f;
    if ((*(short *)(param_1 + 6) < 0x80) && (uVar1 = 0, -1 < *(short *)(param_1 + 6))) {
      uVar1 = *(ushort *)(param_1 + 6);
    }
    uVar1 = uVar1 & 0x7fff;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x182) = uVar1 | (ushort)param_2;
  if ((in_t2 != 0) || ((in_t1 & 0x40) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b0) = *(undefined2 *)(param_1 + 0x10);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b2) = *(undefined2 *)(param_1 + 0x12);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x400) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b4) = *(undefined2 *)(param_1 + 0x1c);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1b6) = *(undefined2 *)(param_1 + 0x1e);
  }
  if ((in_t2 != 0) || ((in_t1 & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 4;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_274(int param_1)

{
  undefined2 in_v0;
  int in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  if ((in_t2 != 0) || ((in_t1 & 0x200) != 0)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 1;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_2C8(int param_1)

{
  undefined2 in_v0;
  int in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  if ((in_t2 != 0) || ((in_t1 & 0x1000) != 0)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 8;
  }
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_31C(int param_1)

{
  undefined2 in_v0;
  int in_v1;
  uint in_t1;
  int in_t2;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  if ((in_t2 != 0) || ((in_t1 & 0x2000) != 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 2;
  }
  return;
}



void S_SCA_OBJ_370(void)

{
  undefined2 in_v0;
  int in_v1;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  return;
}



long SpuSetMute(long on_off)

{
  long lVar1;
  
  if (on_off == 0) {
    lVar1 = S_SM_OBJ_4C();
    return lVar1;
  }
  if (on_off != 1) {
    lVar1 = S_SM_OBJ_54();
    return lVar1;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xbfff;
  return 1;
}



undefined4 S_SM_OBJ_4C(undefined4 param_1)

{
  undefined2 in_v0;
  int in_v1;
  
  *(undefined2 *)(in_v1 + 0x1aa) = in_v0;
  return param_1;
}



void S_SM_OBJ_54(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80024c8c)
// WARNING: Removing unreachable block (ram,0x80024cb0)
// WARNING: Removing unreachable block (ram,0x80024d28)
// WARNING: Removing unreachable block (ram,0x80024d94)
// WARNING: Removing unreachable block (ram,0x80024dac)

long SpuSetReverbModeParam(SpuReverbAttr *attr)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_78;
  short sStack_74;
  short sStack_72;
  undefined2 uStack_66;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short sStack_54;
  short sStack_52;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  uint local_30;
  
  bVar3 = false;
  local_30 = 0;
  uVar9 = attr->mask;
  bVar4 = false;
  bVar2 = uVar9 == 0;
  local_78 = 0;
  if ((!bVar2) && ((uVar9 & 1) == 0)) {
    if ((((bVar2) || ((uVar9 & 8) != 0)) && ((int)DAT_800394fc < 9)) && (6 < (int)DAT_800394fc)) {
      bVar3 = true;
      puVar8 = &local_78;
      iVar5 = 0x43;
      puVar7 = &DAT_80039a18 + DAT_800394fc * 0x44;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (uint *)((int)puVar8 + 1);
      } while (iVar5 != -1);
      local_78 = 0xc011c00;
      DAT_80039504 = attr->delay;
      sStack_60 = (short)((DAT_80039504 * 0x2000) / 0x7f) - sStack_74;
      sStack_40 = (short)((DAT_80039504 * 0x1000) / 0x7f);
      sStack_5e = sStack_40 - sStack_72;
      sStack_54 = sStack_52 + sStack_40;
      sStack_5c = sStack_5a + sStack_40;
      sStack_3e = sStack_3a + sStack_40;
      sStack_40 = sStack_3c + sStack_40;
    }
    if (((bVar2) || ((uVar9 & 0x10) != 0)) && (((int)DAT_800394fc < 9 && (6 < (int)DAT_800394fc))))
    {
      bVar4 = true;
      puVar8 = &local_78;
      if (!bVar3) {
        iVar5 = 0x43;
        puVar7 = &DAT_80039a18 + DAT_800394fc * 0x44;
        do {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
          *(undefined1 *)puVar8 = uVar1;
          puVar8 = (uint *)((int)puVar8 + 1);
        } while (iVar5 != -1);
        lVar6 = S_SRMP_OBJ_31C();
        return lVar6;
      }
      local_78 = local_78 | 0x80;
      DAT_80039508 = attr->feedback;
      uStack_66 = (undefined2)((DAT_80039508 * 0x8100) / 0x7f);
    }
    if ((bVar2) || ((uVar9 & 2) != 0)) {
      *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = (attr->depth).left;
      DAT_80039500 = (attr->depth).left;
    }
    if ((!bVar2) && ((uVar9 & 4) == 0)) {
      if ((bVar3) || (bVar4)) {
        _spu_setReverbAttr(&local_78);
      }
      if (local_30 != 0) {
        SpuClearReverbWorkArea(DAT_800394fc);
      }
      return 0;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x186) = (attr->depth).right;
    DAT_80039502 = (attr->depth).right;
    lVar6 = S_SRMP_OBJ_424();
    return lVar6;
  }
  uVar9 = attr->mode;
  bVar2 = (uVar9 & 0x100) != 0;
  if (bVar2) {
    uVar9 = uVar9 & 0xfffffeff;
  }
  local_30 = (uint)bVar2;
  if ((9 < uVar9) || (iVar5 = _SpuIsInAllocateArea_((&DAT_800399c8)[uVar9]), iVar5 != 0)) {
    lVar6 = S_SRMP_OBJ_4A4();
    return lVar6;
  }
  puVar8 = &local_78;
  iVar5 = 0x43;
  DAT_800394f4 = (&DAT_800399c8)[uVar9];
  puVar7 = &DAT_80039a18 + uVar9 * 0x44;
  do {
    uVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + -1;
    *(undefined1 *)puVar8 = uVar1;
    puVar8 = (uint *)((int)puVar8 + 1);
  } while (iVar5 != -1);
  DAT_800394fc = uVar9;
  if (uVar9 == 7) {
    DAT_80039508 = 0x7f;
    DAT_80039504 = 0x7f;
    lVar6 = S_SRMP_OBJ_168();
    return lVar6;
  }
  if (uVar9 == 8) {
    DAT_80039508 = 0;
    DAT_80039504 = 0x7f;
    lVar6 = S_SRMP_OBJ_168();
    return lVar6;
  }
  lVar6 = S_SRMP_OBJ_158();
  return lVar6;
}



undefined4 S_SRMP_OBJ_158(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  uint in_stack_00000010;
  short sStack00000014;
  short sStack00000016;
  undefined4 in_stack_00000020;
  short sStack00000028;
  short sStack0000002a;
  short sStack0000002c;
  short sStack0000002e;
  short sStack00000034;
  short sStack00000036;
  short sStack00000048;
  short sStack0000004a;
  short sStack0000004c;
  short sStack0000004e;
  int in_stack_00000058;
  
  puVar4 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  DAT_80039508 = 0;
  DAT_80039504 = 0;
  if ((((unaff_s5 != 0) || ((unaff_s3 & 8) != 0)) && (DAT_800394fc < 9)) && (6 < DAT_800394fc)) {
    unaff_s6 = 1;
    if (unaff_s4 == 0) {
      puVar6 = &stack0x00000010;
      iVar5 = 0x43;
      puVar3 = &DAT_80039a18 + DAT_800394fc * 0x44;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
        *(undefined1 *)puVar6 = uVar1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      } while (iVar5 != -1);
      in_stack_00000010 = 0xc011c00;
    }
    DAT_80039504 = *(int *)(unaff_s2 + 0xc);
    sStack00000028 = (short)((DAT_80039504 * 0x2000) / 0x7f) - sStack00000014;
    sStack00000048 = (short)((DAT_80039504 * 0x1000) / 0x7f);
    sStack0000002a = sStack00000048 - sStack00000016;
    sStack00000034 = sStack00000036 + sStack00000048;
    sStack0000002c = sStack0000002e + sStack00000048;
    sStack0000004a = sStack0000004e + sStack00000048;
    sStack00000048 = sStack0000004c + sStack00000048;
  }
  if (((unaff_s5 != 0) || ((unaff_s3 & 0x10) != 0)) && ((DAT_800394fc < 9 && (6 < DAT_800394fc)))) {
    unaff_s8 = 1;
    if (unaff_s4 == 0) {
      puVar6 = &stack0x00000010;
      if (unaff_s6 == 0) {
        iVar5 = 0x43;
        puVar4 = &DAT_80039a18 + DAT_800394fc * 0x44;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
          *(undefined1 *)puVar6 = uVar1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        } while (iVar5 != -1);
        uVar2 = S_SRMP_OBJ_31C();
        return uVar2;
      }
      in_stack_00000010 = in_stack_00000010 | 0x80;
    }
    DAT_80039508 = *(int *)(unaff_s2 + 0x10);
    in_stack_00000020._2_2_ = (undefined2)((DAT_80039508 * 0x8100) / 0x7f);
  }
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = *(undefined2 *)(unaff_s2 + 8);
      DAT_80039500 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x186) = *(undefined2 *)(unaff_s2 + 10);
      DAT_80039502 = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_424();
      return uVar2;
    }
  }
  else {
    unaff_s7 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1) != 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xff7f;
      uVar2 = S_SRMP_OBJ_400();
      return uVar2;
    }
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = 0;
    *(undefined2 *)(puVar4 + 0x186) = 0;
    DAT_80039500 = 0;
    DAT_80039502 = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800394fc);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800394f4,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x80;
  }
  return 0;
}



undefined4 S_SRMP_OBJ_168(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  uint in_stack_00000010;
  short sStack00000014;
  short sStack00000016;
  undefined4 in_stack_00000020;
  short sStack00000028;
  short sStack0000002a;
  short sStack0000002c;
  short sStack0000002e;
  short sStack00000034;
  short sStack00000036;
  short sStack00000048;
  short sStack0000004a;
  short sStack0000004c;
  short sStack0000004e;
  int in_stack_00000058;
  
  puVar4 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  if ((((unaff_s5 != 0) || ((unaff_s3 & 8) != 0)) && (DAT_800394fc < 9)) && (6 < DAT_800394fc)) {
    unaff_s6 = 1;
    if (unaff_s4 == 0) {
      puVar6 = &stack0x00000010;
      iVar5 = 0x43;
      puVar3 = &DAT_80039a18 + DAT_800394fc * 0x44;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
        *(undefined1 *)puVar6 = uVar1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      } while (iVar5 != -1);
      in_stack_00000010 = 0xc011c00;
    }
    DAT_80039504 = *(int *)(unaff_s2 + 0xc);
    sStack00000028 = (short)((DAT_80039504 * 0x2000) / 0x7f) - sStack00000014;
    sStack00000048 = (short)((DAT_80039504 * 0x1000) / 0x7f);
    sStack0000002a = sStack00000048 - sStack00000016;
    sStack00000034 = sStack00000036 + sStack00000048;
    sStack0000002c = sStack0000002e + sStack00000048;
    sStack0000004a = sStack0000004e + sStack00000048;
    sStack00000048 = sStack0000004c + sStack00000048;
  }
  if (((unaff_s5 != 0) || ((unaff_s3 & 0x10) != 0)) && ((DAT_800394fc < 9 && (6 < DAT_800394fc)))) {
    unaff_s8 = 1;
    if (unaff_s4 == 0) {
      puVar6 = &stack0x00000010;
      if (unaff_s6 == 0) {
        iVar5 = 0x43;
        puVar4 = &DAT_80039a18 + DAT_800394fc * 0x44;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
          *(undefined1 *)puVar6 = uVar1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        } while (iVar5 != -1);
        uVar2 = S_SRMP_OBJ_31C();
        return uVar2;
      }
      in_stack_00000010 = in_stack_00000010 | 0x80;
    }
    DAT_80039508 = *(int *)(unaff_s2 + 0x10);
    in_stack_00000020._2_2_ = (undefined2)((DAT_80039508 * 0x8100) / 0x7f);
  }
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = *(undefined2 *)(unaff_s2 + 8);
      DAT_80039500 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x186) = *(undefined2 *)(unaff_s2 + 10);
      DAT_80039502 = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_424();
      return uVar2;
    }
  }
  else {
    unaff_s7 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1) != 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xff7f;
      uVar2 = S_SRMP_OBJ_400();
      return uVar2;
    }
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = 0;
    *(undefined2 *)(puVar4 + 0x186) = 0;
    DAT_80039500 = 0;
    DAT_80039502 = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800394fc);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800394f4,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x80;
  }
  return 0;
}



undefined4 S_SRMP_OBJ_31C(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined2 uStack00000022;
  int in_stack_00000058;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  DAT_80039508 = *(int *)(unaff_s2 + 0x10);
  uStack00000022 = (undefined2)((DAT_80039508 * 0x8100) / 0x7f);
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = *(undefined2 *)(unaff_s2 + 8);
      DAT_80039500 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x186) = *(undefined2 *)(unaff_s2 + 10);
      DAT_80039502 = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_424();
      return uVar2;
    }
  }
  else {
    unaff_s7 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) >> 7 & 1) != 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xff7f;
      uVar2 = S_SRMP_OBJ_400();
      return uVar2;
    }
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = 0;
    *(undefined2 *)(puVar1 + 0x186) = 0;
    DAT_80039500 = 0;
    DAT_80039502 = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800394fc);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800394f4,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x80;
  }
  return 0;
}



undefined4 S_SRMP_OBJ_400(void)

{
  undefined *puVar1;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000058;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_80039958;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x184) = 0;
  *(undefined2 *)(puVar1 + 0x186) = 0;
  DAT_80039500 = 0;
  DAT_80039502 = 0;
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800394fc);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800394f4,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x80;
  }
  return 0;
}



undefined4 S_SRMP_OBJ_424(void)

{
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000058;
  
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800394fc);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800394f4,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) | 0x80;
  }
  return 0;
}



void S_SRMP_OBJ_4A4(void)

{
  return;
}



undefined4 _SpuIsInAllocateArea(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = DAT_800399c0;
  if (DAT_800399c0 == (uint *)0x0) {
    uVar1 = S_M_UTIL_OBJ_78();
    return uVar1;
  }
  do {
    uVar2 = *puVar3;
    if ((uVar2 & 0x80000000) == 0) {
      if ((uVar2 & 0x40000000) != 0) {
        return 0;
      }
      if (param_1 <= (uVar2 & 0xfffffff)) {
        return 1;
      }
      if (param_1 < (uVar2 & 0xfffffff) + puVar3[1]) {
        return 1;
      }
    }
    puVar3 = puVar3 + 2;
  } while( true );
}



undefined4 S_M_UTIL_OBJ_2C(uint param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint in_t0;
  
  do {
    uVar1 = *param_2;
    if ((uVar1 & in_t0) == 0) {
      if ((uVar1 & param_4) != 0) {
        return 0;
      }
      if (param_1 <= (uVar1 & param_3)) {
        return 1;
      }
      if (param_1 < (uVar1 & param_3) + param_2[1]) {
        return 1;
      }
    }
    param_2 = param_2 + 2;
  } while( true );
}



void S_M_UTIL_OBJ_78(void)

{
  return;
}



undefined4 _SpuIsInAllocateArea_(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = param_1 << (DAT_80039980 & 0x1f);
  puVar4 = DAT_800399c0;
  if (DAT_800399c0 == (uint *)0x0) {
    uVar1 = S_M_UTIL_OBJ_104();
    return uVar1;
  }
  do {
    uVar2 = *puVar4;
    if ((uVar2 & 0x80000000) == 0) {
      if ((uVar2 & 0x40000000) != 0) {
        return 0;
      }
      if (uVar3 <= (uVar2 & 0xfffffff)) {
        return 1;
      }
      if (uVar3 < (uVar2 & 0xfffffff) + puVar4[1]) {
        return 1;
      }
    }
    puVar4 = puVar4 + 2;
  } while( true );
}



undefined4 S_M_UTIL_OBJ_B8(uint param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint in_t0;
  
  do {
    uVar1 = *param_2;
    if ((uVar1 & in_t0) == 0) {
      if ((uVar1 & param_4) != 0) {
        return 0;
      }
      if (param_1 <= (uVar1 & param_3)) {
        return 1;
      }
      if (param_1 < (uVar1 & param_3) + param_2[1]) {
        return 1;
      }
    }
    param_2 = param_2 + 2;
  } while( true );
}



void S_M_UTIL_OBJ_104(void)

{
  return;
}



void _spu_setReverbAttr(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  bVar1 = uVar2 == 0;
  if ((bVar1) || ((uVar2 & 1) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1c0) = (short)param_1[1];
  }
  if ((bVar1) || ((uVar2 & 2) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1c2) = *(undefined2 *)((int)param_1 + 6);
  }
  if ((bVar1) || ((uVar2 & 4) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1c4) = (short)param_1[2];
  }
  if ((bVar1) || ((uVar2 & 8) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1c6) = *(undefined2 *)((int)param_1 + 10);
  }
  if ((bVar1) || ((uVar2 & 0x10) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1c8) = (short)param_1[3];
  }
  if ((bVar1) || ((uVar2 & 0x20) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ca) = *(undefined2 *)((int)param_1 + 0xe);
  }
  if ((bVar1) || ((uVar2 & 0x40) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1cc) = (short)param_1[4];
  }
  if ((bVar1) || ((uVar2 & 0x80) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ce) = *(undefined2 *)((int)param_1 + 0x12)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x100) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1d0) = (short)param_1[5];
  }
  if ((bVar1) || ((uVar2 & 0x200) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1d2) = *(undefined2 *)((int)param_1 + 0x16)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x400) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1d4) = (short)param_1[6];
  }
  if ((bVar1) || ((uVar2 & 0x800) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1d6) = *(undefined2 *)((int)param_1 + 0x1a)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x1000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1d8) = (short)param_1[7];
  }
  if ((bVar1) || ((uVar2 & 0x2000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1da) = *(undefined2 *)((int)param_1 + 0x1e)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x4000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1dc) = (short)param_1[8];
  }
  if ((bVar1) || ((uVar2 & 0x8000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1de) = *(undefined2 *)((int)param_1 + 0x22)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x10000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1e0) = (short)param_1[9];
  }
  if ((bVar1) || ((uVar2 & 0x20000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1e2) = *(undefined2 *)((int)param_1 + 0x26)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x40000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1e4) = (short)param_1[10];
  }
  if ((bVar1) || ((uVar2 & 0x80000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1e6) = *(undefined2 *)((int)param_1 + 0x2a)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x100000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1e8) = (short)param_1[0xb];
  }
  if ((bVar1) || ((uVar2 & 0x200000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ea) = *(undefined2 *)((int)param_1 + 0x2e)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x400000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ec) = (short)param_1[0xc];
  }
  if ((bVar1) || ((uVar2 & 0x800000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1ee) = *(undefined2 *)((int)param_1 + 0x32)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x1000000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1f0) = (short)param_1[0xd];
  }
  if ((bVar1) || ((uVar2 & 0x2000000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1f2) = *(undefined2 *)((int)param_1 + 0x36)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x4000000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 500) = (short)param_1[0xe];
  }
  if ((bVar1) || ((uVar2 & 0x8000000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x3a)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x10000000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1f8) = (short)param_1[0xf];
  }
  if ((bVar1) || ((uVar2 & 0x20000000) != 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1fa) = *(undefined2 *)((int)param_1 + 0x3e)
    ;
  }
  if ((bVar1) || ((uVar2 & 0x40000000) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1fc) = (short)param_1[0x10];
  }
  if ((bVar1) || ((int)uVar2 < 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1fe) = *(undefined2 *)((int)param_1 + 0x42)
    ;
  }
  return;
}



long SpuClearReverbWorkArea(long mode)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  
  local_28 = 0;
  if ((uint)mode < 10) {
    iVar4 = _SpuIsInAllocateArea_((&DAT_800399c8)[mode]);
    iVar3 = DAT_80039974;
    if (iVar4 == 0) {
      if (mode != 0) {
        iVar4 = (&DAT_800399c8)[mode];
        uVar7 = 0x10000 - iVar4 << (DAT_80039980 & 0x1f);
        iVar4 = iVar4 << (DAT_80039980 & 0x1f);
        bVar1 = DAT_80039974 == 1;
        if (bVar1) {
          DAT_80039974 = 0;
        }
        bVar2 = true;
        if (DAT_80039990 != 0) {
          local_28 = DAT_80039990;
          DAT_80039990 = 0;
        }
        do {
          uVar6 = 0x400;
          if (uVar7 < 0x401) {
            bVar2 = false;
            uVar6 = uVar7;
          }
          _spu_t(2,iVar4);
          _spu_t(1);
          _spu_t(3,&DAT_80039544,uVar6);
          uVar7 = uVar7 - 0x400;
          iVar4 = iVar4 + 0x400;
          WaitEvent(DAT_800394e0);
        } while (bVar2);
        if (bVar1) {
          DAT_80039974 = iVar3;
        }
        if (local_28 != 0) {
          DAT_80039990 = local_28;
        }
        return 0;
      }
      lVar5 = S_CRWA_OBJ_9C();
      return lVar5;
    }
  }
  lVar5 = S_CRWA_OBJ_170();
  return lVar5;
}



undefined4 S_CRWA_OBJ_9C(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s5;
  int in_stack_00000010;
  
  iVar3 = DAT_80039974;
  if (DAT_80039974 == 1) {
    DAT_80039974 = 0;
    unaff_s5 = 1;
  }
  bVar2 = true;
  if (DAT_80039990 != 0) {
    in_stack_00000010 = DAT_80039990;
    DAT_80039990 = 0;
  }
  bVar1 = unaff_s1 < 0x401;
  do {
    uVar4 = 0x400;
    if (bVar1) {
      bVar2 = false;
      uVar4 = unaff_s1;
    }
    _spu_t(2,unaff_s2);
    _spu_t(1);
    _spu_t(3,&DAT_80039544,uVar4);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    WaitEvent(DAT_800394e0);
    bVar1 = unaff_s1 < 0x401;
  } while (bVar2);
  if (unaff_s5 != 0) {
    DAT_80039974 = iVar3;
  }
  if (in_stack_00000010 != 0) {
    DAT_80039990 = in_stack_00000010;
  }
  return 0;
}



void S_CRWA_OBJ_170(void)

{
  return;
}



long SpuSetNoiseClock(long n_clock)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < n_clock) && (uVar1 = n_clock, 0x3f < n_clock)) {
    uVar1 = 0x3f;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_80039958 + 0x1aa) & 0xc0ff |
       (ushort)((uVar1 & 0x3f) << 8);
  return uVar1;
}



void SpuFree(ulong addr)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_800399b8) {
    puVar1 = DAT_800399c0;
    do {
      if ((*puVar1 & 0x40000000) != 0) break;
      iVar2 = iVar2 + 1;
      if (*puVar1 == addr) {
        *puVar1 = addr | 0x80000000;
        S_M_F_OBJ_64();
        return;
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 < DAT_800399b8);
  }
  _spu_gcSPU();
  return;
}



void S_M_F_OBJ_64(void)

{
  _spu_gcSPU();
  return;
}



void _spu_gcSPU(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_800399bc;
  iVar7 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      iVar5 = iVar7 + 1;
      if ((*puVar3 & 0x80000000) != 0) {
        puVar2 = DAT_800399c0 + iVar5 * 2;
        while (uVar1 = *puVar2, puVar2 = puVar2 + 2, uVar1 == 0x2fffffff) {
          iVar5 = iVar5 + 1;
        }
        puVar2 = DAT_800399c0 + iVar5 * 2;
        if (((*puVar2 & 0x80000000) != 0) &&
           ((*puVar2 & 0xfffffff) == (*puVar3 & 0xfffffff) + puVar3[1])) {
          *puVar2 = 0x2fffffff;
          puVar3[1] = puVar3[1] + puVar2[1];
          S_M_INT_OBJ_C4();
          return;
        }
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar7 <= DAT_800399bc);
  }
  iVar7 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if (puVar3[1] == 0) {
        *puVar3 = 0x2fffffff;
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar3 = DAT_800399c0;
  iVar8 = 0;
  puVar2 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      iVar7 = DAT_800399bc;
      if ((*puVar2 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_800399bc) {
        puVar4 = puVar3 + iVar5 * 2;
        do {
          uVar1 = *puVar4;
          if ((uVar1 & 0x40000000) != 0) break;
          uVar6 = *puVar2;
          if ((uVar1 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar2 = uVar1;
            uVar1 = puVar2[1];
            puVar2[1] = puVar4[1];
            *puVar4 = uVar6;
            puVar4[1] = uVar1;
          }
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  puVar3 = DAT_800399c0;
  iVar8 = 0;
  puVar2 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if ((*puVar2 & 0x40000000) != 0) break;
      if (*puVar2 == 0x2fffffff) {
        puVar3 = DAT_800399c0 + DAT_800399bc * 2;
        *puVar2 = *puVar3;
        DAT_800399bc = iVar8;
        puVar2[1] = puVar3[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  iVar8 = DAT_800399bc + -1;
  if (-1 < iVar8) {
    puVar2 = DAT_800399c0 + iVar8 * 2;
    do {
      if ((*puVar2 & 0x80000000) == 0) {
        return;
      }
      *puVar2 = *puVar2 & 0xfffffff | 0x40000000;
      iVar7 = DAT_800399bc * 2;
      iVar5 = iVar8 + -1;
      DAT_800399bc = iVar8;
      puVar2[1] = puVar2[1] + puVar3[iVar7 + 1];
      puVar2 = puVar2 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



void S_M_INT_OBJ_54(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint *in_v1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int in_t0;
  int in_t1;
  int iVar7;
  int iVar8;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  int in_t5;
  
  iVar8 = DAT_800399bc;
code_r0x8002577c:
  while (uVar1 = *in_v1, in_v1 = in_v1 + 2, uVar1 == in_t2) {
    param_3 = param_3 + 1;
  }
  puVar4 = (uint *)(param_3 * 8 + in_t0);
  iVar7 = in_t1;
  if (((*puVar4 & in_t4) != 0) && ((*puVar4 & in_t3) == (*param_4 & in_t3) + param_4[1])) {
    *puVar4 = in_t2;
    param_4[1] = param_4[1] + puVar4[1];
    S_M_INT_OBJ_C4();
    return;
  }
  while( true ) {
    param_4 = param_4 + 2;
    in_t1 = iVar7 + 1;
    if (in_t5 < in_t1) break;
    param_3 = iVar7 + 2;
    iVar7 = in_t1;
    if ((*param_4 & in_t4) != 0) goto code_r0x80025774;
  }
  iVar7 = 0;
  puVar4 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if (puVar4[1] == 0) {
        *puVar4 = 0x2fffffff;
      }
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar4 = DAT_800399c0;
  iVar8 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      iVar7 = DAT_800399bc;
      if ((*puVar3 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_800399bc) {
        puVar2 = puVar4 + iVar5 * 2;
        do {
          uVar1 = *puVar2;
          if ((uVar1 & 0x40000000) != 0) break;
          uVar6 = *puVar3;
          if ((uVar1 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar3 = uVar1;
            uVar1 = puVar3[1];
            puVar3[1] = puVar2[1];
            *puVar2 = uVar6;
            puVar2[1] = uVar1;
          }
          iVar5 = iVar5 + 1;
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  puVar4 = DAT_800399c0;
  iVar8 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar4 = DAT_800399c0 + DAT_800399bc * 2;
        *puVar3 = *puVar4;
        DAT_800399bc = iVar8;
        puVar3[1] = puVar4[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  iVar8 = DAT_800399bc + -1;
  if (-1 < iVar8) {
    puVar3 = DAT_800399c0 + iVar8 * 2;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar7 = DAT_800399bc * 2;
      iVar5 = iVar8 + -1;
      DAT_800399bc = iVar8;
      puVar3[1] = puVar3[1] + puVar4[iVar7 + 1];
      puVar3 = puVar3 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
code_r0x80025774:
  in_v1 = (uint *)(param_3 * 8 + in_t0);
  goto code_r0x8002577c;
}



void S_M_INT_OBJ_C4(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *in_a3;
  uint uVar6;
  int in_t0;
  int in_t1;
  int iVar7;
  int iVar8;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  int in_t5;
  
  iVar8 = DAT_800399bc;
  for (; in_t1 <= in_t5; in_t1 = in_t1 + 1) {
    iVar7 = in_t1 + 1;
    if ((*in_a3 & in_t4) != 0) {
      puVar1 = (uint *)(iVar7 * 8 + in_t0);
      while (uVar4 = *puVar1, puVar1 = puVar1 + 2, uVar4 == in_t2) {
        iVar7 = iVar7 + 1;
      }
      puVar1 = (uint *)(iVar7 * 8 + in_t0);
      if (((*puVar1 & in_t4) != 0) && ((*puVar1 & in_t3) == (*in_a3 & in_t3) + in_a3[1])) {
        *puVar1 = in_t2;
        in_a3[1] = in_a3[1] + puVar1[1];
        S_M_INT_OBJ_C4();
        return;
      }
    }
    in_a3 = in_a3 + 2;
  }
  iVar7 = 0;
  puVar1 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if (puVar1[1] == 0) {
        *puVar1 = 0x2fffffff;
      }
      iVar7 = iVar7 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar1 = DAT_800399c0;
  iVar8 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      iVar7 = DAT_800399bc;
      if ((*puVar3 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_800399bc) {
        puVar2 = puVar1 + iVar5 * 2;
        do {
          uVar4 = *puVar2;
          if ((uVar4 & 0x40000000) != 0) break;
          uVar6 = *puVar3;
          if ((uVar4 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar3 = uVar4;
            uVar4 = puVar3[1];
            puVar3[1] = puVar2[1];
            *puVar2 = uVar6;
            puVar2[1] = uVar4;
          }
          iVar5 = iVar5 + 1;
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  puVar1 = DAT_800399c0;
  iVar8 = 0;
  puVar3 = DAT_800399c0;
  if (-1 < DAT_800399bc) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar1 = DAT_800399c0 + DAT_800399bc * 2;
        *puVar3 = *puVar1;
        DAT_800399bc = iVar8;
        puVar3[1] = puVar1[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_800399bc);
  }
  iVar8 = DAT_800399bc + -1;
  if (-1 < iVar8) {
    puVar3 = DAT_800399c0 + iVar8 * 2;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar7 = DAT_800399bc * 2;
      iVar5 = iVar8 + -1;
      DAT_800399bc = iVar8;
      puVar3[1] = puVar3[1] + puVar1[iVar7 + 1];
      puVar3 = puVar3 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



void S_M_INT_OBJ_270(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_800399c0;
  iVar4 = DAT_800399bc + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(iVar4 * 8 + DAT_800399c0);
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar2 = DAT_800399bc * 8;
      iVar5 = iVar4 + -1;
      DAT_800399bc = iVar4;
      puVar3[1] = puVar3[1] + *(int *)(iVar2 + iVar1 + 4);
      puVar3 = puVar3 + -2;
      iVar4 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80025b60)
// WARNING: Removing unreachable block (ram,0x80025c24)
// WARNING: Removing unreachable block (ram,0x80025c38)
// WARNING: Removing unreachable block (ram,0x80025c58)
// WARNING: Removing unreachable block (ram,0x80025c94)
// WARNING: Removing unreachable block (ram,0x80025b84)
// WARNING: Removing unreachable block (ram,0x80025b9c)
// WARNING: Removing unreachable block (ram,0x80025bb4)

long SpuMalloc(long size)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_800394f0 == 0) {
    lVar3 = S_M_M_OBJ_54();
    return lVar3;
  }
  if ((size & ~DAT_80039988) != 0) {
    size = size + DAT_80039988;
  }
  uVar2 = DAT_80039980 & 0x1f;
  uVar1 = DAT_80039980 & 0x1f;
  if ((*DAT_800399c0 & 0x40000000) != 0) {
    lVar3 = S_M_M_OBJ_12C();
    return lVar3;
  }
  _spu_gcSPU();
  puVar4 = DAT_800399c0;
  if (0 < DAT_800399b8) {
    do {
      if (((*puVar4 & 0x40000000) != 0) ||
         (((*puVar4 & 0x80000000) != 0 && ((uint)((size >> uVar2) << uVar1) <= puVar4[1])))) {
        lVar3 = S_M_M_OBJ_12C();
        return lVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < DAT_800399b8);
  }
  return -1;
}



uint S_M_M_OBJ_54(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s0;
  uint unaff_s1;
  uint uVar6;
  int unaff_s2;
  int unaff_s3;
  
  if ((unaff_s1 & ~DAT_80039988) != 0) {
    unaff_s1 = unaff_s1 + DAT_80039988;
  }
  uVar6 = ((int)unaff_s1 >> (DAT_80039980 & 0x1f)) << (DAT_80039980 & 0x1f);
  if ((*DAT_800399c0 & 0x40000000) != 0) {
    uVar6 = S_M_M_OBJ_12C();
    return uVar6;
  }
  _spu_gcSPU();
  if (unaff_s0 < DAT_800399b8) {
    puVar3 = DAT_800399c0 + unaff_s0 * 2;
    do {
      if (((*puVar3 & 0x40000000) != 0) || (((*puVar3 & 0x80000000) != 0 && (uVar6 <= puVar3[1]))))
      {
        uVar6 = S_M_M_OBJ_12C();
        return uVar6;
      }
      unaff_s0 = unaff_s0 + 1;
      puVar3 = puVar3 + 2;
    } while (unaff_s0 < DAT_800399b8);
  }
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar3 = DAT_800399c0 + unaff_s2 * 2;
    if ((*puVar3 & 0x40000000) == 0) {
      uVar1 = puVar3[1];
      if (uVar6 < uVar1) {
        if (DAT_800399bc < DAT_800399b8) {
          puVar2 = DAT_800399c0 + DAT_800399bc * 2;
          uVar5 = *puVar2;
          uVar4 = puVar2[1];
          *puVar2 = *puVar3 + uVar6 | 0x80000000;
          puVar2[1] = uVar1 - uVar6;
          DAT_800399bc = DAT_800399bc + 1;
          puVar2[2] = uVar5;
          puVar2[3] = uVar4;
        }
      }
      puVar3 = DAT_800399c0 + unaff_s2 * 2;
      puVar3[1] = uVar6;
      *puVar3 = *puVar3 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = DAT_800399c0[unaff_s2 * 2];
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_800399b8) && (uVar1 = 0xffffffff, uVar6 <= puVar3[1] - unaff_s3)) {
        DAT_800399bc = unaff_s2 + 1;
        puVar2 = DAT_800399c0 + DAT_800399bc * 2;
        *puVar2 = (*puVar3 & 0xfffffff) + uVar6 | 0x40000000;
        puVar2[1] = puVar3[1] - uVar6;
        puVar3[1] = uVar6;
        *puVar3 = *puVar3 & 0xfffffff;
        _spu_gcSPU();
        uVar6 = S_M_M_OBJ_2A8();
        return uVar6;
      }
    }
  }
  return uVar1;
}



undefined4 S_M_M_OBJ_12C(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar5 = (uint *)(unaff_s2 * 8 + DAT_800399c0);
    if ((*puVar5 & 0x40000000) == 0) {
      uVar6 = puVar5[1];
      if (unaff_s1 < uVar6) {
        if (DAT_800399bc < DAT_800399b8) {
          puVar2 = (uint *)(DAT_800399bc * 8 + DAT_800399c0);
          uVar4 = *puVar2;
          uVar3 = puVar2[1];
          *puVar2 = *puVar5 + unaff_s1 | 0x80000000;
          puVar2[1] = uVar6 - unaff_s1;
          DAT_800399bc = DAT_800399bc + 1;
          puVar2[2] = uVar4;
          puVar2[3] = uVar3;
        }
      }
      puVar5 = (uint *)(unaff_s2 * 8 + DAT_800399c0);
      puVar5[1] = unaff_s1;
      *puVar5 = *puVar5 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = *(undefined4 *)(unaff_s2 * 8 + DAT_800399c0);
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_800399b8) && (uVar1 = 0xffffffff, unaff_s1 <= puVar5[1] - unaff_s3)) {
        DAT_800399bc = unaff_s2 + 1;
        puVar2 = (uint *)(DAT_800399bc * 8 + DAT_800399c0);
        *puVar2 = (*puVar5 & 0xfffffff) + unaff_s1 | 0x40000000;
        puVar2[1] = puVar5[1] - unaff_s1;
        puVar5[1] = unaff_s1;
        *puVar5 = *puVar5 & 0xfffffff;
        _spu_gcSPU();
        uVar1 = S_M_M_OBJ_2A8();
        return uVar1;
      }
    }
  }
  return uVar1;
}



void S_M_M_OBJ_2A8(void)

{
  return;
}



long SpuSetTransferMode(long mode)

{
  long lVar1;
  
  if ((mode != 0) && (mode == 1)) {
    lVar1 = S_STM_OBJ_1C();
    return lVar1;
  }
  DAT_800394e8 = mode;
  DAT_80039974 = 0;
  return 0;
}



void S_STM_OBJ_1C(undefined4 param_1)

{
  undefined4 in_v0;
  
  DAT_800394e8 = param_1;
  DAT_80039974 = in_v0;
  return;
}



int PCopen(char *name,int flags,int perms)

{
  int in_v0;
  int in_v1;
  
  trap(0x103);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



int PClseek(int fd,int offset,int mode)

{
  int in_v0;
  int in_v1;
  
  trap(0x107);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



// WARNING: Removing unreachable block (ram,0x80025e64)

void start(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  uint uVar3;
  undefined4 unaff_retaddr;
  undefined4 uVar4;
  
  puVar2 = &DAT_800a3530;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_800ad1c8);
  uVar3 = DAT_80039398 - 8U | 0x80000000;
  DAT_80039cd0 = ((DAT_80039398 - 8U) - DAT_8003939c) + -0xad1c8;
  DAT_80039ccc = &DAT_800ad1c8;
  DAT_800a3530 = unaff_retaddr;
  FUN_8001bdf4(&DAT_800ad1cc);
  uVar4 = 0x80025e20;
  main();
  iVar1 = DAT_80039cc8;
  trap(1);
  *(undefined4 *)(uVar3 - 0xc) = unaff_s0;
  *(undefined4 *)(uVar3 - 8) = unaff_s1;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  if (iVar1 == 0) {
    DAT_80039cc8 = 1;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80025e64)

void FUN_80025e24(void)

{
  if (DAT_80039cc8 == 0) {
    DAT_80039cc8 = 1;
  }
  return;
}



void _SN_read(void)

{
  trap(0x105);
  return;
}



void FUN_80026074(void)

{
  _exit();
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_80026108(void)

{
  FUN_80035720();
  return;
}



int VSync(int mode)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
  } while (*(int *)PTR_TMR_HRETRACE_VAL_80039cf8 != *(int *)PTR_TMR_HRETRACE_VAL_80039cf8);
  uVar1 = *(int *)PTR_TMR_HRETRACE_VAL_80039cf8 - DAT_80039cfc;
  if (mode < 0) {
    iVar2 = VSYNC_OBJ_164();
    return iVar2;
  }
  if (mode != 1) {
    if (0 < mode) {
      iVar2 = VSYNC_OBJ_A4();
      return iVar2;
    }
    iVar2 = 0;
    if (0 < mode) {
      iVar2 = mode + -1;
    }
    VSYNC_OBJ_178(DAT_80039d00,iVar2);
    uVar3 = *(uint *)PTR_GPU_REG1_80039cf4;
    VSYNC_OBJ_178(DAT_8003ae2c + 1,1);
    if (((uVar3 & 0x400000) != 0) && (-1 < (int)(uVar3 ^ *(uint *)PTR_GPU_REG1_80039cf4))) {
      do {
      } while (((uVar3 ^ *(uint *)PTR_GPU_REG1_80039cf4) & 0x80000000) == 0);
    }
    DAT_80039d00 = DAT_8003ae2c;
    do {
      DAT_80039cfc = *(int *)PTR_TMR_HRETRACE_VAL_80039cf8;
    } while (DAT_80039cfc != *(int *)PTR_TMR_HRETRACE_VAL_80039cf8);
  }
  return uVar1 & 0xffff;
}



void VSYNC_OBJ_A4(void)

{
  uint uVar1;
  
  VSYNC_OBJ_178();
  uVar1 = *(uint *)PTR_GPU_REG1_80039cf4;
  VSYNC_OBJ_178(DAT_8003ae2c + 1,1);
  if (((uVar1 & 0x400000) != 0) && (-1 < (int)(uVar1 ^ *(uint *)PTR_GPU_REG1_80039cf4))) {
    do {
    } while (((uVar1 ^ *(uint *)PTR_GPU_REG1_80039cf4) & 0x80000000) == 0);
  }
  DAT_80039d00 = DAT_8003ae2c;
  do {
    DAT_80039cfc = *(int *)PTR_TMR_HRETRACE_VAL_80039cf8;
  } while (*(int *)PTR_TMR_HRETRACE_VAL_80039cf8 != *(int *)PTR_TMR_HRETRACE_VAL_80039cf8);
  return;
}



void VSYNC_OBJ_164(void)

{
  return;
}



void VSYNC_OBJ_178(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_8003ae2c) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  puts("VSync: timeout\n");
  ChangeClearPAD(0);
  ChangeClearRCnt(3,0);
  VSYNC_OBJ_200();
  return;
}



void VSYNC_OBJ_200(void)

{
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ResetCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0xc))();
  return iVar1;
}



void InterruptCallback(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 8))();
  return;
}



void DMACallback(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 4))();
  return;
}



int VSyncCallback(f *f)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0x14))(4,f);
  return iVar1;
}



void VSyncCallbacks(void)

{
  (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0x14))();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int StopCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0x10))();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int RestartCallback(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0x18))();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int CheckCallback(void)

{
  return (uint)DAT_80039d66;
}



undefined2 GetIntrMask(void)

{
  return *(undefined2 *)PTR_I_MASK_8003adf4;
}



undefined2 SetIntrMask(undefined2 param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)PTR_I_MASK_8003adf4;
  *(undefined2 *)PTR_I_MASK_8003adf4 = param_1;
  return uVar1;
}



undefined2 * INTR_OBJ_194(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_I_MASK_8003adf4;
  puVar1 = PTR_I_STAT_8003adf0;
  puVar3 = (undefined2 *)0x0;
  if (DAT_80039d64 == 0) {
    *(undefined2 *)PTR_I_MASK_8003adf4 = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(undefined4 *)PTR_DMA_DPCR_8003adf8 = 0x33333333;
    INTR_OBJ_69C(&DAT_80039d64,0x41a);
    iVar4 = setjmp(&DAT_80039d9c);
    if (iVar4 != 0) {
      INTR_OBJ_26C();
    }
    DAT_80039da0 = &DAT_8003ad7c;
    HookEntryInt(&DAT_80039d9c);
    DAT_80039d64 = 1;
    uVar5 = FUN_80026a04();
    *(undefined4 *)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 0x14) = uVar5;
    uVar5 = startIntrDMA();
    *(undefined4 *)(PTR_PTR_s__Id__intr_c_v_1_76_1997_02_12_12_8003adec + 4) = uVar5;
    FUN_8003531c();
    puVar3 = &DAT_80039d64;
    FUN_800353f4();
  }
  return puVar3;
}



void INTR_OBJ_26C(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_80039d64 == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)*(ushort *)PTR_I_STAT_8003adf0);
    ReturnFromException();
  }
  DAT_80039d66 = 1;
  uVar2 = (uint)(*(ushort *)PTR_I_MASK_8003adf4 & DAT_80039d94 & *(ushort *)PTR_I_STAT_8003adf0);
  if (uVar2 != 0) {
    do {
      puVar5 = &DAT_80039d68;
      for (uVar4 = 0; (uVar2 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar2 & 1) != 0) {
          *(ushort *)PTR_I_STAT_8003adf0 = ~(ushort)(1 << (uVar4 & 0x1f));
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)();
          }
        }
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = (uint)(*(ushort *)PTR_I_MASK_8003adf4 & DAT_80039d94 & *(ushort *)PTR_I_STAT_8003adf0)
      ;
    } while (uVar2 != 0);
  }
  if ((*(ushort *)PTR_I_STAT_8003adf0 & *(ushort *)PTR_I_MASK_8003adf4) == 0) {
    DAT_8003adfc = 0;
  }
  else {
    iVar3 = DAT_8003adfc + 1;
    bVar1 = 0x800 < DAT_8003adfc;
    DAT_8003adfc = iVar3;
    if (bVar1) {
      printf("intr timeout(%04x:%04x)\n",(uint)*(ushort *)PTR_I_STAT_8003adf0,
             (uint)*(ushort *)PTR_I_MASK_8003adf4);
      DAT_8003adfc = 0;
      *(undefined2 *)PTR_I_STAT_8003adf0 = 0;
      INTR_OBJ_410();
      return;
    }
  }
  DAT_80039d66 = 0;
  ReturnFromException();
  return;
}



void INTR_OBJ_410(void)

{
  DAT_80039d66 = 0;
  ReturnFromException();
  return;
}



int INTR_OBJ_43C(uint param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_80039d68 + param_1;
  iVar4 = *piVar3;
  if ((param_2 != iVar4) && (DAT_80039d64 != 0)) {
    uVar1 = *(ushort *)PTR_I_MASK_8003adf4;
    *(undefined2 *)PTR_I_MASK_8003adf4 = 0;
    if (param_2 != 0) {
      *piVar3 = param_2;
      DAT_80039d94 = DAT_80039d94 | (ushort)(1 << (param_1 & 0x1f));
      iVar4 = INTR_OBJ_4EC();
      return iVar4;
    }
    uVar2 = ~(ushort)(1 << (param_1 & 0x1f));
    *piVar3 = 0;
    DAT_80039d94 = DAT_80039d94 & uVar2;
    if (param_1 == 0) {
      ChangeClearPAD(1);
      ChangeClearRCnt(3,1);
    }
    if (param_1 == 4) {
      ChangeClearRCnt(0,1);
    }
    if (param_1 == 5) {
      ChangeClearRCnt(1,1);
    }
    if (param_1 == 6) {
      ChangeClearRCnt(2,1);
    }
    *(ushort *)PTR_I_MASK_8003adf4 = uVar1 & uVar2;
  }
  return iVar4;
}



void INTR_OBJ_4EC(void)

{
  int unaff_s1;
  int unaff_s2;
  undefined2 unaff_s3;
  
  if (unaff_s1 == 0) {
    ChangeClearPAD((uint)(unaff_s2 == 0));
    ChangeClearRCnt(3,(uint)(unaff_s2 == 0));
  }
  if (unaff_s1 == 4) {
    ChangeClearRCnt(0,unaff_s2 == 0);
  }
  if (unaff_s1 == 5) {
    ChangeClearRCnt(1,unaff_s2 == 0);
  }
  if (unaff_s1 == 6) {
    ChangeClearRCnt(2,unaff_s2 == 0);
  }
  *(undefined2 *)PTR_I_MASK_8003adf4 = unaff_s3;
  return;
}



undefined2 * INTR_OBJ_584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  if (DAT_80039d64 != 0) {
    FUN_800353e4();
    puVar2 = PTR_I_MASK_8003adf4;
    puVar1 = PTR_I_STAT_8003adf0;
    DAT_80039d96 = *(undefined2 *)PTR_I_MASK_8003adf4;
    DAT_80039d98 = *(undefined4 *)PTR_DMA_DPCR_8003adf8;
    *(undefined2 *)PTR_I_MASK_8003adf4 = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(uint *)PTR_DMA_DPCR_8003adf8 = *(uint *)PTR_DMA_DPCR_8003adf8 & 0x77777777;
    ResetEntryInt();
    DAT_80039d64 = 0;
    puVar3 = &DAT_80039d64;
  }
  return puVar3;
}



undefined4 INTR_OBJ_624(void)

{
  undefined4 uVar1;
  
  if (DAT_80039d64 == 0) {
    HookEntryInt(&DAT_80039d9c);
    DAT_80039d64 = 1;
    *(undefined2 *)PTR_I_MASK_8003adf4 = DAT_80039d96;
    *(undefined4 *)PTR_DMA_DPCR_8003adf8 = DAT_80039d98;
    FUN_800353f4();
    uVar1 = INTR_OBJ_68C();
    return uVar1;
  }
  return 0;
}



void INTR_OBJ_68C(void)

{
  return;
}



void INTR_OBJ_69C(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



undefined1 * FUN_80026a04(void)

{
  *(undefined4 *)PTR_TMR_HRETRACE_MODE_8003ae30 = 0x107;
  DAT_8003ae2c = 0;
  FUN_80026af4(&DAT_8003ae0c,8);
  InterruptCallback(0,&LAB_80026a5c);
  return &LAB_80026ac8;
}



void FUN_80026af4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



code * startIntrDMA(void)

{
  INTR_DMA_OBJ_278(&DAT_8003ae40,8);
  *(undefined4 *)PTR_DMA_DICR_8003ae3c = 0;
  InterruptCallback(3,INTR_DMA_OBJ_4C);
  return INTR_DMA_OBJ_1CC;
}



void INTR_DMA_OBJ_4C(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(uint *)PTR_DMA_DICR_8003ae3c >> 0x18 & 0x7f;
  if (uVar3 != 0) {
    do {
      puVar4 = &DAT_8003ae40;
      for (iVar1 = 0; (uVar3 != 0 && (iVar1 < 7)); iVar1 = iVar1 + 1) {
        if ((uVar3 & 1) != 0) {
          *(uint *)PTR_DMA_DICR_8003ae3c =
               *(uint *)PTR_DMA_DICR_8003ae3c & (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU);
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)();
          }
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 >> 1;
      }
      uVar3 = *(uint *)PTR_DMA_DICR_8003ae3c >> 0x18 & 0x7f;
    } while (uVar3 != 0);
  }
  if (((*(uint *)PTR_DMA_DICR_8003ae3c & 0xff000000) == 0x80000000) ||
     ((*(uint *)PTR_DMA_DICR_8003ae3c & 0x8000) != 0)) {
    printf("DMA bus error: code=%08x\n",*(undefined4 *)PTR_DMA_DICR_8003ae3c);
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      printf("MADR[%d]=%08x\n",iVar1,*(undefined4 *)(PTR_DMA_MDEC_IN_MADR_8003ae60 + iVar1 * 0x10));
      iVar1 = iVar2;
    } while (iVar2 < 7);
  }
  return;
}



int INTR_DMA_OBJ_1CC(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = PTR_DMA_DICR_8003ae3c;
  piVar2 = &DAT_8003ae40 + param_1;
  iVar3 = *piVar2;
  if (param_2 != iVar3) {
    if (param_2 != 0) {
      *piVar2 = param_2;
      *(uint *)puVar1 = *(uint *)puVar1 & 0xffffff | 1 << (param_1 + 0x10U & 0x1f) | 0x800000U;
      iVar3 = INTR_DMA_OBJ_270();
      return iVar3;
    }
    *piVar2 = 0;
    *(uint *)puVar1 = (*(uint *)puVar1 & 0xffffff | 0x800000) & ~(1 << (param_1 + 0x10U & 0x1f));
  }
  return iVar3;
}



void INTR_DMA_OBJ_270(void)

{
  return;
}



void INTR_DMA_OBJ_278(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



// Possible VMODE.OBJ/GetVideoMode
// Possible GS_125.OBJ/GsGetWorkBase
// Possible SSVM_2.OBJ/SsGetVoiceMask

undefined4 FUN_80026dd8(void)

{
  return DAT_8003ae6c;
}



void StSetRing(u_long *ring_addr,u_long ring_size)

{
  DAT_800a4900 = ring_addr;
  DAT_800a4904 = ring_size;
  StClearRing();
  return;
}



int CdGetToc(CdlLOC *loc)

{
  int iVar1;
  
  iVar1 = CdGetToc2(1,loc);
  return iVar1;
}



undefined4 CdGetToc2(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  char local_30 [8];
  undefined1 uStack_28;
  byte local_27;
  byte local_26;
  
  local_30[0] = '\x01';
  uVar2 = FUN_800272f8(0);
  iVar3 = FUN_80027590(0x13,0,&uStack_28);
  if (iVar3 != 0) {
    uVar5 = (uint)(local_27 >> 4) * 10 + (local_27 & 0xf);
    uVar7 = (uint)(local_26 >> 4) * 10 + (local_26 & 0xf);
    if (1 < DAT_8003af20) {
      printf("track=%d,%d\n",uVar5,uVar7);
    }
    local_30[0] = '\0';
    iVar3 = FUN_80027590(0x14,local_30,&uStack_28);
    if (iVar3 != 0) {
      *param_2 = local_27;
      param_2[2] = 0;
      param_2[1] = local_26;
      iVar3 = 1;
      if (uVar5 <= uVar7) {
        pbVar6 = param_2 + 4;
        do {
          local_30[0] = (char)uVar5 + (char)((int)uVar5 / 10) * '\x06';
          iVar4 = FUN_80027590(0x14,local_30,&uStack_28);
          iVar3 = iVar3 + 1;
          if (iVar4 == 0) goto TOC_OBJ_1F4;
          *pbVar6 = local_27;
          uVar5 = uVar5 + 1;
          pbVar6[2] = 0;
          pbVar6[1] = local_26;
          pbVar6 = pbVar6 + 4;
        } while ((int)uVar5 <= (int)uVar7);
      }
      if ((1 < DAT_8003af20) && (iVar4 = 0, -1 < iVar3 + -1)) {
        do {
          bVar1 = *param_2;
          pbVar6 = param_2 + 1;
          param_2 = param_2 + 4;
          iVar4 = iVar4 + 1;
          printf("CdGetToc2: %02x:%02x:00\n",(uint)bVar1,(uint)*pbVar6);
        } while (iVar4 <= iVar3 + -1);
      }
      FUN_800272f8(uVar2);
      uVar2 = TOC_OBJ_220();
      return uVar2;
    }
  }
TOC_OBJ_1F4:
  if (DAT_8003af20 != 0) {
    printf("CdGetToc2: error\n");
  }
  FUN_800272f8(uVar2);
  return 0;
}



void TOC_OBJ_220(void)

{
  return;
}



undefined4 FUN_80027074(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = FUN_800271b0(1);
    iVar2 = iVar2 + -1;
    if (iVar1 == 1) {
      FUN_800272f8(&LAB_800270f8);
      FUN_8002730c(&LAB_80027120);
      FUN_8002a14c(&LAB_80027148);
      FUN_8002a160(0);
      return 1;
    }
  } while (iVar2 != -1);
  printf("CdInit: Init failed\n");
  return 0;
}



// Possible S_003.OBJ/CdStatus
// Possible S_004.OBJ/CdMode
// Possible S_005.OBJ/CdLastCom

undefined1 FUN_80027174(void)

{
  return DAT_8003af24;
}



// Possible S_003.OBJ/CdStatus
// Possible S_004.OBJ/CdMode
// Possible S_005.OBJ/CdLastCom

undefined1 FUN_80027184(void)

{
  return DAT_8003af34;
}



undefined1 * FUN_800271a4(void)

{
  return &DAT_8003af30;
}



undefined4 FUN_800271b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    FUN_80028a00();
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_80028a4c();
    uVar1 = 0;
    if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
      iVar2 = FUN_80028910();
      uVar1 = 0;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_8002721c(void)

{
  FUN_8002883c();
  return;
}



undefined * FUN_80027284(uint param_1)

{
  undefined *puVar1;
  
  if ((param_1 & 0xff) < 7) {
    puVar1 = (&PTR_s_NoIntr_8003afbc)[param_1 & 0xff];
  }
  else {
    puVar1 = &DAT_80010848;
  }
  return puVar1;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_800272b8(void)

{
  FUN_80027e60();
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_800272d8(void)

{
  FUN_800280e0();
  return;
}



undefined4 FUN_800272f8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8003af14;
  DAT_8003af14 = param_1;
  return uVar1;
}



undefined4 FUN_8002730c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8003af18;
  DAT_8003af18 = param_1;
  return uVar1;
}



undefined4 FUN_80027320(byte param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003af14;
  iVar3 = 3;
  while( true ) {
    DAT_8003af14 = 0;
    if ((param_1 != 1) && ((DAT_8003af24 & 0x10) != 0)) {
      FUN_800283a8(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(&DAT_8003ae8c + (uint)param_1 * 4) == 0)) ||
        (iVar2 = FUN_800283a8(2,param_2,param_3,0), iVar2 == 0)) &&
       (DAT_8003af14 = uVar1, iVar2 = FUN_800283a8(param_1,param_2,param_3,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003af14 = uVar1;
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_8002745c(byte param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003af14;
  iVar3 = 3;
  while( true ) {
    DAT_8003af14 = 0;
    if ((param_1 != 1) && ((DAT_8003af24 & 0x10) != 0)) {
      FUN_800283a8(1,0,0,0);
    }
    if ((((param_2 == 0) || (*(int *)(&DAT_8003ae8c + (uint)param_1 * 4) == 0)) ||
        (iVar2 = FUN_800283a8(2,param_2,0,0), iVar2 == 0)) &&
       (DAT_8003af14 = uVar1, iVar2 = FUN_800283a8(param_1,param_2,0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003af14 = uVar1;
      return 0;
    }
  }
  return 1;
}



bool FUN_80027590(byte param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_8003af14;
  iVar5 = 3;
  do {
    DAT_8003af14 = 0;
    if ((param_1 != 1) && ((DAT_8003af24 & 0x10) != 0)) {
      FUN_800283a8(1,0,0,0);
    }
    if (((param_2 == 0) || (*(int *)(&DAT_8003ae8c + (uint)param_1 * 4) == 0)) ||
       (iVar3 = FUN_800283a8(2,param_2,param_3,0), iVar3 == 0)) {
      DAT_8003af14 = uVar1;
      iVar3 = FUN_800283a8(param_1,param_2,param_3,0);
      iVar4 = 0;
      if (iVar3 == 0) break;
    }
    iVar5 = iVar5 + -1;
    iVar4 = -1;
    DAT_8003af14 = uVar1;
  } while (iVar5 != -1);
  if (iVar4 == 0) {
    iVar5 = FUN_80027e60(0,param_3);
    bVar2 = iVar5 == 2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// Possible DSSYS_3.OBJ/DsMix

int CdMix(CdlATV *vol)

{
  FUN_800287b4();
  return 1;
}



// Possible S_022.OBJ/CdGetSector2
// Possible D3_002.OBJ/DsGetSector
// Possible D3_003.OBJ/DsGetSector2

int CdGetSector(void *madr,int size)

{
  int iVar1;
  
  iVar1 = CD_getsector();
  return (uint)(iVar1 == 0);
}



// Possible S_021.OBJ/CdGetSector
// Possible S_022.OBJ/CdGetSector2
// Possible D3_002.OBJ/DsGetSector
// Possible D3_003.OBJ/DsGetSector2

bool FUN_8002771c(void)

{
  int iVar1;
  
  iVar1 = FUN_80028e94();
  return iVar1 == 0;
}



void FUN_8002773c(undefined4 param_1)

{
  DMACallback(3,param_1);
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_80027760(void)

{
  FUN_80028c2c();
  return;
}



void FUN_80027780(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 + 0x96) / 0x4b;
  iVar2 = (param_1 + 0x96) % 0x4b;
  iVar1 = iVar3 / 0x3c;
  iVar3 = iVar3 % 0x3c;
  param_2[2] = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  param_2[1] = (char)iVar3 + (char)(iVar3 / 10) * '\x06';
  *param_2 = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  return;
}



// Possible D3_006.OBJ/DsPosToInt

int CdPosToInt(CdlLOC *p)

{
  return (((uint)(p->minute >> 4) * 10 + (p->minute & 0xf)) * 0x3c +
         (uint)(p->second >> 4) * 10 + (p->second & 0xf)) * 0x4b +
         (uint)(p->sector >> 4) * 10 + (p->sector & 0xf) + -0x96;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80027904(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte local_20;
  byte local_18 [8];
  
  *PTR_CDROM_REG0_8003b1dc = 1;
  local_20 = *PTR_CDROM_REG3_8003b1e8 & 7;
  uVar7 = 0;
  if (local_20 == 0) {
LAB_80027e48:
    uVar2 = 0;
  }
  else {
    while (iVar5 = 0, local_20 != (*PTR_CDROM_REG3_8003b1e8 & 7)) {
      local_20 = *PTR_CDROM_REG3_8003b1e8 & 7;
    }
    do {
      pbVar3 = local_18 + iVar5;
      iVar6 = iVar5;
      if ((*PTR_CDROM_REG0_8003b1dc & 0x20) == 0) break;
      iVar5 = iVar5 + 1;
      *pbVar3 = *PTR_CDROM_REG1_8003b1e0;
      iVar6 = iVar5;
    } while (iVar5 < 8);
    for (; iVar5 < 8; iVar5 = iVar5 + 1) {
      local_18[iVar5] = 0;
    }
    *PTR_CDROM_REG0_8003b1dc = 1;
    *PTR_CDROM_REG3_8003b1e8 = 7;
    *PTR_CDROM_REG2_8003b1e4 = 7;
    if ((local_20 != 3) || (*(int *)(&DAT_8003b0dc + (uint)DAT_8003af35 * 4) != 0)) {
      if (((_DAT_8003af24 & 0x10) == 0) && ((local_18[0] & 0x10) != 0)) {
        DAT_8003af2c = DAT_8003af2c + 1;
      }
      _DAT_8003af24 = (uint)local_18[0];
      DAT_8003af28 = (uint)local_18[1];
      uVar7 = _DAT_8003af24 & 0x1d;
    }
    if (((local_20 == 5) && (0 < DAT_8003af20)) && (printf("DiskError: "), 0 < DAT_8003af20)) {
      printf("com=%s,code=(%02x:%02x)\n",(&PTR_s_CdlSync_8003af3c)[DAT_8003af35],_DAT_8003af24,
             DAT_8003af28);
    }
    switch(local_20) {
    case 1:
      if ((uVar7 != 0) && (iVar6 == 1)) {
        uVar7 = 0;
      }
      DAT_8003b1f5 = 1;
      if (uVar7 != 0) {
        DAT_8003b1f5 = 5;
      }
      pbVar3 = &DAT_800a4910;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      *PTR_CDROM_REG0_8003b1dc = 0;
      uVar2 = 4;
      *PTR_CDROM_REG3_8003b1e8 = 0;
      break;
    case 2:
      DAT_8003b1f4 = 2;
      if (uVar7 != 0) {
        DAT_8003b1f4 = 5;
      }
      pbVar3 = &DAT_800a4908;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 2;
      break;
    case 3:
      if (uVar7 == 0) {
        if (*(int *)(&DAT_8003afdc + (uint)DAT_8003af35 * 4) == 0) {
          DAT_8003b1f4 = 2;
          pbVar3 = &DAT_800a4908;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 2;
        }
        else {
          DAT_8003b1f4 = 3;
          pbVar3 = &DAT_800a4908;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 1;
        }
      }
      else {
        DAT_8003b1f4 = 5;
        pbVar3 = &DAT_800a4908;
        pbVar4 = local_18;
        iVar5 = 7;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar5 = iVar5 + -1;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        } while (iVar5 != -1);
        uVar2 = 2;
      }
      break;
    case 4:
      pbVar3 = &DAT_800a4918;
      DAT_8003b1f6 = 4;
      pbVar4 = local_18;
      DAT_8003b1f5 = 4;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_800a4910;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 4;
      break;
    case 5:
      pbVar3 = &DAT_800a4908;
      DAT_8003b1f5 = 5;
      pbVar4 = local_18;
      DAT_8003b1f4 = 5;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_800a4910;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 6;
      break;
    default:
      puts("CDROM: unknown intr");
      printf("(%d)\n",(uint)local_20);
      goto LAB_80027e48;
    }
  }
  return uVar2;
}



uint FUN_80027e60(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  iVar4 = VSync(-1);
  DAT_800a4920 = iVar4 + 0x3c0;
  DAT_800a4924 = 0;
  DAT_800a4928 = "CD_sync";
  while( true ) {
    iVar4 = VSync(-1);
    if ((DAT_800a4920 < iVar4) ||
       (iVar4 = DAT_800a4924 + 1, bVar3 = 0x3c0000 < DAT_800a4924, DAT_800a4924 = iVar4, bVar3)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800a4928,(&PTR_s_CdlSync_8003af3c)[DAT_8003af35],
             (&PTR_s_NoIntr_8003afbc)[DAT_8003b1f4],(&PTR_s_NoIntr_8003afbc)[DAT_8003b1f5]);
      FUN_8002883c();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8003b1dc;
      while( true ) {
        uVar5 = FUN_80027904();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_8003af18 != (code *)0x0)) {
          (*DAT_8003af18)(DAT_8003b1f5,&DAT_800a4910);
        }
        if (((uVar5 & 2) != 0) && (DAT_8003af14 != (code *)0x0)) {
          (*DAT_8003af14)(DAT_8003b1f4,&DAT_800a4908);
        }
      }
      *PTR_CDROM_REG0_8003b1dc = bVar1 & 3;
    }
    uVar5 = (uint)DAT_8003b1f4;
    if ((uVar5 == 2) || (uVar5 == 5)) break;
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8003b1f4 = 2;
  puVar6 = &DAT_800a4908;
  iVar4 = 7;
  if (param_2 == (undefined1 *)0x0) {
    DAT_8003b1f4 = 2;
    return uVar5;
  }
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != -1);
  return uVar5;
}



uint FUN_800280e0(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  iVar4 = VSync(-1);
  DAT_800a4920 = iVar4 + 0x3c0;
  DAT_800a4924 = 0;
  DAT_800a4928 = "CD_ready";
  while( true ) {
    iVar4 = VSync(-1);
    if ((DAT_800a4920 < iVar4) ||
       (iVar4 = DAT_800a4924 + 1, bVar3 = 0x3c0000 < DAT_800a4924, DAT_800a4924 = iVar4, bVar3)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800a4928,(&PTR_s_CdlSync_8003af3c)[DAT_8003af35],
             (&PTR_s_NoIntr_8003afbc)[DAT_8003b1f4],(&PTR_s_NoIntr_8003afbc)[DAT_8003b1f5]);
      FUN_8002883c();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8003b1dc;
      while( true ) {
        uVar5 = FUN_80027904();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_8003af18 != (code *)0x0)) {
          (*DAT_8003af18)(DAT_8003b1f5,&DAT_800a4910);
        }
        if (((uVar5 & 2) != 0) && (DAT_8003af14 != (code *)0x0)) {
          (*DAT_8003af14)(DAT_8003b1f4,&DAT_800a4908);
        }
      }
      *PTR_CDROM_REG0_8003b1dc = bVar1 & 3;
    }
    uVar5 = (uint)DAT_8003b1f6;
    if (uVar5 != 0) break;
    uVar5 = (uint)DAT_8003b1f5;
    if (uVar5 != 0) {
      DAT_8003b1f5 = 0;
      puVar6 = &DAT_800a4910;
      iVar4 = 7;
      if (param_2 == (undefined1 *)0x0) {
        DAT_8003b1f5 = 0;
        return uVar5;
      }
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
      } while (iVar4 != -1);
      return uVar5;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_8003b1f6 = 0;
  puVar6 = &DAT_800a4918;
  if (param_2 == (undefined1 *)0x0) {
    DAT_8003b1f6 = 0;
    return uVar5;
  }
  iVar4 = 7;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != -1);
  return uVar5;
}



undefined4 FUN_800283a8(byte param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (1 < DAT_8003af20) {
    printf("%s...\n",(&PTR_s_CdlSync_8003af3c)[param_1]);
  }
  if ((*(int *)(&DAT_8003b15c + (uint)param_1 * 4) == 0) || (param_2 != (undefined1 *)0x0)) {
    FUN_80027e60(0,0);
    if (param_1 == 2) {
      iVar7 = 0;
      puVar5 = param_2;
      do {
        (&DAT_8003af30)[iVar7] = *puVar5;
        iVar7 = iVar7 + 1;
        puVar5 = param_2 + iVar7;
      } while (iVar7 < 4);
    }
    if (param_1 == 0xe) {
      DAT_8003af34 = *param_2;
    }
    iVar7 = (uint)param_1 * 4;
    DAT_8003b1f4 = 0;
    if (*(int *)(&DAT_8003b05c + iVar7) != 0) {
      DAT_8003b1f5 = 0;
    }
    *PTR_CDROM_REG0_8003b1dc = 0;
    iVar8 = 0;
    puVar5 = param_2;
    if (0 < *(int *)(&DAT_8003b15c + iVar7)) {
      do {
        *PTR_CDROM_REG2_8003b1e4 = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < *(int *)(&DAT_8003b15c + iVar7));
    }
    DAT_8003af35 = param_1;
    *PTR_CDROM_REG1_8003b1e0 = param_1;
    uVar4 = 0;
    if (param_4 == 0) {
      iVar7 = VSync(-1);
      DAT_800a4920 = iVar7 + 0x3c0;
      DAT_800a4924 = 0;
      DAT_800a4928 = "CD_cw";
      while (DAT_8003b1f4 == 0) {
        iVar7 = VSync(-1);
        if ((DAT_800a4920 < iVar7) ||
           (iVar7 = DAT_800a4924 + 1, bVar3 = 0x3c0000 < DAT_800a4924, DAT_800a4924 = iVar7, bVar3))
        {
          puts("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800a4928,(&PTR_s_CdlSync_8003af3c)[DAT_8003af35],
                 (&PTR_s_NoIntr_8003afbc)[DAT_8003b1f4],(&PTR_s_NoIntr_8003afbc)[DAT_8003b1f5]);
          FUN_8002883c();
          iVar7 = -1;
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        iVar7 = CheckCallback();
        if (iVar7 != 0) {
          bVar1 = *PTR_CDROM_REG0_8003b1dc;
          while( true ) {
            uVar6 = FUN_80027904();
            if (uVar6 == 0) break;
            if (((uVar6 & 4) != 0) && (DAT_8003af18 != (code *)0x0)) {
              (*DAT_8003af18)(DAT_8003b1f5,&DAT_800a4910);
            }
            if (((uVar6 & 2) != 0) && (DAT_8003af14 != (code *)0x0)) {
              (*DAT_8003af14)(DAT_8003b1f4,&DAT_800a4908);
            }
          }
          *PTR_CDROM_REG0_8003b1dc = bVar1 & 3;
        }
      }
      puVar5 = &DAT_800a4908;
      iVar7 = 7;
      if (param_3 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
          *param_3 = uVar2;
          param_3 = param_3 + 1;
        } while (iVar7 != -1);
      }
      uVar4 = 0;
      if (DAT_8003b1f4 == 5) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
    if (0 < DAT_8003af20) {
      printf("%s: no param\n",(&PTR_s_CdlSync_8003af3c)[param_1]);
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}



undefined4 FUN_800287b4(undefined1 *param_1)

{
  *PTR_CDROM_REG0_8003b1dc = 2;
  *PTR_CDROM_REG2_8003b1e4 = *param_1;
  *PTR_CDROM_REG3_8003b1e8 = param_1[1];
  *PTR_CDROM_REG0_8003b1dc = 3;
  *PTR_CDROM_REG1_8003b1e0 = param_1[2];
  *PTR_CDROM_REG2_8003b1e4 = param_1[3];
  *PTR_CDROM_REG3_8003b1e8 = 0x20;
  return 0;
}



void FUN_8002883c(void)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8003b1dc = 1;
  bVar1 = *PTR_CDROM_REG3_8003b1e8;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_8003b1dc = 1;
    *PTR_CDROM_REG3_8003b1e8 = 7;
    *PTR_CDROM_REG2_8003b1e4 = 7;
    bVar1 = *PTR_CDROM_REG3_8003b1e8;
  }
  DAT_8003b1f6 = 0;
  DAT_8003b1f5 = 0;
  DAT_8003b1f4 = 2;
  *PTR_CDROM_REG0_8003b1dc = 0;
  *PTR_CDROM_REG3_8003b1e8 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_8003b1ec = 0x1325;
  return;
}



undefined4 FUN_80028910(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8003b1f0;
  if ((*(short *)(PTR_VOICE_00_LEFT_RIGHT_8003b1f0 + 0x1b8) == 0) &&
     (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8003b1f0 + 0x1ba) == 0)) {
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8003b1f0 + 0x180) = 0x3fff;
    *(undefined2 *)(puVar1 + 0x182) = 0x3fff;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8003b1f0;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8003b1f0 + 0x1b0) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(puVar1 + 0x1aa) = 0xc001;
  *PTR_CDROM_REG0_8003b1dc = 2;
  *PTR_CDROM_REG2_8003b1e4 = 0x80;
  *PTR_CDROM_REG3_8003b1e8 = 0;
  *PTR_CDROM_REG0_8003b1dc = 3;
  *PTR_CDROM_REG1_8003b1e0 = 0x80;
  *PTR_CDROM_REG2_8003b1e4 = 0;
  *PTR_CDROM_REG3_8003b1e8 = 0x20;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_80028a00(void)

{
  DAT_8003af18 = 0;
  DAT_8003af14 = 0;
  DAT_8003af28 = 0;
  _DAT_8003af24 = 0;
  ResetCallback();
  InterruptCallback(2,&LAB_80028f8c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_80028a4c(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("CD_init:");
  printf("addr=%08x\n",&PTR_DAT_8003b1f8);
  DAT_8003af35 = 0;
  DAT_8003af34 = 0;
  DAT_8003af18 = 0;
  DAT_8003af14 = 0;
  DAT_8003af28 = 0;
  _DAT_8003af24 = 0;
  ResetCallback();
  InterruptCallback(2,&LAB_80028f8c);
  *PTR_CDROM_REG0_8003b1dc = 1;
  bVar1 = *PTR_CDROM_REG3_8003b1e8;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_8003b1dc = 1;
    *PTR_CDROM_REG3_8003b1e8 = 7;
    *PTR_CDROM_REG2_8003b1e4 = 7;
    bVar1 = *PTR_CDROM_REG3_8003b1e8;
  }
  DAT_8003b1f6 = 0;
  DAT_8003b1f5 = 0;
  DAT_8003b1f4 = 2;
  *PTR_CDROM_REG0_8003b1dc = 0;
  *PTR_CDROM_REG3_8003b1e8 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_8003b1ec = 0x1325;
  FUN_800283a8(1,0,0,0);
  if ((_DAT_8003af24 & 0x10) != 0) {
    FUN_800283a8(1,0,0,0);
  }
  iVar2 = FUN_800283a8(10,0,0,0);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    iVar2 = FUN_800283a8(0xc,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_80027e60(0,0);
      uVar3 = 0xffffffff;
      if (iVar2 == 2) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



undefined4 FUN_80028c2c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  DAT_800a4920 = iVar2 + 0x3c0;
  DAT_800a4924 = 0;
  DAT_800a4928 = "CD_datasync";
  do {
    iVar2 = VSync(-1);
    if ((DAT_800a4920 < iVar2) ||
       (iVar2 = DAT_800a4924 + 1, bVar1 = 0x3c0000 < DAT_800a4924, DAT_800a4924 = iVar2, bVar1)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800a4928,(&PTR_s_CdlSync_8003af3c)[DAT_8003af35],
             (&PTR_s_NoIntr_8003afbc)[DAT_8003b1f4],(&PTR_s_NoIntr_8003afbc)[DAT_8003b1f5]);
      FUN_8002883c();
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = 0xffffffff;
  } while (((iVar2 == 0) && (uVar3 = 0, (*(uint *)PTR_DMA_CDROM_CHCR_8003b220 & 0x1000000) != 0)) &&
          (uVar3 = 1, param_1 == 0));
  return uVar3;
}



undefined4 CD_getsector(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  *PTR_CDROM_REG0_8003b1dc = 0;
  *PTR_CDROM_REG3_8003b1e8 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8003b210 = 0x20943;
  *(undefined4 *)PTR_COMMON_DELAY_8003b1ec = 0x1323;
  *(uint *)PTR_DMA_DPCR_8003b214 = *(uint *)PTR_DMA_DPCR_8003b214 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8003b218 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8003b21c = param_2 | 0x10000;
  do {
  } while ((*PTR_CDROM_REG0_8003b1dc & 0x40) == 0);
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8003b220 = 0x11000000;
  uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8003b220;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_8003b220;
  }
  *(undefined4 *)PTR_COMMON_DELAY_8003b1ec = 0x1325;
  return 0;
}



undefined4 FUN_80028e94(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_8003b1dc = 0;
  *PTR_CDROM_REG3_8003b1e8 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_8003b210 = 0x21020843;
  *(undefined4 *)PTR_COMMON_DELAY_8003b1ec = 0x1325;
  *(uint *)PTR_DMA_DPCR_8003b214 = *(uint *)PTR_DMA_DPCR_8003b214 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_8003b218 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_8003b21c = param_2 | 0x10000;
  bVar1 = *PTR_CDROM_REG0_8003b1dc;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_8003b1dc;
  }
  *(undefined4 *)PTR_DMA_CDROM_CHCR_8003b220 = 0x11400100;
  return 0;
}



CdlFILE * CdSearchFile(CdlFILE *_30,char *name)

{
  char cVar1;
  bool bVar2;
  u_char uVar3;
  u_char uVar4;
  u_char uVar5;
  u_char uVar6;
  char cVar7;
  int iVar8;
  CdlFILE *pCVar9;
  undefined2 *puVar10;
  int iVar11;
  CdlLOC CVar12;
  CdlLOC CVar13;
  char *pcVar14;
  CdlLOC *pCVar15;
  char *pcVar16;
  int iVar17;
  char local_40 [32];
  
  if (DAT_8003b230 != DAT_8003af2c) {
    iVar8 = ISO9660_OBJ_2F8();
    if (iVar8 == 0) {
      return (CdlFILE *)0x0;
    }
    DAT_8003b230 = DAT_8003af2c;
  }
  if (*name != '\\') {
    pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
    return pCVar9;
  }
  local_40[0] = '\0';
  iVar8 = 1;
  iVar17 = 0;
  pcVar14 = name;
  do {
    cVar7 = *pcVar14;
    cVar1 = *pcVar14;
    pcVar16 = local_40;
    if (cVar7 != '\\') {
      do {
        bVar2 = iVar17 < 8;
        if (cVar1 == '\0') goto ISO9660_OBJ_10C;
        pcVar14 = pcVar14 + 1;
        *pcVar16 = cVar1;
        cVar1 = *pcVar14;
        pcVar16 = pcVar16 + 1;
      } while (*pcVar14 != '\\');
      cVar7 = *pcVar14;
    }
    bVar2 = iVar17 < 8;
    if (cVar7 == '\0') goto ISO9660_OBJ_10C;
    pcVar14 = pcVar14 + 1;
    *pcVar16 = '\0';
    iVar8 = ISO9660_OBJ_5BC(iVar8,local_40);
    if (iVar8 == -1) {
      local_40[0] = '\0';
      pCVar9 = (CdlFILE *)ISO9660_OBJ_108();
      return pCVar9;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 8);
  bVar2 = iVar17 < 8;
ISO9660_OBJ_10C:
  if (bVar2) {
    if (local_40[0] == '\0') {
      if (0 < DAT_8003af20) {
        pCVar9 = (CdlFILE *)ISO9660_OBJ_2A4("%s: dir was not found\n",name);
        return pCVar9;
      }
    }
    else {
      *pcVar16 = '\0';
      iVar8 = ISO9660_OBJ_660();
      if (iVar8 == 0) {
        if (0 < DAT_8003af20) {
          printf("CdSearchFile: disc error\n");
          pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
          return pCVar9;
        }
      }
      else {
        if (1 < DAT_8003af20) {
          printf("CdSearchFile: searching %s...\n",local_40);
        }
        iVar17 = 0;
        puVar10 = &DAT_800a4948;
        pCVar15 = (CdlLOC *)&DAT_800a4940;
        iVar8 = 0;
        do {
          if (*(char *)((int)&DAT_800a4948 + iVar8) == '\0') break;
          iVar11 = ISO9660_OBJ_2D8(puVar10,local_40);
          if (iVar11 != 0) {
            if (1 < DAT_8003af20) {
              printf("%s:  found\n",local_40);
            }
            CVar12 = pCVar15[1];
            uVar3 = pCVar15[2].minute;
            uVar4 = pCVar15[2].second;
            uVar5 = pCVar15[2].sector;
            uVar6 = pCVar15[2].track;
            CVar13 = pCVar15[3];
            _30->pos = *pCVar15;
            _30->size = (u_long)CVar12;
            _30->name[0] = uVar3;
            _30->name[1] = uVar4;
            _30->name[2] = uVar5;
            _30->name[3] = uVar6;
            *(CdlLOC *)(_30->name + 4) = CVar13;
            CVar12 = pCVar15[5];
            *(CdlLOC *)(_30->name + 8) = pCVar15[4];
            *(CdlLOC *)(_30->name + 0xc) = CVar12;
            pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
            return pCVar9;
          }
          pCVar15 = pCVar15 + 6;
          puVar10 = puVar10 + 0xc;
          iVar17 = iVar17 + 1;
          iVar8 = iVar8 + 0x18;
        } while (iVar17 < 0x40);
        if (0 < DAT_8003af20) {
          printf("%s: not found\n",local_40);
        }
      }
    }
  }
  else if (0 < DAT_8003af20) {
    printf("%s: path level (%d) error\n",name,iVar17);
    pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
    return pCVar9;
  }
  return (CdlFILE *)0x0;
}



undefined4 ISO9660_OBJ_108(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *unaff_s1;
  int unaff_s2;
  int iVar8;
  undefined4 *unaff_s6;
  char in_stack_00000010;
  
  if (unaff_s2 < 8) {
    if (in_stack_00000010 == '\0') {
      if (0 < DAT_8003af20) {
        uVar1 = ISO9660_OBJ_2A4("%s: dir was not found\n");
        return uVar1;
      }
    }
    else {
      *unaff_s1 = 0;
      iVar2 = ISO9660_OBJ_660();
      if (iVar2 == 0) {
        if (0 < DAT_8003af20) {
          printf("CdSearchFile: disc error\n");
          uVar1 = ISO9660_OBJ_2B0();
          return uVar1;
        }
      }
      else {
        if (1 < DAT_8003af20) {
          printf("CdSearchFile: searching %s...\n",&stack0x00000010);
        }
        iVar8 = 0;
        puVar3 = &DAT_800a4948;
        puVar7 = &DAT_800a4940;
        iVar2 = 0;
        do {
          if (*(char *)((int)&DAT_800a4948 + iVar2) == '\0') break;
          iVar4 = ISO9660_OBJ_2D8(puVar3,&stack0x00000010);
          if (iVar4 != 0) {
            if (1 < DAT_8003af20) {
              printf("%s:  found\n",&stack0x00000010);
            }
            uVar1 = puVar7[1];
            uVar5 = puVar7[2];
            uVar6 = puVar7[3];
            *unaff_s6 = *puVar7;
            unaff_s6[1] = uVar1;
            unaff_s6[2] = uVar5;
            unaff_s6[3] = uVar6;
            uVar1 = puVar7[5];
            unaff_s6[4] = puVar7[4];
            unaff_s6[5] = uVar1;
            uVar1 = ISO9660_OBJ_2B0();
            return uVar1;
          }
          puVar7 = puVar7 + 6;
          puVar3 = puVar3 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 0x18;
        } while (iVar8 < 0x40);
        if (0 < DAT_8003af20) {
          printf("%s: not found\n",&stack0x00000010);
        }
      }
    }
  }
  else if (0 < DAT_8003af20) {
    printf("%s: path level (%d) error\n");
    uVar1 = ISO9660_OBJ_2B0();
    return uVar1;
  }
  return 0;
}



undefined4 ISO9660_OBJ_2A4(char *param_1)

{
  printf(param_1);
  return 0;
}



void ISO9660_OBJ_2B0(void)

{
  return;
}



bool ISO9660_OBJ_2D8(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,0xc);
  return iVar1 == 0;
}



undefined4 ISO9660_OBJ_2F8(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uchar *puVar6;
  int iVar7;
  
  pbVar5 = &DAT_800a6540;
  iVar2 = ISO9660_OBJ_8FC(1,0x10,&DAT_800a6540);
  if (iVar2 == 1) {
    iVar2 = strncmp(&DAT_800a6541,"CD001",5);
    uVar4 = DAT_800a65cc;
    if (iVar2 == 0) {
      iVar2 = ISO9660_OBJ_8FC(1,DAT_800a65cc,&DAT_800a6540);
      if (iVar2 == 1) {
        if (1 < DAT_8003af20) {
          printf("CD_newmedia: sarching dir..\n");
        }
        iVar2 = 0;
        do {
          iVar7 = iVar2;
          if (*pbVar5 == 0) break;
          (&DAT_800a4f48)[iVar2 * 0xb] = *(undefined4 *)(pbVar5 + 2);
          puVar6 = &DAT_800a4f4c + iVar2 * 0x2c;
          bVar1 = pbVar5[6];
          iVar7 = iVar2 + 1;
          (&DAT_800a4f40)[iVar2 * 0xb] = iVar7;
          (&DAT_800a4f44)[iVar2 * 0xb] = (uint)bVar1;
          memcpy(puVar6,pbVar5 + 8,(uint)*pbVar5);
          puVar6[*pbVar5] = '\0';
          pbVar5 = pbVar5 + (uint)*pbVar5 + (*pbVar5 & 1) + 8;
          if (1 < DAT_8003af20) {
            printf("\t%08x,%04x,%04x,%s\n",(&DAT_800a4f48)[iVar2 * 0xb],(&DAT_800a4f40)[iVar2 * 0xb]
                   ,(&DAT_800a4f44)[iVar2 * 0xb],puVar6);
          }
          if (0x7f < iVar7) goto ISO9660_OBJ_564;
          iVar2 = iVar7;
        } while (pbVar5 < &DAT_800a6d40);
        if (iVar7 < 0x80) {
          (&DAT_800a4f44)[iVar7 * 0xb] = 0;
        }
ISO9660_OBJ_564:
        DAT_8003b22c = 0;
        uVar3 = 1;
        if (1 < DAT_8003af20) {
          printf("CD_newmedia: %d dir entries found\n",iVar7);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
        if (0 < DAT_8003af20) {
          printf("CD_newmedia: Read error (PT:%08x)\n",uVar4);
          uVar4 = ISO9660_OBJ_594();
          return uVar4;
        }
      }
    }
    else {
      uVar3 = 0;
      if (0 < DAT_8003af20) {
        printf("CD_newmedia: Disc format error in cd_read(PVD)\n");
        uVar4 = ISO9660_OBJ_594();
        return uVar4;
      }
    }
  }
  else {
    uVar3 = 0;
    if (0 < DAT_8003af20) {
      printf("CD_newmedia: Read error in cd_read(PVD)\n");
      uVar4 = ISO9660_OBJ_594();
      return uVar4;
    }
  }
  return uVar3;
}



void ISO9660_OBJ_594(void)

{
  return;
}



undefined4 ISO9660_OBJ_5BC(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  pcVar5 = &DAT_800a4f4c;
  iVar4 = 0;
  while( true ) {
    if (*(int *)((int)&DAT_800a4f44 + iVar4) == 0) {
      return 0xffffffff;
    }
    if ((*(int *)((int)&DAT_800a4f44 + iVar4) == param_1) &&
       (iVar1 = strcmp(param_2,pcVar5), iVar1 == 0)) break;
    pcVar5 = pcVar5 + 0x2c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (0x7f < iVar3) {
      return 0xffffffff;
    }
  }
  uVar2 = ISO9660_OBJ_640();
  return uVar2;
}



void ISO9660_OBJ_640(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x800297fc)
// WARNING: Removing unreachable block (ram,0x80029804)
// WARNING: Removing unreachable block (ram,0x8002981c)

undefined4 ISO9660_OBJ_660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != DAT_8003b22c) {
    iVar1 = ISO9660_OBJ_8FC(1,*(undefined4 *)(&DAT_800a4f1c + param_1 * 0x2c),&DAT_800a6540);
    if (iVar1 != 1) {
      if (DAT_8003af20 < 1) {
        return 0xffffffff;
      }
      printf("CD_cachefile: dir not found\n");
      uVar2 = ISO9660_OBJ_8D4();
      return uVar2;
    }
    if (1 < DAT_8003af20) {
      printf("CD_cachefile: searching...\n");
    }
    if (DAT_800a6540 != '\0') {
      FUN_80027780(DAT_800a6542,&DAT_800a4940);
      DAT_800a4944 = DAT_800a654a;
      DAT_800a4948 = 0x2e;
      uVar2 = ISO9660_OBJ_7F0();
      return uVar2;
    }
    DAT_800a4948 = DAT_800a4948 & 0xff00;
    if (DAT_8003af20 < 2) {
      DAT_8003b22c = param_1;
      return 1;
    }
    DAT_8003b22c = param_1;
    printf("CD_cachefile: %d files found\n",0);
  }
                    // WARNING: Read-only address (ram,0x800a6540) is written
                    // WARNING: Read-only address (ram,0x800a6542) is written
                    // WARNING: Read-only address (ram,0x800a654a) is written
  return 1;
}



undefined4 ISO9660_OBJ_7D4(uchar *param_1)

{
  undefined4 uVar1;
  byte *unaff_s0;
  byte *pbVar2;
  int unaff_s1;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  
  memcpy(param_1,unaff_s0 + 0x21,(uint)unaff_s0[0x20]);
  *(undefined1 *)(unaff_s3 + (uint)unaff_s0[0x20]) = 0;
  if (1 < DAT_8003af20) {
    printf("\t(%02x:%02x:%02x) %8d %s\n",(uint)*(byte *)((int)&DAT_800a4940 + unaff_s1),
           (uint)*(byte *)((int)&DAT_800a4940 + unaff_s1 + 1),
           (uint)*(byte *)((int)&DAT_800a4940 + unaff_s1 + 2));
  }
  iVar3 = unaff_s2 + 1;
  pbVar2 = unaff_s0 + *unaff_s0;
  if (((0x3f < iVar3) || (&UNK_800a6d3f < pbVar2)) || (*pbVar2 == 0)) {
    DAT_8003b22c = unaff_s6;
    if (iVar3 < 0x40) {
      *(undefined1 *)(&DAT_800a4948 + iVar3 * 0xc) = 0;
    }
    if (1 < DAT_8003af20) {
      printf("CD_cachefile: %d files found\n",iVar3);
    }
    return 1;
  }
  FUN_80027780(*(undefined4 *)(pbVar2 + 2),unaff_s4 + 0x18);
  *(undefined4 *)(unaff_s1 + unaff_s5 + 0x1c) = *(undefined4 *)(pbVar2 + 10);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_s5 + 8) = 0x2e;
    uVar1 = ISO9660_OBJ_7F0();
    return uVar1;
  }
  if (iVar3 != 1) {
    uVar1 = ISO9660_OBJ_7D4();
    return uVar1;
  }
  *(undefined2 *)(unaff_s5 + 0x20) = 0x2e2e;
  *(undefined1 *)(unaff_s5 + 0x22) = 0;
  uVar1 = ISO9660_OBJ_7F0(unaff_s3 + 0x18);
  return uVar1;
}



undefined4 ISO9660_OBJ_7F0(void)

{
  undefined4 uVar1;
  byte *unaff_s0;
  byte *pbVar2;
  int unaff_s1;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  
  if (1 < DAT_8003af20) {
    printf("\t(%02x:%02x:%02x) %8d %s\n",(uint)*(byte *)((int)&DAT_800a4940 + unaff_s1),
           (uint)*(byte *)((int)&DAT_800a4940 + unaff_s1 + 1),
           (uint)*(byte *)((int)&DAT_800a4940 + unaff_s1 + 2));
  }
  iVar3 = unaff_s2 + 1;
  pbVar2 = unaff_s0 + *unaff_s0;
  if (((0x3f < iVar3) || (&UNK_800a6d3f < pbVar2)) || (*pbVar2 == 0)) {
    DAT_8003b22c = unaff_s6;
    if (iVar3 < 0x40) {
      *(undefined1 *)(&DAT_800a4948 + iVar3 * 0xc) = 0;
    }
    if (1 < DAT_8003af20) {
      printf("CD_cachefile: %d files found\n",iVar3);
    }
    return 1;
  }
  FUN_80027780(*(undefined4 *)(pbVar2 + 2),unaff_s4 + 0x18);
  *(undefined4 *)(unaff_s1 + unaff_s5 + 0x1c) = *(undefined4 *)(pbVar2 + 10);
  if (iVar3 == 0) {
    *(undefined2 *)(unaff_s5 + 8) = 0x2e;
    uVar1 = ISO9660_OBJ_7F0();
    return uVar1;
  }
  if (iVar3 != 1) {
    uVar1 = ISO9660_OBJ_7D4();
    return uVar1;
  }
  *(undefined2 *)(unaff_s5 + 0x20) = 0x2e2e;
  *(undefined1 *)(unaff_s5 + 0x22) = 0;
  uVar1 = ISO9660_OBJ_7F0(unaff_s3 + 0x18);
  return uVar1;
}



void ISO9660_OBJ_8D4(void)

{
  return;
}



bool ISO9660_OBJ_8FC(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  FUN_80027780(param_2,auStack_18);
  FUN_80027320(2,auStack_18,0);
  FUN_80029f84(param_1,param_3,0x80);
  iVar1 = FUN_8002a084(0,0);
  return iVar1 == 0;
}



undefined4 FUN_80029d00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  CdlLOC *p;
  uint uVar4;
  undefined1 local_18 [8];
  
  FUN_800272f8(0);
  FUN_8002730c(0);
  if ((DAT_8003b270 & 1) != 0) {
    FUN_8002773c(0);
  }
  uVar1 = FUN_80027174();
  if ((uVar1 & 0x10) == 0) {
    if (param_1 != 0) {
      puts("CdRead: retry...\n");
      FUN_80027320(9,0,0);
      uVar2 = FUN_800271a4();
      iVar3 = FUN_80027320(2,uVar2,0);
      if (iVar3 == 0) {
        DAT_8003b254 = 0xffffffff;
        return 0xffffffff;
      }
    }
    FUN_8002721c();
    local_18[0] = (undefined1)DAT_8003b24c;
    uVar4 = DAT_8003b24c & 0xff;
    uVar1 = FUN_80027184();
    if (((uVar4 == uVar1) && (param_1 == 0)) || (iVar3 = FUN_80027320(0xe,local_18,0), iVar3 != 0))
    {
      p = (CdlLOC *)FUN_800271a4();
      DAT_8003b260 = CdPosToInt(p);
      FUN_8002730c(&LAB_800299d4);
      if ((DAT_8003b270 & 1) != 0) {
        FUN_8002773c(&LAB_80029c34);
      }
      DAT_8003b248 = DAT_8003b244;
      FUN_8002745c(6,0);
      DAT_8003b254 = DAT_8003b240;
      DAT_8003b258 = VSync(-1);
    }
    else {
      DAT_8003b254 = 0xffffffff;
    }
  }
  else {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      puts("CdRead: Shell open...\n");
    }
    FUN_8002745c(1,0);
    DAT_8003b25c = VSync(-1);
    DAT_8003b254 = 0xffffffff;
  }
  return DAT_8003b254;
}



bool FUN_80029f84(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 & 0x30) == 0) {
    DAT_8003b250 = 0x200;
  }
  else if ((param_3 & 0x30) == 0x20) {
    DAT_8003b250 = 0x249;
  }
  else {
    DAT_8003b250 = 0x246;
  }
  DAT_8003b24c = param_3 | 0x20;
  DAT_8003b240 = param_1;
  DAT_8003b244 = param_2;
  DAT_8003b264 = FUN_800272f8(0);
  DAT_8003b268 = FUN_8002730c(0);
  if ((DAT_8003b270 & 1) != 0) {
    DAT_8003b26c = FUN_8002773c(0);
  }
  DAT_8003b25c = VSync(-1);
  uVar1 = FUN_80027174();
  if ((uVar1 & 0xe0) != 0) {
    FUN_80027590(9,0,0);
  }
  iVar2 = FUN_80029d00(0);
  return 0 < iVar2;
}



int FUN_8002a084(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = VSync(-1);
    iVar2 = -1;
    if ((iVar1 <= DAT_8003b25c + 0x4b0) &&
       ((DAT_8003b254 < 0 || (iVar1 = VSync(-1), iVar2 = DAT_8003b254, DAT_8003b258 + 0x3c < iVar1))
       )) {
      FUN_80029d00(1);
      iVar2 = DAT_8003b240;
    }
  } while ((param_1 == 0) && (0 < iVar2));
  FUN_800272d8(1,param_2);
  return iVar2;
}



undefined4 FUN_8002a14c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8003b23c;
  DAT_8003b23c = param_1;
  return uVar1;
}



undefined4 FUN_8002a160(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8003b270;
  DAT_8003b270 = param_1;
  return uVar1;
}



int CdRead2(long mode)

{
  int iVar1;
  undefined1 local_10 [8];
  
  local_10[0] = (undefined1)mode;
  FUN_80027320(0xe,local_10,0);
  if ((mode & 0x100U) != 0) {
    if ((mode & 0x20U) != 0) {
      DAT_800a4938 = 0;
      iVar1 = CDREAD2_OBJ_4C();
      return iVar1;
    }
    DAT_800a4938 = 1;
    FUN_8002773c(data_ready_callback);
    FUN_8002730c(CDREAD2_OBJ_84);
  }
  iVar1 = FUN_80027320(0x1b,0,0);
  return iVar1;
}



void CDREAD2_OBJ_4C(void)

{
  FUN_8002773c(data_ready_callback);
  FUN_8002730c(CDREAD2_OBJ_84);
  FUN_80027320(0x1b,0,0);
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void CDREAD2_OBJ_84(void)

{
  StCdInterrupt();
  return;
}



void FUN_8002a508(void)

{
  DAT_8003b414 = 0;
  if ((&DAT_8003b280)[DAT_8003b410] == 0) {
    if (DAT_8003b418 == 0) {
      DAT_8003b410 = -1;
    }
    else {
      DAT_8003b410 = 0;
    }
  }
  if (-1 < DAT_8003b410) {
    DAT_8003b27c = DAT_8003b27c + 1;
    if (DAT_800a6ed0 < (int)(&DAT_8003b280)[DAT_8003b410]) {
      printf("%d: track overflow\n");
      (&DAT_8003b280)[DAT_8003b410] = DAT_800a6ed0;
    }
    FUN_80027320(3,&DAT_800a6d40 + (&DAT_8003b280)[DAT_8003b410] * 4,0);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void StClearRing(void)

{
  DAT_800a48ec = 0;
  DAT_800a48e8 = 0;
  DAT_800a48e4 = 0;
  DAT_800a48dc = 0;
  init_ring_status(0,DAT_800a4904);
  DAT_800a48cc = 0;
  DAT_800a48c4 = 0;
  DAT_800a48c0 = 0;
  return;
}



void data_ready_callback(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(DAT_800a4900 + DAT_800a48e8 * 0x20);
  *puVar1 = 2;
  DAT_800a6ee0 = *(undefined4 *)(puVar1 + 0xe);
  DAT_800a6ee4 = *(undefined4 *)(puVar1 + 4);
  DAT_800a48e8 = DAT_800a48e4;
  if (DAT_800a6ef0 != (code *)0x0) {
    (*DAT_800a6ef0)();
  }
  DAT_800a48dc = 0;
  return;
}



int StGetBackloc(CdlLOC *loc)

{
  int iVar1;
  
  if (DAT_800a4938 == 0) {
    iVar1 = CdPosToInt((CdlLOC *)&DAT_800a6ee0);
    FUN_80027780(iVar1 + 1,loc);
    iVar1 = C_004_OBJ_D4();
    return iVar1;
  }
  return -1;
}



void C_004_OBJ_D4(void)

{
  return;
}



void StSetStream(u_long mode,u_long start_frame,u_long end_frame,func1 *func1,func2 *func2)

{
  FUN_8002aa34(1);
  DAT_800a48f0 = 0;
  DAT_800a6ef0 = func1;
  DAT_800a48c8 = mode & 1;
  DAT_800a48d8 = 0;
  DAT_800a48d0 = 0;
  DAT_800a48c4 = 0;
  DAT_800a48c0 = 0;
  DAT_800a6ef4 = func2;
  return;
}



u_long StFreeRing(u_long *base)

{
  int iVar1;
  u_long uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar1 = ((int)base - (DAT_800a4900 + DAT_800a4904 * 0x20) >> 2) / 0x1f8;
  psVar5 = (short *)(DAT_800a4900 + iVar1 * 0x20);
  uVar2 = 1;
  if (*psVar5 == 4) {
    iVar3 = (int)psVar5[3];
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar6 + iVar1;
        iVar6 = iVar6 + 1;
        *(undefined2 *)(DAT_800a4900 + iVar4 * 0x20) = 0;
      } while (iVar6 < iVar3);
    }
    DAT_800a48ec = iVar6 + iVar1;
    uVar2 = 0;
  }
  return uVar2;
}



void init_ring_status(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(DAT_800a4900 + iVar1 * 0x20) = 0;
    } while (uVar2 < param_2);
  }
  return;
}



u_long StGetNext(u_long **addr,u_long **header)

{
  bool bVar1;
  u_long *puVar2;
  
  puVar2 = (u_long *)(DAT_800a4900 + DAT_800a48ec * 0x20);
  if ((short)*puVar2 == 1) {
    DAT_800a48ec = 0;
    if (DAT_800a48f4 != 0) {
      *(short *)puVar2 = 0;
    }
    puVar2 = (u_long *)(DAT_800a4900 + DAT_800a48ec * 0x20);
  }
  bVar1 = (short)*puVar2 != 2;
  if (!bVar1) {
    *(short *)puVar2 = 4;
    *addr = (u_long *)(DAT_800a4900 + DAT_800a4904 * 0x20 + DAT_800a48ec * 0x7e0);
    *header = puVar2;
  }
  return (uint)bVar1;
}



// Possible C_010.OBJ/StSetMask

void FUN_8002aa34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_800a48f8 = param_1;
  DAT_800a48d4 = param_2;
  DAT_800a48f4 = param_3;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void StCdInterrupt(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  short *psVar6;
  undefined4 local_18 [2];
  byte local_10 [8];
  
  if (DAT_800a48dc != 1) {
    if ((DAT_800a48c8 != 0) && ((*(uint *)PTR_DMA_MDEC_OUT_CHCR_8003b4bc & 0x1000000) != 0)) {
      DAT_800a48cc = 1;
      if (DAT_800a48f0 != 0) {
        DAT_800a48e0 = DAT_800a48e0 + 1;
      }
      DAT_8003b4e4 = 1;
      C_011_OBJ_90C();
      return;
    }
    iVar2 = FUN_800272d8(1,local_10);
    if (iVar2 != 5) {
      if ((local_10[0] & 4) != 0) {
        DAT_8003b4e4 = 3;
        C_011_OBJ_90C();
        return;
      }
      DAT_800a6ef8 = DAT_800a4900 + DAT_800a48e4 * 0x10;
      if (*DAT_800a6ef8 != 0) {
        if (DAT_800a48f0 != 0) {
          DAT_800a48e0 = DAT_800a48e0 + 1;
        }
        DAT_8003b4e4 = 4;
        C_011_OBJ_90C();
        return;
      }
      *PTR_CDROM_REG0_8003b49c = 0;
      *PTR_CDROM_REG3_8003b4a8 = 0;
      *PTR_CDROM_REG0_8003b49c = 0;
      *PTR_CDROM_REG3_8003b4a8 = 0x80;
      *(undefined4 *)PTR_CDROM_DELAY_8003b4ac = 0x20943;
      *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1323;
      uVar5 = 0;
      if (DAT_800a4938 == 0) {
        do {
          puVar4 = (undefined1 *)((int)local_18 + uVar5);
          uVar5 = uVar5 + 1;
          *puVar4 = *PTR_CDROM_REG2_8003b4a4;
        } while (uVar5 < 4);
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
      }
      if (DAT_800a48f0 != 0) {
        C_011_OBJ_91C(DAT_800a6ef8,DAT_800a48f0 + DAT_800a48e0 * 0x800,8,0);
        C_011_OBJ_258();
        return;
      }
      C_011_OBJ_948(3,DAT_800a6ef8,0,8,0x11000000,0,0);
      puVar1 = PTR_CDROM_DELAY_8003b4ac;
      uVar5 = *(uint *)PTR_DMA_CDROM_CHCR_8003b4cc;
      while ((uVar5 & 0x1000000) != 0) {
        uVar5 = *(uint *)PTR_DMA_CDROM_CHCR_8003b4cc;
      }
      *(undefined4 *)(DAT_800a6ef8 + 0xe) = local_18[0];
      *(undefined4 *)puVar1 = 0x20843;
      *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
      if ((DAT_800a48f8 == 1) && (DAT_800a48d4 != 0)) {
        if (DAT_800a48d4 != (ushort)DAT_800a6ef8[4]) {
          *DAT_800a6ef8 = 0;
          if (DAT_800a48f0 == 0) {
            return;
          }
          DAT_800a48e0 = DAT_800a48e0 + 1;
          C_011_OBJ_90C();
          return;
        }
        DAT_800a48f8 = 0;
      }
      if ((*DAT_800a6ef8 != 0x160) || (((ushort)DAT_800a6ef8[1] >> 10 & 0x1f) != DAT_800a48d8)) {
        if (DAT_800a48f0 != 0) {
          DAT_800a48e0 = 0;
          C_011_OBJ_3AC();
          return;
        }
        DAT_8003b4e4 = 5;
        *DAT_800a6ef8 = 0;
        C_011_OBJ_90C();
        return;
      }
      if (((int)DAT_800a48c4 != (uint)(ushort)DAT_800a6ef8[2]) ||
         ((DAT_800a48c0 != 0 && (DAT_800a48c0 != (ushort)DAT_800a6ef8[4])))) {
        DAT_800a48c0 = 0;
        DAT_800a48c4 = 0;
        init_ring_status(DAT_800a48e8,DAT_800a48e4 - DAT_800a48e8);
        DAT_800a48e4 = DAT_800a48e8;
        *DAT_800a6ef8 = 0;
        if (DAT_800a48f0 != 0) {
          DAT_800a48e0 = DAT_800a48e0 + 1;
        }
        DAT_8003b4e4 = 6;
        C_011_OBJ_90C();
        return;
      }
      if (DAT_800a6ef8[2] == 0) {
        DAT_800a48c0 = (uint)(ushort)DAT_800a6ef8[4];
        DAT_800a48c4 = 0;
        if ((DAT_800a48f4 != 0) && (DAT_800a48f4 <= DAT_800a48c0)) {
          DAT_800a48c0 = 0;
          DAT_800a48c4 = 0;
          init_ring_status(DAT_800a48e8,DAT_800a48e4 - DAT_800a48e8);
          DAT_800a48e4 = DAT_800a48e8;
          *DAT_800a6ef8 = 0;
          DAT_800a48f8 = 1;
          if (DAT_800a6ef4 != (code *)0x0) {
            (*DAT_800a6ef4)();
          }
          if (DAT_800a48f0 != 0) {
            DAT_800a48e0 = DAT_800a48e0 + 1;
          }
          DAT_8003b4e4 = 7;
          C_011_OBJ_90C();
          return;
        }
        if ((DAT_800a4904 - DAT_800a48e4) - 1U < (uint)(ushort)DAT_800a6ef8[3]) {
          if (DAT_800a48f4 == 0) {
            *DAT_800a6ef8 = 1;
            DAT_800a48f8 = 1;
            if (DAT_800a6ef4 != (code *)0x0) {
              (*DAT_800a6ef4)();
            }
            if (DAT_800a48f0 != 0) {
              DAT_800a48e0 = DAT_800a48e0 + 1;
            }
            DAT_8003b4e4 = 8;
            C_011_OBJ_90C();
            return;
          }
          if (*DAT_800a4900 != 0) {
            *DAT_800a6ef8 = 0;
            if (DAT_800a48f0 != 0) {
              DAT_800a48e0 = DAT_800a48e0 + 1;
            }
            DAT_8003b4e4 = 9;
            C_011_OBJ_90C();
            return;
          }
          *DAT_800a6ef8 = 1;
          uVar5 = 0;
          DAT_800a48e4 = 0;
          psVar6 = DAT_800a4900;
          do {
            uVar3 = *(undefined4 *)DAT_800a6ef8;
            DAT_800a6ef8 = DAT_800a6ef8 + 2;
            uVar5 = uVar5 + 1;
            *(undefined4 *)psVar6 = uVar3;
            psVar6 = psVar6 + 2;
          } while (uVar5 < 8);
          DAT_800a6ef8 = DAT_800a4900;
        }
        DAT_800a48e8 = DAT_800a48e4;
      }
      DAT_8003b4e4 = 10;
      DAT_800a48c4 = DAT_800a48c4 + 1;
      DAT_800a48fc = DAT_800a4900 + DAT_800a4904 * 0x10 + DAT_800a48e4 * 0x3f0;
      if (DAT_800a48c8 != 0) {
        *(undefined4 *)PTR_CDROM_DELAY_8003b4ac = 0x20943;
        *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1323;
        C_011_OBJ_778();
        return;
      }
      *(undefined4 *)PTR_CDROM_DELAY_8003b4ac = 0x21020843;
      if ((ushort)DAT_800a6ef8[3] - 1 == (uint)(ushort)DAT_800a6ef8[2]) {
        DAT_800a48dc = 1;
        if (DAT_800a48f0 != 0) {
          C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,1);
          DAT_800a48e0 = DAT_800a48e0 + 1;
          C_011_OBJ_814();
          return;
        }
        C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8,0x11400100,1,0);
        DAT_800a48c4 = 0;
        DAT_800a48c0 = 0;
        DAT_800a48d8 = DAT_800a48d0;
        C_011_OBJ_8B0();
        return;
      }
      if (DAT_800a48f0 != 0) {
        C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,0);
        DAT_800a48e0 = DAT_800a48e0 + 1;
        C_011_OBJ_8B0();
        return;
      }
      C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8,0x11400100,0,0);
      *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
      *DAT_800a6ef8 = 3;
      DAT_800a48e4 = DAT_800a48e4 + 1;
      if ((DAT_800a48f0 != 0) && (DAT_800a48dc != 0)) {
        data_ready_callback();
      }
    }
  }
  return;
}



void C_011_OBJ_258(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 in_stack_00000028;
  
  puVar1 = PTR_CDROM_DELAY_8003b4ac;
  uVar2 = *(uint *)PTR_DMA_CDROM_CHCR_8003b4cc;
  while ((uVar2 & 0x1000000) != 0) {
    uVar2 = *(uint *)PTR_DMA_CDROM_CHCR_8003b4cc;
  }
  *(undefined4 *)(DAT_800a6ef8 + 0xe) = in_stack_00000028;
  *(undefined4 *)puVar1 = 0x20843;
  *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
  if ((DAT_800a48f8 == 1) && (DAT_800a48d4 != 0)) {
    if (DAT_800a48d4 != (ushort)DAT_800a6ef8[4]) {
      *DAT_800a6ef8 = 0;
      if (DAT_800a48f0 == 0) {
        return;
      }
      DAT_800a48e0 = DAT_800a48e0 + 1;
      C_011_OBJ_90C();
      return;
    }
    DAT_800a48f8 = 0;
  }
  if ((*DAT_800a6ef8 != 0x160) || (((ushort)DAT_800a6ef8[1] >> 10 & 0x1f) != DAT_800a48d8)) {
    if (DAT_800a48f0 == 0) {
      DAT_8003b4e4 = 5;
      *DAT_800a6ef8 = 0;
      C_011_OBJ_90C();
      return;
    }
    DAT_800a48e0 = 0;
    C_011_OBJ_3AC();
    return;
  }
  if (((int)DAT_800a48c4 != (uint)(ushort)DAT_800a6ef8[2]) ||
     ((DAT_800a48c0 != 0 && (DAT_800a48c0 != (ushort)DAT_800a6ef8[4])))) {
    DAT_800a48c0 = 0;
    DAT_800a48c4 = 0;
    init_ring_status(DAT_800a48e8,DAT_800a48e4 - DAT_800a48e8);
    DAT_800a48e4 = DAT_800a48e8;
    *DAT_800a6ef8 = 0;
    if (DAT_800a48f0 != 0) {
      DAT_800a48e0 = DAT_800a48e0 + 1;
    }
    DAT_8003b4e4 = 6;
    C_011_OBJ_90C();
    return;
  }
  if (DAT_800a6ef8[2] == 0) {
    DAT_800a48c0 = (uint)(ushort)DAT_800a6ef8[4];
    DAT_800a48c4 = 0;
    if ((DAT_800a48f4 != 0) && (DAT_800a48f4 <= DAT_800a48c0)) {
      DAT_800a48c0 = 0;
      DAT_800a48c4 = 0;
      init_ring_status(DAT_800a48e8,DAT_800a48e4 - DAT_800a48e8);
      DAT_800a48e4 = DAT_800a48e8;
      *DAT_800a6ef8 = 0;
      DAT_800a48f8 = 1;
      if (DAT_800a6ef4 != (code *)0x0) {
        (*DAT_800a6ef4)();
      }
      if (DAT_800a48f0 != 0) {
        DAT_800a48e0 = DAT_800a48e0 + 1;
      }
      DAT_8003b4e4 = 7;
      C_011_OBJ_90C();
      return;
    }
    if ((DAT_800a4904 - DAT_800a48e4) - 1U < (uint)(ushort)DAT_800a6ef8[3]) {
      if (DAT_800a48f4 == 0) {
        *DAT_800a6ef8 = 1;
        DAT_800a48f8 = 1;
        if (DAT_800a6ef4 != (code *)0x0) {
          (*DAT_800a6ef4)();
        }
        if (DAT_800a48f0 != 0) {
          DAT_800a48e0 = DAT_800a48e0 + 1;
        }
        DAT_8003b4e4 = 8;
        C_011_OBJ_90C();
        return;
      }
      if (*DAT_800a4900 != 0) {
        *DAT_800a6ef8 = 0;
        if (DAT_800a48f0 != 0) {
          DAT_800a48e0 = DAT_800a48e0 + 1;
        }
        DAT_8003b4e4 = 9;
        C_011_OBJ_90C();
        return;
      }
      *DAT_800a6ef8 = 1;
      uVar2 = 0;
      DAT_800a48e4 = 0;
      psVar4 = DAT_800a4900;
      do {
        uVar3 = *(undefined4 *)DAT_800a6ef8;
        DAT_800a6ef8 = DAT_800a6ef8 + 2;
        uVar2 = uVar2 + 1;
        *(undefined4 *)psVar4 = uVar3;
        psVar4 = psVar4 + 2;
      } while (uVar2 < 8);
      DAT_800a6ef8 = DAT_800a4900;
    }
    DAT_800a48e8 = DAT_800a48e4;
  }
  DAT_8003b4e4 = 10;
  DAT_800a48c4 = DAT_800a48c4 + 1;
  DAT_800a48fc = DAT_800a4900 + DAT_800a4904 * 0x10 + DAT_800a48e4 * 0x3f0;
  if (DAT_800a48c8 != 0) {
    *(undefined4 *)PTR_CDROM_DELAY_8003b4ac = 0x20943;
    *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1323;
    C_011_OBJ_778();
    return;
  }
  *(undefined4 *)PTR_CDROM_DELAY_8003b4ac = 0x21020843;
  if ((ushort)DAT_800a6ef8[3] - 1 != (uint)(ushort)DAT_800a6ef8[2]) {
    if (DAT_800a48f0 == 0) {
      C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8);
      *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
      *DAT_800a6ef8 = 3;
      DAT_800a48e4 = DAT_800a48e4 + 1;
      if ((DAT_800a48f0 != 0) && (DAT_800a48dc != 0)) {
        data_ready_callback();
      }
      return;
    }
    C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,0);
    DAT_800a48e0 = DAT_800a48e0 + 1;
    C_011_OBJ_8B0();
    return;
  }
  DAT_800a48dc = 1;
  if (DAT_800a48f0 == 0) {
    C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8);
    DAT_800a48c4 = 0;
    DAT_800a48c0 = 0;
    DAT_800a48d8 = DAT_800a48d0;
    C_011_OBJ_8B0();
    return;
  }
  C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,1);
  DAT_800a48e0 = DAT_800a48e0 + 1;
  C_011_OBJ_814();
  return;
}



void C_011_OBJ_3AC(void)

{
  DAT_8003b4e4 = 5;
  *DAT_800a6ef8 = 0;
  C_011_OBJ_90C();
  return;
}



void C_011_OBJ_778(void)

{
  if ((ushort)DAT_800a6ef8[3] - 1 != (uint)(ushort)DAT_800a6ef8[2]) {
    if (DAT_800a48f0 != 0) {
      C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,0);
      DAT_800a48e0 = DAT_800a48e0 + 1;
      C_011_OBJ_8B0();
      return;
    }
    C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8);
    *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
    *DAT_800a6ef8 = 3;
    DAT_800a48e4 = DAT_800a48e4 + 1;
    if ((DAT_800a48f0 != 0) && (DAT_800a48dc != 0)) {
      data_ready_callback();
    }
    return;
  }
  DAT_800a48dc = 1;
  if (DAT_800a48f0 != 0) {
    C_011_OBJ_91C(DAT_800a48fc,DAT_800a48f0 + DAT_800a48e0 * 0x800 + 0x20,0x1f8,1);
    DAT_800a48e0 = DAT_800a48e0 + 1;
    C_011_OBJ_814();
    return;
  }
  C_011_OBJ_948(3,DAT_800a48fc,0,0x1f8);
  DAT_800a48c4 = 0;
  DAT_800a48c0 = 0;
  DAT_800a48d8 = DAT_800a48d0;
  C_011_OBJ_8B0();
  return;
}



void C_011_OBJ_814(void)

{
  DAT_800a48c4 = 0;
  DAT_800a48c0 = 0;
  DAT_800a48d8 = DAT_800a48d0;
  C_011_OBJ_8B0();
  return;
}



void C_011_OBJ_8B0(void)

{
  *(undefined4 *)PTR_COMMON_DELAY_8003b4b0 = 0x1325;
  *DAT_800a6ef8 = 3;
  DAT_800a48e4 = DAT_800a48e4 + 1;
  if ((DAT_800a48f0 != 0) && (DAT_800a48dc != 0)) {
    data_ready_callback();
  }
  return;
}



void C_011_OBJ_90C(void)

{
  return;
}



void C_011_OBJ_91C(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void C_011_OBJ_948(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  while ((uVar2 & 0x1000000) != 0) {
    if (iVar3 == 0x10000) {
      printf("DMA STATUS ERROR %x\n",(&DMA_MDEC_IN_CHCR)[param_1 * 4]);
      C_011_OBJ_9C4();
      return;
    }
    iVar3 = iVar3 + 1;
    uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  }
  if (param_6 != '\x01') {
    PTR_DMA_DICR_8003b4b8[2] = PTR_DMA_DICR_8003b4b8[2] & ~(byte)(1 << (param_1 & 0x1f));
    *(uint *)PTR_DMA_DPCR_8003b4b4 = *(uint *)PTR_DMA_DPCR_8003b4b4 | 1 << (param_1 * 4 + 3 & 0x1f);
    (&DMA_MDEC_IN_MADR)[param_1 * 4] = param_2;
    (&DMA_MDEC_IN_BCR)[param_1 * 4] = param_3 << 0x10 | param_4;
    bVar1 = *PTR_CDROM_REG0_8003b49c;
    while ((bVar1 & 0x40) == 0) {
      bVar1 = *PTR_CDROM_REG0_8003b49c;
    }
    (&DMA_MDEC_IN_CHCR)[param_1 * 4] = param_5;
    return;
  }
  C_011_OBJ_A20(PTR_DMA_DICR_8003b4b8[2]);
  return;
}



void C_011_OBJ_9C4(void)

{
  byte bVar1;
  int in_v0;
  uint unaff_s0;
  int unaff_s1;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword in_stack_00000040;
  
  if (unaff_s1 != in_v0) {
    PTR_DMA_DICR_8003b4b8[2] = PTR_DMA_DICR_8003b4b8[2] & ~(byte)(in_v0 << (unaff_s0 & 0x1f));
    *(uint *)PTR_DMA_DPCR_8003b4b4 = *(uint *)PTR_DMA_DPCR_8003b4b4 | 1 << (unaff_s0 * 4 + 3 & 0x1f)
    ;
    (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
    (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
    bVar1 = *PTR_CDROM_REG0_8003b49c;
    while ((bVar1 & 0x40) == 0) {
      bVar1 = *PTR_CDROM_REG0_8003b49c;
    }
    (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = in_stack_00000040;
    return;
  }
  C_011_OBJ_A20(PTR_DMA_DICR_8003b4b8[2]);
  return;
}



void C_011_OBJ_A20(void)

{
  byte bVar1;
  undefined1 in_v0;
  int in_v1;
  int unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword in_stack_00000040;
  
  *(undefined1 *)(in_v1 + 2) = in_v0;
  *(uint *)PTR_DMA_DPCR_8003b4b4 = *(uint *)PTR_DMA_DPCR_8003b4b4 | 1 << (unaff_s0 * 4 + 3U & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  bVar1 = *PTR_CDROM_REG0_8003b49c;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_8003b49c;
  }
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = in_stack_00000040;
  return;
}



int rsin(int a)

{
  int iVar1;
  
  if (-1 < a) {
    sin_1(a & 0xfff);
    iVar1 = GEO_00_OBJ_2C();
    return iVar1;
  }
  iVar1 = sin_1(-a & 0xfff);
  return -iVar1;
}



void GEO_00_OBJ_2C(void)

{
  return;
}



int sin_1(int param_1)

{
  int iVar1;
  
  if (0x800 < param_1) {
    if (0xc00 < param_1) {
      iVar1 = GEO_00_OBJ_C4();
      return iVar1;
    }
    return -(int)*(short *)(&DAT_8003a4ec + param_1 * 2);
  }
  if (param_1 < 0x401) {
    iVar1 = GEO_00_OBJ_C4();
    return iVar1;
  }
  iVar1 = GEO_00_OBJ_C4();
  return iVar1;
}



void GEO_00_OBJ_C4(void)

{
  return;
}



int rcos(int a)

{
  int iVar1;
  uint uVar2;
  
  if (a < 0) {
    a = -a;
  }
  uVar2 = a & 0xfff;
  if (uVar2 < 0x801) {
    if (uVar2 < 0x401) {
      iVar1 = GEO_01_OBJ_98();
      return iVar1;
    }
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  if (0xc00 < uVar2) {
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  return -(int)*(short *)(&DAT_8003b4ec + (0xc00 - uVar2) * 2);
}



void GEO_01_OBJ_98(void)

{
  return;
}



void SetFogNear(long a,long h)

{
  if (h == 0) {
    trap(0x1c00);
  }
  if ((h == -1) && (a * -0x140 == -0x80000000)) {
    trap(0x1800);
  }
  FUN_8002c98c((a * -0x140) / h);
  FUN_8002c998(0x1400000);
  return;
}



int ccos(int a)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_10 [4];
  uint local_c;
  
  if (a < 0) {
    a = -a;
  }
  iVar1 = a;
  if (a < 0) {
    iVar1 = a + 0xfff;
  }
  uVar3 = a + (iVar1 >> 0xc) * -0x1000;
  if (uVar3 < 0x400) {
    csincos(uVar3,auStack_10,&local_c);
    iVar1 = COR_02_OBJ_B4();
    return iVar1;
  }
  if (uVar3 - 0x400 < 0x400) {
    iVar1 = COR_02_OBJ_78(0x7ff - uVar3);
    return iVar1;
  }
  if (uVar3 - 0x800 < 0x400) {
    csincos(uVar3 - 0x800,auStack_10,&local_c);
    iVar1 = COR_02_OBJ_B4();
    return iVar1;
  }
  uVar2 = (uint)(uVar3 - 0xc00 < 0x400);
  if (uVar2 != 0) {
    csincos(0xfff - uVar3,auStack_10,&local_c);
    uVar2 = local_c;
  }
  return uVar2;
}



void COR_02_OBJ_78(undefined4 param_1)

{
  csincos(param_1,&stack0x00000010,&stack0x00000014);
  COR_02_OBJ_B4();
  return;
}



void COR_02_OBJ_B4(void)

{
  return;
}



void csincos(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_60 [6];
  int iStack_48;
  int local_40 [6];
  int iStack_28;
  int local_20 [6];
  int iStack_8;
  
  piVar1 = local_60;
  uVar2 = 0;
  piVar5 = local_20;
  piVar4 = &DAT_8003bcfc;
  piVar3 = local_40;
  local_60[0] = 0x9b7;
  local_40[0] = 0;
  local_20[0] = param_1;
  do {
    piVar5 = piVar5 + 1;
    piVar3 = piVar3 + 1;
    if (-1 < piVar1[0x10]) {
      piVar1[1] = *piVar1 - (piVar1[8] >> (uVar2 & 0x1f));
      *piVar3 = piVar1[8] + (*piVar1 >> (uVar2 & 0x1f));
      COR_01_OBJ_AC();
      return;
    }
    piVar1[1] = *piVar1 + (piVar1[8] >> (uVar2 & 0x1f));
    *piVar3 = piVar1[8] - (*piVar1 >> (uVar2 & 0x1f));
    *piVar5 = piVar1[0x10] + *piVar4;
    piVar4 = piVar4 + 1;
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 6);
  *param_3 = iStack_48 - (iStack_8 * iStack_28 >> 0xc);
  *param_2 = iStack_28 + (iStack_8 * iStack_48 >> 0xc);
  return;
}



void COR_01_OBJ_AC(undefined4 param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                  undefined4 param_6,int param_7)

{
  int in_v0;
  int *piVar1;
  uint in_t0;
  int *in_t1;
  int *in_t2;
  int *in_t3;
  int in_stack_00000038;
  int in_stack_00000058;
  
  while( true ) {
    *in_t3 = in_v0;
    in_t3 = in_t3 + 1;
    in_t2 = in_t2 + 1;
    in_t1 = in_t1 + 1;
    in_t0 = in_t0 + 1;
    piVar1 = param_4 + 1;
    if (5 < (int)in_t0) {
      *param_3 = param_7 - (in_stack_00000058 * in_stack_00000038 >> 0xc);
      *param_2 = in_stack_00000038 + (in_stack_00000058 * param_7 >> 0xc);
      return;
    }
    if (-1 < param_4[0x11]) break;
    param_4[2] = *piVar1 + (param_4[9] >> (in_t0 & 0x1f));
    *in_t1 = param_4[9] - (*piVar1 >> (in_t0 & 0x1f));
    in_v0 = param_4[0x11] + *in_t2;
    param_4 = piVar1;
  }
  param_4[2] = *piVar1 - (param_4[9] >> (in_t0 & 0x1f));
  *in_t1 = param_4[9] + (*piVar1 >> (in_t0 & 0x1f));
  COR_01_OBJ_AC();
  return;
}



uint csin_1(uint param_1)

{
  uint uVar1;
  int local_10;
  undefined1 auStack_c [4];
  
  if (0x3ff < param_1) {
    if (0x3ff < param_1 - 0x400) {
      if (param_1 - 0x800 < 0x400) {
        csincos(param_1 - 0x800,&local_10,auStack_c);
        uVar1 = COR_03_OBJ_90();
        return uVar1;
      }
      uVar1 = (uint)(param_1 - 0xc00 < 0x400);
      if (uVar1 != 0) {
        csincos(0xfff - param_1,&local_10,auStack_c);
        uVar1 = -local_10;
      }
      return uVar1;
    }
    param_1 = 0x7ff - param_1;
  }
  csincos(param_1,&local_10,auStack_c);
  uVar1 = COR_03_OBJ_90();
  return uVar1;
}



void COR_03_OBJ_90(void)

{
  return;
}



int csin(int a)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_a1;
  int local_10;
  undefined1 auStack_c [4];
  
  if (-1 < a) {
    uVar3 = a + (a >> 0xc) * -0x1000;
    if (0x3ff < uVar3) {
      if (0x3ff < uVar3 - 0x400) {
        uVar4 = uVar3 - 0x800;
        if (0x3ff < uVar4) {
          if (0x3ff < uVar3 - 0xc00) {
            return in_a1;
          }
          uVar4 = 0xfff - uVar3;
        }
        csincos(uVar4,&local_10,auStack_c);
        return -local_10;
      }
      uVar3 = 0x7ff - uVar3;
    }
    csincos(uVar3,&local_10,auStack_c);
    iVar2 = COR_03_OBJ_1C8();
    return iVar2;
  }
  iVar2 = -a;
  iVar1 = iVar2;
  if (0 < a) {
    iVar1 = iVar2 + 0xfff;
  }
  uVar3 = iVar2 + (iVar1 >> 0xc) * -0x1000;
  if (uVar3 < 0x400) {
COR_03_OBJ_EC:
    csincos(uVar3,&local_10,auStack_c);
    iVar2 = COR_03_OBJ_1C8();
    return iVar2;
  }
  if (uVar3 - 0x400 < 0x400) {
    uVar3 = 0x7ff - uVar3;
    goto COR_03_OBJ_EC;
  }
  uVar4 = uVar3 - 0x800;
  if (0x3ff < uVar4) {
    if (0x3ff < uVar3 - 0xc00) goto COR_03_OBJ_140;
    uVar4 = 0xfff - uVar3;
  }
  csincos(uVar4,&local_10,auStack_c);
COR_03_OBJ_140:
  iVar2 = COR_03_OBJ_1C8();
  return iVar2;
}



void COR_03_OBJ_1C8(void)

{
  return;
}



uint FUN_8002bafc(void)

{
  undefined4 unaff_retaddr;
  
  DAT_8003bd1c = unaff_retaddr;
  _patch_gte();
  setCopReg(0,Status,Status | 0x40000000,0);
  gte_ldZSF3(0x155);
  gte_ldZSF4(0x100);
  gte_ldH(1000);
  gte_ldDQA(0xffffef9e);
  gte_ldDQB(0x1400000);
  gte_ldOFX(0);
  gte_ldOFY(0);
  return Status | 0x40000000;
}



// WARNING: Instruction at (ram,0x8002bbcc) overlaps instruction at (ram,0x8002bbc8)
// 

long SquareRoot0(long a)

{
  uint uVar1;
  int iVar2;
  
  gte_ldLZCS(a);
  uVar1 = gte_stLZCR();
  if (uVar1 != 0x20) {
    uVar1 = uVar1 & 0xfffffffe;
    if ((int)(uVar1 - 0x18) < 0) {
      iVar2 = a >> (0x18 - uVar1 & 0x1f);
    }
    else {
      iVar2 = a << (uVar1 - 0x18 & 0x1f);
    }
    return (uint)((int)*(short *)(&DAT_8003bd2c + (iVar2 + -0x40) * 2) <<
                 ((int)(0x1f - uVar1) >> 1 & 0x1fU)) >> 0xc;
  }
  return 0;
}



// WARNING: Instruction at (ram,0x8002bc64) overlaps instruction at (ram,0x8002bc60)
// 

void InvSquareRoot(long a,long *b,long *c)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  gte_ldLZCS(a);
  uVar2 = gte_stLZCR();
  if ((uVar2 != 0x20) && (uVar2 != 0)) {
    uVar2 = uVar2 & 0xfffffffe;
    if ((int)(uVar2 - 0x18) < 0) {
      iVar3 = a >> (0x18 - uVar2 & 0x1f);
    }
    else {
      iVar3 = a << (uVar2 - 0x18 & 0x1f);
    }
    sVar1 = *(short *)(&DAT_8003bec0 + (iVar3 + -0x40) * 2);
    *c = (int)(0x1f - uVar2) >> 1;
    *b = (int)sVar1;
    return;
  }
  return;
}



long VectorNormalS(VECTOR *_2,SVECTOR *_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar2 = (short)_2->vx;
  sVar3 = (short)_2->vy;
  sVar4 = (short)_2->vz;
  lVar1 = MSC02_OBJ_100();
  _3->vx = sVar2;
  _3->vy = sVar3;
  _3->vz = sVar4;
  return lVar1;
}



long VectorNormal(VECTOR *_2,VECTOR *_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = _2->vx;
  lVar3 = _2->vy;
  lVar4 = _2->vz;
  lVar1 = MSC02_OBJ_100();
  _3->vx = lVar2;
  _3->vy = lVar3;
  _3->vz = lVar4;
  return lVar1;
}



long VectorNormalSS(SVECTOR *_2,SVECTOR *_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar2 = _2->vx;
  sVar3 = _2->vy;
  sVar4 = _2->vz;
  lVar1 = MSC02_OBJ_100();
  _3->vx = sVar2;
  _3->vy = sVar3;
  _3->vz = sVar4;
  return lVar1;
}



void MSC02_OBJ_100(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  int in_t3;
  uint uVar3;
  int in_t4;
  int in_t5;
  
  gte_ldsv_(in_t0,in_t1,in_t2);
  gte_sqr0_b(0);
  read_mt(in_t3,in_t4,in_t5);
  iVar1 = in_t3 + in_t4 + in_t5;
  gte_ldLZCS(iVar1);
  uVar2 = gte_stLZCR();
  uVar3 = (uVar2 & 0xfffffffe) - 0x18;
  if ((int)uVar3 < 0) {
    iVar1 = iVar1 >> (0x18 - (uVar2 & 0xfffffffe) & 0x1f);
  }
  else {
    iVar1 = iVar1 << (uVar3 & 0x1f);
  }
  gte_ldIR0((int)*(short *)(&DAT_8003bec0 + (iVar1 + -0x40) * 2));
  gte_ldsv_(in_t0,in_t1,in_t2);
  gte_gpf0(0);
  read_mt(in_t0,in_t1,in_t2);
  return;
}



void MatrixNormal(MATRIX *m,MATRIX *n)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 in_t7;
  undefined4 in_t8;
  undefined4 in_t9;
  
  iVar6 = (int)m->m[0][0];
  iVar9 = (int)m->m[0][1];
  iVar12 = (int)m->m[0][2];
  iVar13 = (int)m->m[1][0];
  iVar14 = (int)m->m[1][1];
  iVar15 = (int)m->m[1][2];
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR22R23();
  uVar3 = gte_stR33();
  gte_ldR11R12(iVar6);
  gte_ldR22R23(iVar9);
  gte_ldR33(iVar12);
  gte_ldIR3(iVar15);
  gte_ldIR1(iVar13);
  gte_ldIR2(iVar14);
  gte_op12_b();
  read_mt(in_t7,in_t8,in_t9);
  gte_ldR11R12(iVar13);
  gte_ldR22R23(iVar14);
  gte_ldR33(iVar15);
  gte_op12_b();
  gte_ldVXY0(iVar13);
  gte_ldVZ0(iVar14);
  gte_ldVXY1(iVar15);
  read_mt(iVar6,iVar9,iVar12);
  gte_ldR11R12(uVar1);
  gte_ldR22R23(uVar2);
  gte_ldR33(uVar3);
  MSC02_OBJ_100(m,n,uVar3);
  sVar11 = (short)in_t9;
  sVar8 = (short)in_t8;
  sVar5 = (short)in_t7;
  n->m[0][0] = (short)iVar6;
  n->m[0][1] = (short)iVar9;
  n->m[0][2] = (short)iVar12;
  uVar1 = gte_stVXY0();
  sVar4 = (short)uVar1;
  uVar1 = gte_stVZ0();
  sVar7 = (short)uVar1;
  uVar1 = gte_stVXY1();
  sVar10 = (short)uVar1;
  MSC02_OBJ_100();
  n->m[1][0] = sVar4;
  n->m[1][1] = sVar7;
  n->m[1][2] = sVar10;
  MSC02_OBJ_100();
  n->m[2][0] = sVar5;
  n->m[2][1] = sVar8;
  n->m[2][2] = sVar11;
  return;
}



MATRIX * MulMatrix0(MATRIX *m0,MATRIX *m1,MATRIX *m2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m[0]);
  gte_ldR13R21(*(undefined4 *)(m0->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0][0] | *(uint *)(m1->m[0] + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m2->m[0] = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m2->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m2->m[0] + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m2->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m2;
}



VECTOR * ApplyMatrixLV(MATRIX *m,VECTOR *_2,VECTOR *_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m->m[0]);
  gte_ldR13R21(*(undefined4 *)(m->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m->m[2]);
  gte_ldR33(*(undefined4 *)(m->m[2] + 2));
  uVar1 = _2->vx;
  uVar2 = _2->vy;
  uVar3 = _2->vz;
  if ((int)uVar1 < 0) {
    iVar4 = -((int)-uVar1 >> 0xf);
    uVar1 = -(-uVar1 & 0x7fff);
  }
  else {
    iVar4 = (int)uVar1 >> 0xf;
    uVar1 = uVar1 & 0x7fff;
  }
  if ((int)uVar2 < 0) {
    iVar5 = -((int)-uVar2 >> 0xf);
    uVar2 = -(-uVar2 & 0x7fff);
  }
  else {
    iVar5 = (int)uVar2 >> 0xf;
    uVar2 = uVar2 & 0x7fff;
  }
  if ((int)uVar3 < 0) {
    iVar6 = -((int)-uVar3 >> 0xf);
    uVar3 = -(-uVar3 & 0x7fff);
  }
  else {
    iVar6 = (int)uVar3 >> 0xf;
    uVar3 = uVar3 & 0x7fff;
  }
  gte_ldsv_(iVar4,iVar5,iVar6);
  gte_rtir_sf0_b();
  read_mt(iVar4,iVar5,iVar6);
  gte_ldsv_(uVar1,uVar2,uVar3);
  gte_rtir_b();
  if (iVar4 < 0) {
    iVar4 = iVar4 * 8;
  }
  else {
    iVar4 = iVar4 << 3;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 * 8;
  }
  else {
    iVar5 = iVar5 << 3;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 * 8;
  }
  else {
    iVar6 = iVar6 << 3;
  }
  read_mt(uVar1,uVar2,uVar3);
  _3->vx = uVar1 + iVar4;
  _3->vy = uVar2 + iVar5;
  _3->vz = uVar3 + iVar6;
  return _3;
}



undefined4 FUN_8002c134(undefined4 *param_1,VECTOR *param_2,undefined4 param_3)

{
  gte_ldVXY0(*param_1);
  gte_ldVZ0(param_1[1]);
  gte_rtv0_b();
  gte_stlvl(param_2);
  return param_3;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PushMatrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  if (0x27f < DAT_8003c058) {
    DAT_8003c04c = unaff_retaddr;
    printf(s_Error__Can_t_push_matrix_stack_m_8003c2dc);
    return;
  }
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR13R21();
  *(undefined4 *)(&DAT_8003c05c + DAT_8003c058) = uVar1;
  *(undefined4 *)(&DAT_8003c060 + DAT_8003c058) = uVar2;
  uVar1 = gte_stR22R23();
  uVar2 = gte_stR31R32();
  *(undefined4 *)(&DAT_8003c064 + DAT_8003c058) = uVar1;
  *(undefined4 *)(&DAT_8003c068 + DAT_8003c058) = uVar2;
  uVar1 = gte_stR33();
  *(undefined4 *)(&DAT_8003c06c + DAT_8003c058) = uVar1;
  uVar1 = gte_stTRX();
  uVar2 = gte_stTRY();
  uVar3 = gte_stTRZ();
  *(undefined4 *)(&DAT_8003c070 + DAT_8003c058) = uVar1;
  *(undefined4 *)(&DAT_8003c074 + DAT_8003c058) = uVar2;
  *(undefined4 *)(&DAT_8003c078 + DAT_8003c058) = uVar3;
  DAT_8003c058 = DAT_8003c058 + 0x20;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PopMatrix(void)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = DAT_8003c058;
  if (DAT_8003c058 < 1) {
    DAT_8003c04c = unaff_retaddr;
    printf(s_Error__Can_t_pop_matrix_stack_is_8003c30d);
    return;
  }
  DAT_8003c058 = DAT_8003c058 + -0x20;
  gte_ldR11R12(*(undefined4 *)(&DAT_8003c03c + iVar1));
  gte_ldR13R21(*(undefined4 *)(&DAT_8003c040 + iVar1));
  gte_ldR22R23(*(undefined4 *)(&DAT_8003c044 + iVar1));
  gte_ldR31R32(*(undefined4 *)(&DAT_8003c048 + iVar1));
  gte_ldR33(*(undefined4 *)((int)&DAT_8003c04c + iVar1));
  gte_ldtr(*(undefined4 *)(&DAT_8003c050 + iVar1),*(undefined4 *)(&DAT_8003c054 + iVar1),
           *(undefined4 *)((int)&DAT_8003c058 + iVar1));
  return;
}



VECTOR * ApplyRotMatrixLV(VECTOR *_2,VECTOR *_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = _2->vx;
  uVar2 = _2->vy;
  uVar3 = _2->vz;
  if ((int)uVar1 < 0) {
    iVar4 = -((int)-uVar1 >> 0xf);
    uVar1 = -(-uVar1 & 0x7fff);
  }
  else {
    iVar4 = (int)uVar1 >> 0xf;
    uVar1 = uVar1 & 0x7fff;
  }
  if ((int)uVar2 < 0) {
    iVar5 = -((int)-uVar2 >> 0xf);
    uVar2 = -(-uVar2 & 0x7fff);
  }
  else {
    iVar5 = (int)uVar2 >> 0xf;
    uVar2 = uVar2 & 0x7fff;
  }
  if ((int)uVar3 < 0) {
    iVar6 = -((int)-uVar3 >> 0xf);
    uVar3 = -(-uVar3 & 0x7fff);
  }
  else {
    iVar6 = (int)uVar3 >> 0xf;
    uVar3 = uVar3 & 0x7fff;
  }
  gte_ldsv_(iVar4,iVar5,iVar6);
  gte_rtir_sf0_b();
  read_mt(iVar4,iVar5,iVar6);
  gte_ldsv_(uVar1,uVar2,uVar3);
  gte_rtir_b();
  if (iVar4 < 0) {
    iVar4 = iVar4 * 8;
  }
  else {
    iVar4 = iVar4 << 3;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 * 8;
  }
  else {
    iVar5 = iVar5 << 3;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 * 8;
  }
  else {
    iVar6 = iVar6 << 3;
  }
  read_mt(uVar1,uVar2,uVar3);
  _3->vx = uVar1 + iVar4;
  _3->vy = uVar2 + iVar5;
  _3->vz = uVar3 + iVar6;
  return _3;
}



MATRIX * MulMatrix(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m[0]);
  gte_ldR13R21(*(undefined4 *)(m0->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0][0] | *(uint *)(m1->m[0] + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m0->m[0] = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m0->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m0->m[0] + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m0->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m0;
}



MATRIX * MulMatrix2(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m[0]);
  gte_ldR13R21(*(undefined4 *)(m0->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0][0] | *(uint *)(m1->m[0] + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[0][2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m1->m[0] = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m1->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m1->m[0] + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m1->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m1;
}



SVECTOR * ApplyMatrixSV(MATRIX *m,SVECTOR *_2,SVECTOR *_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gte_ldR11R12(*(undefined4 *)m->m[0]);
  gte_ldR13R21(*(undefined4 *)(m->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m->m[2]);
  gte_ldR33(*(undefined4 *)(m->m[2] + 2));
  gte_ldv0(_2);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  uVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  _3->vx = (short)uVar1;
  _3->vy = (short)uVar2;
  _3->vz = (short)uVar3;
  return _3;
}



// Possible MTX_07.OBJ/TransMatrix

int FUN_8002c674(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return param_1;
}



MATRIX * ScaleMatrix(MATRIX *m,VECTOR *v)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = v->vx;
  iVar3 = v->vy;
  iVar4 = v->vz;
  iVar1 = *(int *)m->m[0];
  *(uint *)m->m[0] =
       (short)iVar1 * iVar2 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar3 >> 0xc) << 0x10;
  iVar1 = *(int *)(m->m[0] + 2);
  *(uint *)(m->m[0] + 2) =
       (short)iVar1 * iVar4 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar2 >> 0xc) << 0x10;
  iVar1 = *(int *)(m->m[1] + 1);
  *(uint *)(m->m[1] + 1) =
       (short)iVar1 * iVar3 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar4 >> 0xc) << 0x10;
  iVar1 = *(int *)m->m[2];
  *(uint *)m->m[2] =
       (short)iVar1 * iVar2 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar3 >> 0xc) << 0x10;
  *(int *)(m->m[2] + 2) = (short)*(undefined4 *)(m->m[2] + 2) * iVar4 >> 0xc;
  return m;
}



void SetRotMatrix(MATRIX *m)

{
  gte_ldR11R12(*(undefined4 *)m->m[0]);
  gte_ldR13R21(*(undefined4 *)(m->m[0] + 2));
  gte_ldR22R23(*(undefined4 *)(m->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m->m[2]);
  gte_ldR33(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetLightMatrix(MATRIX *m)

{
  gte_ldL11L12(*(undefined4 *)m->m[0]);
  gte_ldL13L21(*(undefined4 *)(m->m[0] + 2));
  gte_ldL22L23(*(undefined4 *)(m->m[1] + 1));
  gte_ldL31L32(*(undefined4 *)m->m[2]);
  gte_ldL33(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetColorMatrix(MATRIX *m)

{
  gte_ldLR1LR2(*(undefined4 *)m->m[0]);
  gte_ldLR3LG1(*(undefined4 *)(m->m[0] + 2));
  gte_ldLG2LG3(*(undefined4 *)(m->m[1] + 1));
  gte_ldLB1LB2(*(undefined4 *)m->m[2]);
  gte_ldLB3(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetTransMatrix(MATRIX *m)

{
  gte_ldtr(m->t[0],m->t[1],m->t[2]);
  return;
}



void FUN_8002c98c(undefined4 param_1)

{
  gte_ldDQA(param_1);
  return;
}



void FUN_8002c998(undefined4 param_1)

{
  gte_ldDQB(param_1);
  return;
}



void SetBackColor(long rbk,long gbk,long bbk)

{
  gte_ldbkdir(rbk << 4,gbk << 4,bbk << 4);
  return;
}



void SetFarColor(long rfc,long gfc,long bfc)

{
  gte_ldfcdir(rfc << 4,gfc << 4,bfc << 4);
  return;
}



// Possible REG12.OBJ/SetGeomOffset

void FUN_8002c9e4(int param_1,int param_2)

{
  gte_ldOFX(param_1 << 0x10);
  gte_ldOFY(param_2 << 0x10);
  return;
}



long AverageZ3(long sz0,long sz1,long sz2)

{
  long lVar1;
  
  gte_ldsz3(sz0,sz1,sz2);
  gte_avsz3_b();
  lVar1 = gte_stOTZ();
  return lVar1;
}



void FUN_8002cb58(undefined4 *param_1,VECTOR *param_2,VECTOR *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR22R23();
  uVar3 = gte_stR33();
  gte_ldR11R12(*param_1);
  gte_ldR22R23(param_1[1]);
  gte_ldR33(param_1[2]);
  gte_ldopv2(param_2);
  gte_op12_b();
  gte_stlvnl(param_3);
  gte_ldR11R12(uVar1);
  gte_ldR22R23(uVar2);
  gte_ldR33(uVar3);
  return;
}



long RotTransPers(SVECTOR *_2,long *sxy,long *p,long *flag)

{
  int iVar1;
  long lVar2;
  
  gte_ldv0(_2);
  gte_rtps_b();
  gte_stsxy(sxy);
  gte_stdp(p);
  lVar2 = gte_stFLAG();
  iVar1 = gte_stSZ3();
  *flag = lVar2;
  return iVar1 >> 2;
}



void RotTrans(SVECTOR *_2,VECTOR *_3,long *flag)

{
  long lVar1;
  
  gte_ldv0(_2);
  copFunction(2,0x480012);
  gte_stlvnl(_3);
  lVar1 = gte_stFLAG();
  *flag = lVar1;
  return;
}



long RotAverageNclip3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,long *sxy0,long *sxy1,long *sxy2,long *p,
                     long *otz,long *flag)

{
  long lVar1;
  undefined4 uVar2;
  long *r0;
  undefined1 auStackX_0 [16];
  
  gte_ldv3(_2,_3,v2);
  gte_rtpt_b();
  uVar2 = gte_stFLAG();
  **(undefined4 **)((int)register0x00000074 + 0x20) = uVar2;
  gte_nclip_b();
  r0 = *(long **)((int)register0x00000074 + 0x18);
  lVar1 = gte_stMAC0();
  if (0 < lVar1) {
    gte_stsxy3(sxy0,*(long **)((int)register0x00000074 + 0x10),
               *(long **)((int)register0x00000074 + 0x14));
    gte_stdp(r0);
    gte_avsz3_b();
    uVar2 = gte_stOTZ();
    **(undefined4 **)((int)register0x00000074 + 0x1c) = uVar2;
  }
  return lVar1;
}



MATRIX * RotMatrix(SVECTOR *r,MATRIX *m)

{
  short sVar1;
  MATRIX *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  if (r->vx < 0) {
    pMVar2 = (MATRIX *)FGO_01_OBJ_64();
    return pMVar2;
  }
  iVar6 = (int)(short)*(int *)(&DAT_8003c35c + ((int)r->vx & 0xfffU) * 4);
  iVar3 = *(int *)(&DAT_8003c35c + ((int)r->vx & 0xfffU) * 4) >> 0x10;
  if (-1 < r->vy) {
    sVar8 = (short)*(int *)(&DAT_8003c35c + ((int)r->vy & 0xfffU) * 4);
    iVar9 = -(int)sVar8;
    iVar4 = *(int *)(&DAT_8003c35c + ((int)r->vy & 0xfffU) * 4) >> 0x10;
    sVar1 = r->vz;
    m->m[0][2] = sVar8;
    m->m[1][2] = (short)(-(iVar4 * iVar6) >> 0xc);
    sVar8 = (short)(iVar4 * iVar3 >> 0xc);
    if (-1 < sVar1) {
      m->m[2][2] = sVar8;
      iVar7 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
      iVar5 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
      m->m[0][0] = (short)(iVar5 * iVar4 >> 0xc);
      m->m[0][1] = (short)(-(iVar7 * iVar4) >> 0xc);
      iVar4 = iVar5 * iVar9 >> 0xc;
      m->m[1][0] = (short)(iVar7 * iVar3 >> 0xc) - (short)(iVar4 * iVar6 >> 0xc);
      m->m[2][0] = (short)(iVar7 * iVar6 >> 0xc) + (short)(iVar4 * iVar3 >> 0xc);
      iVar9 = iVar7 * iVar9 >> 0xc;
      m->m[1][1] = (short)(iVar5 * iVar3 >> 0xc) + (short)(iVar9 * iVar6 >> 0xc);
      m->m[2][1] = (short)(iVar5 * iVar6 >> 0xc) - (short)(iVar9 * iVar3 >> 0xc);
      return m;
    }
    m->m[2][2] = sVar8;
    pMVar2 = (MATRIX *)FGO_01_OBJ_160();
    return pMVar2;
  }
  pMVar2 = (MATRIX *)FGO_01_OBJ_CC();
  return pMVar2;
}



void FGO_01_OBJ_64(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int iVar2;
  int iVar3;
  int in_t3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 2) < 0) {
    FGO_01_OBJ_CC();
    return;
  }
  sVar5 = (short)*(int *)(&DAT_8003c35c + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4);
  iVar7 = -(int)sVar5;
  iVar2 = *(int *)(&DAT_8003c35c + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4) >> 0x10;
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = sVar5;
  param_2[5] = (short)(-(iVar2 * in_t3) >> 0xc);
  uVar6 = (undefined2)(iVar2 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar6;
    iVar4 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
    iVar3 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar3 * iVar2 >> 0xc);
    param_2[1] = (short)(-(iVar4 * iVar2) >> 0xc);
    iVar2 = iVar3 * iVar7 >> 0xc;
    param_2[3] = (short)(iVar4 * in_t0 >> 0xc) - (short)(iVar2 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar4 * in_t3 >> 0xc) + (short)(iVar2 * in_t0 >> 0xc);
    iVar7 = iVar4 * iVar7 >> 0xc;
    param_2[4] = (short)(iVar3 * in_t0 >> 0xc) + (short)(iVar7 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar3 * in_t3 >> 0xc) - (short)(iVar7 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar6;
  FGO_01_OBJ_160();
  return;
}



void FGO_01_OBJ_CC(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int in_t1;
  int iVar2;
  int in_t3;
  int in_t4;
  int iVar3;
  undefined2 in_t6;
  undefined2 uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = in_t6;
  param_2[5] = (short)(-(in_t1 * in_t3) >> 0xc);
  uVar4 = (undefined2)(in_t1 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar4;
    iVar3 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar2 * in_t1 >> 0xc);
    param_2[1] = (short)(-(iVar3 * in_t1) >> 0xc);
    iVar5 = iVar2 * in_t4 >> 0xc;
    param_2[3] = (short)(iVar3 * in_t0 >> 0xc) - (short)(iVar5 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar3 * in_t3 >> 0xc) + (short)(iVar5 * in_t0 >> 0xc);
    iVar3 = iVar3 * in_t4 >> 0xc;
    param_2[4] = (short)(iVar2 * in_t0 >> 0xc) + (short)(iVar3 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar2 * in_t3 >> 0xc) - (short)(iVar3 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar4;
  FGO_01_OBJ_160();
  return;
}



void FGO_01_OBJ_160(undefined4 param_1,undefined2 *param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  int in_t5;
  int iVar1;
  
  *param_2 = (short)(in_t2 * in_t1 >> 0xc);
  param_2[1] = (short)(-(in_t5 * in_t1) >> 0xc);
  iVar1 = in_t2 * in_t4 >> 0xc;
  param_2[3] = (short)(in_t5 * in_t0 >> 0xc) - (short)(iVar1 * in_t3 >> 0xc);
  param_2[6] = (short)(in_t5 * in_t3 >> 0xc) + (short)(iVar1 * in_t0 >> 0xc);
  iVar1 = in_t5 * in_t4 >> 0xc;
  param_2[4] = (short)(in_t2 * in_t0 >> 0xc) + (short)(iVar1 * in_t3 >> 0xc);
  param_2[7] = (short)(in_t2 * in_t3 >> 0xc) - (short)(iVar1 * in_t0 >> 0xc);
  return;
}



MATRIX * RotMatrixYXZ(SVECTOR *r,MATRIX *m)

{
  short sVar1;
  MATRIX *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  
  if (r->vx < 0) {
    pMVar2 = (MATRIX *)FGO_02_OBJ_68();
    return pMVar2;
  }
  sVar9 = (short)*(int *)(&DAT_8003c35c + ((int)r->vx & 0xfffU) * 4);
  iVar3 = *(int *)(&DAT_8003c35c + ((int)r->vx & 0xfffU) * 4) >> 0x10;
  if (-1 < r->vy) {
    iVar6 = (int)(short)*(int *)(&DAT_8003c35c + ((int)r->vy & 0xfffU) * 4);
    iVar4 = *(int *)(&DAT_8003c35c + ((int)r->vy & 0xfffU) * 4) >> 0x10;
    sVar1 = r->vz;
    m->m[1][2] = -sVar9;
    m->m[0][2] = (short)(iVar6 * iVar3 >> 0xc);
    sVar8 = (short)(iVar4 * iVar3 >> 0xc);
    if (-1 < sVar1) {
      m->m[2][2] = sVar8;
      iVar7 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
      iVar5 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
      m->m[1][0] = (short)(iVar7 * iVar3 >> 0xc);
      m->m[1][1] = (short)(iVar5 * iVar3 >> 0xc);
      iVar3 = iVar6 * sVar9 >> 0xc;
      m->m[0][0] = (short)(iVar4 * iVar5 >> 0xc) + (short)(iVar3 * iVar7 >> 0xc);
      m->m[0][1] = (short)(iVar3 * iVar5 >> 0xc) - (short)(iVar4 * iVar7 >> 0xc);
      iVar3 = iVar4 * sVar9 >> 0xc;
      m->m[2][1] = (short)(iVar6 * iVar7 >> 0xc) + (short)(iVar3 * iVar5 >> 0xc);
      m->m[2][0] = (short)(iVar3 * iVar7 >> 0xc) - (short)(iVar6 * iVar5 >> 0xc);
      return m;
    }
    m->m[2][2] = sVar8;
    pMVar2 = (MATRIX *)FGO_02_OBJ_160();
    return pMVar2;
  }
  pMVar2 = (MATRIX *)FGO_02_OBJ_CC();
  return pMVar2;
}



void FGO_02_OBJ_68(int param_1,short *param_2)

{
  short sVar1;
  int in_t0;
  int iVar2;
  int iVar3;
  int in_t3;
  int iVar4;
  int iVar5;
  short in_t6;
  short sVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 2) < 0) {
    FGO_02_OBJ_CC();
    return;
  }
  iVar4 = (int)(short)*(int *)(&DAT_8003c35c + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4);
  iVar2 = *(int *)(&DAT_8003c35c + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4) >> 0x10;
  sVar1 = *(short *)(param_1 + 4);
  param_2[5] = in_t6;
  param_2[2] = (short)(iVar4 * in_t0 >> 0xc);
  sVar6 = (short)(iVar2 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = sVar6;
    iVar5 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
    iVar3 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    param_2[3] = (short)(iVar5 * in_t0 >> 0xc);
    param_2[4] = (short)(iVar3 * in_t0 >> 0xc);
    iVar7 = iVar4 * in_t3 >> 0xc;
    *param_2 = (short)(iVar2 * iVar3 >> 0xc) + (short)(iVar7 * iVar5 >> 0xc);
    param_2[1] = (short)(iVar7 * iVar3 >> 0xc) - (short)(iVar2 * iVar5 >> 0xc);
    iVar2 = iVar2 * in_t3 >> 0xc;
    param_2[7] = (short)(iVar4 * iVar5 >> 0xc) + (short)(iVar2 * iVar3 >> 0xc);
    param_2[6] = (short)(iVar2 * iVar5 >> 0xc) - (short)(iVar4 * iVar3 >> 0xc);
    return;
  }
  param_2[8] = sVar6;
  FGO_02_OBJ_160();
  return;
}



void FGO_02_OBJ_CC(int param_1,short *param_2)

{
  short sVar1;
  int in_t0;
  int in_t1;
  int iVar2;
  int in_t3;
  int in_t4;
  int iVar3;
  short in_t6;
  short sVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 4);
  param_2[5] = in_t6;
  param_2[2] = (short)(in_t4 * in_t0 >> 0xc);
  sVar4 = (short)(in_t1 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = sVar4;
    iVar3 = (int)(short)*(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8003c35c + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    param_2[3] = (short)(iVar3 * in_t0 >> 0xc);
    param_2[4] = (short)(iVar2 * in_t0 >> 0xc);
    iVar5 = in_t4 * in_t3 >> 0xc;
    *param_2 = (short)(in_t1 * iVar2 >> 0xc) + (short)(iVar5 * iVar3 >> 0xc);
    param_2[1] = (short)(iVar5 * iVar2 >> 0xc) - (short)(in_t1 * iVar3 >> 0xc);
    iVar5 = in_t1 * in_t3 >> 0xc;
    param_2[7] = (short)(in_t4 * iVar3 >> 0xc) + (short)(iVar5 * iVar2 >> 0xc);
    param_2[6] = (short)(iVar5 * iVar3 >> 0xc) - (short)(in_t4 * iVar2 >> 0xc);
    return;
  }
  param_2[8] = sVar4;
  FGO_02_OBJ_160();
  return;
}



void FGO_02_OBJ_160(undefined4 param_1,short *param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  int in_t5;
  int iVar1;
  
  param_2[3] = (short)(in_t5 * in_t0 >> 0xc);
  param_2[4] = (short)(in_t2 * in_t0 >> 0xc);
  iVar1 = in_t4 * in_t3 >> 0xc;
  *param_2 = (short)(in_t1 * in_t2 >> 0xc) + (short)(iVar1 * in_t5 >> 0xc);
  param_2[1] = (short)(iVar1 * in_t2 >> 0xc) - (short)(in_t1 * in_t5 >> 0xc);
  iVar1 = in_t1 * in_t3 >> 0xc;
  param_2[7] = (short)(in_t4 * in_t5 >> 0xc) + (short)(iVar1 * in_t2 >> 0xc);
  param_2[6] = (short)(iVar1 * in_t5 >> 0xc) - (short)(in_t4 * in_t2 >> 0xc);
  return;
}



MATRIX * RotMatrixX(long r,MATRIX *m)

{
  MATRIX *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (-1 < r) {
    iVar3 = (int)(short)*(int *)(&DAT_8003c35c + (r & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8003c35c + (r & 0xfffU) * 4) >> 0x10;
    iVar4 = (int)m->m[1][0];
    iVar7 = (int)m->m[2][0];
    iVar5 = (int)m->m[1][1];
    iVar8 = (int)m->m[2][1];
    iVar6 = (int)m->m[1][2];
    iVar9 = (int)m->m[2][2];
    m->m[1][0] = (short)(iVar2 * iVar4 - iVar3 * iVar7 >> 0xc);
    m->m[1][1] = (short)(iVar2 * iVar5 - iVar3 * iVar8 >> 0xc);
    m->m[1][2] = (short)(iVar2 * iVar6 - iVar3 * iVar9 >> 0xc);
    m->m[2][0] = (short)(iVar3 * iVar4 + iVar2 * iVar7 >> 0xc);
    m->m[2][1] = (short)(iVar3 * iVar5 + iVar2 * iVar8 >> 0xc);
    m->m[2][2] = (short)(iVar3 * iVar6 + iVar2 * iVar9 >> 0xc);
    return m;
  }
  pMVar1 = (MATRIX *)FGO_04_OBJ_64();
  return pMVar1;
}



void FGO_04_OBJ_64(undefined4 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_t0;
  int in_t1;
  
  sVar1 = *(short *)(param_2 + 6);
  sVar2 = *(short *)(param_2 + 8);
  sVar3 = *(short *)(param_2 + 10);
  *(short *)(param_2 + 6) = (short)(in_t0 * sVar1 - in_t1 * *(short *)(param_2 + 0xc) >> 0xc);
  *(short *)(param_2 + 8) = (short)(in_t0 * sVar2 - in_t1 * *(short *)(param_2 + 0xe) >> 0xc);
  *(short *)(param_2 + 10) = (short)(in_t0 * sVar3 - in_t1 * *(short *)(param_2 + 0x10) >> 0xc);
  *(short *)(param_2 + 0xc) = (short)(in_t1 * sVar1 + in_t0 * *(short *)(param_2 + 0xc) >> 0xc);
  *(short *)(param_2 + 0xe) = (short)(in_t1 * sVar2 + in_t0 * *(short *)(param_2 + 0xe) >> 0xc);
  *(short *)(param_2 + 0x10) = (short)(in_t1 * sVar3 + in_t0 * *(short *)(param_2 + 0x10) >> 0xc);
  return;
}



MATRIX * RotMatrixY(long r,MATRIX *m)

{
  int iVar1;
  MATRIX *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (-1 < r) {
    iVar1 = -(int)(short)*(int *)(&DAT_8003c35c + (r & 0xfffU) * 4);
    iVar3 = *(int *)(&DAT_8003c35c + (r & 0xfffU) * 4) >> 0x10;
    iVar4 = (int)m->m[0][0];
    iVar7 = (int)m->m[2][0];
    iVar5 = (int)m->m[0][1];
    iVar8 = (int)m->m[2][1];
    iVar6 = (int)m->m[0][2];
    iVar9 = (int)m->m[2][2];
    m->m[0][0] = (short)(iVar3 * iVar4 - iVar1 * iVar7 >> 0xc);
    m->m[0][1] = (short)(iVar3 * iVar5 - iVar1 * iVar8 >> 0xc);
    m->m[0][2] = (short)(iVar3 * iVar6 - iVar1 * iVar9 >> 0xc);
    m->m[2][0] = (short)(iVar1 * iVar4 + iVar3 * iVar7 >> 0xc);
    m->m[2][1] = (short)(iVar1 * iVar5 + iVar3 * iVar8 >> 0xc);
    m->m[2][2] = (short)(iVar1 * iVar6 + iVar3 * iVar9 >> 0xc);
    return m;
  }
  pMVar2 = (MATRIX *)FGO_05_OBJ_64();
  return pMVar2;
}



void FGO_05_OBJ_64(undefined4 param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_t0;
  int in_t1;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  sVar3 = param_2[2];
  *param_2 = (short)(in_t0 * sVar1 - in_t1 * param_2[6] >> 0xc);
  param_2[1] = (short)(in_t0 * sVar2 - in_t1 * param_2[7] >> 0xc);
  param_2[2] = (short)(in_t0 * sVar3 - in_t1 * param_2[8] >> 0xc);
  param_2[6] = (short)(in_t1 * sVar1 + in_t0 * param_2[6] >> 0xc);
  param_2[7] = (short)(in_t1 * sVar2 + in_t0 * param_2[7] >> 0xc);
  param_2[8] = (short)(in_t1 * sVar3 + in_t0 * param_2[8] >> 0xc);
  return;
}



MATRIX * RotMatrixZ(long r,MATRIX *m)

{
  MATRIX *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (-1 < r) {
    iVar3 = (int)(short)*(int *)(&DAT_8003c35c + (r & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8003c35c + (r & 0xfffU) * 4) >> 0x10;
    iVar4 = (int)m->m[0][0];
    iVar7 = (int)m->m[1][0];
    iVar5 = (int)m->m[0][1];
    iVar8 = (int)m->m[1][1];
    iVar6 = (int)m->m[0][2];
    iVar9 = (int)m->m[1][2];
    m->m[0][0] = (short)(iVar2 * iVar4 - iVar3 * iVar7 >> 0xc);
    m->m[0][1] = (short)(iVar2 * iVar5 - iVar3 * iVar8 >> 0xc);
    m->m[0][2] = (short)(iVar2 * iVar6 - iVar3 * iVar9 >> 0xc);
    m->m[1][0] = (short)(iVar3 * iVar4 + iVar2 * iVar7 >> 0xc);
    m->m[1][1] = (short)(iVar3 * iVar5 + iVar2 * iVar8 >> 0xc);
    m->m[1][2] = (short)(iVar3 * iVar6 + iVar2 * iVar9 >> 0xc);
    return m;
  }
  pMVar1 = (MATRIX *)FGO_06_OBJ_64();
  return pMVar1;
}



void FGO_06_OBJ_64(undefined4 param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int in_t0;
  int in_t1;
  
  sVar1 = *param_2;
  sVar2 = param_2[1];
  sVar3 = param_2[2];
  *param_2 = (short)(in_t0 * sVar1 - in_t1 * param_2[3] >> 0xc);
  param_2[1] = (short)(in_t0 * sVar2 - in_t1 * param_2[4] >> 0xc);
  param_2[2] = (short)(in_t0 * sVar3 - in_t1 * param_2[5] >> 0xc);
  param_2[3] = (short)(in_t1 * sVar1 + in_t0 * param_2[3] >> 0xc);
  param_2[4] = (short)(in_t1 * sVar2 + in_t0 * param_2[4] >> 0xc);
  param_2[5] = (short)(in_t1 * sVar3 + in_t0 * param_2[5] >> 0xc);
  return;
}



long ratan2(long y,long x)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  bVar1 = x < 0;
  if (bVar1) {
    x = -x;
  }
  bVar2 = y < 0;
  if (bVar2) {
    y = -y;
  }
  if ((x != 0) || (iVar3 = 0, y != 0)) {
    if (y < x) {
      iVar3 = x >> 10;
      if ((y & 0x7fe00000U) == 0) {
        if (x == 0) {
          trap(0x1c00);
        }
        if ((x == 0xffffffff) && ((y & 0x3fffffU) == 0x200000)) {
          trap(0x1800);
        }
        lVar4 = RATAN_OBJ_150();
        return lVar4;
      }
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (y == 0x80000000)) {
        trap(0x1800);
      }
      lVar4 = RATAN_OBJ_B4(y / iVar3);
      return lVar4;
    }
    iVar3 = y >> 10;
    if ((x & 0x7fe00000U) != 0) {
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (x == 0x80000000)) {
        trap(0x1800);
      }
      lVar4 = RATAN_OBJ_13C(x / iVar3);
      return lVar4;
    }
    if (y == 0) {
      trap(0x1c00);
    }
    if ((y == 0xffffffff) && (x << 10 == -0x80000000)) {
      trap(0x1800);
    }
    iVar3 = 0x400 - *(short *)(&DAT_8004035c + ((x << 10) / y) * 2);
    if (bVar1) {
      iVar3 = 0x800 - iVar3;
    }
    if (bVar2) {
      iVar3 = -iVar3;
    }
  }
  return iVar3;
}



void RATAN_OBJ_B4(void)

{
  RATAN_OBJ_150();
  return;
}



int RATAN_OBJ_13C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v0;
  int iVar1;
  
  iVar1 = 0x400 - *(short *)(&DAT_8004035c + in_v0);
  if (param_3 != 0) {
    iVar1 = 0x800 - iVar1;
  }
  if (param_4 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



int RATAN_OBJ_150(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v1;
  
  if (param_3 != 0) {
    in_v1 = 0x800 - in_v1;
  }
  if (param_4 != 0) {
    in_v1 = -in_v1;
  }
  return in_v1;
}



void _patch_gte(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  
  DAT_800a6f08 = unaff_retaddr;
  FUN_800353e4();
  iVar1 = (*(code *)&SUB_000000b0)();
  piVar2 = (int *)(*(int *)(iVar1 + 0x18) + 0x28);
  pcVar4 = PATCHGTE_OBJ_AC;
  piVar3 = piVar2;
  do {
    iVar1 = *(int *)pcVar4;
    iVar5 = *piVar3;
    pcVar4 = pcVar4 + 4;
    piVar3 = piVar3 + 1;
    if (iVar1 != iVar5) goto PATCHGTE_OBJ_88;
  } while (pcVar4 != PATCHGTE_OBJ_C4);
  pcVar4 = PATCHGTE_OBJ_C4;
  do {
    *piVar2 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    piVar2 = piVar2 + 1;
  } while (pcVar4 != PATCHGTE_OBJ_DC);
PATCHGTE_OBJ_88:
  FlushCache();
  FUN_800353f4();
  return;
}



void PATCHGTE_OBJ_AC(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                    undefined2 param_5)

{
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  int in_k0;
  undefined4 unaff_retaddr;
  
  *(undefined4 *)(in_k0 + 4) = in_at;
  *(undefined4 *)(in_k0 + 8) = in_v0;
  *(undefined4 *)(in_k0 + 0xc) = in_v1;
  *(undefined4 *)(in_k0 + 0x7c) = unaff_retaddr;
  *(undefined4 *)(in_k0 + 4) = in_at;
  *(undefined4 *)(in_k0 + 8) = in_v0;
  *(undefined4 *)(in_k0 + 0xc) = EPC;
  *(undefined4 *)(in_k0 + 0x7c) = unaff_retaddr;
  GS_001_OBJ_74(param_1,param_2,param_3,param_4,param_5);
  FUN_8002e654();
  DAT_800a6fd4 = 0;
  GS_001_OBJ_1F8(param_1,param_2);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



void PATCHGTE_OBJ_C4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                    undefined2 param_5)

{
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  int in_k0;
  undefined4 unaff_retaddr;
  
  *(undefined4 *)(in_k0 + 4) = in_at;
  *(undefined4 *)(in_k0 + 8) = in_v0;
  *(undefined4 *)(in_k0 + 0xc) = in_v1;
  *(undefined4 *)(in_k0 + 0x7c) = unaff_retaddr;
  GS_001_OBJ_74(param_1,param_2,param_3,param_4,param_5);
  FUN_8002e654();
  DAT_800a6fd4 = 0;
  GS_001_OBJ_1F8(param_1,param_2);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



void PATCHGTE_OBJ_DC(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                    undefined2 param_5)

{
  GS_001_OBJ_74(param_1,param_2,param_3,param_4,param_5);
  FUN_8002e654();
  DAT_800a6fd4 = 0;
  GS_001_OBJ_1F8(param_1,param_2);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



void GsInitGraph(ushort x,ushort y,ushort intmode,ushort dith,ushort varmmode)

{
  GS_001_OBJ_74(x,y,intmode,dith,varmmode);
  FUN_8002e654();
  DAT_800a6fd4 = 0;
  GS_001_OBJ_1F8(x,y);
  GsSetDrawBuffClip();
  GsSetDrawBuffOffset();
  return;
}



void GS_001_OBJ_74(undefined2 param_1,undefined2 param_2,uint param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_3 >> 4 & 3) == 3) {
    uVar2 = 3;
  }
  FUN_80030984(uVar2);
  DAT_800a6f5a = 0;
  DAT_800a6f58 = 0;
  DAT_800a6f62 = 0;
  DAT_800a6f60 = 0;
  DAT_800a6f5e = 0;
  DAT_800a6f5c = 0;
  DAT_800a6f64 = 0;
  DAT_800a6f67 = 0;
  DAT_800a6f68 = 0;
  DAT_800a6f66 = param_4;
  FUN_80031364(&DAT_800a6f50);
  DAT_800a6fb0 = 0;
  DAT_800a6fb2 = 0;
  DAT_800a6fb8 = 0;
  DAT_800a6fba = 0;
  DAT_800a6fbc = 0;
  DAT_800a6fbe = 0;
  DAT_800a6fb4 = param_1;
  DAT_800a6fb6 = param_2;
  iVar1 = FUN_80026dd8();
  if (iVar1 == 1) {
    DAT_800a6fba = 0x18;
    DAT_800a6fc2 = 1;
  }
  DAT_800a6fc0 = (byte)param_3 & 1;
  DAT_800a6fd6 = (ushort)param_3 & 4;
  DAT_800a6fc1 = param_5;
  FUN_80031530();
  return;
}



void GsInitGraph2(u_short x,u_short y,u_short intmode,u_short dith,u_short vrammode)

{
  DAT_800a6f64 = 0;
  DAT_800a6f66 = (undefined1)dith;
  DAT_800a6f67 = 0;
  DAT_800a6f68 = 0;
  DAT_800a6fc0 = (byte)intmode & 1;
  DAT_800a6fd6 = intmode & 4;
  DAT_800a6fc1 = (undefined1)vrammode;
  DAT_800a6fb4 = x;
  DAT_800a6fb6 = y;
  GS_001_OBJ_1F8(x,y);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GS_001_OBJ_1F8(ushort param_1,ushort param_2)

{
  _DAT_800a6fd8 = (uint)param_1;
  _DAT_800a6fdc = (uint)param_2;
  if (_DAT_800a6fd8 == 0) {
    trap(0x1c00);
  }
  if ((_DAT_800a6fd8 == 0xffffffff) && (_DAT_800a6fdc == 0x20000)) {
    trap(0x1800);
  }
  DAT_800a7054 = 0;
  DAT_800a705c = 0;
  DAT_800a706c = 0;
  DAT_800a7068 = 0;
  DAT_800a7064 = 0;
  DAT_800a7050 = 0x1000;
  DAT_800a7058 = 0x1000;
  DAT_800a7060 = CONCAT22(DAT_800a7060._2_2_,0x1000);
  DAT_800a7090 = 0x1000;
  DAT_800a7094 = 0;
  DAT_800a709c = 0;
  DAT_800a70a0 = DAT_800a7060;
  DAT_800a70a4 = 0;
  DAT_800a70a8 = 0;
  DAT_800a70ac = 0;
  DAT_800a6ff4 = 0;
  DAT_800a6ffc = 0;
  DAT_800a7004 = 0;
  DAT_800a7008 = 0;
  DAT_800a700c = 0;
  DAT_800a7000 = (uint)DAT_800a7060._2_2_ << 0x10;
  DAT_800a6ff8 = 0;
  DAT_800a6ff0 = 0;
  DAT_800a7010 = 0;
  DAT_800a7014 = 0;
  DAT_800a7018 = 0;
  DAT_800a701c = 0;
  DAT_800a7020 = DAT_800a7000;
  DAT_800a7024 = 0;
  DAT_800a7028 = 0;
  DAT_800a702c = 0;
  DAT_800a6f40 = 0;
  DAT_800a6f42 = 0;
  DAT_800a6f44 = 0;
  DAT_800a6f46 = 0;
  DAT_800a6f4a = 0;
  DAT_800a6f48 = 0;
  DAT_800a6fca = 0;
  _DAT_800a7098 =
       (uint)(ushort)((ulonglong)
                      ((longlong)(int)((_DAT_800a6fdc << 0xe) / _DAT_800a6fd8) * 0x55555556) >> 0x20
                     );
  DAT_800a6fc8 = 0;
  DAT_800a6f1b = 3;
  DAT_800a6f1f = 2;
  DAT_800a6f2b = 3;
  DAT_800a6f2f = 2;
  DAT_800a6fd0 = 1;
  DAT_800a6fcc = param_1;
  DAT_800a6fce = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GsSortClear(uchar param_1,uchar param_2,uchar param_3,GsOT *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  (&DAT_800a6f1c)[DAT_800a6fd4 * 0x10] = param_1;
  (&DAT_800a6f1d)[DAT_800a6fd4 * 0x10] = param_2;
  (&DAT_800a6f1e)[DAT_800a6fd4 * 0x10] = param_3;
  uVar2 = DAT_800a6fdc;
  iVar3 = (int)DAT_800a6fd4;
  iVar4 = iVar3 * 0x10;
  *(undefined2 *)(&DAT_800a6f20 + iVar4) = (&DAT_800a6f38)[iVar3];
  uVar1 = (&DAT_800a6f3c)[iVar3];
  *(undefined2 *)(&DAT_800a6f26 + iVar4) = uVar2;
  *(undefined2 *)(&DAT_800a6f22 + iVar4) = uVar1;
  if (DAT_800a6fc1 != '\0') {
    *(short *)(&DAT_800a6f24 + iVar4) = (short)((_DAT_800a6fd8 * 3) / 2);
    GS_001_OBJ_520();
    return;
  }
  *(undefined2 *)(&DAT_800a6f24 + iVar4) = DAT_800a6fd8;
  FUN_800303d0(param_4->tag,&UNK_800a6f18 + DAT_800a6fd4 * 0x10);
  return;
}



void GS_001_OBJ_520(void)

{
  int in_a3;
  
  FUN_800303d0(*(undefined4 *)(in_a3 + 0x10),&UNK_800a6f18 + DAT_800a6fd4 * 0x10);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void GsSetDrawBuffOffset(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_800a6fd6 != 0) {
    DAT_800a6fc6 = 0;
    DAT_800a6fc4 = 0;
    DAT_800a6f58 = DAT_800a6f48 + (&DAT_800a6f38)[DAT_800a6fd4];
    DAT_800a6f5a = DAT_800a6f4a + (&DAT_800a6f3c)[DAT_800a6fd4];
    FUN_80031364(&DAT_800a6f50);
    GS_0022_OBJ_F4();
    return;
  }
  psVar3 = &DAT_800a6f38;
  iVar5 = (int)DAT_800a6f48;
  if (DAT_800a6fd4 == 0) {
    psVar3 = &DAT_800a6f3a;
  }
  sVar1 = *psVar3;
  psVar3 = &DAT_800a6f3c;
  iVar4 = (int)DAT_800a6f4a;
  if (DAT_800a6fd4 == 0) {
    psVar3 = &DAT_800a6f3e;
  }
  sVar2 = *psVar3;
  FUN_8002c9e4(iVar5 + sVar1,iVar4 + sVar2);
  DAT_800a6fc4 = (short)(iVar5 + sVar1);
  DAT_800a6fc6 = (short)(iVar4 + sVar2);
  return;
}



void GS_0022_OBJ_F4(void)

{
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void GsSetDrawBuffClip(void)

{
  DAT_800a6f56 = DAT_800a6fce;
  DAT_800a6f54 = DAT_800a6fcc;
  DAT_800a6f50 = DAT_800a6fc8 + (&DAT_800a6f38)[DAT_800a6fd4];
  DAT_800a6f52 = DAT_800a6fca + (&DAT_800a6f3c)[DAT_800a6fd4];
  FUN_80031364();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

void GsInit3D(void)

{
  DAT_800a6f48 = (undefined2)(_DAT_800a6fd8 / 2);
  DAT_800a6f4a = (undefined2)(_DAT_800a6fdc / 2);
  GsSetDrawBuffOffset();
  DAT_800a6fe8 = 10;
  DAT_800a6fe4 = 0;
  DAT_800a6fe0 = 0x3fff;
  return;
}



int GsSetFlatLight(int id,GsF_LIGHT *lt)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_70;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  
  uVar7 = DAT_800a700c;
  uVar6 = DAT_800a7008;
  uVar5 = DAT_800a7004;
  uVar4 = DAT_800a7000;
  uVar3 = DAT_800a6ff8;
  uVar2 = DAT_800a6ff4;
  uVar1 = DAT_800a6ff0;
  uVar11 = (uint)lt->r;
  uVar12 = (uint)lt->g;
  uVar13 = (uint)lt->b;
  GS_107_OBJ_51C(&local_60);
  lVar8 = SquareRoot0(lt->vx * lt->vx + lt->vy * lt->vy + lt->vz * lt->vz);
  iVar9 = -1;
  if (lVar8 != 0) {
    if (id == 1) {
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vx * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vy * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vz * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      local_5e = (undefined2)((uVar11 * 0x1000) / 0xff);
      local_58 = (undefined2)((uVar12 * 0x1000) / 0xff);
      local_52 = (undefined2)((uVar13 * 0x1000) / 0xff);
      iVar9 = GS_107_OBJ_444();
      return iVar9;
    }
    if (id < 2) {
      if (id != 0) {
        iVar9 = GS_107_OBJ_444();
        return iVar9;
      }
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vx * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vy * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      if (lVar8 == 0) {
        trap(0x1c00);
      }
      if ((lVar8 == -1) && (lt->vz * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      local_60 = (undefined2)((uVar11 * 0x1000) / 0xff);
      local_5a = (undefined2)((uVar12 * 0x1000) / 0xff);
      local_54 = (undefined2)((uVar13 * 0x1000) / 0xff);
      iVar9 = GS_107_OBJ_444();
      return iVar9;
    }
    if (id != 2) {
      iVar9 = GS_107_OBJ_444();
      return iVar9;
    }
    iVar9 = lt->vx * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    iVar10 = lt->vy * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar10 == -0x80000000)) {
      trap(0x1800);
    }
    DAT_800a6ffc = CONCAT22((short)(iVar10 / lVar8),(short)(iVar9 / lVar8));
    iVar9 = lt->vz * -0x1000;
    if (lVar8 == 0) {
      trap(0x1c00);
    }
    if ((lVar8 == -1) && (iVar9 == -0x80000000)) {
      trap(0x1800);
    }
    local_5c = (undefined2)((uVar11 * 0x1000) / 0xff);
    local_56 = (undefined2)((uVar12 * 0x1000) / 0xff);
    local_50 = (undefined2)((uVar13 * 0x1000) / 0xff);
    local_70 = CONCAT22((short)((uint)uVar4 >> 0x10),(short)(iVar9 / lVar8));
    DAT_800a7000 = local_70;
    DAT_800a6ff0 = uVar1;
    DAT_800a6ff4 = uVar2;
    DAT_800a6ff8 = uVar3;
    DAT_800a7004 = uVar5;
    DAT_800a7008 = uVar6;
    DAT_800a700c = uVar7;
    GS_107_OBJ_4B8(&local_60);
    iVar9 = 0;
  }
  return iVar9;
}



undefined4 GS_107_OBJ_444(void)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  DAT_800a6ff0 = in_stack_00000010;
  DAT_800a6ff4 = in_stack_00000014;
  DAT_800a6ff8 = in_stack_00000018;
  DAT_800a6ffc = in_stack_0000001c;
  DAT_800a7000 = in_stack_00000020;
  DAT_800a7004 = in_stack_00000024;
  DAT_800a7008 = in_stack_00000028;
  DAT_800a700c = in_stack_0000002c;
  GS_107_OBJ_4B8(&stack0x00000030);
  return 0;
}



void GS_107_OBJ_4B8(MATRIX *param_1)

{
  DAT_800a7010 = *(undefined4 *)param_1->m[0];
  DAT_800a7014 = *(undefined4 *)(param_1->m[0] + 2);
  DAT_800a7018 = *(undefined4 *)(param_1->m[1] + 1);
  DAT_800a701c = *(undefined4 *)param_1->m[2];
  DAT_800a7020 = *(undefined4 *)(param_1->m[2] + 2);
  DAT_800a7024 = param_1->t[0];
  DAT_800a7028 = param_1->t[1];
  DAT_800a702c = param_1->t[2];
  SetColorMatrix(param_1);
  return;
}



void GS_107_OBJ_51C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_800a7018;
  uVar1 = DAT_800a7014;
  *param_1 = DAT_800a7010;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar2 = DAT_800a7024;
  uVar1 = DAT_800a7020;
  param_1[3] = DAT_800a701c;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = DAT_800a702c;
  param_1[6] = DAT_800a7028;
  param_1[7] = uVar1;
  return;
}



// Possible GS_121.OBJ/gte_init

void FUN_8002e654(void)

{
  FUN_8002bafc();
  SetFarColor(0,0,0);
  FUN_8002c9e4(0,0);
  DAT_800a6fc6 = 0;
  DAT_800a6fc4 = 0;
  return;
}



void GsGetTimInfo(ulong *im,GsIMAGE *tim)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *im;
  tim->pmode = uVar2;
  if ((uVar2 >> 3 & 1) != 0) {
    puVar3 = im + 1;
    uVar2 = *puVar3 & 0xfffffffc;
    tim->cx = (short)im[2];
    tim->cy = *(short *)((int)im + 10);
    tim->cw = (ushort)im[3];
    uVar1 = *(ushort *)((int)im + 0xe);
    tim->clut = im + 4;
    tim->ch = uVar1;
    tim->px = *(short *)((int)puVar3 + uVar2 + 4);
    tim->py = *(short *)((int)puVar3 + uVar2 + 6);
    tim->pw = *(ushort *)((int)puVar3 + uVar2 + 8);
    uVar1 = *(ushort *)((int)puVar3 + uVar2 + 10);
    tim->pixel = (ulong *)((int)puVar3 + uVar2 + 0xc);
    tim->ph = uVar1;
    GS_122_OBJ_DC();
    return;
  }
  tim->px = (short)im[2];
  tim->py = *(short *)((int)im + 10);
  tim->pw = (ushort)im[3];
  uVar1 = *(ushort *)((int)im + 0xe);
  tim->pixel = im + 4;
  tim->ph = uVar1;
  return;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void GS_122_OBJ_DC(void)

{
  return;
}



void Gssub_make_matrix(undefined4 *param_1,short param_2,undefined2 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_800a7058;
  uVar1 = DAT_800a7054;
  *param_1 = DAT_800a7050;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar2 = DAT_800a7064;
  uVar1 = DAT_800a7060;
  param_1[3] = DAT_800a705c;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = DAT_800a706c;
  param_1[6] = DAT_800a7068;
  param_1[7] = uVar1;
  switch((param_4 + -0x58) * 0x1000000 >> 0x18) {
  case 0:
  case 0x20:
    *(undefined2 *)(param_1 + 2) = param_3;
    *(undefined2 *)(param_1 + 4) = param_3;
    *(short *)((int)param_1 + 10) = -param_2;
    *(short *)((int)param_1 + 0xe) = param_2;
    GS_123_OBJ_C0();
    return;
  case 1:
  case 0x21:
    *(undefined2 *)param_1 = param_3;
    *(undefined2 *)(param_1 + 4) = param_3;
    *(short *)(param_1 + 1) = param_2;
    *(short *)(param_1 + 3) = -param_2;
    GS_123_OBJ_C0();
    return;
  case 2:
  case 0x22:
    *(undefined2 *)param_1 = param_3;
    *(undefined2 *)(param_1 + 2) = param_3;
    *(short *)((int)param_1 + 2) = -param_2;
    *(short *)((int)param_1 + 6) = param_2;
  }
  return;
}



void GS_123_OBJ_7C(undefined4 param_1,short param_2,undefined2 param_3)

{
  int in_t1;
  
  *(undefined2 *)(in_t1 + 8) = param_3;
  *(undefined2 *)(in_t1 + 0x10) = param_3;
  *(short *)(in_t1 + 10) = -param_2;
  *(short *)(in_t1 + 0xe) = param_2;
  GS_123_OBJ_C0();
  return;
}



void GS_123_OBJ_94(undefined4 param_1,short param_2,undefined2 param_3)

{
  undefined2 *in_t1;
  
  *in_t1 = param_3;
  in_t1[8] = param_3;
  in_t1[2] = param_2;
  in_t1[6] = -param_2;
  GS_123_OBJ_C0();
  return;
}



void GS_123_OBJ_AC(undefined4 param_1,short param_2,undefined2 param_3)

{
  undefined2 *in_t1;
  
  *in_t1 = param_3;
  in_t1[4] = param_3;
  in_t1[1] = -param_2;
  in_t1[3] = param_2;
  return;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void GS_123_OBJ_C0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Possible RVWUNIT.OBJ/GsSetRefViewUnit

int GsSetRefView2(GsRVIEW2 *pv)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 auStack_90 [32];
  MATRIX local_70 [2];
  VECTOR local_30;
  
  DAT_800a7070 = DAT_800a7090;
  DAT_800a7074 = DAT_800a7094;
  DAT_800a7078 = _DAT_800a7098;
  DAT_800a707c = DAT_800a709c;
  DAT_800a7080 = DAT_800a70a0;
  DAT_800a7084 = DAT_800a70a4;
  DAT_800a7088 = DAT_800a70a8;
  DAT_800a708c = DAT_800a70ac;
  gte_rotate_z_matrix(&DAT_800a7070,-pv->rz);
  GS_131_OBJ_3D0(pv,&local_b0);
  lVar1 = SquareRoot0((local_a4 - local_b0) * (local_a4 - local_b0) +
                      (local_a0 - local_ac) * (local_a0 - local_ac) +
                      (local_9c - local_a8) * (local_9c - local_a8));
  iVar2 = 1;
  if (lVar1 != 0) {
    iVar2 = (local_ac - local_a0) * 0x1000;
    if (lVar1 == 0) {
      trap(0x1c00);
    }
    if ((lVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    lVar3 = SquareRoot0((local_a4 - local_b0) * (local_a4 - local_b0) +
                        (local_9c - local_a8) * (local_9c - local_a8));
    if (lVar1 == 0) {
      trap(0x1c00);
    }
    if ((lVar1 == -1) && (lVar3 << 0xc == -0x80000000)) {
      trap(0x1800);
    }
    Gssub_make_matrix((MATRIX *)auStack_90,(int)(short)-(short)(iVar2 / lVar1),
                      (int)(short)((lVar3 << 0xc) / lVar1),0x78);
    MulMatrix((MATRIX *)&DAT_800a7070,(MATRIX *)auStack_90);
    if (lVar3 != 0) {
      iVar2 = (local_a4 - local_b0) * 0x1000;
      if (lVar3 == 0) {
        trap(0x1c00);
      }
      if ((lVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = (local_9c - local_a8) * 0x1000;
      if (lVar3 == 0) {
        trap(0x1c00);
      }
      if ((lVar3 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      Gssub_make_matrix((MATRIX *)auStack_90,(int)(short)-(short)(iVar2 / lVar3),
                        (int)(short)(iVar4 / lVar3),0x79);
      MulMatrix((MATRIX *)&DAT_800a7070,(MATRIX *)auStack_90);
    }
    local_30.vx = -pv->vpx;
    local_30.vy = -pv->vpy;
    local_30.vz = -pv->vpz;
    ApplyMatrixLV((MATRIX *)&DAT_800a7070,&local_30,(VECTOR *)&DAT_800a7084);
    if (pv->super != (GsCOORDINATE2 *)0x0) {
      GsGetLw(pv->super,(MATRIX *)auStack_90);
      TransposeMatrix((MATRIX *)auStack_90,local_70);
      ApplyMatrixLV(local_70,(VECTOR *)(auStack_90 + 0x14),&local_30);
      local_70[0].t[0] = -local_30.vx;
      local_70[0].t[2] = -local_30.vz;
      local_70[0].t[1] = -local_30.vy;
      GsMulCoord2((MATRIX *)&DAT_800a7070,local_70);
      DAT_800a7070._0_2_ = local_70[0].m[0][0];
      DAT_800a7070._2_2_ = local_70[0].m[0][1];
      DAT_800a7074._0_2_ = local_70[0].m[0][2];
      DAT_800a7074._2_2_ = local_70[0].m[1][0];
      DAT_800a7078._0_2_ = local_70[0].m[1][1];
      DAT_800a7078._2_2_ = local_70[0].m[1][2];
      DAT_800a707c._0_2_ = local_70[0].m[2][0];
      DAT_800a707c._2_2_ = local_70[0].m[2][1];
      DAT_800a7080._0_2_ = local_70[0].m[2][2];
      DAT_800a7080._2_2_ = local_70[0]._18_2_;
      DAT_800a7084 = local_70[0].t[0];
      DAT_800a7088 = local_70[0].t[1];
      DAT_800a708c = local_70[0].t[2];
    }
    DAT_800a7030._0_2_ = (short)DAT_800a7070;
    DAT_800a7030._2_2_ = DAT_800a7070._2_2_;
    DAT_800a7034._0_2_ = (short)DAT_800a7074;
    DAT_800a7034._2_2_ = DAT_800a7074._2_2_;
    DAT_800a7038._0_2_ = (short)DAT_800a7078;
    DAT_800a7038._2_2_ = DAT_800a7078._2_2_;
    DAT_800a703c._0_2_ = (short)DAT_800a707c;
    DAT_800a703c._2_2_ = DAT_800a707c._2_2_;
    DAT_800a7040._0_2_ = (short)DAT_800a7080;
    DAT_800a7040._2_2_ = DAT_800a7080._2_2_;
    DAT_800a7044 = DAT_800a7084;
    DAT_800a7048 = DAT_800a7088;
    DAT_800a704c = DAT_800a708c;
    iVar2 = 0;
  }
  return iVar2;
}



// Possible RVWUNIT.OBJ/RVWUNIT_OBJ_3D0

void GS_131_OBJ_3D0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = GS_131_OBJ_4BC();
  iVar2 = GS_131_OBJ_584(uVar1);
  uVar3 = iVar2 - 0xf;
  if (0xf < iVar2) {
    *param_2 = *param_1 >> (uVar3 & 0x1f);
    param_2[1] = param_1[1] >> (uVar3 & 0x1f);
    param_2[2] = param_1[2] >> (uVar3 & 0x1f);
    param_2[3] = param_1[3] >> (uVar3 & 0x1f);
    param_2[4] = param_1[4] >> (uVar3 & 0x1f);
    GS_131_OBJ_4A4();
    return;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  return;
}



// Possible RVWUNIT.OBJ/RVWUNIT_OBJ_4A4

void GS_131_OBJ_4A4(void)

{
  undefined4 in_v0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s1 + 0x14) = in_v0;
  return;
}



// Possible RVWUNIT.OBJ/RVWUNIT_OBJ_4BC

int GS_131_OBJ_4BC(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[3];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[4];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = param_1[5];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// Possible RVWUNIT.OBJ/RVWUNIT_OBJ_584

int GS_131_OBJ_584(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (0 < param_1);
  }
  return iVar1;
}



MATRIX * TransposeMatrix(MATRIX *m0,MATRIX *m1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(undefined4 *)m0->m[0];
  uVar3 = *(undefined4 *)(m0->m[0] + 2);
  *(undefined4 *)(m1->m[0] + 2) = uVar2;
  *(undefined4 *)m1->m[0] = uVar3;
  m1->m[0][0] = (short)uVar2;
  uVar4 = *(undefined4 *)(m0->m[1] + 1);
  uVar2 = *(undefined4 *)m0->m[2];
  *(undefined4 *)m1->m[2] = uVar4;
  *(undefined4 *)(m1->m[1] + 1) = uVar2;
  m1->m[2][0] = (short)uVar3;
  m1->m[1][1] = (short)uVar4;
  sVar1 = m0->m[2][2];
  m1->m[0][2] = (short)uVar2;
  m1->m[2][2] = sVar1;
  return m1;
}



void GsInitCoordinate2(GsCOORDINATE2 *super,GsCOORDINATE2 *base)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = DAT_800a7058;
  uVar1 = DAT_800a7054;
  *(undefined4 *)(base->coord).m[0] = DAT_800a7050;
  *(undefined4 *)((base->coord).m[0] + 2) = uVar1;
  *(undefined4 *)((base->coord).m[1] + 1) = uVar2;
  lVar3 = DAT_800a7064;
  uVar1 = DAT_800a7060;
  *(undefined4 *)(base->coord).m[2] = DAT_800a705c;
  *(undefined4 *)((base->coord).m[2] + 2) = uVar1;
  (base->coord).t[0] = lVar3;
  lVar3 = DAT_800a706c;
  (base->coord).t[1] = DAT_800a7068;
  (base->coord).t[2] = lVar3;
  base->super = super;
  base->flg = 0;
  if ((GsCOORDINATE2 *)0x1 < super) {
    base->super->sub = base;
  }
  return;
}



void GsSetLightMatrix2(MATRIX *mp)

{
  MATRIX *m;
  
  m = MulMatrix2((MATRIX *)&DAT_800a6ff0,mp);
  SetLightMatrix(m);
  return;
}



void GsMulCoord0(MATRIX *m1,MATRIX *m2,MATRIX *m3)

{
  ApplyMatrixLV(m1,(VECTOR *)m2->t,(VECTOR *)m3->t);
  MulMatrix0(m1,m2,m3);
  m3->t[0] = m3->t[0] + m1->t[0];
  m3->t[1] = m3->t[1] + m1->t[1];
  m3->t[2] = m3->t[2] + m1->t[2];
  return;
}



void GsMulCoord2(MATRIX *m1,MATRIX *m2)

{
  VECTOR local_20;
  
  ApplyMatrixLV(m1,(VECTOR *)m2->t,&local_20);
  MulMatrix2(m1,m2);
  m2->t[0] = local_20.vx + m1->t[0];
  m2->t[1] = local_20.vy + m1->t[1];
  m2->t[2] = local_20.vz + m1->t[2];
  return;
}



void GsMulCoord3(MATRIX *m1,MATRIX *m2)

{
  VECTOR local_20;
  
  ApplyMatrixLV(m1,(VECTOR *)m2->t,&local_20);
  MulMatrix(m1,m2);
  m1->t[0] = local_20.vx + m1->t[0];
  m1->t[1] = local_20.vy + m1->t[1];
  m1->t[2] = local_20.vz + m1->t[2];
  return;
}



void print_matrix(short *param_1)

{
  printf("(%d %d %d) (%d %d %d) (%d %d %d)\n",(int)*param_1,(int)param_1[1],(int)param_1[2],
         (int)param_1[3],(int)param_1[4],(int)param_1[5],(int)param_1[6],(int)param_1[7],
         (int)param_1[8]);
  return;
}



void print_vector(int param_1)

{
  printf("(%d %d %d)\n",*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
         *(undefined4 *)(param_1 + 0x1c));
  return;
}



void gte_rotate_z_matrix(MATRIX *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  MATRIX local_30;
  
  iVar1 = rcos(param_2 / 0x168);
  iVar2 = rsin(param_2 / 0x168);
  if (param_2 != 0) {
    local_30.m[1][0] = (short)iVar2;
    local_30.m[0][1] = -local_30.m[1][0];
    local_30.m[0][0] = (short)iVar1;
    local_30.m[0][2] = 0;
    local_30.m[1][2] = 0;
    local_30.m[2][0] = 0;
    local_30.m[2][1] = 0;
    local_30.m[2][2] = 0x1000;
    local_30.t[0] = 0;
    local_30.t[1] = 0;
    local_30.t[2] = 0;
    local_30.m[1][1] = local_30.m[0][0];
    MulMatrix(param_1,&local_30);
  }
  return;
}



void GsGetLw(GsCOORDINATE2 *m,MATRIX *out)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar7 = 100;
  while( true ) {
    (&DAT_800a70b0)[iVar10] = (int)m;
    iVar2 = DAT_800a70b0;
    if (m->super == (_GsCOORDINATE2 *)0x0) break;
    if (m->flg == DAT_800a6fd0) {
      uVar3 = *(undefined4 *)((m->workm).m[0] + 2);
      uVar5 = *(undefined4 *)((m->workm).m[1] + 1);
      uVar8 = *(undefined4 *)(m->workm).m[2];
      *(undefined4 *)out->m[0] = *(undefined4 *)(m->workm).m[0];
      *(undefined4 *)(out->m[0] + 2) = uVar3;
      *(undefined4 *)(out->m[1] + 1) = uVar5;
      *(undefined4 *)out->m[2] = uVar8;
      lVar4 = (m->workm).t[0];
      lVar6 = (m->workm).t[1];
      lVar9 = (m->workm).t[2];
      *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
      out->t[0] = lVar4;
      out->t[1] = lVar6;
      out->t[2] = lVar9;
      GS_133_OBJ_21C();
      return;
    }
    if (m->flg == 0) {
      iVar7 = iVar10;
    }
    iVar10 = iVar10 + 1;
    m = m->super;
  }
  if ((m->flg != DAT_800a6fd0) && (m->flg != 0)) {
    if (iVar7 == 100) {
      uVar3 = *(undefined4 *)(DAT_800a70b0 + 0x28);
      uVar5 = *(undefined4 *)(DAT_800a70b0 + 0x2c);
      uVar8 = *(undefined4 *)(DAT_800a70b0 + 0x30);
      *(undefined4 *)out->m[0] = *(undefined4 *)(DAT_800a70b0 + 0x24);
      *(undefined4 *)(out->m[0] + 2) = uVar3;
      *(undefined4 *)(out->m[1] + 1) = uVar5;
      *(undefined4 *)out->m[2] = uVar8;
      lVar4 = *(long *)(iVar2 + 0x38);
      lVar6 = *(long *)(iVar2 + 0x3c);
      lVar9 = *(long *)(iVar2 + 0x40);
      *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)(iVar2 + 0x34);
      out->t[0] = lVar4;
      out->t[1] = lVar6;
      out->t[2] = lVar9;
      GS_133_OBJ_21C();
      return;
    }
    iVar7 = (&DAT_800a70b0)[iVar7 + 1];
    uVar3 = *(undefined4 *)(iVar7 + 0x28);
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    uVar8 = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)out->m[0] = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(out->m[0] + 2) = uVar3;
    *(undefined4 *)(out->m[1] + 1) = uVar5;
    *(undefined4 *)out->m[2] = uVar8;
    lVar4 = *(long *)(iVar7 + 0x38);
    lVar6 = *(long *)(iVar7 + 0x3c);
    lVar9 = *(long *)(iVar7 + 0x40);
    *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)(iVar7 + 0x34);
    out->t[0] = lVar4;
    out->t[1] = lVar6;
    out->t[2] = lVar9;
    GS_133_OBJ_21C();
    return;
  }
  uVar3 = *(undefined4 *)((m->coord).m[0] + 2);
  uVar5 = *(undefined4 *)((m->coord).m[1] + 1);
  uVar8 = *(undefined4 *)(m->coord).m[2];
  *(undefined4 *)(m->workm).m[0] = *(undefined4 *)(m->coord).m[0];
  *(undefined4 *)((m->workm).m[0] + 2) = uVar3;
  *(undefined4 *)((m->workm).m[1] + 1) = uVar5;
  *(undefined4 *)(m->workm).m[2] = uVar8;
  lVar4 = (m->coord).t[0];
  lVar6 = (m->coord).t[1];
  lVar9 = (m->coord).t[2];
  *(undefined4 *)((m->workm).m[2] + 2) = *(undefined4 *)((m->coord).m[2] + 2);
  (m->workm).t[0] = lVar4;
  (m->workm).t[1] = lVar6;
  (m->workm).t[2] = lVar9;
  uVar1 = DAT_800a6fd0;
  uVar3 = *(undefined4 *)((m->workm).m[0] + 2);
  uVar5 = *(undefined4 *)((m->workm).m[1] + 1);
  uVar8 = *(undefined4 *)(m->workm).m[2];
  *(undefined4 *)out->m[0] = *(undefined4 *)(m->workm).m[0];
  *(undefined4 *)(out->m[0] + 2) = uVar3;
  *(undefined4 *)(out->m[1] + 1) = uVar5;
  *(undefined4 *)out->m[2] = uVar8;
  lVar4 = (m->workm).t[0];
  lVar6 = (m->workm).t[1];
  lVar9 = (m->workm).t[2];
  *(undefined4 *)(out->m[2] + 2) = *(undefined4 *)((m->workm).m[2] + 2);
  out->t[0] = lVar4;
  out->t[1] = lVar6;
  out->t[2] = lVar9;
  m->flg = uVar1;
  GS_133_OBJ_21C();
  return;
}



void GS_133_OBJ_30(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_t0;
  int unaff_s1;
  int *unaff_s2;
  
  while( true ) {
    *(int **)(unaff_s1 * 4 + param_3) = param_4;
    iVar1 = DAT_800a70b0;
    if ((int *)param_4[0x12] == (int *)0x0) break;
    if (*param_4 == DAT_800a6fd0) {
      iVar1 = param_4[10];
      iVar2 = param_4[0xb];
      iVar3 = param_4[0xc];
      *unaff_s2 = param_4[9];
      unaff_s2[1] = iVar1;
      unaff_s2[2] = iVar2;
      unaff_s2[3] = iVar3;
      iVar1 = param_4[0xe];
      iVar2 = param_4[0xf];
      iVar3 = param_4[0x10];
      unaff_s2[4] = param_4[0xd];
      unaff_s2[5] = iVar1;
      unaff_s2[6] = iVar2;
      unaff_s2[7] = iVar3;
      GS_133_OBJ_21C();
      return;
    }
    if (*param_4 == 0) {
      param_2 = unaff_s1;
    }
    unaff_s1 = unaff_s1 + 1;
    param_4 = (int *)param_4[0x12];
  }
  if ((*param_4 != DAT_800a6fd0) && (*param_4 != 0)) {
    if (param_2 == in_t0) {
      iVar2 = *(int *)(DAT_800a70b0 + 0x28);
      iVar3 = *(int *)(DAT_800a70b0 + 0x2c);
      iVar4 = *(int *)(DAT_800a70b0 + 0x30);
      *unaff_s2 = *(int *)(DAT_800a70b0 + 0x24);
      unaff_s2[1] = iVar2;
      unaff_s2[2] = iVar3;
      unaff_s2[3] = iVar4;
      iVar2 = *(int *)(iVar1 + 0x38);
      iVar3 = *(int *)(iVar1 + 0x3c);
      iVar4 = *(int *)(iVar1 + 0x40);
      unaff_s2[4] = *(int *)(iVar1 + 0x34);
      unaff_s2[5] = iVar2;
      unaff_s2[6] = iVar3;
      unaff_s2[7] = iVar4;
      GS_133_OBJ_21C();
      return;
    }
    iVar1 = *(int *)((param_2 + 1) * 4 + param_3);
    iVar2 = *(int *)(iVar1 + 0x28);
    iVar3 = *(int *)(iVar1 + 0x2c);
    iVar4 = *(int *)(iVar1 + 0x30);
    *unaff_s2 = *(int *)(iVar1 + 0x24);
    unaff_s2[1] = iVar2;
    unaff_s2[2] = iVar3;
    unaff_s2[3] = iVar4;
    iVar2 = *(int *)(iVar1 + 0x38);
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar4 = *(int *)(iVar1 + 0x40);
    unaff_s2[4] = *(int *)(iVar1 + 0x34);
    unaff_s2[5] = iVar2;
    unaff_s2[6] = iVar3;
    unaff_s2[7] = iVar4;
    GS_133_OBJ_21C();
    return;
  }
  param_4[9] = param_4[1];
  param_4[10] = param_4[2];
  param_4[0xb] = param_4[3];
  param_4[0xc] = param_4[4];
  param_4[0xd] = param_4[5];
  param_4[0xe] = param_4[6];
  param_4[0xf] = param_4[7];
  param_4[0x10] = param_4[8];
  iVar1 = DAT_800a6fd0;
  iVar2 = param_4[10];
  iVar3 = param_4[0xb];
  iVar4 = param_4[0xc];
  *unaff_s2 = param_4[9];
  unaff_s2[1] = iVar2;
  unaff_s2[2] = iVar3;
  unaff_s2[3] = iVar4;
  iVar2 = param_4[0xe];
  iVar3 = param_4[0xf];
  iVar4 = param_4[0x10];
  unaff_s2[4] = param_4[0xd];
  unaff_s2[5] = iVar2;
  unaff_s2[6] = iVar3;
  unaff_s2[7] = iVar4;
  *param_4 = iVar1;
  GS_133_OBJ_21C();
  return;
}



void GS_133_OBJ_21C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  int unaff_s1;
  MATRIX *unaff_s2;
  
  if (0 < unaff_s1) {
    piVar9 = &DAT_800a70ac + unaff_s1;
    do {
      GsMulCoord3(unaff_s2,(MATRIX *)(*piVar9 + 4));
      iVar1 = *piVar9;
      unaff_s1 = unaff_s1 + -1;
      uVar3 = *(undefined4 *)(unaff_s2->m[0] + 2);
      uVar5 = *(undefined4 *)(unaff_s2->m[1] + 1);
      uVar7 = *(undefined4 *)unaff_s2->m[2];
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)unaff_s2->m[0];
      *(undefined4 *)(iVar1 + 0x28) = uVar3;
      *(undefined4 *)(iVar1 + 0x2c) = uVar5;
      *(undefined4 *)(iVar1 + 0x30) = uVar7;
      lVar4 = unaff_s2->t[0];
      lVar6 = unaff_s2->t[1];
      lVar8 = unaff_s2->t[2];
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_s2->m[2] + 2);
      *(long *)(iVar1 + 0x38) = lVar4;
      *(long *)(iVar1 + 0x3c) = lVar6;
      *(long *)(iVar1 + 0x40) = lVar8;
      puVar2 = (undefined4 *)*piVar9;
      piVar9 = piVar9 + -1;
      *puVar2 = DAT_800a6fd0;
    } while (0 < unaff_s1);
  }
  return;
}



undefined2
FUN_8002f584(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined2 param_7)

{
  undefined2 uVar1;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  local_20 = (undefined2)param_4;
  local_1a = param_7;
  local_1e = (undefined2)param_5;
  if (param_2 == 1) {
    local_1c = (undefined2)(param_6 / 2);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_6 < 0) {
        param_6 = param_6 + 3;
      }
      local_1c = (undefined2)(param_6 >> 2);
    }
  }
  else if (param_2 == 2) {
    local_1c = (undefined2)param_6;
  }
  FUN_80030fac(&local_20,param_1);
  uVar1 = FUN_800302a4(param_2,param_3,param_4,param_5);
  return uVar1;
}



undefined2 FUN_8002f6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  local_14 = 0x10;
  local_18 = (undefined2)param_2;
  local_16 = (undefined2)param_3;
  local_12 = 1;
  FUN_80030fac(&local_18,param_1);
  uVar1 = FUN_800302e0(param_2,param_3);
  return uVar1;
}



uint FUN_800302a4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return (param_1 & 3) << 7 | (param_2 & 3) << 5 | (int)(param_4 & 0x100) >> 4 |
         (int)(param_3 & 0x3ff) >> 6 | (param_4 & 0x200) << 2;
}



uint FUN_800302e0(int param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 6 | param_1 >> 4 & 0x3fU;
}



void DumpTPage(u_short tpage)

{
  (*(code *)PTR_printf_80041758)
            ("tpage: (%d,%d,%d,%d)\n",tpage >> 7 & 3,tpage >> 5 & 3,(tpage & 0x1f) << 6,
             (tpage & 0x10) << 4 | tpage >> 2 & 0x200);
  return;
}



void DumpClut(u_short clut)

{
  (*(code *)PTR_printf_80041758)("clut: (%d,%d)\n",(clut & 0x3f) << 4,clut >> 6);
  return;
}



void FUN_800303d0(uint *param_1,uint *param_2)

{
                    // Probable PsyQ macro: addPrim().
  *param_2 = *param_2 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}



void FUN_8003046c(uint *param_1)

{
  *param_1 = *param_1 | 0xffffff;
  return;
}



void FUN_80030484(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}



void FUN_80030574(int param_1)

{
  *(undefined1 *)(param_1 + 3) = 3;
                    // Probable PsyQ macro: setSprt8()
  *(undefined1 *)(param_1 + 7) = 0x74;
  return;
}



void FUN_800305ec(int param_1)

{
  *(undefined1 *)(param_1 + 3) = 3;
                    // Probable PsyQ macro: setTile()
  *(undefined1 *)(param_1 + 7) = 0x60;
  return;
}



void SetLineF3(LINE_F3 *p)

{
  *(undefined1 *)((int)&p->tag + 3) = 5;
                    // Possible PsyQ macro: setLineF3()
  p->code = 'H';
  p->pad = 0x55555555;
  return;
}



void SetLineF4(LINE_F4 *p)

{
  *(undefined1 *)((int)&p->tag + 3) = 6;
                    // Possible PsyQ macro: setLineF4()
  p->code = 'L';
  p->pad = 0x55555555;
  return;
}



void SetDrawMove(DR_MOVE *p,RECT *rect,int x,int y)

{
  undefined1 uVar1;
  u_long uVar2;
  
  uVar1 = 5;
  if ((rect->w == 0) || (rect->h == 0)) {
    uVar1 = 0;
  }
  p->code[0] = 0x1000000;
  p->code[1] = 0x80000000;
  *(undefined1 *)((int)&p->tag + 3) = uVar1;
  uVar2 = *(u_long *)rect;
  p->code[3] = y << 0x10 | x & 0xffffU;
  p->code[2] = uVar2;
  p->code[4] = *(u_long *)&rect->w;
  return;
}



uint FUN_80030984(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if (uVar1 == 3) {
LAB_800309d0:
    printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041714,
           &DAT_8004175c);
LAB_800309ec:
    FUN_800338a4(&DAT_8004175c,0,0x80);
    ResetCallback();
    GPU_cw((uint)PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 & 0xffffff);
    DAT_8004175c = FUN_80032fc0(param_1);
    DAT_8004175d = 1;
    DAT_80041760 = *(undefined2 *)(&DAT_800417dc + (uint)DAT_8004175c * 4);
    DAT_80041762 = *(undefined2 *)(&DAT_800417e8 + (uint)DAT_8004175c * 4);
    FUN_800338a4(&DAT_8004176c,0xffffffff,0x5c);
    FUN_800338a4(&DAT_800417c8,0xffffffff,0x14);
    uVar1 = (uint)DAT_8004175c;
  }
  else {
    if (uVar1 < 4) {
      if (uVar1 == 0) goto LAB_800309d0;
    }
    else if (uVar1 == 5) goto LAB_800309ec;
    if (1 < DAT_8004175e) {
      (*(code *)PTR_printf_80041758)("ResetGraph(%d)...\n",param_1);
    }
    uVar1 = (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x34))(1);
  }
  return uVar1;
}



undefined1 FUN_80030af8(char param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_8004175e;
  DAT_8004175e = param_1;
  if (param_1 != '\0') {
    (*(code *)PTR_printf_80041758)
              ("SetGraphDebug:level:%d,type:%d reverse:%d\n",param_1,DAT_8004175c,DAT_8004175f);
  }
  return uVar1;
}



undefined4 FUN_80030c08(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_8004175e) {
    (*(code *)PTR_printf_80041758)("DrawSyncCallback(%08x)...\n",param_1);
  }
  uVar1 = DAT_80041768;
  DAT_80041768 = param_1;
  return uVar1;
}



void FUN_80030d00(undefined4 param_1)

{
  if (1 < DAT_8004175e) {
    (*(code *)PTR_printf_80041758)("DrawSync(%d)...\n",param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x3c))(param_1);
  return;
}



void FUN_80030d68(undefined4 param_1,short *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (DAT_8004175e == '\x01') {
    iVar3 = (int)param_2[2];
    if ((iVar3 <= DAT_80041760) && (iVar3 + *param_2 <= (int)DAT_80041760)) {
      iVar1 = (int)param_2[1];
      if (((iVar1 <= DAT_80041762) &&
          (((iVar1 + param_2[3] <= (int)DAT_80041762 && (0 < iVar3)) && (-1 < *param_2)))) &&
         ((-1 < iVar1 && (0 < param_2[3])))) {
        return;
      }
    }
    pcVar2 = "%s:bad RECT";
  }
  else {
    if (DAT_8004175e != '\x02') {
      return;
    }
    pcVar2 = "%s:";
  }
  (*(code *)PTR_printf_80041758)(pcVar2,param_1);
  (*(code *)PTR_printf_80041758)
            ("(%d,%d)-(%d,%d)\n",(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
  return;
}



void FUN_80030fac(undefined4 param_1,undefined4 param_2)

{
  FUN_80030d68("LoadImage",param_1);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x20),param_1,8,
             param_2);
  return;
}



void FUN_800312f4(undefined4 param_1)

{
  if (1 < DAT_8004175e) {
    (*(code *)PTR_printf_80041758)("DrawOTag(%08x)...\n",param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 8))
            (*(undefined4 *)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x18),param_1,0,0
            );
  return;
}



uchar * FUN_80031364(uchar *param_1)

{
  undefined *puVar1;
  
  if (1 < DAT_8004175e) {
    (*(code *)PTR_printf_80041758)("PutDrawEnv(%08x)...\n",param_1);
  }
  FUN_80031d5c(param_1 + 0x1c,param_1);
  puVar1 = PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0xffffff;
  (**(code **)(puVar1 + 8))(*(undefined4 *)(puVar1 + 0x18),param_1 + 0x1c,0x40,0);
  memcpy(&DAT_8004176c,param_1,0x5c);
  return param_1;
}



ushort * FUN_80031530(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0x8000000;
  if (1 < DAT_8004175e) {
    (*(code *)PTR_printf_80041758)("PutDispEnv(%08x)...\n",param_1);
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x10))
            ((param_1[1] & 0x3ff) << 10 | *param_1 & 0x3ff | 0x5000000);
  if ((((DAT_800417d0 == param_1[4]) && (DAT_800417d2 == param_1[5])) &&
      (DAT_800417d4 == param_1[6])) && (DAT_800417d6 == param_1[7])) goto LAB_800317d0;
  cVar3 = FUN_80026dd8();
  *(char *)(param_1 + 9) = cVar3;
  uVar5 = (short)param_1[4] * 10 + 0x260;
  if (cVar3 == '\0') {
    uVar7 = (int)(short)param_1[5] + 0x10;
  }
  else {
    uVar7 = (int)(short)param_1[5] + 0x13;
  }
  if ((short)param_1[6] == 0) {
    uVar6 = (short)param_1[4] * 10 + 0xc60;
  }
  else {
    uVar6 = uVar5 + (short)param_1[6] * 10;
  }
  uVar8 = uVar7 + (int)(short)param_1[7];
  if ((short)param_1[7] == 0) {
    uVar8 = uVar7 + 0xf0;
  }
  uVar4 = 500;
  if ((499 < (int)uVar5) && (uVar4 = 0xcda, (int)uVar5 < 0xcdb)) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4 + 0x50;
  if (((int)(uVar4 + 0x50) <= (int)uVar6) && (uVar5 = 0xcda, (int)uVar6 < 0xcdb)) {
    uVar5 = uVar6;
  }
  if ((int)uVar7 < 0x10) {
    uVar7 = 0x10;
  }
  else if ((char)param_1[9] == '\0') {
    if (0x100 < (int)uVar7) goto LAB_80031704;
  }
  else if (0x136 < (int)uVar7) {
LAB_80031704:
    uVar7 = 0x100;
    if ((char)param_1[9] != '\0') {
      uVar7 = 0x136;
    }
  }
  uVar6 = uVar7 + 2;
  if ((int)(uVar7 + 2) <= (int)uVar8) {
    uVar6 = uVar8;
    if ((char)param_1[9] == '\0') {
      if (0x102 < (int)uVar8) goto LAB_80031760;
    }
    else if (0x138 < (int)uVar8) {
LAB_80031760:
      uVar6 = 0x102;
      if ((char)param_1[9] != '\0') {
        uVar6 = 0x138;
      }
    }
  }
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x10))
            ((uVar5 & 0xfff) << 0xc | uVar4 & 0xfff | 0x6000000);
  (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x10))
            ((uVar6 & 0x3ff) << 10 | uVar7 & 0x3ff | 0x7000000);
LAB_800317d0:
  if ((((DAT_800417d8 != *(int *)(param_1 + 8)) || (DAT_800417c8 != *param_1)) ||
      (DAT_800417ca != param_1[1])) ||
     ((DAT_800417cc != param_1[2] || (DAT_800417ce != param_1[3])))) {
    cVar3 = FUN_80026dd8();
    *(char *)(param_1 + 9) = cVar3;
    if (cVar3 == '\x01') {
      uVar9 = 0x8000008;
    }
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      uVar9 = uVar9 | 0x10;
    }
    if ((char)param_1[8] != '\0') {
      uVar9 = uVar9 | 0x20;
    }
    if (DAT_8004175f != '\0') {
      uVar9 = uVar9 | 0x80;
    }
    uVar1 = param_1[2];
    if (0x118 < (short)uVar1) {
      if ((short)uVar1 < 0x161) {
        uVar9 = uVar9 | 1;
      }
      else if ((short)uVar1 < 0x191) {
        uVar9 = uVar9 | 0x40;
      }
      else if ((short)uVar1 < 0x231) {
        uVar9 = uVar9 | 2;
      }
      else {
        uVar9 = uVar9 | 3;
      }
    }
    bVar2 = (short)param_1[3] < 0x121;
    if ((char)param_1[9] == '\0') {
      bVar2 = (short)param_1[3] < 0x101;
    }
    if (!bVar2) {
      uVar9 = uVar9 | 0x24;
    }
    (**(code **)(PTR_PTR_s__Id__sys_c_v_1_135_1997_09_02_13_80041754 + 0x10))(uVar9);
  }
  memcpy((uchar *)&DAT_800417c8,(uchar *)param_1,0x14);
  return param_1;
}



void FUN_80031b10(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = FUN_80031fcc(param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_80032138(param_5);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void FUN_80031d5c(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = FUN_80031fec((int)(short)*param_2,(int)(short)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar4 = FUN_80032084((int)(((uint)param_2[2] + (uint)*param_2 + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(undefined4 *)(param_1 + 8) = uVar4;
  uVar4 = FUN_8003211c((int)(short)param_2[4],(int)(short)param_2[5]);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar4 = FUN_80031fcc(*(undefined1 *)((int)param_2 + 0x17),(char)param_2[0xb],param_2[10]);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_80032138(param_2 + 6);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0xe6000000;
  cVar5 = '\a';
  if ((char)param_2[0xc] != '\0') {
    uVar4 = *(undefined4 *)param_2;
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    uVar2 = 0;
    if ((-1 < (short)uVar3) && (uVar2 = DAT_80041760 - 1, (int)(short)uVar3 <= DAT_80041760 + -1)) {
      uVar2 = uVar3;
    }
    if ((short)uVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_80041762 - 1;
      if ((int)(short)uVar1 <= DAT_80041762 + -1) {
        uVar3 = uVar1;
      }
    }
    local_14 = CONCAT22(uVar3,uVar2);
    if (((*param_2 & 0x3f) == 0) && ((uVar2 & 0x3f) == 0)) {
      cVar5 = '\n';
      *(uint *)(param_1 + 0x1c) =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2[0xd] << 8 | 0x2000000
           | (uint)*(byte *)((int)param_2 + 0x19);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      *(undefined4 *)(param_1 + 0x24) = local_14;
    }
    else {
      cVar5 = '\n';
      local_18 = CONCAT22(param_2[1] - param_2[5],*param_2 - param_2[4]);
      *(uint *)(param_1 + 0x1c) =
           (uint)*(byte *)((int)param_2 + 0x1b) << 0x10 | (uint)(byte)param_2[0xd] << 8 | 0x60000000
           | (uint)*(byte *)((int)param_2 + 0x19);
      *(undefined4 *)(param_1 + 0x20) = local_18;
      *(undefined4 *)(param_1 + 0x24) = local_14;
    }
  }
  *(char *)(param_1 + 3) = cVar5 + -1;
  return;
}



uint FUN_80031fcc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0xe1000000;
  if (param_2 != 0) {
    uVar1 = 0xe1000200;
  }
  param_3 = param_3 & 0x9ff;
  if (param_1 != 0) {
    param_3 = param_3 | 0x400;
  }
  return uVar1 | param_3;
}



uint FUN_80031fec(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (short)param_1) &&
     (uVar1 = DAT_80041760 - 1, (int)(short)param_1 <= (short)DAT_80041760 + -1)) {
    uVar1 = param_1;
  }
  if ((short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (short)DAT_80041762 + -1) goto LAB_8003206c;
    uVar2 = DAT_80041762 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_8003206c:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe3000000;
}



uint FUN_80032084(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((-1 < (short)param_1) &&
     (uVar1 = DAT_80041760 - 1, (int)(short)param_1 <= (short)DAT_80041760 + -1)) {
    uVar1 = param_1;
  }
  if ((short)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0x3ff;
    if ((int)(short)param_2 <= (short)DAT_80041762 + -1) goto LAB_80032104;
    uVar2 = DAT_80041762 - 1;
  }
  uVar2 = uVar2 & 0x3ff;
LAB_80032104:
  return uVar2 << 10 | uVar1 & 0x3ff | 0xe4000000;
}



uint FUN_8003211c(uint param_1,uint param_2)

{
  return (param_2 & 0x7ff) << 0xb | param_1 & 0x7ff | 0xe5000000;
}



uint FUN_80032138(byte *param_1)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1[2] >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
            ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 |
            (int)(-(int)*(short *)(param_1 + 4) & 0xffU) >> 3;
  }
  return uVar1;
}



undefined4 FUN_800321b8(void)

{
  return *(undefined4 *)PTR_GPU_REG1_80041834;
}



int FUN_800321d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)PTR_DMA_DPCR_80041850 = *(uint *)PTR_DMA_DPCR_80041850 | 0x8000000;
  *(undefined4 *)PTR_DMA_OTC_CHCR_8004184c = 0;
  *(int *)PTR_DMA_OTC_MADR_80041844 = param_1 + param_2 * 4 + -4;
  *(int *)PTR_DMA_OTC_BCR_80041848 = param_2;
  *(undefined4 *)PTR_DMA_OTC_CHCR_8004184c = 0x11000002;
  FUN_8003324c();
  uVar1 = *(uint *)PTR_DMA_OTC_CHCR_8004184c;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = FUN_80033280();
    if (iVar2 != 0) break;
    uVar1 = *(uint *)PTR_DMA_OTC_CHCR_8004184c;
  }
  return -1;
}



// WARNING: Removing unreachable block (ram,0x8003264c)

undefined4 FUN_800324e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_8003324c();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (DAT_80041760 < *(short *)(param_1 + 1)) {
      sVar5 = DAT_80041760;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_80041762;
    if (*(short *)((int)param_1 + 6) <= DAT_80041762) goto LAB_80032588;
  }
  sVar6 = sVar5;
LAB_80032588:
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = FUN_80033280();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    }
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = 0x1000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = 0xa0000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = *param_1;
    *(undefined4 *)PTR_GPU_REG0_80041830 = param_1[1];
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)PTR_GPU_REG0_80041830 = uVar1;
    }
    if (iVar7 != 0) {
      *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000002;
      *(undefined4 **)PTR_DMA_GPU_MADR_80041838 = param_2;
      *(uint *)PTR_DMA_GPU_BCR_8004183c = iVar7 << 0x10 | 0x10;
      *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x1000201;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_8003271c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_8003324c();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (DAT_80041760 < *(short *)(param_1 + 1)) {
      sVar5 = DAT_80041760;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_80041762;
    if (*(short *)((int)param_1 + 6) <= DAT_80041762) goto LAB_800327bc;
  }
  sVar6 = sVar5;
LAB_800327bc:
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = FUN_80033280();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    }
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = 0x1000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = 0xc0000000;
    *(undefined4 *)PTR_GPU_REG0_80041830 = *param_1;
    *(undefined4 *)PTR_GPU_REG0_80041830 = param_1[1];
    uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    while ((uVar2 & 0x8000000) == 0) {
      iVar3 = FUN_80033280();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *(uint *)PTR_GPU_REG1_80041834;
    }
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      *param_2 = *(undefined4 *)PTR_GPU_REG0_80041830;
      param_2 = param_2 + 1;
    }
    if (iVar7 != 0) {
      *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000003;
      *(undefined4 **)PTR_DMA_GPU_MADR_80041838 = param_2;
      *(uint *)PTR_DMA_GPU_BCR_8004183c = iVar7 << 0x10 | 0x10;
      *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x1000200;
    }
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_8003299c(uint param_1)

{
  *(uint *)PTR_GPU_REG1_80041834 = param_1;
  (&DAT_800ab588)[param_1 >> 0x18] = (char)param_1;
  return;
}



undefined4 FUN_800329d4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000000;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      *(undefined4 *)PTR_GPU_REG0_80041830 = uVar1;
    } while (iVar2 != -1);
  }
  return 0;
}



void FUN_80032a14(undefined4 param_1)

{
  *(undefined4 *)PTR_GPU_REG1_80041834 = 0x4000002;
  *(undefined4 *)PTR_DMA_GPU_MADR_80041838 = param_1;
  *(undefined4 *)PTR_DMA_GPU_BCR_8004183c = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x1000401;
  return;
}



uint FUN_80032a5c(uint param_1)

{
  *(uint *)PTR_GPU_REG1_80041834 = param_1 | 0x10000000;
  return *(uint *)PTR_GPU_REG0_80041830 & 0xffffff;
}



uint FUN_80032ab0(code *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_8003324c();
  while( true ) {
    if ((DAT_80041854 + 1 & 0x3f) != DAT_80041858) {
      DAT_8004185c = SetIntrMask(0);
      DAT_80041764 = 1;
      if ((DAT_8004175d == '\0') ||
         (((DAT_80041854 == DAT_80041858 && ((*(uint *)PTR_DMA_GPU_CHCR_80041840 & 0x1000000) == 0))
          && (DAT_80041768 == 0)))) {
        do {
        } while ((*(uint *)PTR_GPU_REG1_80041834 & 0x4000000) == 0);
        (*param_1)(param_2,param_4);
        SetIntrMask(DAT_8004185c);
        uVar1 = 0;
      }
      else {
        DMACallback(2,FUN_80032d60);
        iVar5 = 0;
        if (param_3 == 0) {
          *(undefined4 **)(&DAT_800ab694 + DAT_80041854 * 0x60) = param_2;
        }
        else {
          while( true ) {
            iVar2 = param_3;
            if (param_3 < 0) {
              iVar2 = param_3 + 3;
            }
            iVar3 = iVar5 * 4;
            if (iVar2 >> 2 <= iVar5) break;
            uVar4 = *param_2;
            param_2 = param_2 + 1;
            iVar5 = iVar5 + 1;
            *(undefined4 *)(&DAT_800ab69c + iVar3 + DAT_80041854 * 0x60) = uVar4;
          }
          *(undefined **)(&DAT_800ab694 + DAT_80041854 * 0x60) = &DAT_800ab69c + DAT_80041854 * 0x60
          ;
        }
        *(undefined4 *)(&DAT_800ab698 + DAT_80041854 * 0x60) = param_4;
        *(code **)(&DAT_800ab690 + DAT_80041854 * 0x60) = param_1;
        DAT_80041854 = DAT_80041854 + 1 & 0x3f;
        SetIntrMask(DAT_8004185c);
        FUN_80032d60();
        uVar1 = DAT_80041854 - DAT_80041858 & 0x3f;
      }
      return uVar1;
    }
    iVar5 = FUN_80033280();
    if (iVar5 != 0) break;
    FUN_80032d60();
  }
  return 0xffffffff;
}



uint FUN_80032d60(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)PTR_DMA_GPU_CHCR_80041840 & 0x1000000) == 0) {
    DAT_80041860 = SetIntrMask(0);
    if (DAT_80041854 != DAT_80041858) {
      uVar1 = *(uint *)PTR_DMA_GPU_CHCR_80041840;
      while ((uVar1 & 0x1000000) == 0) {
        if (((DAT_80041858 + 1 & 0x3f) == DAT_80041854) && (DAT_80041768 == (code *)0x0)) {
          DMACallback(2,0);
        }
        uVar1 = *(uint *)PTR_GPU_REG1_80041834;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *(uint *)PTR_GPU_REG1_80041834;
        }
        (**(code **)(&DAT_800ab690 + DAT_80041858 * 0x60))
                  (*(undefined4 *)(&DAT_800ab694 + DAT_80041858 * 0x60),
                   *(undefined4 *)(&DAT_800ab698 + DAT_80041858 * 0x60));
        DAT_80041858 = DAT_80041858 + 1 & 0x3f;
        if (DAT_80041854 == DAT_80041858) break;
        uVar1 = *(uint *)PTR_DMA_GPU_CHCR_80041840;
      }
    }
    SetIntrMask(DAT_80041860);
    if ((((DAT_80041854 == DAT_80041858) && ((*(uint *)PTR_DMA_GPU_CHCR_80041840 & 0x1000000) == 0))
        && (DAT_80041764 != 0)) && (DAT_80041768 != (code *)0x0)) {
      DAT_80041764 = 0;
      (*DAT_80041768)();
    }
    uVar1 = DAT_80041854 - DAT_80041858 & 0x3f;
  }
  return uVar1;
}



undefined4 FUN_80032fc0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_80041864 = SetIntrMask(0);
  DAT_80041858 = 0;
  DAT_80041854 = 0;
  uVar2 = param_1 & 7;
  if (uVar2 == 1) {
LAB_80033090:
    *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x401;
    *(uint *)PTR_DMA_DPCR_80041850 = *(uint *)PTR_DMA_DPCR_80041850 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x2000000;
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x1000000;
  }
  else {
    if (uVar2 < 2) {
      if (uVar2 != 0) goto LAB_800330dc;
    }
    else {
      if (uVar2 == 3) goto LAB_80033090;
      if (uVar2 != 5) goto LAB_800330dc;
    }
    *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x401;
    *(uint *)PTR_DMA_DPCR_80041850 = *(uint *)PTR_DMA_DPCR_80041850 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0;
    FUN_800338a4(&DAT_800ab588,0,0x100);
    FUN_800338a4(&DAT_800ab690,0,0x1800);
  }
LAB_800330dc:
  SetIntrMask(DAT_80041864);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar1 = FUN_800333c4(param_1);
  }
  return uVar1;
}



uint FUN_80033110(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    FUN_8003324c();
    do {
      if (DAT_80041854 == DAT_80041858) {
        while (((*(uint *)PTR_DMA_GPU_CHCR_80041840 & 0x1000000) != 0 ||
               ((*(uint *)PTR_GPU_REG1_80041834 & 0x4000000) == 0))) {
          iVar1 = FUN_80033280();
          if (iVar1 != 0) {
            return 0xffffffff;
          }
        }
        return 0;
      }
      FUN_80032d60();
      iVar1 = FUN_80033280();
    } while (iVar1 == 0);
    return 0xffffffff;
  }
  uVar2 = DAT_80041854 - DAT_80041858 & 0x3f;
  if (uVar2 != 0) {
    FUN_80032d60();
  }
  if (((*(uint *)PTR_DMA_GPU_CHCR_80041840 & 0x1000000) == 0) &&
     ((*(uint *)PTR_GPU_REG1_80041834 & 0x4000000) != 0)) {
    return uVar2;
  }
  if (uVar2 != 0) {
    return uVar2;
  }
  return 1;
}



void FUN_8003324c(void)

{
  int iVar1;
  
  iVar1 = VSync(-1);
  DAT_80041868 = iVar1 + 0xf0;
  DAT_8004186c = 0;
  return;
}



undefined4 FUN_80033280(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  if ((DAT_80041868 < iVar2) ||
     (iVar2 = DAT_8004186c + 1, bVar1 = 0xf0000 < DAT_8004186c, DAT_8004186c = iVar2, bVar1)) {
    printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x,",DAT_80041854 - DAT_80041858 & 0x3f,
           *(undefined4 *)PTR_GPU_REG1_80041834,*(undefined4 *)PTR_DMA_GPU_CHCR_80041840,
           *(undefined4 *)PTR_DMA_GPU_MADR_80041838);
    DAT_80041864 = SetIntrMask(0);
    DAT_80041858 = 0;
    DAT_80041854 = 0;
    *(undefined4 *)PTR_DMA_GPU_CHCR_80041840 = 0x401;
    *(uint *)PTR_DMA_DPCR_80041850 = *(uint *)PTR_DMA_DPCR_80041850 | 0x800;
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x2000000;
    *(undefined4 *)PTR_GPU_REG1_80041834 = 0x1000000;
    SetIntrMask(DAT_80041864);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_800333c4(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)PTR_GPU_REG1_80041834 = 0x10000007;
  puVar1 = PTR_GPU_REG1_80041834;
  puVar3 = (undefined *)0xe1000000;
  if ((*(uint *)PTR_GPU_REG0_80041830 & 0xffffff) == 2) {
    if ((param_1 & 8) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
      *(undefined4 *)PTR_GPU_REG1_80041834 = 0x9000001;
      puVar3 = puVar1;
    }
  }
  else {
    *(uint *)PTR_GPU_REG0_80041830 = *(uint *)PTR_GPU_REG1_80041834 & 0x3fff | 0xe1001000;
    uVar2 = 0;
    puVar3 = *(undefined **)PTR_GPU_REG0_80041830;
  }
  return CONCAT44(puVar3,uVar2);
}



void FUN_800338a4(undefined1 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + -1;
  if (param_3 != 0) {
    do {
      *param_1 = param_2;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



int FUN_800338d4(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



int FUN_80033904(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 1;
  uVar5 = 10;
  iVar6 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  do {
    pbVar3 = param_1;
    param_1 = pbVar3 + 1;
  } while (((&DAT_8004187d)[*pbVar3] & 8) != 0);
  bVar2 = *pbVar3;
  if (bVar2 == 0x2d) {
    do {
      pbVar3 = pbVar3 + 1;
      iVar7 = -iVar7;
    } while (*pbVar3 == 0x2d);
    bVar2 = *pbVar3;
  }
  pbVar4 = pbVar3;
  if (bVar2 != 0x30) goto LAB_800339e4;
  pbVar4 = pbVar3 + 1;
  bVar2 = *pbVar4;
  if (bVar2 == 0x58) {
LAB_800339d0:
    pbVar4 = pbVar3 + 2;
    uVar5 = 0x10;
  }
  else {
    if ((char)bVar2 < 'Y') {
      uVar5 = 8;
      if (bVar2 != 0x42) goto LAB_800339e4;
    }
    else if (bVar2 != 0x62) {
      uVar5 = 8;
      if (bVar2 != 0x78) goto LAB_800339e4;
      goto LAB_800339d0;
    }
    pbVar4 = pbVar3 + 2;
    uVar5 = 2;
  }
LAB_800339e4:
  while( true ) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar1 = todigit((int)(char)bVar2);
    if (uVar5 <= uVar1) break;
    iVar6 = iVar6 * uVar5 + uVar1;
  }
  return iVar6 * iVar7;
}



void * bzero(uchar *param_1,int param_2)

{
  void *pvVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = (uchar *)0x0;
  if (param_1 != (uchar *)0x0) {
    puVar3 = param_1;
    if (param_2 < 1) {
      pvVar1 = (void *)BZERO_OBJ_28();
      return pvVar1;
    }
    do {
      *puVar3 = '\0';
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 1;
      puVar2 = param_1;
    } while (0 < param_2);
  }
  return puVar2;
}



void BZERO_OBJ_28(void)

{
  return;
}



int FUN_80033ab8(byte param_1)

{
  if (((&DAT_8004187d)[param_1] & 1) != 0) {
    param_1 = param_1 + 0x20;
  }
  return (int)(char)param_1;
}



void * memcpy(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = (uchar *)0x0;
  if ((param_1 != (uchar *)0x0) && (puVar2 = param_1, puVar3 = param_1, 0 < param_3)) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (0 < param_3);
  }
  return puVar2;
}



void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = (uchar *)0x0;
  if (param_1 != (uchar *)0x0) {
    puVar3 = param_1;
    if (param_3 < 1) {
      pvVar1 = (void *)MEMSET_OBJ_28();
      return pvVar1;
    }
    do {
      *puVar3 = param_2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 1;
      puVar2 = param_1;
    } while (0 < param_3);
  }
  return puVar2;
}



void MEMSET_OBJ_28(void)

{
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)

{
  DAT_800ace90 = DAT_800ace90 * 0x41c64e6d + 0x3039;
  return DAT_800ace90 >> 0x10 & 0x7fff;
}



// Possible GS_101.OBJ/GsSetNearClip
// Possible GS_102.OBJ/GsSetFarClip
// Possible GS_124.OBJ/GsSetWorkBase
// Possible SSVM.OBJ/SsSetVoiceMask

void srand(uint param_1)

{
  DAT_800ace90 = param_1;
  return;
}



char * strcat(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = FUN_80033d14(param_1);
    iVar3 = FUN_80033d14(param_2);
    if (param_1 + iVar2 != param_2 + iVar3) {
      cVar1 = *param_1;
      pcVar4 = param_1 + 1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = (char *)STRCAT_OBJ_8C();
      return pcVar4;
    }
  }
  return (char *)0x0;
}



void STRCAT_OBJ_8C(void)

{
  return;
}



int strcmp(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    iVar2 = 0;
    if ((param_1 != param_2) && (iVar2 = -1, param_1 != (char *)0x0)) {
      iVar2 = STRCMP_OBJ_5C();
      return iVar2;
    }
  }
  else {
    while( true ) {
      cVar1 = *param_1;
      if (*param_1 != *param_2) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (cVar1 == '\0') {
        iVar2 = STRCMP_OBJ_5C();
        return iVar2;
      }
    }
    iVar2 = (int)*param_1 - (int)*param_2;
  }
  return iVar2;
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void STRCMP_OBJ_5C(void)

{
  return;
}



char * strcpy(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    cVar1 = *param_2;
    pcVar4 = param_2 + 1;
    pcVar3 = param_1 + 1;
    *param_1 = cVar1;
    while (pcVar2 = param_1, cVar1 != '\0') {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    }
  }
  return pcVar2;
}



// Possible STRLEN.OBJ/strlen

int FUN_80033d14(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (iVar3 = iVar2, cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar3 + 1;
    }
  }
  return iVar3;
}



int strncmp(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    iVar3 = 0;
    if ((param_1 != param_2) && (iVar3 = -1, param_1 != (char *)0x0)) {
      iVar3 = STRNCMP_OBJ_78();
      return iVar3;
    }
  }
  else {
    iVar4 = param_3 + -1;
    iVar3 = 0;
    if (-1 < iVar4) {
      do {
        cVar1 = *param_1;
        cVar2 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 != cVar2) break;
        param_1 = param_1 + 1;
        if (cVar1 == '\0') goto STRNCMP_OBJ_74;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      if (-1 < iVar4) {
        iVar3 = STRNCMP_OBJ_78();
        return iVar3;
      }
STRNCMP_OBJ_74:
      iVar3 = 0;
    }
  }
  return iVar3;
}



void STRNCMP_OBJ_78(void)

{
  return;
}



char * strtok(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) && (param_1 = DAT_8004190c, DAT_8004190c == (char *)0x0)) {
    pcVar3 = (char *)STRTOK_OBJ_10C();
    return pcVar3;
  }
  if (*param_1 != '\0') {
    cVar1 = *param_2;
    cVar2 = *param_2;
    pcVar3 = param_2;
    while (cVar2 != '\0') {
      if (cVar1 == *param_1) {
        pcVar3 = (char *)STRTOK_OBJ_6C();
        return pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      cVar2 = *pcVar3;
    }
  }
  DAT_8004190c = param_1 + 1;
  if (*param_1 != '\0') {
    do {
      do {
        pcVar3 = DAT_8004190c;
        DAT_8004190c = pcVar3 + 1;
        if (*pcVar3 == '\0') {
          DAT_8004190c = (char *)0x0;
          return param_1;
        }
        cVar2 = *param_2;
        pcVar4 = param_2;
      } while (*param_2 == '\0');
      do {
        pcVar4 = pcVar4 + 1;
        if (cVar2 == *pcVar3) {
          *pcVar3 = '\0';
          pcVar3 = (char *)STRTOK_OBJ_10C();
          return pcVar3;
        }
        cVar2 = *pcVar4;
      } while (*pcVar4 != '\0');
    } while( true );
  }
  DAT_8004190c = (char *)0x0;
  pcVar3 = (char *)STRTOK_OBJ_10C();
  return pcVar3;
}



byte * STRTOK_OBJ_6C(byte *param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int in_t1;
  
  while (in_t1 != 0) {
    bVar3 = *param_1;
    param_4 = (uint)bVar3;
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    if (bVar1 == 0) break;
    bVar2 = *param_2;
    in_t1 = 0;
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      if (bVar2 == bVar3) {
        pbVar4 = (byte *)STRTOK_OBJ_6C();
        return pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar4;
      bVar1 = *pbVar4;
    }
  }
  DAT_8004190c = param_1;
  if (param_4 == 0) {
    DAT_8004190c = (byte *)0x0;
    pbVar4 = (byte *)STRTOK_OBJ_10C();
    return pbVar4;
  }
  do {
    do {
      pbVar4 = DAT_8004190c;
      DAT_8004190c = pbVar4 + 1;
      if (*pbVar4 == 0) {
        DAT_8004190c = (byte *)0x0;
        return param_1 + -1;
      }
      bVar1 = *param_2;
      pbVar5 = param_2;
    } while (*param_2 == 0);
    do {
      pbVar5 = pbVar5 + 1;
      if (bVar1 == *pbVar4) {
        *pbVar4 = 0;
        pbVar4 = (byte *)STRTOK_OBJ_10C();
        return pbVar4;
      }
      bVar1 = *pbVar5;
    } while (*pbVar5 != 0);
  } while( true );
}



// Possible COMB_3.OBJ/ChangeClearSIO
// Possible DMYNOT1.OBJ/dmy_nothing1
// Possible VM_KEY_2.OBJ/KeyOnCheck

void STRTOK_OBJ_10C(void)

{
  return;
}



undefined4 todigit(byte param_1)

{
  undefined4 uVar1;
  
  if (((&DAT_8004187d)[param_1] & 4) != 0) {
    uVar1 = TODIGIT_OBJ_60();
    return uVar1;
  }
  if (((&DAT_8004187d)[param_1] & 3) != 0) {
    FUN_80033ab8((int)(char)param_1);
    uVar1 = TODIGIT_OBJ_60();
    return uVar1;
  }
  return 9999999;
}



void TODIGIT_OBJ_60(void)

{
  return;
}



int printf(char *fmt,...)

{
  int iVar1;
  undefined4 in_a1;
  undefined4 in_a2;
  undefined4 in_a3;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = in_a1;
  local_res8 = in_a2;
  local_resc = in_a3;
  iVar1 = prnt(1,fmt,&local_res4);
  return iVar1;
}



void prnt(undefined4 param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined1 **ppuVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  undefined1 local_42 [2];
  undefined1 *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 *local_34;
  char *local_30;
  
  if (param_2 == (byte *)0x0) {
    PRNT_OBJ_664();
    return;
  }
  local_30 = "0123456789abcdef";
  local_40 = (undefined1 *)0x0;
  do {
    uVar8 = (uint)*param_2;
    if (uVar8 == 0) {
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    }
    uVar14 = 0;
    bVar3 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    if (uVar8 == 0x25) {
      puVar15 = (undefined1 *)0xffffffff;
      iVar19 = 0;
      local_3c = (undefined1 *)0x0;
      local_38 = 0;
      local_34 = (undefined1 *)0x0;
      uVar8 = 0x25;
      pbVar18 = param_2;
code_r0x80034020:
      param_2 = pbVar18 + 1;
      puVar11 = param_3;
      switch(*param_2) {
      case 0:
        goto PRNT_OBJ_630;
      default:
        uVar8 = (uint)(char)*param_2;
        local_40 = local_40 + 1;
        break;
      case 0x20:
        pbVar18 = param_2;
        if (iVar19 == 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x23:
        bVar6 = true;
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x2a:
        puVar11 = param_3 + 1;
        local_34 = (undefined1 *)*param_3;
        param_3 = puVar11;
        pbVar18 = param_2;
        if (-1 < (int)local_34) goto code_r0x80034020;
        local_34 = (undefined1 *)-(int)local_34;
      case 0x2d:
        uVar14 = uVar14 | 0x10;
        param_3 = puVar11;
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x2b:
        iVar19 = 0x2b;
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x2e:
        pbVar18 = pbVar18 + 2;
        bVar1 = *pbVar18;
        if (bVar1 == 0x2a) {
          PRNT_OBJ_168();
          return;
        }
        puVar15 = (undefined1 *)0x0;
        while ((bVar1 < 0x80 && (uVar8 = (uint)*pbVar18, ((&DAT_8004187d)[uVar8] & 4) != 0))) {
          pbVar18 = pbVar18 + 1;
          bVar1 = *pbVar18;
          puVar15 = (undefined1 *)((int)puVar15 * 10 + -0x30 + uVar8);
        }
        pbVar18 = pbVar18 + -1;
        if ((int)puVar15 < 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x30:
        uVar14 = uVar14 | 0x20;
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        local_34 = (undefined1 *)0x0;
        goto PRNT_OBJ_184;
      case 0x44:
        bVar4 = true;
      case 100:
      case 0x69:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_244();
          return;
        }
        uVar8 = *param_3;
        uVar9 = 10;
        if ((int)uVar8 < 0) {
          PRNT_OBJ_3CC();
          return;
        }
        goto code_r0x80034370;
      case 0x4c:
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x4f:
        bVar4 = true;
      case 0x6f:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,8);
          return;
        }
        PRNT_OBJ_3C8(uVar8,8);
        return;
      case 0x55:
        bVar4 = true;
      case 0x75:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,10);
          return;
        }
        PRNT_OBJ_3C8(uVar8,10);
        return;
      case 0x58:
        local_30 = "0123456789ABCDEF";
      case 0x78:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3B4(uVar8,0x10);
          return;
        }
        uVar8 = *param_3;
        uVar9 = 0x10;
        iVar19 = 0;
        if ((bVar6) && (uVar8 != 0)) {
          bVar3 = true;
          iVar19 = 0;
        }
code_r0x80034370:
        local_3c = puVar15;
        if (-1 < (int)puVar15) {
          uVar14 = uVar14 & 0xffffffdf;
        }
        pcVar13 = (char *)&local_40;
        if ((uVar8 != 0) || (puVar17 = auStack_78 + -(int)pcVar13, puVar15 != (undefined1 *)0x0))
        goto PRNT_OBJ_3F4;
        goto PRNT_OBJ_468;
      case 99:
        local_68 = (undefined1)*param_3;
        PRNT_OBJ_46C();
        return;
      case 0x68:
        bVar5 = true;
        pbVar18 = param_2;
        goto code_r0x80034020;
      case 0x6c:
        goto PRNT_OBJ_1EC;
      case 0x6e:
        if ((!bVar4) && (bVar5)) {
          *(undefined2 *)*param_3 = local_40._0_2_;
          PRNT_OBJ_65C();
          return;
        }
        *(undefined1 **)*param_3 = local_40;
        PRNT_OBJ_65C();
        return;
      case 0x70:
        PRNT_OBJ_3C8(uVar8,0x10);
        return;
      case 0x73:
        pcVar13 = (char *)*param_3;
        if ((undefined1 **)pcVar13 == (undefined1 **)0x0) {
          pcVar13 = "(null)";
        }
        if ((int)puVar15 < 0) {
          puVar17 = (undefined1 *)FUN_80033d14(pcVar13);
          iVar19 = 0;
        }
        else {
          pvVar7 = memchr((uchar *)pcVar13,'\0',(int)puVar15);
          puVar17 = (undefined1 *)((int)pvVar7 - (int)pcVar13);
          if ((pvVar7 == (void *)0x0) || (iVar19 = 0, (int)puVar15 < (int)puVar17)) {
            PRNT_OBJ_334();
            return;
          }
        }
        goto code_r0x80034410;
      }
    }
    _putchar(uVar8);
    param_2 = param_2 + 1;
  } while( true );
PRNT_OBJ_1EC:
  bVar4 = true;
  pbVar18 = param_2;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*param_2] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    local_34 = (undefined1 *)((int)local_34 * 10 + -0x30 + (uint)bVar1);
    if (0x7f < *param_2) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    ppuVar12 = (undefined1 **)pcVar13;
    uVar20 = uVar8 / uVar9;
    if (uVar9 == 0) {
      trap(0x1c00);
    }
    uVar2 = local_30[uVar8 % uVar9];
    pcVar13 = (char *)((int)ppuVar12 + -1);
    *pcVar13 = uVar2;
    uVar8 = uVar20;
  } while (uVar20 != 0);
  local_30 = "0123456789abcdef";
  if (bVar6) {
    puVar17 = auStack_78 + -(int)pcVar13;
    if ((uVar9 != 8) || (puVar17 = auStack_78 + -(int)pcVar13, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar13 = (char *)((int)ppuVar12 + -2);
    *pcVar13 = '0';
  }
  puVar17 = auStack_78 + -(int)pcVar13;
PRNT_OBJ_468:
  puVar17 = puVar17 + 0x38;
code_r0x80034410:
  puVar15 = puVar17 + local_38;
  if (iVar19 != 0) {
    puVar15 = puVar15 + 1;
  }
  if (bVar3) {
    puVar15 = puVar15 + 2;
  }
  puVar16 = local_3c;
  if ((int)local_3c < (int)puVar15) {
    puVar16 = puVar15;
  }
  if (((uVar14 == 0) && (local_34 != (undefined1 *)0x0)) &&
     (puVar10 = puVar16, (int)puVar16 < (int)local_34)) {
    do {
      _putchar(0x20);
      puVar10 = puVar10 + 1;
    } while ((int)puVar10 < (int)local_34);
  }
  if (iVar19 != 0) {
    _putchar();
  }
  if (bVar3) {
    _putchar(0x30);
    _putchar((int)(char)*param_2);
  }
  if ((uVar14 == 0x20) && (puVar10 = puVar16, (int)puVar16 < (int)local_34)) {
    do {
      _putchar(0x30);
      puVar10 = puVar10 + 1;
    } while ((int)puVar10 < (int)local_34);
  }
  if ((int)puVar15 < (int)local_3c) {
    do {
      _putchar(0x30);
      puVar15 = puVar15 + 1;
    } while ((int)puVar15 < (int)local_3c);
  }
  while (puVar17 = puVar17 + -1, -1 < (int)puVar17) {
    uVar2 = *pcVar13;
    pcVar13 = (char *)((int)pcVar13 + 1);
    _putchar((int)(char)uVar2);
  }
  while (local_38 = local_38 + -1, -1 < local_38) {
    _putchar(0x30);
  }
  if (((uVar14 & 0x10) != 0) && (puVar15 = puVar16, (int)puVar16 < (int)local_34)) {
    do {
      _putchar(0x20);
      puVar15 = puVar15 + 1;
    } while ((int)puVar15 < (int)local_34);
  }
  puVar15 = local_34;
  if ((int)local_34 < (int)puVar16) {
    puVar15 = puVar16;
  }
  local_40 = puVar15 + (int)local_40;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_50(void)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *unaff_s1;
  uint *puVar11;
  uchar *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  byte *unaff_s7;
  byte *pbVar16;
  int iVar17;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
  do {
    uVar9 = (uint)*unaff_s7;
    if (uVar9 == 0) {
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    }
    uVar14 = 0;
    bVar3 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    if (uVar9 == 0x25) {
      uVar9 = 0xffffffff;
      iVar17 = 0;
      in_stack_0000003c = 0;
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      uVar8 = 0x25;
      pbVar16 = unaff_s7;
code_r0x80034020:
      unaff_s7 = pbVar16 + 1;
      puVar11 = unaff_s1;
      switch(*unaff_s7) {
      case 0:
        goto PRNT_OBJ_630;
      default:
        uVar9 = (uint)(char)*unaff_s7;
        _uStack00000038 = _uStack00000038 + 1;
        break;
      case 0x20:
        pbVar16 = unaff_s7;
        if (iVar17 == 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x23:
        bVar6 = true;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2a:
        puVar11 = unaff_s1 + 1;
        in_stack_00000044 = *unaff_s1;
        unaff_s1 = puVar11;
        pbVar16 = unaff_s7;
        if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
        in_stack_00000044 = -in_stack_00000044;
      case 0x2d:
        uVar14 = uVar14 | 0x10;
        unaff_s1 = puVar11;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2b:
        iVar17 = 0x2b;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2e:
        pbVar16 = pbVar16 + 2;
        bVar1 = *pbVar16;
        if (bVar1 == 0x2a) {
          PRNT_OBJ_168();
          return;
        }
        uVar9 = 0;
        while ((bVar1 < 0x80 && (uVar8 = (uint)*pbVar16, ((&DAT_8004187d)[uVar8] & 4) != 0))) {
          pbVar16 = pbVar16 + 1;
          bVar1 = *pbVar16;
          uVar9 = uVar9 * 10 + -0x30 + uVar8;
        }
        pbVar16 = pbVar16 + -1;
        if ((int)uVar9 < 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x30:
        uVar14 = uVar14 | 0x20;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        in_stack_00000044 = 0;
        goto PRNT_OBJ_184;
      case 0x44:
        bVar4 = true;
      case 100:
      case 0x69:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_244();
          return;
        }
        uVar8 = *unaff_s1;
        uVar10 = 10;
        if ((int)uVar8 < 0) {
          PRNT_OBJ_3CC();
          return;
        }
        goto code_r0x80034370;
      case 0x4c:
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x4f:
        bVar4 = true;
      case 0x6f:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,8);
          return;
        }
        PRNT_OBJ_3C8(uVar8,8);
        return;
      case 0x55:
        bVar4 = true;
      case 0x75:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,10);
          return;
        }
        PRNT_OBJ_3C8(uVar8,10);
        return;
      case 0x58:
        in_stack_00000048 = "0123456789ABCDEF";
      case 0x78:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3B4(uVar8,0x10);
          return;
        }
        uVar8 = *unaff_s1;
        uVar10 = 0x10;
        iVar17 = 0;
        if ((bVar6) && (uVar8 != 0)) {
          bVar3 = true;
          iVar17 = 0;
        }
code_r0x80034370:
        in_stack_0000003c = uVar9;
        if (-1 < (int)uVar9) {
          uVar14 = uVar14 & 0xffffffdf;
        }
        pcVar13 = (char *)&stack0x00000038;
        if ((uVar8 != 0) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar9 != 0))
        goto PRNT_OBJ_3F4;
        goto PRNT_OBJ_468;
      case 99:
        PRNT_OBJ_46C();
        return;
      case 0x68:
        bVar5 = true;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x6c:
        goto PRNT_OBJ_1EC;
      case 0x6e:
        if ((!bVar4) && (bVar5)) {
          *(undefined2 *)*unaff_s1 = uStack00000038;
          PRNT_OBJ_65C();
          return;
        }
        *(int *)*unaff_s1 = _uStack00000038;
        PRNT_OBJ_65C();
        return;
      case 0x70:
        PRNT_OBJ_3C8(uVar8,0x10);
        return;
      case 0x73:
        pcVar13 = (char *)*unaff_s1;
        if ((uchar *)pcVar13 == (uchar *)0x0) {
          pcVar13 = "(null)";
        }
        if ((int)uVar9 < 0) {
          iVar15 = FUN_80033d14(pcVar13);
          iVar17 = 0;
        }
        else {
          pvVar7 = memchr((uchar *)pcVar13,'\0',uVar9);
          iVar15 = (int)pvVar7 - (int)pcVar13;
          if ((pvVar7 == (void *)0x0) || (iVar17 = 0, (int)uVar9 < iVar15)) {
            PRNT_OBJ_334();
            return;
          }
        }
        goto code_r0x80034410;
      }
    }
    _putchar(uVar9);
    unaff_s7 = unaff_s7 + 1;
  } while( true );
PRNT_OBJ_1EC:
  bVar4 = true;
  pbVar16 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar12 = (uchar *)pcVar13;
    uVar9 = uVar8 / uVar10;
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar8 % uVar10];
    pcVar13 = (char *)(puVar12 + -1);
    *pcVar13 = uVar2;
    uVar8 = uVar9;
  } while (uVar9 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if (bVar6) {
    iVar15 = (int)auStackX_0 - (int)pcVar13;
    if ((uVar10 != 8) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar13 = (char *)(puVar12 + -2);
    *pcVar13 = '0';
  }
  iVar15 = (int)auStackX_0 - (int)pcVar13;
PRNT_OBJ_468:
  iVar15 = iVar15 + 0x38;
code_r0x80034410:
  uVar9 = iVar15 + in_stack_00000040;
  if (iVar17 != 0) {
    uVar9 = uVar9 + 1;
  }
  if (bVar3) {
    uVar9 = uVar9 + 2;
  }
  uVar8 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar9) {
    uVar8 = uVar9;
  }
  if (((uVar14 == 0) && (in_stack_00000044 != 0)) &&
     (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if (iVar17 != 0) {
    _putchar();
  }
  if (bVar3) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if ((uVar14 == 0x20) && (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if ((int)uVar9 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_0000003c);
  }
  while (iVar15 = iVar15 + -1, -1 < iVar15) {
    uVar2 = *pcVar13;
    pcVar13 = (char *)((uchar *)pcVar13 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((uVar14 & 0x10) != 0) && (uVar9 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_00000044);
  }
  uVar9 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar8) {
    uVar9 = uVar8;
  }
  _uStack00000038 = _uStack00000038 + uVar9;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_7C(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s1;
  uint *puVar6;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *unaff_s7;
  byte *pbVar10;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034020:
  do {
    pbVar10 = unaff_s7 + 1;
    puVar6 = unaff_s1;
    switch(*pbVar10) {
    case 0:
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    default:
      uVar4 = (uint)(char)*pbVar10;
      _uStack00000038 = _uStack00000038 + 1;
      do {
        _putchar(uVar4);
        pbVar10 = pbVar10 + 1;
        uVar4 = (uint)*pbVar10;
        if (uVar4 == 0) goto PRNT_OBJ_630;
        unaff_s3 = 0;
      } while (uVar4 != 0x25);
      unaff_s4 = 0xffffffff;
      unaff_s8 = 0;
      in_stack_0000003c = 0;
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      param_1 = 0x25;
      unaff_s7 = pbVar10;
      break;
    case 0x20:
      unaff_s7 = pbVar10;
      if (unaff_s8 == 0) {
        PRNT_OBJ_7C();
        return;
      }
      break;
    case 0x23:
      unaff_s3 = unaff_s3 | 8;
      unaff_s7 = pbVar10;
      break;
    case 0x2a:
      puVar6 = unaff_s1 + 1;
      in_stack_00000044 = *unaff_s1;
      unaff_s1 = puVar6;
      unaff_s7 = pbVar10;
      if (-1 < (int)in_stack_00000044) break;
      in_stack_00000044 = -in_stack_00000044;
    case 0x2d:
      unaff_s3 = unaff_s3 | 0x10;
      unaff_s1 = puVar6;
      unaff_s7 = pbVar10;
      break;
    case 0x2b:
      unaff_s8 = 0x2b;
      unaff_s7 = pbVar10;
      break;
    case 0x2e:
      goto PRNT_OBJ_F0;
    case 0x30:
      unaff_s3 = unaff_s3 | 0x20;
      unaff_s7 = pbVar10;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      in_stack_00000044 = 0;
      goto PRNT_OBJ_184;
    case 0x44:
      unaff_s3 = unaff_s3 | 1;
    case 100:
    case 0x69:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_244();
        return;
      }
      uVar4 = *unaff_s1;
      uVar5 = 10;
      if ((int)uVar4 < 0) {
        PRNT_OBJ_3CC();
        return;
      }
      goto code_r0x80034370;
    case 0x4c:
      unaff_s7 = pbVar10;
      break;
    case 0x4f:
      unaff_s3 = unaff_s3 | 1;
    case 0x6f:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,8);
        return;
      }
      PRNT_OBJ_3C8(param_1,8);
      return;
    case 0x55:
      unaff_s3 = unaff_s3 | 1;
    case 0x75:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,10);
        return;
      }
      PRNT_OBJ_3C8(param_1,10);
      return;
    case 0x58:
      in_stack_00000048 = "0123456789ABCDEF";
    case 0x78:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3B4(param_1,0x10);
        return;
      }
      uVar4 = *unaff_s1;
      uVar5 = 0x10;
      unaff_s8 = 0;
      if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
        unaff_s3 = unaff_s3 | 0x40;
        unaff_s8 = 0;
      }
code_r0x80034370:
      in_stack_0000003c = unaff_s4;
      if (-1 < (int)unaff_s4) {
        unaff_s3 = unaff_s3 & 0xffffffdf;
      }
      pcVar8 = (char *)&stack0x00000038;
      if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
      goto PRNT_OBJ_468;
    case 99:
      PRNT_OBJ_46C();
      return;
    case 0x68:
      unaff_s3 = unaff_s3 | 4;
      unaff_s7 = pbVar10;
      break;
    case 0x6c:
      unaff_s3 = unaff_s3 | 1;
      unaff_s7 = pbVar10;
      break;
    case 0x6e:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        *(undefined2 *)*unaff_s1 = uStack00000038;
        PRNT_OBJ_65C();
        return;
      }
      *(int *)*unaff_s1 = _uStack00000038;
      PRNT_OBJ_65C();
      return;
    case 0x70:
      PRNT_OBJ_3C8(param_1,0x10);
      return;
    case 0x73:
      pcVar8 = (char *)*unaff_s1;
      if ((uchar *)pcVar8 == (uchar *)0x0) {
        pcVar8 = "(null)";
      }
      if ((int)unaff_s4 < 0) {
        iVar9 = FUN_80033d14(pcVar8);
        unaff_s8 = 0;
      }
      else {
        pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
        iVar9 = (int)pvVar3 - (int)pcVar8;
        if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
          PRNT_OBJ_334();
          return;
        }
      }
      goto code_r0x80034410;
    }
  } while( true );
PRNT_OBJ_F0:
  pbVar10 = unaff_s7 + 2;
  bVar1 = *pbVar10;
  if (bVar1 == 0x2a) {
    PRNT_OBJ_168();
    return;
  }
  unaff_s4 = 0;
  while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
    pbVar10 = pbVar10 + 1;
    bVar1 = *pbVar10;
    unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
  }
  unaff_s7 = pbVar10 + -1;
  if ((int)unaff_s4 < 0) {
    PRNT_OBJ_7C();
    return;
  }
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*pbVar10] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *pbVar10) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*pbVar10);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_AC(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s1;
  uint *puVar6;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *unaff_s7;
  byte *pbVar10;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034050:
  pbVar10 = unaff_s7;
  if (unaff_s8 == 0) {
    PRNT_OBJ_7C();
    return;
  }
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    goto code_r0x80034050;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_BC(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_s1;
  uint *puVar6;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *unaff_s7;
  byte *pbVar10;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034060:
  unaff_s3 = unaff_s3 | 8;
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    goto code_r0x80034060;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_C4(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_s1;
  int *piVar7;
  uchar *puVar8;
  char *pcVar9;
  uint unaff_s3;
  int unaff_s4;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *unaff_s7;
  byte *pbVar13;
  int unaff_s8;
  uint uVar14;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int iStack00000044;
  char *in_stack_00000048;
  
code_r0x80034068:
  piVar7 = unaff_s1;
  iStack00000044 = *piVar7;
  pbVar13 = unaff_s7;
  if (-1 < iStack00000044) goto code_r0x80034020;
  iStack00000044 = -iStack00000044;
PRNT_OBJ_E0:
  unaff_s3 = unaff_s3 | 0x10;
  pbVar13 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar13 + 1;
  unaff_s1 = piVar7 + 1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = -1;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    iStack00000044 = 0;
    param_1 = 0x25;
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar13 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    goto code_r0x80034068;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x2d:
    goto PRNT_OBJ_E0;
  case 0x2e:
    pbVar13 = pbVar13 + 2;
    bVar1 = *pbVar13;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar13, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar13 = pbVar13 + 1;
      bVar1 = *pbVar13;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar13 = pbVar13 + -1;
    if (unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iStack00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = piVar7[1];
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    break;
  case 0x4c:
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = piVar7[1];
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
    break;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar13 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    goto PRNT_OBJ_1EC;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)piVar7[1] = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)piVar7[1] = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar9 = (char *)piVar7[1];
    if ((uchar *)pcVar9 == (uchar *)0x0) {
      pcVar9 = "(null)";
    }
    if (unaff_s4 < 0) {
      iVar12 = FUN_80033d14(pcVar9);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar9,'\0',unaff_s4);
      iVar12 = (int)pvVar3 - (int)pcVar9;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, unaff_s4 < iVar12)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  in_stack_0000003c = unaff_s4;
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar9 = (char *)&stack0x00000038;
  if ((uVar4 != 0) || (iVar12 = (int)auStackX_0 - (int)pcVar9, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
  goto PRNT_OBJ_468;
PRNT_OBJ_1EC:
  unaff_s3 = unaff_s3 | 1;
  pbVar13 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    iStack00000044 = iStack00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar8 = (uchar *)pcVar9;
    uVar14 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar9 = (char *)(puVar8 + -1);
    *pcVar9 = uVar2;
    uVar4 = uVar14;
  } while (uVar14 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar12 = (int)auStackX_0 - (int)pcVar9;
    if ((uVar5 != 8) || (iVar12 = (int)auStackX_0 - (int)pcVar9, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar9 = (char *)(puVar8 + -2);
    *pcVar9 = '0';
  }
  iVar12 = (int)auStackX_0 - (int)pcVar9;
PRNT_OBJ_468:
  iVar12 = iVar12 + 0x38;
code_r0x80034410:
  iVar10 = iVar12 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar10 = iVar10 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar10 = iVar10 + 2;
  }
  iVar11 = in_stack_0000003c;
  if (in_stack_0000003c < iVar10) {
    iVar11 = iVar10;
  }
  if ((((unaff_s3 & 0x30) == 0) && (iStack00000044 != 0)) &&
     (iVar6 = iVar11, iVar11 < iStack00000044)) {
    do {
      _putchar(0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (iVar6 = iVar11, iVar11 < iStack00000044)) {
    do {
      _putchar(0x30);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack00000044);
  }
  if (iVar10 < in_stack_0000003c) {
    do {
      _putchar(0x30);
      iVar10 = iVar10 + 1;
    } while (iVar10 < in_stack_0000003c);
  }
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
    uVar2 = *pcVar9;
    pcVar9 = (char *)((uchar *)pcVar9 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (iVar12 = iVar11, iVar11 < iStack00000044)) {
    do {
      _putchar(0x20);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iStack00000044);
  }
  iVar12 = iStack00000044;
  if (iStack00000044 < iVar11) {
    iVar12 = iVar11;
  }
  _uStack00000038 = _uStack00000038 + iVar12;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_E0(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *unaff_s7;
  byte *pbVar10;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034084:
  unaff_s3 = unaff_s3 | 0x10;
  puVar6 = unaff_s1;
  pbVar10 = unaff_s7;
code_r0x80034020:
  do {
    unaff_s7 = pbVar10 + 1;
    unaff_s1 = puVar6;
    switch(*unaff_s7) {
    case 0:
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    default:
      uVar4 = (uint)(char)*unaff_s7;
      _uStack00000038 = _uStack00000038 + 1;
      do {
        _putchar(uVar4);
        unaff_s7 = unaff_s7 + 1;
        uVar4 = (uint)*unaff_s7;
        if (uVar4 == 0) goto PRNT_OBJ_630;
        unaff_s3 = 0;
      } while (uVar4 != 0x25);
      unaff_s4 = 0xffffffff;
      unaff_s8 = 0;
      in_stack_0000003c = 0;
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      param_1 = 0x25;
      pbVar10 = unaff_s7;
      break;
    case 0x20:
      pbVar10 = unaff_s7;
      if (unaff_s8 == 0) {
        PRNT_OBJ_7C();
        return;
      }
      break;
    case 0x23:
      unaff_s3 = unaff_s3 | 8;
      pbVar10 = unaff_s7;
      break;
    case 0x2a:
      goto PRNT_OBJ_C4;
    case 0x2b:
      unaff_s8 = 0x2b;
      pbVar10 = unaff_s7;
      break;
    case 0x2d:
      goto code_r0x80034084;
    case 0x2e:
      pbVar10 = pbVar10 + 2;
      bVar1 = *pbVar10;
      if (bVar1 == 0x2a) {
        PRNT_OBJ_168();
        return;
      }
      unaff_s4 = 0;
      while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
        pbVar10 = pbVar10 + 1;
        bVar1 = *pbVar10;
        unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
      }
      pbVar10 = pbVar10 + -1;
      if ((int)unaff_s4 < 0) {
        PRNT_OBJ_7C();
        return;
      }
      break;
    case 0x30:
      unaff_s3 = unaff_s3 | 0x20;
      pbVar10 = unaff_s7;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      in_stack_00000044 = 0;
      goto PRNT_OBJ_184;
    case 0x44:
      unaff_s3 = unaff_s3 | 1;
    case 100:
    case 0x69:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_244();
        return;
      }
      uVar4 = *puVar6;
      uVar5 = 10;
      if ((int)uVar4 < 0) {
        PRNT_OBJ_3CC();
        return;
      }
code_r0x80034370:
      in_stack_0000003c = unaff_s4;
      if (-1 < (int)unaff_s4) {
        unaff_s3 = unaff_s3 & 0xffffffdf;
      }
      pcVar8 = (char *)&stack0x00000038;
      if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
      goto PRNT_OBJ_468;
    case 0x4c:
      pbVar10 = unaff_s7;
      break;
    case 0x4f:
      unaff_s3 = unaff_s3 | 1;
    case 0x6f:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,8);
        return;
      }
      PRNT_OBJ_3C8(param_1,8);
      return;
    case 0x55:
      unaff_s3 = unaff_s3 | 1;
    case 0x75:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,10);
        return;
      }
      PRNT_OBJ_3C8(param_1,10);
      return;
    case 0x58:
      in_stack_00000048 = "0123456789ABCDEF";
    case 0x78:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3B4(param_1,0x10);
        return;
      }
      uVar4 = *puVar6;
      uVar5 = 0x10;
      unaff_s8 = 0;
      if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
        unaff_s3 = unaff_s3 | 0x40;
        unaff_s8 = 0;
      }
      goto code_r0x80034370;
    case 99:
      PRNT_OBJ_46C();
      return;
    case 0x68:
      unaff_s3 = unaff_s3 | 4;
      pbVar10 = unaff_s7;
      break;
    case 0x6c:
      unaff_s3 = unaff_s3 | 1;
      pbVar10 = unaff_s7;
      break;
    case 0x6e:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        *(undefined2 *)*puVar6 = uStack00000038;
        PRNT_OBJ_65C();
        return;
      }
      *(int *)*puVar6 = _uStack00000038;
      PRNT_OBJ_65C();
      return;
    case 0x70:
      PRNT_OBJ_3C8(param_1,0x10);
      return;
    case 0x73:
      pcVar8 = (char *)*puVar6;
      if ((uchar *)pcVar8 == (uchar *)0x0) {
        pcVar8 = "(null)";
      }
      if ((int)unaff_s4 < 0) {
        iVar9 = FUN_80033d14(pcVar8);
        unaff_s8 = 0;
      }
      else {
        pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
        iVar9 = (int)pvVar3 - (int)pcVar8;
        if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
          PRNT_OBJ_334();
          return;
        }
      }
      goto code_r0x80034410;
    }
  } while( true );
PRNT_OBJ_C4:
  unaff_s1 = puVar6 + 1;
  in_stack_00000044 = *puVar6;
  puVar6 = unaff_s1;
  pbVar10 = unaff_s7;
  if ((int)in_stack_00000044 < 0) goto code_r0x8003407c;
  goto code_r0x80034020;
code_r0x8003407c:
  in_stack_00000044 = -in_stack_00000044;
  goto code_r0x80034084;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_E8(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *unaff_s7;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x8003408c:
  iVar11 = 0x2b;
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    iVar11 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (iVar11 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    goto code_r0x8003408c;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    iVar11 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      iVar11 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      iVar11 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (iVar11 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar12 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar12;
  } while (uVar12 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (iVar11 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar12 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)in_stack_00000044);
  }
  if (iVar11 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar12 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_F0(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *unaff_s1;
  uchar *puVar8;
  char *pcVar9;
  uint unaff_s3;
  int iVar10;
  byte *unaff_s7;
  byte *pbVar11;
  int unaff_s8;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034094:
  pbVar11 = unaff_s7 + 1;
  bVar1 = *pbVar11;
  if (bVar1 == 0x2a) {
    PRNT_OBJ_168();
    return;
  }
  uVar6 = 0;
  while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar11, ((&DAT_8004187d)[param_1] & 4) != 0))) {
    pbVar11 = pbVar11 + 1;
    bVar1 = *pbVar11;
    uVar6 = uVar6 * 10 + -0x30 + param_1;
  }
  unaff_s7 = pbVar11 + -1;
  if ((int)uVar6 < 0) {
    PRNT_OBJ_7C();
    return;
  }
code_r0x80034020:
  unaff_s7 = unaff_s7 + 1;
  puVar7 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar6 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar6);
      unaff_s7 = unaff_s7 + 1;
      uVar6 = (uint)*unaff_s7;
      if (uVar6 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar6 != 0x25);
    uVar6 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    goto code_r0x80034020;
  case 0x20:
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    goto code_r0x80034020;
  case 0x2a:
    puVar7 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    goto code_r0x80034020;
  case 0x2e:
    goto code_r0x80034094;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = uVar6;
    if (-1 < (int)uVar6) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar9 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar10 = (int)auStackX_0 - (int)pcVar9, uVar6 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar9 = (char *)*unaff_s1;
    if ((uchar *)pcVar9 == (uchar *)0x0) {
      pcVar9 = "(null)";
    }
    if ((int)uVar6 < 0) {
      iVar10 = FUN_80033d14(pcVar9);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar9,'\0',uVar6);
      iVar10 = (int)pvVar3 - (int)pcVar9;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)uVar6 < iVar10)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar8 = (uchar *)pcVar9;
    uVar6 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar9 = (char *)(puVar8 + -1);
    *pcVar9 = uVar2;
    uVar4 = uVar6;
  } while (uVar6 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar10 = (int)auStackX_0 - (int)pcVar9;
    if ((uVar5 != 8) || (iVar10 = (int)auStackX_0 - (int)pcVar9, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar9 = (char *)(puVar8 + -2);
    *pcVar9 = '0';
  }
  iVar10 = (int)auStackX_0 - (int)pcVar9;
PRNT_OBJ_468:
  iVar10 = iVar10 + 0x38;
code_r0x80034410:
  uVar6 = iVar10 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar6 = uVar6 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar6 = uVar6 + 2;
  }
  uVar4 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar6) {
    uVar4 = uVar6;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar5 = uVar4, (int)uVar4 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar5 = uVar4, (int)uVar4 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)in_stack_00000044);
  }
  if ((int)uVar6 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)in_stack_0000003c);
  }
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    uVar2 = *pcVar9;
    pcVar9 = (char *)((uchar *)pcVar9 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar6 = uVar4, (int)uVar4 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)in_stack_00000044);
  }
  uVar6 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar4) {
    uVar6 = uVar4;
  }
  _uStack00000038 = _uStack00000038 + uVar6;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_168(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_s0;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *pbVar10;
  byte *unaff_s7;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
  do {
    if ((int)unaff_s0 < 0) {
      PRNT_OBJ_7C();
      return;
    }
code_r0x80034020:
    pbVar10 = unaff_s7 + 1;
    puVar6 = unaff_s1;
    switch(*pbVar10) {
    case 0:
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    default:
      uVar4 = (uint)(char)*pbVar10;
      _uStack00000038 = _uStack00000038 + 1;
      do {
        _putchar(uVar4);
        pbVar10 = pbVar10 + 1;
        uVar4 = (uint)*pbVar10;
        if (uVar4 == 0) goto PRNT_OBJ_630;
        unaff_s3 = 0;
      } while (uVar4 != 0x25);
      unaff_s4 = 0xffffffff;
      unaff_s8 = 0;
      in_stack_0000003c = 0;
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      param_1 = 0x25;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x20:
      unaff_s7 = pbVar10;
      if (unaff_s8 == 0) {
        PRNT_OBJ_7C();
        return;
      }
      goto code_r0x80034020;
    case 0x23:
      unaff_s3 = unaff_s3 | 8;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x2a:
      puVar6 = unaff_s1 + 1;
      in_stack_00000044 = *unaff_s1;
      unaff_s1 = puVar6;
      unaff_s7 = pbVar10;
      if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
      in_stack_00000044 = -in_stack_00000044;
    case 0x2d:
      unaff_s3 = unaff_s3 | 0x10;
      unaff_s1 = puVar6;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x2b:
      unaff_s8 = 0x2b;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x2e:
      pbVar10 = unaff_s7 + 2;
      bVar1 = *pbVar10;
      if (bVar1 == 0x2a) {
        PRNT_OBJ_168();
        return;
      }
      unaff_s0 = 0;
      while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
        pbVar10 = pbVar10 + 1;
        bVar1 = *pbVar10;
        unaff_s0 = unaff_s0 * 10 + -0x30 + param_1;
      }
      unaff_s7 = pbVar10 + -1;
      unaff_s4 = unaff_s0;
      break;
    case 0x30:
      unaff_s3 = unaff_s3 | 0x20;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      in_stack_00000044 = 0;
      goto PRNT_OBJ_184;
    case 0x44:
      unaff_s3 = unaff_s3 | 1;
    case 100:
    case 0x69:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_244();
        return;
      }
      uVar4 = *unaff_s1;
      uVar5 = 10;
      if ((int)uVar4 < 0) {
        PRNT_OBJ_3CC();
        return;
      }
      goto code_r0x80034370;
    case 0x4c:
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x4f:
      unaff_s3 = unaff_s3 | 1;
    case 0x6f:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,8);
        return;
      }
      PRNT_OBJ_3C8(param_1,8);
      return;
    case 0x55:
      unaff_s3 = unaff_s3 | 1;
    case 0x75:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3CC(param_1,10);
        return;
      }
      PRNT_OBJ_3C8(param_1,10);
      return;
    case 0x58:
      in_stack_00000048 = "0123456789ABCDEF";
    case 0x78:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        PRNT_OBJ_3B4(param_1,0x10);
        return;
      }
      uVar4 = *unaff_s1;
      uVar5 = 0x10;
      unaff_s8 = 0;
      if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
        unaff_s3 = unaff_s3 | 0x40;
        unaff_s8 = 0;
      }
code_r0x80034370:
      in_stack_0000003c = unaff_s4;
      if (-1 < (int)unaff_s4) {
        unaff_s3 = unaff_s3 & 0xffffffdf;
      }
      pcVar8 = (char *)&stack0x00000038;
      if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
      goto PRNT_OBJ_468;
    case 99:
      PRNT_OBJ_46C();
      return;
    case 0x68:
      unaff_s3 = unaff_s3 | 4;
      unaff_s7 = pbVar10;
      goto code_r0x80034020;
    case 0x6c:
      goto PRNT_OBJ_1EC;
    case 0x6e:
      if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
        *(undefined2 *)*unaff_s1 = uStack00000038;
        PRNT_OBJ_65C();
        return;
      }
      *(int *)*unaff_s1 = _uStack00000038;
      PRNT_OBJ_65C();
      return;
    case 0x70:
      PRNT_OBJ_3C8(param_1,0x10);
      return;
    case 0x73:
      pcVar8 = (char *)*unaff_s1;
      if ((uchar *)pcVar8 == (uchar *)0x0) {
        pcVar8 = "(null)";
      }
      if ((int)unaff_s4 < 0) {
        iVar9 = FUN_80033d14(pcVar8);
        unaff_s8 = 0;
      }
      else {
        pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
        iVar9 = (int)pvVar3 - (int)pcVar8;
        if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
          PRNT_OBJ_334();
          return;
        }
      }
      goto code_r0x80034410;
    }
  } while( true );
PRNT_OBJ_1EC:
  unaff_s3 = unaff_s3 | 1;
  unaff_s7 = pbVar10;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*pbVar10] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *pbVar10) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*pbVar10);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_178(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *pbVar10;
  byte *unaff_s7;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x8003411c:
  unaff_s3 = unaff_s3 | 0x20;
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    goto code_r0x8003411c;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_180(void)

{
  byte bVar1;
  byte *unaff_s7;
  int iStack00000044;
  
  iStack00000044 = 0;
  do {
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    iStack00000044 = iStack00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  } while (((&DAT_8004187d)[*unaff_s7] & 4) != 0);
  PRNT_OBJ_7C();
  return;
}



void PRNT_OBJ_1DC(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *pbVar10;
  byte *unaff_s7;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034180:
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    goto code_r0x80034180;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    unaff_s3 = unaff_s3 | 4;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_1E4(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *pbVar10;
  byte *unaff_s7;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034188:
  unaff_s3 = unaff_s3 | 4;
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    goto code_r0x80034188;
  case 0x6c:
    break;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_1EC(uint param_1)

{
  byte bVar1;
  uchar uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *unaff_s1;
  uchar *puVar7;
  char *pcVar8;
  uint unaff_s3;
  uint unaff_s4;
  int iVar9;
  byte *pbVar10;
  byte *unaff_s7;
  int unaff_s8;
  uint uVar11;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x80034190:
  unaff_s3 = unaff_s3 | 1;
  pbVar10 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar10 + 1;
  puVar6 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
PRNT_OBJ_630:
    _putchar_flash();
    PRNT_OBJ_664();
    return;
  default:
    uVar4 = (uint)(char)*unaff_s7;
    _uStack00000038 = _uStack00000038 + 1;
    do {
      _putchar(uVar4);
      unaff_s7 = unaff_s7 + 1;
      uVar4 = (uint)*unaff_s7;
      if (uVar4 == 0) goto PRNT_OBJ_630;
      unaff_s3 = 0;
    } while (uVar4 != 0x25);
    unaff_s4 = 0xffffffff;
    unaff_s8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    param_1 = 0x25;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x20:
    pbVar10 = unaff_s7;
    if (unaff_s8 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    unaff_s3 = unaff_s3 | 8;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar6 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    unaff_s3 = unaff_s3 | 0x10;
    unaff_s1 = puVar6;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    unaff_s8 = 0x2b;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar10 = pbVar10 + 2;
    bVar1 = *pbVar10;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    unaff_s4 = 0;
    while ((bVar1 < 0x80 && (param_1 = (uint)*pbVar10, ((&DAT_8004187d)[param_1] & 4) != 0))) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
      unaff_s4 = unaff_s4 * 10 + -0x30 + param_1;
    }
    pbVar10 = pbVar10 + -1;
    if ((int)unaff_s4 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    unaff_s3 = unaff_s3 | 0x20;
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    unaff_s3 = unaff_s3 | 1;
  case 100:
  case 0x69:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_244();
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 10;
    if ((int)uVar4 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar10 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    unaff_s3 = unaff_s3 | 1;
  case 0x6f:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,8);
      return;
    }
    PRNT_OBJ_3C8(param_1,8);
    return;
  case 0x55:
    unaff_s3 = unaff_s3 | 1;
  case 0x75:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3CC(param_1,10);
      return;
    }
    PRNT_OBJ_3C8(param_1,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      PRNT_OBJ_3B4(param_1,0x10);
      return;
    }
    uVar4 = *unaff_s1;
    uVar5 = 0x10;
    unaff_s8 = 0;
    if (((unaff_s3 & 8) != 0) && (uVar4 != 0)) {
      unaff_s3 = unaff_s3 | 0x40;
      unaff_s8 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = unaff_s4;
    if (-1 < (int)unaff_s4) {
      unaff_s3 = unaff_s3 & 0xffffffdf;
    }
    pcVar8 = (char *)&stack0x00000038;
    if ((uVar4 != 0) || (iVar9 = (int)auStackX_0 - (int)pcVar8, unaff_s4 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    break;
  case 0x6c:
    goto code_r0x80034190;
  case 0x6e:
    if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(param_1,0x10);
    return;
  case 0x73:
    pcVar8 = (char *)*unaff_s1;
    if ((uchar *)pcVar8 == (uchar *)0x0) {
      pcVar8 = "(null)";
    }
    if ((int)unaff_s4 < 0) {
      iVar9 = FUN_80033d14(pcVar8);
      unaff_s8 = 0;
    }
    else {
      pvVar3 = memchr((uchar *)pcVar8,'\0',unaff_s4);
      iVar9 = (int)pvVar3 - (int)pcVar8;
      if ((pvVar3 == (void *)0x0) || (unaff_s8 = 0, (int)unaff_s4 < iVar9)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  unaff_s3 = unaff_s3 | 4;
  pbVar10 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar7 = (uchar *)pcVar8;
    uVar11 = uVar4 / uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar4 % uVar5];
    pcVar8 = (char *)(puVar7 + -1);
    *pcVar8 = uVar2;
    uVar4 = uVar11;
  } while (uVar11 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if ((unaff_s3 & 8) != 0) {
    iVar9 = (int)auStackX_0 - (int)pcVar8;
    if ((uVar5 != 8) || (iVar9 = (int)auStackX_0 - (int)pcVar8, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar8 = (char *)(puVar7 + -2);
    *pcVar8 = '0';
  }
  iVar9 = (int)auStackX_0 - (int)pcVar8;
PRNT_OBJ_468:
  iVar9 = iVar9 + 0x38;
code_r0x80034410:
  uVar4 = iVar9 + in_stack_00000040;
  if (unaff_s8 != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    uVar4 = uVar4 + 2;
  }
  uVar5 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar4) {
    uVar5 = uVar4;
  }
  if ((((unaff_s3 & 0x30) == 0) && (in_stack_00000044 != 0)) &&
     (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if (((unaff_s3 & 0x30) == 0x20) && (uVar11 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)in_stack_00000044);
  }
  if ((int)uVar4 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_0000003c);
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    uVar2 = *pcVar8;
    pcVar8 = (char *)((uchar *)pcVar8 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (uVar4 = uVar5, (int)uVar5 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)in_stack_00000044);
  }
  uVar4 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar5) {
    uVar4 = uVar5;
  }
  _uStack00000038 = _uStack00000038 + uVar4;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_1F4(void)

{
  undefined1 *unaff_s1;
  undefined1 uStack00000010;
  
  uStack00000010 = *unaff_s1;
  PRNT_OBJ_46C();
  return;
}



// WARNING: Removing unreachable block (ram,0x800343a4)
// WARNING: Removing unreachable block (ram,0x800341c4)
// WARNING: Removing unreachable block (ram,0x800341cc)
// WARNING: Removing unreachable block (ram,0x800343ec)
// WARNING: Removing unreachable block (ram,0x80034400)

void PRNT_OBJ_210(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_s1;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  int unaff_s8;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  uVar3 = *unaff_s1;
  if ((int)uVar3 < 0) {
    PRNT_OBJ_3CC();
    return;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((uVar3 != 0) || (iVar4 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      uVar8 = uVar3 / 10;
      pcVar5 = pcVar5 + -1;
      *pcVar5 = *(char *)(in_stack_00000048 + uVar3 % 10);
      uVar3 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) == 0) {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
    else {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
  }
  iVar6 = iVar4 + 0x38 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = iVar4 + 0x37; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar4 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar4 < in_stack_00000044; iVar4 = iVar4 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x800343a4)
// WARNING: Removing unreachable block (ram,0x800343ec)
// WARNING: Removing unreachable block (ram,0x80034400)

void PRNT_OBJ_214(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_s1;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  int unaff_s8;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    PRNT_OBJ_244();
    return;
  }
  uVar3 = *unaff_s1;
  if ((int)uVar3 < 0) {
    PRNT_OBJ_3CC();
    return;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((uVar3 != 0) || (iVar4 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      uVar8 = uVar3 / 10;
      pcVar5 = pcVar5 + -1;
      *pcVar5 = *(char *)(in_stack_00000048 + uVar3 % 10);
      uVar3 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) == 0) {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
    else {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
  }
  iVar6 = iVar4 + 0x38 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = iVar4 + 0x37; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar4 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar4 < in_stack_00000044; iVar4 = iVar4 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x800343a4)
// WARNING: Removing unreachable block (ram,0x800343ec)
// WARNING: Removing unreachable block (ram,0x80034400)

void PRNT_OBJ_244(void)

{
  char cVar1;
  int iVar2;
  uint in_v1;
  int iVar3;
  char *pcVar4;
  uint unaff_s3;
  int unaff_s4;
  int iVar5;
  int iVar6;
  char *unaff_s7;
  int unaff_s8;
  uint uVar7;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if ((int)in_v1 < 0) {
    PRNT_OBJ_3CC();
    return;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar4 = (char *)&stack0x00000038;
  if ((in_v1 != 0) || (iVar3 = (int)auStackX_0 - (int)pcVar4, unaff_s4 != 0)) {
    do {
      uVar7 = in_v1 / 10;
      pcVar4 = pcVar4 + -1;
      *pcVar4 = *(char *)(in_stack_00000048 + in_v1 % 10);
      in_v1 = uVar7;
    } while (uVar7 != 0);
    if ((unaff_s3 & 8) == 0) {
      iVar3 = (int)auStackX_0 - (int)pcVar4;
    }
    else {
      iVar3 = (int)auStackX_0 - (int)pcVar4;
    }
  }
  iVar5 = iVar3 + 0x38 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar5 = iVar5 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar5 = iVar5 + 2;
  }
  iVar6 = unaff_s4;
  if (unaff_s4 < iVar5) {
    iVar6 = iVar5;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar6, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar6;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar5 < unaff_s4; iVar5 = iVar5 + 1) {
    _putchar(0x30);
  }
  for (iVar3 = iVar3 + 0x37; -1 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar3 = iVar6;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar6) {
    in_stack_00000044 = iVar6;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_258(void)

{
  undefined4 *unaff_s1;
  uint unaff_s3;
  undefined2 uStack00000038;
  
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    *(undefined2 *)*unaff_s1 = uStack00000038;
    PRNT_OBJ_65C();
    return;
  }
  *(undefined4 *)*unaff_s1 = _uStack00000038;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x80034248)
// WARNING: Removing unreachable block (ram,0x80034250)

void PRNT_OBJ_294(undefined4 param_1)

{
  PRNT_OBJ_3C8(param_1,8);
  return;
}



void PRNT_OBJ_298(undefined4 param_1)

{
  uint unaff_s3;
  
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    PRNT_OBJ_3CC(param_1,8);
    return;
  }
  PRNT_OBJ_3C8(param_1,8);
  return;
}



void PRNT_OBJ_2CC(undefined4 param_1)

{
  PRNT_OBJ_3C8(param_1,0x10);
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_2DC(void)

{
  uchar uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *unaff_s1;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  pcVar5 = (char *)*unaff_s1;
  if ((uchar *)pcVar5 == (uchar *)0x0) {
    pcVar5 = "(null)";
  }
  if (unaff_s4 < 0) {
    iVar7 = FUN_80033d14(pcVar5);
  }
  else {
    pvVar3 = memchr((uchar *)pcVar5,'\0',unaff_s4);
    iVar7 = (int)pvVar3 - (int)pcVar5;
    if ((pvVar3 == (void *)0x0) || (unaff_s4 < iVar7)) {
      PRNT_OBJ_334();
      return;
    }
  }
  iVar6 = iVar7 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar4 = in_stack_0000003c;
  if (in_stack_0000003c < iVar6) {
    iVar4 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar4, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar4;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < in_stack_0000003c; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    uVar1 = *pcVar5;
    pcVar5 = (char *)((uchar *)pcVar5 + 1);
    _putchar((int)(char)uVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar4 < in_stack_00000044; iVar4 = iVar4 + 1) {
      _putchar(0x20);
    }
  }
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_334(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *unaff_s2;
  uint unaff_s3;
  int iVar4;
  int unaff_s6;
  char *unaff_s7;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  iVar4 = unaff_s6 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar4 = iVar4 + 2;
  }
  iVar3 = in_stack_0000003c;
  if (in_stack_0000003c < iVar4) {
    iVar3 = iVar4;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar3, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar3;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar4 < in_stack_0000003c; iVar4 = iVar4 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = unaff_s6 + -1; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x800342f0)
// WARNING: Removing unreachable block (ram,0x800342f8)

void PRNT_OBJ_33C(undefined4 param_1)

{
  PRNT_OBJ_3C8(param_1,10);
  return;
}



void PRNT_OBJ_340(undefined4 param_1)

{
  uint unaff_s3;
  
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    PRNT_OBJ_3CC(param_1,10);
    return;
  }
  PRNT_OBJ_3C8(param_1,10);
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x800343a4)
// WARNING: Removing unreachable block (ram,0x800343ec)
// WARNING: Removing unreachable block (ram,0x80034400)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_374(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_s1;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  char *pcStack00000048;
  
  pcStack00000048 = "0123456789ABCDEF";
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    PRNT_OBJ_3B4(param_1,0x10);
    return;
  }
  uVar3 = *unaff_s1;
  if (((unaff_s3 & 8) != 0) && (uVar3 != 0)) {
    unaff_s3 = unaff_s3 | 0x40;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((uVar3 != 0) || (iVar4 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      uVar8 = uVar3 / 0x10;
      pcVar5 = pcVar5 + -1;
      *pcVar5 = "0123456789ABCDEF"[uVar3 % 0x10];
      uVar3 = uVar8;
    } while (uVar8 != 0);
    pcStack00000048 = "0123456789abcdef";
    if ((unaff_s3 & 8) == 0) {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
    else {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
  }
  iVar6 = iVar4 + 0x38 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = iVar4 + 0x37; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar4 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar4 < in_stack_00000044; iVar4 = iVar4 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x800343a4)
// WARNING: Removing unreachable block (ram,0x800343ec)
// WARNING: Removing unreachable block (ram,0x80034400)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_380(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_s1;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if (((unaff_s3 & 1) == 0) && ((unaff_s3 & 4) != 0)) {
    PRNT_OBJ_3B4(param_1,0x10);
    return;
  }
  uVar3 = *unaff_s1;
  if (((unaff_s3 & 8) != 0) && (uVar3 != 0)) {
    unaff_s3 = unaff_s3 | 0x40;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((uVar3 != 0) || (iVar4 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      uVar8 = uVar3 / 0x10;
      pcVar5 = pcVar5 + -1;
      *pcVar5 = *(char *)(in_stack_00000048 + uVar3 % 0x10);
      uVar3 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) == 0) {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
    else {
      iVar4 = (int)auStackX_0 - (int)pcVar5;
    }
  }
  iVar6 = iVar4 + 0x38 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = iVar4 + 0x37; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar4 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar4 < in_stack_00000044; iVar4 = iVar4 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_3B4(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int in_v0;
  uint in_v1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if ((in_v0 != 0) && (in_v1 != 0)) {
    unaff_s3 = unaff_s3 | 0x40;
  }
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((in_v1 != 0) || (iVar3 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      pcVar4 = pcVar5;
      uVar8 = in_v1 / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
      cVar1 = *(char *)(in_stack_00000048 + in_v1 % param_2);
      pcVar5 = pcVar4 + -1;
      *pcVar5 = cVar1;
      in_v1 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) != 0) {
      iVar3 = (int)auStackX_0 - (int)pcVar5;
      if ((param_2 != 8) || (iVar3 = (int)auStackX_0 - (int)pcVar5, cVar1 == '0'))
      goto PRNT_OBJ_468;
      pcVar5 = pcVar4 + -2;
      *pcVar5 = '0';
    }
    iVar3 = (int)auStackX_0 - (int)pcVar5;
  }
PRNT_OBJ_468:
  iVar6 = iVar3 + 0x38 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar3 = iVar3 + 0x37; -1 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar3 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



// WARNING: Removing unreachable block (ram,0x8003441c)
// WARNING: Removing unreachable block (ram,0x8003448c)

void PRNT_OBJ_3C8(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint in_v1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((in_v1 != 0) || (iVar3 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      pcVar4 = pcVar5;
      uVar8 = in_v1 / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
      cVar1 = *(char *)(in_stack_00000048 + in_v1 % param_2);
      pcVar5 = pcVar4 + -1;
      *pcVar5 = cVar1;
      in_v1 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) != 0) {
      iVar3 = (int)auStackX_0 - (int)pcVar5;
      if ((param_2 != 8) || (iVar3 = (int)auStackX_0 - (int)pcVar5, cVar1 == '0'))
      goto PRNT_OBJ_468;
      pcVar5 = pcVar4 + -2;
      *pcVar5 = '0';
    }
    iVar3 = (int)auStackX_0 - (int)pcVar5;
  }
PRNT_OBJ_468:
  iVar6 = iVar3 + 0x38 + in_stack_00000040;
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar3 = iVar3 + 0x37; -1 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar3 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_3CC(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint in_v1;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_s3;
  int unaff_s4;
  int iVar6;
  int iVar7;
  char *unaff_s7;
  int unaff_s8;
  uint uVar8;
  undefined1 auStackX_0 [16];
  int in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  
  if (-1 < unaff_s4) {
    unaff_s3 = unaff_s3 & 0xffffffdf;
  }
  pcVar5 = (char *)&stack0x00000038;
  if ((in_v1 != 0) || (iVar3 = (int)auStackX_0 - (int)pcVar5, unaff_s4 != 0)) {
    do {
      pcVar4 = pcVar5;
      uVar8 = in_v1 / param_2;
      if (param_2 == 0) {
        trap(0x1c00);
      }
      cVar1 = *(char *)(in_stack_00000048 + in_v1 % param_2);
      pcVar5 = pcVar4 + -1;
      *pcVar5 = cVar1;
      in_v1 = uVar8;
    } while (uVar8 != 0);
    if ((unaff_s3 & 8) != 0) {
      iVar3 = (int)auStackX_0 - (int)pcVar5;
      if ((param_2 != 8) || (iVar3 = (int)auStackX_0 - (int)pcVar5, cVar1 == '0'))
      goto PRNT_OBJ_468;
      pcVar5 = pcVar4 + -2;
      *pcVar5 = '0';
    }
    iVar3 = (int)auStackX_0 - (int)pcVar5;
  }
PRNT_OBJ_468:
  iVar6 = iVar3 + 0x38 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar6 = iVar6 + 2;
  }
  iVar7 = unaff_s4;
  if (unaff_s4 < iVar6) {
    iVar7 = iVar6;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar7, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar7;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar6 < unaff_s4; iVar6 = iVar6 + 1) {
    _putchar(0x30);
  }
  for (iVar3 = iVar3 + 0x37; -1 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  iVar3 = iVar7;
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  if (in_stack_00000044 < iVar7) {
    in_stack_00000044 = iVar7;
  }
  in_stack_00000038 = in_stack_00000038 + in_stack_00000044;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_46C(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *unaff_s2;
  uint unaff_s3;
  int iVar4;
  int unaff_s6;
  char *unaff_s7;
  int unaff_s8;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  
  iVar4 = unaff_s6 + in_stack_00000040;
  if (unaff_s8 != 0) {
    iVar4 = iVar4 + 1;
  }
  if ((unaff_s3 & 0x40) != 0) {
    iVar4 = iVar4 + 2;
  }
  iVar3 = in_stack_0000003c;
  if (in_stack_0000003c < iVar4) {
    iVar3 = iVar4;
  }
  if (((unaff_s3 & 0x30) == 0) && (iVar2 = iVar3, in_stack_00000044 != 0)) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x20);
    }
  }
  if (unaff_s8 != 0) {
    _putchar();
  }
  if ((unaff_s3 & 0x40) != 0) {
    _putchar(0x30);
    _putchar((int)*unaff_s7);
  }
  iVar2 = iVar3;
  if ((unaff_s3 & 0x30) == 0x20) {
    for (; iVar2 < in_stack_00000044; iVar2 = iVar2 + 1) {
      _putchar(0x30);
    }
  }
  for (; iVar4 < in_stack_0000003c; iVar4 = iVar4 + 1) {
    _putchar(0x30);
  }
  for (iVar4 = unaff_s6 + -1; -1 < iVar4; iVar4 = iVar4 + -1) {
    cVar1 = *unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    _putchar((int)cVar1);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if ((unaff_s3 & 0x10) != 0) {
    for (; iVar3 < in_stack_00000044; iVar3 = iVar3 + 1) {
      _putchar(0x20);
    }
  }
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_58C(void)

{
  char cVar1;
  int unaff_s0;
  char *unaff_s2;
  uint unaff_s3;
  int unaff_s5;
  int in_stack_00000040;
  int in_stack_00000044;
  
  do {
    cVar1 = *unaff_s2;
    unaff_s2 = unaff_s2 + 1;
    unaff_s0 = unaff_s0 + -1;
    _putchar((int)cVar1);
  } while (-1 < unaff_s0);
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((unaff_s3 & 0x10) != 0) && (unaff_s5 < in_stack_00000044)) {
    do {
      _putchar(0x20);
      unaff_s5 = unaff_s5 + 1;
    } while (unaff_s5 < in_stack_00000044);
  }
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_630(void)

{
  _putchar_flash();
  PRNT_OBJ_664();
  return;
}



void PRNT_OBJ_644(void)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *unaff_s1;
  uchar *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  byte *unaff_s7;
  int iVar17;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
code_r0x800345e8:
  uVar9 = (uint)(char)*unaff_s7;
  _uStack00000038 = _uStack00000038 + 1;
  do {
    _putchar(uVar9);
    unaff_s7 = unaff_s7 + 1;
    uVar9 = (uint)*unaff_s7;
    if (uVar9 == 0) goto PRNT_OBJ_630;
    uVar14 = 0;
    bVar3 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
  } while (uVar9 != 0x25);
  uVar9 = 0xffffffff;
  iVar17 = 0;
  in_stack_0000003c = 0;
  in_stack_00000040 = 0;
  in_stack_00000044 = 0;
  uVar8 = 0x25;
  pbVar16 = unaff_s7;
code_r0x80034020:
  unaff_s7 = pbVar16 + 1;
  puVar11 = unaff_s1;
  switch(*unaff_s7) {
  case 0:
    goto PRNT_OBJ_630;
  case 0x20:
    pbVar16 = unaff_s7;
    if (iVar17 == 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x23:
    bVar6 = true;
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x2a:
    puVar11 = unaff_s1 + 1;
    in_stack_00000044 = *unaff_s1;
    unaff_s1 = puVar11;
    pbVar16 = unaff_s7;
    if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
    in_stack_00000044 = -in_stack_00000044;
  case 0x2d:
    uVar14 = uVar14 | 0x10;
    unaff_s1 = puVar11;
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x2b:
    iVar17 = 0x2b;
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x2e:
    pbVar16 = pbVar16 + 2;
    bVar1 = *pbVar16;
    if (bVar1 == 0x2a) {
      PRNT_OBJ_168();
      return;
    }
    uVar9 = 0;
    while ((bVar1 < 0x80 && (uVar8 = (uint)*pbVar16, ((&DAT_8004187d)[uVar8] & 4) != 0))) {
      pbVar16 = pbVar16 + 1;
      bVar1 = *pbVar16;
      uVar9 = uVar9 * 10 + -0x30 + uVar8;
    }
    pbVar16 = pbVar16 + -1;
    if ((int)uVar9 < 0) {
      PRNT_OBJ_7C();
      return;
    }
    goto code_r0x80034020;
  case 0x30:
    uVar14 = uVar14 | 0x20;
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    in_stack_00000044 = 0;
    goto PRNT_OBJ_184;
  case 0x44:
    bVar4 = true;
  case 100:
  case 0x69:
    if ((!bVar4) && (bVar5)) {
      PRNT_OBJ_244();
      return;
    }
    uVar8 = *unaff_s1;
    uVar10 = 10;
    if ((int)uVar8 < 0) {
      PRNT_OBJ_3CC();
      return;
    }
    goto code_r0x80034370;
  case 0x4c:
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x4f:
    bVar4 = true;
  case 0x6f:
    if ((!bVar4) && (bVar5)) {
      PRNT_OBJ_3CC(uVar8,8);
      return;
    }
    PRNT_OBJ_3C8(uVar8,8);
    return;
  case 0x55:
    bVar4 = true;
  case 0x75:
    if ((!bVar4) && (bVar5)) {
      PRNT_OBJ_3CC(uVar8,10);
      return;
    }
    PRNT_OBJ_3C8(uVar8,10);
    return;
  case 0x58:
    in_stack_00000048 = "0123456789ABCDEF";
  case 0x78:
    if ((!bVar4) && (bVar5)) {
      PRNT_OBJ_3B4(uVar8,0x10);
      return;
    }
    uVar8 = *unaff_s1;
    uVar10 = 0x10;
    iVar17 = 0;
    if ((bVar6) && (uVar8 != 0)) {
      bVar3 = true;
      iVar17 = 0;
    }
code_r0x80034370:
    in_stack_0000003c = uVar9;
    if (-1 < (int)uVar9) {
      uVar14 = uVar14 & 0xffffffdf;
    }
    pcVar13 = (char *)&stack0x00000038;
    if ((uVar8 != 0) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar9 != 0)) goto PRNT_OBJ_3F4;
    goto PRNT_OBJ_468;
  case 99:
    PRNT_OBJ_46C();
    return;
  case 0x68:
    bVar5 = true;
    pbVar16 = unaff_s7;
    goto code_r0x80034020;
  case 0x6c:
    goto PRNT_OBJ_1EC;
  case 0x6e:
    if ((!bVar4) && (bVar5)) {
      *(undefined2 *)*unaff_s1 = uStack00000038;
      PRNT_OBJ_65C();
      return;
    }
    *(int *)*unaff_s1 = _uStack00000038;
    PRNT_OBJ_65C();
    return;
  case 0x70:
    PRNT_OBJ_3C8(uVar8,0x10);
    return;
  case 0x73:
    pcVar13 = (char *)*unaff_s1;
    if ((uchar *)pcVar13 == (uchar *)0x0) {
      pcVar13 = "(null)";
    }
    if ((int)uVar9 < 0) {
      iVar15 = FUN_80033d14(pcVar13);
      iVar17 = 0;
    }
    else {
      pvVar7 = memchr((uchar *)pcVar13,'\0',uVar9);
      iVar15 = (int)pvVar7 - (int)pcVar13;
      if ((pvVar7 == (void *)0x0) || (iVar17 = 0, (int)uVar9 < iVar15)) {
        PRNT_OBJ_334();
        return;
      }
    }
    goto code_r0x80034410;
  }
  goto code_r0x800345e8;
PRNT_OBJ_1EC:
  bVar4 = true;
  pbVar16 = unaff_s7;
  goto code_r0x80034020;
PRNT_OBJ_630:
  _putchar_flash();
  PRNT_OBJ_664();
  return;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar12 = (uchar *)pcVar13;
    uVar9 = uVar8 / uVar10;
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar8 % uVar10];
    pcVar13 = (char *)(puVar12 + -1);
    *pcVar13 = uVar2;
    uVar8 = uVar9;
  } while (uVar9 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if (bVar6) {
    iVar15 = (int)auStackX_0 - (int)pcVar13;
    if ((uVar10 != 8) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar13 = (char *)(puVar12 + -2);
    *pcVar13 = '0';
  }
  iVar15 = (int)auStackX_0 - (int)pcVar13;
PRNT_OBJ_468:
  iVar15 = iVar15 + 0x38;
code_r0x80034410:
  uVar9 = iVar15 + in_stack_00000040;
  if (iVar17 != 0) {
    uVar9 = uVar9 + 1;
  }
  if (bVar3) {
    uVar9 = uVar9 + 2;
  }
  uVar8 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar9) {
    uVar8 = uVar9;
  }
  if (((uVar14 == 0) && (in_stack_00000044 != 0)) &&
     (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if (iVar17 != 0) {
    _putchar();
  }
  if (bVar3) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if ((uVar14 == 0x20) && (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if ((int)uVar9 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_0000003c);
  }
  while (iVar15 = iVar15 + -1, -1 < iVar15) {
    uVar2 = *pcVar13;
    pcVar13 = (char *)((uchar *)pcVar13 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((uVar14 & 0x10) != 0) && (uVar9 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_00000044);
  }
  uVar9 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar8) {
    uVar9 = uVar8;
  }
  _uStack00000038 = _uStack00000038 + uVar9;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_65C(void)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *unaff_s1;
  uchar *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  byte *unaff_s7;
  int iVar17;
  undefined1 auStackX_0 [16];
  undefined2 uStack00000038;
  uint in_stack_0000003c;
  int in_stack_00000040;
  uint in_stack_00000044;
  char *in_stack_00000048;
  
  do {
    unaff_s7 = unaff_s7 + 1;
    uVar9 = (uint)*unaff_s7;
    if (uVar9 == 0) {
PRNT_OBJ_630:
      _putchar_flash();
      PRNT_OBJ_664();
      return;
    }
    uVar14 = 0;
    bVar3 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    if (uVar9 == 0x25) {
      uVar9 = 0xffffffff;
      iVar17 = 0;
      in_stack_0000003c = 0;
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      uVar8 = 0x25;
      pbVar16 = unaff_s7;
code_r0x80034020:
      unaff_s7 = pbVar16 + 1;
      puVar11 = unaff_s1;
      switch(*unaff_s7) {
      case 0:
        goto PRNT_OBJ_630;
      default:
        uVar9 = (uint)(char)*unaff_s7;
        _uStack00000038 = _uStack00000038 + 1;
        break;
      case 0x20:
        pbVar16 = unaff_s7;
        if (iVar17 == 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x23:
        bVar6 = true;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2a:
        puVar11 = unaff_s1 + 1;
        in_stack_00000044 = *unaff_s1;
        unaff_s1 = puVar11;
        pbVar16 = unaff_s7;
        if (-1 < (int)in_stack_00000044) goto code_r0x80034020;
        in_stack_00000044 = -in_stack_00000044;
      case 0x2d:
        uVar14 = uVar14 | 0x10;
        unaff_s1 = puVar11;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2b:
        iVar17 = 0x2b;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x2e:
        pbVar16 = pbVar16 + 2;
        bVar1 = *pbVar16;
        if (bVar1 == 0x2a) {
          PRNT_OBJ_168();
          return;
        }
        uVar9 = 0;
        while ((bVar1 < 0x80 && (uVar8 = (uint)*pbVar16, ((&DAT_8004187d)[uVar8] & 4) != 0))) {
          pbVar16 = pbVar16 + 1;
          bVar1 = *pbVar16;
          uVar9 = uVar9 * 10 + -0x30 + uVar8;
        }
        pbVar16 = pbVar16 + -1;
        if ((int)uVar9 < 0) {
          PRNT_OBJ_7C();
          return;
        }
        goto code_r0x80034020;
      case 0x30:
        uVar14 = uVar14 | 0x20;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        in_stack_00000044 = 0;
        goto PRNT_OBJ_184;
      case 0x44:
        bVar4 = true;
      case 100:
      case 0x69:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_244();
          return;
        }
        uVar8 = *unaff_s1;
        uVar10 = 10;
        if ((int)uVar8 < 0) {
          PRNT_OBJ_3CC();
          return;
        }
        goto code_r0x80034370;
      case 0x4c:
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x4f:
        bVar4 = true;
      case 0x6f:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,8);
          return;
        }
        PRNT_OBJ_3C8(uVar8,8);
        return;
      case 0x55:
        bVar4 = true;
      case 0x75:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3CC(uVar8,10);
          return;
        }
        PRNT_OBJ_3C8(uVar8,10);
        return;
      case 0x58:
        in_stack_00000048 = "0123456789ABCDEF";
      case 0x78:
        if ((!bVar4) && (bVar5)) {
          PRNT_OBJ_3B4(uVar8,0x10);
          return;
        }
        uVar8 = *unaff_s1;
        uVar10 = 0x10;
        iVar17 = 0;
        if ((bVar6) && (uVar8 != 0)) {
          bVar3 = true;
          iVar17 = 0;
        }
code_r0x80034370:
        in_stack_0000003c = uVar9;
        if (-1 < (int)uVar9) {
          uVar14 = uVar14 & 0xffffffdf;
        }
        pcVar13 = (char *)&stack0x00000038;
        if ((uVar8 != 0) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar9 != 0))
        goto PRNT_OBJ_3F4;
        goto PRNT_OBJ_468;
      case 99:
        PRNT_OBJ_46C();
        return;
      case 0x68:
        bVar5 = true;
        pbVar16 = unaff_s7;
        goto code_r0x80034020;
      case 0x6c:
        goto PRNT_OBJ_1EC;
      case 0x6e:
        if ((!bVar4) && (bVar5)) {
          *(undefined2 *)*unaff_s1 = uStack00000038;
          PRNT_OBJ_65C();
          return;
        }
        *(int *)*unaff_s1 = _uStack00000038;
        PRNT_OBJ_65C();
        return;
      case 0x70:
        PRNT_OBJ_3C8(uVar8,0x10);
        return;
      case 0x73:
        pcVar13 = (char *)*unaff_s1;
        if ((uchar *)pcVar13 == (uchar *)0x0) {
          pcVar13 = "(null)";
        }
        if ((int)uVar9 < 0) {
          iVar15 = FUN_80033d14(pcVar13);
          iVar17 = 0;
        }
        else {
          pvVar7 = memchr((uchar *)pcVar13,'\0',uVar9);
          iVar15 = (int)pvVar7 - (int)pcVar13;
          if ((pvVar7 == (void *)0x0) || (iVar17 = 0, (int)uVar9 < iVar15)) {
            PRNT_OBJ_334();
            return;
          }
        }
        goto code_r0x80034410;
      }
    }
    _putchar(uVar9);
  } while( true );
PRNT_OBJ_1EC:
  bVar4 = true;
  pbVar16 = unaff_s7;
  goto code_r0x80034020;
  while (((&DAT_8004187d)[*unaff_s7] & 4) != 0) {
PRNT_OBJ_184:
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    in_stack_00000044 = in_stack_00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  }
  PRNT_OBJ_7C();
  return;
PRNT_OBJ_3F4:
  do {
    puVar12 = (uchar *)pcVar13;
    uVar9 = uVar8 / uVar10;
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    uVar2 = in_stack_00000048[uVar8 % uVar10];
    pcVar13 = (char *)(puVar12 + -1);
    *pcVar13 = uVar2;
    uVar8 = uVar9;
  } while (uVar9 != 0);
  in_stack_00000048 = "0123456789abcdef";
  if (bVar6) {
    iVar15 = (int)auStackX_0 - (int)pcVar13;
    if ((uVar10 != 8) || (iVar15 = (int)auStackX_0 - (int)pcVar13, uVar2 == '0')) goto PRNT_OBJ_468;
    pcVar13 = (char *)(puVar12 + -2);
    *pcVar13 = '0';
  }
  iVar15 = (int)auStackX_0 - (int)pcVar13;
PRNT_OBJ_468:
  iVar15 = iVar15 + 0x38;
code_r0x80034410:
  uVar9 = iVar15 + in_stack_00000040;
  if (iVar17 != 0) {
    uVar9 = uVar9 + 1;
  }
  if (bVar3) {
    uVar9 = uVar9 + 2;
  }
  uVar8 = in_stack_0000003c;
  if ((int)in_stack_0000003c < (int)uVar9) {
    uVar8 = uVar9;
  }
  if (((uVar14 == 0) && (in_stack_00000044 != 0)) &&
     (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if (iVar17 != 0) {
    _putchar();
  }
  if (bVar3) {
    _putchar(0x30);
    _putchar((int)(char)*unaff_s7);
  }
  if ((uVar14 == 0x20) && (uVar10 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x30);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_stack_00000044);
  }
  if ((int)uVar9 < (int)in_stack_0000003c) {
    do {
      _putchar(0x30);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_0000003c);
  }
  while (iVar15 = iVar15 + -1, -1 < iVar15) {
    uVar2 = *pcVar13;
    pcVar13 = (char *)((uchar *)pcVar13 + 1);
    _putchar((int)(char)uVar2);
  }
  while (in_stack_00000040 = in_stack_00000040 + -1, -1 < in_stack_00000040) {
    _putchar(0x30);
  }
  if (((uVar14 & 0x10) != 0) && (uVar9 = uVar8, (int)uVar8 < (int)in_stack_00000044)) {
    do {
      _putchar(0x20);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)in_stack_00000044);
  }
  uVar9 = in_stack_00000044;
  if ((int)in_stack_00000044 < (int)uVar8) {
    uVar9 = uVar8;
  }
  _uStack00000038 = _uStack00000038 + uVar9;
  PRNT_OBJ_65C();
  return;
}



void PRNT_OBJ_664(void)

{
  return;
}



void * memchr(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
  if ((param_1 != (uchar *)0x0) && (0 < param_3)) {
    pvVar1 = (void *)MEMCHR_OBJ_20(param_1,param_2,param_3 + -1);
    return pvVar1;
  }
  return (void *)0x0;
}



undefined4 MEMCHR_OBJ_20(char *param_1,char param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (-1 < param_3) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      if (cVar1 == param_2) {
        uVar2 = MEMCHR_OBJ_48();
        return uVar2;
      }
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return 0;
}



void MEMCHR_OBJ_48(void)

{
  return;
}



void _putchar(byte param_1)

{
  if (param_1 == 9) {
    do {
      _putchar(0x20);
    } while ((DAT_8004191c & 7) != 0);
  }
  else {
    if (param_1 == 10) {
      _putchar(0xd);
      DAT_8004191c = 0;
      PUTCHAR_OBJ_9C();
      return;
    }
    if (((int)(char)(&DAT_8004187d)[param_1] & 0x97U) != 0) {
      DAT_8004191c = DAT_8004191c + 1;
    }
    if (0x1f < DAT_80041920) {
      write(1,&DAT_800acea0,DAT_80041920);
      DAT_80041920 = 0;
    }
    (&DAT_800acea0)[DAT_80041920] = param_1;
    DAT_80041920 = DAT_80041920 + 1;
  }
  return;
}



void PUTCHAR_OBJ_40(void)

{
  do {
    _putchar(0x20);
  } while ((DAT_8004191c & 7) != 0);
  return;
}



void PUTCHAR_OBJ_9C(void)

{
  undefined1 unaff_s0;
  
  if (0x1f < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  (&DAT_800acea0)[DAT_80041920] = unaff_s0;
  DAT_80041920 = DAT_80041920 + 1;
  return;
}



void _putchar_flash(void)

{
  if (0 < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  return;
}



void putchar(char param_1)

{
  if (param_1 == '\t') {
    do {
      _putchar(0x20);
    } while ((DAT_8004191c & 7) != 0);
  }
  else {
    if (param_1 == '\n') {
      _putchar(0xd);
      DAT_8004191c = 0;
      PUTCHAR_OBJ_1D4();
      return;
    }
    if (((int)(char)(&DAT_8004187d)[(byte)param_1] & 0x97U) != 0) {
      DAT_8004191c = DAT_8004191c + 1;
    }
    if (0x1f < DAT_80041920) {
      write(1,&DAT_800acea0,DAT_80041920);
      DAT_80041920 = 0;
    }
    (&DAT_800acea0)[DAT_80041920] = param_1;
    DAT_80041920 = DAT_80041920 + 1;
  }
  if (0 < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  return;
}



void PUTCHAR_OBJ_178(void)

{
  do {
    _putchar(0x20);
  } while ((DAT_8004191c & 7) != 0);
  if (0 < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  return;
}



void PUTCHAR_OBJ_1D4(void)

{
  undefined1 unaff_s0;
  
  if (0x1f < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  (&DAT_800acea0)[DAT_80041920] = unaff_s0;
  DAT_80041920 = DAT_80041920 + 1;
  if (0 < DAT_80041920) {
    write(1,&DAT_800acea0,DAT_80041920);
    DAT_80041920 = 0;
  }
  return;
}



int sprintf(char *buffer,char *fmt,...)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  uchar *puVar6;
  int iVar7;
  uint in_a2;
  undefined4 in_a3;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  char *local_res4;
  uint local_res8;
  undefined4 local_resc;
  byte bStack_39;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint *local_28;
  
  local_28 = &local_res8;
  iVar11 = 0;
  cVar1 = *fmt;
  local_res8 = in_a2;
  local_resc = in_a3;
  while (iVar7 = (int)cVar1, iVar7 != 0) {
    if (iVar7 != 0x25) {
SPRINTF_OBJ_794:
      buffer[iVar11] = (char)iVar7;
      iVar11 = SPRINTF_OBJ_82C();
      return iVar11;
    }
    local_38 = DAT_8004192c;
    local_34 = DAT_80041930;
    local_30 = DAT_80041934;
    local_res4 = fmt;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pcVar2 = local_res4 + 1;
              iVar7 = (int)local_res4[1];
              if (iVar7 != 0x2d) break;
              local_38 = local_38 | 1;
              local_res4 = pcVar2;
            }
            if (iVar7 != 0x2b) break;
            local_38 = local_38 | 2;
            local_res4 = pcVar2;
          }
          if (iVar7 != 0x20) break;
          local_38._0_2_ = CONCAT11(local_res4[1],(byte)local_38);
          local_res4 = pcVar2;
        }
        if (iVar7 != 0x23) break;
        local_38 = local_38 | 4;
        local_res4 = pcVar2;
      }
      if (iVar7 != 0x30) break;
      local_38 = local_38 | 8;
      local_res4 = pcVar2;
    }
    if (iVar7 == 0x2a) {
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      local_34 = uVar4;
      if ((int)uVar4 < 0) {
        local_34 = -uVar4;
        local_38 = local_38 | 1;
      }
      iVar11 = SPRINTF_OBJ_1BC(uVar4,(int)local_res4[2]);
      return iVar11;
    }
    while (local_res4 = pcVar2, pcVar2 = local_res4, iVar7 - 0x30U < 10) {
      local_34 = local_34 * 10 + -0x30 + iVar7;
      pcVar2 = local_res4 + 1;
      iVar7 = (int)local_res4[1];
    }
    pcVar5 = (char *)0x23;
    if (iVar7 == 0x2e) {
      iVar7 = (int)local_res4[1];
      pcVar5 = local_res4;
      if (iVar7 == 0x2a) {
        local_30 = *local_28;
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_258(local_res4,(int)local_res4[2]);
        return iVar11;
      }
      while (local_res4 = pcVar5 + 1, iVar7 - 0x30U < 10) {
        local_30 = local_30 * 10 + -0x30 + iVar7;
        iVar7 = (int)pcVar5[2];
        pcVar5 = local_res4;
      }
      pcVar5 = pcVar2;
      if (-1 < (int)local_30) {
        local_38 = local_38 | 0x10;
      }
    }
    pbVar9 = (byte *)&local_38;
    if ((local_38 & 1) != 0) {
      local_38 = local_38 & 0xfffffff7;
    }
    switch(iVar7) {
    case 0x4c:
      local_38 = local_38 | 0x80;
      iVar11 = SPRINTF_OBJ_29C(pcVar5,(int)local_res4[1]);
      return iVar11;
    default:
      if (iVar7 == 0x25) goto SPRINTF_OBJ_794;
      goto SPRINTF_OBJ_84C;
    case 99:
      local_28 = local_28 + 1;
      iVar11 = SPRINTF_OBJ_7A0();
      return iVar11;
    case 100:
    case 0x69:
      uVar4 = *local_28;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = (uint)(short)uVar4;
      }
      if ((int)uVar4 < 0) {
        local_38._0_2_ = CONCAT11(0x2d,(byte)local_38);
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_390(-uVar4);
        return iVar11;
      }
      if ((local_38 >> 1 & 1) != 0) {
        local_38._0_2_ = CONCAT11(0x2b,(byte)local_38);
        local_28 = local_28 + 1;
        iVar11 = SPRINTF_OBJ_390();
        return iVar11;
      }
      goto code_r0x80034c84;
    case 0x68:
      iVar11 = SPRINTF_OBJ_2E4();
      return iVar11;
    case 0x6c:
      iVar11 = SPRINTF_OBJ_2E4();
      return iVar11;
    case 0x6e:
      piVar10 = (int *)*local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        *(short *)piVar10 = (short)iVar11;
        iVar11 = SPRINTF_OBJ_82C();
        return iVar11;
      }
      *piVar10 = iVar11;
      iVar11 = SPRINTF_OBJ_82C();
      return iVar11;
    case 0x6f:
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((local_38 >> 4 & 1) == 0) {
        if ((local_38 >> 3 & 1) != 0) {
          local_30 = local_34;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 3) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = ((byte)uVar4 & 7) + 0x30;
        uVar8 = uVar8 + 1;
      }
      if ((((local_38 >> 2 & 1) != 0) && (uVar8 != 0)) && (*pbVar9 != 0x30)) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
        uVar8 = uVar8 + 1;
      }
      if ((int)uVar8 < (int)local_30) {
        do {
          pbVar9 = pbVar9 + -1;
          *pbVar9 = 0x30;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_30);
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
      break;
    case 0x70:
      local_30 = 8;
      local_38 = local_38 | 0x50;
    case 0x58:
      iVar11 = SPRINTF_OBJ_5A4();
      return iVar11;
    case 0x73:
      pbVar9 = (byte *)*local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 2 & 1) == 0) {
        if ((local_38 >> 4 & 1) == 0) {
          FUN_80033d14(pbVar9);
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
        pvVar3 = memchr(pbVar9,'\0',local_30);
        uVar8 = (int)pvVar3 - (int)pbVar9;
        if (pvVar3 == (void *)0x0) {
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
      }
      else {
        uVar8 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
        if (((local_38 >> 4 & 1) != 0) && ((int)local_30 < (int)uVar8)) {
          iVar11 = SPRINTF_OBJ_7A0();
          return iVar11;
        }
      }
      break;
    case 0x75:
      uVar4 = *local_28;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      local_38._0_2_ = (ushort)(byte)local_38;
code_r0x80034c84:
      local_28 = local_28 + 1;
      if ((local_38 >> 4 & 1) == 0) {
        if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, local_38._1_1_ != 0)) {
          local_30 = local_34 + -1;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      while (uVar4 != 0) {
        pbVar9 = pbVar9 + -1;
        uVar8 = uVar8 + 1;
        *pbVar9 = (char)uVar4 + (char)(uVar4 / 10) * -10 + 0x30;
        uVar4 = uVar4 / 10;
      }
      for (; (int)uVar8 < (int)local_30; uVar8 = uVar8 + 1) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
      }
      if (local_38._1_1_ != 0) {
        pbVar9[-1] = local_38._1_1_;
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
      break;
    case 0x78:
      uVar4 = *local_28;
      local_28 = local_28 + 1;
      if ((local_38 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((local_38 >> 4 & 1) == 0) {
        if (((local_38 >> 3 & 1) != 0) && (local_30 = local_34, (local_38 >> 2 & 1) != 0)) {
          local_30 = local_34 + -2;
        }
        if ((int)local_30 < 1) {
          local_30 = 1;
        }
      }
      uVar8 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 4) {
        pbVar9 = pbVar9 + -1;
        uVar8 = uVar8 + 1;
        *pbVar9 = "0123456789abcdef"[uVar4 & 0xf];
      }
      for (; (int)uVar8 < (int)local_30; uVar8 = uVar8 + 1) {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
      }
      if ((local_38 >> 2 & 1) != 0) {
        pbVar9[-1] = (byte)iVar7;
        pbVar9[-2] = 0x30;
        iVar11 = SPRINTF_OBJ_7A0();
        return iVar11;
      }
    }
    puVar6 = (uchar *)(buffer + iVar11);
    if (((int)uVar8 < (int)local_34) && ((local_38 & 1) == 0)) {
      do {
        buffer[iVar11] = ' ';
        local_34 = local_34 + -1;
        iVar11 = iVar11 + 1;
      } while ((int)uVar8 < (int)local_34);
      puVar6 = (uchar *)(buffer + iVar11);
    }
    memmove(puVar6,pbVar9,uVar8);
    iVar11 = iVar11 + uVar8;
    for (; (int)uVar8 < (int)local_34; uVar8 = uVar8 + 1) {
      buffer[iVar11] = ' ';
      iVar11 = iVar11 + 1;
    }
    fmt = local_res4 + 1;
    cVar1 = local_res4[1];
  }
SPRINTF_OBJ_84C:
  buffer[iVar11] = '\0';
  return iVar11;
}



int SPRINTF_OBJ_90(int param_1)

{
  int iVar1;
  void *pvVar2;
  int in_v1;
  uint uVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  int iVar9;
  int iVar10;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = in_stack_0000024c + 1;
              iVar5 = (int)*(char *)(in_stack_0000024c + 1);
              if (iVar5 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              in_stack_0000024c = iVar1;
            }
            if (iVar5 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            in_stack_0000024c = iVar1;
          }
          if (iVar5 != unaff_s4) break;
          in_stack_00000210 =
               (uint)CONCAT11(*(char *)(in_stack_0000024c + 1),(byte)in_stack_00000210);
          in_stack_0000024c = iVar1;
        }
        if (iVar5 != param_1) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        in_stack_0000024c = iVar1;
      }
      if (iVar5 != in_v1) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      in_stack_0000024c = iVar1;
    }
    if (iVar5 == 0x2a) {
      iVar1 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(in_stack_0000024c + 2));
      return iVar1;
    }
    while (iVar5 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar5;
      iVar5 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar9 = iVar1;
    if (iVar5 == 0x2e) {
      iVar5 = (int)*(char *)(iVar1 + 1);
      iVar10 = iVar1;
      if (iVar5 == 0x2a) {
        iVar1 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar1;
      }
      while (iVar9 = iVar10 + 1, iVar5 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar5;
        iVar5 = (int)*(char *)(iVar10 + 2);
        iVar10 = iVar9;
      }
      param_1 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    pbVar7 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(iVar5) {
    case 0x4c:
      iVar1 = SPRINTF_OBJ_29C(param_1,(int)*(char *)(iVar9 + 1));
      return iVar1;
    default:
      if (iVar5 != 0x25) goto SPRINTF_OBJ_84C;
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar5;
      iVar1 = SPRINTF_OBJ_82C();
      return iVar1;
    case 99:
      iVar1 = SPRINTF_OBJ_7A0();
      return iVar1;
    case 100:
    case 0x69:
      uVar3 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar3 = (uint)(short)uVar3;
      }
      if ((int)uVar3 < 0) {
        iVar1 = SPRINTF_OBJ_390(-uVar3);
        return iVar1;
      }
      if ((in_stack_00000210 >> 1 & 1) != 0) {
        iVar1 = SPRINTF_OBJ_390();
        return iVar1;
      }
      goto code_r0x80034c84;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2E4();
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2E4();
      return iVar1;
    case 0x6e:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar1 = SPRINTF_OBJ_82C();
        return iVar1;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_82C();
      return iVar1;
    case 0x6f:
      uVar3 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar3 = uVar3 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 >> 3) {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = ((byte)uVar3 & 7) + 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar6 != 0)) && (*pbVar7 != 0x30)) {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          pbVar7 = pbVar7 + -1;
          *pbVar7 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
        iVar1 = SPRINTF_OBJ_7A0();
        return iVar1;
      }
      break;
    case 0x70:
    case 0x58:
      iVar1 = SPRINTF_OBJ_5A4();
      return iVar1;
    case 0x73:
      pbVar7 = (byte *)*in_stack_00000220;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(pbVar7);
          iVar1 = SPRINTF_OBJ_7A0();
          return iVar1;
        }
        pvVar2 = memchr(pbVar7,'\0',in_stack_00000218);
        uVar6 = (int)pvVar2 - (int)pbVar7;
        if (pvVar2 == (void *)0x0) {
          iVar1 = SPRINTF_OBJ_7A0();
          return iVar1;
        }
      }
      else {
        uVar6 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar6)) {
          iVar1 = SPRINTF_OBJ_7A0();
          return iVar1;
        }
      }
      break;
    case 0x75:
      uVar3 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar3 = uVar3 & 0xffff;
      }
      in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x80034c84:
      bVar8 = (byte)(in_stack_00000210 >> 8);
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, bVar8 != 0)) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      while (uVar3 != 0) {
        pbVar7 = pbVar7 + -1;
        uVar6 = uVar6 + 1;
        *pbVar7 = (char)uVar3 + (char)(uVar3 / 10) * -10 + 0x30;
        uVar3 = uVar3 / 10;
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = 0x30;
      }
      if (bVar8 != 0) {
        pbVar7[-1] = bVar8;
        iVar1 = SPRINTF_OBJ_7A0();
        return iVar1;
      }
      break;
    case 0x78:
      uVar3 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar3 = uVar3 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 >> 4) {
        pbVar7 = pbVar7 + -1;
        uVar6 = uVar6 + 1;
        *pbVar7 = "0123456789abcdef"[uVar3 & 0xf];
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        pbVar7[-1] = (byte)iVar5;
        pbVar7[-2] = 0x30;
        iVar1 = SPRINTF_OBJ_7A0();
        return iVar1;
      }
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    puVar4 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
      puVar4 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar4,pbVar7,uVar6);
    unaff_s2 = unaff_s2 + uVar6;
    for (; (int)uVar6 < in_stack_00000214; uVar6 = uVar6 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    in_stack_0000024c = iVar9 + 1;
    iVar5 = (int)*(char *)(iVar9 + 1);
    if (iVar5 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (iVar5 != 0x25) goto SPRINTF_OBJ_794;
    param_1 = 0x23;
    in_v1 = 0x30;
    in_stack_00000210 = DAT_8004192c;
    in_stack_00000214 = DAT_80041930;
    in_stack_00000218 = DAT_80041934;
  } while( true );
}



int SPRINTF_OBJ_1BC(int param_1,int param_2)

{
  int in_v0;
  void *pvVar1;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  byte *pbVar5;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar6;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  int iVar7;
  int iVar8;
  
  do {
    iVar7 = in_stack_0000024c;
    if (param_2 == in_v0) {
      param_2 = (int)*(char *)(in_stack_0000024c + 1);
      iVar8 = in_stack_0000024c;
      if (param_2 == 0x2a) {
        iVar7 = SPRINTF_OBJ_258(in_stack_0000024c,(int)*(char *)(in_stack_0000024c + 2));
        return iVar7;
      }
      while (iVar7 = iVar8 + 1, param_2 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
        param_2 = (int)*(char *)(iVar8 + 2);
        iVar8 = iVar7;
      }
      param_1 = in_stack_0000024c;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    pbVar5 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(param_2) {
    case 0x4c:
      iVar7 = SPRINTF_OBJ_29C(param_1,(int)*(char *)(iVar7 + 1));
      return iVar7;
    default:
      if (param_2 != 0x25) goto SPRINTF_OBJ_84C;
      goto SPRINTF_OBJ_794;
    case 99:
      iVar7 = SPRINTF_OBJ_7A0();
      return iVar7;
    case 100:
    case 0x69:
      uVar2 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar2 = (uint)(short)uVar2;
      }
      if ((int)uVar2 < 0) {
        iVar7 = SPRINTF_OBJ_390(-uVar2);
        return iVar7;
      }
      if ((in_stack_00000210 >> 1 & 1) != 0) {
        iVar7 = SPRINTF_OBJ_390();
        return iVar7;
      }
      goto code_r0x80034c84;
    case 0x68:
      iVar7 = SPRINTF_OBJ_2E4();
      return iVar7;
    case 0x6c:
      iVar7 = SPRINTF_OBJ_2E4();
      return iVar7;
    case 0x6e:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar7 = SPRINTF_OBJ_82C();
        return iVar7;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar7 = SPRINTF_OBJ_82C();
      return iVar7;
    case 0x6f:
      uVar2 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar2 = uVar2 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar4 = 0;
      for (; uVar2 != 0; uVar2 = uVar2 >> 3) {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = ((byte)uVar2 & 7) + 0x30;
        uVar4 = uVar4 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar4 != 0)) && (*pbVar5 != 0x30)) {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = 0x30;
        uVar4 = uVar4 + 1;
      }
      if ((int)uVar4 < in_stack_00000218) {
        do {
          pbVar5 = pbVar5 + -1;
          *pbVar5 = 0x30;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < in_stack_00000218);
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
      break;
    case 0x70:
    case 0x58:
      iVar7 = SPRINTF_OBJ_5A4();
      return iVar7;
    case 0x73:
      pbVar5 = (byte *)*in_stack_00000220;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(pbVar5);
          iVar7 = SPRINTF_OBJ_7A0();
          return iVar7;
        }
        pvVar1 = memchr(pbVar5,'\0',in_stack_00000218);
        uVar4 = (int)pvVar1 - (int)pbVar5;
        if (pvVar1 == (void *)0x0) {
          iVar7 = SPRINTF_OBJ_7A0();
          return iVar7;
        }
      }
      else {
        uVar4 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar4)) {
          iVar7 = SPRINTF_OBJ_7A0();
          return iVar7;
        }
      }
      break;
    case 0x75:
      uVar2 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar2 = uVar2 & 0xffff;
      }
      in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x80034c84:
      bVar6 = (byte)(in_stack_00000210 >> 8);
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, bVar6 != 0)) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar4 = 0;
      while (uVar2 != 0) {
        pbVar5 = pbVar5 + -1;
        uVar4 = uVar4 + 1;
        *pbVar5 = (char)uVar2 + (char)(uVar2 / 10) * -10 + 0x30;
        uVar2 = uVar2 / 10;
      }
      for (; (int)uVar4 < in_stack_00000218; uVar4 = uVar4 + 1) {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = 0x30;
      }
      if (bVar6 != 0) {
        pbVar5[-1] = bVar6;
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
      break;
    case 0x78:
      uVar2 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar2 = uVar2 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar4 = 0;
      for (; uVar2 != 0; uVar2 = uVar2 >> 4) {
        pbVar5 = pbVar5 + -1;
        uVar4 = uVar4 + 1;
        *pbVar5 = "0123456789abcdef"[uVar2 & 0xf];
      }
      for (; (int)uVar4 < in_stack_00000218; uVar4 = uVar4 + 1) {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        pbVar5[-1] = (byte)param_2;
        pbVar5[-2] = 0x30;
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    puVar3 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar4 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar4 < in_stack_00000214);
      puVar3 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar3,pbVar5,uVar4);
    unaff_s2 = unaff_s2 + uVar4;
    for (; (int)uVar4 < in_stack_00000214; uVar4 = uVar4 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    param_2 = (int)*(char *)(iVar7 + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      iVar7 = SPRINTF_OBJ_82C();
      return iVar7;
    }
    param_1 = 0x23;
    in_stack_00000210 = DAT_8004192c;
    iVar7 = iVar7 + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              in_stack_0000024c = iVar7 + 1;
              param_2 = (int)*(char *)(iVar7 + 1);
              if (param_2 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              iVar7 = in_stack_0000024c;
            }
            if (param_2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            iVar7 = in_stack_0000024c;
          }
          if (param_2 != unaff_s4) break;
          in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar7 + 1),(byte)in_stack_00000210);
          iVar7 = in_stack_0000024c;
        }
        if (param_2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        iVar7 = in_stack_0000024c;
      }
      if (param_2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      iVar7 = in_stack_0000024c;
    }
    in_stack_00000214 = DAT_80041930;
    if (param_2 == 0x2a) {
      iVar7 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar7 + 2));
      return iVar7;
    }
    while (in_v0 = 0x2e, in_stack_00000218 = DAT_80041934, param_2 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(in_stack_0000024c + 1);
      in_stack_0000024c = in_stack_0000024c + 1;
    }
  } while( true );
}



int SPRINTF_OBJ_258(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  byte *pbVar6;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int iVar8;
  int in_stack_0000024c;
  
  do {
    iVar2 = param_1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
    do {
      pbVar6 = &stack0x00000210;
      if ((in_stack_00000210 & 1) != 0) {
        in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
      }
      switch(param_2) {
      case 0x4c:
        iVar2 = SPRINTF_OBJ_29C(iVar2,(int)*(char *)(in_stack_0000024c + 1));
        return iVar2;
      default:
        if (param_2 != 0x25) goto SPRINTF_OBJ_84C;
        goto SPRINTF_OBJ_794;
      case 99:
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      case 100:
      case 0x69:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = (uint)(short)uVar3;
        }
        if ((int)uVar3 < 0) {
          iVar2 = SPRINTF_OBJ_390(-uVar3);
          return iVar2;
        }
        if ((in_stack_00000210 >> 1 & 1) != 0) {
          iVar2 = SPRINTF_OBJ_390();
          return iVar2;
        }
        goto code_r0x80034c84;
      case 0x68:
        iVar2 = SPRINTF_OBJ_2E4();
        return iVar2;
      case 0x6c:
        iVar2 = SPRINTF_OBJ_2E4();
        return iVar2;
      case 0x6e:
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          *(short *)*in_stack_00000220 = (short)unaff_s2;
          iVar2 = SPRINTF_OBJ_82C();
          return iVar2;
        }
        *(int *)*in_stack_00000220 = unaff_s2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      case 0x6f:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if ((in_stack_00000210 >> 3 & 1) != 0) {
            in_stack_00000218 = in_stack_00000214;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 >> 3) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = ((byte)uVar3 & 7) + 0x30;
          uVar5 = uVar5 + 1;
        }
        if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar5 != 0)) && (*pbVar6 != 0x30)) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
          uVar5 = uVar5 + 1;
        }
        if ((int)uVar5 < in_stack_00000218) {
          do {
            pbVar6 = pbVar6 + -1;
            *pbVar6 = 0x30;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < in_stack_00000218);
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        break;
      case 0x70:
      case 0x58:
        iVar2 = SPRINTF_OBJ_5A4();
        return iVar2;
      case 0x73:
        pbVar6 = (byte *)*in_stack_00000220;
        if ((in_stack_00000210 >> 2 & 1) == 0) {
          if ((in_stack_00000210 >> 4 & 1) == 0) {
            FUN_80033d14(pbVar6);
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
          pvVar1 = memchr(pbVar6,'\0',in_stack_00000218);
          uVar5 = (int)pvVar1 - (int)pbVar6;
          if (pvVar1 == (void *)0x0) {
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
        }
        else {
          uVar5 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar5)) {
            iVar2 = SPRINTF_OBJ_7A0();
            return iVar2;
          }
        }
        break;
      case 0x75:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x80034c84:
        bVar7 = (byte)(in_stack_00000210 >> 8);
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if (((in_stack_00000210 >> 3 & 1) != 0) &&
             (in_stack_00000218 = in_stack_00000214, bVar7 != 0)) {
            in_stack_00000218 = in_stack_00000214 + -1;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        while (uVar3 != 0) {
          pbVar6 = pbVar6 + -1;
          uVar5 = uVar5 + 1;
          *pbVar6 = (char)uVar3 + (char)(uVar3 / 10) * -10 + 0x30;
          uVar3 = uVar3 / 10;
        }
        for (; (int)uVar5 < in_stack_00000218; uVar5 = uVar5 + 1) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
        }
        if (bVar7 != 0) {
          pbVar6[-1] = bVar7;
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        break;
      case 0x78:
        uVar3 = *in_stack_00000220;
        if ((in_stack_00000210 >> 5 & 1) != 0) {
          uVar3 = uVar3 & 0xffff;
        }
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          if (((in_stack_00000210 >> 3 & 1) != 0) &&
             (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
            in_stack_00000218 = in_stack_00000214 + -2;
          }
          if (in_stack_00000218 < 1) {
            in_stack_00000218 = 1;
          }
        }
        uVar5 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 >> 4) {
          pbVar6 = pbVar6 + -1;
          uVar5 = uVar5 + 1;
          *pbVar6 = "0123456789abcdef"[uVar3 & 0xf];
        }
        for (; (int)uVar5 < in_stack_00000218; uVar5 = uVar5 + 1) {
          pbVar6 = pbVar6 + -1;
          *pbVar6 = 0x30;
        }
        if ((in_stack_00000210 >> 2 & 1) != 0) {
          pbVar6[-1] = (byte)param_2;
          pbVar6[-2] = 0x30;
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      in_stack_00000220 = in_stack_00000220 + 1;
      puVar4 = (uchar *)(unaff_s3 + unaff_s2);
      if (((int)uVar5 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
        do {
          *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
          in_stack_00000214 = in_stack_00000214 + -1;
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar5 < in_stack_00000214);
        puVar4 = (uchar *)(unaff_s3 + unaff_s2);
      }
      memmove(puVar4,pbVar6,uVar5);
      unaff_s2 = unaff_s2 + uVar5;
      for (; (int)uVar5 < in_stack_00000214; uVar5 = uVar5 + 1) {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        unaff_s2 = unaff_s2 + 1;
      }
      param_2 = (int)*(char *)(in_stack_0000024c + 1);
      if (param_2 == 0) {
SPRINTF_OBJ_84C:
        *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
        return unaff_s2;
      }
      if (param_2 != 0x25) {
SPRINTF_OBJ_794:
        *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      }
      iVar2 = 0x23;
      in_stack_00000210 = DAT_8004192c;
      iVar8 = in_stack_0000024c + 1;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                param_1 = iVar8 + 1;
                param_2 = (int)*(char *)(iVar8 + 1);
                if (param_2 != unaff_s5) break;
                in_stack_00000210 = in_stack_00000210 | 1;
                iVar8 = param_1;
              }
              if (param_2 != unaff_s6) break;
              in_stack_00000210 = in_stack_00000210 | 2;
              iVar8 = param_1;
            }
            if (param_2 != unaff_s4) break;
            in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar8 + 1),(byte)in_stack_00000210);
            iVar8 = param_1;
          }
          if (param_2 != 0x23) break;
          in_stack_00000210 = in_stack_00000210 | 4;
          iVar8 = param_1;
        }
        if (param_2 != 0x30) break;
        in_stack_00000210 = in_stack_00000210 | 8;
        iVar8 = param_1;
      }
      in_stack_00000214 = DAT_80041930;
      if (param_2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar8 + 2));
        return iVar2;
      }
      while (param_2 - 0x30U < 10) {
        in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
        param_2 = (int)*(char *)(param_1 + 1);
        param_1 = param_1 + 1;
      }
      in_stack_00000218 = DAT_80041934;
      in_stack_0000024c = param_1;
    } while (param_2 != 0x2e);
    param_2 = (int)*(char *)(param_1 + 1);
    iVar2 = param_1;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(param_1,(int)*(char *)(param_1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(iVar2 + 2);
      iVar2 = in_stack_0000024c;
    }
  } while( true );
}



int SPRINTF_OBJ_29C(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int in_v1;
  uint uVar4;
  uchar *puVar5;
  uint uVar6;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
  do {
    switch(in_v1) {
    case 0:
      iVar3 = SPRINTF_OBJ_29C(param_1,(int)*(char *)(in_stack_0000024c + 1));
      return iVar3;
    default:
      if (param_2 == 0x25) goto SPRINTF_OBJ_794;
      goto SPRINTF_OBJ_84C;
    case 0x17:
      unaff_s1[-1] = (byte)*in_stack_00000220;
      iVar3 = SPRINTF_OBJ_7A0();
      return iVar3;
    case 0x18:
    case 0x1d:
      uVar4 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar4 = (uint)(short)uVar4;
      }
      if ((int)uVar4 < 0) {
        iVar3 = SPRINTF_OBJ_390(-uVar4);
        return iVar3;
      }
      if ((in_stack_00000210 >> 1 & 1) != 0) {
        iVar3 = SPRINTF_OBJ_390();
        return iVar3;
      }
      goto code_r0x80034c84;
    case 0x1c:
      iVar3 = SPRINTF_OBJ_2E4();
      return iVar3;
    case 0x20:
      iVar3 = SPRINTF_OBJ_2E4();
      return iVar3;
    case 0x22:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar3 = SPRINTF_OBJ_82C();
        return iVar3;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar3 = SPRINTF_OBJ_82C();
      return iVar3;
    case 0x23:
      uVar4 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 3) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = ((byte)uVar4 & 7) + 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar6 != 0)) && (*unaff_s1 != 0x30)) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < in_stack_00000218) {
        do {
          unaff_s1 = unaff_s1 + -1;
          *unaff_s1 = 0x30;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < in_stack_00000218);
        iVar3 = SPRINTF_OBJ_7A0();
        return iVar3;
      }
      break;
    case 0x24:
    case 0xc:
      iVar3 = SPRINTF_OBJ_5A4();
      return iVar3;
    case 0x27:
      unaff_s1 = (byte *)*in_stack_00000220;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(unaff_s1);
          iVar3 = SPRINTF_OBJ_7A0();
          return iVar3;
        }
        pvVar2 = memchr(unaff_s1,'\0',in_stack_00000218);
        uVar6 = (int)pvVar2 - (int)unaff_s1;
        if (pvVar2 == (void *)0x0) {
          iVar3 = SPRINTF_OBJ_7A0();
          return iVar3;
        }
      }
      else {
        uVar6 = (uint)*unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar6)) {
          iVar3 = SPRINTF_OBJ_7A0();
          return iVar3;
        }
      }
      break;
    case 0x29:
      uVar4 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x80034c84:
      bVar7 = (byte)(in_stack_00000210 >> 8);
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, bVar7 != 0)) {
          in_stack_00000218 = in_stack_00000214 + -1;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      while (uVar4 != 0) {
        unaff_s1 = unaff_s1 + -1;
        uVar6 = uVar6 + 1;
        *unaff_s1 = (char)uVar4 + (char)(uVar4 / 10) * -10 + 0x30;
        uVar4 = uVar4 / 10;
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
      }
      if (bVar7 != 0) {
        unaff_s1[-1] = bVar7;
        iVar3 = SPRINTF_OBJ_7A0();
        return iVar3;
      }
      break;
    case 0x2c:
      uVar4 = *in_stack_00000220;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar4 = uVar4 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar6 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 >> 4) {
        unaff_s1 = unaff_s1 + -1;
        uVar6 = uVar6 + 1;
        *unaff_s1 = "0123456789abcdef"[uVar4 & 0xf];
      }
      for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        unaff_s1[-1] = (byte)param_2;
        unaff_s1[-2] = 0x30;
        iVar3 = SPRINTF_OBJ_7A0();
        return iVar3;
      }
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar6 < in_stack_00000214);
      puVar5 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar5,unaff_s1,uVar6);
    unaff_s2 = unaff_s2 + uVar6;
    for (; (int)uVar6 < in_stack_00000214; uVar6 = uVar6 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    param_2 = (int)*(char *)(in_stack_0000024c + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      iVar3 = SPRINTF_OBJ_82C();
      return iVar3;
    }
    in_stack_00000210 = DAT_8004192c;
    iVar3 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar3 + 1;
              param_2 = (int)*(char *)(iVar3 + 1);
              if (param_2 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              iVar3 = iVar1;
            }
            if (param_2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            iVar3 = iVar1;
          }
          if (param_2 != unaff_s4) break;
          in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar3 + 1),(byte)in_stack_00000210);
          iVar3 = iVar1;
        }
        if (param_2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        iVar3 = iVar1;
      }
      if (param_2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      iVar3 = iVar1;
    }
    in_stack_00000214 = DAT_80041930;
    if (param_2 == 0x2a) {
      iVar3 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar3 + 2));
      return iVar3;
    }
    while (param_2 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    param_1 = 0x23;
    in_stack_00000218 = DAT_80041934;
    in_stack_0000024c = iVar1;
    if (param_2 == 0x2e) {
      param_2 = (int)*(char *)(iVar1 + 1);
      iVar3 = iVar1;
      if (param_2 == 0x2a) {
        iVar3 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar3;
      }
      while (in_stack_0000024c = iVar3 + 1, param_2 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
        param_2 = (int)*(char *)(iVar3 + 2);
        iVar3 = in_stack_0000024c;
      }
      param_1 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    unaff_s1 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    in_v1 = param_2 + -0x4c;
  } while( true );
}



void SPRINTF_OBJ_2C0(void)

{
  SPRINTF_OBJ_2E4();
  return;
}



void SPRINTF_OBJ_2CC(void)

{
  SPRINTF_OBJ_2E4();
  return;
}



void SPRINTF_OBJ_2D8(undefined4 param_1)

{
  int in_stack_0000024c;
  
  SPRINTF_OBJ_29C(param_1,(int)*(char *)(in_stack_0000024c + 1));
  return;
}



void SPRINTF_OBJ_2E4(undefined4 param_1)

{
  int in_stack_0000024c;
  
  SPRINTF_OBJ_29C(param_1,(int)*(char *)(in_stack_0000024c + 1));
  return;
}



int SPRINTF_OBJ_304(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034bf8:
  uVar5 = *in_stack_00000220;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = (uint)(short)uVar5;
  }
  if ((int)uVar5 < 0) {
    iVar2 = SPRINTF_OBJ_390(-uVar5);
    return iVar2;
  }
  if ((in_stack_00000210 >> 1 & 1) != 0) {
    iVar2 = SPRINTF_OBJ_390();
    return iVar2;
  }
code_r0x80034c84:
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  while (uVar5 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar7 = uVar7 + 1;
    *unaff_s1 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  do {
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar7 < in_stack_00000214);
      puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar6,unaff_s1,uVar7);
    unaff_s2 = unaff_s2 + uVar7;
    for (; (int)uVar7 < in_stack_00000214; uVar7 = uVar7 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    iVar2 = (int)*(char *)(in_stack_0000024c + 1);
    if (iVar2 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (iVar2 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    in_stack_00000210 = DAT_8004192c;
    iVar4 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar4 + 1;
              iVar2 = (int)*(char *)(iVar4 + 1);
              if (iVar2 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              iVar4 = iVar1;
            }
            if (iVar2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            iVar4 = iVar1;
          }
          if (iVar2 != unaff_s4) break;
          in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
          iVar4 = iVar1;
        }
        if (iVar2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        iVar4 = iVar1;
      }
      if (iVar2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      iVar4 = iVar1;
    }
    in_stack_00000214 = DAT_80041930;
    if (iVar2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
      return iVar2;
    }
    while (iVar2 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar2;
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar4 = 0x23;
    in_stack_00000218 = DAT_80041934;
    in_stack_0000024c = iVar1;
    if (iVar2 == 0x2e) {
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar4 = iVar1;
      if (iVar2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar2;
      }
      while (in_stack_0000024c = iVar4 + 1, iVar2 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar2;
        iVar2 = (int)*(char *)(iVar4 + 2);
        iVar4 = in_stack_0000024c;
      }
      iVar4 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    unaff_s1 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(iVar2) {
    case 0x4c:
      iVar2 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (iVar2 != 0x25) goto SPRINTF_OBJ_84C;
      goto SPRINTF_OBJ_794;
    case 99:
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    case 100:
    case 0x69:
      goto code_r0x80034bf8;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6e:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    case 0x6f:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar7 != 0)) && (*unaff_s1 != 0x30)) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((int)uVar7 < in_stack_00000218) {
        do {
          unaff_s1 = unaff_s1 + -1;
          *unaff_s1 = 0x30;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < in_stack_00000218);
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
      break;
    case 0x70:
    case 0x58:
      iVar2 = SPRINTF_OBJ_5A4();
      return iVar2;
    case 0x73:
      unaff_s1 = (byte *)*in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(unaff_s1);
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
        uVar7 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      else {
        uVar7 = (uint)*unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar7)) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      break;
    case 0x75:
      goto SPRINTF_OBJ_35C;
    case 0x78:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
        unaff_s1 = unaff_s1 + -1;
        uVar7 = uVar7 + 1;
        *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
      }
      for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        unaff_s1[-1] = (byte)iVar2;
        unaff_s1[-2] = 0x30;
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
    }
  } while( true );
SPRINTF_OBJ_35C:
  uVar5 = *in_stack_00000220;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  in_stack_00000210 = in_stack_00000210 & 0xff;
  goto code_r0x80034c84;
}



int SPRINTF_OBJ_35C(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034c50:
  uVar5 = *in_stack_00000220;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  in_stack_00000210 = in_stack_00000210 & 0xff;
code_r0x80034c84:
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  while (uVar5 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar7 = uVar7 + 1;
    *unaff_s1 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  do {
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar7 < in_stack_00000214);
      puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar6,unaff_s1,uVar7);
    unaff_s2 = unaff_s2 + uVar7;
    for (; (int)uVar7 < in_stack_00000214; uVar7 = uVar7 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    iVar2 = (int)*(char *)(in_stack_0000024c + 1);
    if (iVar2 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (iVar2 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    in_stack_00000210 = DAT_8004192c;
    iVar4 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar4 + 1;
              iVar2 = (int)*(char *)(iVar4 + 1);
              if (iVar2 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              iVar4 = iVar1;
            }
            if (iVar2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            iVar4 = iVar1;
          }
          if (iVar2 != unaff_s4) break;
          in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
          iVar4 = iVar1;
        }
        if (iVar2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        iVar4 = iVar1;
      }
      if (iVar2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      iVar4 = iVar1;
    }
    in_stack_00000214 = DAT_80041930;
    if (iVar2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
      return iVar2;
    }
    while (iVar2 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar2;
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar4 = 0x23;
    in_stack_00000218 = DAT_80041934;
    in_stack_0000024c = iVar1;
    if (iVar2 == 0x2e) {
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar4 = iVar1;
      if (iVar2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar2;
      }
      while (in_stack_0000024c = iVar4 + 1, iVar2 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar2;
        iVar2 = (int)*(char *)(iVar4 + 2);
        iVar4 = in_stack_0000024c;
      }
      iVar4 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    unaff_s1 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(iVar2) {
    case 0x4c:
      iVar2 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (iVar2 != 0x25) goto SPRINTF_OBJ_84C;
      goto SPRINTF_OBJ_794;
    case 99:
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_304;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6e:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    case 0x6f:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar7 != 0)) && (*unaff_s1 != 0x30)) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((int)uVar7 < in_stack_00000218) {
        do {
          unaff_s1 = unaff_s1 + -1;
          *unaff_s1 = 0x30;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < in_stack_00000218);
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
      break;
    case 0x70:
    case 0x58:
      iVar2 = SPRINTF_OBJ_5A4();
      return iVar2;
    case 0x73:
      unaff_s1 = (byte *)*in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(unaff_s1);
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
        uVar7 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      else {
        uVar7 = (uint)*unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar7)) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      break;
    case 0x75:
      goto code_r0x80034c50;
    case 0x78:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
        unaff_s1 = unaff_s1 + -1;
        uVar7 = uVar7 + 1;
        *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
      }
      for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        unaff_s1[-1] = (byte)iVar2;
        unaff_s1[-2] = 0x30;
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
    }
  } while( true );
SPRINTF_OBJ_304:
  uVar5 = *in_stack_00000220;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = (uint)(short)uVar5;
  }
  if ((int)uVar5 < 0) {
    iVar2 = SPRINTF_OBJ_390(-uVar5);
    return iVar2;
  }
  if ((in_stack_00000210 >> 1 & 1) != 0) {
    iVar2 = SPRINTF_OBJ_390();
    return iVar2;
  }
  goto code_r0x80034c84;
}



int SPRINTF_OBJ_390(uint param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034c84:
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  while (param_1 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar7 = uVar7 + 1;
    *unaff_s1 = (char)param_1 + (char)(param_1 / 10) * -10 + 0x30;
    param_1 = param_1 / 10;
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  do {
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar7 < in_stack_00000214);
      puVar6 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar6,unaff_s1,uVar7);
    unaff_s2 = unaff_s2 + uVar7;
    for (; (int)uVar7 < in_stack_00000214; uVar7 = uVar7 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
    iVar2 = (int)*(char *)(in_stack_0000024c + 1);
    if (iVar2 == 0) {
SPRINTF_OBJ_84C:
      *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (iVar2 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    in_stack_00000210 = DAT_8004192c;
    iVar4 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar4 + 1;
              iVar2 = (int)*(char *)(iVar4 + 1);
              if (iVar2 != unaff_s5) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              iVar4 = iVar1;
            }
            if (iVar2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            iVar4 = iVar1;
          }
          if (iVar2 != unaff_s4) break;
          in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
          iVar4 = iVar1;
        }
        if (iVar2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        iVar4 = iVar1;
      }
      if (iVar2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      iVar4 = iVar1;
    }
    in_stack_00000214 = DAT_80041930;
    if (iVar2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
      return iVar2;
    }
    while (iVar2 - 0x30U < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar2;
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar4 = 0x23;
    in_stack_00000218 = DAT_80041934;
    in_stack_0000024c = iVar1;
    if (iVar2 == 0x2e) {
      iVar2 = (int)*(char *)(iVar1 + 1);
      iVar4 = iVar1;
      if (iVar2 == 0x2a) {
        iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar2;
      }
      while (in_stack_0000024c = iVar4 + 1, iVar2 - 0x30U < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar2;
        iVar2 = (int)*(char *)(iVar4 + 2);
        iVar4 = in_stack_0000024c;
      }
      iVar4 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    unaff_s1 = &stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    switch(iVar2) {
    case 0x4c:
      iVar2 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (iVar2 != 0x25) goto SPRINTF_OBJ_84C;
      goto SPRINTF_OBJ_794;
    case 99:
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_304;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2E4();
      return iVar2;
    case 0x6e:
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar2 = SPRINTF_OBJ_82C();
        return iVar2;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    case 0x6f:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if ((in_stack_00000210 >> 3 & 1) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar7 != 0)) && (*unaff_s1 != 0x30)) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar7 = uVar7 + 1;
      }
      if ((int)uVar7 < in_stack_00000218) {
        do {
          unaff_s1 = unaff_s1 + -1;
          *unaff_s1 = 0x30;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < in_stack_00000218);
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
      break;
    case 0x70:
    case 0x58:
      iVar2 = SPRINTF_OBJ_5A4();
      return iVar2;
    case 0x73:
      unaff_s1 = (byte *)*in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 2 & 1) == 0) {
        if ((in_stack_00000210 >> 4 & 1) == 0) {
          FUN_80033d14(unaff_s1);
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
        pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
        uVar7 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      else {
        uVar7 = (uint)*unaff_s1;
        unaff_s1 = unaff_s1 + 1;
        if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar7)) {
          iVar2 = SPRINTF_OBJ_7A0();
          return iVar2;
        }
      }
      break;
    case 0x75:
      param_1 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        param_1 = param_1 & 0xffff;
      }
      in_stack_00000210 = in_stack_00000210 & 0xff;
      goto code_r0x80034c84;
    case 0x78:
      uVar5 = *in_stack_00000220;
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((in_stack_00000210 >> 5 & 1) != 0) {
        uVar5 = uVar5 & 0xffff;
      }
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        if (((in_stack_00000210 >> 3 & 1) != 0) &&
           (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
          in_stack_00000218 = in_stack_00000214 + -2;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar7 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
        unaff_s1 = unaff_s1 + -1;
        uVar7 = uVar7 + 1;
        *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
      }
      for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
      }
      if ((in_stack_00000210 >> 2 & 1) != 0) {
        unaff_s1[-1] = (byte)iVar2;
        unaff_s1[-2] = 0x30;
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
    }
  } while( true );
SPRINTF_OBJ_304:
  param_1 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    param_1 = (uint)(short)param_1;
  }
  if ((int)param_1 < 0) {
    iVar2 = SPRINTF_OBJ_390(-param_1);
    return iVar2;
  }
  if ((in_stack_00000210 >> 1 & 1) != 0) {
    iVar2 = SPRINTF_OBJ_390();
    return iVar2;
  }
  goto code_r0x80034c84;
}



int SPRINTF_OBJ_47C(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034d70:
  uVar5 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if ((in_stack_00000210 >> 3 & 1) != 0) {
      in_stack_00000218 = in_stack_00000214;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
    uVar7 = uVar7 + 1;
  }
  if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar7 != 0)) && (*unaff_s1 != 0x30)) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
    uVar7 = uVar7 + 1;
  }
  if ((int)uVar7 < in_stack_00000218) {
    do {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = 0x30;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < in_stack_00000218);
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
code_r0x80035094:
  puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar7 < in_stack_00000214);
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar6,unaff_s1,uVar7);
  unaff_s2 = unaff_s2 + uVar7;
  for (; (int)uVar7 < in_stack_00000214; uVar7 = uVar7 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  iVar2 = (int)*(char *)(in_stack_0000024c + 1);
  if (iVar2 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (iVar2 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)iVar2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  }
  in_stack_00000210 = DAT_8004192c;
  iVar4 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar4 + 1;
            iVar2 = (int)*(char *)(iVar4 + 1);
            if (iVar2 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar4 = iVar1;
          }
          if (iVar2 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar4 = iVar1;
        }
        if (iVar2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
        iVar4 = iVar1;
      }
      if (iVar2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar4 = iVar1;
    }
    if (iVar2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar4 = iVar1;
  }
  in_stack_00000214 = DAT_80041930;
  if (iVar2 == 0x2a) {
    iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
    return iVar2;
  }
  while (iVar2 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar2;
    iVar2 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar4 = 0x23;
  in_stack_00000218 = DAT_80041934;
  in_stack_0000024c = iVar1;
  if (iVar2 == 0x2e) {
    iVar2 = (int)*(char *)(iVar1 + 1);
    iVar4 = iVar1;
    if (iVar2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar4 + 1, iVar2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar2;
      iVar2 = (int)*(char *)(iVar4 + 2);
      iVar4 = in_stack_0000024c;
    }
    iVar4 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(iVar2) {
  case 0x4c:
    iVar2 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
    return iVar2;
  default:
    if (iVar2 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  case 100:
  case 0x69:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = (uint)(short)uVar5;
    }
    if ((int)uVar5 < 0) {
      iVar2 = SPRINTF_OBJ_390(-uVar5);
      return iVar2;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar2 = SPRINTF_OBJ_390();
      return iVar2;
    }
    break;
  case 0x68:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6c:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  case 0x6f:
    goto code_r0x80034d70;
  case 0x70:
  case 0x58:
    iVar2 = SPRINTF_OBJ_5A4();
    return iVar2;
  case 0x73:
    unaff_s1 = (byte *)*in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 2 & 1) == 0) {
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        FUN_80033d14(unaff_s1);
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
      pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
      uVar7 = (int)pvVar3 - (int)unaff_s1;
      if (pvVar3 == (void *)0x0) {
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
    }
    else {
      uVar7 = (uint)*unaff_s1;
      unaff_s1 = unaff_s1 + 1;
      if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar7)) {
        iVar2 = SPRINTF_OBJ_7A0();
        return iVar2;
      }
    }
    goto code_r0x80035094;
  case 0x75:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto SPRINTF_OBJ_59C;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar8 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  while (uVar5 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar7 = uVar7 + 1;
    *unaff_s1 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
SPRINTF_OBJ_59C:
  uVar5 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
    unaff_s1 = unaff_s1 + -1;
    uVar7 = uVar7 + 1;
    *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    unaff_s1[-1] = (byte)iVar2;
    unaff_s1[-2] = 0x30;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
}



void SPRINTF_OBJ_57C(void)

{
  SPRINTF_OBJ_5A4();
  return;
}



void SPRINTF_OBJ_590(void)

{
  SPRINTF_OBJ_5A4();
  return;
}



int SPRINTF_OBJ_59C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uchar *puVar5;
  uint uVar6;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034e90:
  uVar4 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar4 = uVar4 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar6 = 0;
  for (; uVar4 != 0; uVar4 = uVar4 >> 4) {
    unaff_s1 = unaff_s1 + -1;
    uVar6 = uVar6 + 1;
    *unaff_s1 = "0123456789abcdef"[uVar4 & 0xf];
  }
  for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    unaff_s1[-1] = (byte)param_2;
    unaff_s1[-2] = 0x30;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
code_r0x80035094:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar6 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,unaff_s1,uVar6);
  unaff_s2 = unaff_s2 + uVar6;
  for (; (int)uVar6 < in_stack_00000214; uVar6 = uVar6 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  param_2 = (int)*(char *)(in_stack_0000024c + 1);
  if (param_2 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (param_2 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  }
  in_stack_00000210 = DAT_8004192c;
  iVar2 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar2 + 1;
            param_2 = (int)*(char *)(iVar2 + 1);
            if (param_2 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar2 = iVar1;
          }
          if (param_2 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar2 = iVar1;
        }
        if (param_2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar2 + 1),(byte)in_stack_00000210);
        iVar2 = iVar1;
      }
      if (param_2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar2 = iVar1;
    }
    if (param_2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar2 = iVar1;
  }
  in_stack_00000214 = DAT_80041930;
  if (param_2 == 0x2a) {
    iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar2 + 2));
    return iVar2;
  }
  while (param_2 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x23;
  in_stack_00000218 = DAT_80041934;
  in_stack_0000024c = iVar1;
  if (param_2 == 0x2e) {
    param_2 = (int)*(char *)(iVar1 + 1);
    iVar2 = iVar1;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(iVar2 + 2);
      iVar2 = in_stack_0000024c;
    }
    iVar2 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(param_2) {
  case 0x4c:
    iVar2 = SPRINTF_OBJ_29C(iVar2,(int)*(char *)(in_stack_0000024c + 1));
    return iVar2;
  default:
    if (param_2 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  case 100:
  case 0x69:
    uVar4 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = (uint)(short)uVar4;
    }
    if ((int)uVar4 < 0) {
      iVar2 = SPRINTF_OBJ_390(-uVar4);
      return iVar2;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar2 = SPRINTF_OBJ_390();
      return iVar2;
    }
    break;
  case 0x68:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6c:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  case 0x6f:
    uVar4 = *in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = uVar4 & 0xffff;
    }
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      if ((in_stack_00000210 >> 3 & 1) != 0) {
        in_stack_00000218 = in_stack_00000214;
      }
      if (in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar6 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 >> 3) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = ((byte)uVar4 & 7) + 0x30;
      uVar6 = uVar6 + 1;
    }
    if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar6 != 0)) && (*unaff_s1 != 0x30)) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = 0x30;
      uVar6 = uVar6 + 1;
    }
    if ((int)uVar6 < in_stack_00000218) {
      do {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < in_stack_00000218);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    goto code_r0x80035094;
  case 0x70:
  case 0x58:
    iVar2 = SPRINTF_OBJ_5A4();
    return iVar2;
  case 0x73:
    goto SPRINTF_OBJ_6C8;
  case 0x75:
    uVar4 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = uVar4 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto code_r0x80034e90;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar7 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar7 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar6 = 0;
  while (uVar4 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar6 = uVar6 + 1;
    *unaff_s1 = (char)uVar4 + (char)(uVar4 / 10) * -10 + 0x30;
    uVar4 = uVar4 / 10;
  }
  for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar7 != 0) {
    unaff_s1[-1] = bVar7;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
SPRINTF_OBJ_6C8:
  unaff_s1 = (byte *)*in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 2 & 1) == 0) {
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      FUN_80033d14(unaff_s1);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
    uVar6 = (int)pvVar3 - (int)unaff_s1;
    if (pvVar3 == (void *)0x0) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
  else {
    uVar6 = (uint)*unaff_s1;
    unaff_s1 = unaff_s1 + 1;
    if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar6)) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
  goto code_r0x80035094;
}



int SPRINTF_OBJ_5A4(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uchar *puVar5;
  uint uVar6;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar7;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034e98:
  uVar4 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar4 = uVar4 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar6 = 0;
  for (; uVar4 != 0; uVar4 = uVar4 >> 4) {
    unaff_s1 = unaff_s1 + -1;
    uVar6 = uVar6 + 1;
    *unaff_s1 = param_4[uVar4 & 0xf];
  }
  for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    unaff_s1[-1] = (byte)param_2;
    unaff_s1[-2] = 0x30;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
code_r0x80035094:
  puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar6 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar6 < in_stack_00000214);
    puVar5 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar5,unaff_s1,uVar6);
  unaff_s2 = unaff_s2 + uVar6;
  for (; (int)uVar6 < in_stack_00000214; uVar6 = uVar6 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  param_2 = (int)*(char *)(in_stack_0000024c + 1);
  if (param_2 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (param_2 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  }
  in_stack_00000210 = DAT_8004192c;
  iVar2 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar2 + 1;
            param_2 = (int)*(char *)(iVar2 + 1);
            if (param_2 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar2 = iVar1;
          }
          if (param_2 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar2 = iVar1;
        }
        if (param_2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar2 + 1),(byte)in_stack_00000210);
        iVar2 = iVar1;
      }
      if (param_2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar2 = iVar1;
    }
    if (param_2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar2 = iVar1;
  }
  in_stack_00000214 = DAT_80041930;
  if (param_2 == 0x2a) {
    iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar2 + 2));
    return iVar2;
  }
  while (param_2 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x23;
  in_stack_00000218 = DAT_80041934;
  in_stack_0000024c = iVar1;
  if (param_2 == 0x2e) {
    param_2 = (int)*(char *)(iVar1 + 1);
    iVar2 = iVar1;
    if (param_2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (int)*(char *)(iVar2 + 2);
      iVar2 = in_stack_0000024c;
    }
    iVar2 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(param_2) {
  case 0x4c:
    iVar2 = SPRINTF_OBJ_29C(iVar2,(int)*(char *)(in_stack_0000024c + 1));
    return iVar2;
  default:
    if (param_2 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  case 100:
  case 0x69:
    uVar4 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = (uint)(short)uVar4;
    }
    if ((int)uVar4 < 0) {
      iVar2 = SPRINTF_OBJ_390(-uVar4);
      return iVar2;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar2 = SPRINTF_OBJ_390();
      return iVar2;
    }
    break;
  case 0x68:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6c:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  case 0x6f:
    uVar4 = *in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = uVar4 & 0xffff;
    }
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      if ((in_stack_00000210 >> 3 & 1) != 0) {
        in_stack_00000218 = in_stack_00000214;
      }
      if (in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar6 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 >> 3) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = ((byte)uVar4 & 7) + 0x30;
      uVar6 = uVar6 + 1;
    }
    if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar6 != 0)) && (*unaff_s1 != 0x30)) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = 0x30;
      uVar6 = uVar6 + 1;
    }
    if ((int)uVar6 < in_stack_00000218) {
      do {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < in_stack_00000218);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    goto code_r0x80035094;
  case 0x70:
  case 0x58:
    iVar2 = SPRINTF_OBJ_5A4();
    return iVar2;
  case 0x73:
    goto SPRINTF_OBJ_6C8;
  case 0x75:
    uVar4 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar4 = uVar4 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto SPRINTF_OBJ_59C;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar7 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar7 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar6 = 0;
  while (uVar4 != 0) {
    unaff_s1 = unaff_s1 + -1;
    uVar6 = uVar6 + 1;
    *unaff_s1 = (char)uVar4 + (char)(uVar4 / 10) * -10 + 0x30;
    uVar4 = uVar4 / 10;
  }
  for (; (int)uVar6 < in_stack_00000218; uVar6 = uVar6 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar7 != 0) {
    unaff_s1[-1] = bVar7;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
SPRINTF_OBJ_59C:
  param_4 = "0123456789abcdef";
  goto code_r0x80034e98;
SPRINTF_OBJ_6C8:
  unaff_s1 = (byte *)*in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 2 & 1) == 0) {
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      FUN_80033d14(unaff_s1);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    pvVar3 = memchr(unaff_s1,'\0',in_stack_00000218);
    uVar6 = (int)pvVar3 - (int)unaff_s1;
    if (pvVar3 == (void *)0x0) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
  else {
    uVar6 = (uint)*unaff_s1;
    unaff_s1 = unaff_s1 + 1;
    if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar6)) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
  goto code_r0x80035094;
}



void SPRINTF_OBJ_6A8(void)

{
  int unaff_s1;
  undefined1 *in_stack_00000220;
  
  *(undefined1 *)(unaff_s1 + -1) = *in_stack_00000220;
  SPRINTF_OBJ_7A0();
  return;
}



int SPRINTF_OBJ_6C8(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  byte *pbVar8;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar9;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80034fbc:
  pbVar8 = (byte *)*in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 2 & 1) == 0) {
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      FUN_80033d14(pbVar8);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    pvVar3 = memchr(pbVar8,'\0',in_stack_00000218);
    uVar7 = (int)pvVar3 - (int)pbVar8;
    if (pvVar3 == (void *)0x0) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
  else {
    uVar7 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
    if (((in_stack_00000210 >> 4 & 1) != 0) && (in_stack_00000218 < (int)uVar7)) {
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
  }
code_r0x80035094:
  puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar7 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar7 < in_stack_00000214);
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar6,pbVar8,uVar7);
  unaff_s2 = unaff_s2 + uVar7;
  for (; (int)uVar7 < in_stack_00000214; uVar7 = uVar7 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  iVar2 = (int)*(char *)(in_stack_0000024c + 1);
  if (iVar2 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (iVar2 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)iVar2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  }
  in_stack_00000210 = DAT_8004192c;
  iVar4 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar4 + 1;
            iVar2 = (int)*(char *)(iVar4 + 1);
            if (iVar2 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar4 = iVar1;
          }
          if (iVar2 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar4 = iVar1;
        }
        if (iVar2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
        iVar4 = iVar1;
      }
      if (iVar2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar4 = iVar1;
    }
    if (iVar2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar4 = iVar1;
  }
  in_stack_00000214 = DAT_80041930;
  if (iVar2 == 0x2a) {
    iVar2 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
    return iVar2;
  }
  while (iVar2 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar2;
    iVar2 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar4 = 0x23;
  in_stack_00000218 = DAT_80041934;
  in_stack_0000024c = iVar1;
  if (iVar2 == 0x2e) {
    iVar2 = (int)*(char *)(iVar1 + 1);
    iVar4 = iVar1;
    if (iVar2 == 0x2a) {
      iVar2 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar2;
    }
    while (in_stack_0000024c = iVar4 + 1, iVar2 - 0x30U < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + iVar2;
      iVar2 = (int)*(char *)(iVar4 + 2);
      iVar4 = in_stack_0000024c;
    }
    iVar4 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  pbVar8 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(iVar2) {
  case 0x4c:
    iVar2 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
    return iVar2;
  default:
    if (iVar2 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  case 100:
  case 0x69:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = (uint)(short)uVar5;
    }
    if ((int)uVar5 < 0) {
      iVar2 = SPRINTF_OBJ_390(-uVar5);
      return iVar2;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar2 = SPRINTF_OBJ_390();
      return iVar2;
    }
    break;
  case 0x68:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6c:
    iVar2 = SPRINTF_OBJ_2E4();
    return iVar2;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar2 = SPRINTF_OBJ_82C();
      return iVar2;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar2 = SPRINTF_OBJ_82C();
    return iVar2;
  case 0x6f:
    uVar5 = *in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      if ((in_stack_00000210 >> 3 & 1) != 0) {
        in_stack_00000218 = in_stack_00000214;
      }
      if (in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar7 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
      pbVar8 = pbVar8 + -1;
      *pbVar8 = ((byte)uVar5 & 7) + 0x30;
      uVar7 = uVar7 + 1;
    }
    if ((((in_stack_00000210 >> 2 & 1) != 0) && (uVar7 != 0)) && (*pbVar8 != 0x30)) {
      pbVar8 = pbVar8 + -1;
      *pbVar8 = 0x30;
      uVar7 = uVar7 + 1;
    }
    if ((int)uVar7 < in_stack_00000218) {
      do {
        pbVar8 = pbVar8 + -1;
        *pbVar8 = 0x30;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < in_stack_00000218);
      iVar2 = SPRINTF_OBJ_7A0();
      return iVar2;
    }
    goto code_r0x80035094;
  case 0x70:
  case 0x58:
    iVar2 = SPRINTF_OBJ_5A4();
    return iVar2;
  case 0x73:
    goto code_r0x80034fbc;
  case 0x75:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto SPRINTF_OBJ_59C;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar9 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (in_stack_00000218 = in_stack_00000214, bVar9 != 0))
    {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  while (uVar5 != 0) {
    pbVar8 = pbVar8 + -1;
    uVar7 = uVar7 + 1;
    *pbVar8 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    pbVar8 = pbVar8 + -1;
    *pbVar8 = 0x30;
  }
  if (bVar9 != 0) {
    pbVar8[-1] = bVar9;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
SPRINTF_OBJ_59C:
  uVar5 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar7 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
    pbVar8 = pbVar8 + -1;
    uVar7 = uVar7 + 1;
    *pbVar8 = "0123456789abcdef"[uVar5 & 0xf];
  }
  for (; (int)uVar7 < in_stack_00000218; uVar7 = uVar7 + 1) {
    pbVar8 = pbVar8 + -1;
    *pbVar8 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    pbVar8[-1] = (byte)iVar2;
    pbVar8[-2] = 0x30;
    iVar2 = SPRINTF_OBJ_7A0();
    return iVar2;
  }
  goto code_r0x80035094;
}



void SPRINTF_OBJ_754(void)

{
  undefined4 unaff_s2;
  uint in_stack_00000210;
  undefined4 *in_stack_00000220;
  
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    *(short *)*in_stack_00000220 = (short)unaff_s2;
    SPRINTF_OBJ_82C();
    return;
  }
  *(undefined4 *)*in_stack_00000220 = unaff_s2;
  SPRINTF_OBJ_82C();
  return;
}



void SPRINTF_OBJ_788(undefined4 param_1,int param_2)

{
  int unaff_s2;
  int unaff_s3;
  
  if (param_2 == 0x25) {
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0x25;
    SPRINTF_OBJ_82C();
    return;
  }
  *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
  return;
}



int SPRINTF_OBJ_7A0(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uint unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar8;
  uint in_stack_00000210;
  int in_stack_00000214;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
code_r0x80035094:
  puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)unaff_s0 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)unaff_s0 < in_stack_00000214);
    puVar6 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar6,unaff_s1,unaff_s0);
  unaff_s2 = unaff_s2 + unaff_s0;
  for (; (int)unaff_s0 < in_stack_00000214; unaff_s0 = unaff_s0 + 1) {
    *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
    unaff_s2 = unaff_s2 + 1;
  }
  iVar7 = (int)*(char *)(in_stack_0000024c + 1);
  if (iVar7 == 0) {
SPRINTF_OBJ_84C:
    *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  if (iVar7 != 0x25) {
SPRINTF_OBJ_794:
    *(char *)(unaff_s3 + unaff_s2) = (char)iVar7;
    iVar7 = SPRINTF_OBJ_82C();
    return iVar7;
  }
  in_stack_00000210 = DAT_8004192c;
  iVar4 = in_stack_0000024c + 1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = iVar4 + 1;
            iVar7 = (int)*(char *)(iVar4 + 1);
            if (iVar7 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            iVar4 = iVar1;
          }
          if (iVar7 != unaff_s6) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          iVar4 = iVar1;
        }
        if (iVar7 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(char *)(iVar4 + 1),(byte)in_stack_00000210);
        iVar4 = iVar1;
      }
      if (iVar7 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      iVar4 = iVar1;
    }
    if (iVar7 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    iVar4 = iVar1;
  }
  in_stack_00000214 = DAT_80041930;
  if (iVar7 == 0x2a) {
    iVar7 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar4 + 2));
    return iVar7;
  }
  while (iVar7 - 0x30U < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + iVar7;
    iVar7 = (int)*(char *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  iVar4 = 0x23;
  iVar2 = DAT_80041934;
  in_stack_0000024c = iVar1;
  if (iVar7 == 0x2e) {
    iVar7 = (int)*(char *)(iVar1 + 1);
    iVar4 = iVar1;
    if (iVar7 == 0x2a) {
      iVar7 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
      return iVar7;
    }
    while (in_stack_0000024c = iVar4 + 1, iVar7 - 0x30U < 10) {
      iVar2 = iVar2 * 10 + -0x30 + iVar7;
      iVar7 = (int)*(char *)(iVar4 + 2);
      iVar4 = in_stack_0000024c;
    }
    iVar4 = iVar1;
    if (-1 < iVar2) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = &stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  switch(iVar7) {
  case 0x4c:
    iVar7 = SPRINTF_OBJ_29C(iVar4,(int)*(char *)(in_stack_0000024c + 1));
    return iVar7;
  default:
    if (iVar7 != 0x25) goto SPRINTF_OBJ_84C;
    goto SPRINTF_OBJ_794;
  case 99:
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  case 100:
  case 0x69:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = (uint)(short)uVar5;
    }
    if ((int)uVar5 < 0) {
      iVar7 = SPRINTF_OBJ_390(-uVar5);
      return iVar7;
    }
    if ((in_stack_00000210 >> 1 & 1) != 0) {
      iVar7 = SPRINTF_OBJ_390();
      return iVar7;
    }
    break;
  case 0x68:
    iVar7 = SPRINTF_OBJ_2E4();
    return iVar7;
  case 0x6c:
    iVar7 = SPRINTF_OBJ_2E4();
    return iVar7;
  case 0x6e:
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      *(short *)*in_stack_00000220 = (short)unaff_s2;
      iVar7 = SPRINTF_OBJ_82C();
      return iVar7;
    }
    *(int *)*in_stack_00000220 = unaff_s2;
    iVar7 = SPRINTF_OBJ_82C();
    return iVar7;
  case 0x6f:
    uVar5 = *in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    if ((in_stack_00000210 >> 4 & 1) == 0) {
      if ((in_stack_00000210 >> 3 & 1) != 0) {
        iVar2 = in_stack_00000214;
      }
      if (iVar2 < 1) {
        iVar2 = 1;
      }
    }
    unaff_s0 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 >> 3) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = ((byte)uVar5 & 7) + 0x30;
      unaff_s0 = unaff_s0 + 1;
    }
    if ((((in_stack_00000210 >> 2 & 1) != 0) && (unaff_s0 != 0)) && (*unaff_s1 != 0x30)) {
      unaff_s1 = unaff_s1 + -1;
      *unaff_s1 = 0x30;
      unaff_s0 = unaff_s0 + 1;
    }
    if ((int)unaff_s0 < iVar2) {
      do {
        unaff_s1 = unaff_s1 + -1;
        *unaff_s1 = 0x30;
        unaff_s0 = unaff_s0 + 1;
      } while ((int)unaff_s0 < iVar2);
      iVar7 = SPRINTF_OBJ_7A0();
      return iVar7;
    }
    goto code_r0x80035094;
  case 0x70:
  case 0x58:
    iVar7 = SPRINTF_OBJ_5A4();
    return iVar7;
  case 0x73:
    unaff_s1 = (byte *)*in_stack_00000220;
    in_stack_00000220 = in_stack_00000220 + 1;
    if ((in_stack_00000210 >> 2 & 1) == 0) {
      if ((in_stack_00000210 >> 4 & 1) == 0) {
        FUN_80033d14(unaff_s1);
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
      pvVar3 = memchr(unaff_s1,'\0',iVar2);
      unaff_s0 = (int)pvVar3 - (int)unaff_s1;
      if (pvVar3 == (void *)0x0) {
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
    }
    else {
      unaff_s0 = (uint)*unaff_s1;
      unaff_s1 = unaff_s1 + 1;
      if (((in_stack_00000210 >> 4 & 1) != 0) && (iVar2 < (int)unaff_s0)) {
        iVar7 = SPRINTF_OBJ_7A0();
        return iVar7;
      }
    }
    goto code_r0x80035094;
  case 0x75:
    uVar5 = *in_stack_00000220;
    if ((in_stack_00000210 >> 5 & 1) != 0) {
      uVar5 = uVar5 & 0xffff;
    }
    in_stack_00000210 = in_stack_00000210 & 0xff;
    break;
  case 0x78:
    goto SPRINTF_OBJ_59C;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) && (iVar2 = in_stack_00000214, bVar8 != 0)) {
      iVar2 = in_stack_00000214 + -1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  unaff_s0 = 0;
  while (uVar5 != 0) {
    unaff_s1 = unaff_s1 + -1;
    unaff_s0 = unaff_s0 + 1;
    *unaff_s1 = (char)uVar5 + (char)(uVar5 / 10) * -10 + 0x30;
    uVar5 = uVar5 / 10;
  }
  for (; (int)unaff_s0 < iVar2; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if (bVar8 != 0) {
    unaff_s1[-1] = bVar8;
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  }
  goto code_r0x80035094;
SPRINTF_OBJ_59C:
  uVar5 = *in_stack_00000220;
  in_stack_00000220 = in_stack_00000220 + 1;
  if ((in_stack_00000210 >> 5 & 1) != 0) {
    uVar5 = uVar5 & 0xffff;
  }
  if ((in_stack_00000210 >> 4 & 1) == 0) {
    if (((in_stack_00000210 >> 3 & 1) != 0) &&
       (iVar2 = in_stack_00000214, (in_stack_00000210 >> 2 & 1) != 0)) {
      iVar2 = in_stack_00000214 + -2;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
  }
  unaff_s0 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 4) {
    unaff_s1 = unaff_s1 + -1;
    unaff_s0 = unaff_s0 + 1;
    *unaff_s1 = "0123456789abcdef"[uVar5 & 0xf];
  }
  for (; (int)unaff_s0 < iVar2; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = unaff_s1 + -1;
    *unaff_s1 = 0x30;
  }
  if ((in_stack_00000210 >> 2 & 1) != 0) {
    unaff_s1[-1] = (byte)iVar7;
    unaff_s1[-2] = 0x30;
    iVar7 = SPRINTF_OBJ_7A0();
    return iVar7;
  }
  goto code_r0x80035094;
}



int SPRINTF_OBJ_82C(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  byte bVar12;
  uint *in_stack_00000220;
  int in_stack_0000024c;
  
  while( true ) {
    iVar9 = (int)*(char *)(in_stack_0000024c + 1);
    if (iVar9 == 0) break;
    if (iVar9 != 0x25) {
SPRINTF_OBJ_794:
      *(char *)(unaff_s3 + unaff_s2) = (char)iVar9;
      iVar9 = SPRINTF_OBJ_82C();
      return iVar9;
    }
    uVar2 = DAT_8004192c;
    iVar6 = in_stack_0000024c + 1;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = iVar6 + 1;
              iVar9 = (int)*(char *)(iVar6 + 1);
              if (iVar9 != unaff_s5) break;
              uVar2 = uVar2 | 1;
              iVar6 = iVar1;
            }
            if (iVar9 != unaff_s6) break;
            uVar2 = uVar2 | 2;
            iVar6 = iVar1;
          }
          if (iVar9 != unaff_s4) break;
          uVar2 = (uint)CONCAT11(*(char *)(iVar6 + 1),(byte)uVar2);
          iVar6 = iVar1;
        }
        if (iVar9 != 0x23) break;
        uVar2 = uVar2 | 4;
        iVar6 = iVar1;
      }
      if (iVar9 != 0x30) break;
      uVar2 = uVar2 | 8;
      iVar6 = iVar1;
    }
    iVar3 = DAT_80041930;
    if (iVar9 == 0x2a) {
      iVar9 = SPRINTF_OBJ_1BC(*in_stack_00000220,(int)*(char *)(iVar6 + 2));
      return iVar9;
    }
    while (iVar9 - 0x30U < 10) {
      iVar3 = iVar3 * 10 + -0x30 + iVar9;
      iVar9 = (int)*(char *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar6 = 0x23;
    iVar4 = DAT_80041934;
    in_stack_0000024c = iVar1;
    if (iVar9 == 0x2e) {
      iVar9 = (int)*(char *)(iVar1 + 1);
      iVar6 = iVar1;
      if (iVar9 == 0x2a) {
        iVar9 = SPRINTF_OBJ_258(iVar1,(int)*(char *)(iVar1 + 2));
        return iVar9;
      }
      while (in_stack_0000024c = iVar6 + 1, iVar9 - 0x30U < 10) {
        iVar4 = iVar4 * 10 + -0x30 + iVar9;
        iVar9 = (int)*(char *)(iVar6 + 2);
        iVar6 = in_stack_0000024c;
      }
      iVar6 = iVar1;
      if (-1 < iVar4) {
        uVar2 = uVar2 | 0x10;
      }
    }
    pbVar11 = &stack0x00000210;
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar2 & 0xfffffff7;
    }
    switch(iVar9) {
    case 0x4c:
      iVar9 = SPRINTF_OBJ_29C(iVar6,(int)*(char *)(in_stack_0000024c + 1));
      return iVar9;
    default:
      if (iVar9 == 0x25) goto SPRINTF_OBJ_794;
      goto SPRINTF_OBJ_84C;
    case 99:
      iVar9 = SPRINTF_OBJ_7A0();
      return iVar9;
    case 100:
    case 0x69:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = (uint)(short)uVar7;
      }
      if ((int)uVar7 < 0) {
        iVar9 = SPRINTF_OBJ_390(-uVar7);
        return iVar9;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        iVar9 = SPRINTF_OBJ_390();
        return iVar9;
      }
      goto code_r0x80034c84;
    case 0x68:
      iVar9 = SPRINTF_OBJ_2E4();
      return iVar9;
    case 0x6c:
      iVar9 = SPRINTF_OBJ_2E4();
      return iVar9;
    case 0x6e:
      if ((uVar2 >> 5 & 1) != 0) {
        *(short *)*in_stack_00000220 = (short)unaff_s2;
        iVar9 = SPRINTF_OBJ_82C();
        return iVar9;
      }
      *(int *)*in_stack_00000220 = unaff_s2;
      iVar9 = SPRINTF_OBJ_82C();
      return iVar9;
    case 0x6f:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      if ((uVar2 >> 4 & 1) == 0) {
        if ((uVar2 >> 3 & 1) != 0) {
          iVar4 = iVar3;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      for (; uVar7 != 0; uVar7 = uVar7 >> 3) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = ((byte)uVar7 & 7) + 0x30;
        uVar10 = uVar10 + 1;
      }
      if ((((uVar2 >> 2 & 1) != 0) && (uVar10 != 0)) && (*pbVar11 != 0x30)) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
        uVar10 = uVar10 + 1;
      }
      if ((int)uVar10 < iVar4) {
        do {
          pbVar11 = pbVar11 + -1;
          *pbVar11 = 0x30;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar4);
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
      break;
    case 0x70:
    case 0x58:
      iVar9 = SPRINTF_OBJ_5A4();
      return iVar9;
    case 0x73:
      pbVar11 = (byte *)*in_stack_00000220;
      if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 4 & 1) == 0) {
          FUN_80033d14(pbVar11);
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
        pvVar5 = memchr(pbVar11,'\0',iVar4);
        uVar10 = (int)pvVar5 - (int)pbVar11;
        if (pvVar5 == (void *)0x0) {
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
      }
      else {
        uVar10 = (uint)*pbVar11;
        pbVar11 = pbVar11 + 1;
        if (((uVar2 >> 4 & 1) != 0) && (iVar4 < (int)uVar10)) {
          iVar9 = SPRINTF_OBJ_7A0();
          return iVar9;
        }
      }
      break;
    case 0x75:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      uVar2 = uVar2 & 0xff;
code_r0x80034c84:
      bVar12 = (byte)(uVar2 >> 8);
      if ((uVar2 >> 4 & 1) == 0) {
        if (((uVar2 >> 3 & 1) != 0) && (iVar4 = iVar3, bVar12 != 0)) {
          iVar4 = iVar3 + -1;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      while (uVar7 != 0) {
        pbVar11 = pbVar11 + -1;
        uVar10 = uVar10 + 1;
        *pbVar11 = (char)uVar7 + (char)(uVar7 / 10) * -10 + 0x30;
        uVar7 = uVar7 / 10;
      }
      for (; (int)uVar10 < iVar4; uVar10 = uVar10 + 1) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
      }
      if (bVar12 != 0) {
        pbVar11[-1] = bVar12;
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
      break;
    case 0x78:
      uVar7 = *in_stack_00000220;
      if ((uVar2 >> 5 & 1) != 0) {
        uVar7 = uVar7 & 0xffff;
      }
      if ((uVar2 >> 4 & 1) == 0) {
        if (((uVar2 >> 3 & 1) != 0) && (iVar4 = iVar3, (uVar2 >> 2 & 1) != 0)) {
          iVar4 = iVar3 + -2;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
      }
      uVar10 = 0;
      for (; uVar7 != 0; uVar7 = uVar7 >> 4) {
        pbVar11 = pbVar11 + -1;
        uVar10 = uVar10 + 1;
        *pbVar11 = "0123456789abcdef"[uVar7 & 0xf];
      }
      for (; (int)uVar10 < iVar4; uVar10 = uVar10 + 1) {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = 0x30;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        pbVar11[-1] = (byte)iVar9;
        pbVar11[-2] = 0x30;
        iVar9 = SPRINTF_OBJ_7A0();
        return iVar9;
      }
    }
    in_stack_00000220 = in_stack_00000220 + 1;
    puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar10 < iVar3) && ((uVar2 & 1) == 0)) {
      do {
        *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
        iVar3 = iVar3 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar10 < iVar3);
      puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar8,pbVar11,uVar10);
    unaff_s2 = unaff_s2 + uVar10;
    for (; (int)uVar10 < iVar3; uVar10 = uVar10 + 1) {
      *(char *)(unaff_s3 + unaff_s2) = (char)unaff_s4;
      unaff_s2 = unaff_s2 + 1;
    }
  }
SPRINTF_OBJ_84C:
  *(undefined1 *)(unaff_s3 + unaff_s2) = 0;
  return unaff_s2;
}



void * memmove(uchar *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  uchar uVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1 < param_2) {
    iVar4 = param_3 + -1;
    if (0 < param_3) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        bVar1 = 0 < iVar4;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar4 = param_3 + -1;
    if (0 < param_3) {
      do {
        bVar1 = 0 < iVar4;
        param_1[iVar4] = param_2[iVar4];
        iVar4 = iVar4 + -1;
      } while (bVar1);
      pvVar3 = (void *)MEMMOVE_OBJ_64();
      return pvVar3;
    }
  }
  return param_1;
}



void MEMMOVE_OBJ_64(void)

{
  return;
}



void puts(char *param_1)

{
  char cVar1;
  
  if (param_1 == (char *)0x0) {
    PUTS_OBJ_28();
    return;
  }
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    _putchar((int)cVar1);
  }
  _putchar_flash();
  return;
}



void PUTS_OBJ_28(void)

{
  char cVar1;
  char *unaff_s0;
  
  while( true ) {
    cVar1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (cVar1 == '\0') break;
    _putchar((int)cVar1);
  }
  _putchar_flash();
  return;
}



undefined4 setjmp(undefined4 *param_1)

{
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined1 auStackX_0 [16];
  
  *param_1 = unaff_retaddr;
  param_1[0xb] = &DAT_80041a2c;
  param_1[1] = register0x00000074;
  param_1[2] = unaff_s8;
  param_1[3] = unaff_s0;
  param_1[4] = unaff_s1;
  param_1[5] = unaff_s2;
  param_1[6] = unaff_s3;
  param_1[7] = unaff_s4;
  param_1[8] = unaff_s5;
  param_1[9] = unaff_s6;
  param_1[10] = unaff_s7;
  return 0;
}



undefined4 longjmp(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void FlushCache(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}



void GPU_cw(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}



long LoadExec(char *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = (*(code *)&LAB_000000a0)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _96_init(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}



void FUN_8003531c(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}



void DeliverEvent(ulong param_1,ulong param_2)

{
  (*(code *)&SUB_000000b0)();
  return;
}



long OpenEvent(ulong param_1,long param_2,long param_3,func *func)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long CloseEvent(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long WaitEvent(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long TestEvent(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long EnableEvent(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long DisableEvent(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



void PAD_dr(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ReturnFromException(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void ResetEntryInt(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void HookEntryInt(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A36.OBJ/EnterCriticalSection

void FUN_800353e4(void)

{
  syscall(0);
  return;
}



// Possible A37.OBJ/ExitCriticalSection

void FUN_800353f4(void)

{
  syscall(0);
  return;
}



// Possible A39.OBJ/SetSp

void FUN_80035404(void)

{
  return;
}



long write(long param_1,void *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



void ChangeClearPAD(long param_1)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void ChangeClearRCnt(void)

{
  (*(code *)&LAB_000000c0)();
  return;
}



long SetRCnt(ulong param_1,ushort param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  
  puVar1 = PTR_TMR_DOTCLOCK_VAL_80041950;
  uVar4 = param_1 & 0xffff;
  uVar3 = 0x48;
  if (2 < uVar4) {
    lVar2 = COUNTER_OBJ_94();
    return lVar2;
  }
  *(undefined2 *)(PTR_TMR_DOTCLOCK_VAL_80041950 + uVar4 * 0x10 + 4) = 0;
  *(ushort *)(puVar1 + uVar4 * 0x10 + 8) = param_2;
  if (uVar4 < 2) {
    uVar3 = 0x48;
    if ((param_3 & 0x10U) != 0) {
      uVar3 = 0x49;
    }
    if ((param_3 & 1U) == 0) {
      lVar2 = COUNTER_OBJ_74();
      return lVar2;
    }
  }
  else if ((uVar4 == 2) && ((param_3 & 1U) == 0)) {
    uVar3 = 0x248;
  }
  if ((param_3 & 0x1000U) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  *(ushort *)(PTR_TMR_DOTCLOCK_VAL_80041950 + uVar4 * 0x10 + 4) = uVar3;
  return 1;
}



undefined4 COUNTER_OBJ_74(void)

{
  int in_v0;
  ushort in_a3;
  int in_t0;
  
  if (in_v0 != 0) {
    in_a3 = in_a3 | 0x10;
  }
  *(ushort *)(PTR_TMR_DOTCLOCK_VAL_80041950 + in_t0 * 0x10 + 4) = in_a3;
  return 1;
}



void COUNTER_OBJ_94(void)

{
  return;
}



long GetRCnt(ulong param_1)

{
  long lVar1;
  
  if ((param_1 & 0xffff) < 3) {
    lVar1 = COUNTER_OBJ_CC();
    return lVar1;
  }
  return 0;
}



void COUNTER_OBJ_CC(void)

{
  return;
}



long StartRCnt(ulong param_1)

{
  *(uint *)(PTR_I_STAT_8004194c + 4) =
       *(uint *)(PTR_I_STAT_8004194c + 4) | *(uint *)(&DAT_80041954 + (param_1 & 0xffff) * 4);
  return (uint)((param_1 & 0xffff) < 3);
}



long StopRCnt(ulong param_1)

{
  *(uint *)(PTR_I_STAT_8004194c + 4) =
       *(uint *)(PTR_I_STAT_8004194c + 4) & ~*(uint *)(&DAT_80041954 + (param_1 & 0xffff) * 4);
  return 1;
}



long ResetRCnt(ulong param_1)

{
  long lVar1;
  
  if ((param_1 & 0xffff) < 3) {
    *(undefined2 *)(PTR_TMR_DOTCLOCK_VAL_80041950 + (param_1 & 0xffff) * 0x10) = 0;
    lVar1 = COUNTER_OBJ_164();
    return lVar1;
  }
  return 0;
}



void COUNTER_OBJ_164(void)

{
  return;
}



void FUN_800355d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _remove_ChgclrPAD();
  FUN_800353e4();
  _patch_pad();
  FUN_800353f4();
  ChangeClearPAD(0);
  FUN_80035758();
  PAD_init2(param_1,param_2,param_3,param_4);
  DAT_8004196c = 1;
  return;
}



void FUN_80035720(void)

{
  DisablePAD();
  StopPAD2();
  FUN_800357d0();
  DAT_8004196c = 0;
  return;
}



undefined4 FUN_80035758(void)

{
  FUN_800353e4();
  DAT_800acec4 = &LAB_80035808;
  DAT_800acec8 = &LAB_80035870;
  DAT_800acec0 = 0;
  DAT_800acecc = 0;
  SysDeqIntRP(1,&DAT_800acec0);
  SysEnqIntRP(1,&DAT_800acec0);
  FUN_800353f4();
  return 1;
}



undefined4 FUN_800357d0(void)

{
  FUN_800353e4();
  SysDeqIntRP(1,&DAT_800acec0);
  FUN_800353f4();
  return 1;
}



void InitPAD2(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void StartPAD2(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void StopPAD2(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void PAD_init2(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



void SysEnqIntRP(void)

{
  (*(code *)&LAB_000000c0)();
  return;
}



void SysDeqIntRP(void)

{
  (*(code *)&LAB_000000c0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void EnablePAD(void)

{
                    // WARNING: Could not recover jumptable at 0x80035920. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_800aced8)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void DisablePAD(void)

{
                    // WARNING: Could not recover jumptable at 0x80035934. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_800acedc)();
  return;
}



void _patch_pad(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  DAT_800aced0 = unaff_retaddr;
  FUN_800353e4();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  DAT_800aced8 = iVar1 + 0x884;
  DAT_800acedc = iVar1 + 0x894;
  do {
    *(undefined4 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FlushCache();
  return;
}



void _remove_ChgclrPAD(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  DAT_800acee0 = unaff_retaddr;
  FUN_800353e4();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar3 = 9;
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x16c) + 0x62c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FlushCache();
  FUN_800353f4();
  return;
}



long open(char *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long lseek(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long read(long param_1,void *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long close(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



long format(char *param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



DIRENTRY * nextfile(DIRENTRY *param_1)

{
  DIRENTRY *pDVar1;
  
  pDVar1 = (DIRENTRY *)(*(code *)&SUB_000000b0)();
  return pDVar1;
}



long erase(char *param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)&SUB_000000b0)();
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x80035b98)
// WARNING: Removing unreachable block (ram,0x80035bd0)
// WARNING: Removing unreachable block (ram,0x80035bd4)
// WARNING: Removing unreachable block (ram,0x80035be4)
// WARNING: Removing unreachable block (ram,0x80035b88)
// WARNING: Removing unreachable block (ram,0x80035bf8)
// WARNING: Removing unreachable block (ram,0x80035c08)
// WARNING: Removing unreachable block (ram,0x80035c0c)

DIRENTRY * firstfile(char *param_1,DIRENTRY *param_2)

{
  char cVar1;
  int in_zero;
  int iVar2;
  DIRENTRY *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = &DAT_800acef8;
  cVar1 = *param_1;
  while (':' < cVar1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *param_1;
  }
  *pcVar5 = '\0';
  puVar6 = *(undefined4 **)(in_zero + 0x150);
  puVar4 = puVar6 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar4 <= puVar6) {
      pDVar3 = (DIRENTRY *)FIRST_OBJ_180();
      return pDVar3;
    }
    if (((char *)*puVar6 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar6,&DAT_800acef8), iVar2 == 0)) break;
    puVar6 = puVar6 + 0x14;
  }
  DAT_800acef0 = puVar6[0xd];
  pDVar3 = (DIRENTRY *)FIRST_OBJ_D0();
  return pDVar3;
}



void FIRST_OBJ_D0(void)

{
  int in_zero;
  int iVar1;
  int in_v1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (in_v1 == 0) {
    FIRST_OBJ_180();
    return;
  }
  puVar3 = *(undefined4 **)(in_zero + 0x150);
  puVar2 = puVar3 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar2 <= puVar3) {
      firstfile2();
      return;
    }
    if (((char *)*puVar3 != (char *)0x0) &&
       (iVar1 = strcmp((char *)*puVar3,&DAT_800acef8), iVar1 == 0)) break;
    puVar3 = puVar3 + 0x14;
  }
  puVar3[0xd] = FIRST_OBJ_19C;
  FIRST_OBJ_174();
  return;
}



void FIRST_OBJ_174(void)

{
  firstfile2();
  return;
}



void FIRST_OBJ_180(void)

{
  return;
}



void FIRST_OBJ_19C(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int in_zero;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    *param_1 = 1;
  }
  pcVar1 = DAT_800acef0;
  puVar4 = *(undefined4 **)(in_zero + 0x150);
  puVar3 = puVar4 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar3 <= puVar4) {
      (*DAT_800acef0)(param_1,param_2,param_3);
      return;
    }
    if (((char *)*puVar4 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar4,&DAT_800acef8), iVar2 == 0)) break;
    puVar4 = puVar4 + 0x14;
  }
  puVar4[0xd] = pcVar1;
  FIRST_OBJ_25C();
  return;
}



void FIRST_OBJ_25C(void)

{
  (*DAT_800acef0)();
  return;
}



void firstfile2(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_80035d64(void)

{
  PadStartCom();
  return;
}



// Possible ATOI_1.OBJ/atol
// Possible S_008.OBJ/CdFlush
// Possible S_012.OBJ/CdSync
// Possible S_013.OBJ/CdReady
// Possible S_024.OBJ/CdDataSync
// Possible D2_001.OBJ/DsClose
// Possible D2_003.OBJ/DsShellOpen
// Possible D3_004.OBJ/DsDataSync
// Possible PADSTOP.OBJ/PadStop
// Possible GS_106.OBJ/GsSetProjection
// Possible SSNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_80035d84(void)

{
  PadStopCom();
  return;
}



void FUN_8003631c(void)

{
  DAT_800acf24 = &LAB_800363b0;
  DAT_800acf28 = &LAB_80036348;
  DAT_800acf20 = 0;
  DAT_800acf2c = 0;
  return;
}



undefined4 FUN_80036540(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_800419ec;
  DAT_800419ec = 0;
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PadStartCom(void)

{
  undefined *puVar1;
  
  DAT_800419bc = 0;
  FUN_800353e4();
  SysDeqIntRP(2,&DAT_800acf20);
  SysEnqIntRP(2,&DAT_800acf20);
  puVar1 = PTR_I_STAT_800419e4;
  *(undefined4 *)PTR_I_STAT_800419e4 = 0xfffffffe;
  *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 1;
  ChangeClearRCnt(3,0);
  FUN_800353f4();
  (*DAT_80041988)(DAT_800419b8);
  (*DAT_80041988)(DAT_800419b8 + 0xf0);
  DAT_800acf34 = 0;
  DAT_800acf30 = 0;
  DAT_800419bc = 1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void PadStopCom(void)

{
  FUN_800353e4();
  ChangeClearRCnt(3,1);
  SysDeqIntRP(2,&DAT_800acf20);
  FUN_800353f4();
  return;
}



undefined4 FUN_80036664(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_JOY_MCD_DATA_800419e8;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800419e8 + 10) = 0x40;
  *(undefined2 *)(puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 8) = 0xd;
  *(undefined2 *)(puVar2 + 0xe) = 0x88;
  uVar5 = 0x91;
  if (*(char *)(param_1 + 0xe8) == '\b') {
    uVar5 = 0x50;
  }
  FUN_80038d04(uVar5);
  uVar4 = 0x1003;
  if (DAT_800419c4 != 0) {
    uVar4 = 0x3003;
  }
  iVar3 = DAT_800419c4 * 4;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800419e8 + 10) = uVar4;
  iVar3 = *(int *)(&DAT_800419dc + iVar3);
  pcVar1 = DAT_800419a4;
  if (-1 < iVar3) {
    while (DAT_800419a4 = pcVar1, 0 < iVar3) {
      iVar3 = *(int *)(&DAT_800419dc + DAT_800419c4 * 4) + -1;
      *(int *)(&DAT_800419dc + DAT_800419c4 * 4) = iVar3;
      (*DAT_800419a4)(*(int *)(param_1 + 0xc) + iVar3 * 0xf0);
      pcVar1 = DAT_800419a4;
      iVar3 = *(int *)(&DAT_800419dc + DAT_800419c4 * 4);
    }
    if (*(int *)(&DAT_800419dc + DAT_800419c4 * 4) == 0) {
      *(int *)(&DAT_800419dc + DAT_800419c4 * 4) = -1;
      (*pcVar1)(param_1);
      (*DAT_800419a8)(param_1);
    }
  }
  puVar2 = PTR_JOY_MCD_DATA_800419e8;
  if ((*(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4) & 0x200) != 0) {
    *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 10) = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 10) | 0x10
    ;
    if ((*(ushort *)(puVar2 + 4) & 0x200) != 0) {
      do {
        iVar3 = FUN_80038d24();
      } while (iVar3 == 0);
      *PTR_JOY_MCD_DATA_800419e8 = 1;
      FUN_80038d04(100);
      iVar3 = FUN_80036f10();
      if (iVar3 == 0) {
        return 0;
      }
      FUN_80036fa0();
      FUN_80038d04(0x1ae);
      do {
        if ((*(uint *)PTR_I_STAT_800419e4 & 0x80) != 0) {
          *PTR_JOY_MCD_DATA_800419e8 = 0x42;
          FUN_80038d04();
          iVar3 = FUN_80036f10();
          if (iVar3 == 0) {
            return 0;
          }
          FUN_80036fa0();
          FUN_80038d04(0x1ae);
          do {
            if ((*(uint *)PTR_I_STAT_800419e4 & 0x80) != 0) {
              *PTR_JOY_MCD_DATA_800419e8 = 1;
              FUN_80038d04();
              iVar3 = FUN_80036f10();
              if (iVar3 == 0) {
                return 0;
              }
              FUN_80036fa0();
              return 0;
            }
            iVar3 = FUN_80038d24(0x3c);
          } while (iVar3 == 0);
          return 0;
        }
        iVar3 = FUN_80038d24(0x3c);
      } while (iVar3 == 0);
      return 0;
    }
    *(undefined4 *)PTR_I_STAT_800419e4 = 0xffffff7f;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x37) != '\0') {
    return 0;
  }
  return 1;
}



void FUN_80036998(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  ppuVar1 = &PTR_LAB_80041a08 + DAT_800419c8;
  DAT_800419c8 = DAT_800419c8 + 1;
  iVar2 = (*(code *)*ppuVar1)();
  if (iVar2 < 0) {
    (*DAT_80041984)();
  }
  else {
    if ((DAT_800419c8 != 0) && ((DAT_800419c8 != 3 || (**(char **)(param_1 + 0x3c) != -0x80)))) {
      FUN_80038d04(0x3c);
      iVar2 = FUN_80036f10();
      if (iVar2 == 0) {
        (*DAT_80041984)(0xfffffffd);
      }
    }
    if (4 < DAT_800419c8) {
      DAT_800419c8 = DAT_800419c8 + -1;
    }
  }
  return;
}



uint FUN_80036a88(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  
  puVar4 = PTR_I_STAT_800419e4;
  bVar3 = (byte)param_2;
  if (param_2 < 0) {
    bVar1 = *PTR_JOY_MCD_DATA_800419e8;
    *(undefined1 *)(param_1 + 0x44) = 0xff;
    *(undefined1 *)(param_1 + 0x45) = 1;
    **(byte **)(param_1 + 0x40) = ~bVar3;
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4);
    while ((uVar2 & 1) == 0) {
      uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4);
    }
    do {
      iVar5 = FUN_80038d24();
    } while (iVar5 == 0);
    *PTR_JOY_MCD_DATA_800419e8 = ~bVar3;
  }
  else {
    sVar7 = 0x88;
    if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
      sVar7 = 0x22;
    }
    DAT_800ad1c0 = (uint)(ushort)TMR_SYSCLOCK_VAL;
    uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4);
    DAT_800ad1c4 = 0x1ae;
    while ((uVar2 & 2) == 0) {
      uVar2 = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4);
    }
    bVar1 = *PTR_JOY_MCD_DATA_800419e8;
    *(short *)(PTR_JOY_MCD_DATA_800419e8 + 0xe) = sVar7;
    uVar6 = *(uint *)puVar4;
    while ((uVar6 & 0x80) == 0) {
      iVar5 = FUN_80038d24();
      if (iVar5 != 0) {
        return 0xffffffec;
      }
      uVar6 = *(uint *)PTR_I_STAT_800419e4;
    }
    *PTR_JOY_MCD_DATA_800419e8 = bVar3;
    puVar4 = PTR_JOY_MCD_DATA_800419e8;
    if (sVar7 == 0x22) {
      *(undefined4 *)PTR_I_STAT_800419e4 = 0xffffff7f;
      *(ushort *)(puVar4 + 10) = *(ushort *)(puVar4 + 10) | 0x10;
    }
    *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
    *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
  }
  return (uint)bVar1;
}



uint FUN_80036c98(int param_1,undefined1 param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar6 = 0x88;
  if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
    uVar6 = 0x22;
  }
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4) & 2) == 0);
  FUN_80038d04(400);
  bVar1 = *PTR_JOY_MCD_DATA_800419e8;
  uVar3 = (uint)bVar1;
  if ((*(char *)(param_1 + 0x44) == '\0') && ((int)uVar3 >> 4 == 8)) {
    *(undefined2 *)(PTR_JOY_MCD_DATA_800419e8 + 0xe) = 0x22;
  }
  else {
    *(undefined2 *)(PTR_JOY_MCD_DATA_800419e8 + 0xe) = uVar6;
  }
  uVar4 = *(uint *)PTR_I_STAT_800419e4;
  while( true ) {
    if ((uVar4 & 0x80) != 0) {
      if ((*(char *)(param_1 + 0xe8) != '\b') && (DAT_800419c8 == 2)) {
        FUN_80038d04(0x3c);
        do {
          iVar5 = FUN_80038d24();
        } while (iVar5 == 0);
      }
      *PTR_JOY_MCD_DATA_800419e8 = param_2;
      puVar2 = PTR_JOY_MCD_DATA_800419e8;
      if ((DAT_800419c8 == 3) && (uVar3 == 0x80)) {
        *(undefined4 *)PTR_I_STAT_800419e4 = 0xffffff7f;
        *(ushort *)(puVar2 + 10) = *(ushort *)(puVar2 + 10) | 0x10;
      }
      *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
      if (*(char *)(param_1 + 0x44) != -1) {
        *(byte *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
      }
      *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
      return uVar3;
    }
    uVar4 = (uint)(ushort)TMR_SYSCLOCK_VAL;
    if (uVar4 < DAT_800ad1c0) {
      if ((ushort)TMR_SYSCLOCK_MAX == 0) {
        uVar4 = uVar4 + 0x10000;
      }
      else {
        uVar4 = (ushort)TMR_SYSCLOCK_MAX + uVar4;
      }
    }
    uVar4 = uVar4 - DAT_800ad1c0;
    if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
      uVar4 = uVar4 >> 3;
    }
    if (DAT_800ad1c4 <= uVar4) break;
    uVar4 = *(uint *)PTR_I_STAT_800419e4;
  }
  return 0xfffffffe;
}



undefined4 FUN_80036f10(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_JOY_MCD_DATA_800419e8;
  *(undefined4 *)PTR_I_STAT_800419e4 = 0xffffff7f;
  uVar1 = *(ushort *)(puVar2 + 4);
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 10) =
           *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 10) | 0x10;
      return 1;
    }
    iVar3 = FUN_80038d24();
    if (iVar3 != 0) break;
    uVar1 = *(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4);
  }
  return 0;
}



void FUN_80036fa0(void)

{
  do {
  } while ((*(ushort *)(PTR_JOY_MCD_DATA_800419e8 + 4) & 2) == 0);
  return;
}



void FUN_80036fd4(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



void FUN_80036ff0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    FUN_80037b5c(param_1,*(undefined1 *)(param_1 + 0xe4));
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      FUN_80037b48();
    }
  }
  else if (bVar1 == 4) {
    FUN_80037b9c(param_1,*(undefined1 *)(param_1 + 0x47));
  }
  return;
}



undefined4 FUN_80037074(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 2) != '\0') {
      return 0;
    }
    if (*(char *)(iVar5 + 3) != '\0') {
      return 0;
    }
    sVar4 = (ushort)*(byte *)(iVar5 + 5) + (ushort)*(byte *)(iVar5 + 4) * 0x100;
    *(short *)(param_1 + 0xe6) = sVar4;
    if (*(short *)(param_1 + 0xee) == sVar4) {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
      *(undefined1 *)(param_1 + 0xeb) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      return 1;
    }
    *(short *)(param_1 + 0xee) = sVar4;
  }
  else if (bVar1 < 4) {
    if (bVar1 != 2) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 7) != '\0') {
      return 0;
    }
    if ((((*(char *)(param_1 + 0xe3) == *(char *)(iVar5 + 3)) &&
         (*(char *)(param_1 + 0xe4) == *(char *)(iVar5 + 4))) &&
        (*(char *)(param_1 + 0xe9) == *(char *)(iVar5 + 5))) &&
       (*(char *)(param_1 + 0xea) == *(char *)(iVar5 + 6))) {
      *(undefined2 *)(param_1 + 0xee) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
    }
    *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 3);
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 4);
    *(undefined2 *)(param_1 + 0xe6) = 0;
    *(undefined1 *)(param_1 + 0xe4) = uVar2;
    *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 5);
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 6);
    *(undefined2 *)(param_1 + 0xec) = 0;
    *(undefined1 *)(param_1 + 0xea) = uVar2;
    if (*(short *)(param_1 + 0xee) == 0) {
      *(undefined1 *)(param_1 + 0xeb) = 0;
      return 1;
    }
  }
  else {
    if (bVar1 != 4) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 2) != '\0') {
      return 0;
    }
    if (*(char *)(iVar5 + 3) != '\0') {
      return 0;
    }
    bVar1 = *(byte *)(iVar5 + 4);
    bVar3 = *(char *)(param_1 + 0x47) + 1;
    *(byte *)(param_1 + 0x47) = bVar3;
    *(ushort *)(param_1 + 0xec) = *(short *)(param_1 + 0xec) + 8 + (bVar1 + 3 & 0x1fc);
    if (*(byte *)(param_1 + 0xea) <= bVar3) {
      iVar5 = FUN_800372e4(param_1);
      if (iVar5 < 0x81) {
        if (*(short *)(param_1 + 0xee) != *(short *)(param_1 + 0xec)) {
          *(short *)(param_1 + 0xee) = *(short *)(param_1 + 0xec);
          *(undefined1 *)(param_1 + 0x47) = 0;
          *(undefined2 *)(param_1 + 0xec) = 0;
          return 0;
        }
        *(undefined2 *)(param_1 + 0xee) = 0;
        *(undefined1 *)(param_1 + 0xeb) = 0;
        *(undefined1 *)(param_1 + 0x46) = 0xff;
        FUN_8003731c(param_1,param_1 + 99);
        *(undefined1 *)(param_1 + 0x46) = 2;
      }
      else {
        (*DAT_80041988)(param_1);
        *(undefined1 *)(param_1 + 0x46) = 0xfe;
        *(undefined1 *)(param_1 + 0x49) = 2;
      }
    }
  }
  return 0;
}



int FUN_800372e4(int param_1)

{
  return ((int)(*(byte *)(param_1 + 0xe3) + 1) >> 1) * 4 +
         ((uint)*(byte *)(param_1 + 0xe9) * 5 + 3 & 0xffc) + 4 + (uint)*(ushort *)(param_1 + 0xec);
}



undefined4 FUN_8003731c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_1[1] != 0) {
      return 0;
    }
    iVar1 = (*DAT_800419a0)();
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x49) = 4;
      *(undefined1 *)((int)param_1 + 0x46) = 1;
      param_1[5] = (int)&LAB_800373f0;
      param_1[6] = (int)&LAB_80037498;
      iVar1 = (param_2 + 3 >> 2) * 4;
      *param_1 = iVar1;
      *(undefined1 *)((int)param_1 + 0x47) = 0;
      iVar1 = iVar1 + ((int)(*(byte *)((int)param_1 + 0xe3) + 1) >> 1) * 4;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + ((uint)*(byte *)((int)param_1 + 0xe9) * 5 + 3 & 0xffc);
      return 1;
    }
  }
  return 0;
}



bool FUN_80037890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_800419a0)();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined1 **)(param_1 + 0x14) = &LAB_800378f8;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined1 **)(param_1 + 0x18) = &LAB_80037914;
  }
  return iVar1 == 0;
}



bool FUN_800379dc(int param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_800419a0)();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined1 **)(param_1 + 0x14) = &LAB_80037a74;
    *(undefined1 **)(param_1 + 0x18) = &LAB_80037ac8;
    *(char *)(param_1 + 0x51) = param_2;
    *(undefined1 *)(param_1 + 0x52) = param_3;
    *(bool *)(param_1 + 0x53) = param_2 == *(char *)(param_1 + 0xe4);
  }
  return iVar1 == 0;
}



void FUN_80037b28(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = 0x43;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



void FUN_80037b48(int param_1)

{
  *(undefined1 *)(param_1 + 0x37) = 0x45;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}



void FUN_80037b5c(int param_1,undefined1 param_2)

{
                    // Possible PsyQ macro: setLineF4()
  *(undefined1 *)(param_1 + 0x37) = 0x4c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



void FUN_80037b7c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = 0x46;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



void FUN_80037b9c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = 0x47;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



void FUN_80037bbc(int param_1)

{
  *(undefined1 *)(param_1 + 0x37) = 0x4b;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}



void FUN_800381e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  
  DAT_800419bc = 0;
  DAT_800419d0 = 0;
  FUN_80038844();
  puVar7 = &DAT_800acfe0;
  DAT_80041984 = &LAB_800383ac;
  DAT_80041988 = &LAB_80038344;
  DAT_8004198c = &LAB_800384b0;
  DAT_80041990 = &LAB_8003856c;
  DAT_80041994 = &LAB_800387e8;
  DAT_80041998 = &LAB_80038820;
  DAT_800419b8 = &DAT_800acfe0;
  DAT_800419a8 = FUN_800384a0;
  bzero(&DAT_800acfe0,0x1e0);
  iVar6 = 0;
  puVar2 = &DAT_800ad020;
  puVar5 = &DAT_800acf98;
  puVar4 = &DAT_800acf50;
  DAT_800ad010 = param_1;
  DAT_800ad100 = param_2;
  do {
    puVar3 = puVar7 + 0x5d;
    puVar2[-0xd] = 0;
    puVar2[-0xc] = puVar7;
    *(undefined1 *)puVar2[-4] = 0xff;
    iVar1 = 5;
    *(undefined1 *)(puVar2[-4] + 1) = 0;
    puVar2[-1] = puVar4;
    *puVar2 = puVar5;
    do {
      *puVar3 = 0xff;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar1);
    puVar5 = puVar5 + 0x23;
    puVar4 = puVar4 + 0x23;
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 0x3c;
    puVar7 = puVar7 + 0xf0;
  } while (iVar6 < 2);
  FUN_8003631c();
  DAT_800419bc = 1;
  return;
}



void FUN_800384a0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  return;
}



void FUN_80038844(void)

{
  DAT_8004199c = &LAB_80038878;
  DAT_800419a0 = &LAB_80038ccc;
  DAT_800419a4 = &LAB_80038988;
  return;
}



void FUN_80038bec(int param_1)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(char *)(param_1 + 0x46) == '\0') {
LAB_80038c84:
    if (**(char **)(param_1 + 0x3c) != -0xd) {
      **(undefined1 **)(param_1 + 0x30) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = 0;
      *(undefined1 *)(param_1 + 0xe8) = 0;
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x46) == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (10 < bVar1) {
        *(undefined1 *)(param_1 + 0x49) = 2;
        *(undefined1 *)(param_1 + 0x46) = 0xff;
        return;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (10 < bVar1) {
        if (*(char *)(param_1 + 0x49) != '\0') {
          (*DAT_80041988)(param_1);
        }
        goto LAB_80038c84;
      }
    }
    *(byte *)(param_1 + 0x4a) = bVar1 + 1;
  }
  return;
}



void FUN_80038d04(undefined4 param_1)

{
  DAT_800ad1c4 = param_1;
  DAT_800ad1c0 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  return;
}



bool FUN_80038d24(void)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)TMR_SYSCLOCK_VAL;
  if (uVar1 < DAT_800ad1c0) {
    if ((ushort)TMR_SYSCLOCK_MAX == 0) {
      uVar1 = uVar1 + 0x10000;
    }
    else {
      uVar1 = uVar1 + (ushort)TMR_SYSCLOCK_MAX;
    }
  }
  if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
    uVar1 = uVar1 - DAT_800ad1c0 >> 3;
  }
  else {
    uVar1 = uVar1 - DAT_800ad1c0;
  }
  return DAT_800ad1c4 <= uVar1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_80046358(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80049740(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004add0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004ae88(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004d0b8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004d0ec(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004d1f0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004d258(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8004d580(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_800519a4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80051bf8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80052650(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80054654(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80054ec8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8005546c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80055d88(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80056984(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80056a9c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006ad30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006afc0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006b1c0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006b480(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006ba00(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006c5d0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006cc60(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006dd54(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_8006dd7c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_80078d1c(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


