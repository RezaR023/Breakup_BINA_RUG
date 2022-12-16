{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:39:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-1.653235,257.5,57.11757);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,8.636616);
   gre->SetPointError(0,0,0.4947164);
   gre->SetPoint(1,154.9668,21.07694);
   gre->SetPointError(1,0,0.7189093);
   gre->SetPoint(2,165,21.14644);
   gre->SetPointError(2,0,0.7151005);
   gre->SetPoint(3,175,24.67271);
   gre->SetPointError(3,0,0.7586147);
   gre->SetPoint(4,185,27.00835);
   gre->SetPointError(4,0,0.781464);
   gre->SetPoint(5,195,31.08146);
   gre->SetPointError(5,0,0.8332651);
   gre->SetPoint(6,205,37.22997);
   gre->SetPointError(6,0,0.9029925);
   gre->SetPoint(7,215,40.90972);
   gre->SetPointError(7,0,0.9617146);
   gre->SetPoint(8,225,46.30248);
   gre->SetPointError(8,0,1.019956);
   gre->SetPoint(9,235,43.00919);
   gre->SetPointError(9,0,0.9507359);
   
   TH1F *Graph_gr_crsection_28_15_14014 = new TH1F("Graph_gr_crsection_28_15_14014","",100,136,244);
   Graph_gr_crsection_28_15_14014->SetMinimum(4.223846);
   Graph_gr_crsection_28_15_14014->SetMaximum(51.24049);
   Graph_gr_crsection_28_15_14014->SetDirectory(0);
   Graph_gr_crsection_28_15_14014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_15_14014->SetLineColor(ci);
   Graph_gr_crsection_28_15_14014->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_14014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_14014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_14014->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_14014->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_14014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_14014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_14014->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_14014->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_14014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_14014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_14014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_15_14014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
