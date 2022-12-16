{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:03:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1935074,297.5,0.07021772);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.04339801);
   gre->SetPointError(0,0,0.0389524);
   gre->SetPoint(1,195,-0.08184481);
   gre->SetPointError(1,0,0.03280265);
   gre->SetPoint(2,205,-0.1006587);
   gre->SetPointError(2,0,0.02828831);
   gre->SetPoint(3,215,-0.1237869);
   gre->SetPointError(3,0,0.02576637);
   gre->SetPoint(4,225,-0.01653878);
   gre->SetPointError(4,0,0.02385735);
   gre->SetPoint(5,235,-0.04495705);
   gre->SetPointError(5,0,0.02343223);
   gre->SetPoint(6,245,-0.03517099);
   gre->SetPointError(6,0,0.0220781);
   gre->SetPoint(7,255,0.004152569);
   gre->SetPointError(7,0,0.02211096);
   gre->SetPoint(8,265,-0.02661068);
   gre->SetPointError(8,0,0.02173361);
   gre->SetPoint(9,275,-0.07847242);
   gre->SetPointError(9,0,0.02146458);
   
   TH1F *Graph_gr_T22_15_20_16092 = new TH1F("Graph_gr_T22_15_20_16092","",100,176,284);
   Graph_gr_T22_15_20_16092->SetMinimum(-0.1671349);
   Graph_gr_T22_15_20_16092->SetMaximum(0.04384521);
   Graph_gr_T22_15_20_16092->SetDirectory(0);
   Graph_gr_T22_15_20_16092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_20_16092->SetLineColor(ci);
   Graph_gr_T22_15_20_16092->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_16092->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_16092->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_16092->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_16092->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_16092->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_16092->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_16092->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_16092->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_16092->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_16092->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_16092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_20_16092);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
