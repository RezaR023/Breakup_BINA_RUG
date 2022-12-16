{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:39:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(142.5,-0.1261835,277.5,0.04544515);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.009747521);
   gre->SetPointError(0,0,0.0265879);
   gre->SetPoint(1,175,-0.07391853);
   gre->SetPointError(1,0,0.02366018);
   gre->SetPoint(2,185,-0.01147764);
   gre->SetPointError(2,0,0.0200763);
   gre->SetPoint(3,195,-0.03883441);
   gre->SetPointError(3,0,0.01719865);
   gre->SetPoint(4,205,-0.0505007);
   gre->SetPointError(4,0,0.01580485);
   gre->SetPoint(5,215,-0.05382713);
   gre->SetPointError(5,0,0.01556966);
   gre->SetPoint(6,225,-0.05564424);
   gre->SetPointError(6,0,0.01645042);
   gre->SetPoint(7,235,-0.02580951);
   gre->SetPointError(7,0,0.01894138);
   gre->SetPoint(8,245,-0.03712176);
   gre->SetPointError(8,0,0.02135901);
   gre->SetPoint(9,255,-0.06287504);
   gre->SetPointError(9,0,0.02440158);
   
   TH1F *Graph_gr_ImiT11_20_28_16024 = new TH1F("Graph_gr_ImiT11_20_28_16024","",100,156,264);
   Graph_gr_ImiT11_20_28_16024->SetMinimum(-0.1090206);
   Graph_gr_ImiT11_20_28_16024->SetMaximum(0.02828229);
   Graph_gr_ImiT11_20_28_16024->SetDirectory(0);
   Graph_gr_ImiT11_20_28_16024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_16024->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_16024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
