{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:27:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.5814913,257.5,0.2189258);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.02171707);
   gre->SetPointError(0,0,0.06380584);
   gre->SetPoint(1,155,-0.04415869);
   gre->SetPointError(1,0,0.04850398);
   gre->SetPoint(2,165,-0.05239341);
   gre->SetPointError(2,0,0.04933274);
   gre->SetPoint(3,175,-0.1340374);
   gre->SetPointError(3,0,0.04519906);
   gre->SetPoint(4,185,-0.2083015);
   gre->SetPointError(4,0,0.03912567);
   gre->SetPoint(5,195,-0.3054677);
   gre->SetPointError(5,0,0.03070869);
   gre->SetPoint(6,205,-0.3870368);
   gre->SetPointError(6,0,0.02452249);
   gre->SetPoint(7,215,-0.4001808);
   gre->SetPointError(7,0,0.02092371);
   gre->SetPoint(8,225,-0.4292304);
   gre->SetPointError(8,0,0.01885808);
   gre->SetPoint(9,235,-0.3860624);
   gre->SetPointError(9,0,0.0197406);
   
   TH1F *Graph_gr_T20_25_28_160141 = new TH1F("Graph_gr_T20_25_28_160141","",100,136,244);
   Graph_gr_T20_25_28_160141->SetMinimum(-0.5014496);
   Graph_gr_T20_25_28_160141->SetMaximum(0.138884);
   Graph_gr_T20_25_28_160141->SetDirectory(0);
   Graph_gr_T20_25_28_160141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_28_160141->SetLineColor(ci);
   Graph_gr_T20_25_28_160141->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_160141->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_160141->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_160141->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_160141->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_160141->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_160141->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_160141->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_28_160141->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_28_160141->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_28_160141->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_28_160141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_28_160141);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
