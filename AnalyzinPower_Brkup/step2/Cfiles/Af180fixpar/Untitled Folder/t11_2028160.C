{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:55:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.5407,-0.4540775,276.3893,-0.01342894);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,161.5155,-0.2277693);
   gre->SetPointError(0,0,0.05200113);
   gre->SetPoint(1,171.7265,-0.1350588);
   gre->SetPointError(1,0,0.04818846);
   gre->SetPoint(2,181.9375,-0.2997242);
   gre->SetPointError(2,0,0.03696804);
   gre->SetPoint(3,192.1485,-0.2330893);
   gre->SetPointError(3,0,0.03562138);
   gre->SetPoint(4,202.3595,-0.3064778);
   gre->SetPointError(4,0,0.03266481);
   gre->SetPoint(5,212.5705,-0.3156049);
   gre->SetPointError(5,0,0.03122086);
   gre->SetPoint(6,222.7815,-0.2428292);
   gre->SetPointError(6,0,0.03152451);
   gre->SetPoint(7,232.9925,-0.32228);
   gre->SetPointError(7,0,0.03437565);
   gre->SetPoint(8,243.2035,-0.3396956);
   gre->SetPointError(8,0,0.04094045);
   gre->SetPoint(9,253.4145,-0.3298314);
   gre->SetPointError(9,0,0.04520395);
   
   TH1F *Graph_gr_iT11_20_28_16013 = new TH1F("Graph_gr_iT11_20_28_16013","",100,152.3256,262.6044);
   Graph_gr_iT11_20_28_16013->SetMinimum(-0.4100126);
   Graph_gr_iT11_20_28_16013->SetMaximum(-0.0574938);
   Graph_gr_iT11_20_28_16013->SetDirectory(0);
   Graph_gr_iT11_20_28_16013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_16013->SetLineColor(ci);
   Graph_gr_iT11_20_28_16013->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_16013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_16013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_16013->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_16013->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_16013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_16013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_16013->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_16013->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_16013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_16013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_16013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_16013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
