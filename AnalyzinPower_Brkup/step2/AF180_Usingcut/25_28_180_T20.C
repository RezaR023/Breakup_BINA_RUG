{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:14:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.5923379,257.5,0.3801213);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.09994557);
   gre->SetPointError(0,0,0.07655711);
   gre->SetPoint(1,155,0.1454213);
   gre->SetPointError(1,0,0.07262344);
   gre->SetPoint(2,165,-0.08289017);
   gre->SetPointError(2,0,0.06222909);
   gre->SetPoint(3,175,-0.2361732);
   gre->SetPointError(3,0,0.04759015);
   gre->SetPoint(4,185,-0.2968256);
   gre->SetPointError(4,0,0.03456343);
   gre->SetPoint(5,195,-0.3466351);
   gre->SetPointError(5,0,0.02450161);
   gre->SetPoint(6,205,-0.3597287);
   gre->SetPointError(6,0,0.01726192);
   gre->SetPoint(7,215,-0.3988173);
   gre->SetPointError(7,0,0.01259619);
   gre->SetPoint(8,225,-0.399902);
   gre->SetPointError(8,0,0.01051166);
   gre->SetPoint(9,235,-0.4186352);
   gre->SetPointError(9,0,0.01162614);
   
   TH1F *Graph_gr_T20_25_28_18060 = new TH1F("Graph_gr_T20_25_28_18060","",100,136,244);
   Graph_gr_T20_25_28_18060->SetMinimum(-0.495092);
   Graph_gr_T20_25_28_18060->SetMaximum(0.2828753);
   Graph_gr_T20_25_28_18060->SetDirectory(0);
   Graph_gr_T20_25_28_18060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_28_18060->SetLineColor(ci);
   Graph_gr_T20_25_28_18060->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_18060->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_18060->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_18060->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_18060->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_18060->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_18060->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_18060->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_18060->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_18060->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_18060->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_18060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_28_18060);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
