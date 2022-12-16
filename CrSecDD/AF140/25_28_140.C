{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:38:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,14.0863,257.5,54.0776);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,21.32);
   gre->SetPointError(0,0,0.5684796);
   gre->SetPoint(1,155,30.54831);
   gre->SetPointError(1,0,0.653109);
   gre->SetPoint(2,165,26.79725);
   gre->SetPointError(2,0,0.622047);
   gre->SetPoint(3,175,25.83561);
   gre->SetPointError(3,0,0.6028765);
   gre->SetPoint(4,185,21.42079);
   gre->SetPointError(4,0,0.5604261);
   gre->SetPoint(5,195,23.12892);
   gre->SetPointError(5,0,0.5638619);
   gre->SetPoint(6,205,25.11443);
   gre->SetPointError(6,0,0.5896771);
   gre->SetPoint(7,215,27.61896);
   gre->SetPointError(7,0,0.6262776);
   gre->SetPoint(8,225,37.41124);
   gre->SetPointError(8,0,0.7118498);
   gre->SetPoint(9,235,46.62938);
   gre->SetPointError(9,0,0.7830058);
   
   TH1F *Graph_gr_crsection_25_28_14012 = new TH1F("Graph_gr_crsection_25_28_14012","",100,136,244);
   Graph_gr_crsection_25_28_14012->SetMinimum(18.08543);
   Graph_gr_crsection_25_28_14012->SetMaximum(50.07847);
   Graph_gr_crsection_25_28_14012->SetDirectory(0);
   Graph_gr_crsection_25_28_14012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_28_14012->SetLineColor(ci);
   Graph_gr_crsection_25_28_14012->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_14012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_14012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_14012->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_14012->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_14012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_14012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_14012->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_14012->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_14012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_14012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_14012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_28_14012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
