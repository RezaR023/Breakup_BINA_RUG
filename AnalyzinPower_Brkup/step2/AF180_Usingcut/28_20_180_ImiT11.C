{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:19:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1805261,257.5,0.1525601);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.03289432);
   gre->SetPointError(0,0,0.07230054);
   gre->SetPoint(1,155,-0.06365648);
   gre->SetPointError(1,0,0.06135528);
   gre->SetPoint(2,165,0.03658867);
   gre->SetPointError(2,0,0.06045708);
   gre->SetPoint(3,175,-0.01206491);
   gre->SetPointError(3,0,0.05550378);
   gre->SetPoint(4,185,-0.02379193);
   gre->SetPointError(4,0,0.04696154);
   gre->SetPoint(5,195,-0.02579038);
   gre->SetPointError(5,0,0.04256358);
   gre->SetPoint(6,205,-0.008964347);
   gre->SetPointError(6,0,0.03375332);
   gre->SetPoint(7,215,-0.03791668);
   gre->SetPointError(7,0,0.02440133);
   gre->SetPoint(8,225,-0.002969544);
   gre->SetPointError(8,0,0.01531559);
   gre->SetPoint(9,235,0.002160294);
   gre->SetPointError(9,0,0.008364139);
   
   TH1F *Graph_gr_ImiT11_28_20_18069 = new TH1F("Graph_gr_ImiT11_28_20_18069","",100,136,244);
   Graph_gr_ImiT11_28_20_18069->SetMinimum(-0.1472175);
   Graph_gr_ImiT11_28_20_18069->SetMaximum(0.1192515);
   Graph_gr_ImiT11_28_20_18069->SetDirectory(0);
   Graph_gr_ImiT11_28_20_18069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_18069->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_18069->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18069->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18069->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18069->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18069->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18069->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_18069);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
