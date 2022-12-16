//#include "iostream.h"
#include <stdio.h>
#include "Riostream.h"
#include "pdbreakup.h"
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
#define datafile "database/TotaCrossSection.dat" 
#define datafile2 "database/CrossSection.dat" 
#define psfile "prints/TotalCrosssection.ps" 
#define sqr(x) ((x)*(x))
#define md 1875.612793 
#define Ed 2005.612793
#define mp 938.272
#define mn 939.573
#define anglelist        "anglelist4.dat"
#define Snr     (15)//11
#define Smin    (130)
//#define Smax    (170)//152
#define Smax    (280)//152
#define Entry   (2e6)
#define fEntry  (0)
#define phi1    (0.)
#define phi2    (360.)
#define Nphi    (36)
//#define Nkinema (12)
#define Nkinema (48)
#define D2R     (0.01745)
#define R2D     (57.296) 

char ch2[Nkinema][500];
TCanvas *canv[ Nkinema];

double TDCS_corect[Snr]={.0, .0, 0. ,-4.5 ,0 ,.0 ,-0.1 ,-0.05 ,0.0 ,0.1 ,0.23 ,0.0 ,0.0 ,0.0 ,0.0};

TFile *projectedf;  

double deltaS=(double)(Smax-Smin)/(double)Snr;
TF1 *func1;
TF1 *func2;
double oldTime=0;
double TDC_corec[Nkinema][Snr];
double p_scalning(double x  ,int i);
double d_scalning(double y ,int i);
//double TDC_Calib(double x,int i );

double TDC_shift(int det1, int det2,double phi);

int Define_GCuts();
int openfiles();
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

double theta_d[48]={28,25,20,15,28,28,28,25,25,25,20,20,20,15,15,15,28,25,20,15,28,28,28,25,25,25,20,20,20,15,15,15,28,25,20,15,28,28,28,25,25,25,20,20,20,15,15,15};
double theta_p[48]={28,25,20,15,25,20,15,28,20,15,28,25,15,28,25,20,28,25,20,15,25,20,15,28,20,15,28,25,15,28,25,20,28,25,20,15,25,20,15,28,20,15,28,25,15,28,25,20};
double deltaphi[48]={180,180,180,180,180,180,180,180,180,180,180,180,180,180,180,180,160,160,160,160,160,160,160,160,160,160,160,160,160,160,160,160,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140};
char name1[Nkinema][350],name2[Nkinema][350],name3[Nkinema][350],name4[Nkinema][350],name15[Nkinema][350],name16[Nkinema][350],name17[Nkinema][350],name18[Nkinema][350],name23[Nkinema][350],name24[Nkinema][350];
char name5[Nkinema][Snr][350],name6[Nkinema][Snr][350],name7[Nkinema][Snr][350],name8[Nkinema][Snr][350],name9[Nkinema][Snr][350];
char  name10[Nkinema][Snr][350],name11[Nkinema][Snr][350],name12[Nkinema][Snr][350],name13[Nkinema][Snr][350],name14[Nkinema][Snr][350];
char  name19[Nkinema][350],name20[Nkinema][350],name21[Nkinema][350],name22[Nkinema][350],name99[Nkinema][350];
char esm31_1[Nkinema][Snr][350],esm31_2[Nkinema][Snr][350];
char esm27_1[Nkinema][Snr][350],esm27_2[Nkinema][Snr][350];
char esm13_1[Nkinema][Snr][350],esm13_2[Nkinema][Snr][350];
char phi31_1[Nkinema][Snr][150],phi31_2[Nkinema][Snr][150];
char phi27_1[Nkinema][Snr][150],phi27_2[Nkinema][Snr][150];
char phi13_1[Nkinema][Snr][150],phi13_2[Nkinema][Snr][150];
char ratio_1[Nkinema][Snr][150], ratio_2[Nkinema][Snr][150];


char  bar[Nkinema][350],bar1[Nkinema][350], bar2[Nkinema][350];

char ch1[Nkinema][350];



TFile *froot;
TFile *f;
double   Smaximum[Nkinema];
double   Thli[Nkinema][5]; /*Theta1,Theta2,phi12,dtheta,dphi*/
double   Scale[21][2];       /*Wall calibration*/
double   Sbon1[Nkinema][Snr],Sbon2[Nkinema][Snr];
double   Emid1[Nkinema][Snr],Emid2[Nkinema][Snr];
double   Sbon3[Nkinema][Snr],Sbon4[Nkinema][Snr]; /*S boundaries*/
double   E1[Nkinema][5000],E2[Nkinema][5000];
double   E3[Nkinema][5000],S[Nkinema][5000]; /*Svalue,E1,E2,E3*/
double   Stheo[Nkinema][5000],CStheo[Nkinema][5000],Aytheo[Nkinema][5000],Elab1[Nkinema][5000],Elab2[Nkinema][5000],Elab3[Nkinema][5000];
int      ShiftTdc[21],counter,dummycount,scalercount;       /*Shift Tdc compared to Left tdc 1*/
char     Scurve[Nkinema][250],ch[12][600],TheoKin[Nkinema][3][500];
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
TGraphErrors *sc1;
TGraphErrors *sc2;
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

TH1D *ratio27_31[Nkinema][Snr];
TH1D *ratio13_31[Nkinema][Snr];
TH2D *theta_pd_1[Nkinema];
TH2D *theta_pd_2[Nkinema];

TCutG *cut[Nkinema][Snr];           /*Sbin cuts*/

TH2D *scurveraw31[Nkinema];
TH2D *scurve31[Nkinema];
