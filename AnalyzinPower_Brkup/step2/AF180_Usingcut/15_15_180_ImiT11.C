{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:46:35 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.2089544,297.5,0.2210831);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.07387455);
   gre->SetPointError(0,0,0.07553566);
   gre->SetPoint(1,195,-0.0696059);
   gre->SetPointError(1,0,0.06287466);
   gre->SetPoint(2,205,-0.08011207);
   gre->SetPointError(2,0,0.05716942);
   gre->SetPoint(3,215,0.04017011);
   gre->SetPointError(3,0,0.05788471);
   gre->SetPoint(4,225,0.02050157);
   gre->SetPointError(4,0,0.0509203);
   gre->SetPoint(5,235,-0.004520544);
   gre->SetPointError(5,0,0.04131088);
   gre->SetPoint(6,245,-0.001374477);
   gre->SetPointError(6,0,0.03653569);
   gre->SetPoint(7,255,0.04592378);
   gre->SetPointError(7,0,0.03309761);
   gre->SetPoint(8,265,0.01177622);
   gre->SetPointError(8,0,0.02570798);
   gre->SetPoint(9,275,-0.002509057);
   gre->SetPointError(9,0,0.02117036);
   
   TH1F *Graph_gr_ImiT11_15_15_1805 = new TH1F("Graph_gr_ImiT11_15_15_1805","",100,176,284);
   Graph_gr_ImiT11_15_15_1805->SetMinimum(-0.1659507);
   Graph_gr_ImiT11_15_15_1805->SetMaximum(0.1780794);
   Graph_gr_ImiT11_15_15_1805->SetDirectory(0);
   Graph_gr_ImiT11_15_15_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_1805->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
