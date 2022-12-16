{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:10:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-1.104624,290,0.8156601);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T20_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.6981566);
   gre->SetPointError(0,0,0.08641971);
   gre->SetPoint(1,175,-0.0003767985);
   gre->SetPointError(1,0,0.07806109);
   gre->SetPoint(2,185,-0.04315991);
   gre->SetPointError(2,0,0.07884636);
   gre->SetPoint(3,195,-0.03015525);
   gre->SetPointError(3,0,0.07483925);
   gre->SetPoint(4,205,0.07353361);
   gre->SetPointError(4,0,0.06530043);
   gre->SetPoint(5,215,0.1426867);
   gre->SetPointError(5,0,0.05429609);
   gre->SetPoint(6,225,0.3093235);
   gre->SetPointError(6,0,0.04745259);
   gre->SetPoint(7,235,0.3610068);
   gre->SetPointError(7,0,0.04092384);
   gre->SetPoint(8,245,0.4196303);
   gre->SetPointError(8,0,0.03401083);
   gre->SetPoint(9,255,0.4687984);
   gre->SetPointError(9,0,0.02681445);
   gre->SetPoint(10,265,0.4647168);
   gre->SetPointError(10,0,0.02203625);
   
   TH1F *Graph_gr_T20_20_15_160106 = new TH1F("Graph_gr_T20_20_15_160106","",100,155,275);
   Graph_gr_T20_20_15_160106->SetMinimum(-0.9125953);
   Graph_gr_T20_20_15_160106->SetMaximum(0.6236317);
   Graph_gr_T20_20_15_160106->SetDirectory(0);
   Graph_gr_T20_20_15_160106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_15_160106->SetLineColor(ci);
   Graph_gr_T20_20_15_160106->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_160106->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_160106->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_160106->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_160106->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_160106->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_160106->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_160106->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_160106->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_160106->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_160106->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_160106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_15_160106);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
