{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:03:35 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.2209063,310,0.04289044);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.05354011);
   gre->SetPointError(0,0,0.04944317);
   gre->SetPoint(1,145,-0.1216398);
   gre->SetPointError(1,0,0.03897154);
   gre->SetPoint(2,155,-0.1444004);
   gre->SetPointError(2,0,0.03253976);
   gre->SetPoint(3,165,-0.1176605);
   gre->SetPointError(3,0,0.03107266);
   gre->SetPoint(4,175,-0.1030179);
   gre->SetPointError(4,0,0.02643871);
   gre->SetPoint(5,185,-0.08833115);
   gre->SetPointError(5,0,0.02016562);
   gre->SetPoint(6,195,-0.0968116);
   gre->SetPointError(6,0,0.01325819);
   gre->SetPoint(7,205,-0.09257626);
   gre->SetPointError(7,0,0.008464802);
   gre->SetPoint(8,215,-0.09591692);
   gre->SetPointError(8,0,0.005647664);
   gre->SetPoint(9,225,-0.1073531);
   gre->SetPointError(9,0,0.004434602);
   gre->SetPoint(10,235,-0.1129005);
   gre->SetPointError(10,0,0.007353121);
   gre->SetPoint(11,245,-0.1150076);
   gre->SetPointError(11,0,0.005514099);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.005514099);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.005514099);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.005514099);
   
   TH1F *Graph_gr_T22_28_28_1803 = new TH1F("Graph_gr_T22_28_28_1803","",100,121,289);
   Graph_gr_T22_28_28_1803->SetMinimum(-0.1945266);
   Graph_gr_T22_28_28_1803->SetMaximum(0.01651076);
   Graph_gr_T22_28_28_1803->SetDirectory(0);
   Graph_gr_T22_28_28_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1803->SetLineColor(ci);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
