{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:24:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1587427,257.5,0.2160337);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.047891);
   gre->SetPointError(0,0,0.048389);
   gre->SetPoint(1,155,0.1061283);
   gre->SetPointError(1,0,0.04744268);
   gre->SetPoint(2,165,0.07189188);
   gre->SetPointError(2,0,0.04518998);
   gre->SetPoint(3,175,0.009681693);
   gre->SetPointError(3,0,0.04118958);
   gre->SetPoint(4,185,0.04946458);
   gre->SetPointError(4,0,0.0403127);
   gre->SetPoint(5,195,0.003717025);
   gre->SetPointError(5,0,0.03304627);
   gre->SetPoint(6,205,0.03459151);
   gre->SetPointError(6,0,0.02585147);
   gre->SetPoint(7,215,0.03382422);
   gre->SetPointError(7,0,0.01797574);
   gre->SetPoint(8,225,-0.00114452);
   gre->SetPointError(8,0,0.0118664);
   gre->SetPoint(9,235,0.007572422);
   gre->SetPointError(9,0,0.008360425);
   
   TH1F *Graph_gr_ImiT11_28_20_18014 = new TH1F("Graph_gr_ImiT11_28_20_18014","",100,136,244);
   Graph_gr_ImiT11_28_20_18014->SetMinimum(-0.1212651);
   Graph_gr_ImiT11_28_20_18014->SetMaximum(0.178556);
   Graph_gr_ImiT11_28_20_18014->SetDirectory(0);
   Graph_gr_ImiT11_28_20_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_18014->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
