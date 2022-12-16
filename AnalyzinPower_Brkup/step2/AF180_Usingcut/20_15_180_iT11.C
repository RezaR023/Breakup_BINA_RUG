{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:44:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.1983321,290,0.2958477);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_iT11_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.0263186);
   gre->SetPointError(0,0,0.08965022);
   gre->SetPoint(1,175,0.08179012);
   gre->SetPointError(1,0,0.07161368);
   gre->SetPoint(2,185,-0.01444657);
   gre->SetPointError(2,0,0.06607851);
   gre->SetPoint(3,195,0.07838831);
   gre->SetPointError(3,0,0.05776492);
   gre->SetPoint(4,205,0.1515906);
   gre->SetPointError(4,0,0.04740433);
   gre->SetPoint(5,215,0.03972286);
   gre->SetPointError(5,0,0.04004583);
   gre->SetPoint(6,225,0.1220334);
   gre->SetPointError(6,0,0.03182123);
   gre->SetPoint(7,235,0.1127975);
   gre->SetPointError(7,0,0.02753218);
   gre->SetPoint(8,245,0.1551667);
   gre->SetPointError(8,0,0.02128265);
   gre->SetPoint(9,255,0.1978372);
   gre->SetPointError(9,0,0.01555504);
   gre->SetPoint(10,265,0.2019657);
   gre->SetPointError(10,0,0.01151867);
   
   TH1F *Graph_gr_iT11_20_15_18023 = new TH1F("Graph_gr_iT11_20_15_18023","",100,155,275);
   Graph_gr_iT11_20_15_18023->SetMinimum(-0.1489141);
   Graph_gr_iT11_20_15_18023->SetMaximum(0.2464297);
   Graph_gr_iT11_20_15_18023->SetDirectory(0);
   Graph_gr_iT11_20_15_18023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_15_18023->SetLineColor(ci);
   Graph_gr_iT11_20_15_18023->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_18023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_18023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_18023->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_15_18023->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_18023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_18023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_18023->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_15_18023->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_18023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_18023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_18023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_15_18023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
