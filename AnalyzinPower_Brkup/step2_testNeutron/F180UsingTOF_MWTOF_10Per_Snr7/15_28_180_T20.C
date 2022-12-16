{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:51:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(150,-0.5315216,270,0.3310044);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,0.05187615);
   gre->SetPointError(0,0,0.135374);
   gre->SetPoint(1,190,0.0539749);
   gre->SetPointError(1,0,0.06803186);
   gre->SetPoint(2,210,0.0431774);
   gre->SetPointError(2,0,0.06391531);
   gre->SetPoint(3,230,-0.2711611);
   gre->SetPointError(3,0,0.06400633);
   gre->SetPoint(4,250,-0.2943638);
   gre->SetPointError(4,0,0.0934034);
   
   TH1F *Graph_gr_T20_15_28_18012 = new TH1F("Graph_gr_T20_15_28_18012","",100,162,258);
   Graph_gr_T20_15_28_18012->SetMinimum(-0.4452689);
   Graph_gr_T20_15_28_18012->SetMaximum(0.2447518);
   Graph_gr_T20_15_28_18012->SetDirectory(0);
   Graph_gr_T20_15_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_18012->SetLineColor(ci);
   Graph_gr_T20_15_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
