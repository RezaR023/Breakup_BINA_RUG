#include "TGenPhaseSpace.h"
#include "TLorentzVector.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TLine.h"
#include "Riostream.h"

//-------elastic P-P-------------
void TPelast() {
  if (!gROOT->GetClass("TGenPhaseSpace")) gSystem->Load("libPhysics");
  Double_t theta, phi, pPPipz, pPPimz, pNNpz, pNNmz,Mtar,Mbm,Mc,V0,Vc,Ekin,Ettal;
  Double_t pz,Ettal1, po1,po2,po3,po4,Ep1,Ep2,EN1,EN2;
  const Double_t r2d=(180.0/TMath::Pi());
  const Double_t md=1.8756;//0.9382720813;
  const Double_t mp=0.9382720813;
  const Double_t mn=0.9395654133, mhe3=2.809033445,MD=1.8756;
    const Double_t mtr=2.809432;
  Ekin=0.130; // 135, 160
  Mtar=1.8756;
  Mbm=1.8756;
  pz=sqrt(Ekin*(Ekin+2*Mbm));
  Ettal=Mbm+Ekin;
  Mc=(Mtar*Mbm)/(Mtar+Mbm);
  double Elab=Ekin+Mbm;                                  /*Deut total energy in LAB*/ 
  double s=pow(Mbm,2.)+pow(mp,2.)+2.*mp*Elab;  /* The invariant square of the total 4-momentum*///pow((Elab+Mass[1]),2)
  double Plab=sqrt(pow(Elab,2.)-pow(Mbm,2.));            /*proton initial momentum in LAB*/
  double Vcm=Plab/(Elab+mp);                            /*CM frame velocity in LAB system*/
  V0=pz/Mbm;
  Vc=Vcm;//V0*Mc/Mtar;
  TLorentzVector target(0.0, 0.0, 0.0, Mtar);
  TLorentzVector beam(0.0, 0.0, pz, Ettal);
  TLorentzVector W = beam + target;

   //(Momentum, Energy units are Gev/C, GeV)
   Double_t masses[2] = {mtr,mp} ; //{MD,MD} ;

   TGenPhaseSpace event;
   event.SetDecay(W, 2, masses);

    TH2F *h2 = new TH2F("h2","h2", 180,0,180, 600,0,200);
    TH2F *h22 = new TH2F("h22","h22", 180,0,180, 600,0,200);
    TH2F *h3 = new TH2F("h3","h3", 180,0,180, 600,0,200);
    TH2F *h2cm = new TH2F("h2cm","h2cm", 180,0,180, 600,0,200);
    TH2F *h3cm = new TH2F("h3cm","h3cm", 180,0,180, 600,0,200);

   TH1F *h11 = new TH1F("h11","h11", 130,0.0,130);
   TH1F *h12 = new TH1F("h12","h12", 130,0.0,130);
   TH1F *h13 = new TH1F("h13","h13", 260,0.0,260);
   TH1F *h14 = new TH1F("h14","h14", 130,0.0,130);

   for (Int_t n=0;n<1E6;n++) {
      Double_t weight = event.Generate();
      TLorentzVector *pProton1 = event.GetDecay(0);
      TLorentzVector *pProton2 = event.GetDecay(1);
      //     TLorentzVector *pNotron1 = event.GetDecay(2);
      //  TLorentzVector *pNotron2 = event.GetDecay(3);
      TLorentzVector pPPip = *pProton1;
      TLorentzVector pPPim = *pProton2;
      po1 = r2d*pPPip.Theta();
      po2 = r2d*pPPim.Theta();
      Ep1=1000*(pPPip[3]-masses[0]);
      Ep2=1000*(pPPim[3]-masses[1]);
      //  TVector3 p1 = pPPip.Vect();
      // TVector3 p2 = pPPim.Vect();
      //TVector3 b1(0.0,0.0,-Vc);
      //  cout << "Vc " << Vc << endl;
      // pPPip.Boost(b1);
      //    pPPim.Boost(b1);
      //   TLorentzVector pNNp = *pNotron1;
      //  TLorentzVector pNNm = *pNotron2;
      //  TVector3 N1 = pNNp.Vect();
      //  TVector3 N2 = pNNm.Vect();
      //    pNNp.Boost(b1);
      //    pNNm.Boost(b1);
      //       po1 = pPPip.Theta();
       //       po2 = pPPim.Theta();
       //       po3 = pNNp.Theta();
       // po4 = pNNm.Theta();
      //    po3 = r2d*pNNp.Theta();
      //   po4 = r2d*pNNm.Theta();
       const Double_t teta1=34.0, teta2=36.0;
       const Double_t teta11=53.0, teta22=57.0;
       //   const Double_t teta1=.175, teta2=.558;
       //      if(po1>18 && po1<36)
       	{
      double po1cm = r2d*pPPip.Theta();
      double po2cm = r2d*pPPim.Theta();
       double  Ep1cm=1000*(pPPip[3]-masses[0]);
       double Ep2cm=1000*(pPPim[3]-masses[1]);
	  //	  EN1=1000*(pNNp[3]-masses[2]);
	  //	  EN2=1000*(pNNm[3]-masses[3]);
	  //     pPPipz = pPPip[3];
	  //      pPPimz = pPPim[3]0.9382720813;
	  //      pNNpz = pNNp[3];
	  //      pNNmz = pNNm[3];
      h11->Fill(po1+po2 ,weight);
      h12->Fill(Ep2 ,weight);
      //     h13->Fill(EN1 ,weight);
      //    h14->Fill(EN2 ,weight);
      h2->Fill(po1,Ep1, weight);
      h22->Fill(po2,Ep2, weight);
      h3->Fill(po2,po1, weight);
      h2cm->Fill(po1cm,po1, weight);
      h3cm->Fill(po2cm,po1cm, weight);
       	}
   }
   TCanvas *Cp = new TCanvas("Cp","P1&p2");
   /*   Cp->Divide(2,2);
	Cp->cd(1);*/
   h11->Draw();
   /*  Cp->cd(2);
   h12->Draw();*/
   //   Cp->cd(3);
   //   h13->Draw();
   //  Cp->cd(4);
   //  h14->Draw();
   TCanvas *Cpp = new TCanvas("Cpp","pP1&p2");
   Cpp->Divide(1,2);
   Cpp->cd(1);   
   h2->Draw();
   Cpp->cd(2);
   h3->Draw();

}
