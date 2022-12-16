{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:58:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(135,-0.2012392,255,0.1119161);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.03297154);
   gre->SetPointError(0,0,0.03112476);
   gre->SetPoint(1,165,0.02903562);
   gre->SetPointError(1,0,0.03068793);
   gre->SetPoint(2,175,0.002697971);
   gre->SetPointError(2,0,0.0336349);
   gre->SetPoint(3,185,-0.02222279);
   gre->SetPointError(3,0,0.03473542);
   gre->SetPoint(4,195,-0.07136102);
   gre->SetPointError(4,0,0.03731131);
   gre->SetPoint(5,205,-0.03696008);
   gre->SetPointError(5,0,0.03769659);
   gre->SetPoint(6,215,-0.09348893);
   gre->SetPointError(6,0,0.04340397);
   gre->SetPoint(7,225,-0.1147206);
   gre->SetPointError(7,0,0.03432597);
   gre->SetPoint(8,235,-0.05932506);
   gre->SetPointError(8,0,0.02871307);
   
   TH1F *Graph_gr_ImT22_25_20_14091 = new TH1F("Graph_gr_ImT22_25_20_14091","",100,147,243);
   Graph_gr_ImT22_25_20_14091->SetMinimum(-0.1699236);
   Graph_gr_ImT22_25_20_14091->SetMaximum(0.08060057);
   Graph_gr_ImT22_25_20_14091->SetDirectory(0);
   Graph_gr_ImT22_25_20_14091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_14091->SetLineColor(ci);
   Graph_gr_ImT22_25_20_14091->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14091->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_14091->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14091->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_14091->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14091->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_14091);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
