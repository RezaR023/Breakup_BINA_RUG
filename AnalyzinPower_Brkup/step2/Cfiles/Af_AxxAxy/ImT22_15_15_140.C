{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:38:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.3189445,310,0.1686969);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.02294307);
   gre->SetPointError(0,0,0.0199562);
   gre->SetPoint(1,145,0.02294307);
   gre->SetPointError(1,0,0.0199562);
   gre->SetPoint(2,155,-0.06222908);
   gre->SetPointError(2,0,0.07572473);
   gre->SetPoint(3,165,-0.06222908);
   gre->SetPointError(3,0,0.07572473);
   gre->SetPoint(4,175,0.01139384);
   gre->SetPointError(4,0,0.07602951);
   gre->SetPoint(5,185,-0.06502497);
   gre->SetPointError(5,0,0.04388365);
   gre->SetPoint(6,195,-0.04088889);
   gre->SetPointError(6,0,0.03869439);
   gre->SetPoint(7,205,-0.03445216);
   gre->SetPointError(7,0,0.03675835);
   gre->SetPoint(8,215,0.04427398);
   gre->SetPointError(8,0,0.03280102);
   gre->SetPoint(9,225,-0.1142029);
   gre->SetPointError(9,0,0.03457061);
   gre->SetPoint(10,235,-0.09284996);
   gre->SetPointError(10,0,0.03679571);
   gre->SetPoint(11,245,-0.07045076);
   gre->SetPointError(11,0,0.0360742);
   gre->SetPoint(12,255,-0.201267);
   gre->SetPointError(12,0,0.03640387);
   gre->SetPoint(13,265,-0.1866834);
   gre->SetPointError(13,0,0.0322723);
   gre->SetPoint(14,275,-0.2045182);
   gre->SetPointError(14,0,0.02528251);
   
   TH1F *Graph_gr_ImT22_15_15_14018 = new TH1F("Graph_gr_ImT22_15_15_14018","",100,121,289);
   Graph_gr_ImT22_15_15_14018->SetMinimum(-0.2701803);
   Graph_gr_ImT22_15_15_14018->SetMaximum(0.1199328);
   Graph_gr_ImT22_15_15_14018->SetDirectory(0);
   Graph_gr_ImT22_15_15_14018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_14018->SetLineColor(ci);
   Graph_gr_ImT22_15_15_14018->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_14018->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_14018->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_14018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
