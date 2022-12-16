{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:40:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1353329,297.5,0.2665072);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.1504636);
   gre->SetPointError(0,0,0.04907023);
   gre->SetPoint(1,195,0.06559611);
   gre->SetPointError(1,0,0.04998288);
   gre->SetPoint(2,205,0.0116276);
   gre->SetPointError(2,0,0.04464029);
   gre->SetPoint(3,215,-0.02298251);
   gre->SetPointError(3,0,0.04113903);
   gre->SetPoint(4,225,-0.02887433);
   gre->SetPointError(4,0,0.03948526);
   gre->SetPoint(5,235,-0.009887225);
   gre->SetPointError(5,0,0.0417219);
   gre->SetPoint(6,245,0.01563478);
   gre->SetPointError(6,0,0.04024769);
   gre->SetPoint(7,255,0.01280943);
   gre->SetPointError(7,0,0.03479823);
   gre->SetPoint(8,265,0.02336647);
   gre->SetPointError(8,0,0.03429036);
   gre->SetPoint(9,275,0.005141988);
   gre->SetPointError(9,0,0.03009905);
   
   TH1F *Graph_gr_T22_15_15_140169 = new TH1F("Graph_gr_T22_15_15_140169","",100,176,284);
   Graph_gr_T22_15_15_140169->SetMinimum(-0.09514893);
   Graph_gr_T22_15_15_140169->SetMaximum(0.2263232);
   Graph_gr_T22_15_15_140169->SetDirectory(0);
   Graph_gr_T22_15_15_140169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_140169->SetLineColor(ci);
   Graph_gr_T22_15_15_140169->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_140169->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_140169->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_140169->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_140169->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_140169->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_140169->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_140169->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_140169->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_140169->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_140169->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_140169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_140169);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
