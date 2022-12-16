{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:16:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(162.5,-0.1092197,297.5,0.09585321);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.02254242);
   gre->SetPointError(0,0,0.03794286);
   gre->SetPoint(1,195,0.02625449);
   gre->SetPointError(1,0,0.03134539);
   gre->SetPoint(2,205,-0.02490928);
   gre->SetPointError(2,0,0.02974582);
   gre->SetPoint(3,215,-0.04377421);
   gre->SetPointError(3,0,0.02897909);
   gre->SetPoint(4,225,0.00832392);
   gre->SetPointError(4,0,0.03132045);
   gre->SetPoint(5,235,-0.0157019);
   gre->SetPointError(5,0,0.02954571);
   gre->SetPoint(6,245,-0.01663407);
   gre->SetPointError(6,0,0.03162387);
   gre->SetPoint(7,255,-0.04346963);
   gre->SetPointError(7,0,0.03157123);
   gre->SetPoint(8,265,0.02854595);
   gre->SetPointError(8,0,0.03312845);
   gre->SetPoint(9,275,-0.01649087);
   gre->SetPointError(9,0,0.03382612);
   
   TH1F *Graph_gr_ImiT11_15_20_1802 = new TH1F("Graph_gr_ImiT11_15_20_1802","",100,176,284);
   Graph_gr_ImiT11_15_20_1802->SetMinimum(-0.08871239);
   Graph_gr_ImiT11_15_20_1802->SetMaximum(0.07534592);
   Graph_gr_ImiT11_15_20_1802->SetDirectory(0);
   Graph_gr_ImiT11_15_20_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_1802->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
