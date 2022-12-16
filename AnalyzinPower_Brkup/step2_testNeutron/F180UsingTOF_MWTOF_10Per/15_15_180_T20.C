{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:16:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-1.272698,297.5,0.6970579);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.6745911);
   gre->SetPointError(0,0,0.2148424);
   gre->SetPoint(1,195,-0.7736621);
   gre->SetPointError(1,0,0.1707429);
   gre->SetPoint(2,205,-0.6579272);
   gre->SetPointError(2,0,0.18881);
   gre->SetPoint(3,215,-0.7023826);
   gre->SetPointError(3,0,0.1738025);
   gre->SetPoint(4,225,-0.4870859);
   gre->SetPointError(4,0,0.173423);
   gre->SetPoint(5,235,-0.3511104);
   gre->SetPointError(5,0,0.1658597);
   gre->SetPoint(6,245,0.04679175);
   gre->SetPointError(6,0,0.1737498);
   gre->SetPoint(7,255,0.194352);
   gre->SetPointError(7,0,0.1538774);
   gre->SetPoint(8,265,0.2262275);
   gre->SetPointError(8,0,0.1425378);
   gre->SetPoint(9,275,0.1955965);
   gre->SetPointError(9,0,0.1342447);
   
   TH1F *Graph_gr_T20_15_15_18018 = new TH1F("Graph_gr_T20_15_15_18018","",100,176,284);
   Graph_gr_T20_15_15_18018->SetMinimum(-1.075722);
   Graph_gr_T20_15_15_18018->SetMaximum(0.5000823);
   Graph_gr_T20_15_15_18018->SetDirectory(0);
   Graph_gr_T20_15_15_18018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_18018->SetLineColor(ci);
   Graph_gr_T20_15_15_18018->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18018->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_18018->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18018->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_18018->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_18018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
