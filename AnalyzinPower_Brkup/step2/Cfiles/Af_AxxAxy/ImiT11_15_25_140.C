{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:40:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.1560599,310,0.2084423);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.001644538);
   gre->SetPointError(0,0,0.03959495);
   gre->SetPoint(1,145,0.001644538);
   gre->SetPointError(1,0,0.03959495);
   gre->SetPoint(2,155,0.001644538);
   gre->SetPointError(2,0,0.03959495);
   gre->SetPoint(3,165,0.0261912);
   gre->SetPointError(3,0,0.1215007);
   gre->SetPoint(4,175,0.01421241);
   gre->SetPointError(4,0,0.04452474);
   gre->SetPoint(5,185,0.0291071);
   gre->SetPointError(5,0,0.03300315);
   gre->SetPoint(6,195,0.02697099);
   gre->SetPointError(6,0,0.02915307);
   gre->SetPoint(7,205,0.01624094);
   gre->SetPointError(7,0,0.02648672);
   gre->SetPoint(8,215,0.02187893);
   gre->SetPointError(8,0,0.02618479);
   gre->SetPoint(9,225,0.007784417);
   gre->SetPointError(9,0,0.02659928);
   gre->SetPoint(10,235,0.0365197);
   gre->SetPointError(10,0,0.02733312);
   gre->SetPoint(11,245,0.004361696);
   gre->SetPointError(11,0,0.03219689);
   gre->SetPoint(12,255,0.01906672);
   gre->SetPointError(12,0,0.03292273);
   gre->SetPoint(13,265,0.009280321);
   gre->SetPointError(13,0,0.03153516);
   gre->SetPoint(14,275,-0.04806323);
   gre->SetPointError(14,0,0.04014337);
   
   TH1F *Graph_gr_ImiT11_15_25_14021 = new TH1F("Graph_gr_ImiT11_15_25_14021","",100,121,289);
   Graph_gr_ImiT11_15_25_14021->SetMinimum(-0.1196097);
   Graph_gr_ImiT11_15_25_14021->SetMaximum(0.171992);
   Graph_gr_ImiT11_15_25_14021->SetDirectory(0);
   Graph_gr_ImiT11_15_25_14021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_14021->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_14021->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14021->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14021->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_14021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
