{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:46:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.3595487,267.5,0.06361795);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.09449899);
   gre->SetPointError(0,0,0.06200303);
   gre->SetPoint(1,165,-0.0459161);
   gre->SetPointError(1,0,0.03900628);
   gre->SetPoint(2,175,-0.1185468);
   gre->SetPointError(2,0,0.04245196);
   gre->SetPoint(3,185,-0.1127204);
   gre->SetPointError(3,0,0.04288505);
   gre->SetPoint(4,195,-0.1916745);
   gre->SetPointError(4,0,0.03826192);
   gre->SetPoint(5,205,-0.1811242);
   gre->SetPointError(5,0,0.04048671);
   gre->SetPoint(6,215,-0.2507747);
   gre->SetPointError(6,0,0.03824626);
   gre->SetPoint(7,225,-0.2453451);
   gre->SetPointError(7,0,0.03819425);
   gre->SetPoint(8,235,-0.1777614);
   gre->SetPointError(8,0,0.03884804);
   gre->SetPoint(9,245,-0.1799511);
   gre->SetPointError(9,0,0.03527889);
   
   TH1F *Graph_gr_iT11_20_25_14011 = new TH1F("Graph_gr_iT11_20_25_14011","",100,146,254);
   Graph_gr_iT11_20_25_14011->SetMinimum(-0.317232);
   Graph_gr_iT11_20_25_14011->SetMaximum(0.02130129);
   Graph_gr_iT11_20_25_14011->SetDirectory(0);
   Graph_gr_iT11_20_25_14011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_25_14011->SetLineColor(ci);
   Graph_gr_iT11_20_25_14011->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_14011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_14011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_14011->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_14011->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_14011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_14011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_14011->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_14011->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_14011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_14011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_14011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_25_14011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
