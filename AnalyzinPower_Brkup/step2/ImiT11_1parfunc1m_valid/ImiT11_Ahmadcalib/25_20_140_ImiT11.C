{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:52:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(135,-0.2065755,255,0.2426633);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.04380261);
   gre->SetPointError(0,0,0.03552747);
   gre->SetPoint(1,165,-0.0907044);
   gre->SetPointError(1,0,0.03226001);
   gre->SetPoint(2,175,-0.0911357);
   gre->SetPointError(2,0,0.04056668);
   gre->SetPoint(3,185,0.03551764);
   gre->SetPointError(3,0,0.039824);
   gre->SetPoint(4,195,-0.01487567);
   gre->SetPointError(4,0,0.04723673);
   gre->SetPoint(5,205,0.06596517);
   gre->SetPointError(5,0,0.0503163);
   gre->SetPoint(6,215,0.05190558);
   gre->SetPointError(6,0,0.05683026);
   gre->SetPoint(7,225,0.009417193);
   gre->SetPointError(7,0,0.04477186);
   gre->SetPoint(8,235,0.1336892);
   gre->SetPointError(8,0,0.0341009);
   
   TH1F *Graph_gr_ImiT11_25_20_14042 = new TH1F("Graph_gr_ImiT11_25_20_14042","",100,147,243);
   Graph_gr_ImiT11_25_20_14042->SetMinimum(-0.1616516);
   Graph_gr_ImiT11_25_20_14042->SetMaximum(0.1977394);
   Graph_gr_ImiT11_25_20_14042->SetDirectory(0);
   Graph_gr_ImiT11_25_20_14042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_14042->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_14042);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
