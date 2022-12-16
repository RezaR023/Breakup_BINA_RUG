{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:39:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1912839,297.5,0.180321);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.008156646);
   gre->SetPointError(0,0,0.06317278);
   gre->SetPoint(1,195,-0.01784671);
   gre->SetPointError(1,0,0.06478155);
   gre->SetPoint(2,205,0.05835019);
   gre->SetPointError(2,0,0.06003662);
   gre->SetPoint(3,215,0.005201727);
   gre->SetPointError(3,0,0.0490074);
   gre->SetPoint(4,225,-6.592569e-05);
   gre->SetPointError(4,0,0.04818962);
   gre->SetPoint(5,235,-0.08020194);
   gre->SetPointError(5,0,0.04914782);
   gre->SetPoint(6,245,0.06301436);
   gre->SetPointError(6,0,0.04506742);
   gre->SetPoint(7,255,-0.04639826);
   gre->SetPointError(7,0,0.04475379);
   gre->SetPoint(8,265,-0.0290649);
   gre->SetPointError(8,0,0.03917222);
   gre->SetPoint(9,275,-0.02547915);
   gre->SetPointError(9,0,0.03339345);
   
   TH1F *Graph_Graph_gr_ImiT11_15_15_140165166 = new TH1F("Graph_Graph_gr_ImiT11_15_15_140165166","",100,176,284);
   Graph_Graph_gr_ImiT11_15_15_140165166->SetMinimum(-0.1541234);
   Graph_Graph_gr_ImiT11_15_15_140165166->SetMaximum(0.1431605);
   Graph_Graph_gr_ImiT11_15_15_140165166->SetDirectory(0);
   Graph_Graph_gr_ImiT11_15_15_140165166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_gr_ImiT11_15_15_140165166->SetLineColor(ci);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_ImiT11_15_15_140165166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_gr_ImiT11_15_15_140165166);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
