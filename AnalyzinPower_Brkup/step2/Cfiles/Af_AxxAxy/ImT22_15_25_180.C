{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:31:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.1096867,310,0.1395887);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.04775585);
   gre->SetPointError(0,0,0.0203849);
   gre->SetPoint(1,145,-0.04775585);
   gre->SetPointError(1,0,0.0203849);
   gre->SetPoint(2,155,-0.04775585);
   gre->SetPointError(2,0,0.0203849);
   gre->SetPoint(3,165,0.02730859);
   gre->SetPointError(3,0,0.07073422);
   gre->SetPoint(4,175,-0.01950682);
   gre->SetPointError(4,0,0.0308745);
   gre->SetPoint(5,185,-0.003090871);
   gre->SetPointError(5,0,0.02345135);
   gre->SetPoint(6,195,0.01039689);
   gre->SetPointError(6,0,0.01961147);
   gre->SetPoint(7,205,-0.004509675);
   gre->SetPointError(7,0,0.01733662);
   gre->SetPoint(8,215,-0.0005916645);
   gre->SetPointError(8,0,0.01611163);
   gre->SetPoint(9,225,-0.01691292);
   gre->SetPointError(9,0,0.0163083);
   gre->SetPoint(10,235,0.02667935);
   gre->SetPointError(10,0,0.0172622);
   gre->SetPoint(11,245,0.006534907);
   gre->SetPointError(11,0,0.0181616);
   gre->SetPoint(12,255,0.01324362);
   gre->SetPointError(12,0,0.01885407);
   gre->SetPoint(13,265,0.03459325);
   gre->SetPointError(13,0,0.02201205);
   gre->SetPoint(14,275,0.02542437);
   gre->SetPointError(14,0,0.02978074);
   
   TH1F *Graph_gr_ImT22_15_25_1806 = new TH1F("Graph_gr_ImT22_15_25_1806","",100,121,289);
   Graph_gr_ImT22_15_25_1806->SetMinimum(-0.08475911);
   Graph_gr_ImT22_15_25_1806->SetMaximum(0.1146612);
   Graph_gr_ImT22_15_25_1806->SetDirectory(0);
   Graph_gr_ImT22_15_25_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_1806->SetLineColor(ci);
   Graph_gr_ImT22_15_25_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
