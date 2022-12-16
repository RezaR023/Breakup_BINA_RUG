#define Nkinema64 (64)
#define Nkinema192 (192)
#define Nkinema (48)//(48)
#define Snr (6)
#define Ntheo (2)
TGraphErrors *gre[Nkinema][Snr];
TGraphErrors *gre_crsection[Nkinema192];
TGraphErrors *gre_crsection_T[Nkinema64][Ntheo];
TGraphErrors *gre_iT11_T[Nkinema64][Ntheo];
TGraphErrors *gre_T20_T[Nkinema64][Ntheo];
TGraphErrors *gre_T22_T[Nkinema64][Ntheo];
TGraphErrors *gre_crsection_Tn[Nkinema64];
TGraphErrors *gre_crsection_A[Nkinema];
TGraphErrors *gre_crsection_AA[Nkinema192];
TGraphErrors *gre_crsection_Av[Nkinema];
TGraphErrors *gre_crsection_Un[Nkinema];
TGraphErrors *gre_iT11_A[Nkinema];
TGraphErrors *gre_T20_A[Nkinema];
TGraphErrors *gre_T22_A[Nkinema];
TGraphErrors *gre_iT11_AA[Nkinema192];
TGraphErrors *gre_T20_AA[Nkinema192];
TGraphErrors *gre_T22_AA[Nkinema192];
TGraphErrors *gre_iT11[Nkinema192];
TGraphErrors *gre_T20[Nkinema192];
TGraphErrors *gre_T22[Nkinema192];
TGraphErrors *gre_iT11_te[Nkinema192];
TGraphErrors *gre_T20_te[Nkinema192];
TGraphErrors *gre_T22_te[Nkinema192];
TGraph *gr0;
double teta0=15.;
/*double tta_1[64]={15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.};
double tta_2[64]={15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.};
double phi12[64]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.};*/
//{160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.};
//{140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};

double tta_1[192]={15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.
,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.
,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.};
double tta_2[192]={15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.
,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.
,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.};
double phi12[192]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.
,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.
,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};
/////for the results with ahmad calibration////
/***double tta_1A[192]={15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.
,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.
,15.,15.,15.,15.,15.,15.,15.,15.,18.,18.,18.,18.,18.,18.,18.,18.,20.,20.,20.,20.,20.,20.,20.,20.,25.,25.,25.,25.,25.,25.,25.,25.,28.,28.,28.,28.,28.,28.,28.,28.,30.,30.,30.,30.,30.,30.,30.,30.,33.,33.,33.,33.,33.,33.,33.,33.,35.,35.,35.,35.,35.,35.,35.,35.};
double tta_2A[192]={15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.
,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.
,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.,15.,18.,20.,25.,28.,30.,33.,35.};
double phi12A[192]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.
,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.
,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};
****/

double tta_1A[48]={15.,15.,15.,15.,20.,20.,20.,20.,25.,25.,25.,25.,28.,28.,28.,28.,15.,15.,15.,15.,20.,20.,20.,20.,25.,25.,25.,25.,28.,28.,28.,28.,15.,15.,15.,15.,20.,20.,20.,20.,25.,25.,25.,25.,28.,28.,28.,28.};
double tta_2A[48]={15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.,15.,20.,25.,28.};
double phi12A[48]={180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,180.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,160.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.,140.};
char nam1[Nkinema192][350], nam1A[Nkinema][350],nam1AA[Nkinema192][350],nam1A1[Nkinema][350],nam1A2[Nkinema][350],nam1A3[Nkinema][350],nam1T[Nkinema192][Ntheo][350],nam1T1[Nkinema192][Ntheo][350],nam1T2[Nkinema192][Ntheo][350],nam1T3[Nkinema192][Ntheo][350],nam1Tn[Nkinema192][350],nam11[Nkinema192][350],nam12[Nkinema192][350],nam13[Nkinema192][350],nam11AA[Nkinema192][350],nam12AA[Nkinema192][350],nam13AA[Nkinema192][350],nam1te[Nkinema192][350],nam11te[Nkinema192][350],nam12te[Nkinema192][350],nam13te[Nkinema192][350];

// TFile *ff1=new TFile ("/home/reza/BINAreall/rootfiles/CrSecDDn/vbrkupcrsecsfi180final_factor2_mbarn.root");
 TFile *ff1=new TFile ("/home/reza/BINAreall/rootfiles/CrSecDDn/vbrkupcrsecsfiWholefinal_factor2_mbarn.root");
 TFile *ff1ana=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2/vbrkupAnaPowfiWholeFixParMycalUsingcut_1parFitfunc1m.root");
// TFile *ff1te=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2_testNeutron/vbrkupAnaPowfi1801parFitfunc1mUsingTOF_MWTOF1_random_Snr14Nbin18n.root");
 TFile *ff1te=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2_testNeutron/FbrkupAnaPowfiWhole1parFitfunc1mUsingTOF_MWTOF1_random_Snr14Nbin18n_n_TotPerc.root");
// TFile *ff1te=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2_testNeutron/FbrkupAnaPowfiWhole1parFitfunc1mUsingTOF_MWTOF1_random_Snr14Nbin18n_n_T10Perc.root");
// TFile *ff1te=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2_testNeutron/FbrkupAnaPowfiWhole1parFitfunc1mUsingTOF_MWTOF1_random_Snr14Nbin18n_newcut.root");
 TFile *ffAA=new TFile ("/home/reza/BINAreall/rootfiles/CrSecDDn/vbrkupcrsecsfiWholefinal_factor2_mbarn_Ahcal.root");
 TFile *ffA=new TFile ("/home/reza/BINAreall/Deltuva_new_Theory/newest_make_Ntpl_from_resulrs/NtuplAhmaRes.root");
// TFile *ffT=new TFile ("/home/reza/BINAreall/Deltuva_new_Theory/newest_make_Ntpl_from_resulrs/VNtpletoGraphwithEn.root");
 TFile *ffT=new TFile ("/home/reza/BINAreall/Deltuva_new_Theory/VNtpletoGraphn.root");

int Book_myRes();
int Book_ResAhcal();
int Book_AhRes();
int Book_TRes();
void getAve();
int Book_testRes();
TCanvas *cc[Nkinema];
void canvas15A160(){
gStyle->SetOptStat(00);
 double ax=110., x1=171., x2=279., ay=12., y1=-.59, y2=.59;
char ch[3][20];
 double tet1[6]={15,18,20,25,28,30};
 double tet2[6]={15,18,20,25,28,30};
  TFile *ftest=new TFile ("testtt.root","recreate");
 Book_myRes();
 Book_AhRes();
 Book_TRes();
 Book_ResAhcal();
Book_testRes();
 //getAve();
    h1=new TH2D("h1",ch[0],250,160,290,9,0,1.5);
 /* TFile *ff=new TFile ("/home/reza/BINAreall/rootfiles/AnalyzinPower_Brkup/step2/vbrkupAnaPowfiWholeFixParAhcal_1parFitfunc1m.root","Read");
 //sprintf(ch[0],";S [MeV];d^5#sigma/d#Omega_{1}d#Omega_{2}dS [#mub/sr^2MeV]");//,mode[Pol[1]]);
sprintf(ch[0],";S [MeV];T20");//,mode[Pol[1]]);
    h=new TH2D("h",ch[0],250,160,290,8,-1.5,.5);
 for (int i=0; i<Nkinema; i++){
   for (int j=0; j<Snr; j++){
   gre[i][j]=new TGraphErrors();
   gr0=new TGraph();
   TF1 *f1=new TF1("f1","0",100,300);
   }
 }*/
    //TCanvas *c4 = new TCanvas("c4","BINA Canvas 1"); 
    //c4->SetFillColor(10);  
    // c4->Size(30,25);
    // Set_margins_canvas(c4,2,3);
    //TPaveText *text[8];
TH2D *h[8];
TH2D *h1[16];
int l=1;
///main canvas///
// for (int i=0; i<Nkinema; i++){
// for (int j=0; j<Nkinema64; j++){l=1;
//   if (tta_1A[i]==15. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
//     {

   TCanvas *canvas_0 = new TCanvas("canvas_0", "Cross section and ...",4,21,1202,820);
   gStyle->SetOptStat(0);
   canvas_0->Range(0,0,1,1);
   canvas_0->SetFillColor(10);
   canvas_0->SetBorderSize(2);
   canvas_0->SetFrameFillColor(0);
   TLatex *   tex = new TLatex(0.49,0.02,"S [MeV]");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.08,0.39,"AnaPowers");//"#frac{d^{5}#sigma}{d#Omega_{1}d#Omega_{2}dS} [#frac{mb}{sr^{2} MeV}]");
   tex->SetTextSize(0.029484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(1.5);
   tex->Draw();

      tex = new TLatex(0.9566,0.74,"(#theta_{d}=15,#theta_{p}=15)");
   tex->SetTextSize(0.028484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(1.5);
   tex->Draw();
      tex = new TLatex(0.9566,0.53,"(#theta_{d}=15,#theta_{p}=20)");
   tex->SetTextSize(0.028484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(1.5);
   tex->Draw();
      tex = new TLatex(0.9566,0.33,"(#theta_{d}=15,#theta_{p}=25)");
   tex->SetTextSize(0.028484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(1.5);
   tex->Draw();
      tex = new TLatex(0.9566,0.1285,"(#theta_{d}=15,#theta_{p}=28)");
   tex->SetTextSize(0.028484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(1.5);
   tex->Draw();
      tex = new TLatex(0.225,0.96,"iT_{11}, #phi_{12} = 160^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.488,0.96,"T_{20}, #phi_{12} = 160^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.96,"T_{22}, #phi_{12} = 160^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0.1,0.075,0.945,0.9245);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0,0,1,1);
   pad1->SetFillColor(10);
   pad1->SetBorderSize(2);
   pad1->SetLeftMargin(0.0333333);
   pad1->SetRightMargin(0.03125);
   pad1->SetTopMargin(0.0250522);
   pad1->SetBottomMargin(0.0250522);
   pad1->SetFrameFillColor(0);
  
// ------------>Primitives in pad: pad1_1
   pad1_1 = new TPad("pad1_1", "pad1_1",0,0.757474,0.345139,0.994948);
   pad1_1->Draw();
   pad1_1->cd();
   pad1_1->Range(84.878,-3,280,0.30103);
   pad1_1->SetFillColor(10);
   pad1_1->SetBorderMode(0);
   pad1_1->SetBorderSize(2);
   // pad1_1->SetLogy();
   pad1_1->SetTickx();
   pad1_1->SetTicky();
   pad1_1->SetLeftMargin(0.11);
   pad1_1->SetRightMargin(0);
   pad1_1->SetTopMargin(0);
   pad1_1->SetBottomMargin(0);
   pad1_1->SetFrameFillColor(0);
   
   //   TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
//   TH1 *hisCro = new TH2D("hisCro","",100,180,280,700,10,700);
   /// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.02);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
     for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       /////////if (tta_1[j]==teta0 && tta_2[j]==15. phi12[j]==180)
       if (tta_1A[i]==teta0 && tta_2A[i]==15. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*	   gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");
	   gre_crsection_A[i]->SetMarkerColor(2);
	   gre_crsection_A[i]->Draw("samep");
	   gre_crsection_AA[j]->SetMarkerColor(3);
	   gre_crsection_AA[j]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //	 gre_crsection_T[j][0]->SetLineStyle(1);
	   gre_crsection_T[j][0]->Draw("same");
	   gre_crsection_T[j][1]->Draw("same");*/
	   //gre_iT11[j]->SetMarkerColor(4);
	   //gre_iT11[j]->SetLineColor(4);
	   gre_iT11[j]->Draw("samep");
	   //gre_iT11_te[j]->SetLineColor(3);
	   //gre_iT11_te[j]->SetMarkerColor(3);
	   gre_iT11_te[j]->Draw("samep");
	   //gre_iT11_A[i]->SetLineColor(2);
	   //gre_iT11_A[i]->SetMarkerColor(2);
	   //gre_iT11_A[i]->Draw("samep");
	   // gre_crsection_Tn[j]->Draw("same");
	 }
     }
   }
   pad1_1->Modified();
   pad1->cd();
// ------------>Primitives in pad: pad1_4
   pad1_4 = new TPad("pad1_4", "pad1_4",0,0.52,0.345139,0.757474);
   pad1_4->Draw();
   pad1_4->cd();
   pad1_4->Range(84.878,-0.57,280,0.57);
   pad1_4->SetFillColor(10);
   pad1_4->SetBorderMode(0);
   pad1_4->SetBorderSize(2);
   //pad1_4->SetLogy();
   pad1_4->SetTickx();
   pad1_4->SetTicky();
   pad1_4->SetLeftMargin(0.11);
   pad1_4->SetRightMargin(0);
   pad1_4->SetTopMargin(0);
   pad1_4->SetBottomMargin(0);
   pad1_4->SetFrameFillColor(0);
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   /// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.011);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.02);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       ///////if (tta_1[j]==teta0 && tta_2[j]==20. && phi12[j]==180.)
       if (tta_1A[i]==teta0 && tta_2A[i]==20. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /* gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");
	   gre_crsection_A[i]->SetMarkerColor(2);
	   gre_crsection_A[i]->Draw("samep");
	   gre_crsection_AA[j]->SetMarkerColor(3);
	   gre_crsection_AA[j]->Draw("samep");
	   //gre_crsection_Av[i]->SetMarkerColor(1);
	   //gre_crsection_Av[i]->Draw("samep");
	   //	 gre_crsection_T[j][0]->SetLineStyle(1);
	   gre_crsection_T[j][0]->Draw("same");
	  gre_crsection_T[j][1]->Draw("same");*/
	   //gre_iT11[j]->SetMarkerColor(4);
	   //gre_iT11[j]->SetLineColor(4);
	   gre_iT11[j]->Draw("samep");
	   //gre_iT11_te[j]->SetLineColor(3);
	   //gre_iT11_te[j]->SetMarkerColor(3);
	   gre_iT11_te[j]->Draw("samep");
	   gre_iT11_A[i]->SetLineColor(2);
	   gre_iT11_A[i]->SetMarkerColor(2);
	   //gre_iT11_A[i]->Draw("samep");
	   //  gre_crsection_Tn[j]->Draw("same");
	 }
     }
   }
   pad1_4->Modified();
   pad1->cd();
// ------------>Primitives in pad: pad1_7
   pad1_7 = new TPad("pad1_7", "pad1_7",0,0.282526,0.345139,0.52);
   pad1_7->Draw();
   pad1_7->cd();
   pad1_7->Range(84.878,-0.57,280,0.57);
   pad1_7->SetFillColor(10);
   pad1_7->SetBorderMode(0);
   pad1_7->SetBorderSize(2);
   // pad1_7->SetLogy();
   pad1_7->SetTickx();
   pad1_7->SetTicky();
   pad1_7->SetLeftMargin(0.11);
   pad1_7->SetRightMargin(0);
   pad1_7->SetTopMargin(0);
   pad1_7->SetBottomMargin(0);
   pad1_7->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   /// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.02);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       //////////if (tta_1[j]==teta0 && tta_2[j]==25. && phi12[j]==180.)
       if (tta_1A[i]==teta0 && tta_2A[i]==25. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");
	   gre_crsection_A[i]->SetMarkerColor(2);
	   gre_crsection_A[i]->Draw("samep");
	   gre_crsection_AA[j]->SetMarkerColor(3);
	   gre_crsection_AA[j]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //	 gre_crsection_T[j][0]->SetLineStyle(1);
	   gre_crsection_T[j][0]->Draw("same");
	   gre_crsection_T[j][1]->Draw("same");*/
	   //gre_iT11[j]->SetMarkerColor(4);
	   //gre_iT11[j]->SetLineColor(4);
	   gre_iT11[j]->Draw("samep");
	   //gre_iT11_te[j]->SetLineColor(3);
	   //gre_iT11_te[j]->SetMarkerColor(3);
	   gre_iT11_te[j]->Draw("samep");
	   gre_iT11_A[i]->SetLineColor(2);
	   gre_iT11_A[i]->SetMarkerColor(2);
	   //gre_iT11_A[i]->Draw("samep");
	   //gre_crsection_Tn[j]->Draw("same");
	 }
     }
   }
   pad1_7->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_10
   pad1_10 = new TPad("pad1_10", "pad1_10",0,0,0.345139,0.282526);
   pad1_10->Draw();
   pad1_10->cd();
   pad1_10->Range(84.878,-0.855,280,0.57);
   pad1_10->SetFillColor(10);
   pad1_10->SetBorderMode(0);
   pad1_10->SetBorderSize(2);
   //pad1_10->SetLogy();
   pad1_10->SetTickx();
   pad1_10->SetTicky();
   pad1_10->SetLeftMargin(0.11);
   pad1_10->SetRightMargin(0);
   pad1_10->SetTopMargin(0);
   pad1_10->SetBottomMargin(0.15);
   pad1_10->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.06);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.02);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==28. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	 ///if (tta_1[j]==teta0 && tta_2[j]==28. && phi12[j]==180.)
   	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");
	   gre_crsection_A[i]->SetMarkerColor(2);
	   gre_crsection_A[i]->Draw("samep");
	   gre_crsection_AA[j]->SetMarkerColor(3);
	   gre_crsection_AA[j]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //	 gre_crsection_T[j][0]->SetLineStyle(1);
	   gre_crsection_T[j][0]->Draw("same");
	   gre_crsection_T[j][1]->Draw("same");*/
	   //gre_iT11[j]->SetMarkerColor(4);
	   //gre_iT11[j]->SetLineColor(4);
	   gre_iT11[j]->Draw("samep");
	   //gre_iT11_te[j]->SetLineColor(3);
	   //gre_iT11_te[j]->SetMarkerColor(3);
	   gre_iT11_te[j]->Draw("samep");
	   gre_iT11_A[i]->SetLineColor(2);
	   gre_iT11_A[i]->SetMarkerColor(2);
	   //gre_iT11_A[i]->Draw("samep");
	   //gre_crsection_Tn[j]->Draw("same");
	 }
     }
   }
   pad1_10->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_2
   pad1_2 = new TPad("pad1_2", "pad1_2",0.345139,0.757474,0.656944,0.994948);
   pad1_2->Draw();
   pad1_2->cd();
   pad1_2->Range(120,-3,280,0.30103);
   pad1_2->SetFillColor(10);
   pad1_2->SetBorderMode(0);
   pad1_2->SetBorderSize(2);
   //pad1_2->SetLogy();
   pad1_2->SetTickx();
   pad1_2->SetTicky();
   pad1_2->SetLeftMargin(0);
   pad1_2->SetRightMargin(0);
   pad1_2->SetTopMargin(0);
   pad1_2->SetBottomMargin(0);
   pad1_2->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   //// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
              if (tta_1A[i]==teta0 && tta_2A[i]==15. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
       //       if (tta_1[j]==teta0 && tta_2[j]==15. && phi12[j]==160.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T20[j]->SetMarkerColor(4);
	   //gre_T20[j]->SetLineColor(4);
	   gre_T20[j]->Draw("samep");
	   //gre_T20_te[j]->SetLineColor(3);
	   //gre_T20_te[j]->SetMarkerColor(3);
	   gre_T20_te[j]->Draw("samep");
	   gre_T20_A[i]->SetLineColor(2);
	   //gre_T20_A[i]->SetMarkerColor(2);
	   //gre_T20_A[i]->Draw("samep");

	 }
     }
   }
   pad1_2->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_5
   pad1_5 = new TPad("pad1_5", "pad1_5",0.345139,0.52,0.656944,0.757474);
   pad1_5->Draw();
   pad1_5->cd();
   pad1_5->Range(120,-0.57,280,0.57);
   pad1_5->SetFillColor(10);
   pad1_5->SetBorderMode(0);
   pad1_5->SetBorderSize(2);
   //pad1_5->SetLogy();
   pad1_5->SetTickx();
   pad1_5->SetTicky();
   pad1_5->SetLeftMargin(0);
   pad1_5->SetRightMargin(0);
   pad1_5->SetTopMargin(0);
   pad1_5->SetBottomMargin(0);
   pad1_5->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
      for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
              if (tta_1A[i]==teta0 && tta_2A[i]==20. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
		//if (tta_1[j]==teta0 && tta_2[j]==20. && phi12[j]==160.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	     gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T20[j]->SetMarkerColor(4);
	   //gre_T20[j]->SetLineColor(4);
	   gre_T20[j]->Draw("samep");
	   //gre_T20_te[j]->SetLineColor(3);
	   //gre_T20_te[j]->SetMarkerColor(3);
	   gre_T20_te[j]->Draw("samep");
	   //gre_T20_A[i]->SetLineColor(2);
	   //gre_T20_A[i]->SetMarkerColor(2);
	   //gre_T20_A[i]->Draw("samep");
	 }
     }
   }
   pad1_5->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_8
   pad1_8 = new TPad("pad1_8", "pad1_8",0.345139,0.282526,0.656944,0.52);
   pad1_8->Draw();
   pad1_8->cd();
   pad1_8->Range(120,-0.57,280,0.57);
   pad1_8->SetFillColor(10);
   pad1_8->SetBorderMode(0);
   pad1_8->SetBorderSize(2);
   //pad1_8->SetLogy();
   pad1_8->SetTickx();
   pad1_8->SetTicky();
   pad1_8->SetLeftMargin(0);
   pad1_8->SetRightMargin(0);
   pad1_8->SetTopMargin(0);
   pad1_8->SetBottomMargin(0);
   pad1_8->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   //// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
      for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==25. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
       //if (tta_1[j]==teta0 && tta_2[j]==25. && phi12[j]==160.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T20[j]->SetMarkerColor(4);
	   //gre_T20[j]->SetLineColor(4);
	   gre_T20[j]->Draw("samep");
	   //gre_T20_te[j]->SetLineColor(3);
	   //gre_T20_te[j]->SetMarkerColor(3);
	   gre_T20_te[j]->Draw("samep");
	   gre_T20_A[i]->SetLineColor(2);
	   gre_T20_A[i]->SetMarkerColor(2);
	   //gre_T20_A[i]->Draw("samep");
	 }
     }
   }
   pad1_8->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_11
   pad1_11 = new TPad("pad1_11", "pad1_11",0.345139,0,0.656944,0.282526);
   pad1_11->Draw();
   pad1_11->cd();
   pad1_11->Range(120,-0.855,280,0.57);
   pad1_11->SetFillColor(10);
   pad1_11->SetBorderMode(0);
   pad1_11->SetBorderSize(2);
   //pad1_11->SetLogy();
   pad1_11->SetTickx();
   pad1_11->SetTicky();
   pad1_11->SetLeftMargin(0);
   pad1_11->SetRightMargin(0);
   pad1_11->SetTopMargin(0);
   pad1_11->SetBottomMargin(0.15);
   pad1_11->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.06);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
      for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==28. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	    //if (tta_1[j]==teta0 && tta_2[j]==28. && phi12[j]==160.)
	 {
	   // gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T20[j]->SetMarkerColor(4);
	   //gre_T20[j]->SetLineColor(4);
	   gre_T20[j]->Draw("samep");
	   //gre_T20_te[j]->SetLineColor(3);
	   //gre_T20_te[j]->SetMarkerColor(3);
	   gre_T20_te[j]->Draw("samep");
	   gre_T20_A[i]->SetLineColor(2);
	   gre_T20_A[i]->SetMarkerColor(2);
	   //gre_T20_A[i]->Draw("samep");
	 }
     }
   }
   pad1_11->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_3
   pad1_3 = new TPad("pad1_3", "pad1_3",0.656944,0.757474,0.96875,0.994948);
   pad1_3->Draw();
   pad1_3->cd();
   pad1_3->Range(120,-3,288.421,0.30103);
   pad1_3->SetFillColor(10);
   pad1_3->SetBorderMode(0);
   pad1_3->SetBorderSize(2);
   //pad1_3->SetLogy();
   pad1_3->SetTickx();
   pad1_3->SetTicky();
   pad1_3->SetLeftMargin(0);
   pad1_3->SetRightMargin(0.005);
   pad1_3->SetTopMargin(0);
   pad1_3->SetBottomMargin(0);
   pad1_3->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==15. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
       //if (tta_1[j]==teta0 && tta_2[j]==15. && phi12[j]==140.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*	   gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T22[j]->SetMarkerColor(4);
	   //gre_T22[j]->SetLineColor(4);
	   gre_T22[j]->Draw("samep");
	   //gre_T22_te[j]->SetLineColor(3);
	   //gre_T22_te[j]->SetMarkerColor(3);
	   gre_T22_te[j]->Draw("samep");
	   gre_T22_A[i]->SetLineColor(2);
	   gre_T22_A[i]->SetMarkerColor(2);
	   //gre_T22_A[i]->Draw("samep");
	 }
     }
   }
   pad1_3->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_6
   pad1_6 = new TPad("pad1_6", "pad1_6",0.656944,0.52,0.96875,0.757474);
   pad1_6->Draw();
   pad1_6->cd();
   pad1_6->Range(120,-0.57,288.421,0.57);
   pad1_6->SetFillColor(10);
   pad1_6->SetBorderMode(0);
   pad1_6->SetBorderSize(2);
   //pad1_6->SetLogy();
   pad1_6->SetTickx();
   pad1_6->SetTicky();
   pad1_6->SetLeftMargin(0);
   pad1_6->SetRightMargin(0.005);
   pad1_6->SetTopMargin(0);
   pad1_6->SetBottomMargin(0);
   pad1_6->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
              if (tta_1A[i]==teta0 && tta_2A[i]==20. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
		//if (tta_1[j]==teta0 && tta_2[j]==20. && phi12[j]==140.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   // gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T22[j]->SetMarkerColor(4);
	   //gre_T22[j]->SetLineColor(4);
	   gre_T22[j]->Draw("samep");
	   //gre_T22_te[j]->SetLineColor(3);
	   //gre_T22_te[j]->SetMarkerColor(3);
	   gre_T22_te[j]->Draw("samep");
	   gre_T22_A[i]->SetLineColor(2);
	   gre_T22_A[i]->SetMarkerColor(2);
	   //gre_T22_A[i]->Draw("samep");
	 }
     }
   }
   pad1_6->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_9
   pad1_9 = new TPad("pad1_9", "pad1_9",0.656944,0.282526,0.96875,0.52);
   pad1_9->Draw();
   pad1_9->cd();
   pad1_9->Range(120,-0.57,288.421,0.57);
   pad1_9->SetFillColor(10);
   pad1_9->SetBorderMode(0);
   pad1_9->SetBorderSize(2);
   //pad1_9->SetLogy();
   pad1_9->SetTickx();
   pad1_9->SetTicky();
   pad1_9->SetLeftMargin(0);
   pad1_9->SetRightMargin(0.005);
   pad1_9->SetTopMargin(0);
   pad1_9->SetBottomMargin(0);
   pad1_9->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   ////TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
      for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==25. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
       //if (tta_1[j]==teta0 && tta_2[j]==25. && phi12[j]==140.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T22[j]->SetMarkerColor(4);
	   //gre_T22[j]->SetLineColor(4);
	   gre_T22[j]->Draw("samep");
	   //gre_T22_te[j]->SetLineColor(3);
	   //gre_T22_te[j]->SetMarkerColor(3);
	   gre_T22_te[j]->Draw("samep");
	   gre_T22_A[i]->SetLineColor(2);
	   gre_T22_A[i]->SetMarkerColor(2);
	   //gre_T22_A[i]->Draw("samep");
	 }
     }
   }
   pad1_9->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_12
   pad1_12 = new TPad("pad1_12", "pad1_12",0.656944,0,0.96875,0.282526);
   pad1_12->Draw();
   pad1_12->cd();
   pad1_12->Range(120,-0.855,288.421,0.57);
   pad1_12->SetFillColor(10);
   pad1_12->SetBorderMode(0);
   pad1_12->SetBorderSize(2);
   //pad1_12->SetLogy();
   pad1_12->SetTickx();
   pad1_12->SetTicky();
   pad1_12->SetLeftMargin(0);
   pad1_12->SetRightMargin(0.005);
   pad1_12->SetTopMargin(0);
   pad1_12->SetBottomMargin(0.15);
   pad1_12->SetFrameFillColor(0);
   
   //TH1 *hisCro = new TH2D("hisCro","",110,140,245,10,0.02,2.99);
   //// TH1 *hisCro = new TH2D("hisCro","",110,140,245,8,-.6,.6);
   TH1 *hisCro = new TH2D("hisCro","",ax,x1,x2,ay,y1,y2);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.06);
   hisCro->GetXaxis()->SetLabelSize(0.11);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.11);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
      for (int i=0; i<Nkinema; i++){
     for (int j=0; j<Nkinema192; j++){l=1;
       if (tta_1A[i]==teta0 && tta_2A[i]==28. && phi12A[i]==160. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
       //if (tta_1[j]==teta0 && tta_2[j]==28. && phi12[j]==140.)
	 {
	   //gre_crsection_Un[i]->SetFillColor(16);
	   //gre_crsection_Un[i]->Draw("E3");
	   /*gre_crsection[j]->SetMarkerColor(4);
	   gre_crsection[j]->Draw("samep");*/
	   //gre_crsection_A[i]->SetMarkerColor(2);
	   //gre_crsection_A[i]->Draw("samep");
	   //gre_crsection_Av[i]->Draw("samep");
	   //gre_T22[j]->SetMarkerColor(4);
	   //gre_T22[j]->SetLineColor(4);
	   gre_T22[j]->Draw("samep");
	   //gre_T22_te[j]->SetLineColor(3);
	   //gre_T22_te[j]->SetMarkerColor(3);
	   gre_T22_te[j]->Draw("samep");
	   gre_T22_A[i]->SetLineColor(2);
	   gre_T22_A[i]->SetMarkerColor(2);
	   //gre_T22_A[i]->Draw("samep");
	 }
     }
   }
   pad1_12->Modified();
   pad1->cd();
   pad1->Modified();
   canvas_0->cd();
   canvas_0->Modified();
   canvas_0->cd();
   canvas_0->SetSelected(canvas_0);
   //       }
   //   }
   // }
///end main canvas///

/****for (int i=0; i<1; i++){l=1;
   for (int j=0; j<Snr; j++){
c4->cd(l++);
//gPad->SetLogy(1);
 sprintf(ch[1],"gr_T20_%d_%d_%d",tet1[i],tet2[j],180);
    gre[i][j]=(TGraphErrors*)gROOT->FindObject(ch[1]);
    //gre[i][j]->GetXaxis()->SetRangeUser(155,275);
    //gre[i][j]->GetYaxis()->SetRangeUser(1,140);
   gre[i][j]->SetMarkerStyle(20);
   gre[i][j]->SetMarkerColor(1);
   gre[i][j]->SetLineColor(1);
    //h[j]=new TH2D(ch[1],ch[0],64,1,65,100,.05,.35);
    h->Draw();
    //f1->SetLineColor(2);
    //f1->Draw("same");
    gre[i][j]->Draw("samep");
 sprintf(ch[2],"%d_%d_%d",tet1[i],tet2[j],180);
 if(fmod(l-1,2)==1)  text[j]= new TPaveText(0.15,0.9,0.30,1.,"blNDC");
else if(fmod(l-1,2)==0) text[j]= new TPaveText(0.,0.9,0.15,1.,"blNDC");
    text[j]->AddText(ch[2]);
    text[j]->SetBorderSize(1);
    text[j]->Draw();
   }
 }*/
 //for (int i=0; i<Nkinema; i++){
 //  for (int j=0; j<Nkinema64; j++){l=1;
 //    if (tta_1A[i]==15. && tta_2A[i]==15. && tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
 //      {
 //	 c4->cd(l++);
 //	 h1->Draw();
 //	 gre_crsection[j]->Draw("samep");
 //	 gre_crsection_T[j][0]->Draw("samep");
 //	 gre_crsection_T[j][1]->Draw("samep");
	 /*sprintf(ch[2],"%d_%d_%d",tta_1A[i],tta_2A[i],phi12A[i]);
	 if(fmod(l-1,2)==1)  text[j]= new TPaveText(0.15,0.9,0.30,1.,"blNDC");
	 else if(fmod(l-1,2)==0) text[j]= new TPaveText(0.,0.9,0.15,1.,"blNDC");
	 text[j]->AddText(ch[2]);
	 text[j]->SetBorderSize(1);
	 text[j]->Draw();*/
 //      }
 //  }
 //}


   //  ftest->cd();
   //  for (int i=0;i<Nkinema64;i++){
   //   gre_crsection_Tn[i]->Write();
   //        for (int j=0;j<Ntheo;j++){
   //  gre_crsection_T[i][j]->Write();
   //  gre_iT11_T[i][j]->Write();
   //  gre_T20_T[i][j]->Write();
   //  gre_T22_T[i][j]->Write();
   //    }
   // }
 //ftest->Close();
}

void Set_margins_canvas(TCanvas *c,int n1,int n2){
  c->Divide(n1,n2,0);
  double LM=0.,RM=0.,TM=0.,BM=0.;
  for (int i=1;i<=n1*n2;i++){
    if (fmod(i,2)==1) LM=.15;
    else LM=0.;
    if (i>(n1*n2-2)) BM=.1;
    else BM=0.;
    if (fmod(i,2)==0) RM=0.05;
    else RM=0.;
//if(i==1 || i==2) TM=0.05; else TM=0.;
    Set_margins_pad(c,i,LM,RM,TM,BM);
  }
}

void Set_margins_pad(TCanvas *c,int padn,double LM,
		     double RM,double TM,double BM){
  c->cd(padn)->SetTopMargin(TM);
  c->cd(padn)->SetBottomMargin(BM);
  c->cd(padn)->SetLeftMargin(LM);
  c->cd(padn)->SetRightMargin(RM);
  c->cd(padn)->SetFillColor(10);
}

int Book_myRes(){
  for (int i=0;i<Nkinema192;i++){
    sprintf(nam1[i],"gr_crsection_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam11[i],"gr_iT11_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam12[i],"gr_T20_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam13[i],"gr_T22_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
  }
  for (int i=0;i<Nkinema192;i++){
    gre_crsection[i]=(TGraphErrors*)ff1->Get(nam1[i]);
    //    gre_crsection[i]->SetName();
    gre_iT11[i]=(TGraphErrors*)ff1ana->Get(nam11[i]);
    gre_T20[i]=(TGraphErrors*)ff1ana->Get(nam12[i]);
    gre_T22[i]=(TGraphErrors*)ff1ana->Get(nam13[i]);
    gre_iT11[i]->SetMarkerColor(2);
    gre_iT11[i]->SetMarkerStyle(20);
    gre_iT11[i]->SetLineColor(2);
    gre_T20[i]->SetMarkerColor(2);
    gre_T20[i]->SetMarkerStyle(20);
    gre_T20[i]->SetLineColor(2);
    gre_T22[i]->SetMarkerColor(2);
    gre_T22[i]->SetMarkerStyle(20);
    gre_T22[i]->SetLineColor(2);
  }
}
//////the results with Ahmad calibraion
int Book_ResAhcal(){
  for (int i=0;i<Nkinema192;i++){
    sprintf(nam1AA[i],"gr_crsection_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam11AA[i],"gr_iT11_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam12AA[i],"gr_T20_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam13AA[i],"gr_T22_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
  }
  for (int i=0;i<Nkinema192;i++){
    gre_crsection_AA[i]=(TGraphErrors*)ffAA->Get(nam1AA[i]);
    //    gre_crsection[i]->SetName();
    //  gre_iT11[i]_AA=(TGraphErrors*)ff1AA->Get(nam11AA[i]);
    //gre_T20[i]_AA=(TGraphErrors*)ff1AA->Get(nam12AA[i]);
    //gre_T22[i]_AA=(TGraphErrors*)ff1AA->Get(nam13AA[i]);

  }
}
//////////////////

int Book_AhRes(){
  double xx[30],yy[30];
  for (int i=0;i<Nkinema;i++){
    sprintf(nam1A[i],"gr_CrSec_%d_%d_%d",(int)tta_1A[i],(int)tta_2A[i],(int)phi12A[i]);
    sprintf(nam1A1[i],"gr_iT11_%d_%d_%d",(int)tta_1A[i],(int)tta_2A[i],(int)phi12A[i]);
    sprintf(nam1A2[i],"gr_T20_%d_%d_%d",(int)tta_1A[i],(int)tta_2A[i],(int)phi12A[i]);
    sprintf(nam1A3[i],"gr_T22_%d_%d_%d",(int)tta_1A[i],(int)tta_2A[i],(int)phi12A[i]);
  }
  for (int i=0;i<Nkinema;i++){
    gre_crsection_A[i]=(TGraphErrors*)ffA->Get(nam1A[i]);
    gre_iT11_A[i]=(TGraphErrors*)ffA->Get(nam1A1[i]);
    gre_T20_A[i]=(TGraphErrors*)ffA->Get(nam1A2[i]);
    gre_T22_A[i]=(TGraphErrors*)ffA->Get(nam1A3[i]);
    //    gre_crsection[i]->SetName();
    /////for define TGraph
    gre_crsection_Av[i]=(TGraphErrors*)ffA->Get(nam1A[i]);
    gre_crsection_Un[i]=(TGraphErrors*)ffA->Get(nam1A[i]);

    int NUM=gre_crsection_A[i]->GetN();
    for (int k=0;k<NUM;k++){
    gre_crsection_A[i]->GetPoint(k,xx[k],yy[k]);
    }
    for (int k=0;k<NUM;k++){
    gre_crsection_A[i]->SetPoint(k,xx[k]+5,2*yy[k]);
    }
  }
}
int Book_TRes(){
  for (int i=0;i<Nkinema64;i++){
    sprintf(nam1Tn[i],"gr_NeutEnergy_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
  for (int j=0;j<Ntheo;j++){
    sprintf(nam1T[i][j],"gr_CrSec_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    sprintf(nam1T1[i][j],"gr_AnaiT11_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    sprintf(nam1T2[i][j],"gr_AnaT20_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
    sprintf(nam1T3[i][j],"gr_AnaT22_%d_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i],j);
  }
  }
  for (int i=0;i<Nkinema64;i++){
    gre_crsection_Tn[i]=(TGraphErrors*)ffT->Get(nam1Tn[i]);
    for (int j=0;j<Ntheo;j++){
    gre_crsection_T[i][j]=(TGraphErrors*)ffT->Get(nam1T[i][j]);
    gre_iT11_T[i][j]=(TGraphErrors*)ffT->Get(nam1T1[i][j]);
    gre_T20_T[i][j]=(TGraphErrors*)ffT->Get(nam1T2[i][j]);
    gre_T22_T[i][j]=(TGraphErrors*)ffT->Get(nam1T3[i][j]);
    //    gre_crsection[i]->SetName();
    }
  }
}
/////////results of ana powe for the situation similar to neutron for proton
int Book_testRes(){
  for (int i=0;i<Nkinema192;i++){
    sprintf(nam1te[i],"gr_crsection_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam11te[i],"gr_iT11_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam12te[i],"gr_T20_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
    sprintf(nam13te[i],"gr_T22_%d_%d_%d",(int)tta_1[i],(int)tta_2[i],(int)phi12[i]);
  }
  for (int i=0;i<Nkinema192;i++){
    // gre_crsection_te[i]=(TGraphErrors*)ff1te->Get(nam1te[i]);
    gre_iT11_te[i]=(TGraphErrors*)ff1te->Get(nam11te[i]);
    gre_T20_te[i]=(TGraphErrors*)ff1te->Get(nam12te[i]);
    gre_T22_te[i]=(TGraphErrors*)ff1te->Get(nam13te[i]);
    gre_iT11_te[i]->SetMarkerColor(4);
    gre_iT11_te[i]->SetMarkerStyle(21);
    gre_iT11_te[i]->SetLineColor(4);
    gre_T20_te[i]->SetMarkerColor(4);
    gre_T20_te[i]->SetMarkerStyle(21);
    gre_T20_te[i]->SetLineColor(4);
    gre_T22_te[i]->SetMarkerColor(4);
    gre_T22_te[i]->SetMarkerStyle(21);
    gre_T22_te[i]->SetLineColor(4);
  }
} 

////// Average of Ahmad and Me
void getAve(){
  double xxA[Nkinema][30],yyA[Nkinema][30],yyAE[Nkinema][30],yyAv[Nkinema][30],yyUn[Nkinema][30],xxM[Nkinema192][30],yyM[Nkinema192][30],yyME[Nkinema192][30];
  for (int i=0;i<Nkinema;i++){
    int NUM=gre_crsection_A[i]->GetN();
    for (int k=0;k<NUM;k++){
      gre_crsection_A[i]->GetPoint(k,xxA[i][k],yyA[i][k]);
    }
  }
  for (int i=0;i<Nkinema192;i++){
    int NUMM=gre_crsection[i]->GetN();
    for (int k=0;k<NUMM;k++){
      gre_crsection[i]->GetPoint(k,xxM[i][k],yyM[i][k]);
    }
  }
  for (int i=0;i<Nkinema;i++){
    for (int j=0;j<Nkinema192;j++){
       if ( tta_1A[i]==tta_1[j] && tta_2A[i]==tta_2[j] && phi12A[i]==phi12[j])
	 {
	   int NUMM=gre_crsection[j]->GetN();
	   int NUM=gre_crsection_A[i]->GetN();
	   for (int k=0;k<NUM;k++){
	     for (int kk=0;kk<NUMM;kk++){
	       if(xxM[j][kk]==xxA[i][k]){
		 yyAv[i][k]=(yyA[i][k]+yyM[j][kk])/2;
		 yyUn[i][k]=TMath::Abs(yyA[i][k]-yyM[j][kk])/2;
		 //cout << "yyAv[i][k]" << yyUn[i][k] << endl;
		 gre_crsection_Av[i]->SetPoint(k,xxA[i][k],yyAv[i][k]);
		 gre_crsection_Un[i]->SetPoint(k,xxA[i][k],yyAv[i][k]);
		 gre_crsection_Un[i]->SetPointError(k,0,yyUn[i][k]);
	       }
	     }
	   }
	 }
    }
  }

}
