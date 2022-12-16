{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 08:52:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.828524,310,3.171549);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.03040698);
   gre->SetPoint(1,145,0.4405515);
   gre->SetPointError(1,0,0.2999692);
   gre->SetPoint(2,155,1.805065);
   gre->SetPointError(2,0,0.6998059);
   gre->SetPoint(3,165,-0.1092664);
   gre->SetPointError(3,0,0.04138661);
   gre->SetPoint(4,175,-0.1105366);
   gre->SetPointError(4,0,0.02190722);
   gre->SetPoint(5,185,-0.1438683);
   gre->SetPointError(5,0,0.01797682);
   gre->SetPoint(6,195,-0.08621301);
   gre->SetPointError(6,0,0.01522017);
   gre->SetPoint(7,205,-0.09230327);
   gre->SetPointError(7,0,0.01421501);
   gre->SetPoint(8,215,-0.04517421);
   gre->SetPointError(8,0,0.01400273);
   gre->SetPoint(9,225,-0.03445807);
   gre->SetPointError(9,0,0.01415733);
   gre->SetPoint(10,235,0.005984394);
   gre->SetPointError(10,0,0.01542364);
   gre->SetPoint(11,245,0.004142775);
   gre->SetPointError(11,0,0.01848283);
   gre->SetPoint(12,255,-0.01036866);
   gre->SetPointError(12,0,0.02008997);
   gre->SetPoint(13,265,0.01919436);
   gre->SetPointError(13,0,0.02307634);
   gre->SetPoint(14,275,-0.08105008);
   gre->SetPointError(14,0,0.04716515);
   
   TH1F *Graph_gr_T22_15_28_1806 = new TH1F("Graph_gr_T22_15_28_1806","",100,121,289);
   Graph_gr_T22_15_28_1806->SetMinimum(-0.4285167);
   Graph_gr_T22_15_28_1806->SetMaximum(2.771542);
   Graph_gr_T22_15_28_1806->SetDirectory(0);
   Graph_gr_T22_15_28_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_1806->SetLineColor(ci);
   Graph_gr_T22_15_28_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
