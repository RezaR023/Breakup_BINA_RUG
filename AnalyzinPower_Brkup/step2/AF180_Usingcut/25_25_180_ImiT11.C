{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:10:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1939756,267.5,0.1186281);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.09083417);
   gre->SetPointError(0,0,0.05104084);
   gre->SetPoint(1,165,-0.0002002901);
   gre->SetPointError(1,0,0.05412855);
   gre->SetPoint(2,175,0.01764429);
   gre->SetPointError(2,0,0.04888317);
   gre->SetPoint(3,185,-0.06481811);
   gre->SetPointError(3,0,0.04050119);
   gre->SetPoint(4,195,-0.04302082);
   gre->SetPointError(4,0,0.03534777);
   gre->SetPoint(5,205,-0.005425394);
   gre->SetPointError(5,0,0.02593191);
   gre->SetPoint(6,215,0.007322889);
   gre->SetPointError(6,0,0.01814466);
   gre->SetPoint(7,225,-0.007236851);
   gre->SetPointError(7,0,0.01298689);
   gre->SetPoint(8,235,0.002345244);
   gre->SetPointError(8,0,0.009374074);
   gre->SetPoint(9,245,-0.006101764);
   gre->SetPointError(9,0,0.009470658);
   
   TH1F *Graph_gr_ImiT11_25_25_18054 = new TH1F("Graph_gr_ImiT11_25_25_18054","",100,146,254);
   Graph_gr_ImiT11_25_25_18054->SetMinimum(-0.1627153);
   Graph_gr_ImiT11_25_25_18054->SetMaximum(0.0873677);
   Graph_gr_ImiT11_25_25_18054->SetDirectory(0);
   Graph_gr_ImiT11_25_25_18054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_25_18054->SetLineColor(ci);
   Graph_gr_ImiT11_25_25_18054->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18054->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_18054->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18054->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_18054->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18054->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_25_18054);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
