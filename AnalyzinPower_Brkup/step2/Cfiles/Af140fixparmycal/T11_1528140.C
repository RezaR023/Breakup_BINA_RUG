{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:18:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.01619,310,0.154422);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.03803047);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.03803047);
   gre->SetPoint(2,155,-0.4433743);
   gre->SetPointError(2,0,0.3777135);
   gre->SetPoint(3,165,-0.09269869);
   gre->SetPointError(3,0,0.05201874);
   gre->SetPoint(4,175,-0.1078449);
   gre->SetPointError(4,0,0.02991355);
   gre->SetPoint(5,185,-0.1730643);
   gre->SetPointError(5,0,0.02532215);
   gre->SetPoint(6,195,-0.1064468);
   gre->SetPointError(6,0,0.02255296);
   gre->SetPoint(7,205,-0.1352233);
   gre->SetPointError(7,0,0.02264195);
   gre->SetPoint(8,215,-0.1015019);
   gre->SetPointError(8,0,0.02255715);
   gre->SetPoint(9,225,-0.1373528);
   gre->SetPointError(9,0,0.02412567);
   gre->SetPoint(10,235,-0.1759121);
   gre->SetPointError(10,0,0.02725929);
   gre->SetPoint(11,245,-0.1622982);
   gre->SetPointError(11,0,0.03119072);
   gre->SetPoint(12,255,-0.1162912);
   gre->SetPointError(12,0,0.03069876);
   gre->SetPoint(13,265,-0.09701283);
   gre->SetPointError(13,0,0.03189709);
   gre->SetPoint(14,275,-0.1082493);
   gre->SetPointError(14,0,0.02702172);
   
   TH1F *Graph_gr_iT11_15_28_14033 = new TH1F("Graph_gr_iT11_15_28_14033","",100,121,289);
   Graph_gr_iT11_15_28_14033->SetMinimum(-0.8991286);
   Graph_gr_iT11_15_28_14033->SetMaximum(0.03736084);
   Graph_gr_iT11_15_28_14033->SetDirectory(0);
   Graph_gr_iT11_15_28_14033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_14033->SetLineColor(ci);
   Graph_gr_iT11_15_28_14033->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_14033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_14033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_14033->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_14033->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_14033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_14033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_14033->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_14033->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_14033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_14033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_14033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_14033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
