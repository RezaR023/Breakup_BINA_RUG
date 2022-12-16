{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:51:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(145,-0.1816735,265,0.093325);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1061106);
   gre->SetPointError(0,0,0.02972976);
   gre->SetPoint(1,175,-0.07917305);
   gre->SetPointError(1,0,0.02984259);
   gre->SetPoint(2,185,-0.03540052);
   gre->SetPointError(2,0,0.03147117);
   gre->SetPoint(3,195,-0.07863742);
   gre->SetPointError(3,0,0.02848309);
   gre->SetPoint(4,205,-0.04252409);
   gre->SetPointError(4,0,0.03169997);
   gre->SetPoint(5,215,-0.008668443);
   gre->SetPointError(5,0,0.03481743);
   gre->SetPoint(6,225,-0.02862349);
   gre->SetPointError(6,0,0.03317305);
   gre->SetPoint(7,235,0.01251037);
   gre->SetPointError(7,0,0.03498155);
   gre->SetPoint(8,245,-0.05624764);
   gre->SetPointError(8,0,0.03474715);
   
   TH1F *Graph_gr_ImiT11_20_28_14040 = new TH1F("Graph_gr_ImiT11_20_28_14040","",100,157,253);
   Graph_gr_ImiT11_20_28_14040->SetMinimum(-0.1541736);
   Graph_gr_ImiT11_20_28_14040->SetMaximum(0.06582515);
   Graph_gr_ImiT11_20_28_14040->SetDirectory(0);
   Graph_gr_ImiT11_20_28_14040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_14040->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_14040->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14040->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_14040->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14040->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_14040->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_14040->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_14040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_14040);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
