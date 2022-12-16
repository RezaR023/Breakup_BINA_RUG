{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 08:52:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-6.04464,310,1.479914);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.05147161);
   gre->SetPoint(1,145,-1.121864);
   gre->SetPointError(1,0,0.3168005);
   gre->SetPoint(2,155,-3.540564);
   gre->SetPointError(2,0,1.249983);
   gre->SetPoint(3,165,-0.151363);
   gre->SetPointError(3,0,0.07277768);
   gre->SetPoint(4,175,0.1632714);
   gre->SetPointError(4,0,0.03827063);
   gre->SetPoint(5,185,0.1950072);
   gre->SetPointError(5,0,0.03081438);
   gre->SetPoint(6,195,0.1046633);
   gre->SetPointError(6,0,0.02617195);
   gre->SetPoint(7,205,0.1052383);
   gre->SetPointError(7,0,0.02468329);
   gre->SetPoint(8,215,0.008936195);
   gre->SetPointError(8,0,0.02408421);
   gre->SetPoint(9,225,-0.07835621);
   gre->SetPointError(9,0,0.02464055);
   gre->SetPoint(10,235,-0.1455418);
   gre->SetPointError(10,0,0.02742397);
   gre->SetPoint(11,245,-0.1872068);
   gre->SetPointError(11,0,0.03190173);
   gre->SetPoint(12,255,-0.3376389);
   gre->SetPointError(12,0,0.03621687);
   gre->SetPoint(13,265,-0.3036658);
   gre->SetPointError(13,0,0.03984964);
   gre->SetPoint(14,275,-0.2406243);
   gre->SetPointError(14,0,0.08302719);
   
   TH1F *Graph_gr_T20_15_28_1805 = new TH1F("Graph_gr_T20_15_28_1805","",100,121,289);
   Graph_gr_T20_15_28_1805->SetMinimum(-5.292184);
   Graph_gr_T20_15_28_1805->SetMaximum(0.7274585);
   Graph_gr_T20_15_28_1805->SetDirectory(0);
   Graph_gr_T20_15_28_1805->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_1805->SetLineColor(ci);
   Graph_gr_T20_15_28_1805->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_1805->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_1805->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_1805->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_1805->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_1805->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_1805->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_1805->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_1805->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_1805->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_1805->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_1805->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_1805);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
