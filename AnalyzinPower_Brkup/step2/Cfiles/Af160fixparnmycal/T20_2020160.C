{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:10:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.4382052,310,0.1341536);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.06511961);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.06511961);
   gre->SetPoint(2,155,-0.02635914);
   gre->SetPointError(2,0,0.06511961);
   gre->SetPoint(3,165,-0.1632626);
   gre->SetPointError(3,0,0.08458323);
   gre->SetPoint(4,175,-0.103434);
   gre->SetPointError(4,0,0.05238269);
   gre->SetPoint(5,185,-0.09818078);
   gre->SetPointError(5,0,0.05573603);
   gre->SetPoint(6,195,-0.04998179);
   gre->SetPointError(6,0,0.05574132);
   gre->SetPoint(7,205,-0.2523169);
   gre->SetPointError(7,0,0.04792763);
   gre->SetPoint(8,215,-0.2994442);
   gre->SetPointError(8,0,0.04336793);
   gre->SetPoint(9,225,-0.2972629);
   gre->SetPointError(9,0,0.04045568);
   gre->SetPoint(10,235,-0.2292018);
   gre->SetPointError(10,0,0.03742818);
   gre->SetPoint(11,245,-0.1685235);
   gre->SetPointError(11,0,0.03377857);
   gre->SetPoint(12,255,-0.1263774);
   gre->SetPointError(12,0,0.02880808);
   gre->SetPoint(13,265,-0.08475415);
   gre->SetPointError(13,0,0.02240242);
   gre->SetPoint(14,275,-0.2432123);
   gre->SetPointError(14,0,0.05057001);
   
   TH1F *Graph_gr_T20_20_20_16021 = new TH1F("Graph_gr_T20_20_20_16021","",100,121,289);
   Graph_gr_T20_20_20_16021->SetMinimum(-0.3809694);
   Graph_gr_T20_20_20_16021->SetMaximum(0.07691773);
   Graph_gr_T20_20_20_16021->SetDirectory(0);
   Graph_gr_T20_20_20_16021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_16021->SetLineColor(ci);
   Graph_gr_T20_20_20_16021->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_16021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_16021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_16021->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_16021->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_16021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_16021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_16021->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_16021->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_16021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_16021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_16021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_16021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
