{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:49:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(145,-0.4117608,265,0.1433525);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.03763547);
   gre->SetPointError(0,0,0.05269648);
   gre->SetPoint(1,175,-0.07498181);
   gre->SetPointError(1,0,0.05501651);
   gre->SetPoint(2,185,-0.03359043);
   gre->SetPointError(2,0,0.05640126);
   gre->SetPoint(3,195,-0.003450214);
   gre->SetPointError(3,0,0.05428383);
   gre->SetPoint(4,205,-0.1578012);
   gre->SetPointError(4,0,0.04927254);
   gre->SetPoint(5,215,-0.116073);
   gre->SetPointError(5,0,0.05005898);
   gre->SetPoint(6,225,-0.2164646);
   gre->SetPointError(6,0,0.04866601);
   gre->SetPoint(7,235,-0.2717585);
   gre->SetPointError(7,0,0.04748346);
   gre->SetPoint(8,245,-0.1617701);
   gre->SetPointError(8,0,0.04469239);
   
   TH1F *Graph_gr_T20_20_28_14018 = new TH1F("Graph_gr_T20_20_28_14018","",100,157,253);
   Graph_gr_T20_20_28_14018->SetMinimum(-0.3562495);
   Graph_gr_T20_20_28_14018->SetMaximum(0.08784117);
   Graph_gr_T20_20_28_14018->SetDirectory(0);
   Graph_gr_T20_20_28_14018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_14018->SetLineColor(ci);
   Graph_gr_T20_20_28_14018->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14018->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_14018->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14018->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_14018->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_14018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
