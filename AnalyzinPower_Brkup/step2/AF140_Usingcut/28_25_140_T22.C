{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:24:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(112.5,-0.1834619,247.5,0.1158658);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.005757917);
   gre->SetPointError(0,0,0.05183228);
   gre->SetPoint(1,145,-0.09761566);
   gre->SetPointError(1,0,0.03595831);
   gre->SetPoint(2,155,-0.03751134);
   gre->SetPointError(2,0,0.03419032);
   gre->SetPoint(3,165,-0.04476306);
   gre->SetPointError(3,0,0.03619768);
   gre->SetPoint(4,175,-0.03378398);
   gre->SetPointError(4,0,0.0360192);
   gre->SetPoint(5,185,-0.02844553);
   gre->SetPointError(5,0,0.03896769);
   gre->SetPoint(6,195,0.02144272);
   gre->SetPointError(6,0,0.03544398);
   gre->SetPoint(7,205,0.03301839);
   gre->SetPointError(7,0,0.03295945);
   gre->SetPoint(8,215,-0.03481147);
   gre->SetPointError(8,0,0.028168);
   gre->SetPoint(9,225,-0.02348917);
   gre->SetPointError(9,0,0.02514742);
   
   TH1F *Graph_gr_T22_28_25_14054 = new TH1F("Graph_gr_T22_28_25_14054","",100,126,234);
   Graph_gr_T22_28_25_14054->SetMinimum(-0.1535292);
   Graph_gr_T22_28_25_14054->SetMaximum(0.08593302);
   Graph_gr_T22_28_25_14054->SetDirectory(0);
   Graph_gr_T22_28_25_14054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_14054->SetLineColor(ci);
   Graph_gr_T22_28_25_14054->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14054->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14054->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14054->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_14054->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14054->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14054->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14054->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_14054->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14054->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14054->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_14054);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
