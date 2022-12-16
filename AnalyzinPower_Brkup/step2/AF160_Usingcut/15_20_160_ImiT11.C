{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:02:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1866968,297.5,0.196491);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.0856512);
   gre->SetPointError(0,0,0.04697512);
   gre->SetPoint(1,195,-0.001700532);
   gre->SetPointError(1,0,0.03739564);
   gre->SetPoint(2,205,0.02446021);
   gre->SetPointError(2,0,0.03447093);
   gre->SetPoint(3,215,0.005018848);
   gre->SetPointError(3,0,0.03265302);
   gre->SetPoint(4,225,0.01476766);
   gre->SetPointError(4,0,0.03227076);
   gre->SetPoint(5,235,-0.01054022);
   gre->SetPointError(5,0,0.03143524);
   gre->SetPoint(6,245,-0.08914543);
   gre->SetPointError(6,0,0.03368674);
   gre->SetPoint(7,255,-0.02076078);
   gre->SetPointError(7,0,0.03441761);
   gre->SetPoint(8,265,-0.01631532);
   gre->SetPointError(8,0,0.03091962);
   gre->SetPoint(9,275,-0.03266303);
   gre->SetPointError(9,0,0.03220236);
   
   TH1F *Graph_gr_ImiT11_15_20_16090 = new TH1F("Graph_gr_ImiT11_15_20_16090","",100,176,284);
   Graph_gr_ImiT11_15_20_16090->SetMinimum(-0.148378);
   Graph_gr_ImiT11_15_20_16090->SetMaximum(0.1581722);
   Graph_gr_ImiT11_15_20_16090->SetDirectory(0);
   Graph_gr_ImiT11_15_20_16090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_16090->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_16090->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16090->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16090->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16090->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_16090->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_16090->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_16090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_16090);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
