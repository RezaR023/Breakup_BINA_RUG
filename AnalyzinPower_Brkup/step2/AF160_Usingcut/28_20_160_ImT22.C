{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:32:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2637452,257.5,0.2058334);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.02789636);
   gre->SetPointError(0,0,0.04321156);
   gre->SetPoint(1,155,0.03737689);
   gre->SetPointError(1,0,0.04171541);
   gre->SetPoint(2,165,0.08349407);
   gre->SetPointError(2,0,0.04407619);
   gre->SetPoint(3,175,-0.02979475);
   gre->SetPointError(3,0,0.03785265);
   gre->SetPoint(4,185,-0.1199366);
   gre->SetPointError(4,0,0.0378239);
   gre->SetPoint(5,195,-0.07753951);
   gre->SetPointError(5,0,0.03401279);
   gre->SetPoint(6,205,-0.1414133);
   gre->SetPointError(6,0,0.03125907);
   gre->SetPoint(7,215,-0.1613554);
   gre->SetPointError(7,0,0.02412672);
   gre->SetPoint(8,225,-0.1598147);
   gre->SetPointError(8,0,0.01801458);
   gre->SetPoint(9,235,-0.1695784);
   gre->SetPointError(9,0,0.01372811);
   
   TH1F *Graph_gr_ImT22_28_20_160153 = new TH1F("Graph_gr_ImT22_28_20_160153","",100,136,244);
   Graph_gr_ImT22_28_20_160153->SetMinimum(-0.2167874);
   Graph_gr_ImT22_28_20_160153->SetMaximum(0.1588755);
   Graph_gr_ImT22_28_20_160153->SetDirectory(0);
   Graph_gr_ImT22_28_20_160153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_20_160153->SetLineColor(ci);
   Graph_gr_ImT22_28_20_160153->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_160153->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_160153->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_160153->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_160153->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_160153->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_160153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_20_160153);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
