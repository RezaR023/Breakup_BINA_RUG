{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:03:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.2762737,267.5,0.07924182);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1667954);
   gre->SetPointError(0,0,0.05022574);
   gre->SetPoint(1,165,-0.08241741);
   gre->SetPointError(1,0,0.04978271);
   gre->SetPoint(2,175,-0.09644078);
   gre->SetPointError(2,0,0.04920435);
   gre->SetPoint(3,185,-0.03064879);
   gre->SetPointError(3,0,0.05063802);
   gre->SetPoint(4,195,-0.063658);
   gre->SetPointError(4,0,0.04754021);
   gre->SetPoint(5,205,-0.1374448);
   gre->SetPointError(5,0,0.04413962);
   gre->SetPoint(6,215,-0.1235618);
   gre->SetPointError(6,0,0.0402813);
   gre->SetPoint(7,225,-0.1368184);
   gre->SetPointError(7,0,0.03475946);
   gre->SetPoint(8,235,-0.04550316);
   gre->SetPointError(8,0,0.03455781);
   gre->SetPoint(9,245,-0.02606169);
   gre->SetPointError(9,0,0.03179946);
   
   TH1F *Graph_gr_T22_25_15_14024 = new TH1F("Graph_gr_T22_25_15_14024","",100,146,254);
   Graph_gr_T22_25_15_14024->SetMinimum(-0.2407221);
   Graph_gr_T22_25_15_14024->SetMaximum(0.04369026);
   Graph_gr_T22_25_15_14024->SetDirectory(0);
   Graph_gr_T22_25_15_14024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_15_14024->SetLineColor(ci);
   Graph_gr_T22_25_15_14024->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_14024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_14024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_14024->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_15_14024->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_14024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_14024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_14024->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_15_14024->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_14024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_14024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_14024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_15_14024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
