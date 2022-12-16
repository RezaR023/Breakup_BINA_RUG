{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:29:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.5412678,287.5,0.3580573);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.1565513);
   gre->SetPointError(0,0,0.04120665);
   gre->SetPoint(1,185,0.1751579);
   gre->SetPointError(1,0,0.0330119);
   gre->SetPoint(2,195,0.09443661);
   gre->SetPointError(2,0,0.02811982);
   gre->SetPoint(3,205,0.09960928);
   gre->SetPointError(3,0,0.02672021);
   gre->SetPoint(4,215,-0.002430585);
   gre->SetPointError(4,0,0.02578457);
   gre->SetPoint(5,225,-0.1125249);
   gre->SetPointError(5,0,0.02586733);
   gre->SetPoint(6,235,-0.1686118);
   gre->SetPointError(6,0,0.02866625);
   gre->SetPoint(7,245,-0.2102101);
   gre->SetPointError(7,0,0.03307629);
   gre->SetPoint(8,255,-0.3535924);
   gre->SetPointError(8,0,0.03778785);
   gre->SetPoint(9,265,-0.3399787);
   gre->SetPointError(9,0,0.04394981);
   
   TH1F *Graph_gr_T20_15_28_18021 = new TH1F("Graph_gr_T20_15_28_18021","",100,166,274);
   Graph_gr_T20_15_28_18021->SetMinimum(-0.4513353);
   Graph_gr_T20_15_28_18021->SetMaximum(0.2681248);
   Graph_gr_T20_15_28_18021->SetDirectory(0);
   Graph_gr_T20_15_28_18021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_18021->SetLineColor(ci);
   Graph_gr_T20_15_28_18021->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18021->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18021->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18021->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18021->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_18021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
