#define calibcal_cxx
#include <stdio.h>
#include <stdlib.h>
#include "calibcal.h"
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
#include <TF1.h>

#define sfile "28_28_180_n"
#define sfile1 "SSS"
/* Energy loss as a function of deposited  denergy for proton(func1) and for proton (func2) */
TF1 *func1;
TF1 *func2;
TF1 *func3;
TF1 *func4;
double scale1,scale2,Ref,BC,bg,bm,bn,A1,A2;
Bool_t flag= false;
Double_t   MIN0(Double_t a,Double_t b){
  if (a<b) {flag= true; return a;}
  if (b<a) return b;
  if( a==b) return a; 
  else return -1;
}/*End of MIN*/

double p_scalning(double x ,int i)
{

  double E1;
 
   double p1p[11]={0.0,1.03114e+00,1.02186e+00,1.01379e+00,1.00901e+00,1.14116e+00,1.18719e+00,1.01289e+00,1.17155e+00,1.02336e+00,1.03931e+00};
  double p2p[11]={0.0,8.37156e-04,7.79199e-04,7.05292e-04,6.99657e-04,-4.76056e-04,-7.48614e-04,6.66924e-04,-7.53701e-04,7.94843e-04,9.63563e-04};
  
  E1=0.0;
  
    E1=(sqrt(1+4*x*p2p[i]/p1p[i])-1.0)/(2.0*p2p[i]);
  
return E1;
}

double d_scalning(double y ,int i)
{
 
   double p1d[11]={0.0,7.91892e-01,7.36947e-01,7.35129e-01,7.19197e-01,5.91244e-01,5.67824e-01,7.28194e-01,6.05242e-01,7.45787e-01,8.03423e-01};
  double p2d[11]={0.0,2.99735e-03,3.96421e-03,3.59499e-03,3.65988e-03,6.59518e-03,7.47618e-03,3.80554e-03,6.70629e-03,4.17246e-03,2.56402e-03};

  double E2;
  E2==0.0;
  E2=(sqrt(1+4*y*p2d[i]/p1d[i])-1.0)/(2.0*p2d[i]);
  return E2;
}

void calibcal::Loop()
{
  using namespace std;

  func1= new TF1("fun1","pol5",.01,110); //for proton, dep to thr
  func2= new TF1("fun2","pol4",.1,110); //for deuteron, dep to thr
  func3= new TF1("fun3","pol6",.01,120);//for proton, thr to dep
  func4= new TF1("fun4","pol6",.1,120); //for deuteron, thr to dep
   func1->SetParameters(18.72,-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
   func2->SetParameters(25.69,-0.7636,0.01181,-8.67e-5,2.307e-7);
   func3->SetParameters(-143.21,15.157,-.5965,0.013,-0.0002,9.e-7,-2.e-9);
   func4->SetParameters(-333.38,31.256,-1.1661,0.0235,-0.0003,1.e-6,-3.e-9);
  TH2F *htest1 = new TH2F("htest1","",1500,0,1500,1500,0,1500);
  TH2F *htest2 = new TH2F("htest2","",1500,0,1500,1500,0,1500);
  TH2F *hg1 = new TH2F("hg1","",150,0,150,150,0,150);
  TH2F *hg2 = new TH2F("hg2","",1500,0,1500,1500,0,1500);
  //const Double_t r2d=(180.0/TMath::Pi());
  Double_t X1,X11,X2,X3,deltTOF1,deltTOF2,deltTOF3,X1X,X2X,X3X;
  Double_t R1,R2,TOF1p,TOF1d,TOF1tri,TOF2p,TOF2d,TOF2tri;
  Int_t CNT1,CNT2,CNT3;
  Double_t R2n;
  const Double_t r2d=(180.0/TMath::Pi());
  const Double_t EK=130;/*Mev*/
  const Double_t mp=938.2720813;
  const Double_t mn=939.5654133;
  const Double_t mtri=2809.432;
  const Double_t md=1875.6;
  const Double_t R0=0.752/*+.0095*/; /*distance from target to center of cylendrical cintilators*/
  const Double_t MWD=297/*+.0095*/; /*-- distance Y-plane till target position --*/
  const Double_t C0=.3; /*speed of light (m/ns)*/
  
  double E1,E2,dist=0,scale11=0,scale12=0,scale21=0,scale22=0,A11=0,A12=0,A21=0,A22=0,EEE1=0,EEE2=0;
  int contrevent=0;
  double minf=100000000;
  int contr;
  //  double s1[2500],s2[2500],s3[4000],s4[4000];
  double s1[83000],s2[83000],s3[4000],s4[4000],s5[4000],s6[4000],gd[2500],gp[2500],g1[2500],g2[2500],g3[2500],g4[2500],sd[2500],sp[2500];
  ifstream sput2;
  ifstream sput,sputt;
  sput.open(sfile);
  if (sput) fprintf(stdout,"file %s is open.\n",sfile);
  if (!sput) { fprintf(stdout, "cannot open file %s. \n",sfile);}
  sputt.open(sfile1);
  if (sputt) fprintf(stdout,"file %s is open.\n",sfile1);
  if (!sputt) { fprintf(stdout, "cannot open file %s. \n",sfile1);}
  // sput2.open(sfill);
  //if (sput2) fprintf(stdout,"file %s is open.\n",sfill);
  // if (!sput2){ fprintf(stdout, "cannot open file %s. \n",sfill);}
  int k=0;
  do{k++;
    sput >> s1[k] >> s2[k] >> s3[k] >> s4[k] ;

    if (s2[k]>15 && s3[k]>10)
      {
	//kk++;
	sd[k]=s2[k]; sp[k]=s3[k];
	///double EPdep=func3->Eval(gp[g]);
	///double EDdep=func4->Eval(gd[g]);
	///cout << EDdep << '\t' << EPdep << endl;
	//	printf("%d %d \n",EDdep,EPdep);
	htest1->Fill(sp[k],sd[k]);
	/*if (EDdep>0 && EPdep>0)*/ //hg2->Fill(EPdep,EDdep);
      }

    //double EDthr=s1[k]+func2->Eval(s1[k]);
    //double EPthr=s2[k]+func1->Eval(s2[k]);
//    htest2->Fill(s4[k],s3[k]);
    //htest1->Fill(s2[k],s1[k]);
    // htest2->Fill(EPthr,EDthr);
  }while(!sput.eof());
  contr=k;
  sput.close();

  int g=0;   int gg=0;
  do{g++;
    sputt >> g1[g] >> g2[g] >> g3[g] >> g4[g];
    if (g2[g]>15 && g3[g]>10)
      {
	gg++;
	gd[g]=g2[g]; gp[g]=g3[g];
	//double EPdep=func3->Eval(gp[g]);
	//double EDdep=func4->Eval(gd[g]);
	//cout << EDdep << '\t' << EPdep << endl;
	//	printf("%d %d \n",EDdep,EPdep);
	hg1->Fill(gp[g],gd[g]);
	/*if (EDdep>0 && EPdep>0)*/ //hg2->Fill(EPdep,EDdep);
      }
  }while(!sputt.eof());
  double contrg=g;
  double contrgg=gg;
  sputt.close();
  /* int l=0;
  do{l++;
    sput2 >> s3[l]  >> s4[l];
    htest2->Fill(s4[l],s3[l]);
  }while(!sput2.eof());
double  contr2=l;
  sput2.close();*/
  TFile *f = new TFile("vbreak2828m11.root","recreate");
  //   In a ROOT session, you can do:
  //      Root > .L calibcal.C
  //      Root > calibcal t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
  //
  TH2F *hee1 = new TH2F("hee1","",150,0,150,150,0,150);
  TH2F *hee2 = new TH2F("hee2","",150,0,150,150,0,150);
  TH2F *hee3 = new TH2F("hee3","",150,0,150,150,0,150);
  TH2F *he = new TH2F("he","",150,0,150,150,0,150);
  TH2F *he1 = new TH2F("he1","",150,0,150,150,0,150);
  TH2F *he2n = new TH2F("he2n","",150,0,150,150,0,150);
  TH2F *he1n = new TH2F("he1n","",150,0,150,150,0,150);
  TH2F *he2 = new TH2F("he2","",150,0,150,150,0,150);
  TH2F *h00 = new TH2F("h00","",360*2,0,360,200*4,-100,100);
  TH2F *h000 = new TH2F("h000","",360*2,0,360,200*4,-100,100);
  TH2F *h0000 = new TH2F("h0000","",360*2,0,360,200*4,-100,100);
  TH1F *h21 = new TH1F("h21","",200*4,-100,100);
  TH1F *h22 = new TH1F("h22","",2000*4,-1000,1000);
  TH1F *h23 = new TH1F("h23","",200*4,-100,100);
  TH2F *ET = new TH2F ("ET","",2048,0,2*1024,2500,-500,2000);
  TH2F *hef = new TH2F("hef","",150,0,150,150,0,150);
  
  TH2F *E1E2 = new TH2F ("E1E2","",1900,0,1900,1900,0,1900);
  TH1D *test = new TH1D("test","",1900,0,1900);
  TH2F *gain11 = new TH2F ("gain11","",1900,0,1900,200*10,-100,100);
  TH2F *gain12 = new TH2F ("gain12","",1900,0,1900,200*10,-100,100);
  TH2F *gain21 = new TH2F ("gain21","",1900*2,0,1900,100*10,0,100);
  TH2F *gain22 = new TH2F ("gain22","",1900*2,0,1900,100*10,0,100);
  TH2F *gain11k = new TH2F ("gain11k","",120*4,0,120*2,150,0,3);
  TH2F *gain12k = new TH2F ("gain12k","",120*4,0,120*2,150,0,3);
  TH2F *gain21k = new TH2F ("gain21k","",120*4,0,120*2,150,0,3);
  TH2F *gain22k = new TH2F ("gain22k","",120*4,0,120*2,150,0,3);
  TH2F *gain21f = new TH2F ("gain21f","",1900*4,0,1900*2,100*10,0,100);
  TH2F *gain22f = new TH2F ("gain22f","",1900*4,0,1900*2,100*10,0,100);
  TH1D *test21 = new TH1D ("test21","",120*2,0,120);
  TH1D *test22 = new TH1D ("test22","",120*2,0,120);
  TH1D *test00 = new TH1D ("test00","",150,0,150);
  TH1D *test000 = new TH1D ("test000","",150,0,150);
  TH2F *posi1 = new TH2F ("posi1","",200,0,200,200,0,200);
  TH2F *posi2 = new TH2F ("posi2","",200,0,200,200,00,200);

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch
  //  double d1[nentries], d2[nentries];
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if (1==2 && TMath::Abs(b3_MWPCtheta1-36)<1 && TMath::Abs(b3_MWPCtheta2-36)<1 && TMath::Abs(TMath::Abs(b3_MWPCphi1-b3_MWPCphi2)-180)<10  && b3_WLdet1!=b3_WLdet2 && b3_WLdet1==2 && b3_WLdet2==9){posi1->Fill(b3_MWPCX1,b3_MWPCY1);}
    if (1==2 && TMath::Abs(b3_MWPCtheta1-28)<1 && TMath::Abs(b3_MWPCtheta2-28)<1 && TMath::Abs(TMath::Abs(b3_MWPCphi1-b3_MWPCphi2)-180)<10  && b3_WLdet1!=b3_WLdet2 && b3_WLdet1==2 && b3_WLdet2==9)
      {
	contrevent++; //the value of the contrevent is 5312
	posi2->Fill(b3_MWPCX1,b3_MWPCY1);//position of hits.
	Double_t tdc1t=(b3_WLtdc1+b3_WRtdc1)/4;
	Double_t tdc2t=(b3_WLtdc2+b3_WRtdc2)/4;
	Double_t tdc1m=(b3_WLtdc1-b3_WRtdc1);
	Double_t tdc2m=(b3_WLtdc2-b3_WRtdc2);
	if(b3_WLdet1==1){tdc1t=tdc1t-1-1;}
	if(b3_WLdet1==2){tdc1t=tdc1t+5/4-1;}
	if(b3_WLdet1==3){tdc1t=tdc1t-.5-1;}
	if(b3_WLdet1==4){tdc1t=tdc1t+5/4-1;}
	if(b3_WLdet1==5){tdc1t=tdc1t-3/2-1+1;}
	if(b3_WLdet1==6){tdc1t=tdc1t+1.5-1-1;}
	if(b3_WLdet1==7){tdc1t=tdc1t-.5-1;}
	if(b3_WLdet1==8){tdc1t=tdc1t+1-1;}
	if(b3_WLdet1==9){tdc1t=tdc1t-.5-1;}
	if(b3_WLdet1==10){tdc1t=tdc1t+1.5-1;}
	R1=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta1/r2d))*(TMath::Cos(b3_MWPCphi1/r2d))),2));
	R2=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta2/r2d))*(TMath::Cos(b3_MWPCphi2/r2d))),2));
	Double_t b3_EFW1dd=-4.667E-5*TMath::Power(b3_EFW1,3)+.0051*TMath::Power(b3_EFW1,2)+.9292*b3_EFW1-.7475;
	Double_t b3_EFW2dd=-4.667E-5*TMath::Power(b3_EFW2,3)+.0051*TMath::Power(b3_EFW2,2)+.9292*b3_EFW2-.7475;
	Double_t b3_EFW1pp=-1.71E-5*TMath::Power(b3_EFW1,3)+1.359E-4*TMath::Power(b3_EFW1,2)+1.1161*b3_EFW1-.9292;
	Double_t b3_EFW2pp=-1.71E-5*TMath::Power(b3_EFW2,3)+1.359E-4*TMath::Power(b3_EFW2,2)+1.1161*b3_EFW2-.9292;
	
	Double_t b3_EFW1d=4.464E-7*TMath::Power(b3_EFW1dd,4)-1.283E-4*TMath::Power(b3_EFW1dd,3)+.01441*TMath::Power(b3_EFW1dd,2)+.1846*b3_EFW1dd+25.53;
	Double_t b3_EFW2d=4.464E-7*TMath::Power(b3_EFW2dd,4)-1.283E-4*TMath::Power(b3_EFW2dd,3)+.01441*TMath::Power(b3_EFW2dd,2)+.1846*b3_EFW2dd+25.53;
	Double_t b3_EFW2p=4.757E-7*TMath::Power(b3_EFW2pp,4)-1.386E-4*TMath::Power(b3_EFW2pp,3)+.01483*TMath::Power(b3_EFW2pp,2)+.2615*b3_EFW2pp+18.84;
	Double_t b3_EFW1p=4.757E-7*TMath::Power(b3_EFW1pp,4)-1.386E-4*TMath::Power(b3_EFW1pp,3)+.01483*TMath::Power(b3_EFW1pp,2)+.2615*b3_EFW1pp+18.84;
	
	TOF1p=R1/(C0*TMath::Sqrt(1-TMath::Power((mp/((b3_EFW1)+mp)),2)));
	TOF1d=R1/(C0*TMath::Sqrt(1-TMath::Power((md/((b3_EFW1)+md)),2)));
	Double_t TOF1pp=R1/(C0*TMath::Sqrt(1-TMath::Power((mp/(b3_EFW1p+mp)),2)));
	Double_t TOF1dd=R1/(C0*TMath::Sqrt(1-TMath::Power((md/(b3_EFW1d+md)),2)));
	
	TOF2p=R2/(C0*TMath::Sqrt(1-TMath::Power((mp/((b3_EFW2)+mp)),2)));
	TOF2d=R2/(C0*TMath::Sqrt(1-TMath::Power((md/((b3_EFW2)+md)),2)));
	Double_t TOF2pp=R2/(C0*TMath::Sqrt(1-TMath::Power((mp/(b3_EFW2p+mp)),2)));
	Double_t TOF2dd=R2/(C0*TMath::Sqrt(1-TMath::Power((md/(b3_EFW2d+md)),2)));
	
	Double_t deltTDC=(tdc1t-tdc2t);
	X1 =(TOF2p-TOF1p);
	X2 =(TOF2p-TOF1d);
	X3 =(TOF2d-TOF1p);
	Double_t X1X =(TOF2pp-TOF1pp);
	Double_t X2X =(TOF2pp-TOF1dd);
	Double_t X3X =(TOF2dd-TOF1pp);
	deltTOF1 = (X1X-deltTDC);
	deltTOF2 = (X2X-deltTDC);
	deltTOF3 = (X3X-deltTDC);
	h21->Fill(deltTOF1);
	h22->Fill(deltTOF2);
	h23->Fill(deltTOF3);
	he->Fill(b3_EFW2,b3_EFW1);
	h00->Fill(b3_MWPCphi1,deltTOF3);
	h000->Fill(b3_MWPCphi1,deltTOF2);
	h0000->Fill(b3_MWPCphi1,deltTOF1);
	
	
	E1=TMath::Sqrt(b3_WLE1*b3_WRE1);
	E2=TMath::Sqrt(b3_WLE2*b3_WRE2);
	E1E2->Fill(E2,E1); 
	ET->Fill(E1,deltTOF2);
	
	TCutG *cutg = new TCutG("CUTG",9);
	cutg->SetVarX("E1");
	cutg->SetVarY("deltTOF2");
	cutg->SetTitle("Graph");
	cutg->SetFillColor(1);
	cutg->SetPoint(0,847.448,-0.474684);
	cutg->SetPoint(1,726.069,-0.474684);
	cutg->SetPoint(2,681.931,-0.237342);
	cutg->SetPoint(3,155.954,4.44089e-16);
	cutg->SetPoint(4,41.931,2.8481);
	cutg->SetPoint(5,-5.88507,5.37975);
	cutg->SetPoint(6,27.2184,7.43671);
	cutg->SetPoint(7,917.333,1.42405);
	cutg->SetPoint(8,847.448,-0.474684);
	//+_+_+_+_+_+_+_++_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_
	for (int a=1;a<contrgg;a=a+1){
	  s4[a]=gp[a];//a;
	  s3[a]=gd[a];//8.64850e+01-4.73692e-01*a+8.03014e-03*a*a-2.31483e-04*pow(a,3)-4.45742e-07*pow(a,4)+4.66197e-08*pow(a,5)-3.17393e-10*pow(a,6);//is Deuteron
	  if (s4[a]>0 && s3[a]>0)  hee3->Fill(s4[a],s3[a]);
	  //s5[a]=94.8474-0.123271*a-0.0101875*a*a;//is Proton
	  if (s4[a]>0 && s5[a]>0)  hee2->Fill(s4[a],s5[a]);
	}
	//+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_
	if (deltTOF2>-13 && deltTOF2<-4){/*hee1->Fill(b3_EFW2p,b3_EFW1d);*/  he1n->Fill(b3_EFW2,b3_EFW1);}
	if (cutg->IsInside(E1,deltTOF2)){
	  if (deltTOF2>0 && deltTOF2<13){  he1->Fill(b3_EFW2,b3_EFW1); 
	    ////	    for (int j=0; j<=contr; j++){
	    //for (int j=3; j<97; j++){
	      ///dist= TMath::Sqrt(TMath::Power((s1[j]-E1),2)+TMath::Power((s2[j]-E2),2));
	      ///dist= TMath::Sqrt(TMath::Power((s3[j]-E1),2)+TMath::Power((s4[j]-E2),2));
	      ////	      dist= TMath::Sqrt(TMath::Power((s1[j]-b3_EFW1),2)+TMath::Power((s2[j]-b3_EFW2),2));
	      // dist= TMath::Sqrt(TMath::Power((s3[j]-b3_EFW1),2)+TMath::Power((s4[j]-b3_EFW2),2));
	      // minf=MIN0(dist,minf);
	      ////if (flag) {A21=s1[j]; A22=s2[j]; flag=false;}
	      // if (flag) {A21=s3[j]; A22=s4[j]; flag=false;}
	      //}

	    //if (A21!=0) scale21=E1/A21;
	    //if (A22!=0) scale22=E2/A22;
	    //gain21->Fill(E1,scale21);
	    //gain22->Fill(E2,scale22);
	    //gain21k->Fill(b3_EFW1,scale21);
	    //gain22k->Fill(b3_EFW2,scale22);
	    /*!!! calibration gains for hit1DeutDet2 & hit2ProtonDet9 (28_28_180)  !!! */
	    Double_t b3_EFW1f=p_scalning(b3_EFW1,2);//b3_EFW1/(1.52948-0.0256455*b3_EFW1+0.000400344*pow(b3_EFW1,2)-2.02715e-06*pow(b3_EFW1,3));
	    Double_t b3_EFW2f=p_scalning(b3_EFW2,9);//b3_EFW2/(1.04523-0.00193864*b3_EFW2+1.49095e-05*pow(b3_EFW2,2)+7.72676e-08*pow(b3_EFW2,3));
	    hef->Fill(b3_EFW2f,b3_EFW1f);
	    minf=100000000;
	  }}
      }
  }

  for (int ss0=5;ss0<120;ss0=ss0+2){
    he1n->ProjectionY("test000",ss0,ss0+2);
    double Reff=test000->GetMaximumBin();
    //    double BC0=test000->GetBinContent(Reff);
    double sss0=ss0-1;
    hee1->Fill(sss0,Reff);
	  for (int j=0; j<=contr; j++){
	    dist= TMath::Sqrt(TMath::Power((s2[j]-Reff),2)+TMath::Power((s1[j]-sss0),2));
	    minf=MIN0(dist,minf);
	    if (flag) {A11=s1[j]; A12=s2[j]; flag=false;}
	  }
	  if (A12!=0) scale11=Reff/A12;
	  if (A11!=0) scale12=sss0/A11;
	  if (scale11>0.9 && scale11<1.5 && Reff>15)
	  gain11k->Fill(Reff,scale11);
	  if (sss0>5 && sss0<80)
	  gain12k->Fill(sss0,scale12);
	  minf=100000000;}


  for (int ss=10;ss<120;ss=ss+2){
    he1->ProjectionY("test00",ss,ss+2);
    double Ref=test00->GetMaximumBin();
    //    double BC=test00->GetBinContent(Ref);
    double sss=ss-1;
    he2->Fill(sss,Ref);
for (int j=1; j<contrgg; j++){
  //dist= TMath::Sqrt(TMath::Power((s1[j]-Ref),2)+TMath::Power((s2[j]-sss),2));
  dist= TMath::Sqrt(TMath::Power((s3[j]-Ref),2)+TMath::Power((s4[j]-sss),2));
	      minf=MIN0(dist,minf);
	      //if (flag) {A21=s1[j]; A22=s2[j]; flag=false;}
	      if (flag) {A21=s3[j]; A22=s4[j]; flag=false;}
	    }
	    if (A21!=0) scale21=Ref/A21;
	    if (A22!=0) scale22=sss/A22;
	    //if (scale21>0.9 && Ref>6 && Ref<90)
	    gain21k->Fill(Ref,scale21);
	    //if (sss>15 && sss<108)
	    gain22k->Fill(sss,scale22);
	    minf=100000000;}

  /*for (int s=6;s<240;s=s++){
    gain21k->ProjectionY("test21",s,s+1);
    gain22k->ProjectionY("test22",s,s+1);
    double Ref1=test21->GetMaximumBin();
    //double BC1=test21->GetBinContent(Ref1);
    double Ref2=test22->GetMaximumBin();
    //double BC2=test22->GetBinContent(Ref2);
    //cout << Ref << '\t' << BC << endl;
    if (Ref1/50>.95 && s>11.6 && s<160)
      gain21f->Fill((s/2),Ref1/50);
    if (Ref2/50>.95)
      gain22f->Fill((s/2),Ref2/50);}*/
  f->cd();
  cout << contrevent << endl;
  hg1->Write();
  hg2->Write();
  E1E2->Write();
  test21->Write();
  gain11->Write();
  gain12->Write();
  gain21->Write();
  gain22->Write();
  gain11k->Write();
  gain12k->Write();
  gain21k->Write();
  gain22k->Write();
  gain21f->Write();
  gain22f->Write();
  h21->Write();
  h22->Write();
  h23->Write();
  h00->Write();
  h000->Write();
  h0000->Write();
  he->Write();
  he1->Write();
  he2->Write();
  he1n->Write();
  he2n->Write();
  hef->Write();
  hee1->Write();
  hee2->Write();
  hee3->Write();
  ET->Write();
  htest1->Write();
  htest2->Write();
  posi1->Write();
  posi2->Write();
  posi2->Draw();
  f->Close();
}
