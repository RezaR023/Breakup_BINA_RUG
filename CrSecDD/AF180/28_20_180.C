{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:51:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(122.5,-123.6496,257.5,1112.846);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,12.92733);
   gre->SetPointError(0,0,0.4534546);
   gre->SetPoint(1,155,15.54601);
   gre->SetPointError(1,0,0.5007505);
   gre->SetPoint(2,165,15.09956);
   gre->SetPointError(2,0,0.5124571);
   gre->SetPoint(3,175,17.81851);
   gre->SetPointError(3,0,0.5464158);
   gre->SetPoint(4,185,22.63727);
   gre->SetPointError(4,0,0.6157509);
   gre->SetPoint(5,195,31.22914);
   gre->SetPointError(5,0,0.7104061);
   gre->SetPoint(6,205,50.7306);
   gre->SetPointError(6,0,0.8947312);
   gre->SetPoint(7,215,95.64129);
   gre->SetPointError(7,0,1.253056);
   gre->SetPoint(8,225,256.8606);
   gre->SetPointError(8,0,2.061741);
   gre->SetPoint(9,235,896.6465);
   gre->SetPointError(9,0,3.757016);
   
   TH1F *Graph_gr_crsection_28_20_18014 = new TH1F("Graph_gr_crsection_28_20_18014","",100,136,244);
   Graph_gr_crsection_28_20_18014->SetMinimum(0);
   Graph_gr_crsection_28_20_18014->SetMaximum(989.1965);
   Graph_gr_crsection_28_20_18014->SetDirectory(0);
   Graph_gr_crsection_28_20_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_20_18014->SetLineColor(ci);
   Graph_gr_crsection_28_20_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_20_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
