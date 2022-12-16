{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:55:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-2.347318,310,2.343556);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.4170262);
   gre->SetPointError(0,0,1.144718);
   gre->SetPoint(1,145,0.05746018);
   gre->SetPointError(1,0,0.4624907);
   gre->SetPoint(2,155,-0.1157829);
   gre->SetPointError(2,0,0.2511);
   gre->SetPoint(3,165,-0.7084635);
   gre->SetPointError(3,0,0.2510157);
   gre->SetPoint(4,175,-0.6957546);
   gre->SetPointError(4,0,0.2498263);
   gre->SetPoint(5,185,-0.3640751);
   gre->SetPointError(5,0,0.2468924);
   gre->SetPoint(6,195,-0.4636149);
   gre->SetPointError(6,0,0.2213002);
   gre->SetPoint(7,205,-0.6414139);
   gre->SetPointError(7,0,0.1992284);
   gre->SetPoint(8,215,-1.09152);
   gre->SetPointError(8,0,0.1529994);
   gre->SetPoint(9,225,-1.055563);
   gre->SetPointError(9,0,0.1070398);
   gre->SetPoint(10,235,-1.403028);
   gre->SetPointError(10,0,0.06603688);
   gre->SetPoint(11,245,-1.522661);
   gre->SetPointError(11,0,0.04284446);
   gre->SetPoint(12,255,-1.255132);
   gre->SetPointError(12,0,0.2507034);
   gre->SetPoint(13,265,-1.255132);
   gre->SetPointError(13,0,0.2507034);
   gre->SetPoint(14,275,-1.255132);
   gre->SetPointError(14,0,0.2507034);
   
   TH1F *Graph_gr_T22_25_20_1806 = new TH1F("Graph_gr_T22_25_20_1806","",100,121,289);
   Graph_gr_T22_25_20_1806->SetMinimum(-1.878231);
   Graph_gr_T22_25_20_1806->SetMaximum(1.874469);
   Graph_gr_T22_25_20_1806->SetDirectory(0);
   Graph_gr_T22_25_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_20_1806->SetLineColor(ci);
   Graph_gr_T22_25_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
