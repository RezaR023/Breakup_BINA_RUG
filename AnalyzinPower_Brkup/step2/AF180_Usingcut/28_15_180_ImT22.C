{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:16:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1769693,257.5,0.2133386);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.04618069);
   gre->SetPointError(0,0,0.06573729);
   gre->SetPoint(1,155,-0.02798757);
   gre->SetPointError(1,0,0.07578166);
   gre->SetPoint(2,165,-0.03313846);
   gre->SetPointError(2,0,0.07323555);
   gre->SetPoint(3,175,0.08727769);
   gre->SetPointError(3,0,0.06100956);
   gre->SetPoint(4,185,0.03842399);
   gre->SetPointError(4,0,0.05257221);
   gre->SetPoint(5,195,-0.01683342);
   gre->SetPointError(5,0,0.04517412);
   gre->SetPoint(6,205,-0.01004226);
   gre->SetPointError(6,0,0.03565861);
   gre->SetPoint(7,215,-0.02055086);
   gre->SetPointError(7,0,0.02871906);
   gre->SetPoint(8,225,-0.02216435);
   gre->SetPointError(8,0,0.02066723);
   gre->SetPoint(9,235,-0.02619517);
   gre->SetPointError(9,0,0.01247396);
   
   TH1F *Graph_gr_ImT22_28_15_18067 = new TH1F("Graph_gr_ImT22_28_15_18067","",100,136,244);
   Graph_gr_ImT22_28_15_18067->SetMinimum(-0.1379385);
   Graph_gr_ImT22_28_15_18067->SetMaximum(0.1743078);
   Graph_gr_ImT22_28_15_18067->SetDirectory(0);
   Graph_gr_ImT22_28_15_18067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_18067->SetLineColor(ci);
   Graph_gr_ImT22_28_15_18067->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18067->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_18067->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18067->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_18067->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18067->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_18067);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
