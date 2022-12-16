{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:19:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.508462,310,0.2921601);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.09923309);
   gre->SetPointError(0,0,0.05948998);
   gre->SetPoint(1,145,0.0828188);
   gre->SetPointError(1,0,0.05155439);
   gre->SetPoint(2,155,0.02529497);
   gre->SetPointError(2,0,0.04764532);
   gre->SetPoint(3,165,0.03409132);
   gre->SetPointError(3,0,0.04881125);
   gre->SetPoint(4,175,0.0278299);
   gre->SetPointError(4,0,0.05090699);
   gre->SetPoint(5,185,-0.1044757);
   gre->SetPointError(5,0,0.05054896);
   gre->SetPoint(6,195,-0.1484299);
   gre->SetPointError(6,0,0.04982524);
   gre->SetPoint(7,205,-0.3215472);
   gre->SetPointError(7,0,0.04300286);
   gre->SetPoint(8,215,-0.210867);
   gre->SetPointError(8,0,0.03564083);
   gre->SetPoint(9,225,-0.2303469);
   gre->SetPointError(9,0,0.0397254);
   gre->SetPoint(10,235,-0.3066273);
   gre->SetPointError(10,0,0.06839762);
   gre->SetPoint(11,245,-0.02635914);
   gre->SetPointError(11,0,0.06839762);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,0.06839762);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,0.06839762);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,0.06839762);
   
   TH1F *Graph_gr_T20_28_28_1408 = new TH1F("Graph_gr_T20_28_28_1408","",100,121,289);
   Graph_gr_T20_28_28_1408->SetMinimum(-0.4283997);
   Graph_gr_T20_28_28_1408->SetMaximum(0.2120979);
   Graph_gr_T20_28_28_1408->SetDirectory(0);
   Graph_gr_T20_28_28_1408->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1408->SetLineColor(ci);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1408);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
