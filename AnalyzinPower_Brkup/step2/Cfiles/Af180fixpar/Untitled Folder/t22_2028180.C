{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:58:08 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(136.702,-0.2160899,276.778,0.1519641);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,160.048,-0.06691731);
   gre->SetPointError(0,0,0.05155929);
   gre->SetPoint(1,170.424,-0.06466209);
   gre->SetPointError(1,0,0.04311177);
   gre->SetPoint(2,180.8,-0.119083);
   gre->SetPointError(2,0,0.0356646);
   gre->SetPoint(3,191.176,-0.0440745);
   gre->SetPointError(3,0,0.02713601);
   gre->SetPoint(4,201.552,-0.06700933);
   gre->SetPointError(4,0,0.02354219);
   gre->SetPoint(5,211.928,-0.05980717);
   gre->SetPointError(5,0,0.02084463);
   gre->SetPoint(6,222.304,-0.006512233);
   gre->SetPointError(6,0,0.02048125);
   gre->SetPoint(7,232.68,-0.01055729);
   gre->SetPointError(7,0,0.02113271);
   gre->SetPoint(8,243.056,-0.06446487);
   gre->SetPointError(8,0,0.02739794);
   gre->SetPoint(9,253.432,0.05243461);
   gre->SetPointError(9,0,0.03818714);
   
   TH1F *Graph_gr_T22_20_28_18018 = new TH1F("Graph_gr_T22_20_28_18018","",100,150.7096,262.7704);
   Graph_gr_T22_20_28_18018->SetMinimum(-0.1792845);
   Graph_gr_T22_20_28_18018->SetMaximum(0.1151587);
   Graph_gr_T22_20_28_18018->SetDirectory(0);
   Graph_gr_T22_20_28_18018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_18018->SetLineColor(ci);
   Graph_gr_T22_20_28_18018->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18018->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_18018->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18018->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_18018->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_18018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_18018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_18018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_18018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
