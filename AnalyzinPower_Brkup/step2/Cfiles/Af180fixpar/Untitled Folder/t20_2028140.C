{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:53:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.069,-0.774421,269.451,0.05340955);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,159.966,-0.2209247);
   gre->SetPointError(0,0,0.07991911);
   gre->SetPoint(1,169.698,-0.1739309);
   gre->SetPointError(1,0,0.08936872);
   gre->SetPoint(2,179.43,-0.1907218);
   gre->SetPointError(2,0,0.0833267);
   gre->SetPoint(3,189.162,-0.2485702);
   gre->SetPointError(3,0,0.0827431);
   gre->SetPoint(4,198.894,-0.3622928);
   gre->SetPointError(4,0,0.0751298);
   gre->SetPoint(5,208.626,-0.2103831);
   gre->SetPointError(5,0,0.0868051);
   gre->SetPoint(6,218.358,-0.4780901);
   gre->SetPointError(6,0,0.07989731);
   gre->SetPoint(7,228.09,-0.4379285);
   gre->SetPointError(7,0,0.08815181);
   gre->SetPoint(8,237.822,-0.5542906);
   gre->SetPointError(8,0,0.0821586);
   gre->SetPoint(9,247.554,-0.2369045);
   gre->SetPointError(9,0,0.09329409);
   
   TH1F *Graph_gr_T20_20_28_14011 = new TH1F("Graph_gr_T20_20_28_14011","",100,151.2072,256.3128);
   Graph_gr_T20_20_28_14011->SetMinimum(-0.6916379);
   Graph_gr_T20_20_28_14011->SetMaximum(-0.02937351);
   Graph_gr_T20_20_28_14011->SetDirectory(0);
   Graph_gr_T20_20_28_14011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_14011->SetLineColor(ci);
   Graph_gr_T20_20_28_14011->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14011->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_14011->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14011->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_14011->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_14011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_14011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_14011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_14011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
