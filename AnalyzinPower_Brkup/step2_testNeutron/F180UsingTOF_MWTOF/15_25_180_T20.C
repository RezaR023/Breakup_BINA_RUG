{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:44:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.6603281,287.5,0.4066317);
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
   gre->SetPoint(0,175,0.08925402);
   gre->SetPointError(0,0,0.04299471);
   gre->SetPoint(1,185,0.1973251);
   gre->SetPointError(1,0,0.03147992);
   gre->SetPoint(2,195,0.1294771);
   gre->SetPointError(2,0,0.02646702);
   gre->SetPoint(3,205,0.05791373);
   gre->SetPointError(3,0,0.02448282);
   gre->SetPoint(4,215,-0.02787455);
   gre->SetPointError(4,0,0.02362571);
   gre->SetPoint(5,225,-0.1351093);
   gre->SetPointError(5,0,0.02348916);
   gre->SetPoint(6,235,-0.2406109);
   gre->SetPointError(6,0,0.02395665);
   gre->SetPoint(7,245,-0.2823039);
   gre->SetPointError(7,0,0.02586345);
   gre->SetPoint(8,255,-0.2796662);
   gre->SetPointError(8,0,0.02965383);
   gre->SetPoint(9,265,-0.4496605);
   gre->SetPointError(9,0,0.03284091);
   
   TH1F *Graph_gr_T20_15_25_1808 = new TH1F("Graph_gr_T20_15_25_1808","",100,166,274);
   Graph_gr_T20_15_25_1808->SetMinimum(-0.5536321);
   Graph_gr_T20_15_25_1808->SetMaximum(0.2999357);
   Graph_gr_T20_15_25_1808->SetDirectory(0);
   Graph_gr_T20_15_25_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_1808->SetLineColor(ci);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
