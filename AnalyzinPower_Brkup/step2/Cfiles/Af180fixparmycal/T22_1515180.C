{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 08:50:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.60215,310,1.731722);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0.006589786);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,0.06478569);
   gre->SetPointError(3,0,1.111291);
   gre->SetPoint(4,175,0.0930705);
   gre->SetPointError(4,0,0.06102339);
   gre->SetPoint(5,185,-0.04924991);
   gre->SetPointError(5,0,0.04463826);
   gre->SetPoint(6,195,0.006630253);
   gre->SetPointError(6,0,0.04444047);
   gre->SetPoint(7,205,0.005832458);
   gre->SetPointError(7,0,0.04225178);
   gre->SetPoint(8,215,-0.008836134);
   gre->SetPointError(8,0,0.03895593);
   gre->SetPoint(9,225,0.02038829);
   gre->SetPointError(9,0,0.03464299);
   gre->SetPoint(10,235,-0.09419118);
   gre->SetPointError(10,0,0.03282934);
   gre->SetPoint(11,245,-0.150937);
   gre->SetPointError(11,0,0.03012361);
   gre->SetPoint(12,255,-0.2138263);
   gre->SetPointError(12,0,0.03030294);
   gre->SetPoint(13,265,-0.20513);
   gre->SetPointError(13,0,0.02464942);
   gre->SetPoint(14,275,-0.2517227);
   gre->SetPointError(14,0,0.01848203);
   
   TH1F *Graph_gr_T22_15_15_1803 = new TH1F("Graph_gr_T22_15_15_1803","",100,121,289);
   Graph_gr_T22_15_15_1803->SetMinimum(-1.268763);
   Graph_gr_T22_15_15_1803->SetMaximum(1.398334);
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
