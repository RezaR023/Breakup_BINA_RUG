{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:17:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1250671,297.5,0.1383075);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.04410686);
   gre->SetPointError(0,0,0.05030485);
   gre->SetPoint(1,195,-0.01503201);
   gre->SetPointError(1,0,0.03963735);
   gre->SetPoint(2,205,-0.001882575);
   gre->SetPointError(2,0,0.03499106);
   gre->SetPoint(3,215,-0.04852754);
   gre->SetPointError(3,0,0.03264377);
   gre->SetPoint(4,225,0.008978123);
   gre->SetPointError(4,0,0.03321782);
   gre->SetPoint(5,235,-0.02414569);
   gre->SetPointError(5,0,0.03255818);
   gre->SetPoint(6,245,0.0171261);
   gre->SetPointError(6,0,0.03176271);
   gre->SetPoint(7,255,-0.04367183);
   gre->SetPointError(7,0,0.03375824);
   gre->SetPoint(8,265,-0.01959772);
   gre->SetPointError(8,0,0.03160808);
   gre->SetPoint(9,275,0.03238815);
   gre->SetPointError(9,0,0.03069213);
   
   TH1F *Graph_gr_ImiT11_15_20_18010 = new TH1F("Graph_gr_ImiT11_15_20_18010","",100,176,284);
   Graph_gr_ImiT11_15_20_18010->SetMinimum(-0.09872962);
   Graph_gr_ImiT11_15_20_18010->SetMaximum(0.11197);
   Graph_gr_ImiT11_15_20_18010->SetDirectory(0);
   Graph_gr_ImiT11_15_20_18010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_18010->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_18010->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_18010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_18010->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_18010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_18010->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_18010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_18010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_18010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
