{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:45:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(158.3202,-0.2037524,297.8698,0.2050151);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.5785,0.01384576);
   gre->SetPointError(0,0,0.0750268);
   gre->SetPoint(1,191.9155,-0.02004905);
   gre->SetPointError(1,0,0.0721328);
   gre->SetPoint(2,202.2525,0.06110139);
   gre->SetPointError(2,0,0.06098988);
   gre->SetPoint(3,212.5895,-0.002948759);
   gre->SetPointError(3,0,0.05798782);
   gre->SetPoint(4,222.9265,-0.001024317);
   gre->SetPointError(4,0,0.06575711);
   gre->SetPoint(5,233.2635,-0.07429172);
   gre->SetPointError(5,0,0.06133279);
   gre->SetPoint(6,243.6005,0.01614546);
   gre->SetPointError(6,0,0.06541711);
   gre->SetPoint(7,253.9375,-0.03054518);
   gre->SetPointError(7,0,0.06751423);
   gre->SetPoint(8,264.2745,0.06843781);
   gre->SetPointError(8,0,0.06844937);
   gre->SetPoint(9,274.6115,0.03659877);
   gre->SetPointError(9,0,0.06159392);
   
   TH1F *Graph_gr_T22_15_15_14027 = new TH1F("Graph_gr_T22_15_15_14027","",100,172.2752,283.9148);
   Graph_gr_T22_15_15_14027->SetMinimum(-0.1628757);
   Graph_gr_T22_15_15_14027->SetMaximum(0.1641383);
   Graph_gr_T22_15_15_14027->SetDirectory(0);
   Graph_gr_T22_15_15_14027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_14027->SetLineColor(ci);
   Graph_gr_T22_15_15_14027->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14027->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_14027->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14027->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_14027->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_14027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_14027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_14027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_14027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
