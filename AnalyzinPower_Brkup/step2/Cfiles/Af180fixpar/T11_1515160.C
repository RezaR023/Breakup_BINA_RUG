{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:43:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.4295,-0.4371845,299.5305,0.3839437);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.113,-0.232156);
   gre->SetPointError(0,0,0.06817382);
   gre->SetPoint(1,191.639,0.03196659);
   gre->SetPointError(1,0,0.07145346);
   gre->SetPoint(2,202.165,0.1810735);
   gre->SetPointError(2,0,0.06601549);
   gre->SetPoint(3,212.691,-0.1554236);
   gre->SetPointError(3,0,0.07035553);
   gre->SetPoint(4,223.217,0.03568453);
   gre->SetPointError(4,0,0.07328581);
   gre->SetPoint(5,233.743,-0.09627148);
   gre->SetPointError(5,0,0.05926774);
   gre->SetPoint(6,244.269,0.1535894);
   gre->SetPointError(6,0,0.05330373);
   gre->SetPoint(7,254.795,0.1854918);
   gre->SetPointError(7,0,0.05039303);
   gre->SetPoint(8,265.321,0.1140364);
   gre->SetPointError(8,0,0.04781036);
   gre->SetPoint(9,275.847,0.1707466);
   gre->SetPointError(9,0,0.04591318);
   
   TH1F *Graph_gr_iT11_15_15_16022 = new TH1F("Graph_gr_iT11_15_15_16022","",100,171.6396,285.3204);
   Graph_gr_iT11_15_15_16022->SetMinimum(-0.3550717);
   Graph_gr_iT11_15_15_16022->SetMaximum(0.3018309);
   Graph_gr_iT11_15_15_16022->SetDirectory(0);
   Graph_gr_iT11_15_15_16022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_16022->SetLineColor(ci);
   Graph_gr_iT11_15_15_16022->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16022->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_16022->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16022->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_16022->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_16022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
