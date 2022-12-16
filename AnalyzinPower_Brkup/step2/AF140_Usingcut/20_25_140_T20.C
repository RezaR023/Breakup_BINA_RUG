{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:48:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.5097972,267.5,0.1816985);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.272725);
   gre->SetPointError(0,0,0.09597448);
   gre->SetPoint(1,165,0.00725129);
   gre->SetPointError(1,0,0.05919794);
   gre->SetPoint(2,175,-0.01277019);
   gre->SetPointError(2,0,0.06352036);
   gre->SetPoint(3,185,-0.08201029);
   gre->SetPointError(3,0,0.06341148);
   gre->SetPoint(4,195,-0.05887051);
   gre->SetPointError(4,0,0.05946989);
   gre->SetPoint(5,205,-0.09878661);
   gre->SetPointError(5,0,0.05852576);
   gre->SetPoint(6,215,-0.1960114);
   gre->SetPointError(6,0,0.05427018);
   gre->SetPoint(7,225,-0.1833948);
   gre->SetPointError(7,0,0.05475819);
   gre->SetPoint(8,235,-0.2513573);
   gre->SetPointError(8,0,0.05225608);
   gre->SetPoint(9,245,-0.3489462);
   gre->SetPointError(9,0,0.04560174);
   
   TH1F *Graph_gr_T20_20_25_14013 = new TH1F("Graph_gr_T20_20_25_14013","",100,146,254);
   Graph_gr_T20_20_25_14013->SetMinimum(-0.4406477);
   Graph_gr_T20_20_25_14013->SetMaximum(0.1125489);
   Graph_gr_T20_20_25_14013->SetDirectory(0);
   Graph_gr_T20_20_25_14013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_25_14013->SetLineColor(ci);
   Graph_gr_T20_20_25_14013->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_14013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_14013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_14013->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_14013->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_14013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_14013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_14013->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_14013->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_14013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_14013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_14013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_25_14013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
