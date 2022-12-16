{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:49:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(140,-112.855,290,1015.695);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,15.06585);
   gre->SetPointError(0,0,0.7411839);
   gre->SetPoint(1,175,19.05824);
   gre->SetPointError(1,0,0.7807054);
   gre->SetPoint(2,185,16.75908);
   gre->SetPointError(2,0,0.7554069);
   gre->SetPoint(3,195,22.35693);
   gre->SetPointError(3,0,0.8482365);
   gre->SetPoint(4,205,34.60554);
   gre->SetPointError(4,0,1.042225);
   gre->SetPoint(5,215,54.0913);
   gre->SetPointError(5,0,1.279585);
   gre->SetPoint(6,225,86.38928);
   gre->SetPointError(6,0,1.5916);
   gre->SetPoint(7,235,136.2663);
   gre->SetPointError(7,0,1.983021);
   gre->SetPoint(8,245,213.9856);
   gre->SetPointError(8,0,2.511301);
   gre->SetPoint(9,255,391.8054);
   gre->SetPointError(9,0,3.390116);
   gre->SetPoint(10,265,817.252);
   gre->SetPointError(10,0,4.813527);
   
   TH1F *Graph_gr_crsection_20_15_1805 = new TH1F("Graph_gr_crsection_20_15_1805","",100,155,275);
   Graph_gr_crsection_20_15_1805->SetMinimum(0);
   Graph_gr_crsection_20_15_1805->SetMaximum(902.8396);
   Graph_gr_crsection_20_15_1805->SetDirectory(0);
   Graph_gr_crsection_20_15_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_15_1805->SetLineColor(ci);
   Graph_gr_crsection_20_15_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_15_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
