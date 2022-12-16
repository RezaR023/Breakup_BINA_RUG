{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:08:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1310698,267.5,0.2246827);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.01496961);
   gre->SetPointError(0,0,0.04765416);
   gre->SetPoint(1,165,0.1073152);
   gre->SetPointError(1,0,0.05807543);
   gre->SetPoint(2,175,0.04979638);
   gre->SetPointError(2,0,0.05237282);
   gre->SetPoint(3,185,-0.02298238);
   gre->SetPointError(3,0,0.04879529);
   gre->SetPoint(4,195,-0.004603325);
   gre->SetPointError(4,0,0.04235816);
   gre->SetPoint(5,205,-0.02551725);
   gre->SetPointError(5,0,0.03611726);
   gre->SetPoint(6,215,-0.0227621);
   gre->SetPointError(6,0,0.0265912);
   gre->SetPoint(7,225,-0.01208278);
   gre->SetPointError(7,0,0.01894078);
   gre->SetPoint(8,235,-0.03889452);
   gre->SetPointError(8,0,0.01157062);
   gre->SetPoint(9,245,-0.01797034);
   gre->SetPointError(9,0,0.007283652);
   
   TH1F *Graph_gr_ImT22_25_20_18052 = new TH1F("Graph_gr_ImT22_25_20_18052","",100,146,254);
   Graph_gr_ImT22_25_20_18052->SetMinimum(-0.09549451);
   Graph_gr_ImT22_25_20_18052->SetMaximum(0.1891075);
   Graph_gr_ImT22_25_20_18052->SetDirectory(0);
   Graph_gr_ImT22_25_20_18052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_18052->SetLineColor(ci);
   Graph_gr_ImT22_25_20_18052->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18052->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_18052->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18052->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_18052->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18052->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_18052);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
