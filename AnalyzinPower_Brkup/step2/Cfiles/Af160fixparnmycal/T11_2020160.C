{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:10:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.3021486,310,0.2391308);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.04554603);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.04554603);
   gre->SetPoint(2,155,-0.1663894);
   gre->SetPointError(2,0,0.04554603);
   gre->SetPoint(3,165,0.0926597);
   gre->SetPointError(3,0,0.05625787);
   gre->SetPoint(4,175,-0.02980032);
   gre->SetPointError(4,0,0.03684842);
   gre->SetPoint(5,185,-0.02828632);
   gre->SetPointError(5,0,0.039347);
   gre->SetPoint(6,195,0.03236567);
   gre->SetPointError(6,0,0.04055741);
   gre->SetPoint(7,205,-0.09847801);
   gre->SetPointError(7,0,0.03719358);
   gre->SetPoint(8,215,-0.1332969);
   gre->SetPointError(8,0,0.03360899);
   gre->SetPoint(9,225,-0.02699812);
   gre->SetPointError(9,0,0.0316709);
   gre->SetPoint(10,235,0.005170809);
   gre->SetPointError(10,0,0.02919522);
   gre->SetPoint(11,245,-0.04947132);
   gre->SetPointError(11,0,0.02531585);
   gre->SetPoint(12,255,-0.03861004);
   gre->SetPointError(12,0,0.02174654);
   gre->SetPoint(13,265,-0.0117461);
   gre->SetPointError(13,0,0.01656237);
   gre->SetPoint(14,275,-0.02005654);
   gre->SetPointError(14,0,0.03922627);
   
   TH1F *Graph_gr_iT11_20_20_16020 = new TH1F("Graph_gr_iT11_20_20_16020","",100,121,289);
   Graph_gr_iT11_20_20_16020->SetMinimum(-0.2480207);
   Graph_gr_iT11_20_20_16020->SetMaximum(0.1850029);
   Graph_gr_iT11_20_20_16020->SetDirectory(0);
   Graph_gr_iT11_20_20_16020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_16020->SetLineColor(ci);
   Graph_gr_iT11_20_20_16020->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_16020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_16020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_16020->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_16020->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_16020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_16020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_16020->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_16020->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_16020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_16020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_16020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_16020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
