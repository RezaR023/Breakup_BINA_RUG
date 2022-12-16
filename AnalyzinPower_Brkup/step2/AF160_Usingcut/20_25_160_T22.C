{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:16:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.2631554,277.5,0.05897079);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.05200881);
   gre->SetPointError(0,0,0.0340378);
   gre->SetPoint(1,175,-0.1577045);
   gre->SetPointError(1,0,0.0322851);
   gre->SetPoint(2,185,-0.1822482);
   gre->SetPointError(2,0,0.02721951);
   gre->SetPoint(3,195,-0.07974366);
   gre->SetPointError(3,0,0.0223156);
   gre->SetPoint(4,205,-0.1358726);
   gre->SetPointError(4,0,0.01897298);
   gre->SetPoint(5,215,-0.05338721);
   gre->SetPointError(5,0,0.01712057);
   gre->SetPoint(6,225,-0.04564379);
   gre->SetPointError(6,0,0.01533957);
   gre->SetPoint(7,235,-0.01840949);
   gre->SetPointError(7,0,0.01430495);
   gre->SetPoint(8,245,-0.008397818);
   gre->SetPointError(8,0,0.01363979);
   gre->SetPoint(9,255,-0.009081109);
   gre->SetPointError(9,0,0.0143642);
   
   TH1F *Graph_gr_T22_20_25_160117 = new TH1F("Graph_gr_T22_20_25_160117","",100,156,264);
   Graph_gr_T22_20_25_160117->SetMinimum(-0.2309428);
   Graph_gr_T22_20_25_160117->SetMaximum(0.02675817);
   Graph_gr_T22_20_25_160117->SetDirectory(0);
   Graph_gr_T22_20_25_160117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_25_160117->SetLineColor(ci);
   Graph_gr_T22_20_25_160117->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_160117->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_160117->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_160117->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_160117->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_160117->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_160117->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_160117->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_160117->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_160117->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_160117->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_160117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_25_160117);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
