{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:18:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-11.61475,257.5,226.1665);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,28.68914);
   gre->SetPointError(0,0,0.673673);
   gre->SetPoint(1,155,35.20026);
   gre->SetPointError(1,0,0.7252283);
   gre->SetPoint(2,165,36.5826);
   gre->SetPointError(2,0,0.7020332);
   gre->SetPoint(3,175,40.49216);
   gre->SetPointError(3,0,0.7328227);
   gre->SetPoint(4,185,52.28707);
   gre->SetPointError(4,0,0.8237753);
   gre->SetPoint(5,195,77.66184);
   gre->SetPointError(5,0,1.005089);
   gre->SetPoint(6,205,113.2614);
   gre->SetPointError(6,0,1.207702);
   gre->SetPoint(7,215,155.6445);
   gre->SetPointError(7,0,1.4132);
   gre->SetPoint(8,225,184.9998);
   gre->SetPointError(8,0,1.536551);
   gre->SetPoint(9,235,175.9669);
   gre->SetPointError(9,0,1.497139);
   
   TH1F *Graph_gr_crsection_25_28_16029 = new TH1F("Graph_gr_crsection_25_28_16029","",100,136,244);
   Graph_gr_crsection_25_28_16029->SetMinimum(12.16338);
   Graph_gr_crsection_25_28_16029->SetMaximum(202.3884);
   Graph_gr_crsection_25_28_16029->SetDirectory(0);
   Graph_gr_crsection_25_28_16029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_28_16029->SetLineColor(ci);
   Graph_gr_crsection_25_28_16029->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_16029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_16029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_16029->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_16029->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_16029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_16029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_16029->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_16029->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_16029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_16029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_16029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_28_16029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
