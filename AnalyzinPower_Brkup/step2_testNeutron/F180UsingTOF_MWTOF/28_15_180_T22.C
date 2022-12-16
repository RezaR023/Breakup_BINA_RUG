{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:56:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.3036492,257.5,0.01436359);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.09287789);
   gre->SetPointError(0,0,0.04663636);
   gre->SetPoint(1,155,-0.07746851);
   gre->SetPointError(1,0,0.03882996);
   gre->SetPoint(2,165,-0.0873041);
   gre->SetPointError(2,0,0.03947144);
   gre->SetPoint(3,175,-0.2056689);
   gre->SetPointError(3,0,0.03895768);
   gre->SetPoint(4,185,-0.141843);
   gre->SetPointError(4,0,0.03345846);
   gre->SetPoint(5,195,-0.163176);
   gre->SetPointError(5,0,0.02762369);
   gre->SetPoint(6,205,-0.1577667);
   gre->SetPointError(6,0,0.02414396);
   gre->SetPoint(7,215,-0.1950895);
   gre->SetPointError(7,0,0.01903876);
   gre->SetPoint(8,225,-0.2009469);
   gre->SetPointError(8,0,0.01480373);
   gre->SetPoint(9,235,-0.2368241);
   gre->SetPointError(9,0,0.01382299);
   
   TH1F *Graph_gr_T22_28_15_18016 = new TH1F("Graph_gr_T22_28_15_18016","",100,136,244);
   Graph_gr_T22_28_15_18016->SetMinimum(-0.271848);
   Graph_gr_T22_28_15_18016->SetMaximum(-0.01743769);
   Graph_gr_T22_28_15_18016->SetDirectory(0);
   Graph_gr_T22_28_15_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_18016->SetLineColor(ci);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
