{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:37:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-1.03372,310,1.556116);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.06244159);
   gre->SetPointError(0,0,0.04033182);
   gre->SetPoint(1,145,-0.0875128);
   gre->SetPointError(1,0,0.03276722);
   gre->SetPoint(2,155,-0.02148266);
   gre->SetPointError(2,0,0.03004386);
   gre->SetPoint(3,165,-0.003381561);
   gre->SetPointError(3,0,0.03031642);
   gre->SetPoint(4,175,-0.017846);
   gre->SetPointError(4,0,0.03056588);
   gre->SetPoint(5,185,0.03585845);
   gre->SetPointError(5,0,0.03314296);
   gre->SetPoint(6,195,0.06718047);
   gre->SetPointError(6,0,0.03203243);
   gre->SetPoint(7,205,0.08032676);
   gre->SetPointError(7,0,0.03168813);
   gre->SetPoint(8,215,-0.006894654);
   gre->SetPointError(8,0,0.02601676);
   gre->SetPoint(9,225,-0.02432052);
   gre->SetPointError(9,0,0.02041676);
   gre->SetPoint(10,235,0.5289859);
   gre->SetPointError(10,0,0.595491);
   gre->SetPoint(11,245,-0.006589786);
   gre->SetPointError(11,0,0.595491);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.595491);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.595491);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.595491);
   
   TH1F *Graph_gr_T22_28_25_14012 = new TH1F("Graph_gr_T22_28_25_14012","",100,121,289);
   Graph_gr_T22_28_25_14012->SetMinimum(-0.7747365);
   Graph_gr_T22_28_25_14012->SetMaximum(1.297133);
   Graph_gr_T22_28_25_14012->SetDirectory(0);
   Graph_gr_T22_28_25_14012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_14012->SetLineColor(ci);
   Graph_gr_T22_28_25_14012->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14012->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_14012->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14012->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_14012->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_14012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_14012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_14012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_14012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
