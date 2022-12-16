{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:22:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.152035,267.5,0.09649474);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.004887593);
   gre->SetPointError(0,0,0.04473407);
   gre->SetPoint(1,165,0.01049863);
   gre->SetPointError(1,0,0.04457449);
   gre->SetPoint(2,175,-0.000915015);
   gre->SetPointError(2,0,0.04141962);
   gre->SetPoint(3,185,-0.07217007);
   gre->SetPointError(3,0,0.03844329);
   gre->SetPoint(4,195,0.01860285);
   gre->SetPointError(4,0,0.02858529);
   gre->SetPoint(5,205,0.03183599);
   gre->SetPointError(5,0,0.02019605);
   gre->SetPoint(6,215,-0.00265947);
   gre->SetPointError(6,0,0.01464064);
   gre->SetPoint(7,225,0.003008164);
   gre->SetPointError(7,0,0.01108052);
   gre->SetPoint(8,235,-0.006687592);
   gre->SetPointError(8,0,0.01041339);
   gre->SetPoint(9,245,0.001363017);
   gre->SetPointError(9,0,0.01363176);
   
   TH1F *Graph_gr_ImiT11_25_25_18011 = new TH1F("Graph_gr_ImiT11_25_25_18011","",100,146,254);
   Graph_gr_ImiT11_25_25_18011->SetMinimum(-0.127182);
   Graph_gr_ImiT11_25_25_18011->SetMaximum(0.07164177);
   Graph_gr_ImiT11_25_25_18011->SetDirectory(0);
   Graph_gr_ImiT11_25_25_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_25_18011->SetLineColor(ci);
   Graph_gr_ImiT11_25_25_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_25_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
