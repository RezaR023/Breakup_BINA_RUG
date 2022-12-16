{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:15:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2712891,257.5,0.251732);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.08348239);
   gre->SetPointError(0,0,0.0780088);
   gre->SetPoint(1,155,-0.1106123);
   gre->SetPointError(1,0,0.07350654);
   gre->SetPoint(2,165,-0.034832);
   gre->SetPointError(2,0,0.06538873);
   gre->SetPoint(3,175,0.07727227);
   gre->SetPointError(3,0,0.05708486);
   gre->SetPoint(4,185,0.0739264);
   gre->SetPointError(4,0,0.05643292);
   gre->SetPoint(5,195,0.05332035);
   gre->SetPointError(5,0,0.04479177);
   gre->SetPoint(6,205,0.03456331);
   gre->SetPointError(6,0,0.03668808);
   gre->SetPoint(7,215,-0.0440447);
   gre->SetPointError(7,0,0.02872931);
   gre->SetPoint(8,225,0.08091097);
   gre->SetPointError(8,0,0.02117652);
   gre->SetPoint(9,235,0.1512444);
   gre->SetPointError(9,0,0.01331744);
   
   TH1F *Graph_gr_iT11_28_15_18063 = new TH1F("Graph_gr_iT11_28_15_18063","",100,136,244);
   Graph_gr_iT11_28_15_18063->SetMinimum(-0.218987);
   Graph_gr_iT11_28_15_18063->SetMaximum(0.1994299);
   Graph_gr_iT11_28_15_18063->SetDirectory(0);
   Graph_gr_iT11_28_15_18063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_18063->SetLineColor(ci);
   Graph_gr_iT11_28_15_18063->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18063->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18063->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18063->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18063->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18063->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18063->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18063->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18063->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18063->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18063->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_18063);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
