{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:48:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(155,-0.159089,275,0.06331495);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.02840626);
   gre->SetPointError(0,0,0.0280037);
   gre->SetPoint(1,185,-0.03675504);
   gre->SetPointError(1,0,0.02292434);
   gre->SetPoint(2,195,-0.01982893);
   gre->SetPointError(2,0,0.02250664);
   gre->SetPoint(3,205,-0.04495385);
   gre->SetPointError(3,0,0.02244969);
   gre->SetPoint(4,215,-0.02085877);
   gre->SetPointError(4,0,0.02519948);
   gre->SetPoint(5,225,-0.002441234);
   gre->SetPointError(5,0,0.02868885);
   gre->SetPoint(6,235,-0.05152259);
   gre->SetPointError(6,0,0.0339479);
   gre->SetPoint(7,245,-0.03458339);
   gre->SetPointError(7,0,0.03580232);
   gre->SetPoint(8,255,-0.08620525);
   gre->SetPointError(8,0,0.03581645);
   
   TH1F *Graph_gr_ImiT11_15_28_14036 = new TH1F("Graph_gr_ImiT11_15_28_14036","",100,167,263);
   Graph_gr_ImiT11_15_28_14036->SetMinimum(-0.1368486);
   Graph_gr_ImiT11_15_28_14036->SetMaximum(0.04107455);
   Graph_gr_ImiT11_15_28_14036->SetDirectory(0);
   Graph_gr_ImiT11_15_28_14036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_14036->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_14036->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14036->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_14036->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14036->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_14036->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14036->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_14036);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
