{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:02:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.5838824,250,0.4099498);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,0.05740966);
   gre->SetPointError(0,0,0.1869015);
   gre->SetPoint(1,170,-0.1706568);
   gre->SetPointError(1,0,0.1434355);
   gre->SetPoint(2,190,-0.2941199);
   gre->SetPointError(2,0,0.08592951);
   gre->SetPoint(3,210,-0.3773016);
   gre->SetPointError(3,0,0.04094211);
   gre->SetPoint(4,230,-0.3111883);
   gre->SetPointError(4,0,0.03256316);
   
   TH1F *Graph_gr_T20_28_25_18021 = new TH1F("Graph_gr_T20_28_25_18021","",100,142,238);
   Graph_gr_T20_28_25_18021->SetMinimum(-0.4844992);
   Graph_gr_T20_28_25_18021->SetMaximum(0.3105666);
   Graph_gr_T20_28_25_18021->SetDirectory(0);
   Graph_gr_T20_28_25_18021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_25_18021->SetLineColor(ci);
   Graph_gr_T20_28_25_18021->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18021->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_18021->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18021->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_18021->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_18021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_18021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_18021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_25_18021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
