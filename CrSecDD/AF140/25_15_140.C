{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:36:35 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(132.5,3.143689,267.5,85.98696);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,17.60479);
   gre->SetPointError(0,0,0.653889);
   gre->SetPoint(1,164.9668,25.80291);
   gre->SetPointError(1,0,0.8164904);
   gre->SetPoint(2,175,25.12215);
   gre->SetPointError(2,0,0.8104339);
   gre->SetPoint(3,185,24.58847);
   gre->SetPointError(3,0,0.7988508);
   gre->SetPoint(4,195,29.02564);
   gre->SetPointError(4,0,0.8509225);
   gre->SetPoint(5,205,35.45373);
   gre->SetPointError(5,0,0.9284741);
   gre->SetPoint(6,215,43.53142);
   gre->SetPointError(6,0,1.022241);
   gre->SetPoint(7,225,49.83426);
   gre->SetPointError(7,0,1.099545);
   gre->SetPoint(8,235,60.67306);
   gre->SetPointError(8,0,1.21489);
   gre->SetPoint(9,245,70.8834);
   gre->SetPointError(9,0,1.296348);
   
   TH1F *Graph_gr_crsection_25_15_1409 = new TH1F("Graph_gr_crsection_25_15_1409","",100,146,254);
   Graph_gr_crsection_25_15_1409->SetMinimum(11.42802);
   Graph_gr_crsection_25_15_1409->SetMaximum(77.70263);
   Graph_gr_crsection_25_15_1409->SetDirectory(0);
   Graph_gr_crsection_25_15_1409->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_15_1409->SetLineColor(ci);
   Graph_gr_crsection_25_15_1409->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1409->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1409->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1409->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_1409->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1409->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1409->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1409->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_15_1409->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_15_1409->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_15_1409->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_15_1409->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_15_1409);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
