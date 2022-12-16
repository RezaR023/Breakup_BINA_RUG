{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:19:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3530124,257.5,0.4501843);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1262708);
   gre->SetPointError(0,0,0.09287556);
   gre->SetPoint(1,155,0.2203795);
   gre->SetPointError(1,0,0.09593864);
   gre->SetPoint(2,165,0.1249603);
   gre->SetPointError(2,0,0.09098222);
   gre->SetPoint(3,175,0.1172473);
   gre->SetPointError(3,0,0.08420094);
   gre->SetPoint(4,185,0.08893582);
   gre->SetPointError(4,0,0.07418359);
   gre->SetPoint(5,195,0.07777471);
   gre->SetPointError(5,0,0.06371297);
   gre->SetPoint(6,205,0.2369687);
   gre->SetPointError(6,0,0.05345074);
   gre->SetPoint(7,215,0.2512553);
   gre->SetPointError(7,0,0.03802559);
   gre->SetPoint(8,225,0.2598571);
   gre->SetPointError(8,0,0.02309459);
   gre->SetPoint(9,235,0.2016209);
   gre->SetPointError(9,0,0.01241814);
   
   TH1F *Graph_gr_T20_28_20_18070 = new TH1F("Graph_gr_T20_28_20_18070","",100,136,244);
   Graph_gr_T20_28_20_18070->SetMinimum(-0.2726928);
   Graph_gr_T20_28_20_18070->SetMaximum(0.3698646);
   Graph_gr_T20_28_20_18070->SetDirectory(0);
   Graph_gr_T20_28_20_18070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_20_18070->SetLineColor(ci);
   Graph_gr_T20_28_20_18070->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18070->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18070->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18070->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_18070->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18070->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18070->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18070->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_18070->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18070->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18070->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_20_18070);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
