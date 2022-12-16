{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:09:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.774325,310,0.6457888);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.04352657);
   gre->SetPoint(1,145,-1.102177);
   gre->SetPointError(1,0,0.2687956);
   gre->SetPoint(2,155,-0.02635914);
   gre->SetPointError(2,0,0.2687956);
   gre->SetPoint(3,165,-0.1032398);
   gre->SetPointError(3,0,0.07740447);
   gre->SetPoint(4,175,0.1317395);
   gre->SetPointError(4,0,0.0342629);
   gre->SetPoint(5,185,0.1749573);
   gre->SetPointError(5,0,0.02822996);
   gre->SetPoint(6,195,0.1971748);
   gre->SetPointError(6,0,0.02501355);
   gre->SetPoint(7,205,0.07669707);
   gre->SetPointError(7,0,0.0222103);
   gre->SetPoint(8,215,0.01825933);
   gre->SetPointError(8,0,0.02189226);
   gre->SetPoint(9,225,-0.01694998);
   gre->SetPointError(9,0,0.0235296);
   gre->SetPoint(10,235,-0.05719606);
   gre->SetPointError(10,0,0.0264599);
   gre->SetPoint(11,245,-0.206959);
   gre->SetPointError(11,0,0.02924623);
   gre->SetPoint(12,255,-0.2138342);
   gre->SetPointError(12,0,0.03371087);
   gre->SetPoint(13,265,-0.1903911);
   gre->SetPointError(13,0,0.0337748);
   gre->SetPoint(14,275,-0.1797592);
   gre->SetPointError(14,0,0.062968);
   
   TH1F *Graph_gr_T20_15_28_16018 = new TH1F("Graph_gr_T20_15_28_16018","",100,121,289);
   Graph_gr_T20_15_28_16018->SetMinimum(-1.532314);
   Graph_gr_T20_15_28_16018->SetMaximum(0.4037774);
   Graph_gr_T20_15_28_16018->SetDirectory(0);
   Graph_gr_T20_15_28_16018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_16018->SetLineColor(ci);
   Graph_gr_T20_15_28_16018->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_16018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_16018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_16018->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_16018->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_16018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_16018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_16018->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_16018->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_16018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_16018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_16018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_16018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
