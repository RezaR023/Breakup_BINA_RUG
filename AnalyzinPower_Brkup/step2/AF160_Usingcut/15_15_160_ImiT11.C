{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:47:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3831628,297.5,0.1594666);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.01733795);
   gre->SetPointError(0,0,0.05169041);
   gre->SetPoint(1,195,-0.09236097);
   gre->SetPointError(1,0,0.0497908);
   gre->SetPoint(2,205,-0.2448077);
   gre->SetPointError(2,0,0.04791692);
   gre->SetPoint(3,215,-0.1631903);
   gre->SetPointError(3,0,0.04199282);
   gre->SetPoint(4,225,-0.04772091);
   gre->SetPointError(4,0,0.03869493);
   gre->SetPoint(5,235,-0.08241737);
   gre->SetPointError(5,0,0.04030105);
   gre->SetPoint(6,245,0.01743783);
   gre->SetPointError(6,0,0.03023015);
   gre->SetPoint(7,255,-0.1009603);
   gre->SetPointError(7,0,0.02701868);
   gre->SetPoint(8,265,-0.08564652);
   gre->SetPointError(8,0,0.02570227);
   gre->SetPoint(9,275,-0.1132593);
   gre->SetPointError(9,0,0.02073553);
   
   TH1F *Graph_gr_ImiT11_15_15_16084 = new TH1F("Graph_gr_ImiT11_15_15_16084","",100,176,284);
   Graph_gr_ImiT11_15_15_16084->SetMinimum(-0.3288999);
   Graph_gr_ImiT11_15_15_16084->SetMaximum(0.1052037);
   Graph_gr_ImiT11_15_15_16084->SetDirectory(0);
   Graph_gr_ImiT11_15_15_16084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_16084->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_16084->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16084->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_16084->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16084->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_16084->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16084->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_16084);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
