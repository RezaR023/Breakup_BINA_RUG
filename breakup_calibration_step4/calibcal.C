#define calibcal_cxx
#include "calibmanip.h"
#include <TProfile.h>
#include "TProfile.h"

//#define teta (20)
double tta1, tta2,pphi12;
//TFile *f1=new TFile("vhistAllconfig.root");
//++====TFile *f1=new TFile("vhistAllconfigvast.root");
//TFile *f1=new TFile("vhistAllconfigvastnewcal.root");
//TFile *f1=new TFile("vbreakaftercalibstp1.root");

/*#include <vector>


class Chebyshev {
public: 
   Chebyshev(int n, double xmin, double xmax) : 
      fA(xmin), fB(xmax),
      fT(std::vector<double>(n) )  {}

   double operator() (const double * xx, const double *p) { 
      double x = (xx[0] - fA -fB)/(fB-fA);
      int order = fT.size(); 
      if (order == 1) return p[0]; 
      if (order == 2) return p[0] + x*p[1]; 
      // build the polynomials
      fT[0] = 1;
      fT[1] = x; 
      for (int i = 1; i< order; ++i) { 
         fT[i+1] =  2 *x * fT[i] - fT[i-1]; 
      }
      double sum = p[0]*fT[0]; 
      for (int i = 1; i<= order; ++i) { 
         sum += p[i] * fT[i]; 
      }
      return sum; 
   }

private: 
   double fA; 
   double fB; 
   std::vector<double> fT; // polynomial
   std::vector<double> fC; // coefficients
};*/

void calibcal::Loop()
{
  using namespace std;
  TFile *f = new TFile("vbreakaftercalib6.root","recreate");
  /*sc1=new TGraphErrors(10000);
  sc1->SetName("sc1");
  sc1->SetMarkerStyle(7);
  sc2=new TGraphErrors(10000);
  sc2->SetName("sc2");
  sc2->SetMarkerStyle(7);*/

  fitfunctions();

  TPostScript *ps = new TPostScript(psfile0,111);
  cc=new TCanvas("cc","");
  BookingHist();
  openfiles();
  TH1D *test = new TH1D("test","",1900,0,1900);
  /* //auto hprof  = new TProfile("hprof","Profile of pz versus px",120,0,120,0,120);
  TH1D *CHEBY = new TH1D("CHEBY","",1900,0,1900);
   double xmin = 0.1; double xmax = 120; 
   double n = 4; 
   Chebyshev * cheb = new Chebyshev(n,xmin,xmax);
   TF1 * fffd = new TF1("fffd",cheb,xmin,xmax,n+1,"Chebyshev");
   TF1 * fffp = new TF1("fffp",cheb,xmin,xmax,n+1,"Chebyshev");

   for (int i = 0; i <=n; ++i) fffd->SetParameter(i,1);
   for (int i = 0; i <=n; ++i) fffp->SetParameter(i,1);*/
 
  //   In a ROOT session, you can do:
  //      Root > .L calibcal.C
  //      Root > calibcal t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
  //
  // TH2F *hee1 = new TH2F("hee1","",150,0,150,150,0,150);
  //TH2F *hee2 = new TH2F("hee2","",150,0,150,150,0,150);
  // TH2F *hee3 = new TH2F("hee3","",150,0,150,150,0,150);
  //TH2F *he = new TH2F("he","",150,0,150,150,0,150);
  //TH2F *he1 = new TH2F("he1","",150,0,150,150,0,150);
  //TH2F *he2n = new TH2F("he2n","",150,0,150,150,0,150);
  //TH2F *he1n = new TH2F("he1n","",150,0,150,150,0,150);
  //TH2F *he2 = new TH2F("he2","",150,0,150,150,0,150);
  //TH2F *h00 = new TH2F("h00","",360*2,0,360,200*4,-100,100);
  //TH2F *h000 = new TH2F("h000","",360*2,0,360,200*4,-100,100);
  //TH2F *h0000 = new TH2F("h0000","",360*2,0,360,200*4,-100,100);
  //TH1F *h21 = new TH1F("h21","",200*4,-100,100);
  //TH1F *h22 = new TH1F("h22","",2000*4,-1000,1000);
  //TH1F *h23 = new TH1F("h23","",200*4,-100,100);
  TH2F *ET = new TH2F ("ET","",2048,0,2*1024,2500,-500,2000);
  //TH2F *hef = new TH2F("hef","",150,0,150,150,0,150);
  
  //TH2F *E1E2 = new TH2F ("E1E2","",1900,0,1900,1900,0,1900);
  //TH2F *gain11 = new TH2F ("gain11","",1900,0,1900,200*10,-100,100);
  //TH2F *gain12 = new TH2F ("gain12","",1900,0,1900,200*10,-100,100);
  //TH2F *gain21 = new TH2F ("gain21","",1900*2,0,1900,100*10,0,100);
  //TH2F *gain22 = new TH2F ("gain22","",1900*2,0,1900,100*10,0,100);
  //TH2F *gain11k = new TH2F ("gain11k","",120*4,0,120*2,150,0,3);
  //TH2F *gain12k = new TH2F ("gain12k","",120*4,0,120*2,150,0,3);
  //TH2F *gain21k = new TH2F ("gain21k","",120*4,0,120*2,150,0,3);
  //TH2F *gain22k = new TH2F ("gain22k","",120*4,0,120*2,150,0,3);
  //TH2F *gain21f = new TH2F ("gain21f","",1900*4,0,1900*2,100*10,0,100);
  //TH2F *gain22f = new TH2F ("gain22f","",1900*4,0,1900*2,100*10,0,100);
  //TH1D *test21 = new TH1D ("test21","",120*2,0,120);
  //TH1D *test22 = new TH1D ("test22","",120*2,0,120);
  //TH1D *test00 = new TH1D ("test00","",150,0,150);
  //TH1D *test000 = new TH1D ("test000","",150,0,150);
  //TH2F *posi1 = new TH2F ("posi1","",200,0,200,200,0,200);
  //TH2F *posi2 = new TH2F ("posi2","",200,0,200,200,00,200);

  /*++==  ofstream out1,out2,out3,out4,out5,out6,out7,out8,out9,out10;
  out1.open(outf1);
  if(out1)
    {
      fprintf(stdout,"file %s is open.\n", outf1);
    }
  else if(!out1)
    {
      fprintf(stdout,"can not open %s.\n", outf1);
    }
   out2.open(outf2);
   if(!out2)
     {
      fprintf(stdout,"can not open %s.\n",outf2);
    }
   out3.open(outf3);
   if(!out3)
     {
      fprintf(stdout,"can not open %s.\n",outf3);
    }
   out4.open(outf4);
   if(!out4)
     {
      fprintf(stdout,"can not open %s.\n",outf4);
    }
   out5.open(outf5);
   if(!out5)
     {
      fprintf(stdout,"can not open %s.\n",outf5);
    }
   out6.open(outf6);
   if(!out6)
     {
      fprintf(stdout,"can not open %s.\n",outf6);
    }
   out7.open(outf7);
   if(!out7)
     {
      fprintf(stdout,"can not open %s.\n",outf7);
    }
   out8.open(outf8);
   if(!out8)
     {
      fprintf(stdout,"can not open %s.\n",outf8);
    }
   out9.open(outf9);
   if(!out9)
     {
      fprintf(stdout,"can not open %s.\n",outf9);
    }
   out10.open(outf10);
   if(!out10)
     {
      fprintf(stdout,"can not open %s.\n",outf10);
    }
==++*/
  //=============   start for scaling at detector ======//
  /*++==  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){lg=0;
      gainD[i][j] = new TGraphErrors(10000);
      gainP[i][j] = new TGraphErrors(10000);
      //for (int ss=6;ss<120;ss=ss+1){lg++;
	//E1E2ia[i][j]->ProjectionY("test",ss-1,ss+1);
      for (int ss=1;ss<120;ss=ss+1){lg++;
	E1E2ia[i][j]->ProjectionX("test",ss-1,ss+1);
	bm=test->GetMaximumBin();
	double BC=test->GetBinContent(bm);
	if (BC>3){  //<<--for BC
	test->Fit(ff,"NQ","",bm-15,bm+15);
	bg=ff->GetParameter(0);
	bm=Ref=ff->GetParameter(1);
	bn=ff->GetParameter(2);
	if (Ref>0 && Ref<120){
	sss=Ref;
	Ref=ss;
	//sss=ss;
	//henergy1[i][j]->Fill(sss,Ref);
	  //ps->NewPage();
	  //cc->cd();
	  //test->Draw("cont0");
	  //cc->Update();

	for (int l=1; l<contrll[i]; l++){
	  dist= TMath::Sqrt(TMath::Power((ES2depr[i][l]-Ref),2)+TMath::Power((ES1depr[i][l]-sss),2));
	  minf=MIN0(dist,minf);
	  if (flag) {A21=ES2depr[i][l]; A22=ES1depr[i][l]; flag=false;}
	}
	if (A21!=0) scale21=Ref/A21;// scaling for D
	if (A22!=0) scale22=sss/A22;// scaling for P
	gainD[i][j]->SetPoint(lg,Ref,scale21);  gainD[i][j]->SetPointError(lg,0,0);
	gainP[i][j]->SetPoint(lg,sss,scale22);  gainP[i][j]->SetPointError(lg,0,0);
	gaindd[i][j]->Fill(Ref,scale21);
	gainpp[i][j]->Fill(sss,scale22);
	}} //<<--for BC
	minf=100000000;
      }++==*/
      //gaindd[i][j]->ProfileX("hprof");
      
      //ps->NewPage();
      //cc->cd();
      //hprof->Draw();
      //cc->Update();
      
      /*gainD[i][j]->Fit(fffd);
      	gainP[i][j]->Fit(fffp);
	parr0[i][j]=fffd->GetParameter(0);
	parr1[i][j]=fffd->GetParameter(1);
	parr2[i][j]=fffd->GetParameter(2);
	par3[i][j]=fffd->GetParameter(3);
	par4[i][j]=fffd->GetParameter(4);
	parr3[i][j]=fffp->GetParameter(0);
	parr4[i][j]=fffp->GetParameter(1);
	parr5[i][j]=fffp->GetParameter(2);
	parr33[i][j]=fffp->GetParameter(3);
	parr00[i][j]=fffp->GetParameter(4);*/
      /*++==gainD[i][j]->Fit(fitfuncd1,"","",6,90);
      gainP[i][j]->Fit(fitfuncp1,"","",.1,120);
      parr0[i][j]=fitfuncd1->GetParameter(0);
      parr1[i][j]=fitfuncd1->GetParameter(1);
      parr2[i][j]=fitfuncd1->GetParameter(2);
      par3[i][j]=fitfuncd1->GetParameter(3);
      par4[i][j]=fitfuncd1->GetParameter(4);
      par5[i][j]=fitfuncd1->GetParameter(5);
      par6[i][j]=fitfuncd1->GetParameter(6);
      // par7[i][j]=fitfuncd1->GetParameter(7);
      parr3[i][j]=fitfuncp1->GetParameter(0);
      parr4[i][j]=fitfuncp1->GetParameter(1);
      parr5[i][j]=fitfuncp1->GetParameter(2);
      parr33[i][j]=fitfuncp1->GetParameter(3);
      parr00[i][j]=fitfuncp1->GetParameter(4);
      par0[i][j]=fitfuncp1->GetParameter(5);
      par1[i][j]=fitfuncp1->GetParameter(6);*/
      ////cout<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\t'<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr00[i][j]<<"\t"<<parr00[i][j]<<"\n";
      


      //if (j==1)  out1 /*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==2)  out2/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==3)  out3/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==4)  out4/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==5)  out5/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==6)  out6/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==7)  out7/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      // if (j==8)  out8/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==9)  out9/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";
      //if (j==10)  out10/*<<parr0[i][j]<<"\t"<<parr1[i][j]<<"\t"<<parr2[i][j]<<'\'t'<<par3[i][j]<<"\t"<<par4[i][j]<<"\t"<<par5[i][j]<<'\t'<<par6[i][j]<<'\t'<<par7[i][j]<<'\t'*/<<parr3[i][j]<<"\t"<<parr4[i][j]<<"\t"<<parr5[i][j]<<'\t'<<parr33[i][j]<<"\t"<<parr00[i][j]<<par0[i][j]<<"\t"<<par1[i][j]<<"\n";

      /*finalfuncd[i][j]= new TF1("finalfuncd","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
	  finalfuncd[i][j]->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j]);*/
	  //finalfuncd[i][j] = new TF1("fffdf",cheb,xmin,xmax,n+1,"Chebyshev");
	  //finalfuncp[i][j] = new TF1("fffpf",cheb,xmin,xmax,n+1,"Chebyshev");
      //++== finalfuncd[i][j]= new TF1("finalfuncd","pol6",4,90);
      //++==finalfuncd[i][j]->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);//,par7[i][j]);
	  /*finalfuncp[i][j]= new TF1("finalfuncp","1+[0]*x+[1]*x*x+[2]*pow(x,3)+[3]*pow(x,4)+[4]*pow(x,5)+[5]*pow(x,6)",.1,120);
	  finalfuncp[i][j]->SetParameters(parr3[i][j],parr4[i][j],parr5[i][j],parr33[i][j],parr00[i][j],par0[i][j]);//,par1[i][j]);*/
	  //++==finalfuncp[i][j]= new TF1("finalfuncp","pol6",.1,120);
	  //++==finalfuncp[i][j]->SetParameters(parr3[i][j],parr4[i][j],parr5[i][j],parr33[i][j],parr00[i][j],par0[i][j],par1[i][j]);
  /*++==  }
    }++==*/
    //ps->Close();
  //+=+=+=+=+=+=+=+=+=+ start reading events +=+=+=+=+=+=+=+=+//
    //switch(1) {
    //case 1 : {
    if (fChain == 0) return;
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if(b3_MWPCphi1>0. && b3_MWPCphi2>0. && b3_MWPCphi1<360. && b3_MWPCphi2<360.)	 Delphi= abs(b3_MWPCphi1-b3_MWPCphi2);
      if(Delphi>180.) Delphi=360. - Delphi;
	  if(b3_T1>0 && (b3_WLdet1!=b3_WLdet2) && (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 )
	    {//<<--<<--!
	      for(int q=0 ; q<Nkinema; q++)
	      {
		for(int w=1 ; w<11; w++){
		tta1=tta_1[q]; tta2=tta_2[q]; pphi12=phi12[q];
		if (abs(b3_MWPCtheta1-tta1)<2 && abs(b3_MWPCtheta2-tta2)<2 && abs(abs(b3_MWPCphi1-b3_MWPCphi2)-pphi12)<20  && b3_WLdet1==w )
		  {//asume that first particle is d and second is p//
  	contrevent++;
	//posi2->Fill(b3_MWPCX1,b3_MWPCY1);//position of hits.
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
	//h21->Fill(deltTOF1);
	//h22->Fill(deltTOF2);
	//h23->Fill(deltTOF3);
	//he->Fill(b3_EFW2,b3_EFW1);
	//h00->Fill(b3_MWPCphi1,deltTOF3);
	//h000->Fill(b3_MWPCphi1,deltTOF2);
	//h0000->Fill(b3_MWPCphi1,deltTOF1);
	//E1=TMath::Sqrt(b3_WLE1*b3_WRE1);
	//E2=TMath::Sqrt(b3_WLE2*b3_WRE2);
	//E1E2->Fill(E2,E1); 
	ET->Fill(E1,deltTOF2);
	// dTOF=PID_func();
		    if (deltTOF2>0 && deltTOF2<13){   
		      //E1E2t[q]->Fill(b3_EFW2,b3_EFW1); 
		      //E1E2i[q][w]->Fill((Float_t)b3_EFW2,(Float_t)b3_EFW1); 
		      Ymin0[w][q]=3;
		      Ymax0[w][q]=80;
		      Xmin0[w][q]=20;
		      Xmax0[w][q]=105;
		      if (b3_EFW1<Ymin0[w][q]) Ddetec = b3_EFW1/d_scalning(Ymin0[w][q],w,tta1);
		      if (b3_EFW1>=Ymin0[w][q] && b3_EFW1<=Ymax0[w][q]) Ddetec = b3_EFW1/d_scalning(b3_EFW1,w,tta1);
		      if (b3_EFW1>Ymax0[w][q]) Ddetec = b3_EFW1/d_scalning(Ymax0[w][q],w,tta1);

		      if (b3_EFW2<Xmin0[w][q]) Pdetec = b3_EFW2/p_scalning(Xmin0[w][q],w,tta2);
		      if (b3_EFW2>=Xmin0[w][q] && b3_EFW2<=Xmax0[w][q]) Pdetec = b3_EFW2/p_scalning(b3_EFW2,w,tta2);
		      if (b3_EFW2>Xmax0[w][q]) Pdetec = b3_EFW2/p_scalning(Xmax0[w][q],w,tta2);
		      E1E2idetec[q][w]->Fill(Pdetec,Ddetec);
		      /*Ptarg = Pdetec+func1->Eval(Pdetec);
		      Dtarg = Ddetec+func2->Eval(Ddetec);*/
		      if (q<3){
		      Ptarg = func1->Eval(Pdetec);
		      Dtarg = func2->Eval(Ddetec);
		      E1E2itarg[q][w]->Fill(Ptarg,Dtarg);}
		      if (q>=3){
		      Ptarg = func11->Eval(Pdetec);
		      Dtarg = func21->Eval(Ddetec);
		      E1E2itarg[q][w]->Fill(Ptarg,Dtarg);}
		      //E1E2i[q][w]->Fill(Ptarg,b3_EFW2);
		      //henergy1[q][w]->Fill(Dtarg,b3_EFW1);
		      //cout << "d_scalning(b3_EFW1,b3_WLdet1,tta1)=" << d_scalning(b3_EFW1,b3_WLdet1,tta1) << '\t' << contrevent  << endl;
		      }
      }}}}//<<--<<--!
  }
  //}//end case1
  //+=+=+=+=+=+=+=+=+=+ end reading events +=+=+=+=+=+=+=+=+//

  //====start fitfunctions step2 ====///
  //fitfuncp12= new TF1("fitfuncp12","pol3",5,120);
  //fitfuncp1->SetParameters(1.000,-0.00001,1.4e-07,2.7e-08,1e-11,1e-14);
  /*fitfuncp1= new TF1("fitfuncp1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",5,120);
    fitfuncp1->SetParameters(6.99657e-04,1.00901e+00,.9);*/
  //fitfuncd1= new TF1("fitfuncd1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
  //fitfuncd12= new TF1("fitfuncd12","pol3",.01,110);
//fitfuncd1->SetParameters(1.000,-0.00001,1.4e-07,7.7e-08,5e-11,5e-14);
  //fitfuncd1->SetParameters(3.65988e-03,7.19197e-01,1.0);
  //fitfuncp12= new TF1("fitfuncp12","pol2",5,120);
  //fitfuncp12->SetParameters(1.04523,-0.00193864,1.49095e-05);//,7.72676e-08,1e-11);
  /*fitfuncp1= new TF1("fitfuncp1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",5,120);
    fitfuncp1->SetParameters(6.99657e-04,1.00901e+00,.9);*/
  //fitfuncd12= new TF1("fitfuncd12","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
  //fitfuncd12->SetParameters(3.65988e-03,7.19197e-01,1.0);

    //====end fitfunctions step1 ====///


  //=============   start for scaling at detector for second time ======//
/*++==  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){lg=0;
      gainD2[i][j] = new TGraphErrors(10000);
      gainP2[i][j] = new TGraphErrors(10000);
      for (int ss=1;ss<120;ss=ss+1){lg++;
	E1E2idetec[i][j]->ProjectionX("test",ss-1,ss+1);
	bm=test->GetMaximumBin();
	double BC=test->GetBinContent(bm);
	if (BC>8){  //<<--for BC
	  test->Fit(ff,"NQ","",bm-15,bm+15);
	  bg=ff->GetParameter(0);
	  bm=Ref=ff->GetParameter(1);
	  bn=ff->GetParameter(2);
	  if (Ref>0 && Ref<120){
	    sss=Ref;
	    Ref=ss;
	    //sss=ss;
	    //henergy1[i][j]->Fill(sss,Ref);
	    //ps->NewPage();
	    //cc->cd();
	    //test->Draw("cont0");
	    //cc->Update();
	     for (int l=1; l<contrll[i]; l++){
	      dist= TMath::Sqrt(TMath::Power((ES2depr[i][l]-Ref),2)+TMath::Power((ES1depr[i][l]-sss),2));
	       minf=MIN0(dist,minf);
	      if (flag) {A21=ES2depr[i][l]; A22=ES1depr[i][l]; flag=false;}
	    }
	     if (A21!=0) scale21=(Ref-A21);// scaling for D
	     if (A22!=0) scale22=sss-A22;// scaling for P
	     //gainD2[i][j]->SetPoint(lg,Ref,scale21);  gainD2[i][j]->SetPointError(lg,0,0);
	     //gainP2[i][j]->SetPoint(lg,sss,scale22);  gainP2[i][j]->SetPointError(lg,0,0);
	     //==scale21=(A21-Ref);// scaling for D
	     //==scale22=(A22-sss);// scaling for P
	    gainD2[i][j]->SetPoint(lg,Ref,scale21);  gainD2[i][j]->SetPointError(lg,0,0);
	    gainP2[i][j]->SetPoint(lg,sss,scale22);  gainP2[i][j]->SetPointError(lg,0,0);
	    //gaindd[i][j]->Fill(Ref,scale21);
	    //gainpp[i][j]->Fill(sss,scale22);
	  }} //<<--for BC
	minf=100000000;
      }++==*/
      //gainD2[i][j]->Fit(fitfuncd12,"","",6,90);
      //gainP2[i][j]->Fit(fitfuncp12,"","",1,115);
      // par0[i][j]=fitfuncd12->GetParameter(0);
      // par1[i][j]=fitfuncd12->GetParameter(1);
      // par2[i][j]=fitfuncd12->GetParameter(2);
      // par3[i][j]=fitfuncp12->GetParameter(0);
      // par4[i][j]=fitfuncp12->GetParameter(1);
      // par5[i][j]=fitfuncp12->GetParameter(2);
	  //par6[i][j]=fitfuncd12->GetParameter(3);
	  //par7[i][j]=fitfuncp12->GetParameter(3);
	  //finalfuncd1= new TF1("finalfuncd1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
	  //finalfuncd1->SetParameters(par0,par1,par2);	  
	  //finalfuncp1= new TF1("finalfuncp1","pol2",5,120);
	  //finalfuncp1->SetParameters(par3,par4,par5);}*/
	  //finalfuncd[i][j]= new TF1("finalfuncd","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
	  //==finalfuncd2[i][j]= new TF1("finalfuncd2","pol3",.01,110);
	  //==finalfuncd2[i][j]->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j]);	  
	  //==finalfuncp2[i][j]= new TF1("finalfuncp2","pol3",5,120);
	  //==finalfuncp2[i][j]->SetParameters(par4[i][j],par5[i][j],par6[i][j],par7[i][j]);
	  //finalfuncd2[i][j]= new TF1("finalfuncd2","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
	  //finalfuncd[i][j]= new TF1("finalfuncd","pol2",.01,110);
	  //finalfuncd2[i][j]->SetParameters(par0[i][j],par1[i][j],par2[i][j]);	  
	  //finalfuncp2[i][j]= new TF1("finalfuncp2","pol2",5,120);
	  //finalfuncp2[i][j]->SetParameters(par3[i][j],par4[i][j],par5[i][j]);

/*++==  }
  }++==*/




  /**   case 2 :{//cout << "Hellloooooooooooo2" << endl;
        if (fChain == 0) return;
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if(b3_MWPCphi1>0. && b3_MWPCphi2>0. && b3_MWPCphi1<360. && b3_MWPCphi2<360.)	 Delphi= abs(b3_MWPCphi1-b3_MWPCphi2);
      if(Delphi>180.) Delphi=360. - Delphi;
	  if(b3_T1>0 && (b3_WLdet1!=b3_WLdet2) && (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 )
	    {//<<--<<--!
	      for(int q=0 ; q<Nkinema; q++)
	      {
		for(int w=1 ; w<11; w++){
		tta1=tta_1[q]; tta2=tta_2[q]; pphi12=phi12[q];
		if (abs(b3_MWPCtheta1-tta1)<2 && abs(b3_MWPCtheta2-tta2)<2 && abs(abs(b3_MWPCphi1-b3_MWPCphi2)-pphi12)<10  && b3_WLdet1==w && b3_WLdet2==11-w)
		  {//asume that first particle is d and second is p//
  	contrevent++;
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
	// dTOF=PID_func();
		    if (deltTOF2>0 && deltTOF2<13){   
		      //E1E2t[q]->Fill(b3_EFW2,b3_EFW1); 
		      //E1E2i[q][w]->Fill((Float_t)b3_EFW2,(Float_t)b3_EFW1); 
		      Ddetec = b3_EFW1/finalfuncd[q][w]->Eval(b3_EFW1);
		      Ddetec = Ddetec/finalfuncd2[q][w]->Eval(Ddetec);
		      Pdetec = Pdetec/finalfuncp2[q][w]->Eval(Pdetec);
		      E1E2idetec[q][w]->Fill(Pdetec,Ddetec);
		      //E1E2i[q][w]->Fill(Pdetec,Ddetec); 
		      //Ptarg = Pdetec+func1->Eval(Pdetec);
		      //Dtarg = Ddetec+func2->Eval(Ddetec);
		      //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
		      }
      }}}}//<<--<<--!
  }
  }//end case2**/
      //}//end switch
         
    f->cd();
    //    for (int i=1;i<Nkinema;i++){
    /* for (int i=Nkinema-1;i>-1;i--){
      for (int j=1;j<11;j++){

	ps->NewPage();
	cc->cd();
	gainD[i][j]->SetMarkerStyle(7);
	gainD[i][j]->Draw("ap");
	cc->Update();
	ps->NewPage();
	cc->cd();
	gainP[i][j]->SetMarkerStyle(7);
  	gainP[i][j]->Draw("ap");
  	cc->Update();
      }
      }*/
     for (int i=0;i<Nkinema;i++){
      for (int j=1;j<11;j++){
	ps->NewPage();
	cc->cd();
	//gainD2[i][j]->Draw("ap*");
	//E1E2i[i][j]->Draw("cont0");
	//p1s[i]->Draw("same");
	//	cc->Update();
	//ps->NewPage();
	//cc->cd();
	//p1p2dep[i]->Draw("same");
	//henergy1[i][j]->Draw("colz");
	//p1p2dep[i]->Draw("same");
	//p1s[i]->Draw("same");
	///cc->Update();
	///ps->NewPage();
	///cc->cd();
	//gainP2[i][j]->Draw("ap*");
	E1E2idetec[i][j]->Draw("colz");
	//henergy1[i][j]->Draw(" same");
	p1p2dep[i]->Draw("same");
	cc->Update();
	ps->NewPage();
	cc->cd();
	E1E2itarg[i][j]->Draw("colz");
	p1p2[i]->Draw("same");
	cc->Update();
      }
      }
    ps->Close();
    for (int i=0;i<Nkinema;i++){
    p1p2[i]->Write();
    p1p2dep[i]->Write();
    }
    for (int i=0;i<Nkinema;i++){
    //E1E2ta[i]->Write();
     for (int j=1;j<11;j++){
       //E1E2ia[i][j]->Write();
       //E1E2i[i][j]->Write();
       E1E2idetec[i][j]->Write();
       E1E2itarg[i][j]->Write();
       //henergy1[i][j]->Write();
       //gainD2[i][j]->Write();//for ploting without line and with '*' use ("ap*")
       //gainP2[i][j]->Write();
       //gaindd[i][j]->Write();
       //gainpp[i][j]->Write();
     }
  }

  f->Close();
}
//==========--------  FUNCTIONS  ---------=========//
Double_t   MIN0(Double_t a,Double_t b){
  if (a<b) {flag= true; return a;}
  if (b<a) return b;
  if( a==b) return a; 
  else return -1;
}/*End of MIN*/

/*double p_scalning(double x ,int i, double thet)
{
  double E1;
  int j=0;
  E1=0.0;
  finalfuncpf= new TF1("finalfuncpf","pol6",.1,120);
  if (thet<16.5){j=1;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);} 
  else if (thet>=16.5  && thet<19){j=2;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  else if (thet>=19 && thet<22.5){j=3;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);
    //if (i==4) cout << parr0[i][j]<< '\t' << parr1[i][j] << '\t' << parr2[i][j] << '\t' << parr3[i][j] << '\t' << parr4[i][j] << '\t' << parr5[i][j] << '\t' << parr6[i][j] << endl;
}
  else if (thet>=22.5 && thet<26.5){j=4;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  else if (thet>=26.5 && thet<29){j=5;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  else if (thet>=29 && thet<31.5){j=6;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  else if (thet>=31.5 && thet<34){j=7;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  else if (thet>=34){j=8;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j],parr6[i][j]);}
  double val = finalfuncpf->Eval(x);
  delete finalfuncpf;
  return val;
}*/
double p_scalning(double x ,int i, double thet)
{
  double E1;
  int j=0;
  E1=0.0;
  finalfuncpf= new TF1("finalfuncpf","pol5",10,105);
  if (thet<16.5){j=1;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);} 
  else if (thet>=16.5  && thet<19){j=2;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=19 && thet<22.5){j=3;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=22.5 && thet<26.5){j=4;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=26.5 && thet<29){j=5;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=29 && thet<31.5){j=6;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=31.5 && thet<34){j=7;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  else if (thet>=34){j=8;
    finalfuncpf->SetParameters(parr0[i][j],parr1[i][j],parr2[i][j],parr3[i][j],parr4[i][j],parr5[i][j]);}
  double val = finalfuncpf->Eval(x);
  delete finalfuncpf;
  return val;
  }

 /*double d_scalning(double y ,int i, double thet)
{
  double E2;
  E2==0.0;
  int j=0;
  finalfuncdf= new TF1("finalfuncdf","pol6",4,90);
  if (thet<16.5){j=1;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);} 
  else if (thet>=16.5  && thet<19){j=2;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
  else if (thet>=19  && thet<22.5){j=3;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);
    // if (i==4) cout << par0[i][j]<< '\t' << par1[i][j] << '\t' << par2[i][j] << '\t' << par3[i][j] << '\t' << par4[i][j] << '\t' << par5[i][j] << '\t' << par6[i][j] << endl;
}
  else if (thet>=22.5  && thet<26.5){j=4;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
  else if (thet>=26.5  && thet<29){j=5;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
  else if (thet>=29  && thet<31.5){j=6;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
  else if (thet>=31.5  && thet<34){j=7;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
  else if (thet>=34){j=8;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j],par6[i][j]);}
 double val = finalfuncdf->Eval(y);
  delete finalfuncdf;
  return val;
}*/
double d_scalning(double y ,int i, double thet)
{
  double E2;
  E2==0.0;
  int j=0;
  finalfuncdf= new TF1("finalfuncdf","(2.0*[0]*x+[1]*x*x)/(sqrt(1+4*x*[2]+[3]*x*x/[4])-[5])",3,90);
  //finalfuncdf= new TF1("finalfuncdf","pol6",4,90);
  if (thet<16.5){j=1;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);} 
  else if (thet>=16.5  && thet<19){j=2;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=19  && thet<22.5){j=3;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=22.5  && thet<26.5){j=4;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=26.5  && thet<29){j=5;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=29  && thet<31.5){j=6;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=31.5  && thet<34){j=7;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
  else if (thet>=34){j=8;
    finalfuncdf->SetParameters(par0[i][j],par1[i][j],par2[i][j],par3[i][j],par4[i][j],par5[i][j]);}
 double val = finalfuncdf->Eval(y);
  delete finalfuncdf;
  return val;
  }
/*Opens the input data files*/
int openfiles()
{
  ifstream angle;
  //char ch[150];
  int l=0,ll=0;

   /*list of the kinematics */
  angle.open(Smklist);
  if(angle) fprintf(stdout,"file  %s is open.\n",Smklist);
  else{
    fprintf(stdout,"1 can't open file %s \n",Smklist);
    return 0;
  }
  for(int k=0 ; k<Nkinema ; k++)
{
    angle >> Smking[k];
    p1p2[k] = new TGraphErrors(10000);
    p1p2dep[k] = new TGraphErrors(10000);
    //p1s[k] = new TGraphErrors(10000);
    if (k==0){p1p2[k]->SetName("p1p2_0"); p1p2dep[k]->SetName("p1p2dep_0");}
    if (k==1){p1p2[k]->SetName("p1p2_1"); p1p2dep[k]->SetName("p1p2dep_1");}
    if (k==2){p1p2[k]->SetName("p1p2_2"); p1p2dep[k]->SetName("p1p2dep_2");}
    if (k==3){p1p2[k]->SetName("p1p2_3"); p1p2dep[k]->SetName("p1p2dep_3");}
    if (k==4){p1p2[k]->SetName("p1p2_4"); p1p2dep[k]->SetName("p1p2dep_4");}
    if (k==5){p1p2[k]->SetName("p1p2_5"); p1p2dep[k]->SetName("p1p2dep_5");}
    if (k==6){p1p2[k]->SetName("p1p2_6"); p1p2dep[k]->SetName("p1p2dep_6");}
    if (k==7){p1p2[k]->SetName("p1p2_7"); p1p2dep[k]->SetName("p1p2dep_7");}
    if (k==8){p1p2[k]->SetName("p1p2_8"); p1p2dep[k]->SetName("p1p2dep_8");}


    /*scurve file*/
    ifstream Sinput;
    Sinput.open(Smking[k]);
    if(Sinput) fprintf(stdout,"file  %s is open.\n",Smking[k]);
    else {
      fprintf(stdout,"2 can't open file %s \n",Smking[k]);
      return 0;
    }
    l=0; ll=0;
    do { l++;
      Sinput >> Scu[k][l] >> ES2[k][l] >> ES1[k][l] >>  ES3[k][l];/* E1 is proton and E2 is deuteron energy */
      if (ES1[k][l]>20 && ES2[k][l]>20){
	p1p2[k]->SetPoint(l,ES1[k][l],ES2[k][l]);  p1p2[k]->SetPointError(l,0,0);}
      if (k<3){
	ES1dep[k][l]=func5->Eval(ES1[k][l]);
	ES2dep[k][l]=func6->Eval(ES2[k][l]);
      }
      else {
	ES1dep[k][l]=func3->Eval(ES1[k][l]);
	ES2dep[k][l]=func4->Eval(ES2[k][l]);
      }

      //henergy1[k][l]->Fill(ES1dep[k][l],ES2dep[k][l]);
      if (ES1dep[k][l]>0 && ES2dep[k][l]>0){ll++;
	p1p2dep[k]->SetPoint(ll,ES1dep[k][l],ES2dep[k][l]);  p1p2dep[k]->SetPointError(ll,0,0);
	ES1depr[k][ll]=ES1dep[k][l];	ES2depr[k][ll]=ES2dep[k][l];
      }
      //      p1s[k]->SetPoint(l,ES1[k][l], Scu[k][l]);   p1s[k]->SetPointError(l,0,0);
      //p1s[k]->SetPoint(l,l,l);   p1s[k]->SetPointError(l,0,0);
    }while(!Sinput.eof());
    Sinput.close();
    contrll[k]=ll;
 }/*finished loading the data of all kinemas*/
  ifstream parad,parap;
  parad.open(paramsd);
  if(parad) fprintf(stdout,"file  %s is open.\n",paramsd);
  else{
    fprintf(stdout,"1 can't open file %s \n",paramsd);
    return 0;
  }
  parap.open(paramsp);
  if(parap) fprintf(stdout,"file  %s is open.\n",paramsp);
  else{
    fprintf(stdout,"1 can't open file %s \n",paramsp);
    return 0;
  }
  for(int kk=1 ; kk<11 ; kk++){
    parad >> dpara[kk];
    parap >> ppara[kk];
    ifstream parainputp,parainputd;
    parainputp.open(ppara[kk]);
    if(parainputp) fprintf(stdout,"file  %s is open.\n",ppara[kk]);
    else {
      fprintf(stdout,"2 can't open file %s \n",ppara[kk]);
      return 0;
    }
    int l1=0;
    do { l1++;
      //parainputd >> par0[kk][l1]>>par1[kk][l1]>>par2[kk][l1]>>par3[kk][l1]>>par4[kk][l1]>>par5[kk][l1]>>par6[kk][l1];
      parainputp >> parr0[kk][l1]>>parr1[kk][l1]>>parr2[kk][l1]>>parr3[kk][l1]>>parr4[kk][l1]>>parr5[kk][l1]>>parr6[kk][l1];

    }while(!parainputp.eof());
    parainputp.close();
    parainputd.open(dpara[kk]);
    if(parainputd) fprintf(stdout,"file  %s is open.\n",dpara[kk]);
    else {
      fprintf(stdout,"2 can't open file %s \n",dpara[kk]);
      return 0;
    }
    l1=0;
    do { l1++;
      parainputd >> par0[kk][l1]>>par1[kk][l1]>>par2[kk][l1]>>par3[kk][l1]>>par4[kk][l1]>>par5[kk][l1]>>par6[kk][l1];
      // parainputp >> parr0[kk][l1]>>parr1[kk][l1]>>parr2[kk][l1]>>parr3[kk][l1]>>parr4[kk][l1]>>parr5[kk][l1]>>parr6[kk][l1];

    }while(!parainputd.eof());
    parainputd.close();
    }
  ifstream pcons;
  pcons.open(paracons);
  if(pcons) fprintf(stdout,"file  %s is open.\n",paracons);
  else{
    fprintf(stdout,"1 can't open file %s \n",paracons);
    return 0;
  }
  for(int kz=1 ; kz<11 ; kz++)
{
    pcons >> conspara[kz];
    ifstream temcons;
    temcons.open(conspara[kz]);
    if(temcons) fprintf(stdout,"file  %s is open.\n",conspara[kz]);
    else {
      fprintf(stdout,"2 can't open file %s \n",conspara[kz]);
      return 0;
    }
    int l1=0;
    do { l1++;
      temcons >> Xmin0[kz][l1]>>Xmax0[kz][l1]>>Ymin0[kz][l1]>>Ymax0[kz][l1];

    }while(!temcons.eof());
    temcons.close();
 }
}
int BookingHist(){

       cc->Size(27,18);
      cc->SetFillColor(10);
      cc->SetBottomMargin(.15);
      cc->SetLeftMargin(.15);
  
      /*for (int i=0;i<Nkinema;i++){
    //sprintf(nam1a[i],"E1E2t_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    for (int j=1;j<11;j++){
      sprintf(name2a[i][j],"E1E2_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }
  
  for (int i=0;i<Nkinema;i++){
    //E1E2ta[i]=(TH2D*)f1->Get(nam1a[i]);
    for (int j=1;j<11;j++){
      E1E2ia[i][j]=(TH2D*)f1->Get(name2a[i][j]);
    }
  }
  */
      /*for (int i=0;i<Nkinema;i++){
    //sprintf(nam1[i],"E1E2t_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    for (int j=1;j<11;j++){
      sprintf(namproj[i][j],"ProjY_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }
  
  for (int i=0;i<Nkinema;i++){
    //E1E2t[i]=new TH2D(nam1[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
    for (int j=1;j<11;j++){
      E1E2proj[i][j]=new TH1D(namproj[i][j],";E_{d}proj [MeV]",120,0,120);
    }
  }*/
  
  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      sprintf(nam4[i][j],"E1E2detec_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
      sprintf(nam5[i][j],"E1E2targ_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }
  
  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      E1E2idetec[i][j]=new TH2D(nam4[i][j],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
      E1E2itarg[i][j]=new TH2D(nam5[i][j],";E_{p} [MeV];E_{d} [MeV]",100,20,120,100,20,120);
    }
  }

  /*for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      sprintf(nam6[i][j],"GainDD_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
      sprintf(nam7[i][j],"GainPP_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }

  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      gaindd[i][j]=new TH2D(nam6[i][j],";E_{d} [MeV];Gain[chan.No]",150*4,0,150,120*10,-120,120);
      gainpp[i][j]=new TH2D(nam7[i][j],";E_{p} [MeV];Gain[chan.No]",150*4,0,150,120*10,-120,120);
    }
  }*/

  /*for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      sprintf(nam8[i][j],"henergy1_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }

  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      henergy1[i][j]=new TH2D(nam8[i][j],";E_{p} [MeV];E_{d} [MeV]",150*10,0,150,150*10,0,150);
    }
  }*/
  /*for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      sprintf(namn[i][j],"E1E2_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    }
  }

  for (int i=0;i<Nkinema;i++){
    for (int j=1;j<11;j++){
      E1E2i[i][j]=new TH2D(namn[i][j],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
    }
    }*/

}

int fitfunctions(){
  //====--- start functions for go from dep to thr and inverse ---===//
  /*func1= new TF1("fun1","pol5",.01,110); //for proton, dep to thr
  func1->SetParameters((18.72+.50),-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
  func2= new TF1("fun2","pol4",.1,110); //for deuteron, dep to thr
  func2->SetParameters((25.69+.50),-0.7636,0.01181,-8.67e-5,2.307e-7);*/
  func1= new TF1("fun1","pol6",.01,110); //for proton, dep to thr
  func1->SetParameters(19.4812,0.0565719,0.0300499,-0.000589125,6.78455e-06,-4.17453e-08,1.05267e-10);
  func2= new TF1("fun2","pol5",.1,110); //for deuteron, dep to thr
  func2->SetParameters(26.3485,0.0941233,0.0205012,-0.000279293,2.03707e-06,-6.05863e-09);
  func11= new TF1("fun1","pol6",.01,110); //for proton, dep to thr tet>=25
  func11->SetParameters((19.4812+.5),0.0565719,0.0300499,-0.000589125,6.78455e-06,-4.17453e-08,1.05267e-10);
  func21= new TF1("fun2","pol5",.1,110); //for deuteron, dep to thr tet>=25
  func21->SetParameters((26.3485+.5),0.0941233,0.0205012,-0.000279293,2.03707e-06,-6.05863e-09);
  func3= new TF1("fun3","pol6",.01,120);//for proton, thr to dep
  func3->SetParameters((-73.8858-.5),7.01275,-0.226214,0.00455813,-5.0831e-05,2.95676e-07,-6.99866e-10);
  func4= new TF1("fun4","pol7",.1,120); //for deuteron, thr to dep
  func4->SetParameters((-324.944-.5),33.0866,-1.41793,0.0346872,-0.00050217,4.28835e-06,-1.99831e-08,3.92007e-11);
  func5= new TF1("fun5","pol6",.01,120);//for proton, thr to dep//for tet<=20
  func5->SetParameters((-73.8858),7.01275,-0.226214,0.00455813,-5.0831e-05,2.95676e-07,-6.99866e-10);
  func6= new TF1("fun6","pol7",.1,120); //for deuteron,thr to dep//for tet<=20
  func6->SetParameters((-324.944),33.0866,-1.41793,0.0346872,-0.00050217,4.28835e-06,-1.99831e-08,3.92007e-11);
  //====--- end functions for go from dep to thr and inverse ---===//

  //====start fitfunctions step1 ====///
  fitfuncp1= new TF1("fitfuncp1","pol6");//,.1,120);
  //fitfuncp1->SetParameters(1.04523,-0.00193864,1.49095e-05);//,7.72676e-08,1e-11);
  //++==fitfuncp1= new TF1("fitfuncp1","1+[0]*x+[1]*x*x+[2]*pow(x,3)+[3]*pow(x,4)+[4]*pow(x,5)+[5]*pow(x,6)",.1,120);
  //++==fitfuncp1->SetParameters(0.0442695,0.00223367,5.44083e-05,6.99352e-07,4.56142e-09,1.19489e-11);
  /*fitfuncp1= new TF1("fitfuncp1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1]))",5,120);
  fitfuncp1->SetParameters(6.99657e-04,1.00901e+00,.9);*/
  fitfuncd1= new TF1("fitfuncd1","pol6");//,6,90);
  /*fitfuncd1= new TF1("fitfuncd1","(2.0*[0]*x)/(sqrt(1+4*x*[0]/[1])-[2])",.01,110);
  fitfuncd1->SetParameters(3.65988e-03,7.19197e-01,1.0);*/
    //====end fitfunctions step1 ====///

  ff =new TF1 ("ff","gaus");
}

/*double PID_func(){
  	contrevent++;
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
	return deltTOF2;
}*/
