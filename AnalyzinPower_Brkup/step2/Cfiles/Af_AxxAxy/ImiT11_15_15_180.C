{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:27:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,1016,578);
   Canvas_1->Range(100,-0.3816586,310,1.210369);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,0.4859288);
   gre->SetPointError(3,0,0.4591018);
   gre->SetPoint(4,175,0.0687645);
   gre->SetPointError(4,0,0.09414861);
   gre->SetPoint(5,185,0.05586542);
   gre->SetPointError(5,0,0.06249115);
   gre->SetPoint(6,195,-0.04338054);
   gre->SetPointError(6,0,0.05366016);
   gre->SetPoint(7,205,-0.06631475);
   gre->SetPointError(7,0,0.05000598);
   gre->SetPoint(8,215,0.01553974);
   gre->SetPointError(8,0,0.04823592);
   gre->SetPoint(9,225,0.0112533);
   gre->SetPointError(9,0,0.04340133);
   gre->SetPoint(10,235,-0.006529213);
   gre->SetPointError(10,0,0.03787241);
   gre->SetPoint(11,245,0.007895251);
   gre->SetPointError(11,0,0.03407433);
   gre->SetPoint(12,255,0.02720134);
   gre->SetPointError(12,0,0.03219967);
   gre->SetPoint(13,265,0.01679043);
   gre->SetPointError(13,0,0.02490721);
   gre->SetPoint(14,275,0.0107657);
   gre->SetPointError(14,0,0.02007116);
   
   TH1F *Graph_gr_ImiT11_15_15_1801 = new TH1F("Graph_gr_ImiT11_15_15_1801","",100,121,289);
   Graph_gr_ImiT11_15_15_1801->SetMinimum(-0.2224559);
   Graph_gr_ImiT11_15_15_1801->SetMaximum(1.051166);
   Graph_gr_ImiT11_15_15_1801->SetDirectory(0);
   Graph_gr_ImiT11_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_1801->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
