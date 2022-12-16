{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:47:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.1796493,267.5,0.1744856);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.04705537);
   gre->SetPointError(0,0,0.06840773);
   gre->SetPoint(1,165,-0.01875954);
   gre->SetPointError(1,0,0.04195478);
   gre->SetPoint(2,175,-0.05689113);
   gre->SetPointError(2,0,0.04661436);
   gre->SetPoint(3,185,0.05918253);
   gre->SetPointError(3,0,0.04660849);
   gre->SetPoint(4,195,-0.07967622);
   gre->SetPointError(4,0,0.04095057);
   gre->SetPoint(5,205,-0.02379383);
   gre->SetPointError(5,0,0.04417596);
   gre->SetPoint(6,215,0.002143168);
   gre->SetPointError(6,0,0.04001815);
   gre->SetPoint(7,225,0.04313583);
   gre->SetPointError(7,0,0.03969204);
   gre->SetPoint(8,235,0.005974351);
   gre->SetPointError(8,0,0.04165271);
   gre->SetPoint(9,245,-0.02647812);
   gre->SetPointError(9,0,0.03737751);
   
   TH1F *Graph_gr_ImiT11_20_25_14012 = new TH1F("Graph_gr_ImiT11_20_25_14012","",100,146,254);
   Graph_gr_ImiT11_20_25_14012->SetMinimum(-0.1442358);
   Graph_gr_ImiT11_20_25_14012->SetMaximum(0.1390721);
   Graph_gr_ImiT11_20_25_14012->SetDirectory(0);
   Graph_gr_ImiT11_20_25_14012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_14012->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_14012->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14012->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14012->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_14012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
