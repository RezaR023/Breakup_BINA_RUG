{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:44:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.4295,-0.3583957,299.5305,0.155197);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.113,-0.04528478);
   gre->SetPointError(0,0,0.05428245);
   gre->SetPoint(1,191.639,0.00912179);
   gre->SetPointError(1,0,0.0604764);
   gre->SetPoint(2,202.165,-0.1647734);
   gre->SetPointError(2,0,0.05578418);
   gre->SetPoint(3,212.691,-0.1003035);
   gre->SetPointError(3,0,0.05791762);
   gre->SetPoint(4,223.217,-0.05582704);
   gre->SetPointError(4,0,0.05681343);
   gre->SetPoint(5,233.743,-0.07095522);
   gre->SetPointError(5,0,0.0532529);
   gre->SetPoint(6,244.269,-0.08390785);
   gre->SetPointError(6,0,0.05358772);
   gre->SetPoint(7,254.795,-0.1389426);
   gre->SetPointError(7,0,0.04930865);
   gre->SetPoint(8,265.321,-0.226092);
   gre->SetPointError(8,0,0.04670495);
   gre->SetPoint(9,275.847,-0.1789677);
   gre->SetPointError(9,0,0.03792943);
   
   TH1F *Graph_gr_T22_15_15_16024 = new TH1F("Graph_gr_T22_15_15_16024","",100,171.6396,285.3204);
   Graph_gr_T22_15_15_16024->SetMinimum(-0.3070364);
   Graph_gr_T22_15_15_16024->SetMaximum(0.1038377);
   Graph_gr_T22_15_15_16024->SetDirectory(0);
   Graph_gr_T22_15_15_16024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_16024->SetLineColor(ci);
   Graph_gr_T22_15_15_16024->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16024->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16024->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16024->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16024->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_16024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
