{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:39:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,9.533662,257.5,28.66342);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,13.22373);
   gre->SetPointError(0,0,0.5017785);
   gre->SetPoint(1,154.9668,23.29776);
   gre->SetPointError(1,0,0.6388208);
   gre->SetPoint(2,165,24.82531);
   gre->SetPointError(2,0,0.6498198);
   gre->SetPoint(3,175,22.12156);
   gre->SetPointError(3,0,0.6266316);
   gre->SetPoint(4,185,22.19347);
   gre->SetPointError(4,0,0.6150093);
   gre->SetPoint(5,195,21.98102);
   gre->SetPointError(5,0,0.6053678);
   gre->SetPoint(6,205,20.5004);
   gre->SetPointError(6,0,0.5958731);
   gre->SetPoint(7,215,21.4998);
   gre->SetPointError(7,0,0.6117222);
   gre->SetPoint(8,225,24.59712);
   gre->SetPointError(8,0,0.6435712);
   gre->SetPoint(9,235,22.25425);
   gre->SetPointError(9,0,0.5958718);
   
   TH1F *Graph_gr_crsection_28_20_14015 = new TH1F("Graph_gr_crsection_28_20_14015","",100,136,244);
   Graph_gr_crsection_28_20_14015->SetMinimum(11.44664);
   Graph_gr_crsection_28_20_14015->SetMaximum(26.75045);
   Graph_gr_crsection_28_20_14015->SetDirectory(0);
   Graph_gr_crsection_28_20_14015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_20_14015->SetLineColor(ci);
   Graph_gr_crsection_28_20_14015->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_14015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_14015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_14015->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_14015->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_14015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_14015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_14015->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_14015->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_14015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_14015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_14015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_20_14015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
