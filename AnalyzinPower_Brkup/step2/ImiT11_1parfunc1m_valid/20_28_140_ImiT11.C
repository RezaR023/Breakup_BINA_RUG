{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:37:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(145,-0.1938655,265,0.1058007);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,165,-0.08207218);
   gre->SetPointError(0,0,0.03627531);
   gre->SetPoint(1,175,-0.1063769);
   gre->SetPointError(1,0,0.03754425);
   gre->SetPoint(2,185,-0.09337529);
   gre->SetPointError(2,0,0.04068014);
   gre->SetPoint(3,195,-0.05723437);
   gre->SetPointError(3,0,0.03708175);
   gre->SetPoint(4,205,-0.02598639);
   gre->SetPointError(4,0,0.0344483);
   gre->SetPoint(5,215,-0.01308885);
   gre->SetPointError(5,0,0.03765879);
   gre->SetPoint(6,225,-0.05425597);
   gre->SetPointError(6,0,0.04007283);
   gre->SetPoint(7,235,0.02061887);
   gre->SetPointError(7,0,0.03523744);
   gre->SetPoint(8,245,-0.06871019);
   gre->SetPointError(8,0,0.03388171);
   
   TH1F *Graph_gr_ImiT11_20_28_14040 = new TH1F("Graph_gr_ImiT11_20_28_14040","",100,157,253);
   Graph_gr_ImiT11_20_28_14040->SetMinimum(-0.1638989);
   Graph_gr_ImiT11_20_28_14040->SetMaximum(0.07583406);
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
