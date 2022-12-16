{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:21:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.2041298,297.5,0.0444373);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.0734774);
   gre->SetPointError(0,0,0.04361575);
   gre->SetPoint(1,195,-0.0955586);
   gre->SetPointError(1,0,0.0348034);
   gre->SetPoint(2,205,-0.1313994);
   gre->SetPointError(2,0,0.03130255);
   gre->SetPoint(3,215,-0.08230168);
   gre->SetPointError(3,0,0.02850591);
   gre->SetPoint(4,225,-0.02425922);
   gre->SetPointError(4,0,0.02726867);
   gre->SetPoint(5,235,-0.0247515);
   gre->SetPointError(5,0,0.02568292);
   gre->SetPoint(6,245,-0.02692372);
   gre->SetPointError(6,0,0.02371051);
   gre->SetPoint(7,255,-0.06927876);
   gre->SetPointError(7,0,0.02331446);
   gre->SetPoint(8,265,-0.0813562);
   gre->SetPointError(8,0,0.02321904);
   gre->SetPoint(9,275,-0.09523076);
   gre->SetPointError(9,0,0.0220361);
   
   TH1F *Graph_gr_T22_15_20_18012 = new TH1F("Graph_gr_T22_15_20_18012","",100,176,284);
   Graph_gr_T22_15_20_18012->SetMinimum(-0.1792731);
   Graph_gr_T22_15_20_18012->SetMaximum(0.01958059);
   Graph_gr_T22_15_20_18012->SetDirectory(0);
   Graph_gr_T22_15_20_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_20_18012->SetLineColor(ci);
   Graph_gr_T22_15_20_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_20_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_20_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_20_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_20_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_20_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
