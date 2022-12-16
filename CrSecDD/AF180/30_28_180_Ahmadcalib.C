{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Apr 17 14:48:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,1094,578);
   Canvas_1->Range(112.5,-102.1509,247.5,919.3577);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_30_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,12.54774);
   gre->SetPointError(0,0,0.405792);
   gre->SetPoint(1,145,15.13843);
   gre->SetPointError(1,0,0.4257695);
   gre->SetPoint(2,155,16.46493);
   gre->SetPointError(2,0,0.4399432);
   gre->SetPoint(3,165,25.02709);
   gre->SetPointError(3,0,0.5324276);
   gre->SetPoint(4,175,45.47747);
   gre->SetPointError(4,0,0.7164727);
   gre->SetPoint(5,185,115.231);
   gre->SetPointError(5,0,1.133342);
   gre->SetPoint(6,195,289.3565);
   gre->SetPointError(6,0,1.784357);
   gre->SetPoint(7,205,653.4206);
   gre->SetPointError(7,0,2.658939);
   gre->SetPoint(8,215,741.1905);
   gre->SetPointError(8,0,2.828621);
   gre->SetPoint(9,225,169.1624);
   gre->SetPointError(9,0,1.363722);
   
   TH1F *Graph_gr_crsection_30_28_1802 = new TH1F("Graph_gr_crsection_30_28_1802","",100,126,234);
   Graph_gr_crsection_30_28_1802->SetMinimum(0);
   Graph_gr_crsection_30_28_1802->SetMaximum(817.2069);
   Graph_gr_crsection_30_28_1802->SetDirectory(0);
   Graph_gr_crsection_30_28_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_30_28_1802->SetLineColor(ci);
   Graph_gr_crsection_30_28_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_30_28_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_30_28_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_30_28_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
