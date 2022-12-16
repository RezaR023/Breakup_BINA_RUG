{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:51:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(122.5,-112.3643,257.5,1011.278);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,14.30599);
   gre->SetPointError(0,0,0.4476402);
   gre->SetPoint(1,155,15.6616);
   gre->SetPointError(1,0,0.4637016);
   gre->SetPoint(2,165,16.21256);
   gre->SetPointError(2,0,0.4733328);
   gre->SetPoint(3,175,20.23947);
   gre->SetPointError(3,0,0.5202117);
   gre->SetPoint(4,185,27.85733);
   gre->SetPointError(4,0,0.603503);
   gre->SetPoint(5,195,51.40838);
   gre->SetPointError(5,0,0.8140219);
   gre->SetPoint(6,205,117.9219);
   gre->SetPointError(6,0,1.233511);
   gre->SetPoint(7,215,309.0578);
   gre->SetPointError(7,0,2.000038);
   gre->SetPoint(8,225,815.2285);
   gre->SetPointError(8,0,3.226089);
   gre->SetPoint(9,235,683.8987);
   gre->SetPointError(9,0,2.946398);
   
   TH1F *Graph_gr_crsection_28_25_18015 = new TH1F("Graph_gr_crsection_28_25_18015","",100,136,244);
   Graph_gr_crsection_28_25_18015->SetMinimum(0);
   Graph_gr_crsection_28_25_18015->SetMaximum(898.9142);
   Graph_gr_crsection_28_25_18015->SetDirectory(0);
   Graph_gr_crsection_28_25_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_25_18015->SetLineColor(ci);
   Graph_gr_crsection_28_25_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_25_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_25_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_25_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_25_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_25_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
