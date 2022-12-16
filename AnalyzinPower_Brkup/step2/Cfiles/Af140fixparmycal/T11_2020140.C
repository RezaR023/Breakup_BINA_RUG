{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:38:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.3416059,310,0.3182287);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.06524413);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.06524413);
   gre->SetPoint(2,155,0.1042595);
   gre->SetPointError(2,0,0.1039968);
   gre->SetPoint(3,165,0.07090912);
   gre->SetPointError(3,0,0.04152742);
   gre->SetPoint(4,175,0.04814303);
   gre->SetPointError(4,0,0.04129512);
   gre->SetPoint(5,185,-0.1143752);
   gre->SetPointError(5,0,0.04301635);
   gre->SetPoint(6,195,-0.04021185);
   gre->SetPointError(6,0,0.04070859);
   gre->SetPoint(7,205,-0.138127);
   gre->SetPointError(7,0,0.03845495);
   gre->SetPoint(8,215,-0.1194145);
   gre->SetPointError(8,0,0.04036416);
   gre->SetPoint(9,225,-0.146101);
   gre->SetPointError(9,0,0.0424712);
   gre->SetPoint(10,235,-0.113767);
   gre->SetPointError(10,0,0.0438987);
   gre->SetPoint(11,245,-0.09673539);
   gre->SetPointError(11,0,0.03751795);
   gre->SetPoint(12,255,-0.02422314);
   gre->SetPointError(12,0,0.02954779);
   gre->SetPoint(13,265,-0.1273605);
   gre->SetPointError(13,0,0.0658719);
   gre->SetPoint(14,275,-0.05985058);
   gre->SetPointError(14,0,0.05305785);
   
   TH1F *Graph_gr_iT11_20_20_14013 = new TH1F("Graph_gr_iT11_20_20_14013","",100,121,289);
   Graph_gr_iT11_20_20_14013->SetMinimum(-0.2756225);
   Graph_gr_iT11_20_20_14013->SetMaximum(0.2522453);
   Graph_gr_iT11_20_20_14013->SetDirectory(0);
   Graph_gr_iT11_20_20_14013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_14013->SetLineColor(ci);
   Graph_gr_iT11_20_20_14013->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_14013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_14013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_14013->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_14013->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_14013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_14013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_14013->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_14013->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_14013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_14013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_14013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_14013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
