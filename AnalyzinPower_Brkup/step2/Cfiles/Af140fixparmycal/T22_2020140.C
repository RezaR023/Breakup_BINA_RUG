{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:39:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.218834,310,0.245258);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.05257615);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.05257615);
   gre->SetPoint(2,155,-0.04735058);
   gre->SetPointError(2,0,0.07737434);
   gre->SetPoint(3,165,0.02930782);
   gre->SetPointError(3,0,0.03498566);
   gre->SetPoint(4,175,-0.007127546);
   gre->SetPointError(4,0,0.03519648);
   gre->SetPoint(5,185,-0.03400989);
   gre->SetPointError(5,0,0.03597407);
   gre->SetPoint(6,195,0.1357489);
   gre->SetPointError(6,0,0.03216046);
   gre->SetPoint(7,205,0.04697388);
   gre->SetPointError(7,0,0.03288316);
   gre->SetPoint(8,215,0.01236434);
   gre->SetPointError(8,0,0.03452207);
   gre->SetPoint(9,225,0.003828708);
   gre->SetPointError(9,0,0.03407298);
   gre->SetPoint(10,235,0.01169767);
   gre->SetPointError(10,0,0.03386543);
   gre->SetPoint(11,245,-0.02671951);
   gre->SetPointError(11,0,0.02962157);
   gre->SetPoint(12,255,-0.03181606);
   gre->SetPointError(12,0,0.02382962);
   gre->SetPoint(13,265,-0.058565);
   gre->SetPointError(13,0,0.04897825);
   gre->SetPoint(14,275,-0.09967571);
   gre->SetPointError(14,0,0.04180962);
   
   TH1F *Graph_gr_T22_20_20_14015 = new TH1F("Graph_gr_T22_20_20_14015","",100,121,289);
   Graph_gr_T22_20_20_14015->SetMinimum(-0.1724248);
   Graph_gr_T22_20_20_14015->SetMaximum(0.1988488);
   Graph_gr_T22_20_20_14015->SetDirectory(0);
   Graph_gr_T22_20_20_14015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_14015->SetLineColor(ci);
   Graph_gr_T22_20_20_14015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_14015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_14015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_14015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_14015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_14015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_14015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_14015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_14015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_14015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_14015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_14015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_14015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
