{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:45:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(158.3202,-0.7897868,297.8698,0.5731271);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.5785,-0.35463);
   gre->SetPointError(0,0,0.1203607);
   gre->SetPoint(1,191.9155,-0.2211853);
   gre->SetPointError(1,0,0.119226);
   gre->SetPoint(2,202.2525,-0.4569034);
   gre->SetPointError(2,0,0.1057311);
   gre->SetPoint(3,212.5895,-0.3573692);
   gre->SetPointError(3,0,0.1043443);
   gre->SetPoint(4,222.9265,-0.3697276);
   gre->SetPointError(4,0,0.1036006);
   gre->SetPoint(5,233.2635,-0.1750163);
   gre->SetPointError(5,0,0.1126233);
   gre->SetPoint(6,243.6005,-0.2522952);
   gre->SetPointError(6,0,0.1035756);
   gre->SetPoint(7,253.9375,0.05217066);
   gre->SetPointError(7,0,0.1252086);
   gre->SetPoint(8,264.2745,-0.008628437);
   gre->SetPointError(8,0,0.1154223);
   gre->SetPoint(9,274.6115,0.2367226);
   gre->SetPointError(9,0,0.1092521);
   
   TH1F *Graph_gr_T20_15_15_14026 = new TH1F("Graph_gr_T20_15_15_14026","",100,172.2752,283.9148);
   Graph_gr_T20_15_15_14026->SetMinimum(-0.6534954);
   Graph_gr_T20_15_15_14026->SetMaximum(0.4368357);
   Graph_gr_T20_15_15_14026->SetDirectory(0);
   Graph_gr_T20_15_15_14026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_14026->SetLineColor(ci);
   Graph_gr_T20_15_15_14026->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_14026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_14026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_14026->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_14026->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_14026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_14026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_14026->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_14026->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_14026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_14026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_14026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_14026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
