{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:34:35 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(152.5,-0.1298845,287.5,0.1350579);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,175,-0.0245763);
   gre->SetPointError(0,0,0.02602522);
   gre->SetPoint(1,185,0.007660397);
   gre->SetPointError(1,0,0.02077733);
   gre->SetPoint(2,195,-0.03386296);
   gre->SetPointError(2,0,0.01854623);
   gre->SetPoint(3,205,4.937817e-05);
   gre->SetPointError(3,0,0.01829209);
   gre->SetPoint(4,215,0.004289299);
   gre->SetPointError(4,0,0.01810036);
   gre->SetPoint(5,225,-0.02381669);
   gre->SetPointError(5,0,0.01813102);
   gre->SetPoint(6,235,0.01424427);
   gre->SetPointError(6,0,0.02067254);
   gre->SetPoint(7,245,-0.02519376);
   gre->SetPointError(7,0,0.02471526);
   gre->SetPoint(8,255,-0.05551934);
   gre->SetPointError(8,0,0.03020812);
   gre->SetPoint(9,265,0.05745718);
   gre->SetPointError(9,0,0.03344366);
   
   TH1F *Graph_gr_ImiT11_15_28_1804 = new TH1F("Graph_gr_ImiT11_15_28_1804","",100,166,274);
   Graph_gr_ImiT11_15_28_1804->SetMinimum(-0.1033903);
   Graph_gr_ImiT11_15_28_1804->SetMaximum(0.1085637);
   Graph_gr_ImiT11_15_28_1804->SetDirectory(0);
   Graph_gr_ImiT11_15_28_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_1804->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
