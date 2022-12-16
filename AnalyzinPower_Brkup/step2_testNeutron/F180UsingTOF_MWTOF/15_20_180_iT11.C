{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:43:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.258353,297.5,-0.002321814);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.1578119);
   gre->SetPointError(0,0,0.03231397);
   gre->SetPoint(1,195,-0.1459526);
   gre->SetPointError(1,0,0.0242833);
   gre->SetPoint(2,205,-0.1915862);
   gre->SetPointError(2,0,0.02409495);
   gre->SetPoint(3,215,-0.1380018);
   gre->SetPointError(3,0,0.02507989);
   gre->SetPoint(4,225,-0.1837791);
   gre->SetPointError(4,0,0.02448329);
   gre->SetPoint(5,235,-0.1256338);
   gre->SetPointError(5,0,0.02603875);
   gre->SetPoint(6,245,-0.1654867);
   gre->SetPointError(6,0,0.02504924);
   gre->SetPoint(7,255,-0.1201064);
   gre->SetPointError(7,0,0.02566117);
   gre->SetPoint(8,265,-0.06882394);
   gre->SetPointError(8,0,0.02383026);
   gre->SetPoint(9,275,-0.0705481);
   gre->SetPointError(9,0,0.02500931);
   
   TH1F *Graph_gr_iT11_15_20_1804 = new TH1F("Graph_gr_iT11_15_20_1804","",100,176,284);
   Graph_gr_iT11_15_20_1804->SetMinimum(-0.2327499);
   Graph_gr_iT11_15_20_1804->SetMaximum(-0.02792493);
   Graph_gr_iT11_15_20_1804->SetDirectory(0);
   Graph_gr_iT11_15_20_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_20_1804->SetLineColor(ci);
   Graph_gr_iT11_15_20_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_20_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
