{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:17:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(132.5,-71.26436,267.5,641.3792);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,20.01437);
   gre->SetPointError(0,0,0.7131719);
   gre->SetPoint(1,165,25.76287);
   gre->SetPointError(1,0,0.8058647);
   gre->SetPoint(2,175,25.67585);
   gre->SetPointError(2,0,0.8126105);
   gre->SetPoint(3,185,31.70453);
   gre->SetPointError(3,0,0.8816041);
   gre->SetPoint(4,195,46.73207);
   gre->SetPointError(4,0,1.063414);
   gre->SetPoint(5,205,68.0153);
   gre->SetPointError(5,0,1.271817);
   gre->SetPoint(6,215,99.05524);
   gre->SetPointError(6,0,1.524663);
   gre->SetPoint(7,225,148.4857);
   gre->SetPointError(7,0,1.887479);
   gre->SetPoint(8,235,238.3396);
   gre->SetPointError(8,0,2.379651);
   gre->SetPoint(9,245,516.5861);
   gre->SetPointError(9,0,3.454792);
   
   TH1F *Graph_gr_crsection_25_15_16026 = new TH1F("Graph_gr_crsection_25_15_16026","",100,146,254);
   Graph_gr_crsection_25_15_16026->SetMinimum(0);
   Graph_gr_crsection_25_15_16026->SetMaximum(570.1148);
   Graph_gr_crsection_25_15_16026->SetDirectory(0);
   Graph_gr_crsection_25_15_16026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_15_16026->SetLineColor(ci);
   Graph_gr_crsection_25_15_16026->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_16026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_16026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_16026->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_16026->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_16026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_16026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_16026->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_16026->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_16026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_16026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_16026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_15_16026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
