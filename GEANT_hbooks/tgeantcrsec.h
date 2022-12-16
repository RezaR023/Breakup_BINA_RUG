//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul 19 16:44:32 2017 by ROOT version 5.34/28
// from TChain h10/
//////////////////////////////////////////////////////////

#ifndef tgeantcrsec_h
#define tgeantcrsec_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class tgeantcrsec {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         P_x;
   Float_t         P_y;
   Float_t         P_theta;
   Float_t         P_phi;
   Float_t         P_e_thr;
   Float_t         P_e_dep;
   Float_t         P_de_dep;
   Float_t         P_bw;
   Float_t         P_ndet;
   Float_t         P;
   Float_t         D_x;
   Float_t         D_y;
   Float_t         D_theta;
   Float_t         D_phi;
   Float_t         D_e_thr;
   Float_t         D_e_dep;
   Float_t         D_de_dep;
   Float_t         D_bw;
   Float_t         D_ndet;
   Float_t         D;
   Float_t         D_thetat;
   Float_t         D_phit;
   Float_t         P_thetat;
   Float_t         P_phit;
   Float_t         N_thetat;
   Float_t         N_phit;
   Float_t         N_e_thr;
   Float_t         N_e_dep;

   // List of branches
   TBranch        *b_P_x;   //!
   TBranch        *b_P_y;   //!
   TBranch        *b_P_theta;   //!
   TBranch        *b_P_phi;   //!
   TBranch        *b_P_e_thr;   //!
   TBranch        *b_P_e_dep;   //!
   TBranch        *b_P_de_dep;   //!
   TBranch        *b_P_bw;   //!
   TBranch        *b_P_ndet;   //!
   TBranch        *b_P;   //!
   TBranch        *b_D_x;   //!
   TBranch        *b_D_y;   //!
   TBranch        *b_D_theta;   //!
   TBranch        *b_D_phi;   //!
   TBranch        *b_D_e_thr;   //!
   TBranch        *b_D_e_dep;   //!
   TBranch        *b_D_de_dep;   //!
   TBranch        *b_D_bw;   //!
   TBranch        *b_D_ndet;   //!
   TBranch        *b_D;   //!
   TBranch        *b_D_thetat;   //!
   TBranch        *b_D_phit;   //!
   TBranch        *b_P_thetat;   //!
   TBranch        *b_P_phit;   //!
   TBranch        *b_N_thetat;   //!
   TBranch        *b_N_phit;   //!
   TBranch        *b_N_e_thr;   //!
   TBranch        *b_N_e_dep;   //!

   tgeantcrsec(TTree *tree=0);
   virtual ~tgeantcrsec();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef tgeantcrsec_cxx
tgeantcrsec::tgeantcrsec(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("h10",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("h10","");
      //chain->Add("blahbreak.root/h10");
      chain->Add("geant_breaku_130.root/h10");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

tgeantcrsec::~tgeantcrsec()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t tgeantcrsec::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t tgeantcrsec::LoadTree(Long64_t entry)
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

void tgeantcrsec::Init(TTree *tree)
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

   fChain->SetBranchAddress("P_x", &P_x, &b_P_x);
   fChain->SetBranchAddress("P_y", &P_y, &b_P_y);
   fChain->SetBranchAddress("P_theta", &P_theta, &b_P_theta);
   fChain->SetBranchAddress("P_phi", &P_phi, &b_P_phi);
   fChain->SetBranchAddress("P_e_thr", &P_e_thr, &b_P_e_thr);
   fChain->SetBranchAddress("P_e_dep", &P_e_dep, &b_P_e_dep);
   fChain->SetBranchAddress("P_de_dep", &P_de_dep, &b_P_de_dep);
   fChain->SetBranchAddress("P_bw", &P_bw, &b_P_bw);
   fChain->SetBranchAddress("P_ndet", &P_ndet, &b_P_ndet);
   fChain->SetBranchAddress("P", &P, &b_P);
   fChain->SetBranchAddress("D_x", &D_x, &b_D_x);
   fChain->SetBranchAddress("D_y", &D_y, &b_D_y);
   fChain->SetBranchAddress("D_theta", &D_theta, &b_D_theta);
   fChain->SetBranchAddress("D_phi", &D_phi, &b_D_phi);
   fChain->SetBranchAddress("D_e_thr", &D_e_thr, &b_D_e_thr);
   fChain->SetBranchAddress("D_e_dep", &D_e_dep, &b_D_e_dep);
   fChain->SetBranchAddress("D_de_dep", &D_de_dep, &b_D_de_dep);
   fChain->SetBranchAddress("D_bw", &D_bw, &b_D_bw);
   fChain->SetBranchAddress("D_ndet", &D_ndet, &b_D_ndet);
   fChain->SetBranchAddress("D", &D, &b_D);
   fChain->SetBranchAddress("D_thetat", &D_thetat, &b_D_thetat);
   fChain->SetBranchAddress("D_phit", &D_phit, &b_D_phit);
   fChain->SetBranchAddress("P_thetat", &P_thetat, &b_P_thetat);
   fChain->SetBranchAddress("P_phit", &P_phit, &b_P_phit);
   fChain->SetBranchAddress("N_thetat", &N_thetat, &b_N_thetat);
   fChain->SetBranchAddress("N_phit", &N_phit, &b_N_phit);
   fChain->SetBranchAddress("N_e_thr", &N_e_thr, &b_N_e_thr);
   fChain->SetBranchAddress("N_e_dep", &N_e_dep, &b_N_e_dep);
   Notify();
}

Bool_t tgeantcrsec::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void tgeantcrsec::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t tgeantcrsec::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef tgeantcrsec_cxx
