{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:59:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-1.002486,250,0.8503968);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.5058436);
   gre->SetPointError(0,0,0.1878286);
   gre->SetPoint(1,170,-0.1331969);
   gre->SetPointError(1,0,0.1993725);
   gre->SetPoint(2,190,0.2801173);
   gre->SetPointError(2,0,0.1747482);
   gre->SetPoint(3,210,0.2770178);
   gre->SetPointError(3,0,0.1148692);
   gre->SetPoint(4,230,0.4625804);
   gre->SetPointError(4,0,0.07900258);
   
   TH1F *Graph_gr_T20_28_15_18015 = new TH1F("Graph_gr_T20_28_15_18015","",100,142,238);
   Graph_gr_T20_28_15_18015->SetMinimum(-0.8171977);
   Graph_gr_T20_28_15_18015->SetMaximum(0.6651085);
   Graph_gr_T20_28_15_18015->SetDirectory(0);
   Graph_gr_T20_28_15_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_15_18015->SetLineColor(ci);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_15_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
