{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:32:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2960565,257.5,0.04018552);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1686505);
   gre->SetPointError(0,0,0.04348238);
   gre->SetPoint(1,155,-0.07642865);
   gre->SetPointError(1,0,0.04057956);
   gre->SetPoint(2,165,-0.09398219);
   gre->SetPointError(2,0,0.04032044);
   gre->SetPoint(3,175,-0.2029064);
   gre->SetPointError(3,0,0.03710976);
   gre->SetPoint(4,185,-0.1492071);
   gre->SetPointError(4,0,0.0350744);
   gre->SetPoint(5,195,-0.04982303);
   gre->SetPointError(5,0,0.03396822);
   gre->SetPoint(6,205,-0.1478791);
   gre->SetPointError(6,0,0.03041913);
   gre->SetPoint(7,215,-0.1747782);
   gre->SetPointError(7,0,0.02464944);
   gre->SetPoint(8,225,-0.1939285);
   gre->SetPointError(8,0,0.01799642);
   gre->SetPoint(9,235,-0.197393);
   gre->SetPointError(9,0,0.01410399);
   
   TH1F *Graph_gr_T22_28_20_160152 = new TH1F("Graph_gr_T22_28_20_160152","",100,136,244);
   Graph_gr_T22_28_20_160152->SetMinimum(-0.2624323);
   Graph_gr_T22_28_20_160152->SetMaximum(0.006561318);
   Graph_gr_T22_28_20_160152->SetDirectory(0);
   Graph_gr_T22_28_20_160152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_20_160152->SetLineColor(ci);
   Graph_gr_T22_28_20_160152->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_160152->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_160152->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_160152->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_160152->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_160152->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_160152->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_160152->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_160152->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_160152->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_160152->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_160152->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_20_160152);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
