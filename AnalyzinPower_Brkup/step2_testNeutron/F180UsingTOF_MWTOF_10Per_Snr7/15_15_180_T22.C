{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:35:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(170,-0.3791735,290,0.3241826);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,190,0.1326205);
   gre->SetPointError(0,0,0.07433606);
   gre->SetPoint(1,210,0.01101944);
   gre->SetPointError(1,0,0.0850559);
   gre->SetPoint(2,230,-0.0394906);
   gre->SetPointError(2,0,0.07465819);
   gre->SetPoint(3,250,-0.194834);
   gre->SetPointError(3,0,0.06711352);
   gre->SetPoint(4,270,-0.1029345);
   gre->SetPointError(4,0,0.05790317);
   
   TH1F *Graph_gr_T22_15_15_1803 = new TH1F("Graph_gr_T22_15_15_1803","",100,182,278);
   Graph_gr_T22_15_15_1803->SetMinimum(-0.3088379);
   Graph_gr_T22_15_15_1803->SetMaximum(0.253847);
   Graph_gr_T22_15_15_1803->SetDirectory(0);
   Graph_gr_T22_15_15_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_1803->SetLineColor(ci);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
