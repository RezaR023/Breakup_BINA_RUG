{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:16:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.9922776,257.5,0.8328199);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.5761864);
   gre->SetPointError(0,0,0.1119083);
   gre->SetPoint(1,155,0.05205265);
   gre->SetPointError(1,0,0.1123534);
   gre->SetPoint(2,165,0.2132503);
   gre->SetPointError(2,0,0.1099218);
   gre->SetPoint(3,175,0.08179296);
   gre->SetPointError(3,0,0.09595641);
   gre->SetPoint(4,185,0.2494334);
   gre->SetPointError(4,0,0.08751863);
   gre->SetPoint(5,195,0.297299);
   gre->SetPointError(5,0,0.07329757);
   gre->SetPoint(6,205,0.2104167);
   gre->SetPointError(6,0,0.05683955);
   gre->SetPoint(7,215,0.4025889);
   gre->SetPointError(7,0,0.04805302);
   gre->SetPoint(8,225,0.4595466);
   gre->SetPointError(8,0,0.03549753);
   gre->SetPoint(9,235,0.5065284);
   gre->SetPointError(9,0,0.02210862);
   
   TH1F *Graph_gr_T20_28_15_18065 = new TH1F("Graph_gr_T20_28_15_18065","",100,136,244);
   Graph_gr_T20_28_15_18065->SetMinimum(-0.8097678);
   Graph_gr_T20_28_15_18065->SetMaximum(0.6503102);
   Graph_gr_T20_28_15_18065->SetDirectory(0);
   Graph_gr_T20_28_15_18065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_15_18065->SetLineColor(ci);
   Graph_gr_T20_28_15_18065->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18065->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18065->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18065->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18065->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18065->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18065->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18065->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18065->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18065->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18065->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_15_18065);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
