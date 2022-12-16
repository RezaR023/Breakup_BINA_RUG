{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:39:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3187383,297.5,0.1680558);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.08342537);
   gre->SetPointError(0,0,0.06079941);
   gre->SetPoint(1,195,0.01132569);
   gre->SetPointError(1,0,0.06226838);
   gre->SetPoint(2,205,-0.183473);
   gre->SetPointError(2,0,0.05413297);
   gre->SetPoint(3,215,-0.1238945);
   gre->SetPointError(3,0,0.0462969);
   gre->SetPoint(4,225,-0.09657203);
   gre->SetPointError(4,0,0.04633453);
   gre->SetPoint(5,235,-0.02796423);
   gre->SetPointError(5,0,0.0457123);
   gre->SetPoint(6,245,-0.02265157);
   gre->SetPointError(6,0,0.04174589);
   gre->SetPoint(7,255,0.04689663);
   gre->SetPointError(7,0,0.04002681);
   gre->SetPoint(8,265,-0.00982868);
   gre->SetPointError(8,0,0.03734633);
   gre->SetPoint(9,275,0.02502983);
   gre->SetPointError(9,0,0.03285145);
   
   TH1F *Graph_gr_iT11_15_15_140167 = new TH1F("Graph_gr_iT11_15_15_140167","",100,176,284);
   Graph_gr_iT11_15_15_140167->SetMinimum(-0.2700589);
   Graph_gr_iT11_15_15_140167->SetMaximum(0.1193764);
   Graph_gr_iT11_15_15_140167->SetDirectory(0);
   Graph_gr_iT11_15_15_140167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_140167->SetLineColor(ci);
   Graph_gr_iT11_15_15_140167->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_140167->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_140167->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_140167->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_140167->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_140167->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_140167->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_140167->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_140167->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_140167->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_140167->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_140167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_140167);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
