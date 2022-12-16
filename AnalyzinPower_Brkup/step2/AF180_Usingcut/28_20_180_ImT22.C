{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:20:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.164755,257.5,0.2458963);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0317152);
   gre->SetPointError(0,0,0.0645979);
   gre->SetPoint(1,155,0.1185249);
   gre->SetPointError(1,0,0.05892953);
   gre->SetPoint(2,165,-0.02077614);
   gre->SetPointError(2,0,0.05618044);
   gre->SetPoint(3,175,0.005651974);
   gre->SetPointError(3,0,0.05271098);
   gre->SetPoint(4,185,-0.04803901);
   gre->SetPointError(4,0,0.04469331);
   gre->SetPoint(5,195,-0.003703748);
   gre->SetPointError(5,0,0.03805474);
   gre->SetPoint(6,205,-0.0101464);
   gre->SetPointError(6,0,0.03128562);
   gre->SetPoint(7,215,-0.0548799);
   gre->SetPointError(7,0,0.02248961);
   gre->SetPoint(8,225,-0.04232045);
   gre->SetPointError(8,0,0.01347094);
   gre->SetPoint(9,235,-0.01143287);
   gre->SetPointError(9,0,0.006974717);
   
   TH1F *Graph_gr_ImT22_28_20_18072 = new TH1F("Graph_gr_ImT22_28_20_18072","",100,136,244);
   Graph_gr_ImT22_28_20_18072->SetMinimum(-0.1236899);
   Graph_gr_ImT22_28_20_18072->SetMaximum(0.2048312);
   Graph_gr_ImT22_28_20_18072->SetDirectory(0);
   Graph_gr_ImT22_28_20_18072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_20_18072->SetLineColor(ci);
   Graph_gr_ImT22_28_20_18072->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18072->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_18072->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18072->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_18072->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18072->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_20_18072);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
