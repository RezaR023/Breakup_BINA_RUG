{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:07:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.225101,255,0.1614968);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.05501672);
   gre->SetPointError(0,0,0.03985008);
   gre->SetPoint(1,165,-0.01129694);
   gre->SetPointError(1,0,0.04039884);
   gre->SetPoint(2,175,-0.006886683);
   gre->SetPointError(2,0,0.04520148);
   gre->SetPoint(3,185,-0.0007420442);
   gre->SetPointError(3,0,0.04813849);
   gre->SetPoint(4,195,0.004839489);
   gre->SetPointError(4,0,0.04526557);
   gre->SetPoint(5,205,0.04572799);
   gre->SetPointError(5,0,0.05133586);
   gre->SetPoint(6,215,-0.03835036);
   gre->SetPointError(6,0,0.04780622);
   gre->SetPoint(7,225,-0.1147642);
   gre->SetPointError(7,0,0.04590383);
   gre->SetPoint(8,235,-0.000300959);
   gre->SetPointError(8,0,0.03908875);
   
   TH1F *Graph_gr_ImiT11_25_25_14032 = new TH1F("Graph_gr_ImiT11_25_25_14032","",100,147,243);
   Graph_gr_ImiT11_25_25_14032->SetMinimum(-0.1864412);
   Graph_gr_ImiT11_25_25_14032->SetMaximum(0.122837);
   Graph_gr_ImiT11_25_25_14032->SetDirectory(0);
   Graph_gr_ImiT11_25_25_14032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_25_14032->SetLineColor(ci);
   Graph_gr_ImiT11_25_25_14032->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14032->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_14032->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14032->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_14032->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_14032->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_14032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_25_14032);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
