{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:16:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(142.5,7.057104,277.5,198.3868);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,43.51574);
   gre->SetPointError(0,0,1.011912);
   gre->SetPoint(1,175,39.86299);
   gre->SetPointError(1,0,0.9176007);
   gre->SetPoint(2,185,56.90852);
   gre->SetPointError(2,0,1.017689);
   gre->SetPoint(3,195,78.15442);
   gre->SetPointError(3,0,1.18457);
   gre->SetPoint(4,205,104.0245);
   gre->SetPointError(4,0,1.364793);
   gre->SetPoint(5,215,127.1805);
   gre->SetPointError(5,0,1.502307);
   gre->SetPoint(6,225,145.8989);
   gre->SetPointError(6,0,1.605169);
   gre->SetPoint(7,235,159.6598);
   gre->SetPointError(7,0,1.674423);
   gre->SetPoint(8,245,164.7983);
   gre->SetPointError(8,0,1.700265);
   gre->SetPoint(9,255,147.6548);
   gre->SetPointError(9,0,1.610019);
   
   TH1F *Graph_gr_crsection_20_25_16024 = new TH1F("Graph_gr_crsection_20_25_16024","",100,156,264);
   Graph_gr_crsection_20_25_16024->SetMinimum(26.19008);
   Graph_gr_crsection_20_25_16024->SetMaximum(179.2538);
   Graph_gr_crsection_20_25_16024->SetDirectory(0);
   Graph_gr_crsection_20_25_16024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_25_16024->SetLineColor(ci);
   Graph_gr_crsection_20_25_16024->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_16024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_16024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_16024->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_16024->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_16024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_16024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_16024->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_16024->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_16024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_16024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_16024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_25_16024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
