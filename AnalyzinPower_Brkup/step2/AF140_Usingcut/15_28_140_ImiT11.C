{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:48:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(155,-0.09718734,275,0.0736212);
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
   gre->SetPoint(0,175,0.002603688);
   gre->SetPointError(0,0,0.03668094);
   gre->SetPoint(1,185,0.01177034);
   gre->SetPointError(1,0,0.03057883);
   gre->SetPoint(2,195,0.007981521);
   gre->SetPointError(2,0,0.02788351);
   gre->SetPoint(3,205,0.004294812);
   gre->SetPointError(3,0,0.0280351);
   gre->SetPoint(4,215,-0.01347653);
   gre->SetPointError(4,0,0.02798935);
   gre->SetPoint(5,225,0.01613716);
   gre->SetPointError(5,0,0.02901595);
   gre->SetPoint(6,235,0.003621812);
   gre->SetPointError(6,0,0.03320222);
   gre->SetPoint(7,245,-0.03305073);
   gre->SetPointError(7,0,0.03566851);
   gre->SetPoint(8,255,-0.02472166);
   gre->SetPointError(8,0,0.03495569);
   
   TH1F *Graph_gr_ImiT11_15_28_140183 = new TH1F("Graph_gr_ImiT11_15_28_140183","",100,167,263);
   Graph_gr_ImiT11_15_28_140183->SetMinimum(-0.08010648);
   Graph_gr_ImiT11_15_28_140183->SetMaximum(0.05654035);
   Graph_gr_ImiT11_15_28_140183->SetDirectory(0);
   Graph_gr_ImiT11_15_28_140183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_140183->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_140183->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_140183->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_140183->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_140183->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_140183->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_140183->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_140183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_140183);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
