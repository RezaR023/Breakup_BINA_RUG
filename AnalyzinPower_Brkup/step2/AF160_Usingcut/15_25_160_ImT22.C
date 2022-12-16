{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:06:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1392604,287.5,0.09320317);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.06894798);
   gre->SetPointError(0,0,0.03156852);
   gre->SetPoint(1,185,-0.03128191);
   gre->SetPointError(1,0,0.02306222);
   gre->SetPoint(2,195,-0.03059773);
   gre->SetPointError(2,0,0.0195059);
   gre->SetPoint(3,205,0.02055394);
   gre->SetPointError(3,0,0.0169387);
   gre->SetPoint(4,215,-0.02057779);
   gre->SetPointError(4,0,0.01583205);
   gre->SetPoint(5,225,0.01604734);
   gre->SetPointError(5,0,0.01643076);
   gre->SetPoint(6,235,-0.004478537);
   gre->SetPointError(6,0,0.01683228);
   gre->SetPoint(7,245,0.01060523);
   gre->SetPointError(7,0,0.01823808);
   gre->SetPoint(8,255,0.01503032);
   gre->SetPointError(8,0,0.01982637);
   gre->SetPoint(9,265,0.03224798);
   gre->SetPointError(9,0,0.02221125);
   
   TH1F *Graph_gr_ImT22_15_25_16098 = new TH1F("Graph_gr_ImT22_15_25_16098","",100,166,274);
   Graph_gr_ImT22_15_25_16098->SetMinimum(-0.1160141);
   Graph_gr_ImT22_15_25_16098->SetMaximum(0.06995681);
   Graph_gr_ImT22_15_25_16098->SetDirectory(0);
   Graph_gr_ImT22_15_25_16098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_16098->SetLineColor(ci);
   Graph_gr_ImT22_15_25_16098->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16098->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16098->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16098->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16098->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16098->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_16098);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
