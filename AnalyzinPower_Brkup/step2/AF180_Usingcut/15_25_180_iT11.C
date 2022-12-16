{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:22:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.3661476,287.5,-0.1179365);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1988746);
   gre->SetPointError(0,0,0.0395696);
   gre->SetPoint(1,185,-0.1907842);
   gre->SetPointError(1,0,0.02933094);
   gre->SetPoint(2,195,-0.1867129);
   gre->SetPointError(2,0,0.02306572);
   gre->SetPoint(3,205,-0.2178128);
   gre->SetPointError(3,0,0.02097483);
   gre->SetPoint(4,215,-0.1889734);
   gre->SetPointError(4,0,0.02057855);
   gre->SetPoint(5,225,-0.196512);
   gre->SetPointError(5,0,0.02107998);
   gre->SetPoint(6,235,-0.2613024);
   gre->SetPointError(6,0,0.02155446);
   gre->SetPoint(7,245,-0.3004095);
   gre->SetPointError(7,0,0.02436962);
   gre->SetPoint(8,255,-0.2851256);
   gre->SetPointError(8,0,0.02591257);
   gre->SetPoint(9,265,-0.2890662);
   gre->SetPointError(9,0,0.02951068);
   
   TH1F *Graph_gr_iT11_15_25_18014 = new TH1F("Graph_gr_iT11_15_25_18014","",100,166,274);
   Graph_gr_iT11_15_25_18014->SetMinimum(-0.3413265);
   Graph_gr_iT11_15_25_18014->SetMaximum(-0.1427576);
   Graph_gr_iT11_15_25_18014->SetDirectory(0);
   Graph_gr_iT11_15_25_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_25_18014->SetLineColor(ci);
   Graph_gr_iT11_15_25_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_25_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
