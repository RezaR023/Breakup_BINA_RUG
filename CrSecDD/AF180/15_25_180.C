{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:49:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(150,1.732503,300,208.8786);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,59.78791);
   gre->SetPointError(0,0,1.33011);
   gre->SetPoint(1,185,86.26288);
   gre->SetPointError(1,0,1.521674);
   gre->SetPoint(2,195,128.2613);
   gre->SetPointError(2,0,1.77554);
   gre->SetPoint(3,205,158.8519);
   gre->SetPointError(3,0,1.948111);
   gre->SetPoint(4,215,172.339);
   gre->SetPointError(4,0,2.015271);
   gre->SetPoint(5,225,167.7151);
   gre->SetPointError(5,0,1.987422);
   gre->SetPoint(6,235,153.2953);
   gre->SetPointError(6,0,1.89205);
   gre->SetPoint(7,245,126.9408);
   gre->SetPointError(7,0,1.72192);
   gre->SetPoint(8,255,102.4884);
   gre->SetPointError(8,0,1.550081);
   gre->SetPoint(9,265,73.97144);
   gre->SetPointError(9,0,1.319106);
   gre->SetPoint(10,275,37.18904);
   gre->SetPointError(10,0,0.9321783);
   
   TH1F *Graph_gr_crsection_15_25_1803 = new TH1F("Graph_gr_crsection_15_25_1803","",100,165,285);
   Graph_gr_crsection_15_25_1803->SetMinimum(22.44712);
   Graph_gr_crsection_15_25_1803->SetMaximum(188.164);
   Graph_gr_crsection_15_25_1803->SetDirectory(0);
   Graph_gr_crsection_15_25_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_25_1803->SetLineColor(ci);
   Graph_gr_crsection_15_25_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_25_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
