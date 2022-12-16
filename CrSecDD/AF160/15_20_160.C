{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:15:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(162.5,30.79648,297.5,143.9704);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,51.15566);
   gre->SetPointError(0,0,1.496851);
   gre->SetPoint(1,195,67.27784);
   gre->SetPointError(1,0,1.558496);
   gre->SetPoint(2,205,96.17729);
   gre->SetPointError(2,0,1.708343);
   gre->SetPoint(3,215,111.1949);
   gre->SetPointError(3,0,1.815982);
   gre->SetPoint(4,225,123.2005);
   gre->SetPointError(4,0,1.907642);
   gre->SetPoint(5,235,121.6097);
   gre->SetPointError(5,0,1.887099);
   gre->SetPoint(6,245,119.0834);
   gre->SetPointError(6,0,1.862387);
   gre->SetPoint(7,255,114.5454);
   gre->SetPointError(7,0,1.822607);
   gre->SetPoint(8,265,117.2559);
   gre->SetPointError(8,0,1.844332);
   gre->SetPoint(9,275,122.1192);
   gre->SetPointError(9,0,1.885002);
   
   TH1F *Graph_gr_crsection_15_20_16019 = new TH1F("Graph_gr_crsection_15_20_16019","",100,176,284);
   Graph_gr_crsection_15_20_16019->SetMinimum(42.11388);
   Graph_gr_crsection_15_20_16019->SetMaximum(132.653);
   Graph_gr_crsection_15_20_16019->SetDirectory(0);
   Graph_gr_crsection_15_20_16019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_20_16019->SetLineColor(ci);
   Graph_gr_crsection_15_20_16019->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_16019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_16019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_16019->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_16019->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_16019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_16019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_16019->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_16019->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_16019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_16019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_16019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_20_16019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
