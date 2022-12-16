{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:09:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.1161371,245,0.2037416);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.003959682);
   gre->SetPointError(0,0,0.04533337);
   gre->SetPoint(1,155,-0.02521165);
   gre->SetPointError(1,0,0.03761234);
   gre->SetPoint(2,165,0.1096412);
   gre->SetPointError(2,0,0.04078729);
   gre->SetPoint(3,175,-0.001491135);
   gre->SetPointError(3,0,0.03950674);
   gre->SetPoint(4,185,0.06434539);
   gre->SetPointError(4,0,0.04626879);
   gre->SetPoint(5,195,-2.872243e-05);
   gre->SetPointError(5,0,0.04085177);
   gre->SetPoint(6,205,0.07733302);
   gre->SetPointError(6,0,0.03769458);
   gre->SetPoint(7,215,-0.01000609);
   gre->SetPointError(7,0,0.03888497);
   gre->SetPoint(8,225,-0.01033693);
   gre->SetPointError(8,0,0.03365666);
   
   TH1F *Graph_gr_ImiT11_25_28_14037 = new TH1F("Graph_gr_ImiT11_25_28_14037","",100,137,233);
   Graph_gr_ImiT11_25_28_14037->SetMinimum(-0.08414924);
   Graph_gr_ImiT11_25_28_14037->SetMaximum(0.1717537);
   Graph_gr_ImiT11_25_28_14037->SetDirectory(0);
   Graph_gr_ImiT11_25_28_14037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_14037->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_14037->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14037->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_14037->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14037->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_14037->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14037->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_14037);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
