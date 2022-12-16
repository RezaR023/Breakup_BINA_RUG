{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:55:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(125,-0.2235317,245,0.1866805);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.03979788);
   gre->SetPointError(0,0,0.03751883);
   gre->SetPoint(1,155,-0.0571484);
   gre->SetPointError(1,0,0.03312226);
   gre->SetPoint(2,165,-0.1196758);
   gre->SetPointError(2,0,0.03548727);
   gre->SetPoint(3,175,-0.06610074);
   gre->SetPointError(3,0,0.03560082);
   gre->SetPoint(4,185,-0.04053383);
   gre->SetPointError(4,0,0.04112634);
   gre->SetPoint(5,195,-0.001210227);
   gre->SetPointError(5,0,0.04522705);
   gre->SetPoint(6,205,0.03182652);
   gre->SetPointError(6,0,0.04838928);
   gre->SetPoint(7,215,0.07412114);
   gre->SetPointError(7,0,0.04419062);
   gre->SetPoint(8,225,-0.001916384);
   gre->SetPointError(8,0,0.03468076);
   
   TH1F *Graph_gr_ImiT11_28_20_14046 = new TH1F("Graph_gr_ImiT11_28_20_14046","",100,137,233);
   Graph_gr_ImiT11_28_20_14046->SetMinimum(-0.1825105);
   Graph_gr_ImiT11_28_20_14046->SetMaximum(0.1456592);
   Graph_gr_ImiT11_28_20_14046->SetDirectory(0);
   Graph_gr_ImiT11_28_20_14046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_14046->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_14046->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14046->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_14046->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14046->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_14046->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_14046->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_14046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_14046);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
