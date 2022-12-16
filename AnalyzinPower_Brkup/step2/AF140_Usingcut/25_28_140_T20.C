{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:09:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.4769007,245,0.219993);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.02729957);
   gre->SetPointError(0,0,0.06734198);
   gre->SetPoint(1,155,0.02260832);
   gre->SetPointError(1,0,0.05469025);
   gre->SetPoint(2,165,0.04549632);
   gre->SetPointError(2,0,0.05834768);
   gre->SetPoint(3,175,-0.02053434);
   gre->SetPointError(3,0,0.05961651);
   gre->SetPoint(4,185,-0.07288415);
   gre->SetPointError(4,0,0.06177475);
   gre->SetPoint(5,195,-0.1802269);
   gre->SetPointError(5,0,0.05816039);
   gre->SetPoint(6,205,-0.1958719);
   gre->SetPointError(6,0,0.05555977);
   gre->SetPoint(7,215,-0.3108074);
   gre->SetPointError(7,0,0.04994436);
   gre->SetPoint(8,225,-0.2900978);
   gre->SetPointError(8,0,0.04341827);
   
   TH1F *Graph_gr_T20_25_28_14038 = new TH1F("Graph_gr_T20_25_28_14038","",100,137,233);
   Graph_gr_T20_25_28_14038->SetMinimum(-0.4072114);
   Graph_gr_T20_25_28_14038->SetMaximum(0.1503036);
   Graph_gr_T20_25_28_14038->SetDirectory(0);
   Graph_gr_T20_25_28_14038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_28_14038->SetLineColor(ci);
   Graph_gr_T20_25_28_14038->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_14038->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_14038->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_14038->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_14038->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_14038->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_14038->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_14038->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_14038->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_14038->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_14038->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_14038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_28_14038);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
