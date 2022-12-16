{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:43:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.3696772,310,0.01912784);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1023557);
   gre->SetPointError(0,0,0.03826438);
   gre->SetPoint(1,145,-0.09116171);
   gre->SetPointError(1,0,0.03426064);
   gre->SetPoint(2,155,-0.0804512);
   gre->SetPointError(2,0,0.03477819);
   gre->SetPoint(3,165,-0.1344378);
   gre->SetPointError(3,0,0.0316197);
   gre->SetPoint(4,175,-0.2109013);
   gre->SetPointError(4,0,0.03154876);
   gre->SetPoint(5,185,-0.2471971);
   gre->SetPointError(5,0,0.02751402);
   gre->SetPoint(6,195,-0.2624812);
   gre->SetPointError(6,0,0.02414593);
   gre->SetPoint(7,205,-0.286607);
   gre->SetPointError(7,0,0.01826934);
   gre->SetPoint(8,215,-0.2694324);
   gre->SetPointError(8,0,0.01578512);
   gre->SetPoint(9,225,-0.2523622);
   gre->SetPointError(9,0,0.01406366);
   gre->SetPoint(10,235,-0.2310651);
   gre->SetPointError(10,0,0.03515291);
   gre->SetPoint(11,245,-0.1663894);
   gre->SetPointError(11,0,0.03515291);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.03515291);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.03515291);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.03515291);
   
   TH1F *Graph_gr_iT11_28_28_16013 = new TH1F("Graph_gr_iT11_28_28_16013","",100,121,289);
   Graph_gr_iT11_28_28_16013->SetMinimum(-0.3307967);
   Graph_gr_iT11_28_28_16013->SetMaximum(-0.01975267);
   Graph_gr_iT11_28_28_16013->SetDirectory(0);
   Graph_gr_iT11_28_28_16013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_16013->SetLineColor(ci);
   Graph_gr_iT11_28_28_16013->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16013->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_16013->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16013->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_16013->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_16013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_16013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_16013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_16013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
