{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:24:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.5694953,257.5,0.2298649);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01104173);
   gre->SetPointError(0,0,0.07373542);
   gre->SetPoint(1,155,-0.02507929);
   gre->SetPointError(1,0,0.05337726);
   gre->SetPoint(2,165,-0.05503391);
   gre->SetPointError(2,0,0.05557054);
   gre->SetPoint(3,175,0.03839375);
   gre->SetPointError(3,0,0.05824442);
   gre->SetPoint(4,185,-0.2186513);
   gre->SetPointError(4,0,0.04902882);
   gre->SetPoint(5,195,-0.2848711);
   gre->SetPointError(5,0,0.04143024);
   gre->SetPoint(6,205,-0.3401641);
   gre->SetPointError(6,0,0.03380535);
   gre->SetPoint(7,215,-0.4097724);
   gre->SetPointError(7,0,0.02649628);
   gre->SetPoint(8,225,-0.4062451);
   gre->SetPointError(8,0,0.0216232);
   gre->SetPoint(9,235,-0.3983709);
   gre->SetPointError(9,0,0.01899556);
   
   TH1F *Graph_gr_T20_25_25_160136 = new TH1F("Graph_gr_T20_25_25_160136","",100,136,244);
   Graph_gr_T20_25_25_160136->SetMinimum(-0.4895593);
   Graph_gr_T20_25_25_160136->SetMaximum(0.1499288);
   Graph_gr_T20_25_25_160136->SetDirectory(0);
   Graph_gr_T20_25_25_160136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_25_160136->SetLineColor(ci);
   Graph_gr_T20_25_25_160136->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_160136->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_160136->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_160136->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_160136->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_160136->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_160136->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_160136->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_160136->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_160136->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_160136->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_160136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_25_160136);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
