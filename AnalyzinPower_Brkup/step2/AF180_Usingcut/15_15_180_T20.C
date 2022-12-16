{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:47:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.6245842,297.5,0.654957);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.3207344);
   gre->SetPointError(0,0,0.09059293);
   gre->SetPoint(1,195,-0.2050406);
   gre->SetPointError(1,0,0.08600635);
   gre->SetPoint(2,205,-0.1419262);
   gre->SetPointError(2,0,0.07933008);
   gre->SetPoint(3,215,-0.07447472);
   gre->SetPointError(3,0,0.077306);
   gre->SetPoint(4,225,-0.09546906);
   gre->SetPointError(4,0,0.06720198);
   gre->SetPoint(5,235,-0.02830321);
   gre->SetPointError(5,0,0.06044243);
   gre->SetPoint(6,245,0.1365746);
   gre->SetPointError(6,0,0.05533479);
   gre->SetPoint(7,255,0.3882524);
   gre->SetPointError(7,0,0.05344768);
   gre->SetPoint(8,265,0.3723505);
   gre->SetPointError(8,0,0.04360045);
   gre->SetPoint(9,275,0.4014078);
   gre->SetPointError(9,0,0.03407612);
   
   TH1F *Graph_gr_T20_15_15_1806 = new TH1F("Graph_gr_T20_15_15_1806","",100,176,284);
   Graph_gr_T20_15_15_1806->SetMinimum(-0.4966301);
   Graph_gr_T20_15_15_1806->SetMaximum(0.5270028);
   Graph_gr_T20_15_15_1806->SetDirectory(0);
   Graph_gr_T20_15_15_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_1806->SetLineColor(ci);
   Graph_gr_T20_15_15_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
