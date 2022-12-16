{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:08:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.704944,310,1.361015);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.03671592);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.03671592);
   gre->SetPoint(2,155,-0.006589786);
   gre->SetPointError(2,0,0.03671592);
   gre->SetPoint(3,165,-0.1719645);
   gre->SetPointError(3,0,1.021986);
   gre->SetPoint(4,175,-0.045352);
   gre->SetPointError(4,0,0.05917244);
   gre->SetPoint(5,185,-0.02446425);
   gre->SetPointError(5,0,0.03907148);
   gre->SetPoint(6,195,0.01252835);
   gre->SetPointError(6,0,0.03843805);
   gre->SetPoint(7,205,-0.06390895);
   gre->SetPointError(7,0,0.03230489);
   gre->SetPoint(8,215,-0.08268771);
   gre->SetPointError(8,0,0.03302447);
   gre->SetPoint(9,225,-0.04382354);
   gre->SetPointError(9,0,0.03133474);
   gre->SetPoint(10,235,-0.07107603);
   gre->SetPointError(10,0,0.02931791);
   gre->SetPoint(11,245,-0.1007075);
   gre->SetPointError(11,0,0.02763671);
   gre->SetPoint(12,255,-0.07962601);
   gre->SetPointError(12,0,0.02658811);
   gre->SetPoint(13,265,-0.1394731);
   gre->SetPointError(13,0,0.02248321);
   gre->SetPoint(14,275,-0.1362943);
   gre->SetPointError(14,0,0.01751841);
   
   TH1F *Graph_gr_T22_15_15_16016 = new TH1F("Graph_gr_T22_15_15_16016","",100,121,289);
   Graph_gr_T22_15_15_16016->SetMinimum(-1.398348);
   Graph_gr_T22_15_15_16016->SetMaximum(1.054419);
   Graph_gr_T22_15_15_16016->SetDirectory(0);
   Graph_gr_T22_15_15_16016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_16016->SetLineColor(ci);
   Graph_gr_T22_15_15_16016->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16016->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16016->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16016->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16016->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_16016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
