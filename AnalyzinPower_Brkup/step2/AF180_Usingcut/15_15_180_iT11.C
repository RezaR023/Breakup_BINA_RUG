{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:44:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.26677,297.5,0.3195625);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.01681694);
   gre->SetPointError(0,0,0.06648489);
   gre->SetPoint(1,195,-0.1093329);
   gre->SetPointError(1,0,0.059715);
   gre->SetPoint(2,205,-0.07700912);
   gre->SetPointError(2,0,0.0541002);
   gre->SetPoint(3,215,0.09518057);
   gre->SetPointError(3,0,0.05449738);
   gre->SetPoint(4,225,0.04369692);
   gre->SetPointError(4,0,0.04870867);
   gre->SetPoint(5,235,-0.02035178);
   gre->SetPointError(5,0,0.03939399);
   gre->SetPoint(6,245,0.02021832);
   gre->SetPointError(6,0,0.03567312);
   gre->SetPoint(7,255,0.1284118);
   gre->SetPointError(7,0,0.0319533);
   gre->SetPoint(8,265,0.1964845);
   gre->SetPointError(8,0,0.02535598);
   gre->SetPoint(9,275,0.1687299);
   gre->SetPointError(9,0,0.02078066);
   
   TH1F *Graph_gr_iT11_15_15_1804 = new TH1F("Graph_gr_iT11_15_15_1804","",100,176,284);
   Graph_gr_iT11_15_15_1804->SetMinimum(-0.2081367);
   Graph_gr_iT11_15_15_1804->SetMaximum(0.2609293);
   Graph_gr_iT11_15_15_1804->SetDirectory(0);
   Graph_gr_iT11_15_15_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_1804->SetLineColor(ci);
   Graph_gr_iT11_15_15_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
