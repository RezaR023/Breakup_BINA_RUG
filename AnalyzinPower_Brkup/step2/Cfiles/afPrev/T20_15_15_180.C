{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:50:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-2.296183,310,2.286653);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,-0.00476544);
   gre->SetPointError(3,0,1.527612);
   gre->SetPoint(4,175,-0.06365771);
   gre->SetPointError(4,0,0.1488983);
   gre->SetPoint(5,185,0.0661332);
   gre->SetPointError(5,0,0.09311625);
   gre->SetPoint(6,195,0.1242444);
   gre->SetPointError(6,0,0.08998166);
   gre->SetPoint(7,205,0.1314725);
   gre->SetPointError(7,0,0.07938754);
   gre->SetPoint(8,215,0.1736532);
   gre->SetPointError(8,0,0.07561705);
   gre->SetPoint(9,225,0.1531958);
   gre->SetPointError(9,0,0.06803276);
   gre->SetPoint(10,235,0.2205987);
   gre->SetPointError(10,0,0.06277495);
   gre->SetPoint(11,245,0.28009);
   gre->SetPointError(11,0,0.05594418);
   gre->SetPoint(12,255,0.4134877);
   gre->SetPointError(12,0,0.05129335);
   gre->SetPoint(13,265,0.4020402);
   gre->SetPointError(13,0,0.04240933);
   gre->SetPoint(14,275,0.4115678);
   gre->SetPointError(14,0,0.03167837);
   
   TH1F *Graph_gr_T20_15_15_1802 = new TH1F("Graph_gr_T20_15_15_1802","",100,121,289);
   Graph_gr_T20_15_15_1802->SetMinimum(-1.8379);
   Graph_gr_T20_15_15_1802->SetMaximum(1.828369);
   Graph_gr_T20_15_15_1802->SetDirectory(0);
   Graph_gr_T20_15_15_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_1802->SetLineColor(ci);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
