{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:35:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(162.5,-0.1352805,297.5,0.07847152);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.01222511);
   gre->SetPointError(0,0,0.03062107);
   gre->SetPoint(1,195,-0.04427195);
   gre->SetPointError(1,0,0.02671172);
   gre->SetPoint(2,205,-0.006843168);
   gre->SetPointError(2,0,0.02442371);
   gre->SetPoint(3,215,-0.07622318);
   gre->SetPointError(3,0,0.02343201);
   gre->SetPoint(4,225,-0.04785395);
   gre->SetPointError(4,0,0.02390232);
   gre->SetPoint(5,235,-0.03012876);
   gre->SetPointError(5,0,0.0250816);
   gre->SetPoint(6,245,-0.04917364);
   gre->SetPointError(6,0,0.02666788);
   gre->SetPoint(7,255,-0.02175054);
   gre->SetPointError(7,0,0.0282738);
   gre->SetPoint(8,265,-0.002999242);
   gre->SetPointError(8,0,0.02927985);
   gre->SetPoint(9,275,0.003749165);
   gre->SetPointError(9,0,0.02855098);
   
   TH1F *Graph_gr_ImiT11_15_20_16018 = new TH1F("Graph_gr_ImiT11_15_20_16018","",100,176,284);
   Graph_gr_ImiT11_15_20_16018->SetMinimum(-0.1139053);
   Graph_gr_ImiT11_15_20_16018->SetMaximum(0.05709632);
   Graph_gr_ImiT11_15_20_16018->SetDirectory(0);
   Graph_gr_ImiT11_15_20_16018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_16018->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_16018->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16018->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16018->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_16018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
