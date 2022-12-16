{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:10:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.1518498,277.5,0.1968461);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.07716812);
   gre->SetPointError(0,0,0.06156198);
   gre->SetPoint(1,175,0.02432854);
   gre->SetPointError(1,0,0.03773277);
   gre->SetPoint(2,185,-0.03021985);
   gre->SetPointError(2,0,0.05120108);
   gre->SetPoint(3,195,-0.04498384);
   gre->SetPointError(3,0,0.04795262);
   gre->SetPoint(4,205,0.008987632);
   gre->SetPointError(4,0,0.04772122);
   gre->SetPoint(5,215,-0.0502215);
   gre->SetPointError(5,0,0.04351232);
   gre->SetPoint(6,225,-0.02595173);
   gre->SetPointError(6,0,0.04301977);
   gre->SetPoint(7,235,-0.01748656);
   gre->SetPointError(7,0,0.03563076);
   gre->SetPoint(8,245,0.005367699);
   gre->SetPointError(8,0,0.03253526);
   gre->SetPoint(9,255,-0.01245882);
   gre->SetPointError(9,0,0.02999841);
   
   TH1F *Graph_gr_T22_20_15_1404 = new TH1F("Graph_gr_T22_20_15_1404","",100,156,264);
   Graph_gr_T22_20_15_1404->SetMinimum(-0.1169802);
   Graph_gr_T22_20_15_1404->SetMaximum(0.1619765);
   Graph_gr_T22_20_15_1404->SetDirectory(0);
   Graph_gr_T22_20_15_1404->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_15_1404->SetLineColor(ci);
   Graph_gr_T22_20_15_1404->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_1404->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_1404->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_1404->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_1404->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_1404->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_1404->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_1404->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_1404->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_1404->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_1404->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_1404->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_15_1404);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
