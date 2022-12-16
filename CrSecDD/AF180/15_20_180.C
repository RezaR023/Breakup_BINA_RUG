{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:48:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(162.5,10.99036,297.5,129.0441);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,31.85875);
   gre->SetPointError(0,0,1.192772);
   gre->SetPoint(1,195,47.89189);
   gre->SetPointError(1,0,1.312183);
   gre->SetPoint(2,205,68.07574);
   gre->SetPointError(2,0,1.444576);
   gre->SetPoint(3,215,80.24795);
   gre->SetPointError(3,0,1.564873);
   gre->SetPoint(4,225,85.44059);
   gre->SetPointError(4,0,1.599356);
   gre->SetPoint(5,235,88.15088);
   gre->SetPointError(5,0,1.629746);
   gre->SetPoint(6,245,91.28437);
   gre->SetPointError(6,0,1.638355);
   gre->SetPoint(7,255,92.85456);
   gre->SetPointError(7,0,1.641107);
   gre->SetPoint(8,265,98.99875);
   gre->SetPointError(8,0,1.698158);
   gre->SetPoint(9,275,107.5929);
   gre->SetPointError(9,0,1.775514);
   
   TH1F *Graph_gr_crsection_15_20_1802 = new TH1F("Graph_gr_crsection_15_20_1802","",100,176,284);
   Graph_gr_crsection_15_20_1802->SetMinimum(22.79573);
   Graph_gr_crsection_15_20_1802->SetMaximum(117.2387);
   Graph_gr_crsection_15_20_1802->SetDirectory(0);
   Graph_gr_crsection_15_20_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_20_1802->SetLineColor(ci);
   Graph_gr_crsection_15_20_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_20_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
