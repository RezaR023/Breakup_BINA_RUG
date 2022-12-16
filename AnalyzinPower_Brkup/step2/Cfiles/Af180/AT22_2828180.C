{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:43:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(117.8637,-0.3053842,253.0663,0.04068927);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,140.3975,-0.184751);
   gre->SetPointError(0,0,0.06295427);
   gre->SetPoint(1,150.4125,-0.1464571);
   gre->SetPointError(1,0,0.06211031);
   gre->SetPoint(2,160.4275,-0.07795579);
   gre->SetPointError(2,0,0.05728159);
   gre->SetPoint(3,170.4425,-0.1332934);
   gre->SetPointError(3,0,0.05178754);
   gre->SetPoint(4,180.4575,-0.05966606);
   gre->SetPointError(4,0,0.04267642);
   gre->SetPoint(5,190.4725,-0.1269743);
   gre->SetPointError(5,0,0.02714256);
   gre->SetPoint(6,200.4875,-0.09670743);
   gre->SetPointError(6,0,0.0179318);
   gre->SetPoint(7,210.5025,-0.1060881);
   gre->SetPointError(7,0,0.01296192);
   gre->SetPoint(8,220.5175,-0.102341);
   gre->SetPointError(8,0,0.01175231);
   gre->SetPoint(9,230.5325,-0.1317184);
   gre->SetPointError(9,0,0.01558815);
   
   TH1F *Graph_gr_T22_28_28_1803 = new TH1F("Graph_gr_T22_28_28_1803","",100,131.384,239.546);
   Graph_gr_T22_28_28_1803->SetMinimum(-0.2707769);
   Graph_gr_T22_28_28_1803->SetMaximum(0.006081922);
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
