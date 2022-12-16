{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:48:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.2163627,290,0.1535151);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.02276159);
   gre->SetPointError(0,0,0.1003378);
   gre->SetPoint(1,175,-0.09382581);
   gre->SetPointError(1,0,0.06089055);
   gre->SetPoint(2,185,-0.003109561);
   gre->SetPointError(2,0,0.06281144);
   gre->SetPoint(3,195,-0.03668169);
   gre->SetPointError(3,0,0.0488334);
   gre->SetPoint(4,205,0.01719181);
   gre->SetPointError(4,0,0.0488131);
   gre->SetPoint(5,215,0.04796357);
   gre->SetPointError(5,0,0.04390526);
   gre->SetPoint(6,225,-0.005289282);
   gre->SetPointError(6,0,0.03556913);
   gre->SetPoint(7,235,-0.008641105);
   gre->SetPointError(7,0,0.03141767);
   gre->SetPoint(8,245,0.01831908);
   gre->SetPointError(8,0,0.024091);
   gre->SetPoint(9,255,-0.01852707);
   gre->SetPointError(9,0,0.01899366);
   gre->SetPoint(10,265,0.0134157);
   gre->SetPointError(10,0,0.01474246);
   
   TH1F *Graph_gr_ImiT11_20_20_18029 = new TH1F("Graph_gr_ImiT11_20_20_18029","",100,155,275);
   Graph_gr_ImiT11_20_20_18029->SetMinimum(-0.1793749);
   Graph_gr_ImiT11_20_20_18029->SetMaximum(0.1165273);
   Graph_gr_ImiT11_20_20_18029->SetDirectory(0);
   Graph_gr_ImiT11_20_20_18029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_18029->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_18029->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_18029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_18029->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_18029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_18029->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_18029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_18029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_18029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
