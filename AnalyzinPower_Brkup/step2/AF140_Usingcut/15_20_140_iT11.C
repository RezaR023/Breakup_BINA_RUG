{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:44:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.4003342,287.5,0.1474677);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.06978734);
   gre->SetPointError(0,0,0.07192737);
   gre->SetPoint(1,185,0.01410748);
   gre->SetPointError(1,0,0.04205987);
   gre->SetPoint(2,195,-0.1880658);
   gre->SetPointError(2,0,0.0419057);
   gre->SetPoint(3,205,-0.2029254);
   gre->SetPointError(3,0,0.03574269);
   gre->SetPoint(4,215,-0.1358875);
   gre->SetPointError(4,0,0.04162075);
   gre->SetPoint(5,225,-0.1163182);
   gre->SetPointError(5,0,0.03802913);
   gre->SetPoint(6,235,-0.2266896);
   gre->SetPointError(6,0,0.03651842);
   gre->SetPoint(7,245,-0.2688118);
   gre->SetPointError(7,0,0.04022205);
   gre->SetPoint(8,255,-0.1702549);
   gre->SetPointError(8,0,0.04162271);
   gre->SetPoint(9,265,-0.1254623);
   gre->SetPointError(9,0,0.04137345);
   
   TH1F *Graph_gr_iT11_15_20_140171 = new TH1F("Graph_gr_iT11_15_20_140171","",100,166,274);
   Graph_gr_iT11_15_20_140171->SetMinimum(-0.345554);
   Graph_gr_iT11_15_20_140171->SetMaximum(0.09268748);
   Graph_gr_iT11_15_20_140171->SetDirectory(0);
   Graph_gr_iT11_15_20_140171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_20_140171->SetLineColor(ci);
   Graph_gr_iT11_15_20_140171->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_140171->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_140171->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_140171->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_140171->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_140171->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_140171->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_140171->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_140171->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_140171->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_140171->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_140171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_20_140171);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
