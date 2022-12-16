{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 17:19:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-1.284969,257.5,0.9849196);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.813398);
   gre->SetPointError(0,0,0.09325649);
   gre->SetPoint(1,155,0.1686369);
   gre->SetPointError(1,0,0.1865036);
   gre->SetPoint(2,165,0.4295316);
   gre->SetPointError(2,0,0.1249991);
   gre->SetPoint(3,175,0.1739199);
   gre->SetPointError(3,0,0.1701163);
   gre->SetPoint(4,185,0.4646706);
   gre->SetPointError(4,0,0.1419342);
   gre->SetPoint(5,195,-0.4323607);
   gre->SetPointError(5,0,0.1223471);
   gre->SetPoint(6,205,0.04600807);
   gre->SetPointError(6,0,0.1012038);
   gre->SetPoint(7,215,-0.08136144);
   gre->SetPointError(7,0,0.08909402);
   gre->SetPoint(8,225,0.2345801);
   gre->SetPointError(8,0,0.06467525);
   gre->SetPoint(9,235,0.02349021);
   gre->SetPointError(9,0,0.06752222);
   
   TH1F *Graph_gr_iT11_28_15_18037 = new TH1F("Graph_gr_iT11_28_15_18037","",100,136,244);
   Graph_gr_iT11_28_15_18037->SetMinimum(-1.05798);
   Graph_gr_iT11_28_15_18037->SetMaximum(0.7579307);
   Graph_gr_iT11_28_15_18037->SetDirectory(0);
   Graph_gr_iT11_28_15_18037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_18037->SetLineColor(ci);
   Graph_gr_iT11_28_15_18037->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18037->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18037->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18037->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18037->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18037->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18037->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18037->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18037->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18037->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18037->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_18037);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
