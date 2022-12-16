{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:22:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.09459375,267.5,0.1325904);
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
   gre->SetPoint(0,155,0.02164417);
   gre->SetPointError(0,0,0.046695);
   gre->SetPoint(1,165,0.02133779);
   gre->SetPointError(1,0,0.05168367);
   gre->SetPoint(2,175,0.0436266);
   gre->SetPointError(2,0,0.05109974);
   gre->SetPoint(3,185,-0.008435061);
   gre->SetPointError(3,0,0.04829467);
   gre->SetPoint(4,195,-0.01512053);
   gre->SetPointError(4,0,0.04017797);
   gre->SetPoint(5,205,-0.01926838);
   gre->SetPointError(5,0,0.03283977);
   gre->SetPoint(6,215,0.01319767);
   gre->SetPointError(6,0,0.02390417);
   gre->SetPoint(7,225,0.01204637);
   gre->SetPointError(7,0,0.01612129);
   gre->SetPoint(8,235,0.01664402);
   gre->SetPointError(8,0,0.01151799);
   gre->SetPoint(9,245,0.0002658255);
   gre->SetPointError(9,0,0.01065692);
   
   TH1F *Graph_gr_ImiT11_25_20_18010 = new TH1F("Graph_gr_ImiT11_25_20_18010","",100,146,254);
   Graph_gr_ImiT11_25_20_18010->SetMinimum(-0.07187534);
   Graph_gr_ImiT11_25_20_18010->SetMaximum(0.1098719);
   Graph_gr_ImiT11_25_20_18010->SetDirectory(0);
   Graph_gr_ImiT11_25_20_18010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_18010->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_18010->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_18010->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_18010->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_18010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_18010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_18010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
