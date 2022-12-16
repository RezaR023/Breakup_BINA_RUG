{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:47:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.2994814,290,0.3123031);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_iT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.1176431);
   gre->SetPointError(0,0,0.09269597);
   gre->SetPoint(1,175,0.06910222);
   gre->SetPointError(1,0,0.05377423);
   gre->SetPoint(2,185,-0.05612824);
   gre->SetPointError(2,0,0.05722008);
   gre->SetPoint(3,195,-0.05981759);
   gre->SetPointError(3,0,0.04721149);
   gre->SetPoint(4,205,-0.1504135);
   gre->SetPointError(4,0,0.0471038);
   gre->SetPoint(5,215,-0.1090944);
   gre->SetPointError(5,0,0.04113511);
   gre->SetPoint(6,225,-0.04174306);
   gre->SetPointError(6,0,0.03473918);
   gre->SetPoint(7,235,-0.05225153);
   gre->SetPointError(7,0,0.03044911);
   gre->SetPoint(8,245,0.01015323);
   gre->SetPointError(8,0,0.02368022);
   gre->SetPoint(9,255,0.01463693);
   gre->SetPointError(9,0,0.01869083);
   gre->SetPoint(10,265,0.03821175);
   gre->SetPointError(10,0,0.01463837);
   
   TH1F *Graph_gr_iT11_20_20_18028 = new TH1F("Graph_gr_iT11_20_20_18028","",100,155,275);
   Graph_gr_iT11_20_20_18028->SetMinimum(-0.238303);
   Graph_gr_iT11_20_20_18028->SetMaximum(0.2511247);
   Graph_gr_iT11_20_20_18028->SetDirectory(0);
   Graph_gr_iT11_20_20_18028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_18028->SetLineColor(ci);
   Graph_gr_iT11_20_20_18028->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_18028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_18028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_18028->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_18028->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_18028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_18028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_18028->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_18028->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_18028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_18028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_18028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_18028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
