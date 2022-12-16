{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:18:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.6598851,297.5,0.2945981);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.06017629);
   gre->SetPointError(0,0,0.07534129);
   gre->SetPoint(1,195,0.01368906);
   gre->SetPointError(1,0,0.06088929);
   gre->SetPoint(2,205,0.0004503731);
   gre->SetPointError(2,0,0.05412374);
   gre->SetPoint(3,215,-0.04019528);
   gre->SetPointError(3,0,0.04880649);
   gre->SetPoint(4,225,-0.1293731);
   gre->SetPointError(4,0,0.04626378);
   gre->SetPoint(5,235,-0.2163434);
   gre->SetPointError(5,0,0.04402886);
   gre->SetPoint(6,245,-0.3893143);
   gre->SetPointError(6,0,0.04023387);
   gre->SetPoint(7,255,-0.4618492);
   gre->SetPointError(7,0,0.03895542);
   gre->SetPoint(8,265,-0.3588504);
   gre->SetPointError(8,0,0.03970497);
   gre->SetPoint(9,275,-0.3883036);
   gre->SetPointError(9,0,0.0370631);
   
   TH1F *Graph_gr_T20_15_20_18011 = new TH1F("Graph_gr_T20_15_20_18011","",100,176,284);
   Graph_gr_T20_15_20_18011->SetMinimum(-0.5644368);
   Graph_gr_T20_15_20_18011->SetMaximum(0.1991498);
   Graph_gr_T20_15_20_18011->SetDirectory(0);
   Graph_gr_T20_15_20_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_18011->SetLineColor(ci);
   Graph_gr_T20_15_20_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
