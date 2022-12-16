{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:48:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.1422134,287.5,0.05577191);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.03457671);
   gre->SetPointError(0,0,0.03889047);
   gre->SetPoint(1,185,-0.006069759);
   gre->SetPointError(1,0,0.02884412);
   gre->SetPoint(2,195,-0.0465078);
   gre->SetPointError(2,0,0.02495067);
   gre->SetPoint(3,205,-0.0240345);
   gre->SetPointError(3,0,0.02554336);
   gre->SetPoint(4,215,-0.04422184);
   gre->SetPointError(4,0,0.0254147);
   gre->SetPoint(5,225,-0.01344745);
   gre->SetPointError(5,0,0.02764189);
   gre->SetPoint(6,235,-0.06194564);
   gre->SetPointError(6,0,0.03146574);
   gre->SetPoint(7,245,-0.07659193);
   gre->SetPointError(7,0,0.03262393);
   gre->SetPoint(8,255,-0.02586739);
   gre->SetPointError(8,0,0.0390503);
   gre->SetPoint(9,265,-0.03597541);
   gre->SetPointError(9,0,0.03544722);
   
   TH1F *Graph_gr_ImiT11_15_25_14035 = new TH1F("Graph_gr_ImiT11_15_25_14035","",100,166,274);
   Graph_gr_ImiT11_15_25_14035->SetMinimum(-0.1224149);
   Graph_gr_ImiT11_15_25_14035->SetMaximum(0.03597338);
   Graph_gr_ImiT11_15_25_14035->SetDirectory(0);
   Graph_gr_ImiT11_15_25_14035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_14035->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_14035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_14035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
