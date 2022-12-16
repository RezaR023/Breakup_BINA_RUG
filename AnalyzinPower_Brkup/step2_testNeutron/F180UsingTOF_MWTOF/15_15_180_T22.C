{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:42:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.2833981,297.5,0.08492621);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.02996849);
   gre->SetPointError(0,0,0.03578812);
   gre->SetPoint(1,195,-0.04802117);
   gre->SetPointError(1,0,0.03027746);
   gre->SetPoint(2,205,-0.02392711);
   gre->SetPointError(2,0,0.03060264);
   gre->SetPoint(3,215,-0.004117643);
   gre->SetPointError(3,0,0.02765646);
   gre->SetPoint(4,225,-0.06369534);
   gre->SetPointError(4,0,0.02688703);
   gre->SetPoint(5,235,-0.09236389);
   gre->SetPointError(5,0,0.02597411);
   gre->SetPoint(6,245,-0.1147373);
   gre->SetPointError(6,0,0.02419517);
   gre->SetPoint(7,255,-0.1830997);
   gre->SetPointError(7,0,0.02165375);
   gre->SetPoint(8,265,-0.2022551);
   gre->SetPointError(8,0,0.01975562);
   gre->SetPoint(9,275,-0.1983495);
   gre->SetPointError(9,0,0.01950883);
   
   TH1F *Graph_gr_T22_15_15_1803 = new TH1F("Graph_gr_T22_15_15_1803","",100,176,284);
   Graph_gr_T22_15_15_1803->SetMinimum(-0.2465657);
   Graph_gr_T22_15_15_1803->SetMaximum(0.04809378);
   Graph_gr_T22_15_15_1803->SetDirectory(0);
   Graph_gr_T22_15_15_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_1803->SetLineColor(ci);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
