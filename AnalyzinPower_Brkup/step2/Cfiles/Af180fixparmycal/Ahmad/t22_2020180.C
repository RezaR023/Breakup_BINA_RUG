{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:18:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.8242374,310,0.5046488);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.05935655);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.05935655);
   gre->SetPoint(2,155,-0.1597943);
   gre->SetPointError(2,0,0.4429621);
   gre->SetPoint(3,165,-0.02101438);
   gre->SetPointError(3,0,0.04437042);
   gre->SetPoint(4,175,-0.04959345);
   gre->SetPointError(4,0,0.03546671);
   gre->SetPoint(5,185,-0.09950147);
   gre->SetPointError(5,0,0.03392106);
   gre->SetPoint(6,195,-0.0447931);
   gre->SetPointError(6,0,0.03132084);
   gre->SetPoint(7,205,-0.05086502);
   gre->SetPointError(7,0,0.02795078);
   gre->SetPoint(8,215,-0.07805647);
   gre->SetPointError(8,0,0.02392838);
   gre->SetPoint(9,225,-0.1276713);
   gre->SetPointError(9,0,0.02122863);
   gre->SetPoint(10,235,-0.1188313);
   gre->SetPointError(10,0,0.01823716);
   gre->SetPoint(11,245,-0.1739517);
   gre->SetPointError(11,0,0.01509409);
   gre->SetPoint(12,255,-0.2118336);
   gre->SetPointError(12,0,0.0140292);
   gre->SetPoint(13,265,-0.2501842);
   gre->SetPointError(13,0,0.01422704);
   gre->SetPoint(14,275,-0.07262333);
   gre->SetPointError(14,0,0.06686027);
   
   TH1F *Graph_gr_T22_20_20_1806 = new TH1F("Graph_gr_T22_20_20_1806","",100,121,289);
   Graph_gr_T22_20_20_1806->SetMinimum(-0.6913487);
   Graph_gr_T22_20_20_1806->SetMaximum(0.3717602);
   Graph_gr_T22_20_20_1806->SetDirectory(0);
   Graph_gr_T22_20_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_1806->SetLineColor(ci);
   Graph_gr_T22_20_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
