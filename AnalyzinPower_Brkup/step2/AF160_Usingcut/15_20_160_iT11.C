{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:01:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3306769,297.5,0.02992502);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.07488739);
   gre->SetPointError(0,0,0.04471209);
   gre->SetPoint(1,195,-0.1435729);
   gre->SetPointError(1,0,0.03496143);
   gre->SetPoint(2,205,-0.149937);
   gre->SetPointError(2,0,0.03110234);
   gre->SetPoint(3,215,-0.2020686);
   gre->SetPointError(3,0,0.02965181);
   gre->SetPoint(4,225,-0.1700139);
   gre->SetPointError(4,0,0.02886075);
   gre->SetPoint(5,235,-0.2407224);
   gre->SetPointError(5,0,0.02985414);
   gre->SetPoint(6,245,-0.1792905);
   gre->SetPointError(6,0,0.02885275);
   gre->SetPoint(7,255,-0.1323006);
   gre->SetPointError(7,0,0.03087451);
   gre->SetPoint(8,265,-0.1675046);
   gre->SetPointError(8,0,0.02898752);
   gre->SetPoint(9,275,-0.1856934);
   gre->SetPointError(9,0,0.02947675);
   
   TH1F *Graph_gr_iT11_15_20_16089 = new TH1F("Graph_gr_iT11_15_20_16089","",100,176,284);
   Graph_gr_iT11_15_20_16089->SetMinimum(-0.2946167);
   Graph_gr_iT11_15_20_16089->SetMaximum(-0.006135168);
   Graph_gr_iT11_15_20_16089->SetDirectory(0);
   Graph_gr_iT11_15_20_16089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_20_16089->SetLineColor(ci);
   Graph_gr_iT11_15_20_16089->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_16089->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_16089->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_16089->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_16089->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_16089->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_16089->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_16089->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_16089->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_16089->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_16089->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_16089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_20_16089);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
