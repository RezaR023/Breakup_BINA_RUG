{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:17:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.3710784,277.5,-0.0816338);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1610952);
   gre->SetPointError(0,0,0.03122065);
   gre->SetPoint(1,175,-0.2087283);
   gre->SetPointError(1,0,0.02909659);
   gre->SetPoint(2,185,-0.2407513);
   gre->SetPointError(2,0,0.02419055);
   gre->SetPoint(3,195,-0.2752496);
   gre->SetPointError(3,0,0.02019638);
   gre->SetPoint(4,205,-0.2650546);
   gre->SetPointError(4,0,0.01796115);
   gre->SetPoint(5,215,-0.2871829);
   gre->SetPointError(5,0,0.016665);
   gre->SetPoint(6,225,-0.2712024);
   gre->SetPointError(6,0,0.01669406);
   gre->SetPoint(7,235,-0.3066745);
   gre->SetPointError(7,0,0.01616315);
   gre->SetPoint(8,245,-0.2923791);
   gre->SetPointError(8,0,0.01898597);
   gre->SetPoint(9,255,-0.2521711);
   gre->SetPointError(9,0,0.02075758);
   
   TH1F *Graph_gr_iT11_20_28_160119 = new TH1F("Graph_gr_iT11_20_28_160119","",100,156,264);
   Graph_gr_iT11_20_28_160119->SetMinimum(-0.3421339);
   Graph_gr_iT11_20_28_160119->SetMaximum(-0.1105783);
   Graph_gr_iT11_20_28_160119->SetDirectory(0);
   Graph_gr_iT11_20_28_160119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_160119->SetLineColor(ci);
   Graph_gr_iT11_20_28_160119->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_160119->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_160119->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_160119->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_160119->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_160119->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_160119->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_160119->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_160119->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_160119->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_160119->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_160119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_160119);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
