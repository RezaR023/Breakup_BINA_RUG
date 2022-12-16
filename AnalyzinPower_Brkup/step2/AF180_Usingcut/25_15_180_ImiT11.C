{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:05:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.2463209,267.5,0.1168907);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01426776);
   gre->SetPointError(0,0,0.0706232);
   gre->SetPoint(1,165,-0.05279898);
   gre->SetPointError(1,0,0.07033883);
   gre->SetPoint(2,175,-0.1193252);
   gre->SetPointError(2,0,0.06646047);
   gre->SetPoint(3,185,-0.02575216);
   gre->SetPointError(3,0,0.07686104);
   gre->SetPoint(4,195,0.002977984);
   gre->SetPointError(4,0,0.04929935);
   gre->SetPoint(5,205,-0.0390827);
   gre->SetPointError(5,0,0.03864491);
   gre->SetPoint(6,215,0.02001348);
   gre->SetPointError(6,0,0.03174978);
   gre->SetPoint(7,225,0.008110224);
   gre->SetPointError(7,0,0.02664114);
   gre->SetPoint(8,235,0.003249923);
   gre->SetPointError(8,0,0.01843383);
   gre->SetPoint(9,245,-0.0138022);
   gre->SetPointError(9,0,0.01111313);
   
   TH1F *Graph_gr_ImiT11_25_15_18044 = new TH1F("Graph_gr_ImiT11_25_15_18044","",100,146,254);
   Graph_gr_ImiT11_25_15_18044->SetMinimum(-0.2099998);
   Graph_gr_ImiT11_25_15_18044->SetMaximum(0.08056956);
   Graph_gr_ImiT11_25_15_18044->SetDirectory(0);
   Graph_gr_ImiT11_25_15_18044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_15_18044->SetLineColor(ci);
   Graph_gr_ImiT11_25_15_18044->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_18044->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_18044->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_18044->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_18044->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_18044->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_18044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_15_18044);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
