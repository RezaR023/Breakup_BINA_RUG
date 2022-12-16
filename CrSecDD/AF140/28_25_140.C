{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:40:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(112.5,2.174077,247.5,45.04033);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,9.706216);
   gre->SetPointError(0,0,0.3877627);
   gre->SetPoint(1,144.9668,23.6072);
   gre->SetPointError(1,0,0.5765991);
   gre->SetPoint(2,155,24.29732);
   gre->SetPointError(2,0,0.5906309);
   gre->SetPoint(3,165,23.27411);
   gre->SetPointError(3,0,0.5814025);
   gre->SetPoint(4,175,21.70983);
   gre->SetPointError(4,0,0.5609775);
   gre->SetPoint(5,185,19.68516);
   gre->SetPointError(5,0,0.5319428);
   gre->SetPoint(6,195,19.43585);
   gre->SetPointError(6,0,0.531037);
   gre->SetPoint(7,205,22.51731);
   gre->SetPointError(7,0,0.5580783);
   gre->SetPoint(8,215,28.91208);
   gre->SetPointError(8,0,0.6314576);
   gre->SetPoint(9,225,37.19691);
   gre->SetPointError(9,0,0.6990457);
   
   TH1F *Graph_gr_crsection_28_25_14016 = new TH1F("Graph_gr_crsection_28_25_14016","",100,126,234);
   Graph_gr_crsection_28_25_14016->SetMinimum(6.460703);
   Graph_gr_crsection_28_25_14016->SetMaximum(40.75371);
   Graph_gr_crsection_28_25_14016->SetDirectory(0);
   Graph_gr_crsection_28_25_14016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_25_14016->SetLineColor(ci);
   Graph_gr_crsection_28_25_14016->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_14016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_14016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_14016->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_14016->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_14016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_14016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_14016->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_14016->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_14016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_14016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_14016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_25_14016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
