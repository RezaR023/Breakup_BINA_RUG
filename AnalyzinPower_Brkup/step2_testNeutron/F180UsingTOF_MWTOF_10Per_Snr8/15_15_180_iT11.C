{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 15:31:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",656,71,765,578);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   Canvas_1->Range(155,-0.3147822,305,0.7860489);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,180,0.5200057);
   gre->SetPointError(0,0,0.08257133);
   gre->SetPoint(1,200,0.311668);
   gre->SetPointError(1,0,0.08895642);
   gre->SetPoint(2,220,-0.0313482);
   gre->SetPointError(2,0,0.09996213);
   gre->SetPoint(3,240,0.06699373);
   gre->SetPointError(3,0,0.07726356);
   gre->SetPoint(4,260,0.1012539);
   gre->SetPointError(4,0,0.06862954);
   gre->SetPoint(5,280,0.1984803);
   gre->SetPointError(5,0,0.06847637);
   
   TH1F *Graph_gr_iT11_15_15_1801 = new TH1F("Graph_gr_iT11_15_15_1801","",100,170,290);
   Graph_gr_iT11_15_15_1801->SetMinimum(-0.2046991);
   Graph_gr_iT11_15_15_1801->SetMaximum(0.6759658);
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
