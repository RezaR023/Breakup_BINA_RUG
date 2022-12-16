{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:07:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-1.561769,310,1.771799);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.01833483);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.01833483);
   gre->SetPoint(2,155,-0.1663894);
   gre->SetPointError(2,0,0.01833483);
   gre->SetPoint(3,165,0.1050151);
   gre->SetPointError(3,0,1.111189);
   gre->SetPoint(4,175,-0.09010942);
   gre->SetPointError(4,0,0.07758478);
   gre->SetPoint(5,185,-0.12785);
   gre->SetPointError(5,0,0.04645568);
   gre->SetPoint(6,195,-0.08434235);
   gre->SetPointError(6,0,0.04386462);
   gre->SetPoint(7,205,-0.06341777);
   gre->SetPointError(7,0,0.04251754);
   gre->SetPoint(8,215,-0.04726225);
   gre->SetPointError(8,0,0.03669946);
   gre->SetPoint(9,225,-0.05035387);
   gre->SetPointError(9,0,0.03699859);
   gre->SetPoint(10,235,-0.04193859);
   gre->SetPointError(10,0,0.03370296);
   gre->SetPoint(11,245,0.004429933);
   gre->SetPointError(11,0,0.02974224);
   gre->SetPoint(12,255,0.1161521);
   gre->SetPointError(12,0,0.02681509);
   gre->SetPoint(13,265,0.1437251);
   gre->SetPointError(13,0,0.02340071);
   gre->SetPoint(14,275,0.1369952);
   gre->SetPointError(14,0,0.01844389);
   
   TH1F *Graph_gr_iT11_15_15_16014 = new TH1F("Graph_gr_iT11_15_15_16014","",100,121,289);
   Graph_gr_iT11_15_15_16014->SetMinimum(-1.228412);
   Graph_gr_iT11_15_15_16014->SetMaximum(1.438442);
   Graph_gr_iT11_15_15_16014->SetDirectory(0);
   Graph_gr_iT11_15_15_16014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_16014->SetLineColor(ci);
   Graph_gr_iT11_15_15_16014->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16014->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_16014->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16014->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_16014->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_16014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_16014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_16014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_16014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
