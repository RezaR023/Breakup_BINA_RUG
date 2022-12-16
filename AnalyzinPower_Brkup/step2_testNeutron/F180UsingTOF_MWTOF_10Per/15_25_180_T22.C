{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:53:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.3182339,287.5,0.249225);
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
   gre->SetPoint(0,175,0.05127056);
   gre->SetPointError(0,0,0.103378);
   gre->SetPoint(1,185,-0.1153659);
   gre->SetPointError(1,0,0.08457576);
   gre->SetPoint(2,195,0.03904435);
   gre->SetPointError(2,0,0.06660269);
   gre->SetPoint(3,205,-0.1544794);
   gre->SetPointError(3,0,0.06805492);
   gre->SetPoint(4,215,-0.01196608);
   gre->SetPointError(4,0,0.07049681);
   gre->SetPoint(5,225,-0.1575462);
   gre->SetPointError(5,0,0.06611127);
   gre->SetPoint(6,235,-0.02195355);
   gre->SetPointError(6,0,0.07238019);
   gre->SetPoint(7,245,-0.03175072);
   gre->SetPointError(7,0,0.07551557);
   gre->SetPoint(8,255,-0.1023747);
   gre->SetPointError(8,0,0.06827724);
   gre->SetPoint(9,265,-0.05148859);
   gre->SetPointError(9,0,0.06529253);
   
   TH1F *Graph_gr_T22_15_25_18031 = new TH1F("Graph_gr_T22_15_25_18031","",100,166,274);
   Graph_gr_T22_15_25_18031->SetMinimum(-0.261488);
   Graph_gr_T22_15_25_18031->SetMaximum(0.1924791);
   Graph_gr_T22_15_25_18031->SetDirectory(0);
   Graph_gr_T22_15_25_18031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_25_18031->SetLineColor(ci);
   Graph_gr_T22_15_25_18031->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18031->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_18031->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18031->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_18031->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_18031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_18031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_18031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_25_18031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
