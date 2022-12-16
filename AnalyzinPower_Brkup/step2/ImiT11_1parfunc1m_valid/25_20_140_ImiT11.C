{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:38:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(135,-0.2873554,255,0.2027747);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,155,-0.04680843);
   gre->SetPointError(0,0,0.04566668);
   gre->SetPoint(1,165,-0.09973318);
   gre->SetPointError(1,0,0.04135795);
   gre->SetPoint(2,175,-0.1299708);
   gre->SetPointError(2,0,0.05038774);
   gre->SetPoint(3,185,-0.1528306);
   gre->SetPointError(3,0,0.05283644);
   gre->SetPoint(4,195,0.05095035);
   gre->SetPointError(4,0,0.0581867);
   gre->SetPoint(5,205,0.01764109);
   gre->SetPointError(5,0,0.05826247);
   gre->SetPoint(6,215,-0.004670836);
   gre->SetPointError(6,0,0.05966411);
   gre->SetPoint(7,225,0.06614861);
   gre->SetPointError(7,0,0.05493776);
   gre->SetPoint(8,235,0.0584141);
   gre->SetPointError(8,0,0.04287796);
   
   TH1F *Graph_gr_ImiT11_25_20_14042 = new TH1F("Graph_gr_ImiT11_25_20_14042","",100,147,243);
   Graph_gr_ImiT11_25_20_14042->SetMinimum(-0.2383424);
   Graph_gr_ImiT11_25_20_14042->SetMaximum(0.1537617);
   Graph_gr_ImiT11_25_20_14042->SetDirectory(0);
   Graph_gr_ImiT11_25_20_14042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_14042->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_14042);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
