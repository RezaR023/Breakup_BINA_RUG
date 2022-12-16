{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:18:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-1.999324,310,1.207337);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.09459503);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.09459503);
   gre->SetPoint(2,155,-0.3959932);
   gre->SetPointError(2,0,1.068887);
   gre->SetPoint(3,165,-0.1059067);
   gre->SetPointError(3,0,0.08225515);
   gre->SetPoint(4,175,-0.1951624);
   gre->SetPointError(4,0,0.06248161);
   gre->SetPoint(5,185,-0.1260493);
   gre->SetPointError(5,0,0.06209538);
   gre->SetPoint(6,195,-0.2270877);
   gre->SetPointError(6,0,0.05557382);
   gre->SetPoint(7,205,-0.2923902);
   gre->SetPointError(7,0,0.0491045);
   gre->SetPoint(8,215,-0.3454363);
   gre->SetPointError(8,0,0.04220778);
   gre->SetPoint(9,225,-0.2869063);
   gre->SetPointError(9,0,0.03752941);
   gre->SetPoint(10,235,-0.2268207);
   gre->SetPointError(10,0,0.03204999);
   gre->SetPoint(11,245,-0.1944392);
   gre->SetPointError(11,0,0.02649641);
   gre->SetPoint(12,255,-0.05829587);
   gre->SetPointError(12,0,0.02413805);
   gre->SetPoint(13,265,-0.03521297);
   gre->SetPointError(13,0,0.02408237);
   gre->SetPoint(14,275,-0.3465048);
   gre->SetPointError(14,0,0.1092934);
   
   TH1F *Graph_gr_T20_20_20_1805 = new TH1F("Graph_gr_T20_20_20_1805","",100,121,289);
   Graph_gr_T20_20_20_1805->SetMinimum(-1.678658);
   Graph_gr_T20_20_20_1805->SetMaximum(0.8866711);
   Graph_gr_T20_20_20_1805->SetDirectory(0);
   Graph_gr_T20_20_20_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_1805->SetLineColor(ci);
   Graph_gr_T20_20_20_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
