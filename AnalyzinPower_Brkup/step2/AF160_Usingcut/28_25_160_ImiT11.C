{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:33:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(125,-0.0940151,245,0.1019646);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.02080527);
   gre->SetPointError(0,0,0.04054656);
   gre->SetPoint(1,155,-0.01494251);
   gre->SetPointError(1,0,0.03949916);
   gre->SetPoint(2,165,9.407045e-06);
   gre->SetPointError(2,0,0.04096183);
   gre->SetPoint(3,175,0.006603326);
   gre->SetPointError(3,0,0.03901576);
   gre->SetPoint(4,185,0.01453576);
   gre->SetPointError(4,0,0.03635803);
   gre->SetPoint(5,195,0.03485602);
   gre->SetPointError(5,0,0.03444527);
   gre->SetPoint(6,205,0.008330367);
   gre->SetPointError(6,0,0.02857286);
   gre->SetPoint(7,215,0.01399051);
   gre->SetPointError(7,0,0.02185041);
   gre->SetPoint(8,225,-0.003118512);
   gre->SetPointError(8,0,0.01652474);
   
   TH1F *Graph_gr_ImiT11_28_25_160155 = new TH1F("Graph_gr_ImiT11_28_25_160155","",100,137,233);
   Graph_gr_ImiT11_28_25_160155->SetMinimum(-0.07441713);
   Graph_gr_ImiT11_28_25_160155->SetMaximum(0.0823666);
   Graph_gr_ImiT11_28_25_160155->SetDirectory(0);
   Graph_gr_ImiT11_28_25_160155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_160155->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_160155->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_160155->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_160155->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_160155->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_160155->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_160155->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_160155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_160155);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
