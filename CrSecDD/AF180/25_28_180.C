{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:51:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(122.5,-85.60627,257.5,770.4564);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,18.96047);
   gre->SetPointError(0,0,0.5463632);
   gre->SetPoint(1,155,17.72495);
   gre->SetPointError(1,0,0.5271332);
   gre->SetPoint(2,165,22.70535);
   gre->SetPointError(2,0,0.5610867);
   gre->SetPoint(3,175,34.5491);
   gre->SetPointError(3,0,0.6772454);
   gre->SetPoint(4,185,62.59491);
   gre->SetPointError(4,0,0.9038868);
   gre->SetPoint(5,195,120.6283);
   gre->SetPointError(5,0,1.248601);
   gre->SetPoint(6,205,237.7471);
   gre->SetPointError(6,0,1.749105);
   gre->SetPoint(7,215,428.6984);
   gre->SetPointError(7,0,2.338643);
   gre->SetPoint(8,225,621.3495);
   gre->SetPointError(8,0,2.804958);
   gre->SetPoint(9,235,498.3479);
   gre->SetPointError(9,0,2.509762);
   
   TH1F *Graph_gr_crsection_25_28_18012 = new TH1F("Graph_gr_crsection_25_28_18012","",100,136,244);
   Graph_gr_crsection_25_28_18012->SetMinimum(0);
   Graph_gr_crsection_25_28_18012->SetMaximum(684.8501);
   Graph_gr_crsection_25_28_18012->SetDirectory(0);
   Graph_gr_crsection_25_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_28_18012->SetLineColor(ci);
   Graph_gr_crsection_25_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
