{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:21:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(130,-0.1805394,280,0.1545823);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.07358951);
   gre->SetPointError(0,0,0.0510963);
   gre->SetPoint(1,165,0.06623267);
   gre->SetPointError(1,0,0.03249602);
   gre->SetPoint(2,175,0.02002666);
   gre->SetPointError(2,0,0.02636412);
   gre->SetPoint(3,185,-0.008368937);
   gre->SetPointError(3,0,0.02042799);
   gre->SetPoint(4,195,-0.03887884);
   gre->SetPointError(4,0,0.01741731);
   gre->SetPoint(5,205,-0.00053311);
   gre->SetPointError(5,0,0.01434523);
   gre->SetPoint(6,215,-0.01707761);
   gre->SetPointError(6,0,0.01386198);
   gre->SetPoint(7,225,-0.02495108);
   gre->SetPointError(7,0,0.01378998);
   gre->SetPoint(8,235,-0.006723611);
   gre->SetPointError(8,0,0.01578347);
   gre->SetPoint(9,245,-0.03967628);
   gre->SetPointError(9,0,0.0205122);
   gre->SetPoint(10,255,-0.006046966);
   gre->SetPointError(10,0,0.02850425);
   
   TH1F *Graph_gr_ImiT11_20_28_1808 = new TH1F("Graph_gr_ImiT11_20_28_1808","",100,145,265);
   Graph_gr_ImiT11_20_28_1808->SetMinimum(-0.1470273);
   Graph_gr_ImiT11_20_28_1808->SetMaximum(0.1210701);
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
