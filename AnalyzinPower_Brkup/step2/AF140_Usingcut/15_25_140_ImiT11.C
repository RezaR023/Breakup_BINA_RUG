{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:46:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1314171,287.5,0.1794875);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.06662763);
   gre->SetPointError(0,0,0.06104243);
   gre->SetPoint(1,185,0.02799095);
   gre->SetPointError(1,0,0.03843014);
   gre->SetPoint(2,195,0.0005426239);
   gre->SetPointError(2,0,0.03384199);
   gre->SetPoint(3,205,0.0264173);
   gre->SetPointError(3,0,0.03180637);
   gre->SetPoint(4,215,0.03017647);
   gre->SetPointError(4,0,0.03034696);
   gre->SetPoint(5,225,0.01363136);
   gre->SetPointError(5,0,0.03057475);
   gre->SetPoint(6,235,0.03022876);
   gre->SetPointError(6,0,0.03159666);
   gre->SetPoint(7,245,-0.004096121);
   gre->SetPointError(7,0,0.03535122);
   gre->SetPoint(8,255,0.0309192);
   gre->SetPointError(8,0,0.03457764);
   gre->SetPoint(9,265,-0.04243628);
   gre->SetPointError(9,0,0.03716341);
   
   TH1F *Graph_gr_ImiT11_15_25_140177 = new TH1F("Graph_gr_ImiT11_15_25_140177","",100,166,274);
   Graph_gr_ImiT11_15_25_140177->SetMinimum(-0.1003267);
   Graph_gr_ImiT11_15_25_140177->SetMaximum(0.148397);
   Graph_gr_ImiT11_15_25_140177->SetDirectory(0);
   Graph_gr_ImiT11_15_25_140177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_140177->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_140177->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_140177->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_140177->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_140177->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_140177->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_140177->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_140177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_140177);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
