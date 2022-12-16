{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:23:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1821604,257.5,0.1854772);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.06291165);
   gre->SetPointError(0,0,0.06129264);
   gre->SetPoint(1,155,-0.01379849);
   gre->SetPointError(1,0,0.05516721);
   gre->SetPoint(2,165,-0.07444135);
   gre->SetPointError(2,0,0.04644612);
   gre->SetPoint(3,175,-0.03704334);
   gre->SetPointError(3,0,0.04577019);
   gre->SetPoint(4,185,-0.04520551);
   gre->SetPointError(4,0,0.04440347);
   gre->SetPoint(5,195,0.03576761);
   gre->SetPointError(5,0,0.0338153);
   gre->SetPoint(6,205,-0.002468853);
   gre->SetPointError(6,0,0.0304483);
   gre->SetPoint(7,215,0.04539274);
   gre->SetPointError(7,0,0.0243261);
   gre->SetPoint(8,225,0.01661524);
   gre->SetPointError(8,0,0.01797919);
   gre->SetPoint(9,235,0.02349625);
   gre->SetPointError(9,0,0.01268707);
   
   TH1F *Graph_gr_ImiT11_28_15_18013 = new TH1F("Graph_gr_ImiT11_28_15_18013","",100,136,244);
   Graph_gr_ImiT11_28_15_18013->SetMinimum(-0.1453966);
   Graph_gr_ImiT11_28_15_18013->SetMaximum(0.1487135);
   Graph_gr_ImiT11_28_15_18013->SetDirectory(0);
   Graph_gr_ImiT11_28_15_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_18013->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
