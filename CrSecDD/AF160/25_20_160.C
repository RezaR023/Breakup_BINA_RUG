{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:17:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(132.5,-35.78745,267.5,354.0581);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,30.10865);
   gre->SetPointError(0,0,0.7630571);
   gre->SetPoint(1,165,31.35056);
   gre->SetPointError(1,0,0.7571564);
   gre->SetPoint(2,175,29.92157);
   gre->SetPointError(2,0,0.734744);
   gre->SetPoint(3,185,30.84602);
   gre->SetPointError(3,0,0.7531149);
   gre->SetPoint(4,195,35.78323);
   gre->SetPointError(4,0,0.8075008);
   gre->SetPoint(5,205,45.04592);
   gre->SetPointError(5,0,0.8973553);
   gre->SetPoint(6,215,66.97039);
   gre->SetPointError(6,0,1.090477);
   gre->SetPoint(7,225,102.8292);
   gre->SetPointError(7,0,1.357131);
   gre->SetPoint(8,235,193.4354);
   gre->SetPointError(8,0,1.861121);
   gre->SetPoint(9,245,286.8502);
   gre->SetPointError(9,0,2.233662);
   
   TH1F *Graph_gr_crsection_25_20_16027 = new TH1F("Graph_gr_crsection_25_20_16027","",100,146,254);
   Graph_gr_crsection_25_20_16027->SetMinimum(3.197116);
   Graph_gr_crsection_25_20_16027->SetMaximum(315.0736);
   Graph_gr_crsection_25_20_16027->SetDirectory(0);
   Graph_gr_crsection_25_20_16027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_20_16027->SetLineColor(ci);
   Graph_gr_crsection_25_20_16027->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_16027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_16027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_16027->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_16027->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_16027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_16027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_16027->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_16027->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_16027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_16027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_16027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_20_16027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
