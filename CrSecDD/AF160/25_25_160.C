{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:17:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(122.5,-23.49846,257.5,257.4442);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,23.97506);
   gre->SetPointError(0,0,0.6497278);
   gre->SetPoint(1,155,32.927);
   gre->SetPointError(1,0,0.7326939);
   gre->SetPoint(2,165,31.74752);
   gre->SetPointError(2,0,0.692628);
   gre->SetPoint(3,175,31.54455);
   gre->SetPointError(3,0,0.6886782);
   gre->SetPoint(4,185,36.52241);
   gre->SetPointError(4,0,0.7318709);
   gre->SetPoint(5,195,48.65753);
   gre->SetPointError(5,0,0.8426936);
   gre->SetPoint(6,205,69.56596);
   gre->SetPointError(6,0,1.002542);
   gre->SetPoint(7,215,106.7287);
   gre->SetPointError(7,0,1.235196);
   gre->SetPoint(8,225,159.643);
   gre->SetPointError(8,0,1.511158);
   gre->SetPoint(9,235,208.8968);
   gre->SetPointError(9,0,1.723603);
   
   TH1F *Graph_gr_crsection_25_25_16028 = new TH1F("Graph_gr_crsection_25_25_16028","",100,136,244);
   Graph_gr_crsection_25_25_16028->SetMinimum(4.595816);
   Graph_gr_crsection_25_25_16028->SetMaximum(229.35);
   Graph_gr_crsection_25_25_16028->SetDirectory(0);
   Graph_gr_crsection_25_25_16028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_25_16028->SetLineColor(ci);
   Graph_gr_crsection_25_25_16028->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_16028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_16028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_16028->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_16028->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_16028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_16028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_16028->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_16028->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_16028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_16028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_16028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_25_16028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
