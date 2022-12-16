{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:18:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-33.27774,257.5,302.6816);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,23.33369);
   gre->SetPointError(0,0,0.6182017);
   gre->SetPoint(1,155,27.4519);
   gre->SetPointError(1,0,0.6810376);
   gre->SetPoint(2,165,28.32648);
   gre->SetPointError(2,0,0.6851475);
   gre->SetPoint(3,175,30.47115);
   gre->SetPointError(3,0,0.7074962);
   gre->SetPoint(4,185,32.58038);
   gre->SetPointError(4,0,0.7302522);
   gre->SetPoint(5,195,39.73747);
   gre->SetPointError(5,0,0.802009);
   gre->SetPoint(6,205,50.54693);
   gre->SetPointError(6,0,0.9006993);
   gre->SetPoint(7,215,79.66141);
   gre->SetPointError(7,0,1.136407);
   gre->SetPoint(8,225,149.6793);
   gre->SetPointError(8,0,1.55802);
   gre->SetPoint(9,235,244.7353);
   gre->SetPointError(9,0,1.953074);
   
   TH1F *Graph_gr_crsection_28_20_16031 = new TH1F("Graph_gr_crsection_28_20_16031","",100,136,244);
   Graph_gr_crsection_28_20_16031->SetMinimum(0.3182005);
   Graph_gr_crsection_28_20_16031->SetMaximum(269.0857);
   Graph_gr_crsection_28_20_16031->SetDirectory(0);
   Graph_gr_crsection_28_20_16031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_20_16031->SetLineColor(ci);
   Graph_gr_crsection_28_20_16031->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_16031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_16031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_16031->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_16031->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_16031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_16031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_16031->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_20_16031->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_20_16031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_20_16031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_20_16031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_20_16031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
