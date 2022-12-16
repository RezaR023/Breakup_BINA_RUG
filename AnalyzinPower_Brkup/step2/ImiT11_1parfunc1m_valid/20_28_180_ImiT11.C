{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:36:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(130,-0.2265502,280,0.1979554);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   

   
   TH1F *Graph_gr_ImiT11_20_28_1808 = new TH1F("Graph_gr_ImiT11_20_28_1808","",100,145,265);
   Graph_gr_ImiT11_20_28_1808->SetMinimum(-0.1840996);
   Graph_gr_ImiT11_20_28_1808->SetMaximum(0.1555048);
   Graph_gr_ImiT11_20_28_1808->SetDirectory(0);
   Graph_gr_ImiT11_20_28_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_1808->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
