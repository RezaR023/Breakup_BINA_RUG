{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:43:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1319606,257.5,0.06684665);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0382286);
   gre->SetPointError(0,0,0.03186739);
   gre->SetPoint(1,155,-0.07053962);
   gre->SetPointError(1,0,0.02828644);
   gre->SetPoint(2,165,0.004527645);
   gre->SetPointError(2,0,0.02918446);
   gre->SetPoint(3,175,-0.05228504);
   gre->SetPointError(3,0,0.02556013);
   gre->SetPoint(4,185,-0.02795271);
   gre->SetPointError(4,0,0.02436136);
   gre->SetPoint(5,195,-0.03629841);
   gre->SetPointError(5,0,0.01928856);
   gre->SetPoint(6,205,-0.008752759);
   gre->SetPointError(6,0,0.01688568);
   gre->SetPoint(7,215,-0.04034381);
   gre->SetPointError(7,0,0.01559217);
   gre->SetPoint(8,225,-0.0001567329);
   gre->SetPointError(8,0,0.01657165);
   gre->SetPoint(9,235,-0.009037545);
   gre->SetPointError(9,0,0.01909583);
   
   TH1F *Graph_gr_ImiT11_25_28_16028 = new TH1F("Graph_gr_ImiT11_25_28_16028","",100,136,244);
   Graph_gr_ImiT11_25_28_16028->SetMinimum(-0.1120799);
   Graph_gr_ImiT11_25_28_16028->SetMaximum(0.04696592);
   Graph_gr_ImiT11_25_28_16028->SetDirectory(0);
   Graph_gr_ImiT11_25_28_16028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_16028->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_16028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
