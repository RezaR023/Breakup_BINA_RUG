{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:44:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1752974,287.5,0.1317992);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.03323419);
   gre->SetPointError(0,0,0.08136974);
   gre->SetPoint(1,185,0.03586609);
   gre->SetPointError(1,0,0.04475034);
   gre->SetPoint(2,195,-0.07953609);
   gre->SetPointError(2,0,0.04457853);
   gre->SetPoint(3,205,-0.06108849);
   gre->SetPointError(3,0,0.03691997);
   gre->SetPoint(4,215,-0.0439092);
   gre->SetPointError(4,0,0.04435247);
   gre->SetPoint(5,225,-0.02027779);
   gre->SetPointError(5,0,0.04070767);
   gre->SetPoint(6,235,-0.01008949);
   gre->SetPointError(6,0,0.03849208);
   gre->SetPoint(7,245,0.009308325);
   gre->SetPointError(7,0,0.04406805);
   gre->SetPoint(8,255,-0.02429572);
   gre->SetPointError(8,0,0.04375711);
   gre->SetPoint(9,265,0.03208046);
   gre->SetPointError(9,0,0.04442008);
   
   TH1F *Graph_gr_ImiT11_15_20_140172 = new TH1F("Graph_gr_ImiT11_15_20_140172","",100,166,274);
   Graph_gr_ImiT11_15_20_140172->SetMinimum(-0.1445877);
   Graph_gr_ImiT11_15_20_140172->SetMaximum(0.1010895);
   Graph_gr_ImiT11_15_20_140172->SetDirectory(0);
   Graph_gr_ImiT11_15_20_140172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_140172->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_140172->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_140172->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_140172->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_140172->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_140172->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_140172->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_140172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_140172);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
