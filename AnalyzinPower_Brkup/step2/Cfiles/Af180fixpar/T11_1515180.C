{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:34:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.134,-0.4135884,300.126,0.4086338);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,180.966,0.01024771);
   gre->SetPointError(0,0,0.08138815);
   gre->SetPoint(1,191.558,-0.1874801);
   gre->SetPointError(1,0,0.08907124);
   gre->SetPoint(2,202.15,-0.07105488);
   gre->SetPointError(2,0,0.06658451);
   gre->SetPoint(3,212.742,0.0325651);
   gre->SetPointError(3,0,0.07269353);
   gre->SetPoint(4,223.334,0.1427451);
   gre->SetPointError(4,0,0.08120074);
   gre->SetPoint(5,233.926,0.09147809);
   gre->SetPointError(5,0,0.06226891);
   gre->SetPoint(6,244.518,0.1753232);
   gre->SetPointError(6,0,0.05957173);
   gre->SetPoint(7,255.11,0.2135661);
   gre->SetPointError(7,0,0.05803064);
   gre->SetPoint(8,265.702,0.2116196);
   gre->SetPointError(8,0,0.04643818);
   gre->SetPoint(9,276.294,0.2199516);
   gre->SetPointError(9,0,0.04577349);
   
   TH1F *Graph_gr_iT11_15_15_18019 = new TH1F("Graph_gr_iT11_15_15_18019","",100,171.4332,285.8268);
   Graph_gr_iT11_15_15_18019->SetMinimum(-0.3313662);
   Graph_gr_iT11_15_15_18019->SetMaximum(0.3264116);
   Graph_gr_iT11_15_15_18019->SetDirectory(0);
   Graph_gr_iT11_15_15_18019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_18019->SetLineColor(ci);
   Graph_gr_iT11_15_15_18019->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18019->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_18019->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18019->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_18019->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_18019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
