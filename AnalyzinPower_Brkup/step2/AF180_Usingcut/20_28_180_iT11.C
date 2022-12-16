{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:01:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(130,-0.4174963,280,0.0001814586);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_iT11_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1308397);
   gre->SetPointError(0,0,0.0614082);
   gre->SetPoint(1,165,-0.3033693);
   gre->SetPointError(1,0,0.03751061);
   gre->SetPoint(2,175,-0.2654106);
   gre->SetPointError(2,0,0.02983087);
   gre->SetPoint(3,185,-0.2551028);
   gre->SetPointError(3,0,0.02352445);
   gre->SetPoint(4,195,-0.2727584);
   gre->SetPointError(4,0,0.01888828);
   gre->SetPoint(5,205,-0.2700794);
   gre->SetPointError(5,0,0.01590699);
   gre->SetPoint(6,215,-0.3087349);
   gre->SetPointError(6,0,0.01417727);
   gre->SetPoint(7,225,-0.2848488);
   gre->SetPointError(7,0,0.01318267);
   gre->SetPoint(8,235,-0.3339683);
   gre->SetPointError(8,0,0.01320634);
   gre->SetPoint(9,245,-0.3327331);
   gre->SetPointError(9,0,0.01515029);
   gre->SetPoint(10,255,-0.321941);
   gre->SetPointError(10,0,0.02042737);
   
   TH1F *Graph_gr_iT11_20_28_18038 = new TH1F("Graph_gr_iT11_20_28_18038","",100,145,265);
   Graph_gr_iT11_20_28_18038->SetMinimum(-0.3757285);
   Graph_gr_iT11_20_28_18038->SetMaximum(-0.04158632);
   Graph_gr_iT11_20_28_18038->SetDirectory(0);
   Graph_gr_iT11_20_28_18038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_18038->SetLineColor(ci);
   Graph_gr_iT11_20_28_18038->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18038->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18038->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18038->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_18038->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18038->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18038->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18038->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_18038->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18038->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18038->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_18038);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
