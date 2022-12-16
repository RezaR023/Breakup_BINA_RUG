{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:32:08 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-2.297791,310,0.7908286);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.02542437);
   gre->SetPointError(0,0,0.02978074);
   gre->SetPoint(1,145,0.1220669);
   gre->SetPointError(1,0,0.1539918);
   gre->SetPoint(2,155,-0.8187336);
   gre->SetPointError(2,0,0.9642877);
   gre->SetPoint(3,165,0.02153402);
   gre->SetPointError(3,0,0.04448584);
   gre->SetPoint(4,175,-0.005098565);
   gre->SetPointError(4,0,0.02266315);
   gre->SetPoint(5,185,0.003587513);
   gre->SetPointError(5,0,0.01781133);
   gre->SetPoint(6,195,-0.02870576);
   gre->SetPointError(6,0,0.01517674);
   gre->SetPoint(7,205,0.006547151);
   gre->SetPointError(7,0,0.01444599);
   gre->SetPoint(8,215,-0.01581287);
   gre->SetPointError(8,0,0.01393076);
   gre->SetPoint(9,225,-0.02876618);
   gre->SetPointError(9,0,0.01445495);
   gre->SetPoint(10,235,-0.0007942315);
   gre->SetPointError(10,0,0.01644492);
   gre->SetPoint(11,245,-0.01520229);
   gre->SetPointError(11,0,0.01862852);
   gre->SetPoint(12,255,-0.00215115);
   gre->SetPointError(12,0,0.02231634);
   gre->SetPoint(13,265,0.0219061);
   gre->SetPointError(13,0,0.02341106);
   gre->SetPoint(14,275,-0.01684277);
   gre->SetPointError(14,0,0.05027091);
   
   TH1F *Graph_gr_ImT22_15_28_1808 = new TH1F("Graph_gr_ImT22_15_28_1808","",100,121,289);
   Graph_gr_ImT22_15_28_1808->SetMinimum(-1.988929);
   Graph_gr_ImT22_15_28_1808->SetMaximum(0.4819666);
   Graph_gr_ImT22_15_28_1808->SetDirectory(0);
   Graph_gr_ImT22_15_28_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_1808->SetLineColor(ci);
   Graph_gr_ImT22_15_28_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
