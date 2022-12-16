{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:49:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.7859687,290,0.1319148);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T20_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.5023923);
   gre->SetPointError(0,0,0.1305958);
   gre->SetPoint(1,175,-0.2658905);
   gre->SetPointError(1,0,0.07704226);
   gre->SetPoint(2,185,-0.1496463);
   gre->SetPointError(2,0,0.08288614);
   gre->SetPoint(3,195,-0.2659437);
   gre->SetPointError(3,0,0.07088294);
   gre->SetPoint(4,205,-0.2813408);
   gre->SetPointError(4,0,0.06336108);
   gre->SetPoint(5,215,-0.3648726);
   gre->SetPointError(5,0,0.0532207);
   gre->SetPoint(6,225,-0.330208);
   gre->SetPointError(6,0,0.04573644);
   gre->SetPoint(7,235,-0.282606);
   gre->SetPointError(7,0,0.03997974);
   gre->SetPoint(8,245,-0.1997384);
   gre->SetPointError(8,0,0.03272751);
   gre->SetPoint(9,255,-0.1512051);
   gre->SetPointError(9,0,0.02549415);
   gre->SetPoint(10,265,-0.04158059);
   gre->SetPointError(10,0,0.0205148);
   
   TH1F *Graph_gr_T20_20_20_18030 = new TH1F("Graph_gr_T20_20_20_18030","",100,155,275);
   Graph_gr_T20_20_20_18030->SetMinimum(-0.6941803);
   Graph_gr_T20_20_20_18030->SetMaximum(0.04012644);
   Graph_gr_T20_20_20_18030->SetDirectory(0);
   Graph_gr_T20_20_20_18030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_18030->SetLineColor(ci);
   Graph_gr_T20_20_20_18030->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_18030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_18030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_18030->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_18030->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_18030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_18030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_18030->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_18030->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_18030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_18030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_18030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_18030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
