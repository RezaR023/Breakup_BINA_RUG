{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:49:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.3395417,290,0.2642432);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T22_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.092968);
   gre->SetPointError(0,0,0.0706444);
   gre->SetPoint(1,175,-0.01113401);
   gre->SetPointError(1,0,0.04360996);
   gre->SetPoint(2,185,-0.05777817);
   gre->SetPointError(2,0,0.04604342);
   gre->SetPoint(3,195,-0.1256385);
   gre->SetPointError(3,0,0.03997612);
   gre->SetPoint(4,205,-0.0883439);
   gre->SetPointError(4,0,0.03607778);
   gre->SetPoint(5,215,-0.1370773);
   gre->SetPointError(5,0,0.03158393);
   gre->SetPoint(6,225,-0.1246635);
   gre->SetPointError(6,0,0.02599357);
   gre->SetPoint(7,235,-0.1229722);
   gre->SetPointError(7,0,0.02279168);
   gre->SetPoint(8,245,-0.1461196);
   gre->SetPointError(8,0,0.01894466);
   gre->SetPoint(9,255,-0.1861853);
   gre->SetPointError(9,0,0.01451487);
   gre->SetPoint(10,265,-0.2268443);
   gre->SetPointError(10,0,0.01206656);
   
   TH1F *Graph_gr_T22_20_20_18031 = new TH1F("Graph_gr_T22_20_20_18031","",100,155,275);
   Graph_gr_T22_20_20_18031->SetMinimum(-0.2791632);
   Graph_gr_T22_20_20_18031->SetMaximum(0.2038647);
   Graph_gr_T22_20_20_18031->SetDirectory(0);
   Graph_gr_T22_20_20_18031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_18031->SetLineColor(ci);
   Graph_gr_T22_20_20_18031->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18031->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_18031->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18031->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_18031->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_18031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
