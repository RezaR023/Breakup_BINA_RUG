//#include "iostream.h"
#include <stdio.h>
#include "Riostream.h"
//#include "pdbreakup.h"
#include "TRandom.h"
#include <stdlib.h>
#include <string.h>
#include <TMath.h>
#include <math.h>
#include <TH2D.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TGraphErrors.h>
#include <TLatex.h>
#include <TPostScript.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TMinuit.h>
#include <TChain.h>
#include <TTree.h>
#include <TCutG.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "calibcal.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include "TCutG.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include <TPostScript.h>
#include <TH2D.h>
#include <TGraphErrors.h>
#include <TF1.h>

#define psfile0 "/home/reza/BINAreall/rootfiles/psfiles/config0.ps"
#define psfile1 "/home/reza/BINAreall/rootfiles/psfiles/config1.ps"
#define sfile "/home/reza/BINAreall/rootfiles/EdEp.dat"
#define sfile1 "/home/reza/BINAreall/rootfiles/SSS"
#define sfill "/home/reza/BINAreall/rootfiles/EdpG.dat"
#define Smklist "/home/reza/BINAreall/rootfiles/Datfiles/SmakingAddressWhole300"
//#define Smklist "/home/reza/BINAreall/rootfiles/Datfiles/SmakingAddress180"
#define chargeadr "/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/AnalyzingPower_Brkup_factor2_step1_300Config/step2/chargef160.dat"
#define QFS_res "/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/AnalyzingPower_Brkup_factor2_step1_300Config/step2/QFS_results.dat"
#define dat300_res "/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/AnalyzingPower_Brkup_factor2_step1_300Config/step2/dat300_results.dat"
//#define outf1 "/home/reza/BINAreall/rootfiles/Datfiles/outfile1.dat"
//#define outf2 "/home/reza/BINAreall/rootfiles/Datfiles/outfile2.dat"
//#define outf3 "/home/reza/BINAreall/rootfiles/Datfiles/outfile3.dat"
//#define outf4 "/home/reza/BINAreall/rootfiles/Datfiles/outfile4.dat"
//#define outf5 "/home/reza/BINAreall/rootfiles/Datfiles/outfile5.dat"
//#define outf6 "/home/reza/BINAreall/rootfiles/Datfiles/outfile6.dat"
//#define outf7 "/home/reza/BINAreall/rootfiles/Datfiles/outfile7.dat"
//#define outf8 "/home/reza/BINAreall/rootfiles/Datfiles/outfile8.dat"
//#define outf9 "/home/reza/BINAreall/rootfiles/Datfiles/outfile9.dat"
//#define outf10 "/home/reza/BINAreall/rootfiles/Datfiles/outfile10.dat"
#define paramsp "/home/reza/BINAreall/rootfiles/Datfiles/final/Proton/Pparadd.dat"
#define paramsd "/home/reza/BINAreall/rootfiles/Datfiles/final/Deuteron/Dparadd.dat"
#define paracons "/home/reza/BINAreall/rootfiles/Datfiles/final/outlist.dat"

#define Nkinema (100)//192//64
#define Snr     (15)//(10)//15
////#define Smin    (136)//(175)//140
//#define Smax    (170)//152
////#define Smax    (236)//(285)//240
#define D2R     (0.01745)
//double deltaS=(double)(Smax-Smin)/(double)Snr;

/* Energy loss as a function of deposited  denergy for proton(func1) and for proton (func2) */
TF1 *funcc1;
TF1 *funcc2;
TF1 *func1;
TF1 *func2;
TF1 *func11;
TF1 *func21;
TF1 *func3;
TF1 *func4;
TF1 *func5;
TF1 *func6;
TF1 *ff;
TF1 *pdf;
TF1 *fitfuncp1;
TF1 *fitfuncp;
TF1 *fitfuncp12;
TF1 *fitfuncd12;
TF1 *fitfuncd1;
TF1 *fitfuncd2;
TF1 *finalfuncdf;
TF1 *finalfuncpf;
TF1 *finalfuncd1;
TF1 *finalfuncp1;
TF1 *finalfuncd[Nkinema][10];
TF1 *finalfuncp[Nkinema][10];
TF1 *finalfuncd2[Nkinema][10];
TF1 *finalfuncp2[Nkinema][10];
//TGraphErrors *sc1;//=new TGraphErrors(10000);
//TGraphErrors *sc2;
TGraphErrors *p1p2[Nkinema];
TGraphErrors *p1p2dep[Nkinema];
TGraphErrors *p1s[Nkinema];
//TGraphErrors *gainD[Nkinema][10];
//TGraphErrors *gainP[Nkinema][10];
//TGraphErrors *gainD2[Nkinema][10];
//TGraphErrors *gainP2[Nkinema][10];
TGraphErrors *gr_Cro[Nkinema];
TGraphErrors *gr_iT11[Nkinema];
TGraphErrors *gr_ImiT11[Nkinema];
TGraphErrors *gr_T20[Nkinema];
TGraphErrors *gr_T22[Nkinema];
TGraphErrors *gr_ImT22[Nkinema];
TCanvas *c1[Nkinema][10];
TCanvas *c2[Nkinema][10];
TCanvas *c3[11];
TCanvas *cc;

TH2D *EPhitemp31[Nkinema][Snr];
TH2D *EPhitemp27[Nkinema][Snr];
TH2D *EPhitemp13[Nkinema][Snr];
TH2D *EPhitempraw31[Nkinema][Snr];
TH2D *EPhitempraw27[Nkinema][Snr];
TH2D *EPhitempraw13[Nkinema][Snr];
TH1D *Phi31pm[Nkinema][Snr];
TH1D *Phiraw31pm[Nkinema][Snr];
TH1D *Phi27pm[Nkinema][Snr];
TH1D *Phiraw27pm[Nkinema][Snr];
TH1D *Phi13pm[Nkinema][Snr];
TH1D *Phiraw13pm[Nkinema][Snr];
TH1D *Phi31p[Nkinema][Snr];
TH1D *Phiraw31p[Nkinema][Snr];
TH1D *Phi27p[Nkinema][Snr];
TH1D *Phiraw27p[Nkinema][Snr];
TH1D *Phi13p[Nkinema][Snr];
TH1D *Phiraw13p[Nkinema][Snr];
TH1D *Phi31m[Nkinema][Snr];
TH1D *Phiraw31m[Nkinema][Snr];
TH1D *Phi27m[Nkinema][Snr];
TH1D *Phiraw27m[Nkinema][Snr];
TH1D *Phi13m[Nkinema][Snr];
TH1D *Phiraw13m[Nkinema][Snr];
TH1D *ratio27_31p[Nkinema][Snr];
TH1D *ratio13_31p[Nkinema][Snr];
TH1D *ratio27_31m[Nkinema][Snr];
TH1D *ratio13_31m[Nkinema][Snr];
TH1D *ratiosum27[Nkinema][Snr];
TH1D *ratiosub27[Nkinema][Snr];
TH1D *ratiosum13[Nkinema][Snr];
TH1D *ratiosub13[Nkinema][Snr];
char car1[Nkinema][Snr][350],car2[Nkinema][Snr][350],car3[Nkinema][Snr][350],car4[Nkinema][Snr][350],car5[Nkinema][Snr][350],car6[Nkinema][Snr][350],car7[Nkinema][Snr][350],car8[Nkinema][Snr][350],car9[Nkinema][Snr][350],car10[Nkinema][Snr][350],car11[Nkinema][Snr][350],car12[Nkinema][Snr][350],car13[Nkinema][Snr][350],car14[Nkinema][Snr][350],car15[Nkinema][Snr][350],car16[Nkinema][Snr][350],car17[Nkinema][Snr][350],car18[Nkinema][Snr][350],car19[Nkinema][Snr][350],car20[Nkinema][Snr][350],car21[Nkinema][Snr][350],car22[Nkinema][Snr][350],car23[Nkinema][Snr][350],car24[Nkinema][Snr][350],car25[Nkinema][Snr][350],car26[Nkinema][Snr][350],car7pm[Nkinema][Snr][350],car8pm[Nkinema][Snr][350],car9pm[Nkinema][Snr][350],car10pm[Nkinema][Snr][350],car11pm[Nkinema][Snr][350],car12pm[Nkinema][Snr][350];
double charge31,charge27,charge13,kHz31,kHz27,kHz13;
double scale1,scale2,BC,bg,bm,bn,A1,A2,bmE,bgE,bnE;
double Scu[Nkinema][10000], ES2[Nkinema][10000], ES1[Nkinema][10000], ES3[Nkinema][10000];
double Scud[Nkinema][10000], ES2dep[Nkinema][10000], ES1dep[Nkinema][10000], ES3dep[Nkinema][10000],ES2depr[Nkinema][10000], ES1depr[Nkinema][10000];
char Smking[Nkinema][250],cn1[Nkinema][250],cn2[Nkinema][250];
char dpara[11][250];
char ppara[11][250];
char conspara[11][250];
  Double_t X1,X11,X2,X3,deltTOF1,deltTOF2,deltTOF3,X1X,X2X,X3X;
  Double_t R1,R2,TOF1p,TOF1d,TOF1tri,TOF2p,TOF2d,TOF2tri;
  Int_t CNT1,CNT2,CNT3;
  Double_t R2n;
  const Double_t r2d=(180.0/TMath::Pi());
  const Double_t EK=130;/*Mev*/
  const Double_t mp=938.2720813;
  const Double_t mn=939.5654133;
  const Double_t mtri=2809.432;
  const Double_t md=1875.612;
  const Double_t R0=0.752/*+.0095*/; /*distance from target to center of cylendrical cintilators*/
  const Double_t MWD=297/*+.0095*/; /*-- distance Y-plane till target position --*/
  const Double_t C0=.3; /*speed of light (m/ns)*/
  
  double E1,E2,dist=0,scale11=0,scale12=0,scale21=0,scale22=0,A11=0,A12=0,A21=0,A22=0,EEE1=0,EEE2=0;
  int contrevent=0;
  double minf=100000000;
  int contr;
  //  double s1[2500],s2[2500],s3[4000],s4[4000];
  double s1[83000],s2[83000],s3[4000],s4[4000],s5[4000],s6[4000],gd[2500],gp[2500],g1[2500],g2[2500],g3[2500],g4[2500];
double Delphi;
double Pdetec,Ddetec,Ptarg,Dtarg,p1p,p2p,p1d,p2d,Ref,sss,dTOF;
int contrll[Nkinema],scalerCount=0;
int lg=0;
//double par0,par1,par2,par3,par4,par5,par00,par33;
//double parr0[Nkinema][10],parr1[Nkinema][10],parr2[Nkinema][10],parr3[Nkinema][10],parr4[Nkinema][10],parr5[Nkinema][10],parr6[Nkinema][10],parr33[Nkinema][10],parr00[Nkinema][10];
//double par0[Nkinema][10],par1[Nkinema][10],par2[Nkinema][10],par3[Nkinema][10],par4[Nkinema][10],par5[Nkinema][10],par6[Nkinema][10],par7[Nkinema][10];
double parr0[10][Nkinema],parr1[10][Nkinema],parr2[10][Nkinema],parr3[10][Nkinema],parr4[10][Nkinema],parr5[10][Nkinema],parr6[10][Nkinema],parr33[10][Nkinema],parr00[10][Nkinema];
double par0[10][Nkinema],par1[10][Nkinema],par2[10][Nkinema],par3[10][Nkinema],par4[10][Nkinema],par5[10][Nkinema],par6[10][Nkinema],par7[10][Nkinema];
double Xmin0[10][Nkinema],Xmax0[10][Nkinema],Ymin0[10][Nkinema],Ymax0[10][Nkinema];
double   Sbon1[Nkinema][Snr],Sbon2[Nkinema][Snr];
double   Emid1[Nkinema][Snr],Emid2[Nkinema][Snr];
double   Sbon3[Nkinema][Snr],Sbon4[Nkinema][Snr]; /*S boundaries*/
double value1=0.0;
double corec[10];
TCutG *cut[Nkinema][Snr];           /*Sbin cuts*/
char nam1a[Nkinema][350];
char name2a[Nkinema][10][350];
char namep1[Nkinema][350],namep2[Nkinema][350];
char namproj[Nkinema][10][350];
char nam4[Nkinema][10][350];
char nam5[Nkinema][10][350];
char nam6[Nkinema][10][350];
char nam7[Nkinema][10][350];
char nam8[Nkinema][10][350];
char nam9[Nkinema][10][350];
char namfd[Nkinema][10][350];
char namfp[Nkinema][10][350];
char namn[Nkinema][10][350];
char canv[Nkinema][10][350];
char canv1[Nkinema][10][350],name20[Nkinema][350],name21[Nkinema][350],name22[Nkinema][350],name23[Nkinema][350],name24[Nkinema][350],namegr[Nkinema][350],namegr1[Nkinema][350],namegr2[Nkinema][350],namegr3[Nkinema][350],namegr4[Nkinema][350],namegr5[Nkinema][350];
char fifup[Nkinema][10][350];char fifud[Nkinema][10][350];
char name55[Nkinema][Snr][350],name25[Nkinema][Snr][350],name20k[Nkinema][350];
char nameE[Nkinema][Snr][350];
TH1D *Mtrf_p[Nkinema][Snr];
TH1D *Mtrf_d[Nkinema][Snr];
char nmt1[Nkinema][Snr][350],nmt2[Nkinema][Snr][350];
TH1D *PoCm_p[Nkinema][Snr];
TH1D *PoCm_d[Nkinema][Snr];
char nmcmd[Nkinema][Snr][350],nmcmp[Nkinema][Snr][350],car18en[Nkinema][Snr][350];
TH1D *hEn[Nkinema][Snr];
//TH2D *sbin11[Nkinema][Snr];
//TH1D *sbin1D[Nkinema][Snr];
//TH1D *sbinraw1D[Nkinema][Snr];
//TH2D *E1E2ta[Nkinema];
//TH2D *E1E2ia[Nkinema][10];
//TH2D *E1E2i[Nkinema][10];
//TH1D *E1E2proj[Nkinema][10];
//TH2D *E1E2idetec[Nkinema][10];
//TH2D *E1E2itarg[Nkinema][10];
//TH2D *gaindd[Nkinema][10];
//TH2D *gainpp[Nkinema][10];
//TH2D *henergy1[Nkinema][10];
TH1D *TDC_ratio[Nkinema];
TH2D *TDC_ratio_phi[Nkinema];
TH2D *ET[Nkinema];
TH2D *he[Nkinema];
TH2D *he1[Nkinema];
TH1D *Ks27m[Nkinema];

Bool_t flag= false;
double MIN0(double a,double b);
double p_scalning(double x ,int i, double thet);
double d_scalning(double y ,int i, double thet);
double pp_scalning(double x ,int i);
double dd_scalning(double y ,int i);
int openfiles();
int BookingHist();
int fitfunctions();
double TDC_shift(int det1, int det2,double phi);
double projectScut(float Ex,float Ey,int bin,int kin,double *corec);
int Define_GCuts();
//double PID_func();

//double tta_1[9]={15.,18.,20.,25.,28.,30.,33.,35.,37.};
//double tta_2[9]={15.,18.,20.,25.,28.,30.,33.,35.,37.};
//double phi12[9]={180.,180.,180.,180.,180.,180.,180.,180.,180.};
/***+++
double tta_1[64]={15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.};
double tta_2[64]={15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.};
double phi12[64]=//{180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.};
{160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.};
//{140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};
+++***/
/*double tta_1[192]={15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.};
double tta_2[192]={15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.};
double phi12[192]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};
*/
double tta_1[300]={16.,16.,16.,16.,16.,16.,16.,16.,16.,16.,18.,18.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,20.,20.,22.,22.,22.,22.,22.,22.,22.,22.,22.,22.,24.,24.,24.,24.,24.,24.,24.,24.,24.,24.,26.,26.,26.,26.,26.,26.,26.,26.,26.,26.,28.,28.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,30.,30.,32.,32.,32.,32.,32.,32.,32.,32.,32.,32.,34.,34.,34.,34.,34.,34.,34.,34.,34.,34.
,16.,16.,16.,16.,16.,16.,16.,16.,16.,16.,18.,18.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,20.,20.,22.,22.,22.,22.,22.,22.,22.,22.,22.,22.,24.,24.,24.,24.,24.,24.,24.,24.,24.,24.,26.,26.,26.,26.,26.,26.,26.,26.,26.,26.,28.,28.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,30.,30.,32.,32.,32.,32.,32.,32.,32.,32.,32.,32.,34.,34.,34.,34.,34.,34.,34.,34.,34.,34.
,16.,16.,16.,16.,16.,16.,16.,16.,16.,16.,18.,18.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,20.,20.,22.,22.,22.,22.,22.,22.,22.,22.,22.,22.,24.,24.,24.,24.,24.,24.,24.,24.,24.,24.,26.,26.,26.,26.,26.,26.,26.,26.,26.,26.,28.,28.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,30.,30.,32.,32.,32.,32.,32.,32.,32.,32.,32.,32.,34.,34.,34.,34.,34.,34.,34.,34.,34.,34.
};
double tta_2[300]={16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.
,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.
,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.,16.,18.,20.,22.,24.,26.,28.,30.,32.,34.
};
double phi12[300]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.
,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.
,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.
};

/*#define datafile "database/TotaCrossSection.dat" 
#define datafile2 "database/CrossSection.dat" 
#define psfile "prints/TotalCrosssection.ps" 
#define sqr(x) ((x)*(x))
#define md 1875.612793 
#define Ed 2005.612793
#define mp 938.272
#define mn 939.573
#define anglelist        "anglelist4.dat"

#define Entry   (2e6)
#define fEntry  (0)
#define phi1    (0.)
#define phi2    (360.)
#define Nphi    (36)
//#define Nkinema (12)
#define Nkinema (48)
#define R2D     (57.296) */

/*char ch2[Nkinema][500];
TCanvas *canv[ Nkinema];

double TDCS_corect[Snr]={.0, .0, 0. ,-4.5 ,0 ,.0 ,-0.1 ,-0.05 ,0.0 ,0.1 ,0.23 ,0.0 ,0.0 ,0.0 ,0.0};

TFile *projectedf;  

TF1 *func1;
TF1 *func2;
double oldTime=0;
double TDC_corec[Nkinema][Snr];*/

//double TDC_Calib(double x,int i );

/*
int Define_GCuts();

//int OpenRootFiles();
//double projectScut(float Ex,float Ey,int bin,int kin,double &m);
double projectScut(float Ex,float Ey,int bin,int kin,double *corec);
int Book_Reset_histos(int pola);
double Length(double theta, double phi);
double calTOF(double dis, double Ekin, int id);
void writehsitogarms();

//  double TDCa1[11]= {0.0,5.110062,2.410175,-1.205338,-0.482437,3.249183,-0.952949,0.411208,-1.663381,-1.367576,-1.680445};
//  double TDCa2[11]= {0.0,0.023598,0.024599,0.025796,0.026513,0.026072,0.025787,0.026228,0.025738,0.025064,0.023792};


double output[Nkinema][Snr];

char name1[Nkinema][350],name2[Nkinema][350],name3[Nkinema][350],name4[Nkinema][350],name15[Nkinema][350],name16[Nkinema][350],name17[Nkinema][350],name18[Nkinema][350],name23[Nkinema][350],name24[Nkinema][350];
char name5[Nkinema][Snr][350],name6[Nkinema][Snr][350],name7[Nkinema][Snr][350],name8[Nkinema][Snr][350],name9[Nkinema][Snr][350];
char  name10[Nkinema][Snr][350],name11[Nkinema][Snr][350],name12[Nkinema][Snr][350],name13[Nkinema][Snr][350],name14[Nkinema][Snr][350];
char  name19[Nkinema][350],name21[Nkinema][350],name22[Nkinema][350];
char esm31_1[Nkinema][Snr][350],esm31_2[Nkinema][Snr][350];
char esm27_1[Nkinema][Snr][350],esm27_2[Nkinema][Snr][350];
char esm13_1[Nkinema][Snr][350],esm13_2[Nkinema][Snr][350];
char phi31_1[Nkinema][Snr][150],phi31_2[Nkinema][Snr][150];
char phi27_1[Nkinema][Snr][150],phi27_2[Nkinema][Snr][150];
char phi13_1[Nkinema][Snr][150],phi13_2[Nkinema][Snr][150];
char ratio_1[Nkinema][Snr][150], ratio_2[Nkinema][Snr][150];


char  bar[Nkinema][350],bar1[Nkinema][350], bar2[Nkinema][350];

char ch1[Nkinema][350];*/



//TFile *froot;
//double   Smaximum[Nkinema];
//double   Thli[Nkinema][5]; /*Theta1,Theta2,phi12,dtheta,dphi*/
//double   Scale[21][2];       /*Wall calibration*/
//double   Sbon1[Nkinema][Snr],Sbon2[Nkinema][Snr];
//double   Emid1[Nkinema][Snr],Emid2[Nkinema][Snr];
//double   Sbon3[Nkinema][Snr],Sbon4[Nkinema][Snr]; /*S boundaries*/
//double   E1[Nkinema][5000],E2[Nkinema][5000];
//double   E3[Nkinema][5000],S[Nkinema][5000]; /*Svalue,E1,E2,E3*/
//double   Stheo[Nkinema][5000],CStheo[Nkinema][5000],Aytheo[Nkinema][5000],Elab1[Nkinema][5000],Elab2[Nkinema][5000],Elab3[Nkinema][5000];
//int      ShiftTdc[21],counter,dummycount;       /*Shift Tdc compared to Left tdc 1*/
/*char     Scurve[Nkinema][250],ch[12][600],TheoKin[Nkinema][3][500];
double mid_diff[Nkinema][Snr];
TH2D *scurvetmp[Nkinema];
TH2D *scurvetmpraw[Nkinema];
TH2D *scurve[Nkinema];
TH2D *scurve_1[Nkinema];
TH2D *scurve_2[Nkinema];
TH2D *scurve_3[Nkinema];
TH2D *scurve_4[Nkinema];
TH2D *scurve_5[Nkinema];
TH2D *scurve_6[Nkinema];
TH2D *scurve_7[Nkinema];
TH2D *scurve_8[Nkinema];

TH2D *timedet[Nkinema];



TH2D *scurveraw[Nkinema];


TH2D *sbin1[Nkinema][Snr];
TH2D *sbinraw1[Nkinema][Snr];
TH2D *sbin2[Nkinema][Snr];
TH2D *sbinraw2[Nkinema][Snr];



TH2D *sbintemp[Nkinema][Snr];
TH2D *sbintempraw[Nkinema][Snr];



TH2D *TDC[Nkinema];
TH2D *TDC_theo[Nkinema][Snr];
TH1D *TDC_ratio[Nkinema];
TH2D *TDC_ratio_phi[Nkinema];
TH2D *TDCratioS[Nkinema];

TH1D *TDC_difbar1[Nkinema][Snr];
TH1D *TDC_difbar2[Nkinema][Snr];
TGraphErrors *p_d[Nkinema];
TGraphErrors *d_p[Nkinema];
TGraphErrors *ds[Nkinema][Snr];
TGraphErrors *p1p2[Nkinema];
TGraphErrors  *p1s[Nkinema];
TH2D *sbinraw31[Nkinema][Snr];
TH2D *sbin31[Nkinema][Snr];
TH2D *sbinraw27[Nkinema][Snr];
TH2D *sbin27[Nkinema][Snr];
TH2D *sbinraw13[Nkinema][Snr];
TH2D *sbin13[Nkinema][Snr];
TH1D *sbinPhiraw31[Nkinema][Snr];
TH1D *sbinPhi31[Nkinema][Snr];
TH1D *sbinPhiraw27[Nkinema][Snr];
TH1D *sbinPhi27[Nkinema][Snr];
TH1D *sbinPhiraw13[Nkinema][Snr];
TH1D *sbinPhi13[Nkinema][Snr];

TH2D *hEtest;
TH2D *hEtest1;

TH1D *ratio27_31[Nkinema][Snr];
TH1D *ratio13_31[Nkinema][Snr];
TH2D *theta_pd_1[Nkinema];
TH2D *theta_pd_2[Nkinema];*/



//TH2D *scurveraw31[Nkinema];
///TH2D *scurve31[Nkinema];
