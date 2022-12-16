{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:36:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2382521,257.5,0.1166014);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.002601287);
   gre->SetPointError(0,0,0.05485789);
   gre->SetPoint(1,155,-0.06709276);
   gre->SetPointError(1,0,0.04822971);
   gre->SetPoint(2,165,-0.1060605);
   gre->SetPointError(2,0,0.0502376);
   gre->SetPoint(3,175,-0.1375408);
   gre->SetPointError(3,0,0.04156901);
   gre->SetPoint(4,185,-0.07989221);
   gre->SetPointError(4,0,0.03834383);
   gre->SetPoint(5,195,-0.1409659);
   gre->SetPointError(5,0,0.02916894);
   gre->SetPoint(6,205,-0.1460713);
   gre->SetPointError(6,0,0.01974418);
   gre->SetPoint(7,215,-0.1498931);
   gre->SetPointError(7,0,0.01220282);
   gre->SetPoint(8,225,-0.1550967);
   gre->SetPointError(8,0,0.00749212);
   gre->SetPoint(9,235,-0.1292331);
   gre->SetPointError(9,0,0.00810266);
   
   TH1F *Graph_gr_iT11_28_25_18073 = new TH1F("Graph_gr_iT11_28_25_18073","",100,136,244);
   Graph_gr_iT11_28_25_18073->SetMinimum(-0.2027667);
   Graph_gr_iT11_28_25_18073->SetMaximum(0.08111607);
   Graph_gr_iT11_28_25_18073->SetDirectory(0);
   Graph_gr_iT11_28_25_18073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_18073->SetLineColor(ci);
   Graph_gr_iT11_28_25_18073->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18073->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18073->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18073->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18073->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18073->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18073->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18073->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18073->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18073->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18073->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_18073);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
