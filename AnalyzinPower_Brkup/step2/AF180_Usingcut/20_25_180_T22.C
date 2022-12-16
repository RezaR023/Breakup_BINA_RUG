{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:53:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.2027419,277.5,0.02527083);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1111036);
   gre->SetPointError(0,0,0.03969066);
   gre->SetPoint(1,175,-0.09089967);
   gre->SetPointError(1,0,0.03791902);
   gre->SetPoint(2,185,-0.1347929);
   gre->SetPointError(2,0,0.02994685);
   gre->SetPoint(3,195,-0.08120361);
   gre->SetPointError(3,0,0.02318806);
   gre->SetPoint(4,205,-0.0724526);
   gre->SetPointError(4,0,0.01952229);
   gre->SetPoint(5,215,-0.05317699);
   gre->SetPointError(5,0,0.01595382);
   gre->SetPoint(6,225,-0.04086764);
   gre->SetPointError(6,0,0.0133984);
   gre->SetPoint(7,235,-0.02425392);
   gre->SetPointError(7,0,0.01152263);
   gre->SetPoint(8,245,-0.04287266);
   gre->SetPointError(8,0,0.01113121);
   gre->SetPoint(9,255,-0.05732791);
   gre->SetPointError(9,0,0.01224462);
   
   TH1F *Graph_gr_T22_20_25_18036 = new TH1F("Graph_gr_T22_20_25_18036","",100,156,264);
   Graph_gr_T22_20_25_18036->SetMinimum(-0.1799406);
   Graph_gr_T22_20_25_18036->SetMaximum(0.002469552);
   Graph_gr_T22_20_25_18036->SetDirectory(0);
   Graph_gr_T22_20_25_18036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_25_18036->SetLineColor(ci);
   Graph_gr_T22_20_25_18036->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_18036->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_18036->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_18036->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_18036->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_18036->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_18036->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_18036->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_18036->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_18036->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_18036->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_18036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_25_18036);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
