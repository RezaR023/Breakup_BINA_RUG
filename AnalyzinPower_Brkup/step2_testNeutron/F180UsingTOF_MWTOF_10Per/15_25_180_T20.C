{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:53:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-1.412668,287.5,0.5388957);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.3772944);
   gre->SetPointError(0,0,0.1685076);
   gre->SetPoint(1,185,0.06649396);
   gre->SetPointError(1,0,0.147141);
   gre->SetPoint(2,195,-0.1738196);
   gre->SetPointError(2,0,0.1117038);
   gre->SetPoint(3,205,-0.07176464);
   gre->SetPointError(3,0,0.1082575);
   gre->SetPoint(4,215,-0.08720142);
   gre->SetPointError(4,0,0.1092261);
   gre->SetPoint(5,225,-0.2568897);
   gre->SetPointError(5,0,0.1045222);
   gre->SetPoint(6,235,-0.1782011);
   gre->SetPointError(6,0,0.1219447);
   gre->SetPoint(7,245,-0.3190508);
   gre->SetPointError(7,0,0.1198746);
   gre->SetPoint(8,255,-0.605886);
   gre->SetPointError(8,0,0.1182759);
   gre->SetPoint(9,265,-0.9718604);
   gre->SetPointError(9,0,0.1155472);
   
   TH1F *Graph_gr_T20_15_25_18030 = new TH1F("Graph_gr_T20_15_25_18030","",100,166,274);
   Graph_gr_T20_15_25_18030->SetMinimum(-1.217512);
   Graph_gr_T20_15_25_18030->SetMaximum(0.3437393);
   Graph_gr_T20_15_25_18030->SetDirectory(0);
   Graph_gr_T20_15_25_18030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_18030->SetLineColor(ci);
   Graph_gr_T20_15_25_18030->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18030->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_18030->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18030->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_18030->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_18030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_18030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_18030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_18030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
