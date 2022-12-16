{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 12:01:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,8.108764,310,11.7847);
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
   gre->SetPoint(0,135,10.23037);
   gre->SetPointError(0,0,0.5704169);
   gre->SetPoint(1,145,10.73339);
   gre->SetPointError(1,0,0.4386563);
   gre->SetPoint(2,155,9.962616);
   gre->SetPointError(2,0,0.3873356);
   gre->SetPoint(3,165,10.01719);
   gre->SetPointError(3,0,0.3685124);
   gre->SetPoint(4,175,9.495761);
   gre->SetPointError(4,0,0.3217705);
   gre->SetPoint(5,185,9.275283);
   gre->SetPointError(5,0,0.2498763);
   gre->SetPoint(6,195,8.97716);
   gre->SetPointError(6,0,0.1697354);
   gre->SetPoint(7,205,8.892462);
   gre->SetPointError(7,0,0.109563);
   gre->SetPoint(8,215,8.952714);
   gre->SetPointError(8,0,0.07211436);
   gre->SetPoint(9,225,8.869261);
   gre->SetPointError(9,0,0.05682612);
   gre->SetPoint(10,235,8.815576);
   gre->SetPointError(10,0,0.09415584);
   gre->SetPoint(11,245,8.800708);
   gre->SetPointError(11,0,0.07062821);
   gre->SetPoint(12,255,8.800708);
   gre->SetPointError(12,0,0.07062821);
   gre->SetPoint(13,265,8.800708);
   gre->SetPointError(13,0,0.07062821);
   gre->SetPoint(14,275,8.800708);
   gre->SetPointError(14,0,0.07062821);
   
   TH1F *Graph_gr_T20_28_28_1808 = new TH1F("Graph_gr_T20_28_28_1808","",100,121,289);
   Graph_gr_T20_28_28_1808->SetMinimum(8.476358);
   Graph_gr_T20_28_28_1808->SetMaximum(11.4171);
   Graph_gr_T20_28_28_1808->SetDirectory(0);
   Graph_gr_T20_28_28_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1808->SetLineColor(ci);
   Graph_gr_T20_28_28_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
