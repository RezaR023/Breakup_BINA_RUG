{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:36:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.5553271,257.5,0.4263923);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.1770566);
   gre->SetPointError(0,0,0.08571578);
   gre->SetPoint(1,155,-0.009827923);
   gre->SetPointError(1,0,0.07644833);
   gre->SetPoint(2,165,0.0254488);
   gre->SetPointError(2,0,0.07573757);
   gre->SetPoint(3,175,-0.1744928);
   gre->SetPointError(3,0,0.06441004);
   gre->SetPoint(4,185,-0.2439338);
   gre->SetPointError(4,0,0.05318293);
   gre->SetPoint(5,195,-0.307942);
   gre->SetPointError(5,0,0.03813197);
   gre->SetPoint(6,205,-0.3673148);
   gre->SetPointError(6,0,0.02439241);
   gre->SetPoint(7,215,-0.3189308);
   gre->SetPointError(7,0,0.01528555);
   gre->SetPoint(8,225,-0.3178991);
   gre->SetPointError(8,0,0.009524334);
   gre->SetPoint(9,235,-0.2936992);
   gre->SetPointError(9,0,0.01065495);
   
   TH1F *Graph_gr_T20_28_25_18075 = new TH1F("Graph_gr_T20_28_25_18075","",100,136,244);
   Graph_gr_T20_28_25_18075->SetMinimum(-0.4571551);
   Graph_gr_T20_28_25_18075->SetMaximum(0.3282203);
   Graph_gr_T20_28_25_18075->SetDirectory(0);
   Graph_gr_T20_28_25_18075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_25_18075->SetLineColor(ci);
   Graph_gr_T20_28_25_18075->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18075->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18075->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18075->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_18075->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18075->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18075->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18075->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_18075->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18075->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18075->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_25_18075);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
