{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:29:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2659617,257.5,0.1912626);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.07878901);
   gre->SetPointError(0,0,0.06919555);
   gre->SetPoint(1,155,-0.1319539);
   gre->SetPointError(1,0,0.05780375);
   gre->SetPoint(2,165,-0.01428635);
   gre->SetPointError(2,0,0.05521845);
   gre->SetPoint(3,175,-0.05820478);
   gre->SetPointError(3,0,0.04977731);
   gre->SetPoint(4,185,-0.06136147);
   gre->SetPointError(4,0,0.04354938);
   gre->SetPoint(5,195,-0.02093148);
   gre->SetPointError(5,0,0.03930381);
   gre->SetPoint(6,205,-0.03033707);
   gre->SetPointError(6,0,0.03287939);
   gre->SetPoint(7,215,0.01882361);
   gre->SetPointError(7,0,0.02716163);
   gre->SetPoint(8,225,0.05685975);
   gre->SetPointError(8,0,0.02115164);
   gre->SetPoint(9,235,0.09945697);
   gre->SetPointError(9,0,0.01560159);
   
   TH1F *Graph_gr_iT11_28_15_160144 = new TH1F("Graph_gr_iT11_28_15_160144","",100,136,244);
   Graph_gr_iT11_28_15_160144->SetMinimum(-0.2202393);
   Graph_gr_iT11_28_15_160144->SetMaximum(0.1455402);
   Graph_gr_iT11_28_15_160144->SetDirectory(0);
   Graph_gr_iT11_28_15_160144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_160144->SetLineColor(ci);
   Graph_gr_iT11_28_15_160144->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_160144->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_160144->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_160144->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_160144->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_160144->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_160144->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_160144->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_160144->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_160144->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_160144->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_160144->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_160144);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
