{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:40:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.550257,297.5,0.4495503);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.1754859);
   gre->SetPointError(0,0,0.08664837);
   gre->SetPoint(1,195,-0.05956951);
   gre->SetPointError(1,0,0.08547107);
   gre->SetPoint(2,205,-0.1438617);
   gre->SetPointError(2,0,0.07732941);
   gre->SetPoint(3,215,-0.3170088);
   gre->SetPointError(3,0,0.06661367);
   gre->SetPoint(4,225,-0.1174123);
   gre->SetPointError(4,0,0.06841416);
   gre->SetPoint(5,235,0.1148782);
   gre->SetPointError(5,0,0.07040006);
   gre->SetPoint(6,245,0.151121);
   gre->SetPointError(6,0,0.06749345);
   gre->SetPoint(7,255,0.1089397);
   gre->SetPointError(7,0,0.0609681);
   gre->SetPoint(8,265,0.1922078);
   gre->SetPointError(8,0,0.05807946);
   gre->SetPoint(9,275,0.2301454);
   gre->SetPointError(9,0,0.05277034);
   
   TH1F *Graph_gr_T20_15_15_140168 = new TH1F("Graph_gr_T20_15_15_140168","",100,176,284);
   Graph_gr_T20_15_15_140168->SetMinimum(-0.4502763);
   Graph_gr_T20_15_15_140168->SetMaximum(0.3495695);
   Graph_gr_T20_15_15_140168->SetDirectory(0);
   Graph_gr_T20_15_15_140168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_140168->SetLineColor(ci);
   Graph_gr_T20_15_15_140168->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_140168->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_140168->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_140168->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_140168->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_140168->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_140168->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_140168->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_140168->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_140168->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_140168->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_140168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_140168);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
