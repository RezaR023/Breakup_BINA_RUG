{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:01:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(117.8637,-0.593652,253.0663,0.0784129);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,140.3975,-0.1455084);
   gre->SetPointError(0,0,0.1119104);
   gre->SetPoint(1,150.4125,-0.1628162);
   gre->SetPointError(1,0,0.1075063);
   gre->SetPoint(2,160.4275,-0.2899044);
   gre->SetPointError(2,0,0.09848505);
   gre->SetPoint(3,170.4425,-0.2377803);
   gre->SetPointError(3,0,0.08977344);
   gre->SetPoint(4,180.4575,-0.4048221);
   gre->SetPointError(4,0,0.06456133);
   gre->SetPoint(5,190.4725,-0.3695246);
   gre->SetPointError(5,0,0.04371222);
   gre->SetPoint(6,200.4875,-0.4379516);
   gre->SetPointError(6,0,0.02780866);
   gre->SetPoint(7,210.5025,-0.3824087);
   gre->SetPointError(7,0,0.02028832);
   gre->SetPoint(8,220.5175,-0.4117719);
   gre->SetPointError(8,0,0.01794634);
   gre->SetPoint(9,230.5325,-0.4582611);
   gre->SetPointError(9,0,0.02338011);
   
   TH1F *Graph_gr_T20_28_28_1802 = new TH1F("Graph_gr_T20_28_28_1802","",100,131.384,239.546);
   Graph_gr_T20_28_28_1802->SetMinimum(-0.5264455);
   Graph_gr_T20_28_28_1802->SetMaximum(0.0112064);
   Graph_gr_T20_28_28_1802->SetDirectory(0);
   Graph_gr_T20_28_28_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1802->SetLineColor(ci);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
