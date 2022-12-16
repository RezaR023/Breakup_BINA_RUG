{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:29:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.07089744,287.5,0.06101577);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.01049697);
   gre->SetPointError(0,0,0.02853327);
   gre->SetPoint(1,185,0.009044734);
   gre->SetPointError(1,0,0.02186052);
   gre->SetPoint(2,195,0.009209325);
   gre->SetPointError(2,0,0.01850658);
   gre->SetPoint(3,205,0.01934576);
   gre->SetPointError(3,0,0.0178162);
   gre->SetPoint(4,215,0.007310103);
   gre->SetPointError(4,0,0.0176014);
   gre->SetPoint(5,225,0.003193457);
   gre->SetPointError(5,0,0.01816069);
   gre->SetPoint(6,235,0.004545409);
   gre->SetPointError(6,0,0.02070899);
   gre->SetPoint(7,245,-0.002335685);
   gre->SetPointError(7,0,0.02362594);
   gre->SetPoint(8,255,-0.02008257);
   gre->SetPointError(8,0,0.02882933);
   gre->SetPoint(9,265,-0.01015419);
   gre->SetPointError(9,0,0.03435625);
   
   TH1F *Graph_gr_ImiT11_15_28_18020 = new TH1F("Graph_gr_ImiT11_15_28_18020","",100,166,274);
   Graph_gr_ImiT11_15_28_18020->SetMinimum(-0.05770611);
   Graph_gr_ImiT11_15_28_18020->SetMaximum(0.04782445);
   Graph_gr_ImiT11_15_28_18020->SetDirectory(0);
   Graph_gr_ImiT11_15_28_18020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_18020->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_18020->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_18020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_18020->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_18020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_18020->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_18020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_18020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_18020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
