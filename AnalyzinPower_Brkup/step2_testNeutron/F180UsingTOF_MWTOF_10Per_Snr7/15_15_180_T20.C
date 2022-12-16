{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:35:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(170,-1.012078,290,0.7008686);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,190,-0.5826514);
   gre->SetPointError(0,0,0.1439354);
   gre->SetPoint(1,210,-0.1280405);
   gre->SetPointError(1,0,0.1554272);
   gre->SetPoint(2,230,-0.1412809);
   gre->SetPointError(2,0,0.1329719);
   gre->SetPoint(3,250,0.2248324);
   gre->SetPointError(3,0,0.1178974);
   gre->SetPoint(4,270,0.3153053);
   gre->SetPointError(4,0,0.1000722);
   
   TH1F *Graph_gr_T20_15_15_1802 = new TH1F("Graph_gr_T20_15_15_1802","",100,182,278);
   Graph_gr_T20_15_15_1802->SetMinimum(-0.8407832);
   Graph_gr_T20_15_15_1802->SetMaximum(0.5295739);
   Graph_gr_T20_15_15_1802->SetDirectory(0);
   Graph_gr_T20_15_15_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_1802->SetLineColor(ci);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
