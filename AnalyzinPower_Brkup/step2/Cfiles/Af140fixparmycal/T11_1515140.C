{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:16:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.7701505,310,1.40685);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.05602626);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.05602626);
   gre->SetPoint(2,155,0.07812704);
   gre->SetPointError(2,0,0.08181096);
   gre->SetPoint(3,165,0.3183497);
   gre->SetPointError(3,0,0.7256668);
   gre->SetPoint(4,175,0.3720668);
   gre->SetPointError(4,0,0.08266907);
   gre->SetPoint(5,185,-0.06573482);
   gre->SetPointError(5,0,0.04817656);
   gre->SetPoint(6,195,0.02573906);
   gre->SetPointError(6,0,0.04934635);
   gre->SetPoint(7,205,-0.1387368);
   gre->SetPointError(7,0,0.04264563);
   gre->SetPoint(8,215,-0.06299012);
   gre->SetPointError(8,0,0.03782484);
   gre->SetPoint(9,225,-0.07115057);
   gre->SetPointError(9,0,0.03831919);
   gre->SetPoint(10,235,-0.03922686);
   gre->SetPointError(10,0,0.03829779);
   gre->SetPoint(11,245,-0.05859908);
   gre->SetPointError(11,0,0.03629422);
   gre->SetPoint(12,255,0.06706769);
   gre->SetPointError(12,0,0.03537272);
   gre->SetPoint(13,265,-0.002665711);
   gre->SetPointError(13,0,0.0336382);
   gre->SetPoint(14,275,0.06684332);
   gre->SetPointError(14,0,0.02657744);
   
   TH1F *Graph_gr_iT11_15_15_14029 = new TH1F("Graph_gr_iT11_15_15_14029","",100,121,289);
   Graph_gr_iT11_15_15_14029->SetMinimum(-0.5524504);
   Graph_gr_iT11_15_15_14029->SetMaximum(1.18915);
   Graph_gr_iT11_15_15_14029->SetDirectory(0);
   Graph_gr_iT11_15_15_14029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_14029->SetLineColor(ci);
   Graph_gr_iT11_15_15_14029->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14029->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_14029->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14029->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_14029->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_14029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
