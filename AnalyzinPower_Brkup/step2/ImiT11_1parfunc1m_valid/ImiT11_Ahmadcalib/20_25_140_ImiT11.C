{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:51:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.1859021,267.5,0.1012592);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.08407149);
   gre->SetPointError(0,0,0.04794156);
   gre->SetPoint(1,165,-0.07491523);
   gre->SetPointError(1,0,0.03221502);
   gre->SetPoint(2,175,-0.02117874);
   gre->SetPointError(2,0,0.03298288);
   gre->SetPoint(3,185,-0.04816981);
   gre->SetPointError(3,0,0.03312304);
   gre->SetPoint(4,195,-0.1042457);
   gre->SetPointError(4,0,0.03379613);
   gre->SetPoint(5,205,-0.07306718);
   gre->SetPointError(5,0,0.03562229);
   gre->SetPoint(6,215,0.01481597);
   gre->SetPointError(6,0,0.03858299);
   gre->SetPoint(7,225,-0.06588014);
   gre->SetPointError(7,0,0.03861781);
   gre->SetPoint(8,235,-0.05569175);
   gre->SetPointError(8,0,0.03620885);
   gre->SetPoint(9,245,-0.08174395);
   gre->SetPointError(9,0,0.03451384);
   
   TH1F *Graph_gr_ImiT11_20_25_14039 = new TH1F("Graph_gr_ImiT11_20_25_14039","",100,146,254);
   Graph_gr_ImiT11_20_25_14039->SetMinimum(-0.157186);
   Graph_gr_ImiT11_20_25_14039->SetMaximum(0.07254303);
   Graph_gr_ImiT11_20_25_14039->SetDirectory(0);
   Graph_gr_ImiT11_20_25_14039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_14039->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_14039);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
