{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:02:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(130,-0.2850223,280,0.08401935);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T22_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1649796);
   gre->SetPointError(0,0,0.05853577);
   gre->SetPoint(1,165,-0.1322896);
   gre->SetPointError(1,0,0.03089165);
   gre->SetPoint(2,175,-0.1840542);
   gre->SetPointError(2,0,0.02703131);
   gre->SetPoint(3,185,-0.1872404);
   gre->SetPointError(3,0,0.0215193);
   gre->SetPoint(4,195,-0.08841446);
   gre->SetPointError(4,0,0.01579817);
   gre->SetPoint(5,205,-0.09868282);
   gre->SetPointError(5,0,0.01311198);
   gre->SetPoint(6,215,-0.06142648);
   gre->SetPointError(6,0,0.01154248);
   gre->SetPoint(7,225,-0.0431324);
   gre->SetPointError(7,0,0.01025396);
   gre->SetPoint(8,235,-0.02820275);
   gre->SetPointError(8,0,0.01029663);
   gre->SetPoint(9,245,-0.04178737);
   gre->SetPointError(9,0,0.01149256);
   gre->SetPoint(10,255,0.007276944);
   gre->SetPointError(10,0,0.01523546);
   
   TH1F *Graph_gr_T22_20_28_18041 = new TH1F("Graph_gr_T22_20_28_18041","",100,145,265);
   Graph_gr_T22_20_28_18041->SetMinimum(-0.2481181);
   Graph_gr_T22_20_28_18041->SetMaximum(0.04711518);
   Graph_gr_T22_20_28_18041->SetDirectory(0);
   Graph_gr_T22_20_28_18041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_18041->SetLineColor(ci);
   Graph_gr_T22_20_28_18041->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18041->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18041->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18041->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_18041->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18041->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18041->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18041->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_18041->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18041->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18041->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_18041);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
