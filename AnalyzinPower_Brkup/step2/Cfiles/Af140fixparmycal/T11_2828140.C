{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:19:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.3050628,310,0.03445991);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.08184561);
   gre->SetPointError(0,0,0.03735551);
   gre->SetPoint(1,145,-0.1211596);
   gre->SetPointError(1,0,0.03404485);
   gre->SetPoint(2,155,-0.0979608);
   gre->SetPointError(2,0,0.03093037);
   gre->SetPoint(3,165,-0.07123552);
   gre->SetPointError(3,0,0.03177124);
   gre->SetPoint(4,175,-0.05595794);
   gre->SetPointError(4,0,0.03383073);
   gre->SetPoint(5,185,-0.1494934);
   gre->SetPointError(5,0,0.03520663);
   gre->SetPoint(6,195,-0.1255653);
   gre->SetPointError(6,0,0.03580132);
   gre->SetPoint(7,205,-0.1712487);
   gre->SetPointError(7,0,0.03329344);
   gre->SetPoint(8,215,-0.1354664);
   gre->SetPointError(8,0,0.02797513);
   gre->SetPoint(9,225,-0.2204053);
   gre->SetPointError(9,0,0.02807045);
   gre->SetPoint(10,235,-0.1954922);
   gre->SetPointError(10,0,0.04643188);
   gre->SetPoint(11,245,-0.1663894);
   gre->SetPointError(11,0,0.04643188);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.04643188);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.04643188);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.04643188);
   
   TH1F *Graph_gr_iT11_28_28_1407 = new TH1F("Graph_gr_iT11_28_28_1407","",100,121,289);
   Graph_gr_iT11_28_28_1407->SetMinimum(-0.2711106);
   Graph_gr_iT11_28_28_1407->SetMaximum(0.000507636);
   Graph_gr_iT11_28_28_1407->SetDirectory(0);
   Graph_gr_iT11_28_28_1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1407->SetLineColor(ci);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1407);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
