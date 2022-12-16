{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:25:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(150,20.97548,300,72.35642);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,30.70079);
   gre->SetPointError(0,0,1.161827);
   gre->SetPoint(1,184.8806,36.37186);
   gre->SetPointError(1,0,1.258332);
   gre->SetPoint(2,195,47.46726);
   gre->SetPointError(2,0,1.25841);
   gre->SetPoint(3,205,56.36973);
   gre->SetPointError(3,0,1.339819);
   gre->SetPoint(4,215,59.23515);
   gre->SetPointError(4,0,1.361793);
   gre->SetPoint(5,225,60.78096);
   gre->SetPointError(5,0,1.366087);
   gre->SetPoint(6,235,62.42925);
   gre->SetPointError(6,0,1.363674);
   gre->SetPoint(7,245,53.19688);
   gre->SetPointError(7,0,1.256619);
   gre->SetPoint(8,255,50.1404);
   gre->SetPointError(8,0,1.219983);
   gre->SetPoint(9,265,51.65041);
   gre->SetPointError(9,0,1.234152);
   gre->SetPoint(10,275,42.06978);
   gre->SetPointError(10,0,1.115985);
   
   TH1F *Graph_gr_crsection_15_20_1402 = new TH1F("Graph_gr_crsection_15_20_1402","",100,165,285);
   Graph_gr_crsection_15_20_1402->SetMinimum(26.11357);
   Graph_gr_crsection_15_20_1402->SetMaximum(67.21832);
   Graph_gr_crsection_15_20_1402->SetDirectory(0);
   Graph_gr_crsection_15_20_1402->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_20_1402->SetLineColor(ci);
   Graph_gr_crsection_15_20_1402->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1402->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1402->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1402->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_1402->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1402->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1402->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1402->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_20_1402->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_20_1402->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_20_1402->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_20_1402->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_20_1402);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
