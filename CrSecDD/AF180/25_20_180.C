{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:50:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(132.5,-109.6487,267.5,986.8384);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,17.09475);
   gre->SetPointError(0,0,0.5837648);
   gre->SetPoint(1,165,15.4213);
   gre->SetPointError(1,0,0.553727);
   gre->SetPoint(2,175,16.38835);
   gre->SetPointError(2,0,0.5622571);
   gre->SetPoint(3,185,17.68207);
   gre->SetPointError(3,0,0.5844567);
   gre->SetPoint(4,195,25.41909);
   gre->SetPointError(4,0,0.6819824);
   gre->SetPoint(5,205,37.72418);
   gre->SetPointError(5,0,0.8239138);
   gre->SetPoint(6,215,64.79815);
   gre->SetPointError(6,0,1.06981);
   gre->SetPoint(7,225,152.0097);
   gre->SetPointError(7,0,1.813451);
   gre->SetPoint(8,235,330.0401);
   gre->SetPointError(8,0,2.434309);
   gre->SetPoint(9,245,795.0776);
   gre->SetPointError(9,0,3.719146);
   
   TH1F *Graph_gr_crsection_25_20_18010 = new TH1F("Graph_gr_crsection_25_20_18010","",100,146,254);
   Graph_gr_crsection_25_20_18010->SetMinimum(0);
   Graph_gr_crsection_25_20_18010->SetMaximum(877.1897);
   Graph_gr_crsection_25_20_18010->SetDirectory(0);
   Graph_gr_crsection_25_20_18010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_20_18010->SetLineColor(ci);
   Graph_gr_crsection_25_20_18010->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_18010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_18010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_18010->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_18010->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_18010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_18010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_18010->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_20_18010->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_20_18010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_20_18010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_20_18010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_20_18010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
