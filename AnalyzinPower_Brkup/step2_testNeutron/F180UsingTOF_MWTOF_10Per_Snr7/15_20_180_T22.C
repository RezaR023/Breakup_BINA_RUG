{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:43:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(170,-0.3563408,290,0.1880544);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,190,-0.04145507);
   gre->SetPointError(0,0,0.06879932);
   gre->SetPoint(1,210,0.02671103);
   gre->SetPointError(1,0,0.07061086);
   gre->SetPoint(2,230,-0.1922556);
   gre->SetPointError(2,0,0.07335265);
   gre->SetPoint(3,250,0.03496275);
   gre->SetPointError(3,0,0.05773889);
   gre->SetPoint(4,270,-0.05531632);
   gre->SetPointError(4,0,0.05605785);
   
   TH1F *Graph_gr_T22_15_20_1806 = new TH1F("Graph_gr_T22_15_20_1806","",100,182,278);
   Graph_gr_T22_15_20_1806->SetMinimum(-0.3019012);
   Graph_gr_T22_15_20_1806->SetMaximum(0.1336149);
   Graph_gr_T22_15_20_1806->SetDirectory(0);
   Graph_gr_T22_15_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_20_1806->SetLineColor(ci);
   Graph_gr_T22_15_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
