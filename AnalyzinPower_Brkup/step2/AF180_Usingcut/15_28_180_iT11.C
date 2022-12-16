{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:28:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.3211813,287.5,-0.09490934);
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
   gre->SetPoint(0,175,-0.1641927);
   gre->SetPointError(0,0,0.02750966);
   gre->SetPoint(1,185,-0.1543463);
   gre->SetPointError(1,0,0.02136911);
   gre->SetPoint(2,195,-0.1509074);
   gre->SetPointError(2,0,0.01828606);
   gre->SetPoint(3,205,-0.1789568);
   gre->SetPointError(3,0,0.0175904);
   gre->SetPoint(4,215,-0.1766415);
   gre->SetPointError(4,0,0.01737462);
   gre->SetPoint(5,225,-0.2082611);
   gre->SetPointError(5,0,0.01790769);
   gre->SetPoint(6,235,-0.2476596);
   gre->SetPointError(6,0,0.02039212);
   gre->SetPoint(7,245,-0.2440832);
   gre->SetPointError(7,0,0.0232954);
   gre->SetPoint(8,255,-0.2553465);
   gre->SetPointError(8,0,0.02812283);
   gre->SetPoint(9,265,-0.2298562);
   gre->SetPointError(9,0,0.03360101);
   
   TH1F *Graph_gr_iT11_15_28_18019 = new TH1F("Graph_gr_iT11_15_28_18019","",100,166,274);
   Graph_gr_iT11_15_28_18019->SetMinimum(-0.2985541);
   Graph_gr_iT11_15_28_18019->SetMaximum(-0.1175365);
   Graph_gr_iT11_15_28_18019->SetDirectory(0);
   Graph_gr_iT11_15_28_18019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_18019->SetLineColor(ci);
   Graph_gr_iT11_15_28_18019->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18019->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18019->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18019->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18019->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_18019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
