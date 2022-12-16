{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:03:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.2969157,310,0.2966154);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.0316045);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.0316045);
   gre->SetPoint(2,155,-0.1663894);
   gre->SetPointError(2,0,0.0316045);
   gre->SetPoint(3,165,0.1361981);
   gre->SetPointError(3,0,0.06149546);
   gre->SetPoint(4,175,0.003927503);
   gre->SetPointError(4,0,0.04768497);
   gre->SetPoint(5,185,-0.02192135);
   gre->SetPointError(5,0,0.05247041);
   gre->SetPoint(6,195,-0.06036437);
   gre->SetPointError(6,0,0.04236255);
   gre->SetPoint(7,205,-0.1061264);
   gre->SetPointError(7,0,0.04298101);
   gre->SetPoint(8,215,-0.07293755);
   gre->SetPointError(8,0,0.03830155);
   gre->SetPoint(9,225,-0.06474456);
   gre->SetPointError(9,0,0.0324721);
   gre->SetPoint(10,235,-0.0437527);
   gre->SetPointError(10,0,0.02943934);
   gre->SetPoint(11,245,0.004374534);
   gre->SetPointError(11,0,0.02331902);
   gre->SetPoint(12,255,0.01558442);
   gre->SetPointError(12,0,0.01838035);
   gre->SetPoint(13,265,0.03738028);
   gre->SetPointError(13,0,0.0138155);
   gre->SetPoint(14,275,0.02229396);
   gre->SetPointError(14,0,0.03974792);
   
   TH1F *Graph_gr_iT11_20_20_1808 = new TH1F("Graph_gr_iT11_20_20_1808","",100,121,289);
   Graph_gr_iT11_20_20_1808->SetMinimum(-0.2375626);
   Graph_gr_iT11_20_20_1808->SetMaximum(0.2372623);
   Graph_gr_iT11_20_20_1808->SetDirectory(0);
   Graph_gr_iT11_20_20_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_1808->SetLineColor(ci);
   Graph_gr_iT11_20_20_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
