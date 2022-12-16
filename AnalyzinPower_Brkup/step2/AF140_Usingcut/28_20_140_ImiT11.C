{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:22:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.192182,245,0.2084458);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.0103014);
   gre->SetPointError(0,0,0.06745294);
   gre->SetPoint(1,155,-0.03498576);
   gre->SetPointError(1,0,0.0526041);
   gre->SetPoint(2,165,0.01311213);
   gre->SetPointError(2,0,0.05015505);
   gre->SetPoint(3,175,0.09049014);
   gre->SetPointError(3,0,0.05118439);
   gre->SetPoint(4,185,-0.07708092);
   gre->SetPointError(4,0,0.0483298);
   gre->SetPoint(5,195,0.04582623);
   gre->SetPointError(5,0,0.0501717);
   gre->SetPoint(6,205,-0.02578265);
   gre->SetPointError(6,0,0.05043469);
   gre->SetPoint(7,215,0.05806777);
   gre->SetPointError(7,0,0.05014617);
   gre->SetPoint(8,225,0.01780964);
   gre->SetPointError(8,0,0.05254816);
   
   TH1F *Graph_gr_ImiT11_28_20_14047 = new TH1F("Graph_gr_ImiT11_28_20_14047","",100,137,233);
   Graph_gr_ImiT11_28_20_14047->SetMinimum(-0.1521192);
   Graph_gr_ImiT11_28_20_14047->SetMaximum(0.1683831);
   Graph_gr_ImiT11_28_20_14047->SetDirectory(0);
   Graph_gr_ImiT11_28_20_14047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_14047->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_14047->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14047->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_14047->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14047->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_14047->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14047->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_14047);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
