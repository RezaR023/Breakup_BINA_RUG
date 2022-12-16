#define calibcal_cxx
#include "calibmanip.h"
#include <TProfile.h>
#include "TProfile.h"
#include <TMinuit.h>
#include "TLorentzVector.h"
#include "TFitter.h"
#include "TGenPhaseSpace.h"
//#define teta (20)
double tta1, tta2,pphi12;
double Ddetec0,Pdetec0,Ptarg0,Dtarg0,Ddetec0n,Pdetec0n,Ptarg0n,Dtarg0n,LT,dowscale,TOF2dd,TOF1pp,value1;
TF1 *finalfuncpx= new TF1("finalfuncpx","pol4");
//TFile *f1=new TFile("vhistAllconfig.root");
//++====TFile *f1=new TFile("vhistAllconfigvast.root");
//TFile *f1=new TFile("vhistAllconfigvastnewcal.root");
//TFile *f1=new TFile("vbreakaftercalibstp1.root");
double  TDC_shift(int det1, int det2,double phi);
/////precalibration for proton with position dependent///////////////////
double FITFUX(double detN, double X,double adcL, double adcR)
{
  if (detN==1) finalfuncpx->SetParameters(11.4945,-0.00770806,-0.000114415,5.17868e-07,4.74886e-09);
  if (detN==2) finalfuncpx->SetParameters(10.4267,-0.00124446,-0.000109443,3.34713e-07,6.83943e-09);
  if (detN==3) finalfuncpx->SetParameters(11.5008,-0.00219675,-9.98263e-05,4.17427e-07,5.38547e-09);
  if (detN==4) finalfuncpx->SetParameters(11.1741,-0.000289716,-5.67013e-05,9.33379e-08,-1.03381e-09);
  if (detN==5) finalfuncpx->SetParameters(6.2016,-0.000736735,-0.00013859,1.43878e-08,6.5832e-09);
  if (detN==6) finalfuncpx->SetParameters(5.49184,0.000220729,-0.000113417,-1.67957e-09,4.43836e-09);
  if (detN==7) finalfuncpx->SetParameters(9.0593,-0.00152951,-4.90659e-05,5.87302e-09,2.27433e-09);
  if (detN==8) finalfuncpx->SetParameters(8.48874,-0.000117846,-4.31323e-05,-8.8026e-08,-5.53255e-10);
  if (detN==9) finalfuncpx->SetParameters(8.94,-0.00047518,-9.83665e-05,2.19587e-07,4.31338e-09);
  if (detN==10) finalfuncpx->SetParameters(10.9429,-0.00158524,-0.000118636,7.22401e-08,4.39448e-09);
  return sqrt(adcL*adcR)/finalfuncpx->Eval(X);
}
//////////best preclibration for deuteron with position//////////////////
double FITFUXD( double detleft, double x, double ADCleft ,double ADCright){
 double BarN=detleft;
 double func=0;
 ////////////////////////Best Pre-Calibration function for deuteron ////////////////////
 if (BarN==1)      func= 10.0901242e+00  + 2.254394e-02*x - 1.764212e-04*x*x + 2.092171e-07*x*x*x; 
 else if (BarN==2) func= 8.6729606e+00  + 2.112341e-02*x - 1.182007e-04*x*x + 5.685267e-08*x*x*x;
 else if (BarN==3) func= 9.4538659e+00  + 3.093151e-02*x - 2.572974e-04*x*x + 5.955087e-07*x*x*x; 
 else if (BarN==4) func= 9.5721830e+00  + 1.225239e-02*x - 3.435246e-05*x*x - 1.406221e-07*x*x*x;
 else if (BarN==5) func= 5.0166803e+00  + 9.059085e-03*x - 1.647952e-05*x*x - 1.831679e-07*x*x*x;
 else if (BarN==6) func= 4.3463985e+00  + 1.171057e-02*x - 4.393140e-05*x*x - 9.217203e-08*x*x*x;
 else if (BarN==7) func= 7.9034888e+00  + 1.058610e-02*x - 7.318189e-05*x*x + 7.133477e-08*x*x*x;
 else if (BarN==8) func= 7.3459060e+00  + 9.942690e-03*x - 3.993604e-05*x*x - 6.771125e-08*x*x*x; 
 else if (BarN==9) func= 7.4571124e+00  + 1.400878e-02*x - 8.118584e-05*x*x + 6.786945e-08*x*x*x; 
 else              func= 9.0182811e+00  + 1.980015e-02*x - 1.319072e-04*x*x + 1.553978e-07*x*x*x;
 ////////////////////////Best Pre-Calibration function for deuteron finished!!////////////////////
return sqrt(ADCleft*ADCright)/func;
}

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
TF1 *funcc1;
TF1 *funcc2;
TCutG *cutgpm1;

Bool_t         debug    = false; // Debug flag for some printouts.

#define MP 0.938272
#define MN 0.939573
#define MD 1.875612793

//TLorentzVector *pDeuteron;
//TLorentzVector *pNeutron;
TLorentzVector *pProton;

Double_t       masses[3] = {MD, MP, MN};
TLorentzVector target(0.0, 0.0, 0.0, MD);
Double_t       ekin = 0.130;
Double_t       ebeam = ekin + MD;
Double_t       pbeam = TMath::Sqrt(ebeam*ebeam - MD*MD);
TLorentzVector beam(0.0, 0.0, pbeam, ebeam);

Double_t       energyDeuteron;
Double_t       thetaDeuteron; // input scattering angle variables for minuit
Double_t       phiDeuteron;   // ditto, for azimuthal angles of protons
Double_t       thetaProton; // input scattering angle variables for minuit
Double_t       phiProton;  // ditto, for azimuthal angles of protons

void GetMomenta(double th, double ph, double e, double m, TLorentzVector &pp )
{
  double p = TMath::Sqrt((e+m)*(e+m)-m*m);
  Double_t pz = p * TMath::Cos(th);
  Double_t px = p * TMath::Sin(th) * TMath::Cos(ph);
  Double_t py = p * TMath::Sin(th) * TMath::Sin(ph);
  pp.SetPxPyPzE(px,py,pz,e+m);
  return;
}

void MissingMassFunction(int& nDim, double* gout, double& result, double par[], int flg)
{
  TLorentzVector pDeuteron;
  GetMomenta(thetaDeuteron,phiDeuteron,energyDeuteron,MD,pDeuteron);

  TLorentzVector pProton;
  GetMomenta(thetaProton,phiProton,par[0],MP,pProton);

  //TLorentzVector pNeutron;
  //  GetMomenta(thetaNeutron,phiNeutron,par[0],MN,pNeutron);

  TLorentzVector pNeutron = (target+beam) - (pDeuteron+pProton); 

  result = (pNeutron.M()-MN)*(pNeutron.M()-MN);
}

//
// Calculate the neutron energy using numerical method.
// The variable en[2] contains first guess and error.
// The program updates e[0] and returns success of the fit.
//

bool GetNeutronEnergy(TFitter *minimizer, double thd, double phd, double ed,
		      double thp, double php, double &ep, double eep)
{
  Int_t ierr;
  
  thetaDeuteron = thd;
  thetaProton = thp;
  
  phiDeuteron = phd;
  phiProton = php;

  energyDeuteron = ed;
  
  minimizer->SetParameter(0,        // variable number
			  "Ep",     // variable name
			  ep,    // variable value
			  10*eep, // range to search for solution
			  0,
			  0);
  
  ierr = minimizer->ExecuteCommand("MIGRAD",0,0); // Find solution for en
  
  if (ierr) return false;
      
  ep = minimizer->GetParameter(0);

  if (debug)
    {
      cout << "<D> Fitter En: " << ep << endl;
    }
  
  return true; // Everything went according to expectations, return "true".
}
void calibcal::Loop()
{
  using namespace std;
  //TFile *f = new TFile("vbreakaftercalib.root","recreate");
  TFile *f = new TFile("vhistAllconfigvastnn.root","recreate");
  /*sc1=new TGraphErrors(10000);
  sc1->SetName("sc1");
  sc1->SetMarkerStyle(7);
  sc2=new TGraphErrors(10000);
  sc2->SetName("sc2");
  sc2->SetMarkerStyle(7);*/
   ///////cut for Deltheta==\pm 1 in crsection
   cutgpm1 = new TCutG("CUTGpm1",17);
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
/* Energy loss as a function of deposited  denergy for proton(func1) and for deutron (func2) */
funcc1= new TF1("funn1","pol5",.01,110);
funcc2= new TF1("funn2","pol4",.1,110);
funcc1->SetParameters(18.72,-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
funcc2->SetParameters(25.69,-0.7636,0.01181,-8.67e-5,2.307e-7);
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
   ////////////////////////////////////
  TFitter* minimizer = new TFitter(1);
  minimizer->GetMinuit()->SetPrintLevel(-1); // Be silent!
  
  // Tell the minimizer about the function to be minimzed
  minimizer->SetFCN(MissingMassFunction);

  ///////////////////////////////////
  //   In a ROOT session, you can do:
  //      Root > .L calibcal.C
  //      Root > calibcal t
  //      Root > t.GetEntry(12); // Fill t data members with entry number 12
  //      Root > t.Show();       // Show values of entry 12
  //      Root > t.Show(16);     // Read and show values of entry 16
  //      Root > t.Loop();       // Loop on all entries
  //
  TH2F *ET = new TH2F ("ET","",2048,0,2*1024,2500,-500,2000);
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
printf("\r<I> Progress: %.0f%%",100*(float) jentry/((float) nentries));
    Delphi=0.0;
    if(b3_10kHZ*b3_TFera>0 ) 
      {
	LT=(b3_10kHZDT * b3_AFera)/(b3_10kHZ * b3_TFera);
	//double LT2=(b3_10kHZ * b3_AFera)/(b3_10kHZDT * b3_TFera);
	//cout << b3_10kHZ << '\t' << b3_10kHZDT << '\t' << b3_AFera << '\t' << b3_TFera << '\t'<< LT << '\t' << LT2 << endl;
	dowscale=b3_T1sDT/b3_T1sDTS;
      }
    if(b3_MWPCphi1>0. && b3_MWPCphi2>0. && b3_MWPCphi1<360. && b3_MWPCphi2<360.)	 Delphi= abs(b3_MWPCphi2-b3_MWPCphi1);
    if(Delphi>180.) Delphi=360. - Delphi;
    if(b3_ID==1 && LT>.1 && dowscale<100 && abs(b3_WLtdc1-b3_WLtdc2)<80 && b3_T1>0 && (b3_WLdet1!=b3_WLdet2) && (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 )
      {//<<--<<--!
	for(int q=0 ; q<Nkinema; q++)
	  {
	    for(int w=1 ; w<11; w++){
	      tta1=tta_1[q]; tta2=tta_2[q]; pphi12=phi12[q];
	      //	if (abs(b3_MWPCtheta1-tta1)<1 && abs(b3_MWPCtheta2-tta2)<1 && abs(abs(b3_MWPCphi1-b3_MWPCphi2)-pphi12)<30  && b3_WLdet1==w)
	      
	      if ((abs(b3_MWPCtheta1-tta1)<2 && abs(b3_MWPCtheta2-tta2)<2 && (abs(Delphi-pphi12)<20 || abs(Delphi+pphi12)<20) && b3_WLdet1==w)
		  ||(abs(b3_MWPCtheta1-tta2)<2 && abs(b3_MWPCtheta2-tta1)<2 && (abs(Delphi-pphi12)<20 || abs(Delphi+pphi12)<20) && b3_WLdet2==w))
		{
		  contrevent++;
		  Double_t tdc1t=(b3_WLtdc1+b3_WRtdc1)/4;
		  Double_t tdc2t=(b3_WLtdc2+b3_WRtdc2)/4;
		  Double_t tdc1m=(b3_WLtdc1-b3_WRtdc1);
		  Double_t tdc2m=(b3_WLtdc2-b3_WRtdc2);
		  
		  Double_t deltTDC=(tdc1t-tdc2t);
		  
		  R1=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta1/r2d))*(TMath::Cos(b3_MWPCphi1/r2d))),2));
		  R2=R0/TMath::Sqrt(1-TMath::Power(((TMath::Sin(b3_MWPCtheta2/r2d))*(TMath::Cos(b3_MWPCphi2/r2d))),2));
		  //asume that first particle is d and second is p//
		  if (abs(b3_MWPCtheta1-tta1)<2 && abs(b3_MWPCtheta2-tta2)<2 && (abs(Delphi-pphi12)<20 || abs(Delphi+pphi12)<20) && b3_WLdet1==w)
		    {
		      Ddetec0 = dd_scalning(b3_EFW1,(int)b3_WLdet1);
		      Pdetec0 = pp_scalning(b3_EFW2,(int)b3_WLdet2);
		      Ptarg0 = Pdetec0+funcc1->Eval(Pdetec0);
		      Dtarg0 = Ddetec0+funcc2->Eval(Ddetec0);
		      /*
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
			Double_t deltTDC=(tdc1t-tdc2t);*/
		  ///////////missing mass of Neutron(3th particle)//////////////////
		  TLorentzVector pDeuteron0;
		  GetMomenta(b3_MWPCtheta1/r2d,b3_MWPCphi1/r2d,Dtarg0/1000,MD,pDeuteron0);
		  
		  TLorentzVector pProton0;
		  GetMomenta(b3_MWPCtheta2/r2d,b3_MWPCphi2/r2d,Ptarg0/1000,MP,pProton0);
		  
		  //TLorentzVector pNeutron;
		  //  GetMomenta(thetaNeutron,phiNeutron,par[0],MN,pNeutron);
		  
		  TLorentzVector pNeutron0 = (target+beam) - (pDeuteron0+pProton0); 
		  //double E_Neut=1000*(pNeutron0[3]-pNeutron0.M());
		  //double Theta_N=r2d*pNeutron0.Theta();
		  //// MissingMassN[q]->Fill(pNeutron0.M()*1000);
		  double MMN=pNeutron0.M()*1000;

		  //double Momtrf_p=(beam-pProton0).M2()*1e3;
		  //double Momtrf_d=(beam-pDeuteron0).M2()*1e3;
		  //TVector3 b1(0.0,0.0,-Vc);
		  //pDeuteron0.Boost(b1);
		  //pProton0.Boost(b1);
		  //double po1cm = r2d*pDeuteron0.Theta();
		  // double po2cm = 180-r2d*pProton0.Theta();
		  //////////////////////////////////////////

		      double TOF1dd=R1/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0+md)),2)));
		      double TOF2pp=R2/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0+mp)),2)));

		      //	X1 =(TOF2p-TOF1p);
		      //X2 =(TOF2p-TOF1d);
		      //X3 =(TOF2d-TOF1p);
		      //Double_t X1X =(TOF2pp-TOF1pp);
		      Double_t X2X =(TOF2pp-TOF1dd);
		      //Double_t X3X =(TOF2dd-TOF1pp);
		      //deltTOF1 = (X1X-deltTDC);
		      // deltTOF2 = (X2X-deltTDC);
		      //deltTOF3 = (X3X-deltTDC);
		      deltTOF2 = -(X2X-deltTDC);
		      deltTOF2 -= TDC_shift((int)b3_WLdet1,(int)b3_WLdet2,pphi12);
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
		      if ( 1==1 && MMN>935 && MMN<944 && cutgpm1->IsInside(b3_EFW1,deltTOF2))
			// if (deltTOF2>0 && deltTOF2<13)
			{   
			  Pdetec=FITFUX(b3_WLdet2,b3_MWPCX2-95.5,b3_WLE2,b3_WRE2);
			  Ddetec=FITFUXD(b3_WLdet1,b3_MWPCX1,b3_WLE1,b3_WRE1);
			  //E1E2t[q]->Fill(b3_EFW2,b3_EFW1); 
			  //E1E2i[q][w]->Fill((Float_t)b3_EFW2,(Float_t)b3_EFW1); 
			  //++Ddetec = b3_EFW1/d_scalning(b3_EFW1,w,tta1);//finalfuncd[q][w]->Eval(b3_EFW1);
			  
			  //++Pdetec = b3_EFW2/p_scalning(b3_EFW2,w,tta2);//finalfuncp[q][w]->Eval(b3_EFW2);
			  E1E2idetec[q][w]->Fill(Pdetec,Ddetec);
			  //E1E2idetec[q][w]->Fill(b3_EFW2,b3_EFW1);//(Pdetec,Ddetec);
			  E1E2itarg[q][w]->Fill((0.1*sqrt(b3_WLE2*b3_WRE2)),(0.1*sqrt(b3_WLE1*b3_WRE1)));//(Ptarg,Dtarg);}
			  /*Ptarg = Pdetec+func1->Eval(Pdetec);
			    Dtarg = Ddetec+func2->Eval(Ddetec);*/
			  if (q<3){
			    //++Ptarg = func1->Eval(Pdetec);
			    //++Dtarg = func2->Eval(Ddetec);
			    //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
			  }
			  if (q>=3){
			    //++Ptarg = func11->Eval(Pdetec);
			    //++Dtarg = func21->Eval(Ddetec);
			    //E1E2itarg[q][w]->Fill(Ptarg,Dtarg);
			  }
			  //E1E2i[q][w]->Fill(Ptarg,b3_EFW2);
			  //henergy1[q][w]->Fill(Dtarg,b3_EFW1);
			  //cout << "d_scalning(b3_EFW1,b3_WLdet1,tta1)=" << d_scalning(b3_EFW1,b3_WLdet1,tta1) << '\t' << contrevent  << endl;
		      }
		    }
		///////////assuming the first particle is proton
		  if(1==1 && abs(b3_MWPCtheta1-tta2)<2 && abs(b3_MWPCtheta2-tta1)<2 && (abs(Delphi-pphi12)<20 || abs(Delphi+pphi12)<20) && b3_WLdet2==w)
		    {
		    Ddetec0n = dd_scalning(b3_EFW2,(int)b3_WLdet2);
		    Pdetec0n = pp_scalning(b3_EFW1,(int)b3_WLdet1);
		    Ptarg0n = Pdetec0n+funcc1->Eval(Pdetec0n);
		    Dtarg0n = Ddetec0n+funcc2->Eval(Ddetec0n);
		  ///////////missing mass of Neutron(3th particle)//////////////////
		  TLorentzVector pDeuteron0;
		  GetMomenta(b3_MWPCtheta2/r2d,b3_MWPCphi2/r2d,Dtarg0n/1000,MD,pDeuteron0);
		  
		  TLorentzVector pProton0;
		  GetMomenta(b3_MWPCtheta1/r2d,b3_MWPCphi1/r2d,Ptarg0n/1000,MP,pProton0);
		  
		  //TLorentzVector pNeutron;
		  //  GetMomenta(thetaNeutron,phiNeutron,par[0],MN,pNeutron);
		  
		  TLorentzVector pNeutron0 = (target+beam) - (pDeuteron0+pProton0); 
		  //double E_Neut=1000*(pNeutron0[3]-pNeutron0.M());
		  //double Theta_N=r2d*pNeutron0.Theta();
		  //// MissingMassN[q]->Fill(pNeutron0.M()*1000);
		  double MMN=pNeutron0.M()*1000;

		  //double Momtrf_p=(beam-pProton0).M2()*1e3;
		  //double Momtrf_d=(beam-pDeuteron0).M2()*1e3;
		  //TVector3 b1(0.0,0.0,-Vc);
		  //pDeuteron0.Boost(b1);
		  //pProton0.Boost(b1);
		  //double po1cm = r2d*pDeuteron0.Theta();
		  //double po2cm = 180-r2d*pProton0.Theta();
		  //////////////////////////////////////////
		    TOF2dd=R2/(C0*TMath::Sqrt(1-TMath::Power((md/(Dtarg0n+md)),2)));
		    TOF1pp=R1/(C0*TMath::Sqrt(1-TMath::Power((mp/(Ptarg0n+mp)),2)));
		    Double_t X3X =(TOF2dd-TOF1pp);
		    double deltTOF3 = (X3X-deltTDC);
		    deltTOF3 -= TDC_shift((int)b3_WLdet2,(int)b3_WLdet1,pphi12);
		    ///////cut when your second particle is deuteron//////
		    if ( 1==1 && MMN>935 && MMN<944 && cutgpm1->IsInside(b3_EFW2,deltTOF3))
		      {   
			Pdetec=FITFUX(b3_WLdet1,b3_MWPCX1-95.5,b3_WLE1,b3_WRE1);
			Ddetec=FITFUXD(b3_WLdet2,b3_MWPCX2,b3_WLE2,b3_WRE2);
			E1E2idetec[q][w]->Fill(Pdetec,Ddetec);
			//E1E2idetec[q][w]->Fill(b3_EFW2,b3_EFW1);//(Pdetec,Ddetec);
			E1E2itarg[q][w]->Fill((0.1*sqrt(b3_WLE1*b3_WRE1)),(0.1*sqrt(b3_WLE2*b3_WRE2)));//(Ptarg,Dtarg);}
		      }
		    }///if first is proton and second deuteron
      }}}}//<<--<<--!
  }
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
    //for (int i=0;i<Nkinema;i++){
       //for (int j=1;j<11;j++){
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
	//p1p2dep[i]->Draw("same");
	//cc->Update();
	//ps->NewPage();
	//cc->cd();
	//E1E2itarg[i][j]->Draw("cont0");
	//p1p2[i]->Draw("same");
	//	cc->Update();
    //}
    // }
    ps->Close();
    //for (int i=0;i<Nkinema;i++){
      //p1p2[i]->Write();
      //p1p2dep[i]->Write();
    //}
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

double p_scalning(double x ,int i, double thet)
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
}

double d_scalning(double y ,int i, double thet)
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
    /*  p1p2[k] = new TGraphErrors(10000);
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
    if (k==8){p1p2[k]->SetName("p1p2_8"); p1p2dep[k]->SetName("p1p2dep_8");}*/

      sprintf(namep1[k],"gr_p1p2_%d_%d_%d",(int)tta_1[k],(int)tta_2[k],(int)phi12[k]);
      sprintf(namep2[k],"gr_p1p2dep_%d_%d_%d",(int)tta_1[k],(int)tta_2[k],(int)phi12[k]);
      p1p2[k] = new TGraphErrors();
      p1p2[k]->SetName(namep1[k]);
      p1p2[k]->SetMarkerStyle(4);
      p1p2[k]->SetMarkerColor(k+1);
      p1p2dep[k] = new TGraphErrors();
      p1p2dep[k]->SetName(namep2[k]);
      p1p2dep[k]->SetMarkerStyle(4);
      p1p2dep[k]->SetMarkerColor(k+1);

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
      sprintf(nam4[i][j],"E1E2_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
      sprintf(nam5[i][j],"E1E2t_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
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
