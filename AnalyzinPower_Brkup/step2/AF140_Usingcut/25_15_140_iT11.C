{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:02:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.2512764,267.5,0.1890668);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.07532748);
   gre->SetPointError(0,0,0.06739689);
   gre->SetPoint(1,165,-0.1005205);
   gre->SetPointError(1,0,0.05410869);
   gre->SetPoint(2,175,0.01590088);
   gre->SetPointError(2,0,0.05129018);
   gre->SetPoint(3,185,-0.1207769);
   gre->SetPointError(3,0,0.05710894);
   gre->SetPoint(4,195,-0.01708679);
   gre->SetPointError(4,0,0.04947334);
   gre->SetPoint(5,205,-0.08076944);
   gre->SetPointError(5,0,0.04738613);
   gre->SetPoint(6,215,0.07529482);
   gre->SetPointError(6,0,0.04038142);
   gre->SetPoint(7,225,0.051835);
   gre->SetPointError(7,0,0.03996224);
   gre->SetPoint(8,235,0.02086327);
   gre->SetPointError(8,0,0.03502437);
   gre->SetPoint(9,245,0.05561321);
   gre->SetPointError(9,0,0.03452232);
   
   TH1F *Graph_gr_iT11_25_15_14021 = new TH1F("Graph_gr_iT11_25_15_14021","",100,146,254);
   Graph_gr_iT11_25_15_14021->SetMinimum(-0.2072421);
   Graph_gr_iT11_25_15_14021->SetMaximum(0.1450324);
   Graph_gr_iT11_25_15_14021->SetDirectory(0);
   Graph_gr_iT11_25_15_14021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_15_14021->SetLineColor(ci);
   Graph_gr_iT11_25_15_14021->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_14021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_14021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_14021->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_14021->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_14021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_14021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_14021->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_14021->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_14021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_14021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_14021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_15_14021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
