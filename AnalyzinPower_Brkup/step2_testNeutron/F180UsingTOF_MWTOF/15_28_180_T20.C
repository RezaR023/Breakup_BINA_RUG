{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:44:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.4569926,287.5,0.3708429);
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
   gre->SetPoint(0,175,0.1898369);
   gre->SetPointError(0,0,0.03291126);
   gre->SetPoint(1,185,0.2091938);
   gre->SetPointError(1,0,0.02367655);
   gre->SetPoint(2,195,0.141509);
   gre->SetPointError(2,0,0.02052963);
   gre->SetPoint(3,205,0.09872479);
   gre->SetPointError(3,0,0.01991057);
   gre->SetPoint(4,215,-0.02085126);
   gre->SetPointError(4,0,0.0189308);
   gre->SetPoint(5,225,-0.1328338);
   gre->SetPointError(5,0,0.01962335);
   gre->SetPoint(6,235,-0.1525219);
   gre->SetPointError(6,0,0.02214395);
   gre->SetPoint(7,245,-0.2017671);
   gre->SetPointError(7,0,0.02595132);
   gre->SetPoint(8,255,-0.2873595);
   gre->SetPointError(8,0,0.03166043);
   gre->SetPoint(9,265,-0.2511244);
   gre->SetPointError(9,0,0.04400667);
   
   TH1F *Graph_gr_T20_15_28_18027 = new TH1F("Graph_gr_T20_15_28_18027","",100,166,274);
   Graph_gr_T20_15_28_18027->SetMinimum(-0.374209);
   Graph_gr_T20_15_28_18027->SetMaximum(0.2880594);
   Graph_gr_T20_15_28_18027->SetDirectory(0);
   Graph_gr_T20_15_28_18027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_18027->SetLineColor(ci);
   Graph_gr_T20_15_28_18027->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18027->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18027->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18027->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18027->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_18027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
