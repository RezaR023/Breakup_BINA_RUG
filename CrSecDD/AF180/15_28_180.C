{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:49:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(152.5,14.92776,287.5,275.291);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,113.4612);
   gre->SetPointError(0,0,1.624642);
   gre->SetPoint(1,185,156.5251);
   gre->SetPointError(1,0,1.883119);
   gre->SetPoint(2,195,205.47);
   gre->SetPointError(2,0,2.095696);
   gre->SetPoint(3,205,229.4646);
   gre->SetPointError(3,0,2.20394);
   gre->SetPoint(4,215,229.6953);
   gre->SetPointError(4,0,2.201836);
   gre->SetPoint(5,225,208.3827);
   gre->SetPointError(5,0,2.100833);
   gre->SetPoint(6,235,163.5696);
   gre->SetPointError(6,0,1.851158);
   gre->SetPoint(7,245,117.4689);
   gre->SetPointError(7,0,1.568777);
   gre->SetPoint(8,255,78.01018);
   gre->SetPointError(8,0,1.290675);
   gre->SetPoint(9,265,59.44189);
   gre->SetPointError(9,0,1.120259);
   
   TH1F *Graph_gr_crsection_15_28_1804 = new TH1F("Graph_gr_crsection_15_28_1804","",100,166,274);
   Graph_gr_crsection_15_28_1804->SetMinimum(40.96409);
   Graph_gr_crsection_15_28_1804->SetMaximum(249.2547);
   Graph_gr_crsection_15_28_1804->SetDirectory(0);
   Graph_gr_crsection_15_28_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_28_1804->SetLineColor(ci);
   Graph_gr_crsection_15_28_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_28_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
