{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 08:50:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.7531626,310,2.144116);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0.1663894);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,0.6954769);
   gre->SetPointError(3,0,0.9657597);
   gre->SetPoint(4,175,-0.1028886);
   gre->SetPointError(4,0,0.0825001);
   gre->SetPoint(5,185,0.08262749);
   gre->SetPointError(5,0,0.05614467);
   gre->SetPoint(6,195,-0.09490817);
   gre->SetPointError(6,0,0.05151427);
   gre->SetPoint(7,205,-0.06738405);
   gre->SetPointError(7,0,0.04733979);
   gre->SetPoint(8,215,0.1022672);
   gre->SetPointError(8,0,0.04656873);
   gre->SetPoint(9,225,0.02608532);
   gre->SetPointError(9,0,0.04152508);
   gre->SetPoint(10,235,-0.03128795);
   gre->SetPointError(10,0,0.03666657);
   gre->SetPoint(11,245,0.02768673);
   gre->SetPointError(11,0,0.03342578);
   gre->SetPoint(12,255,0.1149539);
   gre->SetPointError(12,0,0.0310813);
   gre->SetPoint(13,265,0.1977387);
   gre->SetPointError(13,0,0.02459913);
   gre->SetPoint(14,275,0.1581936);
   gre->SetPointError(14,0,0.01971948);
   
   TH1F *Graph_gr_iT11_15_15_1801 = new TH1F("Graph_gr_iT11_15_15_1801","",100,121,289);
   Graph_gr_iT11_15_15_1801->SetMinimum(-0.4634347);
   Graph_gr_iT11_15_15_1801->SetMaximum(1.854389);
   Graph_gr_iT11_15_15_1801->SetDirectory(0);
   Graph_gr_iT11_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_1801->SetLineColor(ci);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
