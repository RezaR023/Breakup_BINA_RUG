{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:35:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(112.5,-0.584227,247.5,0.4112062);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.06001896);
   gre->SetPointError(0,0,0.06954441);
   gre->SetPoint(1,145,0.06804691);
   gre->SetPointError(1,0,0.05377468);
   gre->SetPoint(2,155,0.1886507);
   gre->SetPointError(2,0,0.05664998);
   gre->SetPoint(3,165,0.006739173);
   gre->SetPointError(3,0,0.05144696);
   gre->SetPoint(4,175,-0.1305104);
   gre->SetPointError(4,0,0.04611232);
   gre->SetPoint(5,185,-0.3093348);
   gre->SetPointError(5,0,0.03750599);
   gre->SetPoint(6,195,-0.3538666);
   gre->SetPointError(6,0,0.02980783);
   gre->SetPoint(7,205,-0.3754696);
   gre->SetPointError(7,0,0.02344739);
   gre->SetPoint(8,215,-0.3980174);
   gre->SetPointError(8,0,0.0195252);
   gre->SetPoint(9,225,-0.4001633);
   gre->SetPointError(9,0,0.01815814);
   
   TH1F *Graph_gr_T20_28_28_160161 = new TH1F("Graph_gr_T20_28_28_160161","",100,126,234);
   Graph_gr_T20_28_28_160161->SetMinimum(-0.4846837);
   Graph_gr_T20_28_28_160161->SetMaximum(0.3116629);
   Graph_gr_T20_28_28_160161->SetDirectory(0);
   Graph_gr_T20_28_28_160161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_160161->SetLineColor(ci);
   Graph_gr_T20_28_28_160161->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_160161->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_160161->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_160161->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_160161->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_160161->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_160161->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_160161->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_160161->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_160161->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_160161->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_160161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_160161);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
