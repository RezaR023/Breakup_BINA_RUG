{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:08:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.0676295,287.5,0.06575807);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.02115099);
   gre->SetPointError(0,0,0.02229239);
   gre->SetPoint(1,185,-0.0003772353);
   gre->SetPointError(1,0,0.01784984);
   gre->SetPoint(2,195,0.006137801);
   gre->SetPointError(2,0,0.01593515);
   gre->SetPoint(3,205,-0.00560892);
   gre->SetPointError(3,0,0.01418794);
   gre->SetPoint(4,215,0.004243514);
   gre->SetPointError(4,0,0.01396334);
   gre->SetPoint(5,225,-0.001218801);
   gre->SetPointError(5,0,0.01509774);
   gre->SetPoint(6,235,0.02007595);
   gre->SetPointError(6,0,0.01674095);
   gre->SetPoint(7,245,0.024013);
   gre->SetPointError(7,0,0.01825498);
   gre->SetPoint(8,255,0.02225033);
   gre->SetPointError(8,0,0.02127648);
   gre->SetPoint(9,265,-0.0220951);
   gre->SetPointError(9,0,0.02330313);
   
   TH1F *Graph_gr_ImT22_15_28_160103 = new TH1F("Graph_gr_ImT22_15_28_160103","",100,166,274);
   Graph_gr_ImT22_15_28_160103->SetMinimum(-0.05429074);
   Graph_gr_ImT22_15_28_160103->SetMaximum(0.05241932);
   Graph_gr_ImT22_15_28_160103->SetDirectory(0);
   Graph_gr_ImT22_15_28_160103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_160103->SetLineColor(ci);
   Graph_gr_ImT22_15_28_160103->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_160103->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_160103->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_160103->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_160103->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_160103->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_160103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_160103);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
