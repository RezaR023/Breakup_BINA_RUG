{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:38:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(135,-0.2714057,255,0.1320679);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,155,-0.1501805);
   gre->SetPointError(0,0,0.04302407);
   gre->SetPoint(1,165,-0.1607907);
   gre->SetPointError(1,0,0.04336942);
   gre->SetPoint(2,175,-0.1361623);
   gre->SetPointError(2,0,0.04757191);
   gre->SetPoint(3,185,-0.08199925);
   gre->SetPointError(3,0,0.05118404);
   gre->SetPoint(4,195,-0.04296249);
   gre->SetPointError(4,0,0.04940002);
   gre->SetPoint(5,205,-0.0488196);
   gre->SetPointError(5,0,0.04728712);
   gre->SetPoint(6,215,0.01165267);
   gre->SetPointError(6,0,0.0531696);
   gre->SetPoint(7,225,-0.05026778);
   gre->SetPointError(7,0,0.04618632);
   gre->SetPoint(8,235,-0.0479016);
   gre->SetPointError(8,0,0.03841774);
   
   TH1F *Graph_gr_ImiT11_25_25_14043 = new TH1F("Graph_gr_ImiT11_25_25_14043","",100,147,243);
   Graph_gr_ImiT11_25_25_14043->SetMinimum(-0.2310584);
   Graph_gr_ImiT11_25_25_14043->SetMaximum(0.09172051);
   Graph_gr_ImiT11_25_25_14043->SetDirectory(0);
   Graph_gr_ImiT11_25_25_14043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_25_14043->SetLineColor(ci);
   Graph_gr_ImiT11_25_25_14043->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14043->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_14043->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14043->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_14043->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14043->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_25_14043);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
