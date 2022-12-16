{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:37:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(132.5,15.29157,267.5,32.71369);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,154.9403,27.31101);
   gre->SetPointError(0,0,0.7084286);
   gre->SetPoint(1,165,26.23043);
   gre->SetPointError(1,0,0.716251);
   gre->SetPoint(2,175,22.98711);
   gre->SetPointError(2,0,0.6650801);
   gre->SetPoint(3,185,21.74694);
   gre->SetPointError(3,0,0.6408107);
   gre->SetPoint(4,195,19.05579);
   gre->SetPointError(4,0,0.6042784);
   gre->SetPoint(5,205,18.78885);
   gre->SetPointError(5,0,0.5935944);
   gre->SetPoint(6,215,20.90999);
   gre->SetPointError(6,0,0.6174936);
   gre->SetPoint(7,225,22.58053);
   gre->SetPointError(7,0,0.6470123);
   gre->SetPoint(8,235,29.07425);
   gre->SetPointError(8,0,0.7357459);
   gre->SetPoint(9,245,22.63357);
   gre->SetPointError(9,0,0.6315554);
   
   TH1F *Graph_gr_crsection_25_20_14010 = new TH1F("Graph_gr_crsection_25_20_14010","",100,146,254);
   Graph_gr_crsection_25_20_14010->SetMinimum(17.03378);
   Graph_gr_crsection_25_20_14010->SetMaximum(30.97147);
   Graph_gr_crsection_25_20_14010->SetDirectory(0);
   Graph_gr_crsection_25_20_14010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_20_14010->SetLineColor(ci);
   Graph_gr_crsection_25_20_14010->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_14010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_14010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_14010->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_14010->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_14010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_14010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_14010->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_14010->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_14010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_14010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_14010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_20_14010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
