{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:45:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2072553,287.5,0.1822163);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.06066208);
   gre->SetPointError(0,0,0.05664226);
   gre->SetPoint(1,185,-0.0532905);
   gre->SetPointError(1,0,0.03625207);
   gre->SetPoint(2,195,-0.03838217);
   gre->SetPointError(2,0,0.03587722);
   gre->SetPoint(3,205,-0.06572474);
   gre->SetPointError(3,0,0.03332286);
   gre->SetPoint(4,215,-0.04234636);
   gre->SetPointError(4,0,0.0319979);
   gre->SetPoint(5,225,-0.0001601712);
   gre->SetPointError(5,0,0.03207744);
   gre->SetPoint(6,235,-0.1113478);
   gre->SetPointError(6,0,0.03099557);
   gre->SetPoint(7,245,-0.03481186);
   gre->SetPointError(7,0,0.03129515);
   gre->SetPoint(8,255,0.06356183);
   gre->SetPointError(8,0,0.03282307);
   gre->SetPoint(9,265,0.05038872);
   gre->SetPointError(9,0,0.03203894);
   
   TH1F *Graph_gr_T22_15_20_140174 = new TH1F("Graph_gr_T22_15_20_140174","",100,166,274);
   Graph_gr_T22_15_20_140174->SetMinimum(-0.1683081);
   Graph_gr_T22_15_20_140174->SetMaximum(0.1432691);
   Graph_gr_T22_15_20_140174->SetDirectory(0);
   Graph_gr_T22_15_20_140174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_20_140174->SetLineColor(ci);
   Graph_gr_T22_15_20_140174->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_140174->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_140174->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_140174->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_140174->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_140174->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_140174->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_140174->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_140174->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_140174->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_140174->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_140174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_20_140174);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
