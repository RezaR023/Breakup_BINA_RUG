{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:27:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(150,26.46605,300,93.90798);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,38.11121);
   gre->SetPointError(0,0,0.4048377);
   gre->SetPoint(1,184.8806,43.50278);
   gre->SetPointError(1,0,1.22464);
   gre->SetPoint(2,195,59.91667);
   gre->SetPointError(2,0,1.275466);
   gre->SetPoint(3,205,72.00508);
   gre->SetPointError(3,0,1.369227);
   gre->SetPoint(4,215,81.23028);
   gre->SetPointError(4,0,1.43738);
   gre->SetPoint(5,225,78.82825);
   gre->SetPointError(5,0,1.419277);
   gre->SetPoint(6,235,71.24105);
   gre->SetPointError(6,0,1.347422);
   gre->SetPoint(7,245,63.26351);
   gre->SetPointError(7,0,1.235841);
   gre->SetPoint(8,255,56.70476);
   gre->SetPointError(8,0,1.174493);
   gre->SetPoint(9,265,51.46369);
   gre->SetPointError(9,0,1.120061);
   gre->SetPoint(10,275,38.76523);
   gre->SetPointError(10,0,0.9702859);
   
   TH1F *Graph_gr_crsection_15_25_1403 = new TH1F("Graph_gr_crsection_15_25_1403","",100,165,285);
   Graph_gr_crsection_15_25_1403->SetMinimum(33.21025);
   Graph_gr_crsection_15_25_1403->SetMaximum(87.16379);
   Graph_gr_crsection_15_25_1403->SetDirectory(0);
   Graph_gr_crsection_15_25_1403->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_25_1403->SetLineColor(ci);
   Graph_gr_crsection_15_25_1403->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1403->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1403->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1403->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_1403->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1403->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1403->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1403->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_1403->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_1403->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_1403->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_1403->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_25_1403);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
