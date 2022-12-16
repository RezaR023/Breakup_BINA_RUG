{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:03:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.3947395,267.5,0.5919495);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1340338);
   gre->SetPointError(0,0,0.09625748);
   gre->SetPoint(1,165,0.1695503);
   gre->SetPointError(1,0,0.08581467);
   gre->SetPoint(2,175,0.04387878);
   gre->SetPointError(2,0,0.08179883);
   gre->SetPoint(3,185,0.07025264);
   gre->SetPointError(3,0,0.08383871);
   gre->SetPoint(4,195,0.183881);
   gre->SetPointError(4,0,0.08102986);
   gre->SetPoint(5,205,0.2881514);
   gre->SetPointError(5,0,0.07693302);
   gre->SetPoint(6,215,0.2351525);
   gre->SetPointError(6,0,0.06912397);
   gre->SetPoint(7,225,0.2120477);
   gre->SetPointError(7,0,0.06263107);
   gre->SetPoint(8,235,0.3681752);
   gre->SetPointError(8,0,0.05932616);
   gre->SetPoint(9,245,0.1711167);
   gre->SetPointError(9,0,0.053097);
   
   TH1F *Graph_gr_T20_25_15_14023 = new TH1F("Graph_gr_T20_25_15_14023","",100,146,254);
   Graph_gr_T20_25_15_14023->SetMinimum(-0.2960706);
   Graph_gr_T20_25_15_14023->SetMaximum(0.4932806);
   Graph_gr_T20_25_15_14023->SetDirectory(0);
   Graph_gr_T20_25_15_14023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_15_14023->SetLineColor(ci);
   Graph_gr_T20_25_15_14023->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_14023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_14023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_14023->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_14023->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_14023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_14023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_14023->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_14023->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_14023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_14023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_14023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_15_14023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
