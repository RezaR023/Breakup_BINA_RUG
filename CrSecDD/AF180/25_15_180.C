{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:50:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(132.5,-94.51199,267.5,850.6079);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,11.38445);
   gre->SetPointError(0,0,0.5408832);
   gre->SetPoint(1,165,15.36897);
   gre->SetPointError(1,0,0.6210509);
   gre->SetPoint(2,175,16.29641);
   gre->SetPointError(2,0,0.6613554);
   gre->SetPoint(3,185,18.64989);
   gre->SetPointError(3,0,0.6876781);
   gre->SetPoint(4,195,32.28579);
   gre->SetPointError(4,0,0.8891443);
   gre->SetPoint(5,205,51.09496);
   gre->SetPointError(5,0,1.1041);
   gre->SetPoint(6,215,80.70602);
   gre->SetPointError(6,0,1.376298);
   gre->SetPoint(7,225,119.7666);
   gre->SetPointError(7,0,1.689263);
   gre->SetPoint(8,235,227.2307);
   gre->SetPointError(8,0,2.338452);
   gre->SetPoint(9,245,684.3822);
   gre->SetPointError(9,0,3.963485);
   
   TH1F *Graph_gr_crsection_25_15_1809 = new TH1F("Graph_gr_crsection_25_15_1809","",100,146,254);
   Graph_gr_crsection_25_15_1809->SetMinimum(0);
   Graph_gr_crsection_25_15_1809->SetMaximum(756.0959);
   Graph_gr_crsection_25_15_1809->SetDirectory(0);
   Graph_gr_crsection_25_15_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_15_1809->SetLineColor(ci);
   Graph_gr_crsection_25_15_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_15_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
