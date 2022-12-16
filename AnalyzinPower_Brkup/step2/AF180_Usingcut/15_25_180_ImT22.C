{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:27:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1192339,287.5,0.09403568);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.04870406);
   gre->SetPointError(0,0,0.03498488);
   gre->SetPoint(1,185,-0.01864154);
   gre->SetPointError(1,0,0.02529463);
   gre->SetPoint(2,195,0.006413139);
   gre->SetPointError(2,0,0.02129088);
   gre->SetPoint(3,205,-0.006666682);
   gre->SetPointError(3,0,0.01884098);
   gre->SetPoint(4,215,0.001595226);
   gre->SetPointError(4,0,0.01731535);
   gre->SetPoint(5,225,-0.01205695);
   gre->SetPointError(5,0,0.01725538);
   gre->SetPoint(6,235,0.03009844);
   gre->SetPointError(6,0,0.01789558);
   gre->SetPoint(7,245,0.006941213);
   gre->SetPointError(7,0,0.01866442);
   gre->SetPoint(8,255,0.01775495);
   gre->SetPointError(8,0,0.01944183);
   gre->SetPoint(9,265,0.03504144);
   gre->SetPointError(9,0,0.02344932);
   
   TH1F *Graph_gr_ImT22_15_25_18018 = new TH1F("Graph_gr_ImT22_15_25_18018","",100,166,274);
   Graph_gr_ImT22_15_25_18018->SetMinimum(-0.09790691);
   Graph_gr_ImT22_15_25_18018->SetMaximum(0.07270873);
   Graph_gr_ImT22_15_25_18018->SetDirectory(0);
   Graph_gr_ImT22_15_25_18018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_18018->SetLineColor(ci);
   Graph_gr_ImT22_15_25_18018->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_18018->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_18018->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_18018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
