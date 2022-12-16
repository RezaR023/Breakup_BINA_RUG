{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:17:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.3989458,310,0.1153158);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02244452);
   gre->SetPointError(0,0,0.05205002);
   gre->SetPoint(1,145,-0.02663207);
   gre->SetPointError(1,0,0.03777533);
   gre->SetPoint(2,155,-0.1036908);
   gre->SetPointError(2,0,0.036681);
   gre->SetPoint(3,165,-0.1441139);
   gre->SetPointError(3,0,0.03485365);
   gre->SetPoint(4,175,-0.2232808);
   gre->SetPointError(4,0,0.02613353);
   gre->SetPoint(5,185,-0.2695243);
   gre->SetPointError(5,0,0.01921359);
   gre->SetPoint(6,195,-0.300701);
   gre->SetPointError(6,0,0.01253457);
   gre->SetPoint(7,205,-0.2765354);
   gre->SetPointError(7,0,0.008669268);
   gre->SetPoint(8,215,-0.2880478);
   gre->SetPointError(8,0,0.006994246);
   gre->SetPoint(9,225,-0.25215);
   gre->SetPointError(9,0,0.008075874);
   gre->SetPoint(10,235,-0.2718437);
   gre->SetPointError(10,0,0.01599487);
   gre->SetPoint(11,245,-0.2689815);
   gre->SetPointError(11,0,0.01230976);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.01230976);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.01230976);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.01230976);
   
   TH1F *Graph_gr_iT11_28_28_1801 = new TH1F("Graph_gr_iT11_28_28_1801","",100,121,289);
   Graph_gr_iT11_28_28_1801->SetMinimum(-0.3475197);
   Graph_gr_iT11_28_28_1801->SetMaximum(0.06388961);
   Graph_gr_iT11_28_28_1801->SetDirectory(0);
   Graph_gr_iT11_28_28_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1801->SetLineColor(ci);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
