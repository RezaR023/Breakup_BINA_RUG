{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:17:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(142.5,-26.63463,277.5,239.7117);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.130649);
   gre->SetPointError(0,0,0.002514674);
   gre->SetPoint(1,175,55.51288);
   gre->SetPointError(1,0,0.9986185);
   gre->SetPoint(2,185,87.10297);
   gre->SetPointError(2,0,1.19091);
   gre->SetPoint(3,195,126.4359);
   gre->SetPointError(3,0,1.427452);
   gre->SetPoint(4,205,164.5998);
   gre->SetPointError(4,0,1.616567);
   gre->SetPoint(5,215,186.396);
   gre->SetPointError(5,0,1.717403);
   gre->SetPoint(6,225,191.9732);
   gre->SetPointError(6,0,1.744851);
   gre->SetPoint(7,235,182.3628);
   gre->SetPointError(7,0,1.6981);
   gre->SetPoint(8,245,144.6365);
   gre->SetPointError(8,0,1.516047);
   gre->SetPoint(9,255,127.7879);
   gre->SetPointError(9,0,1.421571);
   
   TH1F *Graph_gr_crsection_20_28_16025 = new TH1F("Graph_gr_crsection_20_28_16025","",100,156,264);
   Graph_gr_crsection_20_28_16025->SetMinimum(0);
   Graph_gr_crsection_20_28_16025->SetMaximum(213.077);
   Graph_gr_crsection_20_28_16025->SetDirectory(0);
   Graph_gr_crsection_20_28_16025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_28_16025->SetLineColor(ci);
   Graph_gr_crsection_20_28_16025->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_16025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_16025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_16025->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_16025->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_16025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_16025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_16025->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_28_16025->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_28_16025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_28_16025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_28_16025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_28_16025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
