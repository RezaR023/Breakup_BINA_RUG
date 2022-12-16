{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:55:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.3303615,287.5,0.1985845);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1597412);
   gre->SetPointError(0,0,0.08246263);
   gre->SetPoint(1,185,-0.04814347);
   gre->SetPointError(1,0,0.05789385);
   gre->SetPoint(2,195,-0.01280835);
   gre->SetPointError(2,0,0.05067258);
   gre->SetPoint(3,205,-0.1055071);
   gre->SetPointError(3,0,0.05005551);
   gre->SetPoint(4,215,-0.08391296);
   gre->SetPointError(4,0,0.05057914);
   gre->SetPoint(5,225,-0.1430494);
   gre->SetPointError(5,0,0.04887468);
   gre->SetPoint(6,235,-0.06901414);
   gre->SetPointError(6,0,0.05439373);
   gre->SetPoint(7,245,0.02869727);
   gre->SetPointError(7,0,0.06344442);
   gre->SetPoint(8,255,0.02818291);
   gre->SetPointError(8,0,0.08224393);
   gre->SetPoint(9,265,-0.02686691);
   gre->SetPointError(9,0,0.1031006);
   
   TH1F *Graph_gr_T22_15_28_18035 = new TH1F("Graph_gr_T22_15_28_18035","",100,166,274);
   Graph_gr_T22_15_28_18035->SetMinimum(-0.2774669);
   Graph_gr_T22_15_28_18035->SetMaximum(0.1456899);
   Graph_gr_T22_15_28_18035->SetDirectory(0);
   Graph_gr_T22_15_28_18035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_18035->SetLineColor(ci);
   Graph_gr_T22_15_28_18035->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18035->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18035->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18035->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18035->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_18035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
