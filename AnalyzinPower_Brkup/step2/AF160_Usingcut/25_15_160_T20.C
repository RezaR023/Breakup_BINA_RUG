{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:20:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.2759372,267.5,0.6902239);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.0201935);
   gre->SetPointError(0,0,0.09471686);
   gre->SetPoint(1,165,0.2102748);
   gre->SetPointError(1,0,0.08667488);
   gre->SetPoint(2,175,0.4354252);
   gre->SetPointError(2,0,0.09377183);
   gre->SetPoint(3,185,0.3675586);
   gre->SetPointError(3,0,0.08316547);
   gre->SetPoint(4,195,0.3737925);
   gre->SetPointError(4,0,0.06956853);
   gre->SetPoint(5,205,0.2698077);
   gre->SetPointError(5,0,0.0557351);
   gre->SetPoint(6,215,0.3198672);
   gre->SetPointError(6,0,0.04692682);
   gre->SetPoint(7,225,0.3610181);
   gre->SetPointError(7,0,0.03861824);
   gre->SetPoint(8,235,0.4311272);
   gre->SetPointError(8,0,0.03083183);
   gre->SetPoint(9,245,0.4916276);
   gre->SetPointError(9,0,0.02183181);
   
   TH1F *Graph_gr_T20_25_15_160126 = new TH1F("Graph_gr_T20_25_15_160126","",100,146,254);
   Graph_gr_T20_25_15_160126->SetMinimum(-0.1793211);
   Graph_gr_T20_25_15_160126->SetMaximum(0.5936077);
   Graph_gr_T20_25_15_160126->SetDirectory(0);
   Graph_gr_T20_25_15_160126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_15_160126->SetLineColor(ci);
   Graph_gr_T20_25_15_160126->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_160126->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_160126->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_160126->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_160126->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_160126->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_160126->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_160126->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_160126->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_160126->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_160126->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_160126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_15_160126);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
