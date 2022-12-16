{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:55:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,1.898941,310,11.98952);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,5.528046);
   gre->SetPointError(0,0,1.947341);
   gre->SetPoint(1,145,8.841825);
   gre->SetPointError(1,0,0.7718363);
   gre->SetPoint(2,155,8.86723);
   gre->SetPointError(2,0,0.4511637);
   gre->SetPoint(3,165,9.578127);
   gre->SetPointError(3,0,0.4655118);
   gre->SetPoint(4,175,9.247547);
   gre->SetPointError(4,0,0.4461589);
   gre->SetPoint(5,185,9.190603);
   gre->SetPointError(5,0,0.4401569);
   gre->SetPoint(6,195,9.435841);
   gre->SetPointError(6,0,0.3964094);
   gre->SetPoint(7,205,9.962374);
   gre->SetPointError(7,0,0.3453849);
   gre->SetPoint(8,215,9.891497);
   gre->SetPointError(8,0,0.26618);
   gre->SetPoint(9,225,9.802257);
   gre->SetPointError(9,0,0.1889575);
   gre->SetPoint(10,235,9.835229);
   gre->SetPointError(10,0,0.1157007);
   gre->SetPoint(11,245,9.782619);
   gre->SetPointError(11,0,0.07308579);
   gre->SetPoint(12,255,8.466699);
   gre->SetPointError(12,0,0.4030656);
   gre->SetPoint(13,265,8.466699);
   gre->SetPointError(13,0,0.4030656);
   gre->SetPoint(14,275,8.466699);
   gre->SetPointError(14,0,0.4030656);
   
   TH1F *Graph_gr_T20_25_20_1805 = new TH1F("Graph_gr_T20_25_20_1805","",100,121,289);
   Graph_gr_T20_25_20_1805->SetMinimum(2.907999);
   Graph_gr_T20_25_20_1805->SetMaximum(10.98046);
   Graph_gr_T20_25_20_1805->SetDirectory(0);
   Graph_gr_T20_25_20_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_20_1805->SetLineColor(ci);
   Graph_gr_T20_25_20_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_20_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
