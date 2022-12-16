{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:57:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3306963,297.5,-0.04934913);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.1450125);
   gre->SetPointError(0,0,0.04877214);
   gre->SetPoint(1,195,-0.2183756);
   gre->SetPointError(1,0,0.03837115);
   gre->SetPoint(2,205,-0.2152237);
   gre->SetPointError(2,0,0.0342775);
   gre->SetPoint(3,215,-0.2458283);
   gre->SetPointError(3,0,0.0319741);
   gre->SetPoint(4,225,-0.2046667);
   gre->SetPointError(4,0,0.03218903);
   gre->SetPoint(5,235,-0.1674802);
   gre->SetPointError(5,0,0.03224629);
   gre->SetPoint(6,245,-0.2530577);
   gre->SetPointError(6,0,0.03074738);
   gre->SetPoint(7,255,-0.183939);
   gre->SetPointError(7,0,0.03225142);
   gre->SetPoint(8,265,-0.1768432);
   gre->SetPointError(8,0,0.03127374);
   gre->SetPoint(9,275,-0.1536946);
   gre->SetPointError(9,0,0.02946319);
   
   TH1F *Graph_gr_iT11_15_20_1809 = new TH1F("Graph_gr_iT11_15_20_1809","",100,176,284);
   Graph_gr_iT11_15_20_1809->SetMinimum(-0.3025616);
   Graph_gr_iT11_15_20_1809->SetMaximum(-0.07748384);
   Graph_gr_iT11_15_20_1809->SetDirectory(0);
   Graph_gr_iT11_15_20_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_20_1809->SetLineColor(ci);
   Graph_gr_iT11_15_20_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_20_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_20_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_20_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_20_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_20_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
