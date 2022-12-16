{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:50:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-113245.5,310,108556.2);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,-2344.646);
   gre->SetPointError(3,0,73933.9);
   gre->SetPoint(4,175,-0.1329297);
   gre->SetPointError(4,0,0.1168133);
   gre->SetPoint(5,185,0.07337619);
   gre->SetPointError(5,0,0.0608792);
   gre->SetPoint(6,195,-0.0924286);
   gre->SetPointError(6,0,0.05676132);
   gre->SetPoint(7,205,-0.06834202);
   gre->SetPointError(7,0,0.04964948);
   gre->SetPoint(8,215,0.097079);
   gre->SetPointError(8,0,0.04852243);
   gre->SetPoint(9,225,0.02453987);
   gre->SetPointError(9,0,0.04302116);
   gre->SetPoint(10,235,-0.02763133);
   gre->SetPointError(10,0,0.03942234);
   gre->SetPoint(11,245,0.03034733);
   gre->SetPointError(11,0,0.03537522);
   gre->SetPoint(12,255,0.1147922);
   gre->SetPointError(12,0,0.03088161);
   gre->SetPoint(13,265,0.1961957);
   gre->SetPointError(13,0,0.02536775);
   gre->SetPoint(14,275,0.1581281);
   gre->SetPointError(14,0,0.01963344);
   
   TH1F *Graph_gr_iT11_15_15_1801 = new TH1F("Graph_gr_iT11_15_15_1801","",100,121,289);
   Graph_gr_iT11_15_15_1801->SetMinimum(-91065.33);
   Graph_gr_iT11_15_15_1801->SetMaximum(86376.03);
   Graph_gr_iT11_15_15_1801->SetDirectory(0);
   Graph_gr_iT11_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_1801->SetLineColor(ci);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
