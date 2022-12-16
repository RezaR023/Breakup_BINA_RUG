{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:53:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-0.4010975,310,0.6002058);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.09955416);
   gre->SetPointError(0,0,0.3337678);
   gre->SetPoint(1,145,-0.09106526);
   gre->SetPointError(1,0,0.09473736);
   gre->SetPoint(2,155,0.02919496);
   gre->SetPointError(2,0,0.05376628);
   gre->SetPoint(3,165,-0.04288214);
   gre->SetPointError(3,0,0.0507864);
   gre->SetPoint(4,175,0.08105101);
   gre->SetPointError(4,0,0.04952217);
   gre->SetPoint(5,185,0.07502771);
   gre->SetPointError(5,0,0.05144723);
   gre->SetPoint(6,195,0.09289368);
   gre->SetPointError(6,0,0.04461679);
   gre->SetPoint(7,205,0.1384105);
   gre->SetPointError(7,0,0.0371653);
   gre->SetPoint(8,215,0.103402);
   gre->SetPointError(8,0,0.02923442);
   gre->SetPoint(9,225,0.1234152);
   gre->SetPointError(9,0,0.02146521);
   gre->SetPoint(10,235,0.09380429);
   gre->SetPointError(10,0,0.01344474);
   gre->SetPoint(11,245,0.1038057);
   gre->SetPointError(11,0,0.008617394);
   gre->SetPoint(12,255,0.2711491);
   gre->SetPointError(12,0,0.05620996);
   gre->SetPoint(13,265,0.2711491);
   gre->SetPointError(13,0,0.05620996);
   gre->SetPoint(14,275,0.2711491);
   gre->SetPointError(14,0,0.05620996);
   
   TH1F *Graph_gr_iT11_25_20_1804 = new TH1F("Graph_gr_iT11_25_20_1804","",100,121,289);
   Graph_gr_iT11_25_20_1804->SetMinimum(-0.3009672);
   Graph_gr_iT11_25_20_1804->SetMaximum(0.5000755);
   Graph_gr_iT11_25_20_1804->SetDirectory(0);
   Graph_gr_iT11_25_20_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_20_1804->SetLineColor(ci);
   Graph_gr_iT11_25_20_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_20_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
