{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:23:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.6278616,287.5,0.3999661);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.1529068);
   gre->SetPointError(0,0,0.05981364);
   gre->SetPoint(1,185,0.1835123);
   gre->SetPointError(1,0,0.0451492);
   gre->SetPoint(2,195,0.09411092);
   gre->SetPointError(2,0,0.03725412);
   gre->SetPoint(3,205,0.02435831);
   gre->SetPointError(3,0,0.03279776);
   gre->SetPoint(4,215,-0.07819871);
   gre->SetPointError(4,0,0.03027108);
   gre->SetPoint(5,225,-0.1091348);
   gre->SetPointError(5,0,0.03038593);
   gre->SetPoint(6,235,-0.2103917);
   gre->SetPointError(6,0,0.03067533);
   gre->SetPoint(7,245,-0.2753135);
   gre->SetPointError(7,0,0.03275168);
   gre->SetPoint(8,255,-0.4225056);
   gre->SetPointError(8,0,0.03405139);
   gre->SetPoint(9,265,-0.3752462);
   gre->SetPointError(9,0,0.04067003);
   
   TH1F *Graph_gr_T20_15_25_18016 = new TH1F("Graph_gr_T20_15_25_18016","",100,166,274);
   Graph_gr_T20_15_25_18016->SetMinimum(-0.5250788);
   Graph_gr_T20_15_25_18016->SetMaximum(0.2971833);
   Graph_gr_T20_15_25_18016->SetDirectory(0);
   Graph_gr_T20_15_25_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_18016->SetLineColor(ci);
   Graph_gr_T20_15_25_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
