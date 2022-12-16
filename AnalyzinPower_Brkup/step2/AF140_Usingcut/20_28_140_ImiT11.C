{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:49:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(145,-0.1053736,265,0.11293);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.00424911);
   gre->SetPointError(0,0,0.03467842);
   gre->SetPoint(1,175,0.01341723);
   gre->SetPointError(1,0,0.03772049);
   gre->SetPoint(2,185,-0.02549262);
   gre->SetPointError(2,0,0.04018071);
   gre->SetPoint(3,195,-0.01659588);
   gre->SetPointError(3,0,0.03735799);
   gre->SetPoint(4,205,0.04023564);
   gre->SetPointError(4,0,0.03631042);
   gre->SetPoint(5,215,-0.007826696);
   gre->SetPointError(5,0,0.03357023);
   gre->SetPoint(6,225,-0.02951507);
   gre->SetPointError(6,0,0.03630719);
   gre->SetPoint(7,235,0.008092151);
   gre->SetPointError(7,0,0.03798656);
   gre->SetPoint(8,245,-0.03514537);
   gre->SetPointError(8,0,0.03384432);
   
   TH1F *Graph_gr_ImiT11_20_28_14017 = new TH1F("Graph_gr_ImiT11_20_28_14017","",100,157,253);
   Graph_gr_ImiT11_20_28_14017->SetMinimum(-0.08354326);
   Graph_gr_ImiT11_20_28_14017->SetMaximum(0.09109964);
   Graph_gr_ImiT11_20_28_14017->SetDirectory(0);
   Graph_gr_ImiT11_20_28_14017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_14017->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_14017->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_14017->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_14017->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_14017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
