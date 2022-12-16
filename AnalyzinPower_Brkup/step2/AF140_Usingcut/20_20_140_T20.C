{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:39:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.5199815,277.5,0.2947023);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.08198279);
   gre->SetPointError(0,0,0.07693884);
   gre->SetPoint(1,175,0.02742002);
   gre->SetPointError(1,0,0.07166828);
   gre->SetPoint(2,185,0.03596146);
   gre->SetPointError(2,0,0.08141018);
   gre->SetPoint(3,195,-0.2154801);
   gre->SetPointError(3,0,0.07375691);
   gre->SetPoint(4,205,-0.2073226);
   gre->SetPointError(4,0,0.07272934);
   gre->SetPoint(5,215,-0.2812353);
   gre->SetPointError(5,0,0.06805343);
   gre->SetPoint(6,225,-0.1827875);
   gre->SetPointError(6,0,0.06862942);
   gre->SetPoint(7,235,-0.2171351);
   gre->SetPointError(7,0,0.06457944);
   gre->SetPoint(8,245,-0.3276693);
   gre->SetPointError(8,0,0.05653157);
   gre->SetPoint(9,255,-0.1952682);
   gre->SetPointError(9,0,0.05475957);
   
   TH1F *Graph_gr_T20_20_20_1408 = new TH1F("Graph_gr_T20_20_20_1408","",100,156,264);
   Graph_gr_T20_20_20_1408->SetMinimum(-0.4385131);
   Graph_gr_T20_20_20_1408->SetMaximum(0.2132339);
   Graph_gr_T20_20_20_1408->SetDirectory(0);
   Graph_gr_T20_20_20_1408->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_1408->SetLineColor(ci);
   Graph_gr_T20_20_20_1408->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1408->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1408->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1408->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1408->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1408->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1408->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1408->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1408->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1408->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1408->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_1408);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
