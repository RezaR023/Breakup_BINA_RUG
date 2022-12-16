{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:18:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-47.16888,257.5,424.5199);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,12.0116);
   gre->SetPointError(0,0,0.537112);
   gre->SetPoint(1,155,20.77242);
   gre->SetPointError(1,0,0.7179681);
   gre->SetPoint(2,165,24.63171);
   gre->SetPointError(2,0,0.7616884);
   gre->SetPoint(3,175,29.29829);
   gre->SetPointError(3,0,0.811576);
   gre->SetPoint(4,185,38.02047);
   gre->SetPointError(4,0,0.9251227);
   gre->SetPoint(5,195,53.76777);
   gre->SetPointError(5,0,1.069793);
   gre->SetPoint(6,205,76.89129);
   gre->SetPointError(6,0,1.282815);
   gre->SetPoint(7,215,105.2505);
   gre->SetPointError(7,0,1.516917);
   gre->SetPoint(8,225,173.8244);
   gre->SetPointError(8,0,1.944618);
   gre->SetPoint(9,235,341.4351);
   gre->SetPointError(9,0,2.654348);
   
   TH1F *Graph_gr_crsection_28_15_16030 = new TH1F("Graph_gr_crsection_28_15_16030","",100,136,244);
   Graph_gr_crsection_28_15_16030->SetMinimum(0);
   Graph_gr_crsection_28_15_16030->SetMaximum(377.351);
   Graph_gr_crsection_28_15_16030->SetDirectory(0);
   Graph_gr_crsection_28_15_16030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_15_16030->SetLineColor(ci);
   Graph_gr_crsection_28_15_16030->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_16030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_16030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_16030->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_16030->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_16030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_16030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_16030->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_16030->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_16030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_16030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_16030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_15_16030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
