{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:13:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.188565,287.5,0.03285736);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.03805946);
   gre->SetPointError(0,0,0.0340131);
   gre->SetPoint(1,185,-0.0731403);
   gre->SetPointError(1,0,0.03799578);
   gre->SetPoint(2,195,-0.1127862);
   gre->SetPointError(2,0,0.03887504);
   gre->SetPoint(3,205,-0.08728717);
   gre->SetPointError(3,0,0.03255204);
   gre->SetPoint(4,215,-0.1123736);
   gre->SetPointError(4,0,0.02831062);
   gre->SetPoint(5,225,-0.04889551);
   gre->SetPointError(5,0,0.02512158);
   gre->SetPoint(6,235,-0.07953499);
   gre->SetPointError(6,0,0.02253807);
   gre->SetPoint(7,245,-0.07279022);
   gre->SetPointError(7,0,0.02022872);
   gre->SetPoint(8,255,-0.1127115);
   gre->SetPointError(8,0,0.0176589);
   gre->SetPoint(9,265,-0.1337363);
   gre->SetPointError(9,0,0.01480425);
   
   TH1F *Graph_gr_T22_20_20_160112 = new TH1F("Graph_gr_T22_20_20_160112","",100,166,274);
   Graph_gr_T22_20_20_160112->SetMinimum(-0.1664228);
   Graph_gr_T22_20_20_160112->SetMaximum(0.01071513);
   Graph_gr_T22_20_20_160112->SetDirectory(0);
   Graph_gr_T22_20_20_160112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_160112->SetLineColor(ci);
   Graph_gr_T22_20_20_160112->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_160112->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_160112->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_160112->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_160112->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_160112->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_160112->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_160112->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_160112->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_160112->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_160112->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_160112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_160112);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
