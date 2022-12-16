{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:14:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(162.5,-46.8325,297.5,453.2489);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,37.9641);
   gre->SetPointError(0,0,1.449707);
   gre->SetPoint(1,195,46.2338);
   gre->SetPointError(1,0,1.446514);
   gre->SetPoint(2,205,55.10964);
   gre->SetPointError(2,0,1.500746);
   gre->SetPoint(3,215,65.93958);
   gre->SetPointError(3,0,1.634202);
   gre->SetPoint(4,225,84.03855);
   gre->SetPointError(4,0,1.821113);
   gre->SetPoint(5,235,104.7922);
   gre->SetPointError(5,0,2.028848);
   gre->SetPoint(6,245,137.2929);
   gre->SetPointError(6,0,2.298689);
   gre->SetPoint(7,255,176.4923);
   gre->SetPointError(7,0,2.601802);
   gre->SetPoint(8,265,247.1533);
   gre->SetPointError(8,0,3.074736);
   gre->SetPoint(9,275,366.1431);
   gre->SetPointError(9,0,3.758832);
   
   TH1F *Graph_gr_crsection_15_15_16018 = new TH1F("Graph_gr_crsection_15_15_16018","",100,176,284);
   Graph_gr_crsection_15_15_16018->SetMinimum(3.175638);
   Graph_gr_crsection_15_15_16018->SetMaximum(403.2407);
   Graph_gr_crsection_15_15_16018->SetDirectory(0);
   Graph_gr_crsection_15_15_16018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_15_16018->SetLineColor(ci);
   Graph_gr_crsection_15_15_16018->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_16018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_16018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_16018->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_16018->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_16018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_16018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_16018->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_16018->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_16018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_16018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_16018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_15_16018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
