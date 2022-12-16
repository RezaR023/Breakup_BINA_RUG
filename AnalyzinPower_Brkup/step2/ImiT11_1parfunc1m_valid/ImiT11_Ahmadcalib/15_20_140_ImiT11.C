{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:47:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.2422245,287.5,0.08999878);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.008043561);
   gre->SetPointError(0,0,0.04267179);
   gre->SetPoint(1,185,-0.06782727);
   gre->SetPointError(1,0,0.03416879);
   gre->SetPoint(2,195,-0.009265344);
   gre->SetPointError(2,0,0.030889);
   gre->SetPoint(3,205,-0.06954545);
   gre->SetPointError(3,0,0.0318391);
   gre->SetPoint(4,215,-0.09868992);
   gre->SetPointError(4,0,0.03345185);
   gre->SetPoint(5,225,-0.1090051);
   gre->SetPointError(5,0,0.03450492);
   gre->SetPoint(6,235,-0.0656938);
   gre->SetPointError(6,0,0.04142932);
   gre->SetPoint(7,245,-0.144499);
   gre->SetPointError(7,0,0.04235495);
   gre->SetPoint(8,255,-0.06790368);
   gre->SetPointError(8,0,0.04226913);
   gre->SetPoint(9,265,-0.05200143);
   gre->SetPointError(9,0,0.04073951);
   
   TH1F *Graph_gr_ImiT11_15_20_14034 = new TH1F("Graph_gr_ImiT11_15_20_14034","",100,166,274);
   Graph_gr_ImiT11_15_20_14034->SetMinimum(-0.2090021);
   Graph_gr_ImiT11_15_20_14034->SetMaximum(0.05677645);
   Graph_gr_ImiT11_15_20_14034->SetDirectory(0);
   Graph_gr_ImiT11_15_20_14034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_14034->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_14034->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14034->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_14034->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14034->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_14034->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14034->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_14034);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
