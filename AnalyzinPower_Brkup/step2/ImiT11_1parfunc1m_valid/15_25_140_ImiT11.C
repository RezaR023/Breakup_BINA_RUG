{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:35:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(152.5,-0.2213961,287.5,0.08515778);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,175,-0.1070497);
   gre->SetPointError(0,0,0.06325407);
   gre->SetPoint(1,185,-0.02162071);
   gre->SetPointError(1,0,0.03935201);
   gre->SetPoint(2,195,-0.03912464);
   gre->SetPointError(2,0,0.03399656);
   gre->SetPoint(3,205,-0.04237744);
   gre->SetPointError(3,0,0.03227811);
   gre->SetPoint(4,215,-0.03795937);
   gre->SetPointError(4,0,0.0309813);
   gre->SetPoint(5,225,-0.01065495);
   gre->SetPointError(5,0,0.03067714);
   gre->SetPoint(6,235,-0.02319003);
   gre->SetPointError(6,0,0.03403799);
   gre->SetPoint(7,245,-0.08311642);
   gre->SetPointError(7,0,0.03654804);
   gre->SetPoint(8,255,-0.03939914);
   gre->SetPointError(8,0,0.03391662);
   gre->SetPoint(9,265,-0.005616068);
   gre->SetPointError(9,0,0.03968153);
   
   TH1F *Graph_gr_ImiT11_15_25_14035 = new TH1F("Graph_gr_ImiT11_15_25_14035","",100,166,274);
   Graph_gr_ImiT11_15_25_14035->SetMinimum(-0.1907407);
   Graph_gr_ImiT11_15_25_14035->SetMaximum(0.05450239);
   Graph_gr_ImiT11_15_25_14035->SetDirectory(0);
   Graph_gr_ImiT11_15_25_14035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_14035->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_14035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
