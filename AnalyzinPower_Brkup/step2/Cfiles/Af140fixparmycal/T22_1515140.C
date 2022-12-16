{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:17:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.1774855,310,0.3131463);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.08912372);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.08912372);
   gre->SetPoint(2,155,0.03265203);
   gre->SetPointError(2,0,0.07101333);
   gre->SetPoint(3,165,-0.006589786);
   gre->SetPointError(3,0,0.07101333);
   gre->SetPoint(4,175,0.1615207);
   gre->SetPointError(4,0,0.06985362);
   gre->SetPoint(5,185,0.08287684);
   gre->SetPointError(5,0,0.04157349);
   gre->SetPoint(6,195,0.06636886);
   gre->SetPointError(6,0,0.04119957);
   gre->SetPoint(7,205,-0.001464867);
   gre->SetPointError(7,0,0.03621392);
   gre->SetPoint(8,215,-0.02068487);
   gre->SetPointError(8,0,0.03191184);
   gre->SetPoint(9,225,0.02298964);
   gre->SetPointError(9,0,0.03301138);
   gre->SetPoint(10,235,-0.004408648);
   gre->SetPointError(10,0,0.03419748);
   gre->SetPoint(11,245,0.004320737);
   gre->SetPointError(11,0,0.03431816);
   gre->SetPoint(12,255,0.01060538);
   gre->SetPointError(12,0,0.03158101);
   gre->SetPoint(13,265,0.02407922);
   gre->SetPointError(13,0,0.03091596);
   gre->SetPoint(14,275,-0.01341174);
   gre->SetPointError(14,0,0.02425877);
   
   TH1F *Graph_gr_T22_15_15_14031 = new TH1F("Graph_gr_T22_15_15_14031","",100,121,289);
   Graph_gr_T22_15_15_14031->SetMinimum(-0.1284223);
   Graph_gr_T22_15_15_14031->SetMaximum(0.2640831);
   Graph_gr_T22_15_15_14031->SetDirectory(0);
   Graph_gr_T22_15_15_14031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_14031->SetLineColor(ci);
   Graph_gr_T22_15_15_14031->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14031->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_14031->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14031->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_14031->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_14031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
