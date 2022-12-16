{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:33:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(142.5,16.40634,277.5,52.26579);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,164.9403,31.83715);
   gre->SetPointError(0,0,0.9176815);
   gre->SetPoint(1,175,29.59927);
   gre->SetPointError(1,0,0.8443328);
   gre->SetPoint(2,185,23.48871);
   gre->SetPointError(2,0,0.7498132);
   gre->SetPoint(3,195,24.03167);
   gre->SetPointError(3,0,0.7510786);
   gre->SetPoint(4,205,23.1267);
   gre->SetPointError(4,0,0.7437852);
   gre->SetPoint(5,215,27.17284);
   gre->SetPointError(5,0,0.7848624);
   gre->SetPoint(6,225,27.78642);
   gre->SetPointError(6,0,0.8027741);
   gre->SetPoint(7,235,31.63996);
   gre->SetPointError(7,0,0.841544);
   gre->SetPoint(8,245,36.84554);
   gre->SetPointError(8,0,0.9076269);
   gre->SetPoint(9,255,45.28924);
   gre->SetPointError(9,0,0.9999781);
   
   TH1F *Graph_gr_crsection_20_20_1406 = new TH1F("Graph_gr_crsection_20_20_1406","",100,156,264);
   Graph_gr_crsection_20_20_1406->SetMinimum(19.99228);
   Graph_gr_crsection_20_20_1406->SetMaximum(48.67985);
   Graph_gr_crsection_20_20_1406->SetDirectory(0);
   Graph_gr_crsection_20_20_1406->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_20_1406->SetLineColor(ci);
   Graph_gr_crsection_20_20_1406->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1406->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1406->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1406->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_1406->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1406->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1406->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1406->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_1406->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1406->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1406->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1406->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_20_1406);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
