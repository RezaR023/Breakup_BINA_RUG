{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:18:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-11.89391,257.5,225.1754);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,28.23711);
   gre->SetPointError(0,0,0.619473);
   gre->SetPoint(1,155,29.72546);
   gre->SetPointError(1,0,0.6326611);
   gre->SetPoint(2,165,28.50533);
   gre->SetPointError(2,0,0.6223969);
   gre->SetPoint(3,175,30.17975);
   gre->SetPointError(3,0,0.6357783);
   gre->SetPoint(4,185,34.69254);
   gre->SetPointError(4,0,0.6746033);
   gre->SetPoint(5,195,42.64686);
   gre->SetPointError(5,0,0.7431318);
   gre->SetPoint(6,205,65.47411);
   gre->SetPointError(6,0,0.9200279);
   gre->SetPoint(7,215,108.7286);
   gre->SetPointError(7,0,1.18649);
   gre->SetPoint(8,225,184.1238);
   gre->SetPointError(8,0,1.539979);
   gre->SetPoint(9,235,117.1947);
   gre->SetPointError(9,0,1.225321);
   
   TH1F *Graph_gr_crsection_28_25_16032 = new TH1F("Graph_gr_crsection_28_25_16032","",100,136,244);
   Graph_gr_crsection_28_25_16032->SetMinimum(11.81301);
   Graph_gr_crsection_28_25_16032->SetMaximum(201.4684);
   Graph_gr_crsection_28_25_16032->SetDirectory(0);
   Graph_gr_crsection_28_25_16032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_25_16032->SetLineColor(ci);
   Graph_gr_crsection_28_25_16032->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_16032->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_16032->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_16032->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_16032->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_16032->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_16032->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_16032->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_16032->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_16032->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_16032->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_16032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_25_16032);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
