{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:49:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(140,-52.05056,290,468.455);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,13.53664);
   gre->SetPointError(0,0,0.6183505);
   gre->SetPoint(1,175,17.50496);
   gre->SetPointError(1,0,0.7268328);
   gre->SetPoint(2,185,17.18359);
   gre->SetPointError(2,0,0.6726997);
   gre->SetPoint(3,195,23.45165);
   gre->SetPointError(3,0,0.7612767);
   gre->SetPoint(4,205,29.57944);
   gre->SetPointError(4,0,0.830132);
   gre->SetPoint(5,215,41.10814);
   gre->SetPointError(5,0,0.9646005);
   gre->SetPoint(6,225,58.4123);
   gre->SetPointError(6,0,1.141848);
   gre->SetPoint(7,235,81.32937);
   gre->SetPointError(7,0,1.333423);
   gre->SetPoint(8,245,130.336);
   gre->SetPointError(8,0,1.687228);
   gre->SetPoint(9,255,222.2596);
   gre->SetPointError(9,0,2.209731);
   gre->SetPoint(10,265,376.8738);
   gre->SetPointError(10,0,2.850059);
   
   TH1F *Graph_gr_crsection_20_20_1806 = new TH1F("Graph_gr_crsection_20_20_1806","",100,155,275);
   Graph_gr_crsection_20_20_1806->SetMinimum(0);
   Graph_gr_crsection_20_20_1806->SetMaximum(416.4044);
   Graph_gr_crsection_20_20_1806->SetDirectory(0);
   Graph_gr_crsection_20_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_20_1806->SetLineColor(ci);
   Graph_gr_crsection_20_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
