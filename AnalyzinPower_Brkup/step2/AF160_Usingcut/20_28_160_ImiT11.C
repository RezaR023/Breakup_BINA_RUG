{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:17:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1084721,277.5,0.06769627);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.04576425);
   gre->SetPointError(0,0,0.03334645);
   gre->SetPoint(1,175,0.008089494);
   gre->SetPointError(1,0,0.03024538);
   gre->SetPoint(2,185,-0.02840177);
   gre->SetPointError(2,0,0.02485258);
   gre->SetPoint(3,195,0.01343197);
   gre->SetPointError(3,0,0.02108049);
   gre->SetPoint(4,205,-0.00734662);
   gre->SetPointError(4,0,0.01880139);
   gre->SetPoint(5,215,0.001744184);
   gre->SetPointError(5,0,0.01774141);
   gre->SetPoint(6,225,-0.0329499);
   gre->SetPointError(6,0,0.01724644);
   gre->SetPoint(7,235,-0.002755036);
   gre->SetPointError(7,0,0.01687586);
   gre->SetPoint(8,245,-0.006450945);
   gre->SetPointError(8,0,0.0199627);
   gre->SetPoint(9,255,0.002395316);
   gre->SetPointError(9,0,0.02208061);
   
   TH1F *Graph_gr_ImiT11_20_28_160120 = new TH1F("Graph_gr_ImiT11_20_28_160120","",100,156,264);
   Graph_gr_ImiT11_20_28_160120->SetMinimum(-0.09085526);
   Graph_gr_ImiT11_20_28_160120->SetMaximum(0.05007944);
   Graph_gr_ImiT11_20_28_160120->SetDirectory(0);
   Graph_gr_ImiT11_20_28_160120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_160120->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_160120->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_160120->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_160120->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_160120->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_160120->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_160120->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_160120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_160120);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
