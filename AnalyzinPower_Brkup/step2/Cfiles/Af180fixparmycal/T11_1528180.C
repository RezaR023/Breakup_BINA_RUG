{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 08:51:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.107013,310,0.7015816);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.04018236);
   gre->SetPoint(1,145,0.1450412);
   gre->SetPointError(1,0,0.255108);
   gre->SetPoint(2,155,-0.3140874);
   gre->SetPointError(2,0,0.4914928);
   gre->SetPoint(3,165,-0.1977703);
   gre->SetPointError(3,0,0.05137248);
   gre->SetPoint(4,175,-0.1649881);
   gre->SetPointError(4,0,0.02538006);
   gre->SetPoint(5,185,-0.1487721);
   gre->SetPointError(5,0,0.02013619);
   gre->SetPoint(6,195,-0.1453372);
   gre->SetPointError(6,0,0.01705486);
   gre->SetPoint(7,205,-0.178285);
   gre->SetPointError(7,0,0.01657442);
   gre->SetPoint(8,215,-0.1821808);
   gre->SetPointError(8,0,0.01637969);
   gre->SetPoint(9,225,-0.2099676);
   gre->SetPointError(9,0,0.01693839);
   gre->SetPoint(10,235,-0.2373179);
   gre->SetPointError(10,0,0.01949399);
   gre->SetPoint(11,245,-0.2385932);
   gre->SetPointError(11,0,0.02235972);
   gre->SetPoint(12,255,-0.259695);
   gre->SetPointError(12,0,0.02659318);
   gre->SetPoint(13,265,-0.2495715);
   gre->SetPointError(13,0,0.030632);
   gre->SetPoint(14,275,-0.1470664);
   gre->SetPointError(14,0,0.05975965);
   
   TH1F *Graph_gr_iT11_15_28_1804 = new TH1F("Graph_gr_iT11_15_28_1804","",100,121,289);
   Graph_gr_iT11_15_28_1804->SetMinimum(-0.9261531);
   Graph_gr_iT11_15_28_1804->SetMaximum(0.5207221);
   Graph_gr_iT11_15_28_1804->SetDirectory(0);
   Graph_gr_iT11_15_28_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_1804->SetLineColor(ci);
   Graph_gr_iT11_15_28_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
