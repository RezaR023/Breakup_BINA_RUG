{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:31:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(140,-7.266592,290,125.0812);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,15.57443);
   gre->SetPointError(0,0,0.783067);
   gre->SetPoint(1,174.8806,32.39162);
   gre->SetPointError(1,0,1.012);
   gre->SetPoint(2,185,26.41456);
   gre->SetPointError(2,0,0.9210603);
   gre->SetPoint(3,195,24.42695);
   gre->SetPointError(3,0,0.888893);
   gre->SetPoint(4,205,28.97367);
   gre->SetPointError(4,0,0.9537872);
   gre->SetPoint(5,215,38.38213);
   gre->SetPointError(5,0,1.078304);
   gre->SetPoint(6,225,51.20538);
   gre->SetPointError(6,0,1.23957);
   gre->SetPoint(7,235,64.76564);
   gre->SetPointError(7,0,1.375944);
   gre->SetPoint(8,245,77.36375);
   gre->SetPointError(8,0,1.514374);
   gre->SetPoint(9,255,101.2911);
   gre->SetPointError(9,0,1.73211);
   gre->SetPoint(10,265,82.00689);
   gre->SetPointError(10,0,1.544398);
   
   TH1F *Graph_gr_crsection_20_15_1405 = new TH1F("Graph_gr_crsection_20_15_1405","",100,155,275);
   Graph_gr_crsection_20_15_1405->SetMinimum(5.968183);
   Graph_gr_crsection_20_15_1405->SetMaximum(111.8464);
   Graph_gr_crsection_20_15_1405->SetDirectory(0);
   Graph_gr_crsection_20_15_1405->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_15_1405->SetLineColor(ci);
   Graph_gr_crsection_20_15_1405->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1405->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1405->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1405->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_1405->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1405->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1405->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1405->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_1405->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_1405->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_1405->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_1405->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_15_1405);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
