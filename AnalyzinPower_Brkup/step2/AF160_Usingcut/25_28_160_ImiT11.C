{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:26:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1066955,257.5,0.1255347);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.04299074);
   gre->SetPointError(0,0,0.04383896);
   gre->SetPoint(1,155,-0.01362463);
   gre->SetPointError(1,0,0.03421902);
   gre->SetPoint(2,165,-0.03137214);
   gre->SetPointError(2,0,0.03495831);
   gre->SetPoint(3,175,-0.01524524);
   gre->SetPointError(3,0,0.03279428);
   gre->SetPoint(4,185,0.02198712);
   gre->SetPointError(4,0,0.02910546);
   gre->SetPoint(5,195,-0.0449378);
   gre->SetPointError(5,0,0.02305265);
   gre->SetPoint(6,205,-0.018745);
   gre->SetPointError(6,0,0.01923222);
   gre->SetPoint(7,215,-0.003682133);
   gre->SetPointError(7,0,0.01707289);
   gre->SetPoint(8,225,-0.0139166);
   gre->SetPointError(8,0,0.01553171);
   gre->SetPoint(9,235,0.04432499);
   gre->SetPointError(9,0,0.01640527);
   
   TH1F *Graph_gr_ImiT11_25_28_160140 = new TH1F("Graph_gr_ImiT11_25_28_160140","",100,136,244);
   Graph_gr_ImiT11_25_28_160140->SetMinimum(-0.08347246);
   Graph_gr_ImiT11_25_28_160140->SetMaximum(0.1023117);
   Graph_gr_ImiT11_25_28_160140->SetDirectory(0);
   Graph_gr_ImiT11_25_28_160140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_160140->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_160140->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_160140->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_160140->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_160140->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_160140->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_160140->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_160140->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_160140);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
