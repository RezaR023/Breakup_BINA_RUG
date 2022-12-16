{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:22:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1477704,267.5,0.1512421);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.04655914);
   gre->SetPointError(0,0,0.04594678);
   gre->SetPoint(1,165,0.05306439);
   gre->SetPointError(1,0,0.04834232);
   gre->SetPoint(2,175,-0.03001446);
   gre->SetPointError(2,0,0.04682257);
   gre->SetPoint(3,185,0.02024031);
   gre->SetPointError(3,0,0.04516005);
   gre->SetPoint(4,195,-0.05476881);
   gre->SetPointError(4,0,0.04316617);
   gre->SetPoint(5,205,0.01056602);
   gre->SetPointError(5,0,0.0417026);
   gre->SetPoint(6,215,0.03010927);
   gre->SetPointError(6,0,0.03092763);
   gre->SetPoint(7,225,-0.00645964);
   gre->SetPointError(7,0,0.0267137);
   gre->SetPoint(8,235,0.03762417);
   gre->SetPointError(8,0,0.01950276);
   gre->SetPoint(9,245,0.007265851);
   gre->SetPointError(9,0,0.01641981);
   
   TH1F *Graph_gr_ImiT11_25_20_160130 = new TH1F("Graph_gr_ImiT11_25_20_160130","",100,146,254);
   Graph_gr_ImiT11_25_20_160130->SetMinimum(-0.1178691);
   Graph_gr_ImiT11_25_20_160130->SetMaximum(0.1213409);
   Graph_gr_ImiT11_25_20_160130->SetDirectory(0);
   Graph_gr_ImiT11_25_20_160130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_160130->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_160130->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_160130->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_160130->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_160130->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_160130->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_160130->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_160130->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_160130);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
