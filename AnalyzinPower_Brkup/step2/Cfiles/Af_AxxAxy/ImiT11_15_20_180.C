{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:29:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.4348606,310,1.51899);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.004607067);
   gre->SetPointError(0,0,0.02755131);
   gre->SetPoint(1,145,0.004607067);
   gre->SetPointError(1,0,0.02755131);
   gre->SetPoint(2,155,-0.006222233);
   gre->SetPointError(2,0,0.1029966);
   gre->SetPoint(3,165,0.619346);
   gre->SetPointError(3,0,0.5740023);
   gre->SetPoint(4,175,0.0210163);
   gre->SetPointError(4,0,0.0767608);
   gre->SetPoint(5,185,0.003116347);
   gre->SetPointError(5,0,0.04346227);
   gre->SetPoint(6,195,-0.01986266);
   gre->SetPointError(6,0,0.03687389);
   gre->SetPoint(7,205,-0.001553964);
   gre->SetPointError(7,0,0.03225298);
   gre->SetPoint(8,215,-0.05998435);
   gre->SetPointError(8,0,0.02953317);
   gre->SetPoint(9,225,-0.007941972);
   gre->SetPointError(9,0,0.03057443);
   gre->SetPoint(10,235,-0.01044796);
   gre->SetPointError(10,0,0.02926631);
   gre->SetPoint(11,245,0.004992809);
   gre->SetPointError(11,0,0.02937368);
   gre->SetPoint(12,255,-0.05961355);
   gre->SetPointError(12,0,0.03179414);
   gre->SetPoint(13,265,-0.0311423);
   gre->SetPointError(13,0,0.030236);
   gre->SetPoint(14,275,0.01987015);
   gre->SetPointError(14,0,0.02875498);
   
   TH1F *Graph_gr_ImiT11_15_20_1803 = new TH1F("Graph_gr_ImiT11_15_20_1803","",100,121,289);
   Graph_gr_ImiT11_15_20_1803->SetMinimum(-0.2394756);
   Graph_gr_ImiT11_15_20_1803->SetMaximum(1.323605);
   Graph_gr_ImiT11_15_20_1803->SetDirectory(0);
   Graph_gr_ImiT11_15_20_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_1803->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
