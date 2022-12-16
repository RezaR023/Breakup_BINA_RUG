{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:44:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.5417096,287.5,0.2123389);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.01539916);
   gre->SetPointError(0,0,0.1020633);
   gre->SetPoint(1,185,-0.05615259);
   gre->SetPointError(1,0,0.06348582);
   gre->SetPoint(2,195,-0.04835774);
   gre->SetPointError(2,0,0.06123035);
   gre->SetPoint(3,205,-0.01402216);
   gre->SetPointError(3,0,0.05817617);
   gre->SetPoint(4,215,-0.04929112);
   gre->SetPointError(4,0,0.05652248);
   gre->SetPoint(5,225,-0.09423058);
   gre->SetPointError(5,0,0.054683);
   gre->SetPoint(6,235,-0.1517764);
   gre->SetPointError(6,0,0.05444137);
   gre->SetPoint(7,245,-0.2582025);
   gre->SetPointError(7,0,0.05598869);
   gre->SetPoint(8,255,-0.3610559);
   gre->SetPointError(8,0,0.05497902);
   gre->SetPoint(9,265,-0.3160132);
   gre->SetPointError(9,0,0.0552021);
   
   TH1F *Graph_gr_T20_15_20_140173 = new TH1F("Graph_gr_T20_15_20_140173","",100,166,274);
   Graph_gr_T20_15_20_140173->SetMinimum(-0.4663048);
   Graph_gr_T20_15_20_140173->SetMaximum(0.136934);
   Graph_gr_T20_15_20_140173->SetDirectory(0);
   Graph_gr_T20_15_20_140173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_20_140173->SetLineColor(ci);
   Graph_gr_T20_15_20_140173->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_140173->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_140173->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_140173->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_140173->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_140173->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_140173->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_140173->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_20_140173->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_20_140173->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_20_140173->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_20_140173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_20_140173);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
