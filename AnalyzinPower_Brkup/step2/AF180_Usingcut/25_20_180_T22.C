{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:08:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.3384752,267.5,0.08984497);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.02515983);
   gre->SetPointError(0,0,0.0436181);
   gre->SetPoint(1,165,-0.1335781);
   gre->SetPointError(1,0,0.04877051);
   gre->SetPoint(2,175,-0.1195022);
   gre->SetPointError(2,0,0.04801326);
   gre->SetPoint(3,185,-0.1288009);
   gre->SetPointError(3,0,0.04492367);
   gre->SetPoint(4,195,-0.09516747);
   gre->SetPointError(4,0,0.03873373);
   gre->SetPoint(5,205,-0.1554733);
   gre->SetPointError(5,0,0.03537938);
   gre->SetPoint(6,215,-0.1921188);
   gre->SetPointError(6,0,0.02745942);
   gre->SetPoint(7,225,-0.1788294);
   gre->SetPointError(7,0,0.01867571);
   gre->SetPoint(8,235,-0.2371351);
   gre->SetPointError(8,0,0.01177978);
   gre->SetPoint(9,245,-0.2591279);
   gre->SetPointError(9,0,0.007960591);
   
   TH1F *Graph_gr_T22_25_20_18051 = new TH1F("Graph_gr_T22_25_20_18051","",100,146,254);
   Graph_gr_T22_25_20_18051->SetMinimum(-0.2956432);
   Graph_gr_T22_25_20_18051->SetMaximum(0.04701295);
   Graph_gr_T22_25_20_18051->SetDirectory(0);
   Graph_gr_T22_25_20_18051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_20_18051->SetLineColor(ci);
   Graph_gr_T22_25_20_18051->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_18051->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_18051->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_18051->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_18051->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_18051->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_18051->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_18051->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_18051->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_18051->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_18051->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_18051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_20_18051);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
