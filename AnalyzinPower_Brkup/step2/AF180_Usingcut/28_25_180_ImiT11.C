{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:36:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1550654,257.5,0.1449932);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.03688115);
   gre->SetPointError(0,0,0.05810224);
   gre->SetPoint(1,155,-0.03721986);
   gre->SetPointError(1,0,0.05015389);
   gre->SetPoint(2,165,-0.01428346);
   gre->SetPointError(2,0,0.05272277);
   gre->SetPoint(3,175,-0.06113225);
   gre->SetPointError(3,0,0.04392342);
   gre->SetPoint(4,185,0.04608781);
   gre->SetPointError(4,0,0.03973046);
   gre->SetPoint(5,195,0.01425622);
   gre->SetPointError(5,0,0.02982104);
   gre->SetPoint(6,205,0.02135588);
   gre->SetPointError(6,0,0.02006477);
   gre->SetPoint(7,215,-0.01806819);
   gre->SetPointError(7,0,0.01227159);
   gre->SetPoint(8,225,0.005405895);
   gre->SetPointError(8,0,0.007553331);
   gre->SetPoint(9,235,-0.000461661);
   gre->SetPointError(9,0,0.008248406);
   
   TH1F *Graph_gr_ImiT11_28_25_18074 = new TH1F("Graph_gr_ImiT11_28_25_18074","",100,136,244);
   Graph_gr_ImiT11_28_25_18074->SetMinimum(-0.1250596);
   Graph_gr_ImiT11_28_25_18074->SetMaximum(0.1149873);
   Graph_gr_ImiT11_28_25_18074->SetDirectory(0);
   Graph_gr_ImiT11_28_25_18074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_18074->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_18074->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18074->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18074->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18074->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18074->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18074->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_18074);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
