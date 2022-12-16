{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:02:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.6055611,297.5,0.3348712);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.06369686);
   gre->SetPointError(0,0,0.06425676);
   gre->SetPoint(1,195,0.1245931);
   gre->SetPointError(1,0,0.05353934);
   gre->SetPoint(2,205,0.04149345);
   gre->SetPointError(2,0,0.04634291);
   gre->SetPoint(3,215,-0.03384034);
   gre->SetPointError(3,0,0.04233525);
   gre->SetPoint(4,225,-0.1268147);
   gre->SetPointError(4,0,0.03934226);
   gre->SetPoint(5,235,-0.1768346);
   gre->SetPointError(5,0,0.03880591);
   gre->SetPoint(6,245,-0.327821);
   gre->SetPointError(6,0,0.03670561);
   gre->SetPoint(7,255,-0.3605963);
   gre->SetPointError(7,0,0.03718078);
   gre->SetPoint(8,265,-0.4133813);
   gre->SetPointError(8,0,0.03544112);
   gre->SetPoint(9,275,-0.3776346);
   gre->SetPointError(9,0,0.03505128);
   
   TH1F *Graph_gr_T20_15_20_16091 = new TH1F("Graph_gr_T20_15_20_16091","",100,176,284);
   Graph_gr_T20_15_20_16091->SetMinimum(-0.5115179);
   Graph_gr_T20_15_20_16091->SetMaximum(0.2408279);
   Graph_gr_T20_15_20_16091->SetDirectory(0);
   Graph_gr_T20_15_20_16091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_16091->SetLineColor(ci);
   Graph_gr_T20_15_20_16091->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_16091->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_16091->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_16091->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_16091->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_16091->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_16091->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_16091->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_16091->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_16091->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_16091->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_16091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_16091);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
