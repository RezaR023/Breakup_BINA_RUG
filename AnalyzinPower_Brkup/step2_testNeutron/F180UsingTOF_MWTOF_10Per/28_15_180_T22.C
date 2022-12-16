{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 17:20:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.648036,257.5,0.4552662);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.2384322);
   gre->SetPointError(0,0,0.2257201);
   gre->SetPoint(1,155,-0.01848284);
   gre->SetPointError(1,0,0.135434);
   gre->SetPoint(2,165,-0.1177638);
   gre->SetPointError(2,0,0.1484755);
   gre->SetPoint(3,175,-0.1609817);
   gre->SetPointError(3,0,0.1435503);
   gre->SetPoint(4,185,0.1253062);
   gre->SetPointError(4,0,0.1460763);
   gre->SetPoint(5,195,-0.1003538);
   gre->SetPointError(5,0,0.1338374);
   gre->SetPoint(6,205,-0.1014641);
   gre->SetPointError(6,0,0.1035024);
   gre->SetPoint(7,215,-0.2775353);
   gre->SetPointError(7,0,0.07703681);
   gre->SetPoint(8,225,-0.2724948);
   gre->SetPointError(8,0,0.06421972);
   gre->SetPoint(9,235,-0.350449);
   gre->SetPointError(9,0,0.05689388);
   
   TH1F *Graph_gr_T22_28_15_18039 = new TH1F("Graph_gr_T22_28_15_18039","",100,136,244);
   Graph_gr_T22_28_15_18039->SetMinimum(-0.5377058);
   Graph_gr_T22_28_15_18039->SetMaximum(0.344936);
   Graph_gr_T22_28_15_18039->SetDirectory(0);
   Graph_gr_T22_28_15_18039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_18039->SetLineColor(ci);
   Graph_gr_T22_28_15_18039->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18039->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18039->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18039->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18039->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18039->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18039->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18039->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18039->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18039->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18039->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_18039);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
