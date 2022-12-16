{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:48:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1949918,287.5,0.08904656);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.09648088);
   gre->SetPointError(0,0,0.05117123);
   gre->SetPoint(1,185,-0.07637395);
   gre->SetPointError(1,0,0.03299505);
   gre->SetPoint(2,195,-0.08460416);
   gre->SetPointError(2,0,0.02946044);
   gre->SetPoint(3,205,-0.06494664);
   gre->SetPointError(3,0,0.02707318);
   gre->SetPoint(4,215,-0.07250549);
   gre->SetPointError(4,0,0.02580492);
   gre->SetPoint(5,225,-0.03019686);
   gre->SetPointError(5,0,0.02479893);
   gre->SetPoint(6,235,-0.05647151);
   gre->SetPointError(6,0,0.0254129);
   gre->SetPoint(7,245,0.01300781);
   gre->SetPointError(7,0,0.02869901);
   gre->SetPoint(8,255,0.00901533);
   gre->SetPointError(8,0,0.02617718);
   gre->SetPoint(9,265,-0.04659194);
   gre->SetPointError(9,0,0.02926127);
   
   TH1F *Graph_gr_T22_15_25_140180 = new TH1F("Graph_gr_T22_15_25_140180","",100,166,274);
   Graph_gr_T22_15_25_140180->SetMinimum(-0.166588);
   Graph_gr_T22_15_25_140180->SetMaximum(0.06064271);
   Graph_gr_T22_15_25_140180->SetDirectory(0);
   Graph_gr_T22_15_25_140180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_25_140180->SetLineColor(ci);
   Graph_gr_T22_15_25_140180->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_140180->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_140180->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_140180->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_140180->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_140180->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_140180->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_140180->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_140180->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_140180->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_140180->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_140180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_25_140180);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
