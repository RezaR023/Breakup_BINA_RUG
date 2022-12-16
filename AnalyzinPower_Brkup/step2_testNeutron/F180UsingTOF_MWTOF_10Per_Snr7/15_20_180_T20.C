{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:39:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(170,-0.6992772,290,0.01404129);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,190,-0.334569);
   gre->SetPointError(0,0,0.1377849);
   gre->SetPoint(1,210,-0.3394092);
   gre->SetPointError(1,0,0.1105869);
   gre->SetPoint(2,230,-0.2214649);
   gre->SetPointError(2,0,0.1166198);
   gre->SetPoint(3,250,-0.4863646);
   gre->SetPointError(3,0,0.09402618);
   gre->SetPoint(4,270,-0.290556);
   gre->SetPointError(4,0,0.1027716);
   
   TH1F *Graph_gr_T20_15_20_1805 = new TH1F("Graph_gr_T20_15_20_1805","",100,182,278);
   Graph_gr_T20_15_20_1805->SetMinimum(-0.6279453);
   Graph_gr_T20_15_20_1805->SetMaximum(-0.05729056);
   Graph_gr_T20_15_20_1805->SetDirectory(0);
   Graph_gr_T20_15_20_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_1805->SetLineColor(ci);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
