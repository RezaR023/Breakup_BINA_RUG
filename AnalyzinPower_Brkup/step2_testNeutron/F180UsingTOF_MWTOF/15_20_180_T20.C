{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:43:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.4713453,297.5,0.25567);
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
   gre->SetPoint(0,185,0.08237561);
   gre->SetPointError(0,0,0.05212519);
   gre->SetPoint(1,195,0.06661544);
   gre->SetPointError(1,0,0.03818739);
   gre->SetPoint(2,205,0.03443575);
   gre->SetPointError(2,0,0.03695452);
   gre->SetPoint(3,215,-0.002384107);
   gre->SetPointError(3,0,0.03479063);
   gre->SetPoint(4,225,-0.1630651);
   gre->SetPointError(4,0,0.03287823);
   gre->SetPoint(5,235,-0.2229957);
   gre->SetPointError(5,0,0.03265578);
   gre->SetPoint(6,245,-0.3188292);
   gre->SetPointError(6,0,0.0313469);
   gre->SetPoint(7,255,-0.2828164);
   gre->SetPointError(7,0,0.03084721);
   gre->SetPoint(8,265,-0.2812844);
   gre->SetPointError(8,0,0.02995531);
   gre->SetPoint(9,275,-0.2197559);
   gre->SetPointError(9,0,0.03212217);
   
   TH1F *Graph_gr_T20_15_20_1805 = new TH1F("Graph_gr_T20_15_20_1805","",100,176,284);
   Graph_gr_T20_15_20_1805->SetMinimum(-0.3986438);
   Graph_gr_T20_15_20_1805->SetMaximum(0.1829685);
   Graph_gr_T20_15_20_1805->SetDirectory(0);
   Graph_gr_T20_15_20_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_1805->SetLineColor(ci);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
