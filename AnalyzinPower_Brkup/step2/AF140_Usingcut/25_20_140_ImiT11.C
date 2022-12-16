{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:05:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.1951099,255,0.161242);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.01538015);
   gre->SetPointError(0,0,0.05054122);
   gre->SetPoint(1,165,0.001057031);
   gre->SetPointError(1,0,0.04972902);
   gre->SetPoint(2,175,-0.001417674);
   gre->SetPointError(2,0,0.05146882);
   gre->SetPoint(3,185,-0.03012004);
   gre->SetPointError(3,0,0.05087038);
   gre->SetPoint(4,195,0.01034181);
   gre->SetPointError(4,0,0.05708552);
   gre->SetPoint(5,205,-0.07513996);
   gre->SetPointError(5,0,0.05867186);
   gre->SetPoint(6,215,0.01985034);
   gre->SetPointError(6,0,0.05310055);
   gre->SetPoint(7,225,0.04814904);
   gre->SetPointError(7,0,0.05370101);
   gre->SetPoint(8,235,-0.08894503);
   gre->SetPointError(8,0,0.04677285);
   
   TH1F *Graph_gr_ImiT11_25_20_14027 = new TH1F("Graph_gr_ImiT11_25_20_14027","",100,147,243);
   Graph_gr_ImiT11_25_20_14027->SetMinimum(-0.1594747);
   Graph_gr_ImiT11_25_20_14027->SetMaximum(0.1256068);
   Graph_gr_ImiT11_25_20_14027->SetDirectory(0);
   Graph_gr_ImiT11_25_20_14027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_14027->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_14027->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14027->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_14027->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_14027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_14027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_14027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
