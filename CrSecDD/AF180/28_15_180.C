{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:51:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(122.5,-63.40586,257.5,570.6527);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,6.507697);
   gre->SetPointError(0,0,0.4225312);
   gre->SetPoint(1,155,11.96327);
   gre->SetPointError(1,0,0.5301443);
   gre->SetPoint(2,165,14.98508);
   gre->SetPointError(2,0,0.5958337);
   gre->SetPoint(3,175,16.94253);
   gre->SetPointError(3,0,0.6269324);
   gre->SetPoint(4,185,23.86481);
   gre->SetPointError(4,0,0.7255318);
   gre->SetPoint(5,195,36.68759);
   gre->SetPointError(5,0,0.8843081);
   gre->SetPoint(6,205,58.70869);
   gre->SetPointError(6,0,1.118621);
   gre->SetPoint(7,215,88.31642);
   gre->SetPointError(7,0,1.385098);
   gre->SetPoint(8,225,164.6801);
   gre->SetPointError(8,0,1.893859);
   gre->SetPoint(9,235,458.6077);
   gre->SetPointError(9,0,3.079044);
   
   TH1F *Graph_gr_crsection_28_15_18013 = new TH1F("Graph_gr_crsection_28_15_18013","",100,136,244);
   Graph_gr_crsection_28_15_18013->SetMinimum(0);
   Graph_gr_crsection_28_15_18013->SetMaximum(507.2469);
   Graph_gr_crsection_28_15_18013->SetDirectory(0);
   Graph_gr_crsection_28_15_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_15_18013->SetLineColor(ci);
   Graph_gr_crsection_28_15_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_15_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_15_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_15_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_15_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_15_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
