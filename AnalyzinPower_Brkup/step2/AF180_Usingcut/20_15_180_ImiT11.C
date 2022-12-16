{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:44:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.1779794,290,0.2214597);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.01442766);
   gre->SetPointError(0,0,0.09744431);
   gre->SetPoint(1,175,0.002905223);
   gre->SetPointError(1,0,0.07623457);
   gre->SetPoint(2,185,0.08254368);
   gre->SetPointError(2,0,0.07234282);
   gre->SetPoint(3,195,0.02360958);
   gre->SetPointError(3,0,0.0625174);
   gre->SetPoint(4,205,-0.0610693);
   gre->SetPointError(4,0,0.05033694);
   gre->SetPoint(5,215,-0.01874165);
   gre->SetPointError(5,0,0.04159525);
   gre->SetPoint(6,225,0.00975276);
   gre->SetPointError(6,0,0.03255826);
   gre->SetPoint(7,235,0.03031385);
   gre->SetPointError(7,0,0.02803083);
   gre->SetPoint(8,245,-0.0182246);
   gre->SetPointError(8,0,0.02161854);
   gre->SetPoint(9,255,0.004122335);
   gre->SetPointError(9,0,0.01567652);
   gre->SetPoint(10,265,-0.0005196632);
   gre->SetPointError(10,0,0.01158773);
   
   TH1F *Graph_gr_ImiT11_20_15_18024 = new TH1F("Graph_gr_ImiT11_20_15_18024","",100,155,275);
   Graph_gr_ImiT11_20_15_18024->SetMinimum(-0.1380355);
   Graph_gr_ImiT11_20_15_18024->SetMaximum(0.1815158);
   Graph_gr_ImiT11_20_15_18024->SetDirectory(0);
   Graph_gr_ImiT11_20_15_18024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_15_18024->SetLineColor(ci);
   Graph_gr_ImiT11_20_15_18024->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_18024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_18024->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_18024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_18024->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_18024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_18024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_15_18024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
