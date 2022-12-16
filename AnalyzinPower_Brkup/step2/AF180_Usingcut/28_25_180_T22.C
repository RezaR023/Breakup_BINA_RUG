{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:37:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2700977,257.5,-0.02342048);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1641572);
   gre->SetPointError(0,0,0.04830772);
   gre->SetPoint(1,155,-0.1659743);
   gre->SetPointError(1,0,0.04377008);
   gre->SetPoint(2,165,-0.1074054);
   gre->SetPointError(2,0,0.04287209);
   gre->SetPoint(3,175,-0.1929442);
   gre->SetPointError(3,0,0.03604067);
   gre->SetPoint(4,185,-0.1436262);
   gre->SetPointError(4,0,0.03121296);
   gre->SetPoint(5,195,-0.1271747);
   gre->SetPointError(5,0,0.02170613);
   gre->SetPoint(6,205,-0.09907618);
   gre->SetPointError(6,0,0.01406508);
   gre->SetPoint(7,215,-0.1310658);
   gre->SetPointError(7,0,0.008811187);
   gre->SetPoint(8,225,-0.1461696);
   gre->SetPointError(8,0,0.005505866);
   gre->SetPoint(9,235,-0.161332);
   gre->SetPointError(9,0,0.006293835);
   
   TH1F *Graph_gr_T22_28_25_18076 = new TH1F("Graph_gr_T22_28_25_18076","",100,136,244);
   Graph_gr_T22_28_25_18076->SetMinimum(-0.24543);
   Graph_gr_T22_28_25_18076->SetMaximum(-0.0480882);
   Graph_gr_T22_28_25_18076->SetDirectory(0);
   Graph_gr_T22_28_25_18076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_18076->SetLineColor(ci);
   Graph_gr_T22_28_25_18076->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18076->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18076->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18076->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18076->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18076->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18076->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18076->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18076->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18076->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18076->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_18076);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
