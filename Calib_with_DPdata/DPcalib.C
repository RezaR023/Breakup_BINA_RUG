#define DPcalib_cxx
#include "DPcalib.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TF1.h>
TH2D *hx[10];
TH2D *hteta[10];
char nam[10][350],nam1[10][350];
TF1 *funcc1;
TF1 *funcc2;
TF1 *func11;
TF1 *func21;
TF1 *fx[10];
TF1 *func3;
TF1 *func4;
void DPcalib::Loop()
{
  double MWPCYY[10]={-78.0,-58.5,-40.8,-24.0,-8.2,7.9,24.2,41.3,58.8,78.4}; /*the unit is half of the mm and these data come from the y position of the middle of each detector in BINA */
  TFile *f = new TFile("vvbreakDP_CHANdivEKINDep.root","recreate");
  /////////Thrown to Deposit
  func3= new TF1("fun3","pol6",.01,120);//for proton, thr to dep
  func3->SetParameters((-73.8858-.5),7.01275,-0.226214,0.00455813,-5.0831e-05,2.95676e-07,-6.99866e-10);
  func4= new TF1("fun4","pol7",.1,120); //for deuteron, thr to dep
  func4->SetParameters((-324.944-.5),33.0866,-1.41793,0.0346872,-0.00050217,4.28835e-06,-1.99831e-08,3.92007e-11);


  fx[0] = new TF1("fx0","pol5",-110,110);
  fx[0]->SetParameters(87.9084,0.00141299,-0.00329838,-4.86274e-07,8.07931e-08,3.95097e-11);
  fx[1] = new TF1("fx1","pol5",-110,110);
  fx[1]->SetParameters(98.217,0.00132721,-0.00405062,-4.88131e-07,1.03078e-07,3.88546e-11);
  fx[2] = new TF1("fx2","pol5",-110,110);
  fx[2]->SetParameters(106.549,0.000512904,-0.00476952,-2.68348e-07,1.31333e-07,2.49786e-11);
  fx[3] = new TF1("fx3","pol5",-110,110);
  fx[3]->SetParameters(111.877,0.000537313,-0.00505491,-1.78942e-07,1.31723e-07,1.03548e-11);
  fx[4] = new TF1("fx4","pol5",-110,110);
  fx[4]->SetParameters(114.58,0.000690939,-0.00524847,-1.57119e-07,1.37843e-07,8.29639e-12);
  fx[5] = new TF1("fx5","pol5",-110,110);
  fx[5]->SetParameters(114.554,0.000441709,-0.00522029,-1.74011e-07,1.3501e-07,1.35947e-11);
  fx[6] = new TF1("fx6","pol5",-110,110);
  fx[6]->SetParameters(111.87,0.00193426,-0.00508288,-9.31728e-07,1.34992e-07,7.4776e-11);
  fx[7] = new TF1("fx7","pol5",-110,110);
  fx[7]->SetParameters(106.323,-0.000872375,-0.00475047,3.83112e-07,1.31354e-07,-2.65185e-11);
  fx[8] = new TF1("fx8","pol5",-110,110);
  fx[8]->SetParameters(98.086,0.00146555,-0.00406202,-6.39966e-07,1.06237e-07,5.28302e-11);
  fx[9] = new TF1("fx9","pol5",-110,110);
  fx[9]->SetParameters(87.7388,0.000490601,-0.00329836,-9.48737e-08,8.14878e-08,4.78624e-12);
  for (int i=0;i<10;i++)
    {
      sprintf(nam[i],"chax_%d",i);
      sprintf(nam1[i],"chatta_%d",i);
      hx[i]=new TH2D(nam[i],"",200,-100,100,150,0,15);
      hteta[i]=new TH2D(nam1[i],"",50,15,40,1500,0,1500);
      
    }
  funcc1= new TF1("funn1","pol5",.1,130);
  funcc2= new TF1("funn2","pol4",.1,130);
  funcc1->SetParameters(18.72,-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
  funcc2->SetParameters(25.69,-0.7636,0.01181,-8.67e-5,2.307e-7);
  
  func11= new TF1("fun1","pol6",.01,110); //for proton, dep to thr tet>=25
  func11->SetParameters((19.4812+.5),0.0565719,0.0300499,-0.000589125,6.78455e-06,-4.17453e-08,1.05267e-10);
  func21= new TF1("fun2","pol5",.1,110); //for deuteron, dep to thr tet>=25
  func21->SetParameters((26.3485+.5),0.0941233,0.0205012,-0.000279293,2.03707e-06,-6.05863e-09);
  
  TH2D *h1=new TH2D("hP","",50,15,40,1500,0,150);
  TH2D *h2=new TH2D("hD","",50,15,40,1500,0,150);
  //   In a ROOT session, you can do:
//      Root > .L DPcalib.C
//      Root > DPcalib t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

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
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      printf("\r<I> Progress: %.0f%%",100*(float) jentry/((float) nentries));
      double Ptarg0 = func11->Eval(b3_EFW1);
      double Dtarg0 = func21->Eval(b3_EFW1);
      double Ptarg = b3_EFW1+funcc1->Eval(b3_EFW1);
      double Dtarg = b3_EFW1+funcc2->Eval(b3_EFW1);
      h1->Fill(b3_MWPCtheta1,Ptarg0);
      h2->Fill(b3_MWPCtheta1,Dtarg0);
  for (int i=0;i<10;i++)
    {
      if (b3_WLdet1==i+1  /*&& (b3_MWPCY1-95.5-MWPCYY[i])<1*/ && (b3_WLdet1==1 || b3_WLdet1==4))
	{
	  if (abs(abs(b3_MWPCphi1-b3_MWPCphi2)-180)<1 && (b3_MWPCX1-95.5)>-80 && (b3_MWPCX1-95.5)<80 && sqrt(b3_WLE1*b3_WRE1)>500)
	    {
	      hx[i]->Fill((b3_MWPCX1-95.5),sqrt(b3_WLE1*b3_WRE1)/func3->Eval(fx[i]->Eval(b3_MWPCX1-95.5)));
		hteta[i]->Fill(b3_MWPCtheta1,sqrt(b3_WLE1*b3_WRE1));
	    }
	}
      else if (b3_WLdet1==i+1 /*&& (b3_MWPCY1-95.5-MWPCYY[i])<1 */&& (b3_WLdet1==5 || b3_WLdet1==6))
	{
	  if (abs(abs(b3_MWPCphi1-b3_MWPCphi2)-180)<1 && (b3_MWPCX1-95.5)>-80 && (b3_MWPCX1-95.5)<80 && sqrt(b3_WLE1*b3_WRE1)>400)
	    {
	      hx[i]->Fill((b3_MWPCX1-95.5),sqrt(b3_WLE1*b3_WRE1)/func3->Eval(fx[i]->Eval(b3_MWPCX1-95.5)));
		hteta[i]->Fill(b3_MWPCtheta1,sqrt(b3_WLE1*b3_WRE1));
	    }
	}
      else if (b3_WLdet1==i+1 /*&& (b3_MWPCY1-95.5-MWPCYY[i])<1 */&& (b3_WLdet1==2 || b3_WLdet1==3 || b3_WLdet1==7 || b3_WLdet1==8 || b3_WLdet1==9 || b3_WLdet1==10))
	{
	  if (abs(abs(b3_MWPCphi1-b3_MWPCphi2)-180)<1 && (b3_MWPCX1-95.5)>-80 && (b3_MWPCX1-95.5)<80 && sqrt(b3_WLE1*b3_WRE1)>550)
	    {
	      if (b3_WLdet1==3 || b3_WLdet1==8)
		{
		  if (abs(b3_MWPCX1-95.5)>30)
		    {
		      hx[i]->Fill((b3_MWPCX1-95.5),sqrt(b3_WLE1*b3_WRE1)/func3->Eval(fx[i]->Eval(b3_MWPCX1-95.5)));
		      hteta[i]->Fill(b3_MWPCtheta1,sqrt(b3_WLE1*b3_WRE1));
		    }
		}
	      else if (b3_WLdet1==2 || b3_WLdet1==7 || b3_WLdet1==9 || b3_WLdet1==10)
		{
		  hx[i]->Fill((b3_MWPCX1-95.5),sqrt(b3_WLE1*b3_WRE1)/func3->Eval(fx[i]->Eval(b3_MWPCX1-95.5)));
		  hteta[i]->Fill(b3_MWPCtheta1,sqrt(b3_WLE1*b3_WRE1));
		}
	    }
	}
    }
   }


   f->cd();
   h1->Write();
   h2->Write();
  for (int i=0;i<10;i++)
    {
      hx[i]->Write();
      hteta[i]->Write();
    }
  f->Close();
}
