{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:20:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(142.5,-0.1041844,277.5,0.07981693);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.03240716);
   gre->SetPointError(0,0,0.04111036);
   gre->SetPoint(1,175,-0.03208639);
   gre->SetPointError(1,0,0.03561537);
   gre->SetPoint(2,185,0.02019966);
   gre->SetPointError(2,0,0.02895038);
   gre->SetPoint(3,195,-0.003548223);
   gre->SetPointError(3,0,0.02557771);
   gre->SetPoint(4,205,-0.008037867);
   gre->SetPointError(4,0,0.02124589);
   gre->SetPoint(5,215,-0.01853224);
   gre->SetPointError(5,0,0.01900446);
   gre->SetPoint(6,225,0.01462369);
   gre->SetPointError(6,0,0.01641904);
   gre->SetPoint(7,235,0.003239071);
   gre->SetPointError(7,0,0.01649857);
   gre->SetPoint(8,245,-0.02873177);
   gre->SetPointError(8,0,0.01838563);
   gre->SetPoint(9,255,-0.000975354);
   gre->SetPointError(9,0,0.02337108);
   
   TH1F *Graph_gr_ImiT11_20_25_1807 = new TH1F("Graph_gr_ImiT11_20_25_1807","",100,156,264);
   Graph_gr_ImiT11_20_25_1807->SetMinimum(-0.08578428);
   Graph_gr_ImiT11_20_25_1807->SetMaximum(0.0614168);
   Graph_gr_ImiT11_20_25_1807->SetDirectory(0);
   Graph_gr_ImiT11_20_25_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_1807->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
