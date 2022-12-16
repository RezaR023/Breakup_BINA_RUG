{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:54:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(155,-0.1951971,275,0.07778023);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.05034344);
   gre->SetPointError(0,0,0.02393864);
   gre->SetPoint(1,185,-0.06409865);
   gre->SetPointError(1,0,0.02092945);
   gre->SetPoint(2,195,-0.02331797);
   gre->SetPointError(2,0,0.01951036);
   gre->SetPoint(3,205,0.004631174);
   gre->SetPointError(3,0,0.02007199);
   gre->SetPoint(4,215,0.01023899);
   gre->SetPointError(4,0,0.02204501);
   gre->SetPoint(5,225,-0.03887833);
   gre->SetPointError(5,0,0.02423255);
   gre->SetPoint(6,235,-0.0006467297);
   gre->SetPointError(6,0,0.03005057);
   gre->SetPoint(7,245,-0.02582162);
   gre->SetPointError(7,0,0.03242299);
   gre->SetPoint(8,255,-0.1184674);
   gre->SetPointError(8,0,0.03123342);
   
   TH1F *Graph_gr_ImT22_15_28_14085 = new TH1F("Graph_gr_ImT22_15_28_14085","",100,167,263);
   Graph_gr_ImT22_15_28_14085->SetMinimum(-0.1678994);
   Graph_gr_ImT22_15_28_14085->SetMaximum(0.05048249);
   Graph_gr_ImT22_15_28_14085->SetDirectory(0);
   Graph_gr_ImT22_15_28_14085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_14085->SetLineColor(ci);
   Graph_gr_ImT22_15_28_14085->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14085->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_14085->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14085->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_14085->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14085->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_14085);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
