{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:27:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2083747,257.5,0.01694687);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1125449);
   gre->SetPointError(0,0,0.03888822);
   gre->SetPoint(1,155,-0.1170186);
   gre->SetPointError(1,0,0.02857546);
   gre->SetPoint(2,165,-0.09871862);
   gre->SetPointError(2,0,0.02913208);
   gre->SetPoint(3,175,-0.1453721);
   gre->SetPointError(3,0,0.025449);
   gre->SetPoint(4,185,-0.1335266);
   gre->SetPointError(4,0,0.02331375);
   gre->SetPoint(5,195,-0.07694204);
   gre->SetPointError(5,0,0.01820307);
   gre->SetPoint(6,205,-0.05038092);
   gre->SetPointError(6,0,0.01434782);
   gre->SetPoint(7,215,-0.06017991);
   gre->SetPointError(7,0,0.01219419);
   gre->SetPoint(8,225,-0.03749706);
   gre->SetPointError(8,0,0.01104963);
   gre->SetPoint(9,235,-0.03238846);
   gre->SetPointError(9,0,0.01178173);
   
   TH1F *Graph_gr_T22_25_28_160142 = new TH1F("Graph_gr_T22_25_28_160142","",100,136,244);
   Graph_gr_T22_25_28_160142->SetMinimum(-0.1858426);
   Graph_gr_T22_25_28_160142->SetMaximum(-0.005585289);
   Graph_gr_T22_25_28_160142->SetDirectory(0);
   Graph_gr_T22_25_28_160142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_28_160142->SetLineColor(ci);
   Graph_gr_T22_25_28_160142->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_160142->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_160142->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_160142->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_160142->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_160142->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_160142->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_160142->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_160142->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_160142->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_160142->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_160142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_28_160142);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
