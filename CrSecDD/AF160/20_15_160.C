{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:16:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(140,-86.69841,290,780.2856);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,25.52969);
   gre->SetPointError(0,0,0.9282924);
   gre->SetPoint(1,175,35.61902);
   gre->SetPointError(1,0,1.058892);
   gre->SetPoint(2,185,30.83005);
   gre->SetPointError(2,0,0.9892621);
   gre->SetPoint(3,195,34.6899);
   gre->SetPointError(3,0,1.050249);
   gre->SetPoint(4,205,51.5268);
   gre->SetPointError(4,0,1.237179);
   gre->SetPoint(5,215,79.23734);
   gre->SetPointError(5,0,1.526808);
   gre->SetPoint(6,225,118.9588);
   gre->SetPointError(6,0,1.854395);
   gre->SetPoint(7,235,165.5979);
   gre->SetPointError(7,0,2.188521);
   gre->SetPoint(8,245,245.7865);
   gre->SetPointError(8,0,2.682576);
   gre->SetPoint(9,255,402.9249);
   gre->SetPointError(9,0,3.429163);
   gre->SetPoint(10,265,628.5495);
   gre->SetPointError(10,0,4.220838);
   
   TH1F *Graph_gr_crsection_20_15_16022 = new TH1F("Graph_gr_crsection_20_15_16022","",100,155,275);
   Graph_gr_crsection_20_15_16022->SetMinimum(0);
   Graph_gr_crsection_20_15_16022->SetMaximum(693.5872);
   Graph_gr_crsection_20_15_16022->SetDirectory(0);
   Graph_gr_crsection_20_15_16022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_15_16022->SetLineColor(ci);
   Graph_gr_crsection_20_15_16022->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_16022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_16022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_16022->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_16022->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_16022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_16022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_16022->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_15_16022->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_15_16022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_15_16022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_15_16022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_15_16022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
