{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:15:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2826499,257.5,-0.009404018);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1534486);
   gre->SetPointError(0,0,0.04143143);
   gre->SetPoint(1,155,-0.1949865);
   gre->SetPointError(1,0,0.04212244);
   gre->SetPoint(2,165,-0.1933461);
   gre->SetPointError(2,0,0.03594514);
   gre->SetPoint(3,175,-0.1773703);
   gre->SetPointError(3,0,0.02800689);
   gre->SetPoint(4,185,-0.1284545);
   gre->SetPointError(4,0,0.02014866);
   gre->SetPoint(5,195,-0.1092205);
   gre->SetPointError(5,0,0.01418163);
   gre->SetPoint(6,205,-0.06796202);
   gre->SetPointError(6,0,0.01003748);
   gre->SetPoint(7,215,-0.06230091);
   gre->SetPointError(7,0,0.007355905);
   gre->SetPoint(8,225,-0.07472627);
   gre->SetPointError(8,0,0.00612183);
   gre->SetPoint(9,235,-0.08872352);
   gre->SetPointError(9,0,0.006749221);
   
   TH1F *Graph_gr_T22_25_28_18061 = new TH1F("Graph_gr_T22_25_28_18061","",100,136,244);
   Graph_gr_T22_25_28_18061->SetMinimum(-0.2553253);
   Graph_gr_T22_25_28_18061->SetMaximum(-0.03672861);
   Graph_gr_T22_25_28_18061->SetDirectory(0);
   Graph_gr_T22_25_28_18061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_28_18061->SetLineColor(ci);
   Graph_gr_T22_25_28_18061->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_18061->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_18061->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_18061->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_18061->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_18061->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_18061->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_18061->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_18061->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_18061->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_18061->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_18061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_28_18061);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
