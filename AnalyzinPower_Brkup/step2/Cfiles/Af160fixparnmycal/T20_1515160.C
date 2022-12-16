{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:07:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-2.689597,310,2.118221);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.02392885);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.02392885);
   gre->SetPoint(2,155,-0.02635914);
   gre->SetPointError(2,0,0.02392885);
   gre->SetPoint(3,165,-0.285688);
   gre->SetPointError(3,0,1.602606);
   gre->SetPoint(4,175,-0.5587198);
   gre->SetPointError(4,0,0.0994345);
   gre->SetPoint(5,185,-0.1374107);
   gre->SetPointError(5,0,0.064554);
   gre->SetPoint(6,195,-0.0926312);
   gre->SetPointError(6,0,0.06164743);
   gre->SetPoint(7,205,-0.1965741);
   gre->SetPointError(7,0,0.05477333);
   gre->SetPoint(8,215,-0.04008308);
   gre->SetPointError(8,0,0.05349775);
   gre->SetPoint(9,225,-0.02038037);
   gre->SetPointError(9,0,0.05071416);
   gre->SetPoint(10,235,0.03162116);
   gre->SetPointError(10,0,0.04769694);
   gre->SetPoint(11,245,0.1642586);
   gre->SetPointError(11,0,0.04560553);
   gre->SetPoint(12,255,0.3334649);
   gre->SetPointError(12,0,0.04367076);
   gre->SetPoint(13,265,0.2938188);
   gre->SetPointError(13,0,0.03634226);
   gre->SetPoint(14,275,0.3679696);
   gre->SetPointError(14,0,0.02877546);
   
   TH1F *Graph_gr_T20_15_15_16015 = new TH1F("Graph_gr_T20_15_15_16015","",100,121,289);
   Graph_gr_T20_15_15_16015->SetMinimum(-2.208815);
   Graph_gr_T20_15_15_16015->SetMaximum(1.637439);
   Graph_gr_T20_15_15_16015->SetDirectory(0);
   Graph_gr_T20_15_15_16015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_16015->SetLineColor(ci);
   Graph_gr_T20_15_15_16015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_16015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
