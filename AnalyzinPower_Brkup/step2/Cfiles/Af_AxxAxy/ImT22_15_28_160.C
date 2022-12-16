{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:37:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2024713,310,0.3558679);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.01954622);
   gre->SetPointError(0,0,0.02580738);
   gre->SetPoint(1,145,0.1499947);
   gre->SetPointError(1,0,0.1128167);
   gre->SetPoint(2,155,0.1499947);
   gre->SetPointError(2,0,0.1128167);
   gre->SetPoint(3,165,-0.05905681);
   gre->SetPointError(3,0,0.05035795);
   gre->SetPoint(4,175,-0.02413864);
   gre->SetPointError(4,0,0.01995252);
   gre->SetPoint(5,185,-0.001841821);
   gre->SetPointError(5,0,0.01641891);
   gre->SetPoint(6,195,0.01373121);
   gre->SetPointError(6,0,0.01456839);
   gre->SetPoint(7,205,-0.00240837);
   gre->SetPointError(7,0,0.01291781);
   gre->SetPoint(8,215,7.015693e-05);
   gre->SetPointError(8,0,0.0128471);
   gre->SetPoint(9,225,-0.002144466);
   gre->SetPointError(9,0,0.01389372);
   gre->SetPoint(10,235,0.007565049);
   gre->SetPointError(10,0,0.01573789);
   gre->SetPoint(11,245,0.01174173);
   gre->SetPointError(11,0,0.017406);
   gre->SetPoint(12,255,0.008695872);
   gre->SetPointError(12,0,0.02022954);
   gre->SetPoint(13,265,-0.03219621);
   gre->SetPointError(13,0,0.0200459);
   gre->SetPoint(14,275,-0.07366645);
   gre->SetPointError(14,0,0.03566227);
   
   TH1F *Graph_gr_ImT22_15_28_16016 = new TH1F("Graph_gr_ImT22_15_28_16016","",100,121,289);
   Graph_gr_ImT22_15_28_16016->SetMinimum(-0.1466374);
   Graph_gr_ImT22_15_28_16016->SetMaximum(0.300034);
   Graph_gr_ImT22_15_28_16016->SetDirectory(0);
   Graph_gr_ImT22_15_28_16016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_16016->SetLineColor(ci);
   Graph_gr_ImT22_15_28_16016->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_16016->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_16016->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_16016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
