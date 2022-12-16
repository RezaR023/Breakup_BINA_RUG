{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:19:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.08214621,257.5,0.1121454);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.005416037);
   gre->SetPointError(0,0,0.04005539);
   gre->SetPoint(1,155,0.02784016);
   gre->SetPointError(1,0,0.03816684);
   gre->SetPoint(2,165,0.04586172);
   gre->SetPointError(2,0,0.03390172);
   gre->SetPoint(3,175,0.04416051);
   gre->SetPointError(3,0,0.03115962);
   gre->SetPoint(4,185,-0.02713619);
   gre->SetPointError(4,0,0.02262809);
   gre->SetPoint(5,195,-0.01380565);
   gre->SetPointError(5,0,0.01497001);
   gre->SetPoint(6,205,-0.002179619);
   gre->SetPointError(6,0,0.009930246);
   gre->SetPoint(7,215,-0.01144273);
   gre->SetPointError(7,0,0.006689222);
   gre->SetPoint(8,225,-0.008479688);
   gre->SetPointError(8,0,0.00558005);
   gre->SetPoint(9,235,-0.01331491);
   gre->SetPointError(9,0,0.008455128);
   
   TH1F *Graph_gr_ImT22_28_25_18064 = new TH1F("Graph_gr_ImT22_28_25_18064","",100,136,244);
   Graph_gr_ImT22_28_25_18064->SetMinimum(-0.06271705);
   Graph_gr_ImT22_28_25_18064->SetMaximum(0.09271621);
   Graph_gr_ImT22_28_25_18064->SetDirectory(0);
   Graph_gr_ImT22_28_25_18064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_25_18064->SetLineColor(ci);
   Graph_gr_ImT22_28_25_18064->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18064->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_18064->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18064->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_18064->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18064->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_25_18064);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
