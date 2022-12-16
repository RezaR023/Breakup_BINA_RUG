{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:23:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.101005,287.5,0.103317);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.02848765);
   gre->SetPointError(0,0,0.04077567);
   gre->SetPoint(1,185,0.03344839);
   gre->SetPointError(1,0,0.02987541);
   gre->SetPoint(2,195,-0.02264405);
   gre->SetPointError(2,0,0.02367286);
   gre->SetPoint(3,205,0.01583707);
   gre->SetPointError(3,0,0.0214472);
   gre->SetPoint(4,215,0.02682604);
   gre->SetPointError(4,0,0.02090857);
   gre->SetPoint(5,225,-0.02245977);
   gre->SetPointError(5,0,0.02147297);
   gre->SetPoint(6,235,-0.04503067);
   gre->SetPointError(6,0,0.02192064);
   gre->SetPoint(7,245,-0.005549906);
   gre->SetPointError(7,0,0.02455207);
   gre->SetPoint(8,255,0.02286061);
   gre->SetPointError(8,0,0.02603611);
   gre->SetPoint(9,265,-0.02794722);
   gre->SetPointError(9,0,0.0300083);
   
   TH1F *Graph_gr_ImiT11_15_25_18015 = new TH1F("Graph_gr_ImiT11_15_25_18015","",100,166,274);
   Graph_gr_ImiT11_15_25_18015->SetMinimum(-0.08057277);
   Graph_gr_ImiT11_15_25_18015->SetMaximum(0.08288479);
   Graph_gr_ImiT11_15_25_18015->SetDirectory(0);
   Graph_gr_ImiT11_15_25_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_18015->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
