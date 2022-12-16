{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:30:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1962177,287.5,0.1089135);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1102177);
   gre->SetPointError(0,0,0.02353771);
   gre->SetPoint(1,185,-0.1260883);
   gre->SetPointError(1,0,0.01927419);
   gre->SetPoint(2,195,-0.07662549);
   gre->SetPointError(2,0,0.01640776);
   gre->SetPoint(3,205,-0.09533047);
   gre->SetPointError(3,0,0.01533166);
   gre->SetPoint(4,215,-0.04434317);
   gre->SetPointError(4,0,0.01502208);
   gre->SetPoint(5,225,-0.03542307);
   gre->SetPointError(5,0,0.01496775);
   gre->SetPoint(6,235,0.02183163);
   gre->SetPointError(6,0,0.01628201);
   gre->SetPoint(7,245,0.007982026);
   gre->SetPointError(7,0,0.01924084);
   gre->SetPoint(8,255,0.01227589);
   gre->SetPointError(8,0,0.0212783);
   gre->SetPoint(9,265,0.03241571);
   gre->SetPointError(9,0,0.0256426);
   
   TH1F *Graph_gr_T22_15_28_18022 = new TH1F("Graph_gr_T22_15_28_18022","",100,166,274);
   Graph_gr_T22_15_28_18022->SetMinimum(-0.1657046);
   Graph_gr_T22_15_28_18022->SetMaximum(0.07840039);
   Graph_gr_T22_15_28_18022->SetDirectory(0);
   Graph_gr_T22_15_28_18022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_18022->SetLineColor(ci);
   Graph_gr_T22_15_28_18022->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18022->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18022->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18022->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18022->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_18022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
