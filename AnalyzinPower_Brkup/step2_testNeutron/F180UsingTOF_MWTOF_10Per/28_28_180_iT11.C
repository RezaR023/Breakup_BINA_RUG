{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:25:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.8982657,257.5,0.3524674);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.03003392);
   gre->SetPointError(0,0,0.1139779);
   gre->SetPoint(1,155,-0.611372);
   gre->SetPointError(1,0,0.07843814);
   gre->SetPoint(2,165,-0.3996356);
   gre->SetPointError(2,0,0.1059603);
   gre->SetPoint(3,175,-0.4809654);
   gre->SetPointError(3,0,0.07101833);
   gre->SetPoint(4,185,-0.3385594);
   gre->SetPointError(4,0,0.0760316);
   gre->SetPoint(5,195,-0.3622088);
   gre->SetPointError(5,0,0.04789655);
   gre->SetPoint(6,205,-0.2563635);
   gre->SetPointError(6,0,0.03814992);
   gre->SetPoint(7,215,-0.2565495);
   gre->SetPointError(7,0,0.02914078);
   gre->SetPoint(8,225,-0.2704035);
   gre->SetPointError(8,0,0.02820631);
   gre->SetPoint(9,235,-0.2295125);
   gre->SetPointError(9,0,0.0422344);
   
   TH1F *Graph_gr_iT11_28_28_18023 = new TH1F("Graph_gr_iT11_28_28_18023","",100,136,244);
   Graph_gr_iT11_28_28_18023->SetMinimum(-0.7731923);
   Graph_gr_iT11_28_28_18023->SetMaximum(0.2273941);
   Graph_gr_iT11_28_28_18023->SetDirectory(0);
   Graph_gr_iT11_28_28_18023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_18023->SetLineColor(ci);
   Graph_gr_iT11_28_28_18023->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18023->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18023->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18023->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18023->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_18023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
