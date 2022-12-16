{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:05:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.440792,255,0.3178521);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01591107);
   gre->SetPointError(0,0,0.0695838);
   gre->SetPoint(1,165,0.06053104);
   gre->SetPointError(1,0,0.07016713);
   gre->SetPoint(2,175,0.1145794);
   gre->SetPointError(2,0,0.07683199);
   gre->SetPoint(3,185,0.04493203);
   gre->SetPointError(3,0,0.07693451);
   gre->SetPoint(4,195,0.09508267);
   gre->SetPointError(4,0,0.08456849);
   gre->SetPoint(5,205,-0.07288461);
   gre->SetPointError(5,0,0.08064884);
   gre->SetPoint(6,215,-0.1346191);
   gre->SetPointError(6,0,0.07499204);
   gre->SetPoint(7,225,0.02235512);
   gre->SetPointError(7,0,0.07584964);
   gre->SetPoint(8,235,-0.2554747);
   gre->SetPointError(8,0,0.05887655);
   
   TH1F *Graph_gr_T20_25_20_14028 = new TH1F("Graph_gr_T20_25_20_14028","",100,147,243);
   Graph_gr_T20_25_20_14028->SetMinimum(-0.3649276);
   Graph_gr_T20_25_20_14028->SetMaximum(0.2419876);
   Graph_gr_T20_25_20_14028->SetDirectory(0);
   Graph_gr_T20_25_20_14028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_20_14028->SetLineColor(ci);
   Graph_gr_T20_25_20_14028->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_14028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_14028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_14028->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_14028->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_14028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_14028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_14028->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_14028->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_14028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_14028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_14028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_20_14028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
