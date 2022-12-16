{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:41:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.3273969,297.5,0.7213641);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.03514207);
   gre->SetPointError(0,0,0.06277736);
   gre->SetPoint(1,195,-0.008206428);
   gre->SetPointError(1,0,0.0536055);
   gre->SetPoint(2,205,0.05359283);
   gre->SetPointError(2,0,0.05551478);
   gre->SetPoint(3,215,-0.1045898);
   gre->SetPointError(3,0,0.04801356);
   gre->SetPoint(4,225,-0.04948272);
   gre->SetPointError(4,0,0.04627485);
   gre->SetPoint(5,235,0.06641908);
   gre->SetPointError(5,0,0.04400322);
   gre->SetPoint(6,245,0.1962782);
   gre->SetPointError(6,0,0.03997971);
   gre->SetPoint(7,255,0.3127174);
   gre->SetPointError(7,0,0.03634914);
   gre->SetPoint(8,265,0.3250584);
   gre->SetPointError(8,0,0.03235703);
   gre->SetPoint(9,275,0.5146939);
   gre->SetPointError(9,0,0.03187672);
   
   TH1F *Graph_gr_T20_15_15_1802 = new TH1F("Graph_gr_T20_15_15_1802","",100,176,284);
   Graph_gr_T20_15_15_1802->SetMinimum(-0.2225208);
   Graph_gr_T20_15_15_1802->SetMaximum(0.616488);
   Graph_gr_T20_15_15_1802->SetDirectory(0);
   Graph_gr_T20_15_15_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_1802->SetLineColor(ci);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
