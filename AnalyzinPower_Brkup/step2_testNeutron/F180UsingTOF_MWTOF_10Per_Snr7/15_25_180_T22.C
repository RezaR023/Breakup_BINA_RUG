{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:48:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(145,-0.2876147,295,0.06874094);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("gr_T22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,-0.1269096);
   gre->SetPointError(0,0,0.1013125);
   gre->SetPoint(1,190,-0.04473939);
   gre->SetPointError(1,0,0.05408771);
   gre->SetPoint(2,210,-0.03849038);
   gre->SetPointError(2,0,0.04728629);
   gre->SetPoint(3,230,-0.1290152);
   gre->SetPointError(3,0,0.04946874);
   gre->SetPoint(4,250,-0.04057645);
   gre->SetPointError(4,0,0.04871047);
   gre->SetPoint(5,270,-0.05423984);
   gre->SetPointError(5,0,0.06283088);
   
   TH1F *Graph_gr_T22_15_25_1809 = new TH1F("Graph_gr_T22_15_25_1809","",100,160,280);
   Graph_gr_T22_15_25_1809->SetMinimum(-0.2519792);
   Graph_gr_T22_15_25_1809->SetMaximum(0.03310537);
   Graph_gr_T22_15_25_1809->SetDirectory(0);
   Graph_gr_T22_15_25_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_25_1809->SetLineColor(ci);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_25_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
