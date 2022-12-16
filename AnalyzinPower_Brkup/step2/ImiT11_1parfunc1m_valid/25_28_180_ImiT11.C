{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:39:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.1019808,257.5,0.1062647);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,-0.004479989);
   gre->SetPointError(0,0,0.05476256);
   gre->SetPoint(1,155,0.0196505);
   gre->SetPointError(1,0,0.05190664);
   gre->SetPoint(2,165,-0.02156115);
   gre->SetPointError(2,0,0.04571206);
   gre->SetPoint(3,175,0.02860148);
   gre->SetPointError(3,0,0.03520485);
   gre->SetPoint(4,185,-0.008469188);
   gre->SetPointError(4,0,0.02659162);
   gre->SetPoint(5,195,0.009086702);
   gre->SetPointError(5,0,0.0196154);
   gre->SetPoint(6,205,-0.004398155);
   gre->SetPointError(6,0,0.01399835);
   gre->SetPoint(7,215,0.001224988);
   gre->SetPointError(7,0,0.01031782);
   gre->SetPoint(8,225,-0.01298675);
   gre->SetPointError(8,0,0.008539521);
   gre->SetPoint(9,235,-0.001755899);
   gre->SetPointError(9,0,0.009631507);
   
   TH1F *Graph_gr_ImiT11_25_28_18012 = new TH1F("Graph_gr_ImiT11_25_28_18012","",100,136,244);
   Graph_gr_ImiT11_25_28_18012->SetMinimum(-0.08115624);
   Graph_gr_ImiT11_25_28_18012->SetMaximum(0.08544018);
   Graph_gr_ImiT11_25_28_18012->SetDirectory(0);
   Graph_gr_ImiT11_25_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_18012->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
