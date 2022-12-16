{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:33:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.3805571,310,0.2281087);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.02788428);
   gre->SetPointError(0,0,0.0182845);
   gre->SetPoint(1,145,0.02788428);
   gre->SetPointError(1,0,0.0182845);
   gre->SetPoint(2,155,0.02788428);
   gre->SetPointError(2,0,0.0182845);
   gre->SetPoint(3,165,0.02788428);
   gre->SetPointError(3,0,0.0182845);
   gre->SetPoint(4,175,-0.03920576);
   gre->SetPointError(4,0,0.06626057);
   gre->SetPoint(5,185,0.003643257);
   gre->SetPointError(5,0,0.04559383);
   gre->SetPoint(6,195,-0.08095036);
   gre->SetPointError(6,0,0.04318199);
   gre->SetPoint(7,205,-0.2375503);
   gre->SetPointError(7,0,0.04156249);
   gre->SetPoint(8,215,-0.1621437);
   gre->SetPointError(8,0,0.03758201);
   gre->SetPoint(9,225,-0.1201938);
   gre->SetPointError(9,0,0.03769355);
   gre->SetPoint(10,235,-0.08408662);
   gre->SetPointError(10,0,0.03701934);
   gre->SetPoint(11,245,0.09651693);
   gre->SetPointError(11,0,0.03014749);
   gre->SetPoint(12,255,-0.0958671);
   gre->SetPointError(12,0,0.02600066);
   gre->SetPoint(13,265,-0.0819821);
   gre->SetPointError(13,0,0.02538597);
   gre->SetPoint(14,275,-0.09562124);
   gre->SetPointError(14,0,0.01951683);
   
   TH1F *Graph_gr_ImiT11_15_15_1609 = new TH1F("Graph_gr_ImiT11_15_15_1609","",100,121,289);
   Graph_gr_ImiT11_15_15_1609->SetMinimum(-0.3196905);
   Graph_gr_ImiT11_15_15_1609->SetMaximum(0.1672421);
   Graph_gr_ImiT11_15_15_1609->SetDirectory(0);
   Graph_gr_ImiT11_15_15_1609->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_1609->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_1609->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1609->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1609->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1609->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1609->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1609->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1609->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_1609);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
