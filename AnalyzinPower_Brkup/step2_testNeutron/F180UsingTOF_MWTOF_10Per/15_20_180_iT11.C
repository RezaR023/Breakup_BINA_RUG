{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:18:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.4341584,297.5,0.2635068);
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
   gre->SetPoint(0,185,-0.2329196);
   gre->SetPointError(0,0,0.08496128);
   gre->SetPoint(1,195,-0.114116);
   gre->SetPointError(1,0,0.0857935);
   gre->SetPoint(2,205,-0.1274072);
   gre->SetPointError(2,0,0.09762305);
   gre->SetPoint(3,215,-0.1323336);
   gre->SetPointError(3,0,0.08984662);
   gre->SetPoint(4,225,-0.1221864);
   gre->SetPointError(4,0,0.109428);
   gre->SetPoint(5,235,0.02823724);
   gre->SetPointError(5,0,0.09028309);
   gre->SetPoint(6,245,0.04737601);
   gre->SetPointError(6,0,0.09985324);
   gre->SetPoint(7,255,-0.0434652);
   gre->SetPointError(7,0,0.1030276);
   gre->SetPoint(8,265,-0.1189099);
   gre->SetPointError(8,0,0.09888899);
   gre->SetPoint(9,275,-0.1870086);
   gre->SetPointError(9,0,0.1062266);
   
   TH1F *Graph_gr_iT11_15_20_18020 = new TH1F("Graph_gr_iT11_15_20_18020","",100,176,284);
   Graph_gr_iT11_15_20_18020->SetMinimum(-0.3643919);
   Graph_gr_iT11_15_20_18020->SetMaximum(0.1937403);
   Graph_gr_iT11_15_20_18020->SetDirectory(0);
   Graph_gr_iT11_15_20_18020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_20_18020->SetLineColor(ci);
   Graph_gr_iT11_15_20_18020->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_18020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_18020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_18020->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_18020->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_18020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_18020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_18020->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_18020->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_18020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_18020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_18020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_20_18020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
