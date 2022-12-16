{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:57:47 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.3036831,267.5,0.111988);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1027278);
   gre->SetPointError(0,0,0.04223874);
   gre->SetPoint(1,165,0.008736906);
   gre->SetPointError(1,0,0.03397257);
   gre->SetPoint(2,175,-0.05020581);
   gre->SetPointError(2,0,0.03387467);
   gre->SetPoint(3,185,-0.06961196);
   gre->SetPointError(3,0,0.03645513);
   gre->SetPoint(4,195,-0.07006189);
   gre->SetPointError(4,0,0.03596658);
   gre->SetPoint(5,205,-0.1757377);
   gre->SetPointError(5,0,0.03716034);
   gre->SetPoint(6,215,-0.09875492);
   gre->SetPointError(6,0,0.03720078);
   gre->SetPoint(7,225,-0.1981756);
   gre->SetPointError(7,0,0.03622901);
   gre->SetPoint(8,235,-0.1917299);
   gre->SetPointError(8,0,0.02755262);
   gre->SetPoint(9,245,-0.1772292);
   gre->SetPointError(9,0,0.03261852);
   
   TH1F *Graph_gr_ImT22_25_15_14090 = new TH1F("Graph_gr_ImT22_25_15_14090","",100,146,254);
   Graph_gr_ImT22_25_15_14090->SetMinimum(-0.262116);
   Graph_gr_ImT22_25_15_14090->SetMaximum(0.07042089);
   Graph_gr_ImT22_25_15_14090->SetDirectory(0);
   Graph_gr_ImT22_25_15_14090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_15_14090->SetLineColor(ci);
   Graph_gr_ImT22_25_15_14090->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14090->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_14090->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14090->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_14090->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14090->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_15_14090);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
