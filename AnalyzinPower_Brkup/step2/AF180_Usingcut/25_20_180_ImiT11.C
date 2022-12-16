{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:07:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1448674,267.5,0.2579564);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.1293146);
   gre->SetPointError(0,0,0.06150453);
   gre->SetPoint(1,165,-0.02270739);
   gre->SetPointError(1,0,0.0550227);
   gre->SetPoint(2,175,0.09517746);
   gre->SetPointError(2,0,0.0596883);
   gre->SetPoint(3,185,0.03710695);
   gre->SetPointError(3,0,0.0619266);
   gre->SetPoint(4,195,-0.01779642);
   gre->SetPointError(4,0,0.04637959);
   gre->SetPoint(5,205,0.02559068);
   gre->SetPointError(5,0,0.04007405);
   gre->SetPoint(6,215,-0.01626179);
   gre->SetPointError(6,0,0.03033837);
   gre->SetPoint(7,225,0.02311265);
   gre->SetPointError(7,0,0.02187874);
   gre->SetPoint(8,235,0.001225584);
   gre->SetPointError(8,0,0.01356725);
   gre->SetPoint(9,245,0.005469368);
   gre->SetPointError(9,0,0.009063537);
   
   TH1F *Graph_gr_ImiT11_25_20_18049 = new TH1F("Graph_gr_ImiT11_25_20_18049","",100,146,254);
   Graph_gr_ImiT11_25_20_18049->SetMinimum(-0.104585);
   Graph_gr_ImiT11_25_20_18049->SetMaximum(0.217674);
   Graph_gr_ImiT11_25_20_18049->SetDirectory(0);
   Graph_gr_ImiT11_25_20_18049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_18049->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_18049->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18049->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_18049->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18049->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_18049->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18049->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_18049);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
