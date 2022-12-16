{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:45:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.946297,290,0.8334875);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T20_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.5241173);
   gre->SetPointError(0,0,0.1255489);
   gre->SetPoint(1,175,-0.09091872);
   gre->SetPointError(1,0,0.09836042);
   gre->SetPoint(2,185,-0.08841945);
   gre->SetPointError(2,0,0.101865);
   gre->SetPoint(3,195,-0.2064694);
   gre->SetPointError(3,0,0.08470467);
   gre->SetPoint(4,205,-0.2438212);
   gre->SetPointError(4,0,0.06845989);
   gre->SetPoint(5,215,0.1612057);
   gre->SetPointError(5,0,0.06564799);
   gre->SetPoint(6,225,0.2913155);
   gre->SetPointError(6,0,0.05539505);
   gre->SetPoint(7,235,0.3851847);
   gre->SetPointError(7,0,0.04549086);
   gre->SetPoint(8,245,0.4324322);
   gre->SetPointError(8,0,0.03649069);
   gre->SetPoint(9,255,0.5091889);
   gre->SetPointError(9,0,0.02766783);
   gre->SetPoint(10,265,0.4999764);
   gre->SetPointError(10,0,0.01932747);
   
   TH1F *Graph_gr_T20_20_15_18025 = new TH1F("Graph_gr_T20_20_15_18025","",100,155,275);
   Graph_gr_T20_20_15_18025->SetMinimum(-0.7683185);
   Graph_gr_T20_20_15_18025->SetMaximum(0.6555091);
   Graph_gr_T20_20_15_18025->SetDirectory(0);
   Graph_gr_T20_20_15_18025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_15_18025->SetLineColor(ci);
   Graph_gr_T20_20_15_18025->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_18025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_18025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_18025->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_18025->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_18025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_18025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_18025->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_18025->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_18025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_18025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_18025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_15_18025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
