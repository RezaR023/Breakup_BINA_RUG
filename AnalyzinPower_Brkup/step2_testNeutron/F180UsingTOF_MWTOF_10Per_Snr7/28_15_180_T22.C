{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:59:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.4855573,250,0.2144111);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.02349333);
   gre->SetPointError(0,0,0.121243);
   gre->SetPoint(1,170,-0.2093186);
   gre->SetPointError(1,0,0.1112576);
   gre->SetPoint(2,190,-0.05008722);
   gre->SetPointError(2,0,0.1071312);
   gre->SetPoint(3,210,-0.3025602);
   gre->SetPointError(3,0,0.06633569);
   gre->SetPoint(4,230,-0.2857285);
   gre->SetPointError(4,0,0.04589517);
   
   TH1F *Graph_gr_T22_28_15_18016 = new TH1F("Graph_gr_T22_28_15_18016","",100,142,238);
   Graph_gr_T22_28_15_18016->SetMinimum(-0.4155605);
   Graph_gr_T22_28_15_18016->SetMaximum(0.1444143);
   Graph_gr_T22_28_15_18016->SetDirectory(0);
   Graph_gr_T22_28_15_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_18016->SetLineColor(ci);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
