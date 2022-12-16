{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:22:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(152.5,-0.09079092,287.5,0.07058929);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.02806757);
   gre->SetPointError(0,0,0.01753784);
   gre->SetPoint(1,185,0.01048543);
   gre->SetPointError(1,0,0.01462049);
   gre->SetPoint(2,195,0.005738036);
   gre->SetPointError(2,0,0.01312539);
   gre->SetPoint(3,205,-0.00319867);
   gre->SetPointError(3,0,0.0119772);
   gre->SetPoint(4,215,0.005617305);
   gre->SetPointError(4,0,0.01325336);
   gre->SetPoint(5,225,-0.005965391);
   gre->SetPointError(5,0,0.01450232);
   gre->SetPoint(6,235,0.02728318);
   gre->SetPointError(6,0,0.01640941);
   gre->SetPoint(7,245,-0.00696229);
   gre->SetPointError(7,0,0.0197094);
   gre->SetPoint(8,255,-0.009940051);
   gre->SetPointError(8,0,0.02357156);
   gre->SetPoint(9,265,-0.03884519);
   gre->SetPointError(9,0,0.02504903);
   
   TH1F *Graph_gr_ImT22_15_28_16069 = new TH1F("Graph_gr_ImT22_15_28_16069","",100,166,274);
   Graph_gr_ImT22_15_28_16069->SetMinimum(-0.0746529);
   Graph_gr_ImT22_15_28_16069->SetMaximum(0.05445127);
   Graph_gr_ImT22_15_28_16069->SetDirectory(0);
   Graph_gr_ImT22_15_28_16069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_16069->SetLineColor(ci);
   Graph_gr_ImT22_15_28_16069->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16069->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_16069->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16069->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_16069->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_16069->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_16069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_16069);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
