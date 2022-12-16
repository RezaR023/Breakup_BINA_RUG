{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:34:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2224189,310,0.2572511);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.004671392);
   gre->SetPointError(0,0,0.02875837);
   gre->SetPoint(1,145,0.004671392);
   gre->SetPointError(1,0,0.02875837);
   gre->SetPoint(2,155,-0.0543063);
   gre->SetPointError(2,0,0.08816761);
   gre->SetPoint(3,165,-0.0543063);
   gre->SetPointError(3,0,0.08816761);
   gre->SetPoint(4,175,0.08468166);
   gre->SetPointError(4,0,0.09262441);
   gre->SetPoint(5,185,0.09443067);
   gre->SetPointError(5,0,0.04008096);
   gre->SetPoint(6,195,0.0101029);
   gre->SetPointError(6,0,0.03259258);
   gre->SetPoint(7,205,0.03277168);
   gre->SetPointError(7,0,0.0305422);
   gre->SetPoint(8,215,0.004662646);
   gre->SetPointError(8,0,0.02881864);
   gre->SetPoint(9,225,0.02283046);
   gre->SetPointError(9,0,0.02899362);
   gre->SetPoint(10,235,-0.01521263);
   gre->SetPointError(10,0,0.02856021);
   gre->SetPoint(11,245,-0.07027886);
   gre->SetPointError(11,0,0.03093996);
   gre->SetPoint(12,255,-0.01341689);
   gre->SetPointError(12,0,0.03248446);
   gre->SetPoint(13,265,-0.01075964);
   gre->SetPointError(13,0,0.03004006);
   gre->SetPoint(14,275,-0.0150967);
   gre->SetPointError(14,0,0.02777319);
   
   TH1F *Graph_gr_ImiT11_15_20_16011 = new TH1F("Graph_gr_ImiT11_15_20_16011","",100,121,289);
   Graph_gr_ImiT11_15_20_16011->SetMinimum(-0.1744519);
   Graph_gr_ImiT11_15_20_16011->SetMaximum(0.2092841);
   Graph_gr_ImiT11_15_20_16011->SetDirectory(0);
   Graph_gr_ImiT11_15_20_16011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_16011->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_16011->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16011->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16011->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_16011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
