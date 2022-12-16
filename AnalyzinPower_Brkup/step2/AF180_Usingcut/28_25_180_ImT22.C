{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:37:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1514535,257.5,0.1556514);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.02718868);
   gre->SetPointError(0,0,0.05230437);
   gre->SetPoint(1,155,-0.05530166);
   gre->SetPointError(1,0,0.04496767);
   gre->SetPoint(2,165,0.0583135);
   gre->SetPointError(2,0,0.04615374);
   gre->SetPoint(3,175,0.003233989);
   gre->SetPointError(3,0,0.03869325);
   gre->SetPoint(4,185,0.05226618);
   gre->SetPointError(4,0,0.03030894);
   gre->SetPoint(5,195,-0.02267003);
   gre->SetPointError(5,0,0.0224676);
   gre->SetPoint(6,205,-0.01528371);
   gre->SetPointError(6,0,0.01410005);
   gre->SetPoint(7,215,-0.003731206);
   gre->SetPointError(7,0,0.008726487);
   gre->SetPoint(8,225,-0.009131768);
   gre->SetPointError(8,0,0.00539738);
   gre->SetPoint(9,235,-0.01170745);
   gre->SetPointError(9,0,0.005920745);
   
   TH1F *Graph_gr_ImT22_28_25_18077 = new TH1F("Graph_gr_ImT22_28_25_18077","",100,136,244);
   Graph_gr_ImT22_28_25_18077->SetMinimum(-0.120743);
   Graph_gr_ImT22_28_25_18077->SetMaximum(0.1249409);
   Graph_gr_ImT22_28_25_18077->SetDirectory(0);
   Graph_gr_ImT22_28_25_18077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_25_18077->SetLineColor(ci);
   Graph_gr_ImT22_28_25_18077->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18077->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_18077->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18077->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_18077->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_18077->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_18077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_25_18077);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
