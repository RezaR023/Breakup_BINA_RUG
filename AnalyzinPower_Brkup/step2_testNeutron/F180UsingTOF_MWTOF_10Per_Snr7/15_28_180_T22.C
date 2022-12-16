{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:51:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(150,-0.3567255,270,0.1805782);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,-0.1875057);
   gre->SetPointError(0,0,0.07966911);
   gre->SetPoint(1,190,-0.03650213);
   gre->SetPointError(1,0,0.03911159);
   gre->SetPoint(2,210,-0.08850599);
   gre->SetPointError(2,0,0.03536535);
   gre->SetPoint(3,230,-0.1048053);
   gre->SetPointError(3,0,0.03598829);
   gre->SetPoint(4,250,0.04054104);
   gre->SetPointError(4,0,0.05048655);
   
   TH1F *Graph_gr_T22_15_28_18013 = new TH1F("Graph_gr_T22_15_28_18013","",100,162,258);
   Graph_gr_T22_15_28_18013->SetMinimum(-0.3029951);
   Graph_gr_T22_15_28_18013->SetMaximum(0.1268478);
   Graph_gr_T22_15_28_18013->SetDirectory(0);
   Graph_gr_T22_15_28_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_18013->SetLineColor(ci);
   Graph_gr_T22_15_28_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
