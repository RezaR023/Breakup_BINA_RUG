{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:14:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.4376636,257.5,0.0628599);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.07061254);
   gre->SetPointError(0,0,0.05005185);
   gre->SetPoint(1,155,-0.2071234);
   gre->SetPointError(1,0,0.04475796);
   gre->SetPoint(2,165,-0.2442861);
   gre->SetPointError(2,0,0.03987677);
   gre->SetPoint(3,175,-0.3202762);
   gre->SetPointError(3,0,0.03396682);
   gre->SetPoint(4,185,-0.3249304);
   gre->SetPointError(4,0,0.02443686);
   gre->SetPoint(5,195,-0.2980123);
   gre->SetPointError(5,0,0.0181877);
   gre->SetPoint(6,205,-0.3114228);
   gre->SetPointError(6,0,0.01302165);
   gre->SetPoint(7,215,-0.3210919);
   gre->SetPointError(7,0,0.009622384);
   gre->SetPoint(8,225,-0.3058071);
   gre->SetPointError(8,0,0.008097366);
   gre->SetPoint(9,235,-0.3024661);
   gre->SetPointError(9,0,0.008884825);
   
   TH1F *Graph_gr_iT11_25_28_18058 = new TH1F("Graph_gr_iT11_25_28_18058","",100,136,244);
   Graph_gr_iT11_25_28_18058->SetMinimum(-0.3876113);
   Graph_gr_iT11_25_28_18058->SetMaximum(0.01280754);
   Graph_gr_iT11_25_28_18058->SetDirectory(0);
   Graph_gr_iT11_25_28_18058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_28_18058->SetLineColor(ci);
   Graph_gr_iT11_25_28_18058->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_18058->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_18058->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_18058->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_18058->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_18058->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_18058->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_18058->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_18058->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_18058->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_18058->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_18058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_28_18058);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
