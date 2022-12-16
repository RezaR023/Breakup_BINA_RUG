{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:24:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.408965,297.5,0.2489347);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.04679306);
   gre->SetPointError(0,0,0.08527249);
   gre->SetPoint(1,195,-0.1043456);
   gre->SetPointError(1,0,0.09933824);
   gre->SetPoint(2,205,0.01718073);
   gre->SetPointError(2,0,0.09481155);
   gre->SetPoint(3,215,0.0410765);
   gre->SetPointError(3,0,0.0982082);
   gre->SetPoint(4,225,-0.004493817);
   gre->SetPointError(4,0,0.07472946);
   gre->SetPoint(5,235,-0.2005853);
   gre->SetPointError(5,0,0.09872984);
   gre->SetPoint(6,245,0.05950359);
   gre->SetPointError(6,0,0.07934093);
   gre->SetPoint(7,255,-0.009328558);
   gre->SetPointError(7,0,0.07611771);
   gre->SetPoint(8,265,-0.07572071);
   gre->SetPointError(8,0,0.07273011);
   gre->SetPoint(9,275,0.03047884);
   gre->SetPointError(9,0,0.08244654);
   
   TH1F *Graph_gr_T22_15_20_18022 = new TH1F("Graph_gr_T22_15_20_18022","",100,176,284);
   Graph_gr_T22_15_20_18022->SetMinimum(-0.3431751);
   Graph_gr_T22_15_20_18022->SetMaximum(0.1831447);
   Graph_gr_T22_15_20_18022->SetDirectory(0);
   Graph_gr_T22_15_20_18022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_20_18022->SetLineColor(ci);
   Graph_gr_T22_15_20_18022->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18022->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_18022->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18022->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_18022->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_20_18022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
