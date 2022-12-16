{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:24:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2269357,287.5,0.1099563);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.09830568);
   gre->SetPointError(0,0,0.03495326);
   gre->SetPoint(1,185,-0.08407037);
   gre->SetPointError(1,0,0.02751344);
   gre->SetPoint(2,195,-0.1492787);
   gre->SetPointError(2,0,0.0215083);
   gre->SetPoint(3,205,-0.1059431);
   gre->SetPointError(3,0,0.01903663);
   gre->SetPoint(4,215,-0.05522594);
   gre->SetPointError(4,0,0.01775168);
   gre->SetPoint(5,225,-0.0481431);
   gre->SetPointError(5,0,0.01809559);
   gre->SetPoint(6,235,-0.005994286);
   gre->SetPointError(6,0,0.01777727);
   gre->SetPoint(7,245,0.02382884);
   gre->SetPointError(7,0,0.0194914);
   gre->SetPoint(8,255,0.03375684);
   gre->SetPointError(8,0,0.02005082);
   gre->SetPoint(9,265,0.0116798);
   gre->SetPointError(9,0,0.02400916);
   
   TH1F *Graph_gr_T22_15_25_18017 = new TH1F("Graph_gr_T22_15_25_18017","",100,166,274);
   Graph_gr_T22_15_25_18017->SetMinimum(-0.1932465);
   Graph_gr_T22_15_25_18017->SetMaximum(0.07626713);
   Graph_gr_T22_15_25_18017->SetDirectory(0);
   Graph_gr_T22_15_25_18017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_25_18017->SetLineColor(ci);
   Graph_gr_T22_15_25_18017->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18017->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_18017->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18017->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_18017->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_25_18017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
