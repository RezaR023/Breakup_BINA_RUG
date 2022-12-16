{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:50:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(130,-39.93424,280,359.4081);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,19.74813);
   gre->SetPointError(0,0,0.625291);
   gre->SetPoint(1,165,34.45278);
   gre->SetPointError(1,0,0.8107074);
   gre->SetPoint(2,175,49.85857);
   gre->SetPointError(2,0,0.929481);
   gre->SetPoint(3,185,87.36392);
   gre->SetPointError(3,0,1.191411);
   gre->SetPoint(4,195,142.3633);
   gre->SetPointError(4,0,1.504749);
   gre->SetPoint(5,205,198.3923);
   gre->SetPointError(5,0,1.77204);
   gre->SetPoint(6,215,251.0952);
   gre->SetPointError(6,0,1.989134);
   gre->SetPoint(7,225,290.0283);
   gre->SetPointError(7,0,2.14096);
   gre->SetPoint(8,235,273.336);
   gre->SetPointError(8,0,2.075317);
   gre->SetPoint(9,245,206.0237);
   gre->SetPointError(9,0,1.796934);
   gre->SetPoint(10,255,123.5924);
   gre->SetPointError(10,0,1.394151);
   
   TH1F *Graph_gr_crsection_20_28_1808 = new TH1F("Graph_gr_crsection_20_28_1808","",100,145,265);
   Graph_gr_crsection_20_28_1808->SetMinimum(0);
   Graph_gr_crsection_20_28_1808->SetMaximum(319.4739);
   Graph_gr_crsection_20_28_1808->SetDirectory(0);
   Graph_gr_crsection_20_28_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_28_1808->SetLineColor(ci);
   Graph_gr_crsection_20_28_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_28_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
