{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:15:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1495568,277.5,0.1409931);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.04862459);
   gre->SetPointError(0,0,0.04394354);
   gre->SetPoint(1,175,-0.06428858);
   gre->SetPointError(1,0,0.03684327);
   gre->SetPoint(2,185,-0.02646103);
   gre->SetPointError(2,0,0.03346215);
   gre->SetPoint(3,195,-0.002536604);
   gre->SetPointError(3,0,0.02805714);
   gre->SetPoint(4,205,-0.0005088256);
   gre->SetPointError(4,0,0.02492929);
   gre->SetPoint(5,215,-0.01094176);
   gre->SetPointError(5,0,0.02252596);
   gre->SetPoint(6,225,-0.007315426);
   gre->SetPointError(6,0,0.02126639);
   gre->SetPoint(7,235,0.008877308);
   gre->SetPointError(7,0,0.02021917);
   gre->SetPoint(8,245,-0.03746173);
   gre->SetPointError(8,0,0.01967756);
   gre->SetPoint(9,255,-0.0002448772);
   gre->SetPointError(9,0,0.02161117);
   
   TH1F *Graph_gr_ImiT11_20_25_160115 = new TH1F("Graph_gr_ImiT11_20_25_160115","",100,156,264);
   Graph_gr_ImiT11_20_25_160115->SetMinimum(-0.1205018);
   Graph_gr_ImiT11_20_25_160115->SetMaximum(0.1119381);
   Graph_gr_ImiT11_20_25_160115->SetDirectory(0);
   Graph_gr_ImiT11_20_25_160115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_160115->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_160115->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_160115->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_160115->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_160115->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_160115->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_160115->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_160115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_160115);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
