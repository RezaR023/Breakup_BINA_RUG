{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:19:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1933483,267.5,0.172309);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.01216967);
   gre->SetPointError(0,0,0.04090549);
   gre->SetPoint(1,165,0.04960463);
   gre->SetPointError(1,0,0.05452811);
   gre->SetPoint(2,175,0.05777002);
   gre->SetPointError(2,0,0.05359607);
   gre->SetPoint(3,185,-0.05589461);
   gre->SetPointError(3,0,0.04140281);
   gre->SetPoint(4,195,0.02108724);
   gre->SetPointError(4,0,0.03213199);
   gre->SetPoint(5,205,0.02582183);
   gre->SetPointError(5,0,0.03399667);
   gre->SetPoint(6,215,-0.01521591);
   gre->SetPointError(6,0,0.03077974);
   gre->SetPoint(7,225,-0.110366);
   gre->SetPointError(7,0,0.02203941);
   gre->SetPoint(8,235,-0.02444534);
   gre->SetPointError(8,0,0.0201716);
   gre->SetPoint(9,245,0.003050288);
   gre->SetPointError(9,0,0.01418205);
   
   TH1F *Graph_gr_ImiT11_25_15_160125 = new TH1F("Graph_gr_ImiT11_25_15_160125","",100,146,254);
   Graph_gr_ImiT11_25_15_160125->SetMinimum(-0.1567826);
   Graph_gr_ImiT11_25_15_160125->SetMaximum(0.1357432);
   Graph_gr_ImiT11_25_15_160125->SetDirectory(0);
   Graph_gr_ImiT11_25_15_160125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_15_160125->SetLineColor(ci);
   Graph_gr_ImiT11_25_15_160125->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_160125->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_160125->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_160125->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_160125->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_160125->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_160125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_15_160125);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
