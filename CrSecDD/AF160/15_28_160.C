{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:16:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(152.5,38.51331,287.5,313.2938);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,135.4795);
   gre->SetPointError(0,0,1.801905);
   gre->SetPoint(1,185,176.697);
   gre->SetPointError(1,0,2.031181);
   gre->SetPoint(2,195,226.7176);
   gre->SetPointError(2,0,2.217125);
   gre->SetPoint(3,205,265.1147);
   gre->SetPointError(3,0,2.382354);
   gre->SetPoint(4,215,263.7533);
   gre->SetPointError(4,0,2.365027);
   gre->SetPoint(5,225,226.2331);
   gre->SetPointError(5,0,2.186761);
   gre->SetPoint(6,235,179.4547);
   gre->SetPointError(6,0,1.951228);
   gre->SetPoint(7,245,133.7426);
   gre->SetPointError(7,0,1.673521);
   gre->SetPoint(8,255,99.58212);
   gre->SetPointError(8,0,1.451149);
   gre->SetPoint(9,265,85.65262);
   gre->SetPointError(9,0,1.342562);
   
   TH1F *Graph_gr_crsection_15_28_16021 = new TH1F("Graph_gr_crsection_15_28_16021","",100,166,274);
   Graph_gr_crsection_15_28_16021->SetMinimum(65.99136);
   Graph_gr_crsection_15_28_16021->SetMaximum(285.8157);
   Graph_gr_crsection_15_28_16021->SetDirectory(0);
   Graph_gr_crsection_15_28_16021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_28_16021->SetLineColor(ci);
   Graph_gr_crsection_15_28_16021->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_16021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_16021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_16021->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_16021->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_16021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_16021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_16021->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_16021->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_16021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_16021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_16021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_28_16021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
