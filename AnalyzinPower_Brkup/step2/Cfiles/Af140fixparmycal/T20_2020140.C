{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:38:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-1.031339,310,0.3135947);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.09427004);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.09427004);
   gre->SetPoint(2,155,-0.6760942);
   gre->SetPointError(2,0,0.1310888);
   gre->SetPoint(3,165,0.02934456);
   gre->SetPointError(3,0,0.06009456);
   gre->SetPoint(4,175,-0.02050098);
   gre->SetPointError(4,0,0.06053705);
   gre->SetPoint(5,185,0.01307833);
   gre->SetPointError(5,0,0.06236271);
   gre->SetPoint(6,195,-0.2118727);
   gre->SetPointError(6,0,0.05510038);
   gre->SetPoint(7,205,-0.2142792);
   gre->SetPointError(7,0,0.05574935);
   gre->SetPoint(8,215,-0.2131659);
   gre->SetPointError(8,0,0.05699273);
   gre->SetPoint(9,225,-0.1273248);
   gre->SetPointError(9,0,0.06128622);
   gre->SetPoint(10,235,-0.2094925);
   gre->SetPointError(10,0,0.05829335);
   gre->SetPoint(11,245,-0.3374078);
   gre->SetPointError(11,0,0.05015778);
   gre->SetPoint(12,255,-0.06079823);
   gre->SetPointError(12,0,0.04096718);
   gre->SetPoint(13,265,-0.3900945);
   gre->SetPointError(13,0,0.08608089);
   gre->SetPoint(14,275,-0.253076);
   gre->SetPointError(14,0,0.07147202);
   
   TH1F *Graph_gr_T20_20_20_14014 = new TH1F("Graph_gr_T20_20_20_14014","",100,121,289);
   Graph_gr_T20_20_20_14014->SetMinimum(-0.8968452);
   Graph_gr_T20_20_20_14014->SetMaximum(0.1791013);
   Graph_gr_T20_20_20_14014->SetDirectory(0);
   Graph_gr_T20_20_20_14014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_14014->SetLineColor(ci);
   Graph_gr_T20_20_20_14014->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_14014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_14014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_14014->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_14014->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_14014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_14014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_14014->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_14014->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_14014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_14014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_14014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_14014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
