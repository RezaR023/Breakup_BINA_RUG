{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:20:47 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-1.378929,297.5,0.1519467);
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
   gre->SetPoint(0,185,-0.9578568);
   gre->SetPointError(0,0,0.1659262);
   gre->SetPoint(1,195,-0.289377);
   gre->SetPointError(1,0,0.1861777);
   gre->SetPoint(2,205,-0.4280564);
   gre->SetPointError(2,0,0.1541338);
   gre->SetPoint(3,215,-0.5977879);
   gre->SetPointError(3,0,0.1435149);
   gre->SetPoint(4,225,-0.6927504);
   gre->SetPointError(4,0,0.1343142);
   gre->SetPoint(5,235,-0.3602214);
   gre->SetPointError(5,0,0.1605474);
   gre->SetPoint(6,245,-0.662208);
   gre->SetPointError(6,0,0.1253526);
   gre->SetPoint(7,255,-0.43737);
   gre->SetPointError(7,0,0.1338897);
   gre->SetPoint(8,265,-0.3966715);
   gre->SetPointError(8,0,0.1380916);
   gre->SetPoint(9,275,-0.4151576);
   gre->SetPointError(9,0,0.1423212);
   
   TH1F *Graph_gr_T20_15_20_18021 = new TH1F("Graph_gr_T20_15_20_18021","",100,176,284);
   Graph_gr_T20_15_20_18021->SetMinimum(-1.225841);
   Graph_gr_T20_15_20_18021->SetMaximum(-0.001140842);
   Graph_gr_T20_15_20_18021->SetDirectory(0);
   Graph_gr_T20_15_20_18021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_18021->SetLineColor(ci);
   Graph_gr_T20_15_20_18021->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18021->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_18021->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18021->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_18021->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_18021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_18021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_18021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_18021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
