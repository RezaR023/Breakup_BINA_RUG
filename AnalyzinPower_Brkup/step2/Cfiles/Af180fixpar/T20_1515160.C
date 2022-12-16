{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:43:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.4295,-0.8646526,299.5305,0.5926301);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.113,-0.5248423);
   gre->SetPointError(0,0,0.09692981);
   gre->SetPoint(1,191.639,-0.4041866);
   gre->SetPointError(1,0,0.09610562);
   gre->SetPoint(2,202.165,-0.3503249);
   gre->SetPointError(2,0,0.0934431);
   gre->SetPoint(3,212.691,-0.04292231);
   gre->SetPointError(3,0,0.1037181);
   gre->SetPoint(4,223.217,-0.1284221);
   gre->SetPointError(4,0,0.09676201);
   gre->SetPoint(5,233.743,-0.06366649);
   gre->SetPointError(5,0,0.08847466);
   gre->SetPoint(6,244.269,0.1297429);
   gre->SetPointError(6,0,0.08785505);
   gre->SetPoint(7,254.795,0.2669981);
   gre->SetPointError(7,0,0.08275161);
   gre->SetPoint(8,265.321,0.2320735);
   gre->SetPointError(8,0,0.07479553);
   gre->SetPoint(9,275.847,0.1964166);
   gre->SetPointError(9,0,0.06648542);
   
   TH1F *Graph_gr_T20_15_15_16023 = new TH1F("Graph_gr_T20_15_15_16023","",100,171.6396,285.3204);
   Graph_gr_T20_15_15_16023->SetMinimum(-0.7189243);
   Graph_gr_T20_15_15_16023->SetMaximum(0.4469018);
   Graph_gr_T20_15_15_16023->SetDirectory(0);
   Graph_gr_T20_15_15_16023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_16023->SetLineColor(ci);
   Graph_gr_T20_15_15_16023->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16023->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16023->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16023->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16023->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_16023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
