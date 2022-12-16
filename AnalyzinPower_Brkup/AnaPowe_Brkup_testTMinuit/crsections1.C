#define crsections1_cxx
#include "crsecvariables1.h"
#include "crsections1.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TRandom.h>
double Smin1[Nkinema]={0.},Smin2[Nkinema]={0.},Smax1[Nkinema]={0.},Smax2[Nkinema]={0.},dss[Nkinema]={0.};
double tempcharg=0;
double kHzPol=0.0;
double TotBeamC=0.0;
double TotTime=0.0;
double RelativTime=0.0;
double oldTime=0.0;
int ScalerCount=0;
double  Len_1 = 0.0;
double  Len_2 = 0.0;
double tta1=0.0,tta2=0.0,pphi12=0.0;
int q,qq;
double Ddetec0,Pdetec0,Ptarg0,Dtarg0;
double TOF1dd,TOF2pp,TOF2dd,TOF1pp;
double output[Nkinema][Snr]={0.};
double pzz13 = -1.5175; /*-- pages 74 and 88 of Ahmad's book  --*/
double pz27=-0.601;
/*double pz28=0.502;     double pzz28=-0.143;
  double pz27=-0.568;    double pzz27=-0.051;
  double pz14=-0.105;    double pzz14=0.466;
  double pz13=-0.010;    double  pzz13=-1.511;*/
int Nbin=18; // the number of bins for phi histograms
double calTOF(double dis, double Ekin, int id)
{
  
  /* id==1 for deuteron, id==2 fpr proton */
  double  Eratio=0.0;
  double  TOF=0.0;
  if(id==1)
    Eratio = (md/(md + Ekin))* (md/(md + Ekin));
  if(id==2)
    Eratio = (mp/(mp + Ekin))* (mp/(mp + Ekin));
  TOF =  dis/(0.3* (sqrt(1.0 - Eratio)));
  return TOF;
}


  double Length(double theta, double phi)
  {
  double theta1,theta2;
  double xx, zz, yy;
  double distance;
  
  theta1 = TMath::ASin(TMath::Sin(D2R*theta)*TMath::Cos(D2R*phi));
  theta2 =  TMath::ATan( TMath::Sin(D2R*theta)*TMath::Sin(D2R*phi)/TMath::Cos(D2R*theta));
  
  xx = R0* TMath::Tan(theta1);
  yy = R0* TMath::Sin(theta2);
  zz = R0* TMath::Cos(theta2);
  
  distance = sqrt(xx*xx + yy*yy + zz*zz);
  return distance;
}
TF1 *Dtofe;
double DelTOFe;
void crsections1::Loop()
{
  using namespace std;
TRandom *xran = new TRandom();
   TCutG *cutg = new TCutG("cutg",20);
   cutg->SetVarX("b3_EFW1");
   cutg->SetVarY("deltTOF2");
   cutg->SetTitle("Graph");
   cutg->SetFillColor(1);
   cutg->SetPoint(0,-0.12571,-3.75);
   cutg->SetPoint(1,2.5456,-3.04802);
   cutg->SetPoint(2,5.37405,-1.26608);
   cutg->SetPoint(3,9.30246,-0.0241268);
   cutg->SetPoint(4,15.5879,0.35386);
   cutg->SetPoint(5,21.2448,0.623851);
   cutg->SetPoint(6,29.7302,0.569853);
   cutg->SetPoint(7,41.8296,0.515855);
   cutg->SetPoint(8,53.6148,0.461857);
   cutg->SetPoint(9,68.5428,0.461857);
   cutg->SetPoint(10,77.6567,0.569853);
   cutg->SetPoint(11,81.4279,0.569853);
   cutg->SetPoint(12,82.5279,0.569853);
   cutg->SetPoint(13,85.5135,0.569853);
   cutg->SetPoint(14,96.2847,0.569853);
   cutg->SetPoint(15,111.126,0.569853);
   cutg->SetPoint(16,110.969,-15.3596);
   cutg->SetPoint(17,-0.12571,-15.3596);
   cutg->SetPoint(18,0.188562,-3.75);
   cutg->SetPoint(19,-0.12571,-3.75);

/* Energy loss as a function of deposited  denergy for proton(func1) and for deutron (func2) */
funcc1= new TF1("funn1","pol5",.01,110);
funcc2= new TF1("funn2","pol4",.1,110);
funcc1->SetParameters(18.72,-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
funcc2->SetParameters(25.69,-0.7636,0.01181,-8.67e-5,2.307e-7);

 Dtofe=new TF1("Dtofe","pol7",0,80);
 Dtofe->SetParameters(-8.33554,1.21485,-0.092854,0.00397358,-9.83088e-05,1.39092e-06,-1.04294e-08,3.21104e-11);

//double charge=1640492.0;
 double cross[Nkinema][Snr],Ercross[Nkinema][Snr];
 double LT=0.0,dowscale=0.0;
 double iT11[Nkinema][Snr]={0.},EiT11[Nkinema][Snr]={0.},ImiT11[Nkinema][Snr]={0.},EImiT11[Nkinema][Snr]={0.},T20[Nkinema][Snr]={0.},ET20[Nkinema][Snr]={0.},T22[Nkinema][Snr]={0.},ET22[Nkinema][Snr]={0.},ImT22[Nkinema][Snr]={0.},EImT22[Nkinema][Snr]={0.};
  double Ayy[Nkinema][Snr], EAyy[Nkinema][Snr];
  double Ay[Nkinema][Snr],EAy[Nkinema][Snr];
  double Azz[Nkinema][Snr], EAzz[Nkinema][Snr];
  TFile *f = new TFile("vbrkupAnaPowfi180UsingCutNbin18UsingTOF_MWTOF1_random_Snr7.root","recreate");
  fitfunctions();
  TPostScript *ps = new TPostScript(psfile0,111);
  cc=new TCanvas("cc","");
  ofstream outch;
  outch.open(chargeadr);
if(outch)
    {
      fprintf(stdout,"file %s is open.\n", chargeadr);
    }
  else if(!outch)
    {
      fprintf(stdout,"can not open %s.\n", chargeadr);
    }
  BookingHist();
  openfiles();
  Define_GCuts();
  //   In a ROOT session, you can do:
  //      Root > .L crsections1.C
  //      Root > crsections1 t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
  //
  TH2F *h000 = new TH2F("h000","",360*4,0,360,20*4,-5,15);
  TH1F *h22 = new TH1F("h22","",2000*4,-1000,1000);
  TH2F *hee1 = new TH2F("hee1","",150,0,150,150,0,150);
  TH2F *hee2 = new TH2F("hee2","",150,0,150,150,0,150);
  TH2F *hee3 = new TH2F("hee3","",150,0,150,150,0,150);
  TF1 *f21= new TF1("f212","pol3",-20,20);
  TF1 *f31= new TF1("f31","gaus",-20,20);
  TF1 *f22= new TF1("f22","pol3",-20,20);
  TF1 *f32= new TF1("f32","gaus",-20,20);
  
  if (fChain == 0) return;
  
  Long64_t nentries =fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    //Check random generator

    double xran1=xran->Uniform (1);
    //cout  << xran1 << endl;
    if (xran1<=0.1){
      //      cout <<"Hellooo"<< endl;
    Delphi=0.0;
    if(b3_10kHZ*b3_TFera>0 ) 
      {
	LT=(b3_10kHZDT * b3_AFera)/(b3_10kHZ * b3_TFera);
	//double LT2=(b3_10kHZ * b3_AFera)/(b3_10kHZDT * b3_TFera);
	//cout << b3_10kHZ << '\t' << b3_10kHZDT << '\t' << b3_AFera << '\t' << b3_TFera << '\t'<< LT << '\t' << LT2 << endl;
	dowscale=b3_T1sDT/b3_T1sDTS;
      }
    if(b3_MWPCphi1>0. && b3_MWPCphi2>0. && b3_MWPCphi1<360. && b3_MWPCphi2<360.){ Delphi= b3_MWPCphi2-b3_MWPCphi1;}
    /*making Delphi between -180 and 180*/
    if(Delphi>180.) {Delphi=Delphi - 360.;}
    if(Delphi<-180.) {Delphi=360. + Delphi;}
    if(b3_ID==1 && LT>.1 && dowscale<100 && abs(b3_WLtdc1-b3_WLtdc2)<80 && b3_T1>0 && (b3_WLdet1!=b3_WLdet2) && (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 /*&& b3_Pol==31*/)
      {//<<--<<--!
	//asume that first particle is d and second is p//
	for(int q=0 ; q<Nkinema; q++)
	  {
	    tta1=tta_1[q]; tta2=tta_2[q]; pphi12=phi12[q];
	    if (abs(b3_MWPCtheta1-tta1)<2 && abs(b3_MWPCtheta2-tta2)<2 && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5))
	      {//asume that first particle is d and second is p//
		contrevent++;	    
		Double_t tdc1t=(b3_WLtdc1+b3_WRtdc1)/4;
		Double_t tdc2t=(b3_WLtdc2+b3_WRtdc2)/4;
		Double_t tdc1m=(b3_WLtdc1-b3_WRtdc1);
		Double_t tdc2m=(b3_WLtdc2-b3_WRtdc2);
		R1=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta1/r2d))*(TMath::Cos(b3_MWPCphi1/r2d))),2));
		R2=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta2/r2d))*(TMath::Cos(b3_MWPCphi2/r2d))),2));
		
		//Ddetec0 = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1); 
		//Pdetec0 = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);

		  Ddetec0 = dd_scalning(b3_EFW1,(int)b3_WLdet1);
		  Pdetec0 = pp_scalning(b3_EFW2,(int)b3_WLdet2);

		if (q<3){
		  Ptarg0 = func1->Eval(Pdetec0);
		  Dtarg0 = func2->Eval(Ddetec0);
		}
		if (q>=3){
		  Ptarg0 = func11->Eval(Pdetec0);
		  Dtarg0 = func21->Eval(Ddetec0);
		}
		//-_-_-_--- assume the first particle is D  ---_-_-_-
		double R11=TMath::Sqrt(TMath::Power((.002*297*b3_MWPCX1/285),2)+TMath::Power((.002*b3_MWPCY1),2)+TMath::Power(.297,2));
		double R12=R1-R11;
		double R21=TMath::Sqrt(TMath::Power((.002*297*b3_MWPCX2/285),2)+TMath::Power((.002*b3_MWPCY2),2)+TMath::Power(.297,2));
		double R22=R2-R21;
		//+++++++TOF1dd=R11/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0+md)),2)))+R12/(C0*TMath::Sqrt(1-TMath::Power((md/(Ddetec0+md)),2)));
		//+++++++TOF2pp=R21/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0+mp)),2)))+R22/(C0*TMath::Sqrt(1-TMath::Power((mp/(Pdetec0+mp)),2)));
		//cout << R11 << '\t' << R12 << '\t' << R1 << '\t' << R21 << '\t' << R22 << '\t' << R2 << endl;

		TOF1dd=R1/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0+md)),2)));
		TOF2pp=R2/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0+mp)),2)));
		
		/* Len_1 = Length(b3_MWPCtheta1,b3_MWPCphi1);
		   Len_2 = Length(b3_MWPCtheta2,b3_MWPCphi2);
		   Ddetec0 = dd_scalning(b3_EFW1,b3_WLdet1); 
		   Pdetec0 = pp_scalning(b3_EFW2,b3_WLdet2);
		   Dtarg0 = Ddetec0+funcc2->Eval(Ddetec0);
		   Ptarg0 = Ddetec0+funcc1->Eval(Pdetec0);
		   Double_t TOF1dd=calTOF(Len_1,Dtarg0,1);
		   Double_t TOF2pp=calTOF(Len_2,Ptarg0,2);*/
		
		Double_t deltTDC=(tdc1t-tdc2t);
		//Double_t X1X =(TOF2pp-TOF1pp);
		Double_t X2X =(TOF2pp-TOF1dd);
		//Double_t X3X =(TOF2dd-TOF1pp);
		// deltTOF1 = (X1X-deltTDC);
		deltTOF2 = -(X2X-deltTDC);
		//deltTOF3 = (X3X-deltTDC);
		deltTOF2 -= TDC_shift((int)b3_WLdet1,(int)b3_WLdet2,pphi12);
		///+++TDC_ratio[q]->Fill(deltTOF2);
		///+++TDC_ratio_phi[q]->Fill(b3_MWPCphi1,deltTOF2);
		double E1=TMath::Sqrt(b3_WLE1*b3_WRE1);
		//E2=TMath::Sqrt(b3_WLE2*b3_WRE2);
		//+++++ET[q]->Fill(E1,deltTOF2);

		if (deltTOF2<1.3 && cutg->IsInside(b3_EFW1,deltTOF2)){   
		  //E1E2t[q]->Fill(b3_EFW2,b3_EFW1); 
		  //E1E2i[q][w]->Fill((Float_t)b3_EFW2,(Float_t)b3_EFW1);

		  /*if (b3_EFW1<Ymin0[b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(Ymin0[b3_WLdet1][qd],b3_WLdet1,tta1);
		  if (b3_EFW1>=Ymin0[b3_WLdet1][qd] && b3_EFW1<=Ymax0[b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);
		  if (b3_EFW1>Ymax0[b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(Ymax0[b3_WLdet1][qd],b3_WLdet1,tta1);
		  
		  if (b3_EFW2<Xmin0[b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(Xmin0[b3_WLdet1][qp],b3_WLdet1,tta2);
		  if (b3_EFW2>=Xmin0[b3_WLdet1][qp] && b3_EFW2<=Xmax0[b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
		  if (b3_EFW2>Xmax0[b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(Xmax0[b3_WLdet1][qp],b3_WLdet1,tta2);*/
		  
		  if (b3_EFW1<3) Ddetec = b3_EFW1/d_scalning(3,b3_WLdet1,tta1);
		  if (b3_EFW1>=3 && b3_EFW1<=90) Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);
		  if (b3_EFW1>90) Ddetec = b3_EFW1/d_scalning(90,b3_WLdet1,tta1);
		  
		  if (b3_EFW2<10) Pdetec = b3_EFW2/p_scalning(10,b3_WLdet1,tta2);
		  if (b3_EFW2>=10 && b3_EFW2<=105) Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
		  if (b3_EFW2>105) Pdetec = b3_EFW2/p_scalning(105,b3_WLdet1,tta2);
		  
		  //+++Ddetec = dd_scalning(b3_EFW1,(int)b3_WLdet1);
		  //+++Pdetec = pp_scalning(b3_EFW2,(int)b3_WLdet2);

		  //Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);
		  //Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
		  //+he[q]->Fill(Pdetec,Ddetec);

		  if (q<3){
		    Ptarg = func1->Eval(Pdetec);
		    Dtarg = func2->Eval(Ddetec);
		    //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
		  }
		  if (q>=3){
		    Ptarg = func11->Eval(Pdetec);
		    Dtarg = func21->Eval(Ddetec);
		  }
		  //TOF1dd=8*R1/(C0*7*TMath::Sqrt(1-TMath::Power((md/(Dtarg+md)),2))+C0*TMath::Sqrt(1-TMath::Power((md/(Ddetec+md)),2)));
		  //////TOF1dd=R11/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg+md)),2)))+R12/(C0*TMath::Sqrt(1-TMath::Power((md/(Ddetec+md)),2)));
		  if (b3_EFW1>79) DelTOFe=0.;
		  else DelTOFe=Dtofe->Eval(b3_EFW1);
		  //		  cout << DelTOFe <<endl;
		  //DelTOFe=DelTOFe*.1;
		  double TOF2pr=TOF1dd-DelTOFe+tdc1t-tdc2t-TDC_shift((int)b3_WLdet1,(int)b3_WLdet2,pphi12);
		  double tofP0=R22/C0*TMath::Sqrt(1-TMath::Power((mp/(Pdetec0+mp)),2));
		  double Ptargn=mp*(1/(TMath::Sqrt(1-TMath::Power((R2/(C0*(TOF2pr/*-tofP0*/))),2)))-1);
		  //////ET[q]->Fill(b3_EFW1,TOF1dd);
		  // TDC_ratio[q]->Fill(TOF2pr);
		  //TDC_ratio_phi[q]->Fill(b3_MWPCphi1,TOF2pr);
		  he0[q]->Fill(Ptargn,Ptarg);
		  he[q]->Fill(Ptargn,Dtarg);
		  he1[q]->Fill(Ptarg,Dtarg);

		  ///+++he1[q]->Fill(Ptarg,Dtarg);
		  //cout << "d_scalning(b3_EFW1,b3_WLdet1,tta1)=" << d_scalning(b3_EFW1,b3_WLdet1,tta1) << '\t' << contrevent  << endl;
		  for(int j=0 ; j<Snr ; j++)
		    {
		      if (cut[q][j]->IsInside(Ptargn,Dtarg))
			{
			  value1=projectScut(Ptargn,Dtarg,j,q,corec);
			  ///+++sbin11[q][j]->Fill(b3_MWPCphi1,value1,dowscale/LT);
			  sbin1D[q][j]->Fill(value1,dowscale/LT);
			  /////sbinraw1D[q][j]->Fill(value1);
			  //cout <<dowscale << '\t' << LT << '\t' << dowscale/LT << endl;
			  //value1-=Dcorec->Eval(b3_MWPCphi1);
			  //+   sbin1[i][j]->Fill(b3_MWPCphi1,value1,b3_DowScalT1/LT);
			  //+   sbinraw1[i][j]->Fill(b3_MWPCphi1,value1);
			  
			  if(b3_Pol==31 && value1>-10/*6*/ && value1<10/*8*/) 
			    {
			      // EPhitemp31[q][j]->Fill(b3_EFW1,b3_MWPCphi1,dowscale/LT);
			      //EPhitempraw31[q][j]->Fill(b3_EFW1,b3_MWPCphi1);
			      Phi31pm[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
			      Phiraw31pm[q][j]->Fill(b3_MWPCphi1);
			      if (abs(Delphi-pphi12)<5)
				{
				  Phi31p[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw31p[q][j]->Fill(b3_MWPCphi1);
				}
			      if (abs(Delphi+pphi12)<5)
				{
				  Phi31m[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw31m[q][j]->Fill(b3_MWPCphi1);
				}
			    }
			  if(b3_Pol==27 && value1>-10/*6*/ && value1<10/*8*/) 
			    {
			      //EPhitemp27[q][j]->Fill(b3_EFW1,b3_MWPCphi1,dowscale/LT);
			      //EPhitempraw27[q][j]->Fill(b3_EFW1,b3_MWPCphi1);
			      Phi27pm[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
			      Phiraw27pm[q][j]->Fill(b3_MWPCphi1);
			      if (abs(Delphi-pphi12)<5)
				{
				  Phi27p[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw27p[q][j]->Fill(b3_MWPCphi1);
				}
			      if (abs(Delphi+pphi12)<5)
				{
				  Phi27m[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw27m[q][j]->Fill(b3_MWPCphi1);
				}
			    }
			  if(b3_Pol==13 && value1>-10/*6*/ && value1<10/*8*/)
			    {//<<--pol13
			      //EPhitemp13[q][j]->Fill(b3_EFW1,b3_MWPCphi1,dowscale/LT);
			      //EPhitempraw13[q][j]->Fill(b3_EFW1,b3_MWPCphi1);
			      Phi13pm[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
			      Phiraw13pm[q][j]->Fill(b3_MWPCphi1);
			      if (abs(Delphi-pphi12)<5)
				{
				  Phi13p[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw13p[q][j]->Fill(b3_MWPCphi1);
				}
			      if (abs(Delphi+pphi12)<5)
				{
				  Phi13m[q][j]->Fill(b3_MWPCphi1,dowscale/LT);
				  Phiraw13m[q][j]->Fill(b3_MWPCphi1);
				}
			    }//<<--Pol13
			  
			}
		    }
		}//<<--if of PID
	      }
	  }
      }//<<--<<--!
    if (b3_ID==2 && LT>0.1 && dowscale<100)
      {
    	ScalerCount+=1.;
	tempcharg+=b3_FC;
    	TotBeamC+=(double)b3_FC;
    	TotTime=b3_Time;   /* acomulating charge for given polarzation */ 
    	kHzPol+=b3_10kHZ;                           /* acomulating 10kHz for given polarzation */
	//++cout << "tempcharg=" << tempcharg  << '\t' << TotBeamC << '\t' << kHzPol << endl;	
	if(b3_Pol==31)
	  {
	    charge31+=(double)b3_FC;
	    kHz31+=b3_10kHZ;
	  }
	if(b3_Pol==27)
	  {
	    charge27+=(double)b3_FC;
	    kHz27+=b3_10kHZ;
	  }
	if(b3_Pol==13)
	  {
	    charge13+=(double)b3_FC;
	    kHz13+=b3_10kHZ;
	  }
      }
    }//-->>xran
    else {xran1=.9;}
  }
   TF1 *function1p=new TF1("function1p","[0]*(1+[1]*sqrt(3)*cos((x+180)*0.01745))",0,360);
   TF1 *function1m=new TF1("function1m","[0]*sqrt(3)*sin((x+180)*0.01745)",0,360);
   TF1 *function2p=new TF1("function2p","[0]*(1+[1]*0.0- [2]*(1./sqrt(8))-[3]*sqrt(3)*.5*cos(2.*(x+180)*0.01745))",0,360);
   TF1 *function2m=new TF1("function2m","(-1*[0]*sqrt(3)*.5*sin(2.*(x+180)*0.01745))",0,360);
  //printf("%f %f %f %f %f  \n", tempcharg, TotTime,b3_FC,tempcharg/(8.35*TotTime),10000*tempcharg/(8.35*kHzPol));
  //++RelativTime=TotTime-oldTime;
  //++ oldTime=TotTime;  
  double II= TotBeamC/(1e-4*kHzPol*8.35);
  double II31= charge31/(1e-4*kHz31*8.35);
  double II27= charge27/(1e-4*kHz27*8.35);
  double II13= charge13/(1e-4*kHz13*8.35);
  ///+++tempcharg=1e-4*kHzPol*(II+.5);
  outch << charge31 << '\t' << '\t' << charge27 << '\t' << '\t'  << charge13 << '\t' <<"II= " << II <<'\t'<<"II31= " << II31 <<'\t'<<"II27= " << II27 <<'\t'<<"II13= " << II13 <<endl;
  //+++ for(int q=0 ; q<Nkinema; q++)
    {  
      //+++for(int j=0 ; j<Snr ; j++)
	{ 
	  /**
	  for(int k=0;k<Phiraw31pm[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw31pm[q][j]->GetBinContent(k);
	      double error=Phiraw31pm[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi31pm[q][j]->GetBinContent(k);
		  Phi31pm[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw31p[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw31p[q][j]->GetBinContent(k);
	      double error=Phiraw31p[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi31p[q][j]->GetBinContent(k);
		  Phi31p[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw31m[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw31m[q][j]->GetBinContent(k);
	      double error=Phiraw31m[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi31m[q][j]->GetBinContent(k);
		  Phi31m[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw27pm[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw27pm[q][j]->GetBinContent(k);
	      double error=Phiraw27pm[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi27pm[q][j]->GetBinContent(k);
		  Phi27pm[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw27p[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw27p[q][j]->GetBinContent(k);
	      double error=Phiraw27p[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi27p[q][j]->GetBinContent(k);
		  Phi27p[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw27m[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw27m[q][j]->GetBinContent(k);
	      double error=Phiraw27m[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi27m[q][j]->GetBinContent(k);
		  Phi27m[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw13pm[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw13pm[q][j]->GetBinContent(k);
	      double error=Phiraw13pm[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi13pm[q][j]->GetBinContent(k);
		  Phi13pm[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw13p[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw13p[q][j]->GetBinContent(k);
	      double error=Phiraw13p[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi13p[q][j]->GetBinContent(k);
		  Phi13p[q][j]->SetBinError(k,newerror);
		}
	    }
	  for(int k=0;k<Phiraw13m[q][j]->GetNbinsX();k++)
	    {
	      double val=Phiraw13m[q][j]->GetBinContent(k);
	      double error=Phiraw13m[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*Phi13m[q][j]->GetBinContent(k);
		  Phi13m[q][j]->SetBinError(k,newerror);
		}
	    }**/

	  /*Phi31pm[q][j]->Scale(1./charge31);
	  Phi27pm[q][j]->Scale(1./charge27);
	  Phi13pm[q][j]->Scale(1./charge13);
	  Phi31p[q][j]->Scale(1./charge31);
	  Phi27p[q][j]->Scale(1./charge27);
	  Phi13p[q][j]->Scale(1./charge13);
	  Phi31m[q][j]->Scale(1./charge31);
	  Phi27m[q][j]->Scale(1./charge27);
	  Phi13m[q][j]->Scale(1./charge13);*/
	  //ratio27_31p[q][j]= new TH1D(*Phi27p[q][j]);
	  /**********************ratio27_31p[q][j]->Divide(Phi27p[q][j],Phi31p[q][j],1,1);//Divide(Phi31p[q][j]);
	  //ratio27_31m[q][j]= new TH1D(*Phi27m[q][j]);
	  ratio27_31m[q][j]->Divide(Phi27m[q][j],Phi31m[q][j],1,1);//Divide(Phi31m[q][j]);

	  //ratiosum27[q][j]= new TH1D(*ratio27_31p[q][j]);
	  //++++++ratiosum27[q][j]->Add(ratio27_31p[q][j],ratio27_31m[q][j],0.5,0.5);//Add(ratio27_31m[q][j],1);
	  //ratiosum27[q][j]->Scale(.5);
	  //ratiosub27[q][j]= new TH1D(*ratio27_31p[q][j]);
	  ratiosub27[q][j]->Add(ratio27_31p[q][j],ratio27_31m[q][j],0.5,-0.5);//Add(ratio27_31m[q][j],-1);
	  //ratiosub27[q][j]->Scale(.5);
	  
	  ratiosum27[q][j]->Divide(Phi27pm[q][j],Phi31pm[q][j],1,1);

	  //++function1p->SetParameters(1,0.1);
	  ///++function1p->FixParameter(0,1);
	  ratiosum27[q][j]->Fit(function1p,"Q");
	  double p0p=function1p->GetParameter(0);
	  double p1p=function1p->GetParameter(1);
	  double Ep1p=function1p->GetParError(1);
	  //++function1m->SetParameters(0);
	  ratiosub27[q][j]->Fit(function1m,"Q");
	  double p1m=function1m->GetParameter(0);
	  double Ep1m=function1m->GetParError(0);

	  //ratio13_31p[q][j]= new TH1D(*Phi13p[q][j]);
	  ratio13_31p[q][j]->Divide(Phi13p[q][j],Phi31p[q][j],1,1);//Divide(Phi31p[q][j]);
	  //ratio13_31m[q][j]= new TH1D(*Phi13m[q][j]);
	  ratio13_31m[q][j]->Divide(Phi13m[q][j],Phi31m[q][j],1,1);//Divide(Phi31m[q][j]);

	  //ratiosum13[q][j]= new TH1D(*ratio13_31p[q][j]);
	  //+++++++ratiosum13[q][j]->Add(ratio13_31p[q][j],ratio13_31m[q][j],0.5,0.5);//Add(ratio13_31m[q][j],1);
	  //ratiosum13[q][j]->Scale(.5);
	  ratiosub13[q][j]->Add(ratio13_31p[q][j],ratio13_31m[q][j],0.5,-0.5);//Add(ratio13_31m[q][j],1);

	  ratiosum13[q][j]->Divide(Phi13pm[q][j],Phi31pm[q][j],1,1);

	  //++function2p->SetParameters(1,0.0,0.04,0.01);
	  //function2p->FixParameter(0,1);
	  //++function2p->FixParameter(1,0);
	  ratiosum13[q][j]->Fit(function2p,"Q");
	  /////////////////Ks13[ko]=func1->GetChisquare()/func1->GetNDF();
	  double p20p=function2p->GetParameter(0);
	  double p2p=function2p->GetParameter(2);
	  double p3p=function2p->GetParameter(3);
	  double Ep2p=function2p->GetParError(2);
	  double Ep3p=function2p->GetParError(3);

	  //function2m->SetParameters(0.0);
	  ratiosub13[q][j]->Fit(function2m,"Q");
	  double p3m=function2m->GetParameter(0);
	  double Ep3m=function2m->GetParError(0);

	  cout << "P0=" << p0p << '\t' << "P20= " << p20p << "P02=" << p2p << endl;
	  iT11[q][j]=p1p/pz27;
	  EiT11[q][j]=Ep1p/(-pz27);
	  ImiT11[q][j]=p1m/pz27;
	  EImiT11[q][j]=Ep1m/(-pz27);
	  T20[q][j]= p2p/pzz13;
	  ET20[q][j]=Ep2p/(-pzz13);
	  T22[q][j]= p3p/pzz13;
	  ET22[q][j]=Ep3p/(-pzz13);
	  ImT22[q][j]= p3m/pzz13;
	  EImT22[q][j]=Ep3m/(-pzz13);
	  gr_iT11[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),iT11[q][j]);
	  gr_iT11[q]->SetPointError(j,0, EiT11[q][j]);
	  
	  gr_ImiT11[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),ImiT11[q][j]);
	  gr_ImiT11[q]->SetPointError(j,0, EImiT11[q][j]);
	  
	  gr_T20[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),T20[q][j]);
	  gr_T20[q]->SetPointError(j,0, ET20[q][j]);
	  
	  gr_T22[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),T22[q][j]);
	  gr_T22[q]->SetPointError(j,0, ET22[q][j]);

	  gr_ImT22[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),ImT22[q][j]);
	  gr_ImT22[q]->SetPointError(j,0, EImT22[q][j]);**************/

	  /*bm=sbin1D[q][j]->GetMaximumBin();
	  for(int k=0;k<sbin1D[q][j]->GetNbinsX();k++)
	    {
	      double val=sbinraw1D[q][j]->GetBinContent(k);
	      double error=sbinraw1D[q][j]->GetBinError(k);
	      if(val>0)
		{
		  double newerror=(error/val)*sbin1D[q][j]->GetBinContent(k);
		  sbin1D[q][j]->SetBinError(k,newerror);
		}
	    }
	    f21->SetNpx(sbin1D[q][j]->GetNbinsX());
	  f31->SetNpx(sbin1D[q][j]->GetNbinsX());
	  f22->SetNpx(sbinraw1D[q][j]->GetNbinsX());
	  f32->SetNpx(sbinraw1D[q][j]->GetNbinsX());*/
	  /*sprintf(cn1,"fnormD%d_%d_%d",tta_1[q],tta_2[q],Smin1[q]+(dss[q]/2)+(j*dss[q]));
	  sprintf(cn2,"frawD%d_%d_%d",tta_1[q],tta_2[q],Smin1[q]+(dss[q]/2)+(j*dss[q]));*/
	  /*TF1 *ff1= new TF1("cn1n","pol3(0)+gaus(4)",-15,20);
	  TF1 *ff2= new TF1("cn2n","pol3(0)+gaus(4)",-15,20);
	  Double_t par[7]={4,0,0,0,50,0,1}; 
	  ff1->SetParameters(par); 
	  sbin1D[q][j]->Fit(ff1,"Q","",-25,15);
	  ff2->SetParameters(par); 
	  sbinraw1D[q][j]->Fit(ff2,"Q","",-25,15);
	  Double_t param1[7];
	  ff1->GetParameters(param1);
	  f31->SetParameters(&param1[4]);
	  f21->SetParameters(&param1[0]);
	  Double_t param2[7];
	  ff2->GetParameters(param2);
	  f32->SetParameters(&param2[4]);
	  f22->SetParameters(&param2[0]);
	  sbin1D[q][j]->Add(f21,-1);
	  double sig1=sbin1D[q][j]->GetXaxis()->FindBin(f31->GetParameter(1)-3*fabs(f31->GetParameter(2)));
	  double sig2=sbin1D[q][j]->GetXaxis()->FindBin(f31->GetParameter(1)+3*fabs(f31->GetParameter(2)));
	  output[q][j] =(double) sbin1D[q][j]->Integral(sig1,sig2);
	  double sig1E=sbinraw1D[q][j]->GetXaxis()->FindBin(f32->GetParameter(1)-3*fabs(f32->GetParameter(2)));
	  double sig2E=sbinraw1D[q][j]->GetXaxis()->FindBin(f32->GetParameter(1)+3*fabs(f32->GetParameter(2)));
	  cout << "sig1= " << sig1 << '\t' << "sig2= " << sig2 << '\t' << q << '\t' << j << endl;
	  cout << "sig1E= " << sig1E << '\t' << sig2E << '\t' << q << '\t' << j << endl;*/
	  //double count11=1.;//(double)sbinraw1D[q][j]->Integral(sig1E,sig2E);
	  //	  sbinraw1D[q][j]->Add(f22,-1);
	  //double count12=1.;//(double)sbinraw1D[q][j]->Integral(sig1E,sig2E);
	  /*sbin1D[q][j]->Fit("ff","","",-15,+20);
	  bg=ff->GetParameter(0);
	  bm=ff->GetParameter(1);
	  bn=ff->GetParameter(2);
	  double sig1=sbin1D[q][j]->GetXaxis()->FindBin(bm-3*bn);
	  double sig2=sbin1D[q][j]->GetXaxis()->FindBin(bm+3*bn);
	  double countgaus =(double) sbin1D[q][j]->Integral(sig1,sig2);
	  //double bmE=sbinraw1D[j]->GetMaximumBin();
	  sbinraw1D[q][j]->Fit("ff","Q","",-15,+20);
	  bgE=ff->GetParameter(0);
	  bmE=ff->GetParameter(1);
	  bnE=ff->GetParameter(2);
	  double sig1E=sbinraw1D[q][j]->GetXaxis()->FindBin(bmE-3*bnE);
	  double sig2E=sbinraw1D[q][j]->GetXaxis()->FindBin(bmE+3*bnE);
	  double countgausE =(double) sbinraw1D[q][j]->Integral(sig1E,sig2E);*/
	  //double countgaus =(double) ff->Integral(bm-3*bn,bm+3*bn);
	  //double  ct = 1./(3.75872);            /*constant*/
	  //double   dx = (3.35 + 0.65)*0.1*0.169*1000; /* 0.65 ballging --target thickness mg/cm2 Density off D =0.169 (g/cm3)*/
	  //double   n_atom = 2.; /* number of atoms per compond molecule*/
	  //double  m_mol = 4.028;    /* target weight in amu*/
	  //double  a = n_atom/m_mol;
	  //double omega1=(2.*D2R*(10.*D2R)*sin(tta1*D2R));/*sr*/
	  //double omega2=(2.*D2R*(360.*D2R)*sin(tta2*D2R));/*sr*/
	  //double deno = a*dx*omega1*omega2*dss[q];//deltaS;
	  //double  AUB= (ct)/(deno);
	  //cross[q][j]=(AUB*output[q][j]/(1e-3*tempcharg/8.35325));
	  //cross[q][j]=(AUB*countgaus/(1e-3*tempcharg/8.35325));
	  //cross[q][j]=cross[q][j]/(.84*.90*.99*.97);
	  /*Ercross[q][j]=(AUB*sqrt(countgausE)/(1e-3*tempcharg/8.35325));
	  Ercross[q][j]=Ercross[q][j]/(.84*.90*.99*.97);*/
	  //Ercross[q][j]=cross[q][j]*sqrt(count11)/count12;
	  //cout << "cross[q][j]= " << cross[q][j] << "Ercross[q][j]= " << Ercross[q][j] << '\t' << q << '\t' << j << endl;
	  //gr_Cro[q]->SetPoint(j,(Smin1[q]+(dss[q]/2)+(j*dss[q])),cross[q][j]);
	  //gr_Cro[q]->SetPointError(j,0, Ercross[q][j]);
	}
    }
  cout << "charge31= " << charge31 << '\t' << "charge27= " << charge27 << '\t' << "charge13= " << charge13 << '\t' <<"II= " << II <<'\t'<<"II31= " << II31 <<'\t'<<"II27= " << II27 <<'\t'<<"II13= " << II13 <<endl;
  f->cd();
  ps->Close();
  // cutg->Write();
  for (int i=0;i<Nkinema;i++){
    //++p1p2[i]->Write();
    //++p1p2dep[i]->Write();
    //TDC_ratio_phi[i]->Write();
    //TDC_ratio[i]->Write();
    // ET[i]->Write();
    he0[i]->Write();
    he[i]->Write();
    he1[i]->Write();
     for (int j=0;j<Snr;j++){
      	  Phi31pm[i][j]->Write();
	  Phiraw31pm[i][j]->Write();
	  Phi27pm[i][j]->Write();
	  Phiraw27pm[i][j]->Write();
	  Phi13pm[i][j]->Write();
	  Phiraw13pm[i][j]->Write();
	  Phi31p[i][j]->Write();
	  Phiraw31p[i][j]->Write();
	  Phi27p[i][j]->Write();
	  Phiraw27p[i][j]->Write();
	  Phi13p[i][j]->Write();
	  Phiraw13p[i][j]->Write();
	  Phi31m[i][j]->Write();
	  Phiraw31m[i][j]->Write();
	  Phi27m[i][j]->Write();
	  Phiraw27m[i][j]->Write();
	  Phi13m[i][j]->Write();
	  Phiraw13m[i][j]->Write();
    }
	  /*gr_iT11[i]->Write();
    gr_ImiT11[i]->Write();
    gr_T20[i]->Write();
    gr_T22[i]->Write();
    gr_ImT22[i]->Write();*/
  }
  for (int i=0;i<Nkinema;i++){
    for (int j=0;j<Snr;j++){
      //++ ratiosum27[i][j]->Write();
      //++ratiosub27[i][j]->Write();
      //++ratiosum13[i][j]->Write();
      //sbin11[i][j]->Write();
      sbin1D[i][j]->Write();
      cut[i][j]->Write();
    }
  }
  /*for (int i=0;i<Nkinema;i++){
  //E1E2ta[i]->Write();
  for (int j=1;j<11;j++){
  //E1E2ia[i][j]->Write();
  //E1E2i[i][j]->Write();
  E1E2idetec[i][j]->Write();
  E1E2itarg[i][j]->Write();
  }
  }*/
  //h22->Write();
  //h000->Write();
  //////  gr_Cro->Write();
  f->Close();
}

    //==========--------  FUNCTIONS  ---------=========//
double pp_scalning(double x ,int i)
{

  double E1;
 
   double p1p[11]={0.0,1.03114e+00,1.02186e+00,1.01379e+00,1.00901e+00,1.14116e+00,1.18719e+00,1.01289e+00,1.17155e+00,1.02336e+00,1.03931e+00};
  double p2p[11]={0.0,8.37156e-04,7.79199e-04,7.05292e-04,6.99657e-04,-4.76056e-04,-7.48614e-04,6.66924e-04,-7.53701e-04,7.94843e-04,9.63563e-04};
  
  E1=0.0;
  
    E1=(sqrt(1+4*x*p2p[i]/p1p[i])-1.0)/(2.0*p2p[i]);
  
return E1;
}

double dd_scalning(double y ,int i)
{
 
   double p1d[11]={0.0,7.91892e-01,7.36947e-01,7.35129e-01,7.19197e-01,5.91244e-01,5.67824e-01,7.28194e-01,6.05242e-01,7.45787e-01,8.03423e-01};
  double p2d[11]={0.0,2.99735e-03,3.96421e-03,3.59499e-03,3.65988e-03,6.59518e-03,7.47618e-03,3.80554e-03,6.70629e-03,4.17246e-03,2.56402e-03};

  double E2;
  E2==0.0;
  E2=(sqrt(1+4*y*p2d[i]/p1d[i])-1.0)/(2.0*p2d[i]);
  return E2;
}



/*   double p_scalning(double x ,int i, double thet)
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
    sprintf(namep1[k],"gr_p1p2_%d_%d_%d",(int)tta_1[k],(int)tta_2[k],(int)phi12[k]);
    sprintf(namep2[k],"gr_p1p2dep_%d_%d_%d",(int)tta_1[k],(int)tta_2[k],(int)phi12[k]);
    p1p2[k] = new TGraphErrors(10000);
    p1p2[k]->SetName(namep1[k]);
    p1p2[k]->SetMarkerStyle(k+1);
    p1p2[k]->SetMarkerColor(k+1);
    p1p2dep[k] = new TGraphErrors(10000);
    p1p2dep[k]->SetName(namep2[k]);
    p1p2dep[k]->SetMarkerStyle(k+1);
    p1p2dep[k]->SetMarkerColor(k+1);
    //p1s[k] = new TGraphErrors(10000);
    /* if (k==0){p1p2[k]->SetName("p1p2_0"); p1p2dep[k]->SetName("p1p2dep_0");}
    if (k==1){p1p2[k]->SetName("p1p2_1"); p1p2dep[k]->SetName("p1p2dep_1");}
    if (k==2){p1p2[k]->SetName("p1p2_2"); p1p2dep[k]->SetName("p1p2dep_2");}
    if (k==3){p1p2[k]->SetName("p1p2_3"); p1p2dep[k]->SetName("p1p2dep_3");}
    if (k==4){p1p2[k]->SetName("p1p2_4"); p1p2dep[k]->SetName("p1p2dep_4");}
    if (k==5){p1p2[k]->SetName("p1p2_5"); p1p2dep[k]->SetName("p1p2dep_5");}
    if (k==6){p1p2[k]->SetName("p1p2_6"); p1p2dep[k]->SetName("p1p2dep_6");}
    if (k==7){p1p2[k]->SetName("p1p2_7"); p1p2dep[k]->SetName("p1p2dep_7");}
    if (k==8){p1p2[k]->SetName("p1p2_8"); p1p2dep[k]->SetName("p1p2dep_8");}*/


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
      //if (ES2[k][l]>26 && ES1[k][l]>22.8 && ES1[k][l]<23) Smin1[k]=Scu[k][l];
      //if (ES1[k][l]>25 && ES2[k][l]<30.3 && ES2[k][l]>30) Smax1[k]=Scu[k][l];
      Smin1[k]=140;//130;
      Smax1[k]=280;
      ///if (ES2[k][l]>30 && ES1[k][l]>24.8 && ES1[k][l]<=25) Smin2[k]=Scu[k][l];
      ///if (ES1[k][l]>25 && ES2[k][l]<=30.1 && ES2[k][l]>29.9) Smax2[k]=Scu[k][l];
      if (ES1[k][l]>10 && ES2[k][l]>10){
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
  //for (int k=0; k<Nkinema;k++)cout << Smin1[k] << '\t' << Smax1[k] << '\t' << k << endl;
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
  /****  for (int i=0;i<Nkinema;i++){
    sprintf(namegr[i],"gr_crsection_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_Cro[i] = new TGraphErrors();
    gr_Cro[i]->SetName(namegr[i]);
    gr_Cro[i]->SetMarkerStyle(i+1);
    gr_Cro[i]->SetMarkerColor(i+1);
    sprintf(namegr1[i],"gr_iT11_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_iT11[i] = new TGraphErrors();
    gr_iT11[i]->SetName(namegr1[i]);
    gr_iT11[i]->SetMarkerStyle(20);
    gr_iT11[i]->SetMarkerColor(4);

    sprintf(namegr2[i],"gr_ImiT11_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_ImiT11[i] = new TGraphErrors();
    gr_ImiT11[i]->SetName(namegr2[i]);
    gr_ImiT11[i]->SetMarkerStyle(20);
    gr_ImiT11[i]->SetMarkerColor(4);

    sprintf(namegr3[i],"gr_T20_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_T20[i] = new TGraphErrors();
    gr_T20[i]->SetName(namegr3[i]);
    gr_T20[i]->SetMarkerStyle(20);
    gr_T20[i]->SetMarkerColor(4);

    sprintf(namegr4[i],"gr_T22_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_T22[i] = new TGraphErrors();
    gr_T22[i]->SetName(namegr4[i]);
    gr_T22[i]->SetMarkerStyle(20);
    gr_T22[i]->SetMarkerColor(4);

    sprintf(namegr5[i],"gr_ImT22_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_ImT22[i] = new TGraphErrors();
    gr_ImT22[i]->SetName(namegr5[i]);
    gr_ImT22[i]->SetMarkerStyle(20);
    gr_ImT22[i]->SetMarkerColor(4);
  }
       cc->Size(27,18);
      cc->SetFillColor(10);
      cc->SetBottomMargin(.15);
      cc->SetLeftMargin(.15);****/
  for (int i=0;i<Nkinema;i++){
    sprintf(name20[i],"TDC_ratio_phi_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    TDC_ratio_phi[i] = new TH2D (name20[i],"",360,0,360,160,-20,20);
    sprintf(name21[i],"TDC_ratio_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    TDC_ratio[i]=new TH1D(name21[i],";TOF_p - TOF_d [channel];Counts",200,-20,20);
    sprintf(name22[i],"E_DelTDC_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    ET[i] = new TH2D (name22[i],"",2048,0,2*1024,2500,-500,2000);
    sprintf(name23[i],"E1E2_detecto_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he[i] = new TH2D (name23[i],"",150,0,150,150,0,150);
    sprintf(name24[i],"E1E2_target_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he1[i] = new TH2D (name24[i],"",150,0,150,150,0,150);
    sprintf(name23c[i],"E1E2_precalib_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he0[i] = new TH2D (name23c[i],"",150,0,150,150,0,150);
  }
  
   for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	//sprintf(name25[i][j],"sbin_phi_%d_%d",i,j);
	sprintf(name55[i][j],"sbin1D_%d_%d",i,j);
	//sprintf(nameE[i][j],"sbinraw1_%d_%d",i,j);
	//sbin11[i][j]= new TH2D(name25[i][j],";#phi_{d} [deg];D [MeV]",360,0,360,60,-30,30);
	sbin1D[i][j]= new TH1D(name55[i][j],";D [MeV]",60,-30,30);
	//sbinraw1D[i][j]= new TH1D(nameE[i][j],";D [MeV]",60,-30,30);
      }
  }
  /*  for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	sprintf(car1[i][j],"EPhitemp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car2[i][j],"EPhitempraw%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car3[i][j],"EPhitemp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car4[i][j],"EPhitempraw%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car5[i][j],"EPhitemp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	sprintf(car6[i][j],"EPhitempraw%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	EPhitemp31[i][j]= new TH2D (car1[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitempraw31[i][j]= new TH2D (car2[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitemp27[i][j]= new TH2D (car3[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitempraw27[i][j]= new TH2D (car4[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitemp13[i][j]= new TH2D (car5[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitempraw13[i][j]= new TH2D (car6[i][j],"pol;E[MeV];phi",150,0,150,360,0,360);
	EPhitemp31[i][j]->Sumw2();
	EPhitempraw31[i][j]->Sumw2();
	EPhitemp27[i][j]->Sumw2();
	EPhitempraw27[i][j]->Sumw2();
	EPhitemp13[i][j]->Sumw2();
	EPhitempraw13[i][j]->Sumw2();
      }
  }*/
  for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	sprintf(car7pm[i][j],"Phipm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car8pm[i][j],"Phirawpm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car9pm[i][j],"Phipm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car10pm[i][j],"Phirawpm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car11pm[i][j],"Phipm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	sprintf(car12pm[i][j],"Phirawpm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	Phi31pm[i][j]= new TH1D (car7pm[i][j],"pol;phi",Nbin,0,360);
	Phiraw31pm[i][j]= new TH1D (car8pm[i][j],"pol;phi",Nbin,0,360);
	Phi27pm[i][j]= new TH1D (car9pm[i][j],"pol;phi",Nbin,0,360);
	Phiraw27pm[i][j]= new TH1D (car10pm[i][j],"pol;phi",Nbin,0,360);
	Phi13pm[i][j]= new TH1D (car11pm[i][j],"pol;phi",Nbin,0,360);
	Phiraw13pm[i][j]= new TH1D (car12pm[i][j],"pol;phi",Nbin,0,360);
	Phi31pm[i][j]->Sumw2();
	//Phiraw31pm[i][j]->Sumw2();
	Phi27pm[i][j]->Sumw2();
	//Phiraw27pm[i][j]->Sumw2();
	Phi13pm[i][j]->Sumw2();
	//Phiraw13pm[i][j]->Sumw2();
      }
  }
  for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	sprintf(car7[i][j],"Phip%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car8[i][j],"Phirawp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car9[i][j],"Phip%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car10[i][j],"Phirawp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car11[i][j],"Phip%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	sprintf(car12[i][j],"Phirawp%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	Phi31p[i][j]= new TH1D (car7[i][j],"pol;phi",Nbin,0,360);
	Phiraw31p[i][j]= new TH1D (car8[i][j],"pol;phi",Nbin,0,360);
	Phi27p[i][j]= new TH1D (car9[i][j],"pol;phi",Nbin,0,360);
	Phiraw27p[i][j]= new TH1D (car10[i][j],"pol;phi",Nbin,0,360);
	Phi13p[i][j]= new TH1D (car11[i][j],"pol;phi",Nbin,0,360);
	Phiraw13p[i][j]= new TH1D (car12[i][j],"pol;phi",Nbin,0,360);
	Phi31p[i][j]->Sumw2();
	//Phiraw31p[i][j]->Sumw2();
	Phi27p[i][j]->Sumw2();
	//Phiraw27p[i][j]->Sumw2();
	Phi13p[i][j]->Sumw2();
	//Phiraw13p[i][j]->Sumw2();
      }
  }

  for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	sprintf(car13[i][j],"Phim%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car14[i][j],"Phirawm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],31,j);
	sprintf(car15[i][j],"Phim%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car16[i][j],"Phirawm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],27,j);
	sprintf(car17[i][j],"Phim%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	sprintf(car18[i][j],"Phirawm%d_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],13,j);
	Phi31m[i][j]= new TH1D (car13[i][j],"pol;phi",Nbin,0,360);
	Phiraw31m[i][j]= new TH1D (car14[i][j],"pol;phi",Nbin,0,360);
	Phi27m[i][j]= new TH1D (car15[i][j],"pol;phi",Nbin,0,360);
	Phiraw27m[i][j]= new TH1D (car16[i][j],"pol;phi",Nbin,0,360);
	Phi13m[i][j]= new TH1D (car17[i][j],"pol;phi",Nbin,0,360);
	Phiraw13m[i][j]= new TH1D (car18[i][j],"pol;phi",Nbin,0,360);
	Phi31m[i][j]->Sumw2();
	//Phiraw31m[i][j]->Sumw2();
	Phi27m[i][j]->Sumw2();
	//Phiraw27m[i][j]->Sumw2();
	Phi13m[i][j]->Sumw2();
	//Phiraw13m[i][j]->Sumw2();
      }
  }
  /****   for (int i=0;i<Nkinema;i++){
    for(int j=0 ; j<Snr ; j++)
      {
	sprintf(car19[i][j],"ratio27_31p%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	sprintf(car20[i][j],"ratio27_31m%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	sprintf(car21[i][j],"ratio13_31p%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	sprintf(car22[i][j],"ratio13_31m%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);

	ratio27_31p[i][j]= new TH1D (car19[i][j],"countStrong/countOff;MWPCphi ",36,0,360);
	ratio27_31m[i][j]= new TH1D (car20[i][j],"countStrong/countOff;MWPCphi ",36,0,360);
	ratio13_31p[i][j]= new TH1D (car21[i][j],"countStrong/countOff;MWPCphi ",36,0,360);
	ratio13_31m[i][j]= new TH1D (car22[i][j],"countStrong/countOff;MWPCphi ",36,0,360);
	ratio27_31p[i][j]->Sumw2();
	ratio27_31m[i][j]->Sumw2();
	ratio13_31p[i][j]->Sumw2();
	ratio13_31m[i][j]->Sumw2();
	sprintf(car23[i][j],"ratiosum27%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	sprintf(car24[i][j],"ratiosub27%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	ratiosum27[i][j]= new TH1D (car23[i][j],"cntStgP+cntStgM/2;MWPCphi ",36,0,360);
	ratiosub27[i][j]= new TH1D (car24[i][j],"cntStgM-cntStgP/2;MWPCphi ",36,0,360);
	ratiosum27[i][j]->Sumw2();
	ratiosub27[i][j]->Sumw2();
	sprintf(car25[i][j],"ratiosum13%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	ratiosum13[i][j]= new TH1D (car25[i][j],"cntStgP+cntStgM/2;MWPCphi ",36,0,360);
	ratiosum13[i][j]->Sumw2();
	sprintf(car26[i][j],"ratiosub13%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
	ratiosub13[i][j]= new TH1D (car26[i][j],"cntStgP+cntStgM/2;MWPCphi ",36,0,360);
	ratiosub13[i][j]->Sumw2();
      }
    }****/


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
/*Projects the energy on the axis perpendicular to the Scurve*/
double projectScut(float Ex,float Ey,int bin,int kin,double *corec){
  float E11,E12,E22,E21;
  // mid_diff[Nkinema][Snr];
   E11=Sbon1[kin][bin];     E12=Sbon2[kin][bin];
  E21=Sbon3[kin][bin];     E22=Sbon4[kin][bin];
  float m=(E22-E12)/(E21-E11);       /*line slop*/
  float b=E12-m*E11;
  float h=(m*Ex+b-Ey)/(sqrt(1+m*m));

  corec[0] = h/(sqrt(1+m*m)); /* Ex offset from kinematic line */
  corec[1] = h/(sqrt(1+1./(m*m)));/* Ey offset from kinematic line */
  // mid_diff[kin][bin] =  TOF_p->Eval(abs(E21-E11)/2.) -  TOF_d->Eval(abs(E22-E12)/2.);
  // TDC_corec[kin][bin] = 1.*((TOF_p->Eval(Ex+ corec[0]) -  TOF_d->Eval(Ey + corec[1])) -  mid_diff[kin][bin]);
  ///corec[2] = mid_diff[kin][bin];
  /* the 2 is for changing the ns to channel */


  //   fprintf(stdout,"kin %d bin %d  m %f b %f h %f E11 %f E12 %f  E21 %f  E22 %f \n",
  //   kin,bin,m,b,h,E11,E12,E21,E22);
  return -1.0*h;
}
/*This defines the scuts */
int Define_GCuts(){
  float m,m1,m2,y1,y2,y3,y4,x1,x2,x3,x4;
  float s1,s2,ds,tmps1,tmps2,tmps10,tmps20,tmps11,tmps21,E11,E12,E21,E22,E211,E221,E110,E120,E210,E220,E111,E121;
  E11=E12=E21=E22=E110=E120=E210=E220=E111=E121=E211=E221=0.0;
  char cha[Snr][250];
  //++++++ds=(Smax-Smin)/Snr;
  /*define Gcuts*/
  for (int k=0 ; k<Nkinema ; k++){ds=0.;
    dss[k]=(Smax1[k]-Smin1[k])/Snr;
    ds=(Smax1[k]-Smin1[k])/Snr;
    /*defining the GCuts*/
    for(int count=0;count<Snr;count++){
      tmps1=tmps2=tmps10=tmps20=tmps11=tmps21=0;
      s1=Smin1[k]+count*ds; s2=s1+ds;
      for(int i=1;i<10000;i++){
	if ( Scu[k][i]>0 && Scu[k][i]>tmps10 && Scu[k][i]<(s1-ds/10)){
	  tmps10=Scu[k][i]; E110=ES1[k][i]; E120=ES2[k][i];
	}
	if ( Scu[k][i]>0 && Scu[k][i]>tmps1 && Scu[k][i]<s1){
	  tmps1=Scu[k][i]; E11=ES1[k][i]; E12=ES2[k][i];
	}
	if ( Scu[k][i]>0 && Scu[k][i]>tmps11 && Scu[k][i]<(s1+ds/10)){
	  tmps11=Scu[k][i]; E111=ES1[k][i]; E121=ES2[k][i];
	}
	if (Scu[k][i]>tmps20 && Scu[k][i]<(s2-ds/10)){
	  tmps20=Scu[k][i]; E210=ES1[k][i]; E220=ES2[k][i];
	}
	if (Scu[k][i]>tmps2 && Scu[k][i]<s2){
	  tmps2=Scu[k][i]; E21=ES1[k][i]; E22=ES2[k][i];
	}
	if (Scu[k][i]>tmps21 && Scu[k][i]<(s2+ds/10)){
	  tmps21=Scu[k][i]; E211=ES1[k][i]; E221=ES2[k][i];
	}

      }

      Sbon1[k][count]=E11;     Sbon2[k][count]=E12;
      Sbon3[k][count]=E21;     Sbon4[k][count]=E22;
      Emid1[k][count] = (E11+E21)/2.0;
      Emid2[k][count] = (E12+E22)/2.0;
      m=(E22-E12)/(E21-E11);       /*line slop*/
      m1=(E121-E120)/(E111-E110);       /*line slop*/
      m2=(E221-E220)/(E211-E210);       /*line slop*/
      /* y1=0;         x1=E21+m*E22;
      y2=0;         x2=E11+m*E12;
      y3=E12-E11/m; x3=2*E11;
      y4=2*E22;     x4=E21-m*E22;*/
      y1=0;         x1=E21+m2*E22;
      y2=0;         x2=E11+m1*E12;
      y3=E12-E11/m1; x3=2*E11;
      y4=2*E22;     x4=E21-m2*E22;
      float x[5] = {x1,x2,x3,x4,x1};    
      float y[5] = {y1,y2,y3,y4,y1};
      sprintf(cha[0],"cut%dthe%d",k,count);
      cut[k][count] = new TCutG(cha[0],5,x,y);
      if (!cut[k][count]) return 0;
    }/*finished defining the GCuts*/
  }
  fprintf(stdout,"Booking the Gcuts finished\n");
  return 1;
}

double  TDC_shift(int det1, int det2,double phi)
{
  // double shift[11]={0.0, -0.1, 6.94, 3.0, 9.2, 2.25, 8.4, 1.3, 7.83, 0.94, 7.95}; /* benchmark */
  double shift[11][11];
  for(int i=1 ; i<11 ; i++)
    {
      for(int j=1 ; j<11 ; j++)
	{
	  shift[i][j] = 0.0;
	}
    }
  shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.5;
  shift[2][8] = -1.1;
  shift[2][9] = -1.35;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30+1.5;
  shift[7][2] = 1.6;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74+.5;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;
  /*************/
  if(phi==160)
    {

 shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.5;
  shift[2][8] = -1.1;
  shift[2][9] = -1.35;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30+.8;
  shift[7][2] = 1.6;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74+.5;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;

      shift[5][7] = -2.2;
      shift[6][4] = -2.6;
    }
 else if(phi==140)
    {
 shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.9;
  shift[2][8] = -1.1;
  shift[2][9] = -1.1;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30+.8;
  shift[7][2] = 1.25;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74+.5;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[8][6] = 0.90;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;

      shift[2][7] = -2.1;
      shift[4][3] = -1.0;
      shift[4][9] = -0.22;
      shift[5][3] = -1.4;
      shift[5][7] = -2.6;
      shift[6][2] = -1.6;
      shift[6][8] = -2.4;
      shift[8][1] = -1.48;
      shift[4][5] = -0.20;
      shift[4][6] = 0.62;
      shift[4][8] = -0.46;
    }
  

  return (shift[det1][det2]+.9);
} 

//==double TDC_shift(int i)
//=={
  /* 28-28-180 */
  //double shift[11]={ 0.0,-2.27739e+01,-2.65366e+01,-2.47249e+01,-2.78352e+01,-2.57609e+01,-2.88856e+01,-2.39853e+01,-2.71370e+01, -2.35108e+01,-2.63947e+01};
/* 25-25-180 */
  //double shift[11]={0.0,-2.58252e+01,-2.58986e+01,-2.42062e+01,-2.72390e+01,-2.54434e+01,-2.84678e+01,-2.35366e+01,-2.65477e+01,-2.30142e+01,-2.55401e+01};
//== double shift[11]={0.0, -0.1, 6.94, 3.0, 9.2, 2.25, 8.4, 1.3, 7.83, 0.94, 7.95}; /* benchmark */
  // double shift[11]={0.0, 2.75, 4.25, 2.75, 3.38, 4.9 , 5.0, 2.25, 4.25, 4.25, 3.75};
//==return  shift[i];
//==}
/*the way of useing TDC-shif(i)*/
/*double Time = 0.25*((b3_WLtdc1+b3_WRtdc1)-(b3_WLtdc2+b3_WRtdc2) + TDC_shift(b3_WLdet1));
double Timeratio1 = Time + (TOF_d1 - TOF_p1);*/

//*other correction for tdc_ratio*//
/*TF1 *fcorec1=new TF1("fcorec1"," (-1.1*cos((3.14/180.)*x))**2",0,360);
TF1 *fcorec2=new TF1("fcorec2"," (-1.1*cos((3.14/180.)*x))**2",0,360);
double Time =0.25*((b3_WLtdc1+b3_WRtdc1)-(b3_WLtdc2+b3_WRtdc2+ TDC_shift(b3_WLdet1)));
double Timeratio1 = Time/(TOF_d1 - TOF_p1);
Timeratio1 += -1 -fcorec1->Eval(b3_MWPCphi1);*/

/*TDC_clibration*/
/*ouble findshift(double T, int det1, int det2, TH2D *his)
{
  int num1[11][11];
  int num2[11][11];
  for(int i=1 ; i<11 ; i++)
    {
      for(int j=1 ; j<11 ; j++)
	{
	  if(i<10 && j<10)
	    {
	      num1[i][j] = i*10 + j;
	      num2[j][i] = j*10 + i;
	    }
	  if(i==10 || j==10)
	    {
	      num1[i][j] = i*100 + j;
	      num2[j][i] = j*100 + i;
	    }
	  if(det1==i && det2==j)
	    his->Fill(num1[i][j],T);
	  if(det1==j && det2==i)
	    his->Fill(num2[j][i],T);
	  //printf("1)%d %d %d \n",i,j,num1[i][j]);
	  //printf("2)%d %d %d \n",j,i,num2[j][i]);
	}
    }
}*/

 /*
   double Time = 0.25*((b3_WLtdc1+b3_WRtdc1)-(b3_WLtdc2+b3_WRtdc2)) ;
   double Timeratio1 = Time + (TOF_d1 - TOF_p1);
   Timeratio1 -= TDC_shift((int)b3_WLdet1,(int)b3_WLdet2);
   
   htest1->Fill(Time,(TOF_d1 - TOF_p1));
   findshift(Timeratio1,b3_WLdet1,b3_WLdet2,timedet[i]);
   timedet[i] = new TH2D (name22[i],"",1005,10,1015,160,-20,20);
 */
