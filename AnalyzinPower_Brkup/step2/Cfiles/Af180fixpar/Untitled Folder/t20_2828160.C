{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:09:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.1607,-0.6808695,247.0693,0.2033733);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,137.1455,-0.0339066);
   gre->SetPointError(0,0,0.08990608);
   gre->SetPoint(1,146.9165,-0.07193062);
   gre->SetPointError(1,0,0.08506846);
   gre->SetPoint(2,156.6875,-0.07500845);
   gre->SetPointError(2,0,0.08647488);
   gre->SetPoint(3,166.4585,-0.1606071);
   gre->SetPointError(3,0,0.08498809);
   gre->SetPoint(4,176.2295,-0.3237099);
   gre->SetPointError(4,0,0.07481396);
   gre->SetPoint(5,186.0005,-0.4223341);
   gre->SetPointError(5,0,0.06014058);
   gre->SetPoint(6,195.7715,-0.4148464);
   gre->SetPointError(6,0,0.0502951);
   gre->SetPoint(7,205.5425,-0.4138335);
   gre->SetPointError(7,0,0.04397382);
   gre->SetPoint(8,215.3135,-0.4870452);
   gre->SetPointError(8,0,0.04021057);
   gre->SetPoint(9,225.0845,-0.4912857);
   gre->SetPointError(9,0,0.04220996);
   
   TH1F *Graph_gr_T20_28_28_1605 = new TH1F("Graph_gr_T20_28_28_1605","",100,128.3516,233.8784);
   Graph_gr_T20_28_28_1605->SetMinimum(-0.5924452);
   Graph_gr_T20_28_28_1605->SetMaximum(0.114949);
   Graph_gr_T20_28_28_1605->SetDirectory(0);
   Graph_gr_T20_28_28_1605->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1605->SetLineColor(ci);
   Graph_gr_T20_28_28_1605->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1605->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1605->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1605->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1605->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1605->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1605->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1605->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1605->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1605->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1605->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1605->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1605);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
