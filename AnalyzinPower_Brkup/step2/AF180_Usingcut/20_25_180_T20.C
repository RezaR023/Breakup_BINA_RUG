{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:51:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.6272839,277.5,0.1997796);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1021563);
   gre->SetPointError(0,0,0.0680178);
   gre->SetPoint(1,175,-0.003388981);
   gre->SetPointError(1,0,0.06532466);
   gre->SetPoint(2,185,-0.1580679);
   gre->SetPointError(2,0,0.04939691);
   gre->SetPoint(3,195,-0.1476241);
   gre->SetPointError(3,0,0.04117617);
   gre->SetPoint(4,205,-0.1919297);
   gre->SetPointError(4,0,0.03363989);
   gre->SetPoint(5,215,-0.3547421);
   gre->SetPointError(5,0,0.02678665);
   gre->SetPoint(6,225,-0.3995265);
   gre->SetPointError(6,0,0.02295916);
   gre->SetPoint(7,235,-0.450168);
   gre->SetPointError(7,0,0.01995666);
   gre->SetPoint(8,245,-0.4648714);
   gre->SetPointError(8,0,0.01906396);
   gre->SetPoint(9,255,-0.4685612);
   gre->SetPointError(9,0,0.02087871);
   
   TH1F *Graph_gr_T20_20_25_18035 = new TH1F("Graph_gr_T20_20_25_18035","",100,156,264);
   Graph_gr_T20_20_25_18035->SetMinimum(-0.5445775);
   Graph_gr_T20_20_25_18035->SetMaximum(0.1170732);
   Graph_gr_T20_20_25_18035->SetDirectory(0);
   Graph_gr_T20_20_25_18035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_25_18035->SetLineColor(ci);
   Graph_gr_T20_20_25_18035->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_18035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_18035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_18035->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_18035->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_18035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_18035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_18035->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_18035->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_18035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_18035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_18035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_25_18035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
