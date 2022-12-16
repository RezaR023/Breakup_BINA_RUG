{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:34:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2385407,310,0.1084959);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1613026);
   gre->SetPointError(0,0,0.01939869);
   gre->SetPoint(1,145,-0.1613026);
   gre->SetPointError(1,0,0.01939869);
   gre->SetPoint(2,155,-0.05680072);
   gre->SetPointError(2,0,0.06258133);
   gre->SetPoint(3,165,-0.05680072);
   gre->SetPointError(3,0,0.06258133);
   gre->SetPoint(4,175,-0.06391957);
   gre->SetPointError(4,0,0.06481092);
   gre->SetPoint(5,185,-0.04906894);
   gre->SetPointError(5,0,0.03126435);
   gre->SetPoint(6,195,-0.02091861);
   gre->SetPointError(6,0,0.02741767);
   gre->SetPoint(7,205,0.003821914);
   gre->SetPointError(7,0,0.02338656);
   gre->SetPoint(8,215,0.007291383);
   gre->SetPointError(8,0,0.02109504);
   gre->SetPoint(9,225,0.03018158);
   gre->SetPointError(9,0,0.02047492);
   gre->SetPoint(10,235,0.0218753);
   gre->SetPointError(10,0,0.02014322);
   gre->SetPoint(11,245,-0.007891867);
   gre->SetPointError(11,0,0.01993386);
   gre->SetPoint(12,255,-0.03292387);
   gre->SetPointError(12,0,0.02033376);
   gre->SetPoint(13,265,-0.02672664);
   gre->SetPointError(13,0,0.01945858);
   gre->SetPoint(14,275,-0.0968341);
   gre->SetPointError(14,0,0.01797284);
   
   TH1F *Graph_gr_ImT22_15_20_16012 = new TH1F("Graph_gr_ImT22_15_20_16012","",100,121,289);
   Graph_gr_ImT22_15_20_16012->SetMinimum(-0.203837);
   Graph_gr_ImT22_15_20_16012->SetMaximum(0.07379228);
   Graph_gr_ImT22_15_20_16012->SetDirectory(0);
   Graph_gr_ImT22_15_20_16012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_16012->SetLineColor(ci);
   Graph_gr_ImT22_15_20_16012->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16012->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16012->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_16012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
