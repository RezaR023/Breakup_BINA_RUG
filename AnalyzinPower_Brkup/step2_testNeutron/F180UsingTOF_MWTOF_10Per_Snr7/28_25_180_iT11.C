{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:01:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.2998473,250,0.06500031);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_iT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.1009879);
   gre->SetPointError(0,0,0.0918029);
   gre->SetPoint(1,170,-0.07872968);
   gre->SetPointError(1,0,0.08292205);
   gre->SetPoint(2,190,-0.1773398);
   gre->SetPointError(2,0,0.05803731);
   gre->SetPoint(3,210,-0.2066001);
   gre->SetPointError(3,0,0.0324393);
   gre->SetPoint(4,230,-0.1775438);
   gre->SetPointError(4,0,0.02501897);
   
   TH1F *Graph_gr_iT11_28_25_18020 = new TH1F("Graph_gr_iT11_28_25_18020","",100,142,238);
   Graph_gr_iT11_28_25_18020->SetMinimum(-0.2633626);
   Graph_gr_iT11_28_25_18020->SetMaximum(0.02851554);
   Graph_gr_iT11_28_25_18020->SetDirectory(0);
   Graph_gr_iT11_28_25_18020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_18020->SetLineColor(ci);
   Graph_gr_iT11_28_25_18020->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18020->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18020->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18020->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18020->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_18020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
