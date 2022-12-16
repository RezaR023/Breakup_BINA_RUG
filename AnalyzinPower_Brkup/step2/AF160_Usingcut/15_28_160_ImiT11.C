{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:07:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1084508,287.5,0.1093482);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.008678604);
   gre->SetPointError(0,0,0.02676334);
   gre->SetPoint(1,185,-0.004247026);
   gre->SetPointError(1,0,0.02132612);
   gre->SetPoint(2,195,0.01053977);
   gre->SetPointError(2,0,0.0189765);
   gre->SetPoint(3,205,0.01105774);
   gre->SetPointError(3,0,0.01731319);
   gre->SetPoint(4,215,0.03028152);
   gre->SetPointError(4,0,0.01695154);
   gre->SetPoint(5,225,-0.002597683);
   gre->SetPointError(5,0,0.01906082);
   gre->SetPoint(6,235,-0.007318697);
   gre->SetPointError(6,0,0.02124367);
   gre->SetPoint(7,245,-0.04874839);
   gre->SetPointError(7,0,0.02340255);
   gre->SetPoint(8,255,0.04627534);
   gre->SetPointError(8,0,0.02677306);
   gre->SetPoint(9,265,-0.01424901);
   gre->SetPointError(9,0,0.03030252);
   
   TH1F *Graph_gr_ImiT11_15_28_160100 = new TH1F("Graph_gr_ImiT11_15_28_160100","",100,166,274);
   Graph_gr_ImiT11_15_28_160100->SetMinimum(-0.08667088);
   Graph_gr_ImiT11_15_28_160100->SetMaximum(0.08756833);
   Graph_gr_ImiT11_15_28_160100->SetDirectory(0);
   Graph_gr_ImiT11_15_28_160100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_160100->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_160100->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_160100->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_160100->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_160100->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_160100->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_160100->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_160100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_160100);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
