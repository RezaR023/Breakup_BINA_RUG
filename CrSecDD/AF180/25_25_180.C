{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:51:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(132.5,-75.73788,267.5,681.6408);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,16.51873);
   gre->SetPointError(0,0,0.5414912);
   gre->SetPoint(1,165,16.09337);
   gre->SetPointError(1,0,0.5093755);
   gre->SetPoint(2,175,19.07749);
   gre->SetPointError(2,0,0.5377278);
   gre->SetPoint(3,185,25.28277);
   gre->SetPointError(3,0,0.6085985);
   gre->SetPoint(4,195,38.757);
   gre->SetPointError(4,0,0.7489296);
   gre->SetPoint(5,205,70.40512);
   gre->SetPointError(5,0,1.005135);
   gre->SetPoint(6,215,138.3379);
   gre->SetPointError(6,0,1.408195);
   gre->SetPoint(7,225,284.6453);
   gre->SetPointError(7,0,2.017898);
   gre->SetPoint(8,235,549.4531);
   gre->SetPointError(8,0,2.784498);
   gre->SetPoint(9,245,540.185);
   gre->SetPointError(9,0,2.752534);
   
   TH1F *Graph_gr_crsection_25_25_18011 = new TH1F("Graph_gr_crsection_25_25_18011","",100,146,254);
   Graph_gr_crsection_25_25_18011->SetMinimum(0);
   Graph_gr_crsection_25_25_18011->SetMaximum(605.903);
   Graph_gr_crsection_25_25_18011->SetDirectory(0);
   Graph_gr_crsection_25_25_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_25_18011->SetLineColor(ci);
   Graph_gr_crsection_25_25_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_25_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
