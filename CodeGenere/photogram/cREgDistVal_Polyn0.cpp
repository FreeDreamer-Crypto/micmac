// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistVal_Polyn0.h"


cREgDistVal_Polyn0::cREgDistVal_Polyn0():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,3));
   Close(false);
}



void cREgDistVal_Polyn0::ComputeVal()
{

  mVal[0] = mLocRegDistValP1_x - mLocRegDistKnownVal_x;

  mVal[1] = mLocRegDistValP1_y - mLocRegDistKnownVal_y;

}


void cREgDistVal_Polyn0::ComputeValDeriv()
{

  mVal[0] = mLocRegDistValP1_x - mLocRegDistKnownVal_x;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mVal[1] = mLocRegDistValP1_y - mLocRegDistKnownVal_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
}


void cREgDistVal_Polyn0::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistVal_Polyn0 Has no Der Sec");
}

void cREgDistVal_Polyn0::SetRegDistKnownVal_x(double aVal){ mLocRegDistKnownVal_x = aVal;}
void cREgDistVal_Polyn0::SetRegDistKnownVal_y(double aVal){ mLocRegDistKnownVal_y = aVal;}
void cREgDistVal_Polyn0::SetRegDistValP1_x(double aVal){ mLocRegDistValP1_x = aVal;}
void cREgDistVal_Polyn0::SetRegDistValP1_y(double aVal){ mLocRegDistValP1_y = aVal;}



double * cREgDistVal_Polyn0::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistKnownVal_x") return & mLocRegDistKnownVal_x;
   if (aName == "RegDistKnownVal_y") return & mLocRegDistKnownVal_y;
   if (aName == "RegDistValP1_x") return & mLocRegDistValP1_x;
   if (aName == "RegDistValP1_y") return & mLocRegDistValP1_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistVal_Polyn0::mTheAuto("cREgDistVal_Polyn0",cREgDistVal_Polyn0::Alloc);


cElCompiledFonc *  cREgDistVal_Polyn0::Alloc()
{  return new cREgDistVal_Polyn0();
}


