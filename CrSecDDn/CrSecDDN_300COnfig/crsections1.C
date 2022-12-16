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
double dlF1=0.,dlF2=0.,dtta=1.;
double bmx=0.;
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
   cutg->SetPoint(11,81.4279,0.839844);
   cutg->SetPoint(12,82.5279,1.10983);
   cutg->SetPoint(13,85.5135,1.48782);
   cutg->SetPoint(14,96.2847,2.148782);
   cutg->SetPoint(15,122.126,1.48782);
   cutg->SetPoint(16,121.969,-15.3596);
   cutg->SetPoint(17,-0.12571,-15.3596);
   cutg->SetPoint(18,0.188562,-3.75);
   cutg->SetPoint(19,-0.12571,-3.75);
   ///////cut for Deltheta==\pm 1 in crsection
   TCutG *cutgpm1 = new TCutG("CUTGpm1",17);
   cutgpm1->SetVarX("b3_EFW1");
   cutgpm1->SetVarY("deltTOF2");
   cutgpm1->SetTitle("Graph");
   cutgpm1->SetFillColor(1);
   cutgpm1->SetPoint(0,0.229884,-3.29688);
   cutgpm1->SetPoint(1,2.24138,-2.4375);
   cutgpm1->SetPoint(2,6.12069,-0.465993);
   cutgpm1->SetPoint(3,11.7241,1);
   cutgpm1->SetPoint(4,18.6207,1.60662);
   cutgpm1->SetPoint(5,21.3506,1.75827);
   cutgpm1->SetPoint(6,29.5402,1.85938);
   cutgpm1->SetPoint(7,38.0172,1.80882);
   cutgpm1->SetPoint(8,51.2356,1.55607);
   cutgpm1->SetPoint(9,59.4253,1.45496);
   cutgpm1->SetPoint(10,77.074,1.35386);
   cutgpm1->SetPoint(11,83.2759,1.9040441);
   cutgpm1->SetPoint(12,95.2069,2.9621324);
   cutgpm1->SetPoint(13,119.483,2.60662);
   cutgpm1->SetPoint(14,119.339,-11.2335);
   cutgpm1->SetPoint(15,0.229884,-11.9412);
   cutgpm1->SetPoint(16,0.229884,-3.29688);
   ////cut for pd combinationa Un symmetric config for Deltheta==\pm 1 inc srsec
   TCutG *cutgpdUnSymm = new TCutG("cutgpdUnSymm",11);
   cutgpdUnSymm->SetVarX("b3_EFW1");
   cutgpdUnSymm->SetVarY("deltTOF3");
   cutgpdUnSymm->SetTitle("Graph");
   cutgpdUnSymm->SetFillColor(1);
   cutgpdUnSymm->SetPoint(0,0.435296,-5.95198);
   cutgpdUnSymm->SetPoint(1,3.98216,-3.65303);
   cutgpdUnSymm->SetPoint(2,8.98001,-1.98828);
   cutgpdUnSymm->SetPoint(3,15.7513,-0.957721);
   cutgpdUnSymm->SetPoint(4,24.9409,-0.799173);
   cutgpdUnSymm->SetPoint(5,72.3399,-1.67119);
   cutgpdUnSymm->SetPoint(6,78.1438,-1.51264);
   cutgpdUnSymm->SetPoint(7,123.286,-0.640625);
   cutgpdUnSymm->SetPoint(8,123.286,21.1597);
   cutgpdUnSymm->SetPoint(9,0.435296,21.0804);
   cutgpdUnSymm->SetPoint(10,0.435296,-5.95198);

   /////cut for pd combination
   TCutG *cutgPD = new TCutG("CUTGPD",11);
   cutgPD->SetVarX("b3_EFW1");
   cutgPD->SetVarY("deltTOF2");
   cutgPD->SetTitle("Graph");
   cutgPD->SetFillColor(1);
   cutgPD->SetPoint(0,0.149203,-3.03483);
   cutgPD->SetPoint(1,3.79642,-0.233063);
   cutgPD->SetPoint(2,8.93568,1.89241);
   cutgPD->SetPoint(3,16.5617,2.76193);
   cutgPD->SetPoint(4,29.3269,2.76193);
   cutgPD->SetPoint(5,66.2964,2.76193);
   cutgPD->SetPoint(6,86.5219,2.76193);
   cutgPD->SetPoint(7,130.952,3.53483);
   cutgPD->SetPoint(8,132.941,30.0556);
   cutgPD->SetPoint(9,-0.0165794,30.1522);
   cutgPD->SetPoint(10,0.149203,-3.03483);


   TCutG *cutgx = new TCutG("CUTGx",5);
   cutgx->SetVarX("b3_EFW1");
   cutgx->SetVarY("deltTOF2");
   cutgx->SetTitle("Graph");
   cutgx->SetFillColor(1);
   cutgx->SetPoint(0,89.7606,9.64522);
   cutgx->SetPoint(1,0.0797861,3.54458);
   cutgx->SetPoint(2,0.239361,33.6411);
   cutgx->SetPoint(3,85.7713,33.6411);
   cutgx->SetPoint(4,89.7606,9.64522);

   TCutG *cutgy = new TCutG("CUTGy",11);
   cutgy->SetVarX("b3_EFW1");
   cutgy->SetVarY("deltTOF2");
   cutgy->SetTitle("Graph");
   cutgy->SetFillColor(1);
   cutgy->SetPoint(0,0.0961527,4.99809);
   cutgy->SetPoint(1,0.0961527,4.99809);
   cutgy->SetPoint(2,37.9808,5.59208);
   cutgy->SetPoint(3,48.75,5.19609);
   cutgy->SetPoint(4,61.25,5.19609);
   cutgy->SetPoint(5,73.3654,5.49308);
   cutgy->SetPoint(6,84.3269,5.79008);
   cutgy->SetPoint(7,94.7115,10.839);
   cutgy->SetPoint(8,91.8269,28.9556);
   cutgy->SetPoint(9,0.28846,28.5596);
   cutgy->SetPoint(10,0.0961527,4.99809);
   ///////cut test to eliminate hadronic interacyions
   TCutG *cutgz = new TCutG("cutgz",16);
   //cutgz->SetVarX("");
   //cutgz->SetVarY("");
   cutgz->SetTitle("Graph");
   cutgz->SetFillColor(1);
   cutgz->SetPoint(0,0.390624,-6.8749);
   cutgz->SetPoint(1,2.34375,-4.0003);
   cutgz->SetPoint(2,6.05469,-2.0102);
   cutgz->SetPoint(3,11.5234,-0.314923);
   cutgz->SetPoint(4,17.5781,0.716983);
   cutgz->SetPoint(5,79.6875,0.716983);
   cutgz->SetPoint(6,84.375,1.15923);
   cutgz->SetPoint(7,89.6484,1.15923);
   cutgz->SetPoint(8,85.1563,0.0536146);
   cutgz->SetPoint(9,77.1484,-0.536046);
   cutgz->SetPoint(10,26.9531,-0.609754);
   cutgz->SetPoint(11,17.1875,-1.42054);
   cutgz->SetPoint(12,9.17969,-2.67357);
   cutgz->SetPoint(13,3.51562,-5.54816);
   cutgz->SetPoint(14,1.17187,-7.90681);
   cutgz->SetPoint(15,0.390624,-6.8749);

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
 /* TGraphErrors  *gr_Cro = new TGraphErrors();
  gr_Cro->SetName("gr_Cro");
  gr_Cro->SetMarkerStyle(21);
  gr_Cro->SetMarkerColor(4);*/
  TFile *f = new TFile("vbrkupcrsecsfiWholefinal_factor2_mbarn_300.root","recreate");
  fitfunctions();
  TPostScript *ps = new TPostScript(psfile0,111);
  cc=new TCanvas("cc","");
  BookingHist();
  openfiles();
  Define_GCuts();
   // ps->NewPage();
   //   cc->cd();
   //   Dtofe->SetMarkerStyle(7);
   //   Dtofe->Draw("ap");
   //   cc->Update();
  //   In a ROOT session, you can do:
  //      Root > .L crsections1.C
  //      Root > crsections1 t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
  //
  //TH2F *h00 = new TH2F("h00","",360*2,0,360,200*4,-100,100);
  TH2F *h000 = new TH2F("h000","",360*4,0,360,20*4,0,40);
  //TH2F *h0000 = new TH2F("h0000","",360*2,0,360,200*4,-100,100);
  //TH1F *h21 = new TH1F("h21","",200*4,-100,100);
  TH1F *h22 = new TH1F("h22","",2000*4,-1000,1000);
  TH2F *hee1 = new TH2F("hee1","",150,0,150,150,0,150);
  TH2F *hee2 = new TH2F("hee2","",150,0,150,150,0,150);
  TH2F *hee3 = new TH2F("hee3","",150,0,150,150,0,150);
  //TF1 *f31= new TF1("f31","gaus",-20,20);
  TF1 *f21= new TF1("f212","pol3",-20,20);
  TF1 *f31= new TF1("f31","gaus",-20,20);
  TF1 *f22= new TF1("f22","pol3",-20,20);
  TF1 *f32= new TF1("f32","gaus",-20,20);
  
  if (fChain == 0) return;
  
  Long64_t nentries =1e8;// fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    double xran1=xran->Uniform (1);
    //cout  << xran1 << endl;
	 if (xran1<=0.01) printf("\r<I> Progress: %.0f%%",100*(float) jentry/((float) nentries));
    /////////if (xran1<=0.1){

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
    if(b3_ID==1 && LT>.1 && dowscale<100 && abs(b3_WLtdc1-b3_WLtdc2)<80 && b3_T1>0 && (b3_WLdet1!=b3_WLdet2) && (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 && b3_Pol==31 /*&& b3_ballhits==1*/)
      {//<<--<<--!
	for(int q=0 ; q<Nkinema; q++)
	  {
	    tta1=tta_1[q]; tta2=tta_2[q]; pphi12=phi12[q];

	    //+++if (abs(b3_MWPCtheta1-tta1)<dtta && abs(b3_MWPCtheta2-tta2)<dtta && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5) && phi_selection(tta1,tta2,b3_MWPCphi1,b3_MWPCphi2))
	    if ((abs(b3_MWPCtheta1-tta1)<dtta && abs(b3_MWPCtheta2-tta2)<dtta && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5) && phi_selection(tta1,tta2,b3_MWPCphi1,b3_MWPCphi2))
		||(abs(b3_MWPCtheta1-tta2)<dtta && abs(b3_MWPCtheta2-tta1)<dtta && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5) && phi_selection(tta2,tta1,b3_MWPCphi1,b3_MWPCphi2)))
	      {
		contrevent++;
		double Edmin=3., Edmax=90, Epmin=10, Epmax=105.;	    		
		Double_t tdc1t=(b3_WLtdc1+b3_WRtdc1)/4;
		Double_t tdc2t=(b3_WLtdc2+b3_WRtdc2)/4;
		Double_t tdc1m=(b3_WLtdc1-b3_WRtdc1);
		Double_t tdc2m=(b3_WLtdc2-b3_WRtdc2);

		Double_t deltTDC=(tdc1t-tdc2t);

		R1=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta1/r2d))*(TMath::Cos(b3_MWPCphi1/r2d))),2));
		R2=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta2/r2d))*(TMath::Cos(b3_MWPCphi2/r2d))),2));

		double R11=TMath::Sqrt(TMath::Power((.002*297*b3_MWPCX1/285),2)+TMath::Power((.002*b3_MWPCY1),2)+TMath::Power(.297,2));
		double R12=R1-R11;
		double R21=TMath::Sqrt(TMath::Power((.002*297*b3_MWPCX2/285),2)+TMath::Power((.002*b3_MWPCY2),2)+TMath::Power(.297,2));
		double R22=R2-R21;
		
		//asume that first particle is d and second is p//
		if (abs(b3_MWPCtheta1-tta1)<dtta && abs(b3_MWPCtheta2-tta2)<dtta && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5) && phi_selection(tta1,tta2,b3_MWPCphi1,b3_MWPCphi2))
		  {
		    //+++Ddetec0 = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1); 
		    //+++Pdetec0 = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
		    
		    if (b3_EFW1<Edmin) Ddetec0 = b3_EFW1/d_scalning(Edmin,b3_WLdet1,tta1);
		    if (b3_EFW1>=Edmin && b3_EFW1<=Edmax) Ddetec0 = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);//3< <90//for newst 3< <90
		    if (b3_EFW1>Edmax) Ddetec0 = b3_EFW1/d_scalning(Edmax,b3_WLdet1,tta1);
		    if (b3_EFW2<Epmin) Pdetec0 = b3_EFW2/p_scalning(Epmin,b3_WLdet1,tta2);
		    if (b3_EFW2>=Epmin && b3_EFW2<=Epmax) Pdetec0 = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);//10 < <105//for newst 20< <105
		    if (b3_EFW2>Epmax) Pdetec0 = b3_EFW2/p_scalning(Epmax,b3_WLdet1,tta2);
		    /****************
		    Ddetec0 = dd_scalning(b3_EFW1,(int)b3_WLdet1);
		    Pdetec0 = pp_scalning(b3_EFW2,(int)b3_WLdet2);
		    Ptarg0 = Pdetec0+funcc1->Eval(Pdetec0);
		    Dtarg0 = Ddetec0+funcc2->Eval(Ddetec0);*********/
		    
		    if (q<3){
		      Ptarg0 = func1->Eval(Pdetec0);
		      Dtarg0 = func2->Eval(Ddetec0);
		    }
		    if (q>=3){
		      Ptarg0 = func11->Eval(Pdetec0);
		      Dtarg0 = func21->Eval(Ddetec0);
		    }
		
		    //+++++++TOF1dd=R11/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0+md)),2)))+R12/(C0*TMath::Sqrt(1-TMath::Power((md/(Ddetec0+md)),2)));
		    //+++++++TOF2pp=R21/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0+mp)),2)))+R22/(C0*TMath::Sqrt(1-TMath::Power((mp/(Pdetec0+mp)),2)));
		    //cout << R11 << '\t' << R12 << '\t' << R1 << '\t' << R21 << '\t' << R22 << '\t' << R2 << endl;
		    TOF1dd=R1/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0+md)),2)));
		    TOF2pp=R2/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0+mp)),2)));
		    
		    //Double_t X1X =(TOF2pp-TOF1pp);
		    Double_t X2X =(TOF2pp-TOF1dd);
		    // deltTOF1 = (X1X-deltTDC);
		    deltTOF2 = -(X2X-deltTDC);
		    deltTOF2 -= TDC_shift((int)b3_WLdet1,(int)b3_WLdet2,pphi12);
		    //TDC_ratio[q]->Fill(deltTOF2);
		    //		TDC_ratio_phi[q]->Fill(b3_MWPCphi1,deltTOF2);
		    //h0000->Fill(b3_MWPCphi1,deltTOF1);
		    //double E1=TMath::Sqrt(b3_WLE1*b3_WRE1);
		    //E2=TMath::Sqrt(b3_WLE2*b3_WRE2);
		    ET[q]->Fill(b3_EFW1,deltTOF2);
		    //		    TDC_ratio_phi[q]->Fill(b3_MWPCphi1,deltTOF2);
		    
		    ///////cut when your first particle is deuteorn///
		    if ( 1==1 && cutgpm1->IsInside(b3_EFW1,deltTOF2))
		      {   
			//E1E2t[q]->Fill(b3_EFW2,b3_EFW1); 
			//E1E2i[q][w]->Fill((Float_t)b3_EFW2,(Float_t)b3_EFW1);
			he0[q]->Fill(b3_EFW2,b3_EFW1);
			/*if (b3_EFW1<Ymin0[(int)b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(Ymin0[(int)b3_WLdet1][qd],b3_WLdet1,tta1);
			  if (b3_EFW1>=Ymin0[(int)b3_WLdet1][qd] && b3_EFW1<=Ymax0[(int)b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);
			  if (b3_EFW1>Ymax0[(int)b3_WLdet1][qd]) Ddetec = b3_EFW1/d_scalning(Ymax0[(int)b3_WLdet1][qd],b3_WLdet1,tta1);
			  
			  if (b3_EFW2<Xmin0[(int)b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(Xmin0[(int)b3_WLdet1][qp],b3_WLdet1,tta2);
			  if (b3_EFW2>=Xmin0[(int)b3_WLdet1][qp] && b3_EFW2<=Xmax0[(int)b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
			  if (b3_EFW2>Xmax0[(int)b3_WLdet1][qp]) Pdetec = b3_EFW2/p_scalning(Xmax0[(int)b3_WLdet1][qp],b3_WLdet1,tta2);*/
			
			/****if (b3_EFW1<3) Ddetec = b3_EFW1/d_scalning(3,b3_WLdet1,tta1);
			if (b3_EFW1>=3 && b3_EFW1<=90) Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);//3< <90//for newst 3< <90
			if (b3_EFW1>90) Ddetec = b3_EFW1/d_scalning(90,b3_WLdet1,tta1);
			if (b3_EFW2<10) Pdetec = b3_EFW2/p_scalning(10,b3_WLdet1,tta2);
			if (b3_EFW2>=10 && b3_EFW2<=105) Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);//10 < <105//for newst 20< <105
			if (b3_EFW2>105) Pdetec = b3_EFW2/p_scalning(105,b3_WLdet1,tta2);****/
			//++Ddetec = b3_EFW1/d_scalning(b3_EFW1,b3_WLdet1,tta1);
			//++Pdetec = b3_EFW2/p_scalning(b3_EFW2,b3_WLdet1,tta2);
			//E1E2idetec[q][w]->Fill(Pdetec,Ddetec);
			//***++Ddetec=b3_EFW1;
			//***++Pdetec=b3_EFW2;
			//++Ddetec = dd_scalning(b3_EFW1,(int)b3_WLdet1);
			//++Pdetec = pp_scalning(b3_EFW2,(int)b3_WLdet2);
			//Ptarg = Pdetec+funcc1->Eval(Pdetec);
			//Dtarg = Ddetec+funcc2->Eval(Ddetec);
			/***if (q<3){
			  Ptarg = func1->Eval(Pdetec);
			  Dtarg = func2->Eval(Ddetec);
			  //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
			}
			if (q>=3){
			  Ptarg = func11->Eval(Pdetec);
			  Dtarg = func21->Eval(Ddetec);
			  //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
			}***/
			Ddetec=Ddetec0;
			Pdetec=Pdetec0;
			Dtarg=Dtarg0;
			Ptarg=Ptarg0;
			/*if (cutgz->IsInside(b3_EFW1,deltTOF2))
		      {   
			he[q]->Fill(Ptarg,Dtarg);
		      }*/
			he[q]->Fill(Pdetec,Ddetec);
			he1[q]->Fill(Ptarg,Dtarg);
			//E1E2i[q][w]->Fill(Ptarg,b3_EFW2);
			//henergy1[q][w]->Fill(Dtarg,b3_EFW1);
			for(int j=0 ; j<Snr ; j++)
			  {
			    if (cut[q][j]->IsInside(Ptarg,Dtarg))
			      {
				value1=projectScut(Ptarg,Dtarg,j,q,corec);
				sbin11[q][j]->Fill(b3_MWPCphi1,value1,dowscale/LT);
				sbin1D[q][j]->Fill(value1,dowscale/LT);
				sbinraw1D[q][j]->Fill(value1);
				//cout <<dowscale << '\t' << LT << '\t' << dowscale/LT << endl;
				//value1-=Dcorec->Eval(b3_MWPCphi1);
				//+   sbin1[i][j]->Fill(b3_MWPCphi1,value1,b3_DowScalT1/LT);
				//+   sbinraw1[i][j]->Fill(b3_MWPCphi1,value1);
			      }
			  }
		      }//<<--if of PID
		  }

		///////////assuming the first particle is proton
		if (abs(b3_MWPCtheta1-tta2)<dtta && abs(b3_MWPCtheta2-tta1)<dtta && (abs(Delphi-pphi12)<5 || abs(Delphi+pphi12)<5) && phi_selection(tta2,tta1,b3_MWPCphi1,b3_MWPCphi2))
		  {

		    if (b3_EFW2<Edmin) Ddetec0n = b3_EFW2/d_scalning(Edmin,b3_WLdet1,tta2);
		    if (b3_EFW2>=Edmin && b3_EFW2<=Edmax) Ddetec0n = b3_EFW2/d_scalning(b3_EFW2,b3_WLdet1,tta2);//3< <90//for newst 3< <90
		    if (b3_EFW2>Edmax) Ddetec0n = b3_EFW2/d_scalning(90,b3_WLdet1,tta2);
		    if (b3_EFW1<Epmin) Pdetec0n = b3_EFW1/p_scalning(Epmin,b3_WLdet1,tta1);
		    if (b3_EFW1>=Epmin && b3_EFW1<=Epmax) Pdetec0n = b3_EFW1/p_scalning(b3_EFW1,b3_WLdet1,tta1);//10 < <105//for newst 20< <105
		    if (b3_EFW1>Epmax) Pdetec0n = b3_EFW1/p_scalning(Epmax,b3_WLdet1,tta1);
		    /******************
		    Ddetec0n = dd_scalning(b3_EFW2,(int)b3_WLdet2);
		    Pdetec0n = pp_scalning(b3_EFW1,(int)b3_WLdet1);
		    Ptarg0n = Pdetec0n+funcc1->Eval(Pdetec0n);
		    Dtarg0n = Ddetec0n+funcc2->Eval(Ddetec0n);
		    *****************/
		    if (q<3){
		      Ptarg0n = func1->Eval(Pdetec0n);
		      Dtarg0n = func2->Eval(Ddetec0n);
		    }
		    if (q>=3){
		      Ptarg0n = func11->Eval(Pdetec0n);
		      Dtarg0n = func21->Eval(Ddetec0n);
		    }
		    TOF2dd=R2/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0n+md)),2)));
		    TOF1pp=R1/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0n+mp)),2)));

		    Double_t X3X =(TOF2dd-TOF1pp);
		    deltTOF3 = (X3X-deltTDC);
		    deltTOF3 -= TDC_shift((int)b3_WLdet2,(int)b3_WLdet1,pphi12);
		    
		    ETn[q]->Fill(b3_EFW2,deltTOF3);
		    TDC_ratio[q]->Fill(deltTOF3);
		    TDC_ratio_phi[q]->Fill(b3_MWPCphi2,deltTOF3);
		    
		    ///////cut when your second particle is deuteron//////
		    if ( 1==1 && cutgpm1->IsInside(b3_EFW2,deltTOF3))
		      {   
			he0[q]->Fill(b3_EFW2,b3_EFW1);
			
			/***if (b3_EFW2<3) Ddetec = b3_EFW2/d_scalning(3,b3_WLdet1,tta2);
			if (b3_EFW2>=3 && b3_EFW2<=90) Ddetec = b3_EFW2/d_scalning(b3_EFW2,b3_WLdet1,tta2);//3< <90//for newst 3< <90
			if (b3_EFW2>90) Ddetec = b3_EFW2/d_scalning(90,b3_WLdet1,tta2);
			if (b3_EFW1<10) Pdetec = b3_EFW1/p_scalning(10,b3_WLdet1,tta1);
			if (b3_EFW1>=10 && b3_EFW1<=105) Pdetec = b3_EFW1/p_scalning(b3_EFW1,b3_WLdet1,tta1);//10 < <105//for newst 20< <105
			if (b3_EFW1>105) Pdetec = b3_EFW1/p_scalning(105,b3_WLdet1,tta1);
			if (q<3){
			  Ptarg = func1->Eval(Pdetec);
			  Dtarg = func2->Eval(Ddetec);
			  //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
			}
			if (q>=3){
			  Ptarg = func11->Eval(Pdetec);
			  Dtarg = func21->Eval(Ddetec);
			  
			}***/
			Ddetec=Ddetec0n;
			Pdetec=Pdetec0n;
			Dtarg=Dtarg0n;
			Ptarg=Ptarg0n;

			/*if (cutgz->IsInside(b3_EFW2,deltTOF3))
		      {   
			he[q]->Fill(Ptarg,Dtarg);
		      }*/

			he[q]->Fill(Pdetec,Ddetec);
			he1[q]->Fill(Ptarg,Dtarg);
			
			for(int j=0 ; j<Snr ; j++)
			  {
			    if (cut[q][j]->IsInside(Ptarg,Dtarg))
			      {
				value1=projectScut(Ptarg,Dtarg,j,q,corec);
				sbin11[q][j]->Fill(b3_MWPCphi2,value1,dowscale/LT);
				sbin1D[q][j]->Fill(value1,dowscale/LT);
				sbinraw1D[q][j]->Fill(value1);
			      }
			  }
		      }//<<---if PID second particle deuteron
		  }
		/**++if (tta1==tta2 && cutgPD->IsInside(b3_EFW1,deltTOF2)){   
		   if (b3_EFW2<3) Ddetec = b3_EFW2/d_scalning(3,b3_WLdet2,tta2);
		   if (b3_EFW2>=3 && b3_EFW2<=90) Ddetec = b3_EFW2/d_scalning(b3_EFW2,b3_WLdet2,tta2);//3< <90//for newst 3< <90
		   if (b3_EFW2>90) Ddetec = b3_EFW2/d_scalning(90,b3_WLdet2,tta2);
		   if (b3_EFW1<10) Pdetec = b3_EFW1/p_scalning(10,b3_WLdet2,tta1);
		   if (b3_EFW1>=10 && b3_EFW1<=105) Pdetec = b3_EFW1/p_scalning(b3_EFW1,b3_WLdet2,tta1);//10 < <105//for newst 20< <105
		   if (b3_EFW1>105) Pdetec = b3_EFW1/p_scalning(105,b3_WLdet2,tta1);
		   if (q<3){
		   Ptarg = func1->Eval(Pdetec);
		   Dtarg = func2->Eval(Ddetec);
		   }
		   if (q>=3){
		   Ptarg = func11->Eval(Pdetec);
		   Dtarg = func21->Eval(Ddetec);
		   
		   }
		   for(int j=0 ; j<Snr ; j++)
		   {
		   if (cut[q][j]->IsInside(Ptarg,Dtarg))
		   {
		   value1=projectScut(Ptarg,Dtarg,j,q,corec);
		   sbin11[q][j]->Fill(b3_MWPCphi1,value1,dowscale/LT);
		   sbin1D[q][j]->Fill(value1,dowscale/LT);
		   sbinraw1D[q][j]->Fill(value1);
		   }
		   }
		   }//<<--if of PID_symmetric configs++**/
	      }
	  }
      }//<<--<<--!
    if (b3_ID==2 && b3_Pol==31 && LT>0.1 && dowscale<100)
      {
    	ScalerCount+=1.;
	tempcharg+=b3_FC;
    	TotBeamC+=(double)b3_FC;
    	TotTime=b3_Time;   /* acomulating charge for given polarzation */ 
    	kHzPol+=b3_10kHZ;                           /* acomulating 10kHz for given polarzation */
	//++cout << "tempcharg=" << tempcharg  << '\t' << TotBeamC << '\t' << kHzPol << endl;	
      }
    //==  }
    //////////  }//-->>xran
    //////////   else {xran1=.9;}
  }
  //printf("%f %f %f %f %f  \n", tempcharg, TotTime,b3_FC,tempcharg/(8.35*TotTime),10000*tempcharg/(8.35*kHzPol));
  //++RelativTime=TotTime-oldTime;
  //++ oldTime=TotTime;  
  double II= TotBeamC/(1e-4*kHzPol*8.35);
  ///+++tempcharg=1e-4*kHzPol*(II+.5);
  for(int q=0 ; q<Nkinema; q++)
    { 
      if (q<100)
	{
	  if ((q>=0 && q<=7)||(q>=10 && q<=17)||(q>=20 && q<=27)||(q>=30 && q<=37)||(q>=40 && q<=47)||(q>=50 && q<=57)||(q>=60 && q<=67)||(q>=70 && q<=77)){dlF1=10.; dlF2=360.;}
	  if (q==8 || q==18 || q==28 || q==38 || q==48 || q==58|| q==68 || q==78){dlF1=10.; dlF2=155.;}
	  if (q==9 || q==19 || q==29 || q==39 || q==49 || q==59|| q==69 || q==79){dlF1=10.; dlF2=100.;}
	  if (q>=80 && q<=85){dlF1=133.; dlF2=10.;}
	  if (q==86 || q==87){dlF1=155.; dlF2=10.;}
	  if (q==88){dlF1=155.; dlF2=10.;}
	  if (q==89){dlF1=10.; dlF2=102.;}
	  if (q>=90 && q<=96){dlF1=78.; dlF2=10.;}
	  if (q==97){dlF1=95.; dlF2=10.;}
	  if (q==98 || q==99){dlF1=10.; dlF2=95.;}
	}
      else if (q>=100)
	{
	  double qm=fmod((double) q,100.);
	  //	  cout << "qm=" << qm << endl;
	  if ((qm>=0 && qm<=7)||(qm>=10 && qm<=17)||(qm>=20 && qm<=27)||(qm>=30 && qm<=37)||(qm>=40 && qm<=47)||(qm>=50 && qm<=57)||(qm>=60 && qm<=67)||(qm>=70 && qm<=77)){dlF1=10.; dlF2=360.;}
	  if (qm==8 || qm==18 || qm==28 || qm==38 || qm==48 || qm==58|| qm==68 || qm==78){dlF1=10.; dlF2=155.;}
	  if (qm==9 || qm==19 || qm==29 || qm==39 || qm==49 || qm==59|| qm==69 || qm==79){dlF1=10.; dlF2=100.;}
	  if (qm>=80 && qm<=85){dlF1=133.; dlF2=10.;}
	  if (qm==86 || qm==87){dlF1=155.; dlF2=10.;}
	  if (qm==88){dlF1=155.; dlF2=10.;}
	  if (qm==89){dlF1=10.; dlF2=102.;}
	  if (qm>=90 && qm<=96){dlF1=78.; dlF2=10.;}
	  if (qm==97){dlF1=95.; dlF2=10.;}
	  if (qm==98 || qm==99){dlF1=10.; dlF2=95.;}
	}
      int jq=0;
      for(int j=0 ; j<Snr ; j++)
	{ 
	  bm=sbin1D[q][j]->GetMaximumBin();
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
	  f32->SetNpx(sbinraw1D[q][j]->GetNbinsX());
	  /*sprintf(cn1,"fnormD%d_%d_%d",tta_1[q],tta_2[q],Smin1[q]+(dss[q]/2)+(j*dss[q]));
	  sprintf(cn2,"frawD%d_%d_%d",tta_1[q],tta_2[q],Smin1[q]+(dss[q]/2)+(j*dss[q]));*/
	  TF1 *ff1= new TF1("cn1n","pol3(0)+gaus(4)",-25,20);
	  TF1 *ff2= new TF1("cn2n","pol3(0)+gaus(4)",-25,20);
	  bmx=sbin1D[q][j]->GetMaximumBin();
	  double bmxb=sbin1D[q][j]->GetBinContent(bmx);
	  if (bmx<22 && bmx>38) bmx=30;
	  Double_t par[7]={(bmxb/10),0,0,0,bmxb,(bmx-30),.5}; 
	  //double aa1[10]={10,20,25,25,25,25,25,25,20,10};
	  double aa1[15]={10,20,25,25,25,25,25,25,25,25,25,25,20,20,10};
	  ff1->SetParameters(par); 
	  sbin1D[q][j]->Fit(ff1,"Q","",(bmx-30)-aa1[j],(bmx-30)+13);
	  bmx=sbinraw1D[q][j]->GetMaximumBin();
	  if (bmx<22 && bmx>38) bmx=30;
	  double paraw[7]={4,0,0,0,50,(bmx-30),.5};
	  ff2->SetParameters(paraw); 
	  sbinraw1D[q][j]->Fit(ff2,"Q","",(bmx-30)-aa1[j],(bmx-30)+13);
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
	  cout << "sig1E= " << sig1E << '\t' << sig2E << '\t' << q << '\t' << j << endl;
	  double count11=(double)sbinraw1D[q][j]->Integral(sig1E,sig2E);
	  sbinraw1D[q][j]->Add(f22,-1);
	  double count12=(double)sbinraw1D[q][j]->Integral(sig1E,sig2E);
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
	  double  ct = 1./(3.75872);            /*constant*/
	  double   dx = (3.35 + 0.65)*0.1*0.169*1000; /* 0.65 ballging --target thickness mg/cm2 Density off D =0.169 (g/cm3)*/
	  double   n_atom = 2.; /* number of atoms per compond molecule*/
	  double  m_mol = 4.028;    /* target weight in amu*/
	  double  a = n_atom/m_mol;
	  double omega1=(2.*dtta*D2R*(dlF1*D2R)*sin(tta_1[q]*D2R));/*sr*/
	  double omega2=(2.*dtta*D2R*(dlF2*D2R)*sin(tta_2[q]*D2R));/*sr*/
	  double deno = a*dx*omega1*omega2*dss[q];//deltaS;
	  double  AUB= (ct)/(deno);
	  cross[q][j]=(AUB*output[q][j]/(1e-3*tempcharg/8.35325));
	  //cross[q][j]=(AUB*countgaus/(1e-3*tempcharg/8.35325));
	  cross[q][j]=1e-3*cross[q][j]/(.84*.90*.99*.97*.99);/////////converted to mbarn by 1e-3
	  /*Ercross[q][j]=(AUB*sqrt(countgausE)/(1e-3*tempcharg/8.35325));
	  Ercross[q][j]=Ercross[q][j]/(.84*.90*.99*.97);*/
	  Ercross[q][j]=cross[q][j]*sqrt(count11)/count12;
	  //cout << "cross[q][j]= " << cross[q][j] << "Ercross[q][j]= " << Ercross[q][j] << '\t' << q << '\t' << j << endl;
	  if ((Smin1[q]+(dss[q]/2)+(j*dss[q]))>Smin2[q] && (Smin1[q]+(dss[q]/2)+(j*dss[q]))<Smax2[q]) 
	    {
	      gr_Cro[q]->SetPoint(jq,(Smin1[q]+(dss[q]/2)+(j*dss[q])),cross[q][j]);
	      gr_Cro[q]->SetPointError(jq,0, Ercross[q][j]);
	      jq++;
	    }
	}
    }
  cout << "tempcharg=" << tempcharg <<'\t'<< "II= " << II <<endl;
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
  /*for (int i=0;i<Nkinema;i++){
    for (int j=0;j<Snr;j++){
      ps->NewPage();
      cc->cd();
      sbin11[q][j]->Draw();
      cc->Update();
      ps->NewPage();
      cc->cd();
      sbinraw1D[q][j]->Draw();
      cc->Update();
    }
  }*/
  //for (int i=0;i<1/*Nkinema*/;i++){
    // for (int j=1;j<11;j++){
    //ps->NewPage();
    //cc->cd();
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
    //E1E2idetec[i][j]->Draw("cont0");
    //henergy1[i][j]->Draw(" same");
    //++==he->Draw("cont0");
    //++==p1p2dep[i]->Draw("same");
    //cc->Update();
    //ps->NewPage();
    //cc->cd();
    //E1E2itarg[i][j]->Draw("cont0");
    ///p1p2[i]->Draw("same");
    ///cc->Update();
    /* ps->NewPage();
    cc->cd();
    cc->SetLogy();
    gr_Cro->SetMarkerStyle(6);
    gr_Cro->Draw("ap");
    //	  gr_Cro->Draw("ap*");
    cc->Update();*/
    //}
  // }
  ps->Close();
  cutg->Write();
  cutgpm1->Write();
  cutgpdUnSymm->Write();
  cutgPD->Write();
  cutgx->Write();
  for (int i=0;i<Nkinema;i++){
    p1p2[i]->Write();
    p1p2dep[i]->Write();
    TDC_ratio_phi[i]->Write();
    TDC_ratio[i]->Write();
    ET[i]->Write();
    ETn[i]->Write();
    //  tf0[i]->Write();
    // tf[i]->Write();
    he0[i]->Write();
    he[i]->Write();
    he1[i]->Write();
    gr_Cro[i]->Write();
    for (int j=0;j<Snr;j++){
      if ((Smin1[i]+(dss[i]/2)+(j*dss[i]))>Smin2[i] && (Smin1[i]+(dss[i]/2)+(j*dss[i]))<Smax2[i]) 
	{
	  sbin11[i][j]->Write();
	  sbin1D[i][j]->Write();
	  //sbinraw1D[i][j]->Write();
	  cut[i][j]->Write();
	}
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
      p1p2[k]->SetMarkerStyle(4);
      p1p2[k]->SetMarkerColor(k+1);
      p1p2dep[k] = new TGraphErrors(10000);
      p1p2dep[k]->SetName(namep2[k]);
      p1p2dep[k]->SetMarkerStyle(4);
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
	if (ES2[k][l]>26 && ES1[k][l]>20.8 && ES1[k][l]<21) Smin2[k]=Scu[k][l];
	Smin1[k]=130;//Scu[k][l];
	if (ES1[k][l]>25 && ES2[k][l]<25.3 && ES2[k][l]>25) Smax2[k]=Scu[k][l];
	Smax1[k]=280;//Scu[k][l];
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
  for (int i=0;i<Nkinema;i++){
    sprintf(namegr[i],"gr_crsection_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    gr_Cro[i] = new TGraphErrors();
    gr_Cro[i]->SetName(namegr[i]);
    gr_Cro[i]->SetMarkerStyle(26);
    gr_Cro[i]->SetMarkerColor(2);
    gr_Cro[i]->SetLineColor(2);
  }
       cc->Size(27,18);
      cc->SetFillColor(10);
      cc->SetBottomMargin(.15);
      cc->SetLeftMargin(.15);
  for (int i=0;i<Nkinema;i++){
    sprintf(name20[i],"TDC_ratio_phi_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    TDC_ratio_phi[i] = new TH2D (name20[i],"",360,0,360,160,-20,20);
    sprintf(name21[i],"TDC_ratio_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    TDC_ratio[i]=new TH1D(name21[i],";TOF_p - TOF_d [channel];Counts",120,-15,15);
    sprintf(name22[i],"E_DelTDC_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    ET[i] = new TH2D (name22[i],"",300,0,150,800,-200,200);
    sprintf(name22n[i],"E_DelTDCproton_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    ETn[i] = new TH2D (name22n[i],"",300,0,150,800,-200,200);
    sprintf(name23[i],"E1E2_detecto_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he[i] = new TH2D (name23[i],"",150,0,150,150,0,150);
    sprintf(name24[i],"E1E2_target_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he1[i] = new TH2D (name24[i],"",150,0,150,150,0,150);
    sprintf(name23c[i],"E1E2_precalib_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    he0[i] = new TH2D (name23c[i],"",150,0,150,150,0,150);

    sprintf(nametf0[i],"tf0_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    tf0[i] = new TH2D (nametf0[i],"",2*360,-360,360,2*360,-360,360);
    sprintf(nametf[i],"tf_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    tf[i] = new TH2D (nametf[i],"",2*15,0,15,2*15,0,15);

  }
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
  
      /*for (int i=0;i<Nkinema;i++){
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
  }*/

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
  for (int i=0;i<Nkinema;i++){
      for(int j=0 ; j<Snr ; j++)
	{
	  sprintf(name25[i][j],"sbin_phi_%d_%d",i,j);
	  sprintf(name55[i][j],"sbin1D_%d_%d",i,j);
	  sprintf(nameE[i][j],"sbinraw1_%d_%d",i,j);
	  sbin11[i][j]= new TH2D(name25[i][j],";#phi_{d} [deg];D [MeV]",360,0,360,60,-30,30);
	  sbin1D[i][j]= new TH1D(name55[i][j],";D [MeV]",60,-30,30);
	  sbinraw1D[i][j]= new TH1D(nameE[i][j],";D [MeV]",60,-30,30);}
}
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
  //double shiftt[11]={0.0, -0.1, 6.94, 3.0, 9.2, 2.25, 8.4, 1.3, 7.83, 0.94, 7.95}; /* benchmark */
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
   else if(phi==120)
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
int phi_selection(double T1,double T2,double F1,double F2)
{
  if (T1<32 && T2<32)
    {
      return 360;
    }
  else if (T1<32 && T2==32)
    {
      if ((F2>28 && F2<65)||(F2>113 && F2<152)||(F2>207 && F2<247)||(F2>295 && F2<334))
	return 155;
    }
  else if (T1<32 && T2==34)
    {
      if ((F2>30 && F2<58)||(F2>122 && F2<145)||(F2>215 && F2<238)||(F2>301 && F2<327))
	return 100;
    }
  else if (T1==32 && T2<28)
    {
      if ((F1>33 && F1<62)||(F1>115 && F1<150)||(F1>208 && F1<242)||(F1>295 && F1<330))
	return 133;
    }
  else if (T1==32 && T2>=28 && T2<32)
    {
      if ((F1>28 && F1<65)||(F1>113 && F1<152)||(F1>207 && F1<247)||(F1>295 && F1<334))
	return 155;
    }
  else if (T1==32 && T2==32)
    {
      if (((F1>28 && F1<65)||(F1>113 && F1<152)||(F1>207 && F1<247)||(F1>295 && F1<334)) && ((F2>28 && F2<65)||(F2>113 && F2<152)||(F2>207 && F2<247)||(F2>295 && F2<334)))
	return 155;
    }
  else if (T1==32 && T2==34)
    {
      if (((F1>33 && F1<60)||(F1>120 && F1<145)||(F1>213 && F1<240)||(F1>300 && F1<325)) && ((F2>33 && F2<60)||(F2>120 && F2<145)||(F2>213 && F2<240)||(F2>300 && F2<325)))
	return 102;
    }
  else if (T1==34 && T2<30)
    {
      if ((F1>38 && F1<55)||(F1>125 && F1<143)||(F1>214 && F1<236)||(F1>304 && F1<324))
	return 78;
    }
  else if (T1==34 && T2==30)
    {
      if ((F1>35 && F1<58)||(F1>123 && F1<147)||(F1>212 && F1<238)||(F1>302 && F1<324))
	return 95;
    }
  else if (T1==34 && T2>30)
    {
      if (((F1>35 && F1<58)||(F1>123 && F1<147)||(F1>212 && F1<238)||(F1>302 && F1<324)) && ((F2>35 && F2<58)||(F2>123 && F2<147)||(F2>212 && F2<238)||(F2>302 && F2<324)))
	return 95;
    }
    return 0;
}



/////////other tdc_shift functions////
/******double  TDC_shift(int det1, int det2)
{
  // double shift[11]={0.0, -0.1, 6.94, 3.0, 9.2, 2.25, 8.4, 1.3, 7.83, 0.94, 7.95};
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
 shift[4][6] = 0.62;
 shift[4][7] = -1.70;
 shift[4][8] = -0.11;
 shift[4][9] = -0.11;

 shift[5][6] = 0.00;
shift[5][7] = -1.8;
 shift[6][4] = -2.11;
 shift[6][5] = -2.30;
shift[7][2] = 1.6;
shift[7][3] = 0.4;
shift[7][4] = 0.26;
shift[7][5] = 0.72;
shift[8][1] = -1.36;
shift[8][2] = 0.1;
shift[8][3] = -1.74;
shift[8][4] = -1.4;
shift[9][1] = -1.1;
shift[9][2] = 0.17;
shift[9][3] = -0.83;

shift[9][4] = -0.62;
 shift[10][1] = -1.45;
 shift[10][2] = -0.1;
 shift[10][3] = -1.11;


  return shift[det1][det2];
} */


 /**++double TDC_shift(int det1, int det2)
{
  double shift[11][11];
  for(int i=1 ; i<11 ; i++)
    {
      for(int j=1 ; j<11 ; j++)
	{
	  shift[i][j] = 0.0;
	  shift[j][i] = 0.0;
	}
    }++**/
  /*
    shift[1][9] = 0.13;
    shift[2][8] = -1.20;
    shift[2][9] = -1.29;
    shift[3][7] = -1.45;
    shift[3][8] = 0.0;
    shift[3][9] = 0.0;
    shift[4][6] = 0.7;
    shift[4][7] = -1.5;
    shift[4][8] = -.45;
    shift[5][6] = -0.99;
    shift[5][7] = -2.97;
    shift[6][4] = -2.36;
    shift[6][5] = -1.2;
    shift[7][3] = 0.00;
    shift[7][4] = 0.38;
    shift[7][5] = 1.50;
    shift[8][2] = -0.20;
    shift[8][3] = -1.5;
    shift[8][4] = -1.57;
    shift[9][1] = -1.14;
    shift[9][2] = 0.31;
    shift[9][3] = -0.99;
    shift[1][10] = 0.54;
    shift[2][10] = -.99;
    shift[10][1] = -1.52;
    shift[10][2] = -0.22;
    ---------------------------- */
  // 28-28-180,160 
  /**++ shift[1][8] = 0.35; 
  shift[1][9] = 0.49;
  shift[1][10] = 0.54;

  shift[2][7] = -2.36;
  shift[2][8] = -1.20;
  shift[2][9] = -1.15;
         shift[2][10] = -.89;

  shift[3][6] = 1.6;
  shift[3][7] = -1.05;
  shift[3][8] = 0.0;
  shift[3][9] = 0.0;
  	 shift[3][10] = 0.31;


  shift[4][6] = 0.8;
  shift[4][7] = -1.5;
  shift[4][8] = -.45;
  shift[4][9] = -.50;
  	 shift[4][10] = .10;

  shift[5][4] = -2.0;
  shift[5][6] = -0.99;
  shift[5][7] = -2.97;
  shift[5][8] = -1.9;
  
  shift[6][3] = -2.8;
  shift[6][4] = -2.36;
  shift[6][5] = -1.2;
  shift[6][7] = -3.2;
  
  shift[7][2] = 1.24;
  shift[7][3] = 0.00;
  shift[7][4] = 0.38;
  shift[7][5] = 1.50;
  shift[7][6] = 1.70;

  	 shift[8][1] = -1.38;
  shift[8][2] = -0.20;
  shift[8][3] = -1.5;
  shift[8][4] = -1.0;
  shift[8][5] = 0.23;
  
  shift[9][1] = -1.14;
  shift[9][2] = 0.35;
  shift[9][3] = -0.69;
  shift[9][4] = -0.56;
  
  
  
  shift[10][1] = -1.35;
  shift[10][2] = 0.15; 
	 shift[10][3] = -1.14;++**/
  /*   --------------------------------
	  shift[1][8] = 0.35;
	 shift[1][9] = 0.27;
	 shift[1][10] = 0.54;
	 
	 shift[2][7] = -2.56;
	 shift[2][8] = -1.2;
	 shift[2][9] = -1.2;
	 shift[2][10] = -.90;
	 
	 shift[3][6] = 1.6;
	 shift[3][7] = -1.30;
	 shift[3][8] = 0.0;
	 shift[3][9] = 0.10;
	 shift[3][10] = 0.31;
	 
	 shift[4][6] = 0.5;
	 shift[4][7] = -1.6;
	 shift[4][8] = -0.16;
	 shift[4][9] = -.16;
	 shift[4][10] = .10;
	 
	 shift[5][4] = -2.0;
	 shift[5][6] = -1.0;
	 shift[5][7] = -2.8;
	 shift[5][8] = -1.8;
	 
	 shift[6][3] = -2.5;
	 shift[6][4] = -2.0;
	 shift[6][5] = -1.20;
	 shift[6][7] = -3.2;
	 
	 shift[7][2] = 1.54;
	 shift[7][3] = 0.39;
	 shift[7][4] = 0.44;
	 shift[7][5] = 0.80;
	 shift[7][6] = 1.70;
	 
	 shift[8][1] = -1.38;
	 shift[8][2] = 0.01;
	 shift[8][3] = -1.6;
	 shift[8][4] = -1.3;
	 shift[8][5] = 0.23;
	 
	 shift[9][1] = -1.14;
	 shift[9][2] = 0.23;
	 shift[9][3] = -1.1;
	 shift[9][4] = -0.70;
	 

	 shift[10][1] = -1.52;
	 shift[10][2] = 0.15;
	 shift[10][3] = -1.14; */
    
	 /**++ return  shift[det1][det2];
 

}++**/
