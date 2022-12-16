{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:10:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.1979691,257.5,0.1736239);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,-0.01176096);
   gre->SetPointError(0,0,0.04816012);
   gre->SetPoint(1,155,-0.08896213);
   gre->SetPointError(1,0,0.04248411);
   gre->SetPoint(2,165,-0.05219958);
   gre->SetPointError(2,0,0.04207454);
   gre->SetPoint(3,175,-0.02733394);
   gre->SetPointError(3,0,0.0413338);
   gre->SetPoint(4,185,-0.09458666);
   gre->SetPointError(4,0,0.04145025);
   gre->SetPoint(5,195,-2.546969e-05);
   gre->SetPointError(5,0,0.03603266);
   gre->SetPoint(6,205,0.07982518);
   gre->SetPointError(6,0,0.03186657);
   gre->SetPoint(7,215,0.08311167);
   gre->SetPointError(7,0,0.02565375);
   gre->SetPoint(8,225,0.06272102);
   gre->SetPointError(8,0,0.01814171);
   gre->SetPoint(9,235,0.06415995);
   gre->SetPointError(9,0,0.01465473);
   
   TH1F *Graph_gr_ImiT11_28_20_16030 = new TH1F("Graph_gr_ImiT11_28_20_16030","",100,136,244);
   Graph_gr_ImiT11_28_20_16030->SetMinimum(-0.1608098);
   Graph_gr_ImiT11_28_20_16030->SetMaximum(0.1364646);
   Graph_gr_ImiT11_28_20_16030->SetDirectory(0);
   Graph_gr_ImiT11_28_20_16030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_16030->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_16030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
