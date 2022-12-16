//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 13 19:26:35 2019 by ROOT version 5.34/28
// from TTree pdbreakup/BINA p-d Breakup
// found on file: brkupDP.root
//////////////////////////////////////////////////////////

#ifndef DPcalib_h
#define DPcalib_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class DPcalib {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        b3_ID;
   Double_t        b3_EFW1;
   Double_t        b3_WLE1;
   Double_t        b3_WLtdc1;
   Double_t        b3_WLdet1;
   Double_t        b3_WRE1;
   Double_t        b3_WRtdc1;
   Double_t        b3_WRdet1;
   Double_t        b3_WDdE1;
   Double_t        b3_WDtdc1;
   Double_t        b3_WDdet1;
   Double_t        b3_WUdE1;
   Double_t        b3_WUtdc1;
   Double_t        b3_WUdet1;
   Double_t        b3_MWPCX1;
   Double_t        b3_MWPCY1;
   Double_t        b3_MWPCU1;
   Double_t        b3_MWPCtheta1;
   Double_t        b3_MWPCphi1;
   Double_t        b3_EFW2;
   Double_t        b3_WLE2;
   Double_t        b3_WLtdc2;
   Double_t        b3_WLdet2;
   Double_t        b3_WRE2;
   Double_t        b3_WRtdc2;
   Double_t        b3_WRdet2;
   Double_t        b3_WDdE2;
   Double_t        b3_WDtdc2;
   Double_t        b3_WDdet2;
   Double_t        b3_WUdE2;
   Double_t        b3_WUtdc2;
   Double_t        b3_WUdet2;
   Double_t        b3_MWPCX2;
   Double_t        b3_MWPCY2;
   Double_t        b3_MWPCU2;
   Double_t        b3_MWPCtheta2;
   Double_t        b3_MWPCphi2;
   Double_t        b3_Bnr;
   Double_t        b3_BLE;
   Double_t        b3_BSE;
   Double_t        b3_BcalE;
   Double_t        b3_Btheta;
   Double_t        b3_Bphi;
   Double_t        b3_ballhits;
   Double_t        b3_T1P;
   Double_t        b3_T2P;
   Double_t        b3_T3P;
   Double_t        b3_T4P;
   Double_t        b3_T1D;
   Double_t        b3_T2D;
   Double_t        b3_T3D;
   Double_t        b3_T4D;
   Double_t        b3_T1;
   Double_t        b3_T2;
   Double_t        b3_T3;
   Double_t        b3_T4;
   Double_t        b3_Pol;
   Double_t        b3_dT;
   Double_t        b3_Time;
   Double_t        b3_FCn;
   Double_t        b3_T1s;
   Double_t        b3_T1sDT;
   Double_t        b3_T1sDTS;
   Double_t        b3_10kHZ;
   Double_t        b3_10kHZDT;
   Double_t        b3_FC;
   Double_t        b3_TFera;
   Double_t        b3_AFera;

   // List of branches
   TBranch        *b_b3;   //!

   DPcalib(TTree *tree=0);
   virtual ~DPcalib();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DPcalib_cxx
DPcalib::DPcalib(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/media/sf_ZZshare/rootfiles/brkupDP.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/media/sf_ZZshare/rootfiles/brkupDP.root");
      }
      f->GetObject("pdbreakup",tree);

   }
   Init(tree);
}

DPcalib::~DPcalib()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DPcalib::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DPcalib::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DPcalib::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("b3", &b3_ID, &b_b3);
   Notify();
}

Bool_t DPcalib::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DPcalib::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DPcalib::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DPcalib_cxx
