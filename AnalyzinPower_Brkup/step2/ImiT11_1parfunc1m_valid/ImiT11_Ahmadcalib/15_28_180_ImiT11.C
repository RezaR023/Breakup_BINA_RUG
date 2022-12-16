{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:17:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.1001624,287.5,0.07928036);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.02245985);
   gre->SetPointError(0,0,0.02145379);
   gre->SetPoint(1,185,0.008361764);
   gre->SetPointError(1,0,0.01707279);
   gre->SetPoint(2,195,-0.01597595);
   gre->SetPointError(2,0,0.01589256);
   gre->SetPoint(3,205,-0.0007153267);
   gre->SetPointError(3,0,0.01566512);
   gre->SetPoint(4,215,-0.01385094);
   gre->SetPointError(4,0,0.0159864);
   gre->SetPoint(5,225,0.001693452);
   gre->SetPointError(5,0,0.01812357);
   gre->SetPoint(6,235,-0.01068635);
   gre->SetPointError(6,0,0.02228072);
   gre->SetPoint(7,245,-0.04243385);
   gre->SetPointError(7,0,0.02782146);
   gre->SetPoint(8,255,-0.00183179);
   gre->SetPointError(8,0,0.03392737);
   gre->SetPoint(9,265,0.00975376);
   gre->SetPointError(9,0,0.03961947);
   
   TH1F *Graph_gr_ImiT11_15_28_1804 = new TH1F("Graph_gr_ImiT11_15_28_1804","",100,166,274);
   Graph_gr_ImiT11_15_28_1804->SetMinimum(-0.08221816);
   Graph_gr_ImiT11_15_28_1804->SetMaximum(0.06133608);
   Graph_gr_ImiT11_15_28_1804->SetDirectory(0);
   Graph_gr_ImiT11_15_28_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_1804->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
