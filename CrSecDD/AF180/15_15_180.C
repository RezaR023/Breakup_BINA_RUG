{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:48:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(162.5,-43.97876,297.5,395.8088);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,22.2562);
   gre->SetPointError(0,0,1.149397);
   gre->SetPoint(1,195,27.22791);
   gre->SetPointError(1,0,1.109082);
   gre->SetPoint(2,205,33.90943);
   gre->SetPointError(2,0,1.208483);
   gre->SetPoint(3,215,39.21183);
   gre->SetPointError(3,0,1.285781);
   gre->SetPoint(4,225,54.49271);
   gre->SetPointError(4,0,1.476244);
   gre->SetPoint(5,235,71.49768);
   gre->SetPointError(5,0,1.689018);
   gre->SetPoint(6,245,98.31938);
   gre->SetPointError(6,0,1.962097);
   gre->SetPoint(7,255,129.2125);
   gre->SetPointError(7,0,2.237152);
   gre->SetPoint(8,265,189.9926);
   gre->SetPointError(8,0,2.702309);
   gre->SetPoint(9,275,318.2708);
   gre->SetPointError(9,0,3.493454);
   
   TH1F *Graph_gr_crsection_15_15_1801 = new TH1F("Graph_gr_crsection_15_15_1801","",100,176,284);
   Graph_gr_crsection_15_15_1801->SetMinimum(0);
   Graph_gr_crsection_15_15_1801->SetMaximum(351.83);
   Graph_gr_crsection_15_15_1801->SetDirectory(0);
   Graph_gr_crsection_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_15_1801->SetLineColor(ci);
   Graph_gr_crsection_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
