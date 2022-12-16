{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:36:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.1198368,287.5,0.04538943);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.001460595);
   gre->SetPointError(0,0,0.01931233);
   gre->SetPoint(1,185,-0.00777088);
   gre->SetPointError(1,0,0.01541739);
   gre->SetPoint(2,195,-0.00558086);
   gre->SetPointError(2,0,0.01423683);
   gre->SetPoint(3,205,-0.03442213);
   gre->SetPointError(3,0,0.01358151);
   gre->SetPoint(4,215,-0.05015223);
   gre->SetPointError(4,0,0.01464683);
   gre->SetPoint(5,225,-0.05115973);
   gre->SetPointError(5,0,0.0168375);
   gre->SetPoint(6,235,-0.07206287);
   gre->SetPointError(6,0,0.02023619);
   gre->SetPoint(7,245,-0.03927671);
   gre->SetPointError(7,0,0.02485961);
   gre->SetPoint(8,255,-0.06306313);
   gre->SetPointError(8,0,0.02717575);
   gre->SetPoint(9,265,-0.04108746);
   gre->SetPointError(9,0,0.0302458);
   
   TH1F *Graph_gr_ImiT11_15_28_16020 = new TH1F("Graph_gr_ImiT11_15_28_16020","",100,166,274);
   Graph_gr_ImiT11_15_28_16020->SetMinimum(-0.1033141);
   Graph_gr_ImiT11_15_28_16020->SetMaximum(0.02886681);
   Graph_gr_ImiT11_15_28_16020->SetDirectory(0);
   Graph_gr_ImiT11_15_28_16020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_16020->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_16020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
