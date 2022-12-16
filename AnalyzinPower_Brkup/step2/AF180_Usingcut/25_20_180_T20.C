{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:07:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.4699842,267.5,0.2997178);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.2656141);
   gre->SetPointError(0,0,0.07608649);
   gre->SetPoint(1,165,0.0400295);
   gre->SetPointError(1,0,0.09013363);
   gre->SetPoint(2,175,-0.1022013);
   gre->SetPointError(2,0,0.0843899);
   gre->SetPoint(3,185,-0.1482014);
   gre->SetPointError(3,0,0.07891601);
   gre->SetPoint(4,195,-0.09648915);
   gre->SetPointError(4,0,0.06870286);
   gre->SetPoint(5,205,0.1098112);
   gre->SetPointError(5,0,0.06162292);
   gre->SetPoint(6,215,0.1077561);
   gre->SetPointError(6,0,0.04740088);
   gre->SetPoint(7,225,0.09293568);
   gre->SetPointError(7,0,0.03286786);
   gre->SetPoint(8,235,0.1105178);
   gre->SetPointError(8,0,0.02058951);
   gre->SetPoint(9,245,0.09200624);
   gre->SetPointError(9,0,0.01338861);
   
   TH1F *Graph_gr_T20_25_20_18050 = new TH1F("Graph_gr_T20_25_20_18050","",100,146,254);
   Graph_gr_T20_25_20_18050->SetMinimum(-0.393014);
   Graph_gr_T20_25_20_18050->SetMaximum(0.2227476);
   Graph_gr_T20_25_20_18050->SetDirectory(0);
   Graph_gr_T20_25_20_18050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_20_18050->SetLineColor(ci);
   Graph_gr_T20_25_20_18050->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_18050->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_18050->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_18050->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_18050->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_18050->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_18050->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_18050->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_18050->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_18050->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_18050->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_18050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_20_18050);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
