{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:23:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.601357,310,0.4817979);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.04296824);
   gre->SetPointError(0,0,0.09358163);
   gre->SetPoint(1,145,0.2258092);
   gre->SetPointError(1,0,0.07546289);
   gre->SetPoint(2,155,-0.04987763);
   gre->SetPointError(2,0,0.06083484);
   gre->SetPoint(3,165,-0.03817544);
   gre->SetPointError(3,0,0.05848878);
   gre->SetPoint(4,175,-0.2002879);
   gre->SetPointError(4,0,0.04790882);
   gre->SetPoint(5,185,-0.2738203);
   gre->SetPointError(5,0,0.03622878);
   gre->SetPoint(6,195,-0.3604485);
   gre->SetPointError(6,0,0.02380203);
   gre->SetPoint(7,205,-0.3898478);
   gre->SetPointError(7,0,0.01509297);
   gre->SetPoint(8,215,-0.3729988);
   gre->SetPointError(8,0,0.009980671);
   gre->SetPoint(9,225,-0.3956609);
   gre->SetPointError(9,0,0.007829049);
   gre->SetPoint(10,235,-0.406394);
   gre->SetPointError(10,0,0.01293638);
   gre->SetPoint(11,245,-0.4111282);
   gre->SetPointError(11,0,0.009703049);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,0.009703049);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,0.009703049);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,0.009703049);
   
   TH1F *Graph_gr_T20_28_28_18011 = new TH1F("Graph_gr_T20_28_28_18011","",100,121,289);
   Graph_gr_T20_28_28_18011->SetMinimum(-0.4930415);
   Graph_gr_T20_28_28_18011->SetMaximum(0.3734824);
   Graph_gr_T20_28_28_18011->SetDirectory(0);
   Graph_gr_T20_28_28_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_18011->SetLineColor(ci);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
