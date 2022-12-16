{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:44:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.3425801,287.5,-0.07159275);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1376179);
   gre->SetPointError(0,0,0.02086057);
   gre->SetPoint(1,185,-0.1643217);
   gre->SetPointError(1,0,0.01475152);
   gre->SetPoint(2,195,-0.1632724);
   gre->SetPointError(2,0,0.0133382);
   gre->SetPoint(3,205,-0.2008066);
   gre->SetPointError(3,0,0.01312592);
   gre->SetPoint(4,215,-0.1965532);
   gre->SetPointError(4,0,0.01300875);
   gre->SetPoint(5,225,-0.1973899);
   gre->SetPointError(5,0,0.01430308);
   gre->SetPoint(6,235,-0.2583941);
   gre->SetPointError(6,0,0.01615274);
   gre->SetPoint(7,245,-0.2455445);
   gre->SetPointError(7,0,0.01972838);
   gre->SetPoint(8,255,-0.2736009);
   gre->SetPointError(8,0,0.02381469);
   gre->SetPoint(9,265,-0.1934354);
   gre->SetPointError(9,0,0.03292987);
   
   TH1F *Graph_gr_iT11_15_28_18026 = new TH1F("Graph_gr_iT11_15_28_18026","",100,166,274);
   Graph_gr_iT11_15_28_18026->SetMinimum(-0.3154814);
   Graph_gr_iT11_15_28_18026->SetMaximum(-0.09869149);
   Graph_gr_iT11_15_28_18026->SetDirectory(0);
   Graph_gr_iT11_15_28_18026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_18026->SetLineColor(ci);
   Graph_gr_iT11_15_28_18026->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18026->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18026->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18026->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18026->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_18026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
