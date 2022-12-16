{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:55:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-1.041442,287.5,0.4064041);
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
   gre->SetPoint(0,175,-0.06085439);
   gre->SetPointError(0,0,0.143379);
   gre->SetPoint(1,185,0.06055981);
   gre->SetPointError(1,0,0.1045366);
   gre->SetPoint(2,195,-0.02612791);
   gre->SetPointError(2,0,0.08789257);
   gre->SetPoint(3,205,0.03624234);
   gre->SetPointError(3,0,0.09035053);
   gre->SetPoint(4,215,-0.003035746);
   gre->SetPointError(4,0,0.08990938);
   gre->SetPoint(5,225,-0.2691122);
   gre->SetPointError(5,0,0.08449237);
   gre->SetPoint(6,235,-0.4006687);
   gre->SetPointError(6,0,0.09660549);
   gre->SetPoint(7,245,-0.4933726);
   gre->SetPointError(7,0,0.1130749);
   gre->SetPoint(8,255,-0.3844268);
   gre->SetPointError(8,0,0.1458445);
   gre->SetPoint(9,265,-0.6235204);
   gre->SetPointError(9,0,0.1766138);
   
   TH1F *Graph_gr_T20_15_28_18034 = new TH1F("Graph_gr_T20_15_28_18034","",100,166,274);
   Graph_gr_T20_15_28_18034->SetMinimum(-0.8966572);
   Graph_gr_T20_15_28_18034->SetMaximum(0.2616195);
   Graph_gr_T20_15_28_18034->SetDirectory(0);
   Graph_gr_T20_15_28_18034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_18034->SetLineColor(ci);
   Graph_gr_T20_15_28_18034->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18034->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18034->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18034->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18034->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18034->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18034->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18034->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18034->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18034->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18034->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_18034);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
