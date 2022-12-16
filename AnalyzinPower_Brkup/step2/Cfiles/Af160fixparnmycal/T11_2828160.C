{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:15:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.3791184,310,0.02316074);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1012022);
   gre->SetPointError(0,0,0.03686685);
   gre->SetPoint(1,145,-0.08915433);
   gre->SetPointError(1,0,0.0331265);
   gre->SetPoint(2,155,-0.07713429);
   gre->SetPointError(2,0,0.03324851);
   gre->SetPoint(3,165,-0.1386199);
   gre->SetPointError(3,0,0.03081172);
   gre->SetPoint(4,175,-0.2138387);
   gre->SetPointError(4,0,0.03050668);
   gre->SetPoint(5,185,-0.2453911);
   gre->SetPointError(5,0,0.02680141);
   gre->SetPoint(6,195,-0.2656255);
   gre->SetPointError(6,0,0.02308295);
   gre->SetPoint(7,205,-0.294434);
   gre->SetPointError(7,0,0.01763784);
   gre->SetPoint(8,215,-0.2714861);
   gre->SetPointError(8,0,0.01555876);
   gre->SetPoint(9,225,-0.2510077);
   gre->SetPointError(9,0,0.0136931);
   gre->SetPoint(10,235,-0.2446126);
   gre->SetPointError(10,0,0.03390458);
   gre->SetPoint(11,245,-0.1663894);
   gre->SetPointError(11,0,0.03390458);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.03390458);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.03390458);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.03390458);
   
   TH1F *Graph_gr_iT11_28_28_16026 = new TH1F("Graph_gr_iT11_28_28_16026","",100,121,289);
   Graph_gr_iT11_28_28_16026->SetMinimum(-0.3388905);
   Graph_gr_iT11_28_28_16026->SetMaximum(-0.01706718);
   Graph_gr_iT11_28_28_16026->SetDirectory(0);
   Graph_gr_iT11_28_28_16026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_16026->SetLineColor(ci);
   Graph_gr_iT11_28_28_16026->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16026->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_16026->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16026->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_16026->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_16026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
