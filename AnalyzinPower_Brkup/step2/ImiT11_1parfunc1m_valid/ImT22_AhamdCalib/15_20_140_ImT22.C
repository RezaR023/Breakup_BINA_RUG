{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:53:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(152.5,-0.1445471,287.5,0.1327098);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.06151943);
   gre->SetPointError(0,0,0.0368182);
   gre->SetPoint(1,185,0.02299068);
   gre->SetPointError(1,0,0.02912412);
   gre->SetPoint(2,195,0.01417855);
   gre->SetPointError(2,0,0.02665292);
   gre->SetPoint(3,205,-0.05148297);
   gre->SetPointError(3,0,0.02642432);
   gre->SetPoint(4,215,0.04896367);
   gre->SetPointError(4,0,0.0267429);
   gre->SetPoint(5,225,-0.01012136);
   gre->SetPointError(5,0,0.02767431);
   gre->SetPoint(6,235,0.05413158);
   gre->SetPointError(6,0,0.03236873);
   gre->SetPoint(7,245,-0.03198011);
   gre->SetPointError(7,0,0.03210333);
   gre->SetPoint(8,255,-0.03411061);
   gre->SetPointError(8,0,0.03266963);
   gre->SetPoint(9,265,-0.0211671);
   gre->SetPointError(9,0,0.03425671);
   
   TH1F *Graph_gr_ImT22_15_20_14083 = new TH1F("Graph_gr_ImT22_15_20_14083","",100,166,274);
   Graph_gr_ImT22_15_20_14083->SetMinimum(-0.1168214);
   Graph_gr_ImT22_15_20_14083->SetMaximum(0.1049841);
   Graph_gr_ImT22_15_20_14083->SetDirectory(0);
   Graph_gr_ImT22_15_20_14083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_14083->SetLineColor(ci);
   Graph_gr_ImT22_15_20_14083->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14083->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_14083->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14083->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_14083->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14083->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_14083);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
