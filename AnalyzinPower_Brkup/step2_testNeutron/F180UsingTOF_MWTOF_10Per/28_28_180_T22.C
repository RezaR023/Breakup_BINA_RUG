{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:26:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.7284342,257.5,0.1164503);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.4533225);
   gre->SetPointError(0,0,0.1342976);
   gre->SetPoint(1,155,-0.3788578);
   gre->SetPointError(1,0,0.09444006);
   gre->SetPoint(2,165,-0.2209258);
   gre->SetPointError(2,0,0.09392726);
   gre->SetPoint(3,175,-0.1780262);
   gre->SetPointError(3,0,0.05557301);
   gre->SetPoint(4,185,-0.1448017);
   gre->SetPointError(4,0,0.05860511);
   gre->SetPoint(5,195,-0.06090983);
   gre->SetPointError(5,0,0.03654602);
   gre->SetPoint(6,205,-0.1136875);
   gre->SetPointError(6,0,0.02856648);
   gre->SetPoint(7,215,-0.1119626);
   gre->SetPointError(7,0,0.02199366);
   gre->SetPoint(8,225,-0.1197567);
   gre->SetPointError(8,0,0.02189986);
   gre->SetPoint(9,235,-0.09810353);
   gre->SetPointError(9,0,0.03540393);
   
   TH1F *Graph_gr_T22_28_28_18025 = new TH1F("Graph_gr_T22_28_28_18025","",100,136,244);
   Graph_gr_T22_28_28_18025->SetMinimum(-0.6439457);
   Graph_gr_T22_28_28_18025->SetMaximum(0.03196182);
   Graph_gr_T22_28_28_18025->SetDirectory(0);
   Graph_gr_T22_28_28_18025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_18025->SetLineColor(ci);
   Graph_gr_T22_28_28_18025->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18025->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18025->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18025->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18025->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_18025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
