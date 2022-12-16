{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:34:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(145,26.80007,265,54.56962);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_crsection_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,164.9469,36.76615);
   gre->SetPointError(0,0,0.855359);
   gre->SetPoint(1,175,32.19969);
   gre->SetPointError(1,0,0.771364);
   gre->SetPoint(2,185,32.2572);
   gre->SetPointError(2,0,0.7583789);
   gre->SetPoint(3,195,36.89044);
   gre->SetPointError(3,0,0.7997307);
   gre->SetPoint(4,205,40.15036);
   gre->SetPointError(4,0,0.8303046);
   gre->SetPoint(5,215,41.57528);
   gre->SetPointError(5,0,0.8374028);
   gre->SetPoint(6,225,41.48574);
   gre->SetPointError(6,0,0.8257303);
   gre->SetPoint(7,235,40.6754);
   gre->SetPointError(7,0,0.8201889);
   gre->SetPoint(8,245,49.04005);
   gre->SetPointError(8,0,0.9013124);
   
   TH1F *Graph_gr_crsection_20_28_1408 = new TH1F("Graph_gr_crsection_20_28_1408","",100,157,253);
   Graph_gr_crsection_20_28_1408->SetMinimum(29.57703);
   Graph_gr_crsection_20_28_1408->SetMaximum(51.79267);
   Graph_gr_crsection_20_28_1408->SetDirectory(0);
   Graph_gr_crsection_20_28_1408->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_28_1408->SetLineColor(ci);
   Graph_gr_crsection_20_28_1408->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1408->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1408->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1408->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_1408->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1408->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1408->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1408->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_1408->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_1408->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_1408->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_28_1408);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
