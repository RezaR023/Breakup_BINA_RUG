{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:45:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.3293245,287.5,0.07794402);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.04652729);
   gre->SetPointError(0,0,0.05659322);
   gre->SetPoint(1,185,-0.1272776);
   gre->SetPointError(1,0,0.03628011);
   gre->SetPoint(2,195,-0.1611716);
   gre->SetPointError(2,0,0.03106901);
   gre->SetPoint(3,205,-0.1935923);
   gre->SetPointError(3,0,0.03063855);
   gre->SetPoint(4,215,-0.1704984);
   gre->SetPointError(4,0,0.02898424);
   gre->SetPoint(5,225,-0.1616398);
   gre->SetPointError(5,0,0.02896591);
   gre->SetPoint(6,235,-0.0965453);
   gre->SetPointError(6,0,0.030149);
   gre->SetPoint(7,245,-0.1115702);
   gre->SetPointError(7,0,0.03360142);
   gre->SetPoint(8,255,-0.228952);
   gre->SetPointError(8,0,0.03249443);
   gre->SetPoint(9,265,-0.167577);
   gre->SetPointError(9,0,0.0361268);
   
   TH1F *Graph_gr_iT11_15_25_140176 = new TH1F("Graph_gr_iT11_15_25_140176","",100,166,274);
   Graph_gr_iT11_15_25_140176->SetMinimum(-0.2885977);
   Graph_gr_iT11_15_25_140176->SetMaximum(0.03721716);
   Graph_gr_iT11_15_25_140176->SetDirectory(0);
   Graph_gr_iT11_15_25_140176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_25_140176->SetLineColor(ci);
   Graph_gr_iT11_15_25_140176->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_140176->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_140176->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_140176->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_140176->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_140176->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_140176->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_140176->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_140176->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_140176->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_140176->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_140176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_25_140176);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
