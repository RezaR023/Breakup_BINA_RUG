{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:52:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(122.5,-136.1188,257.5,1225.069);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,13.5103);
   gre->SetPointError(0,0,0.4324717);
   gre->SetPoint(1,155,16.70768);
   gre->SetPointError(1,0,0.4590866);
   gre->SetPoint(2,165,19.46601);
   gre->SetPointError(2,0,0.4898432);
   gre->SetPoint(3,175,27.84384);
   gre->SetPointError(3,0,0.5739648);
   gre->SetPoint(4,185,49.57317);
   gre->SetPointError(4,0,0.7619434);
   gre->SetPoint(5,195,108.0071);
   gre->SetPointError(5,0,1.124764);
   gre->SetPoint(6,205,262.5535);
   gre->SetPointError(6,0,1.750656);
   gre->SetPoint(7,215,616.7854);
   gre->SetPointError(7,0,2.659264);
   gre->SetPoint(8,225,987.7882);
   gre->SetPointError(8,0,3.35533);
   gre->SetPoint(9,235,333.0005);
   gre->SetPointError(9,0,1.957388);
   
   TH1F *Graph_gr_crsection_28_28_18016 = new TH1F("Graph_gr_crsection_28_28_18016","",100,136,244);
   Graph_gr_crsection_28_28_18016->SetMinimum(0);
   Graph_gr_crsection_28_28_18016->SetMaximum(1088.95);
   Graph_gr_crsection_28_28_18016->SetDirectory(0);
   Graph_gr_crsection_28_28_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_28_18016->SetLineColor(ci);
   Graph_gr_crsection_28_28_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_28_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
