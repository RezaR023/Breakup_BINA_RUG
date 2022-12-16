{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:41:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.2246215,267.5,0.1758241);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1150339);
   gre->SetPointError(0,0,0.0428466);
   gre->SetPoint(1,165,-0.02099283);
   gre->SetPointError(1,0,0.04209087);
   gre->SetPoint(2,175,0.005484389);
   gre->SetPointError(2,0,0.03887166);
   gre->SetPoint(3,185,-0.001886268);
   gre->SetPointError(3,0,0.03523567);
   gre->SetPoint(4,195,0.0358754);
   gre->SetPointError(4,0,0.0305481);
   gre->SetPoint(5,205,0.03806462);
   gre->SetPointError(5,0,0.02795754);
   gre->SetPoint(6,215,0.02990932);
   gre->SetPointError(6,0,0.02292809);
   gre->SetPoint(7,225,0.02213626);
   gre->SetPointError(7,0,0.01990214);
   gre->SetPoint(8,235,0.09331792);
   gre->SetPointError(8,0,0.01576522);
   gre->SetPoint(9,245,0.07268229);
   gre->SetPointError(9,0,0.0131501);
   
   TH1F *Graph_gr_ImiT11_25_15_16025 = new TH1F("Graph_gr_ImiT11_25_15_16025","",100,146,254);
   Graph_gr_ImiT11_25_15_16025->SetMinimum(-0.1845769);
   Graph_gr_ImiT11_25_15_16025->SetMaximum(0.1357795);
   Graph_gr_ImiT11_25_15_16025->SetDirectory(0);
   Graph_gr_ImiT11_25_15_16025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_15_16025->SetLineColor(ci);
   Graph_gr_ImiT11_25_15_16025->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_16025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_16025->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_16025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_16025->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_16025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_16025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_15_16025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
