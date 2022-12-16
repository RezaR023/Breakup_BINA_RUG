{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:41:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.1757378,310,0.3722421);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.009780726);
   gre->SetPointError(0,0,0.03025775);
   gre->SetPoint(1,145,-0.009780726);
   gre->SetPointError(1,0,0.03025775);
   gre->SetPoint(2,155,-0.009780726);
   gre->SetPointError(2,0,0.03025775);
   gre->SetPoint(3,165,0.1677457);
   gre->SetPointError(3,0,0.1131664);
   gre->SetPoint(4,175,-0.03153091);
   gre->SetPointError(4,0,0.03908502);
   gre->SetPoint(5,185,-0.05503594);
   gre->SetPointError(5,0,0.02937186);
   gre->SetPoint(6,195,-0.01838182);
   gre->SetPointError(6,0,0.0259046);
   gre->SetPoint(7,205,-0.005098892);
   gre->SetPointError(7,0,0.02339348);
   gre->SetPoint(8,215,0.004239089);
   gre->SetPointError(8,0,0.02202238);
   gre->SetPoint(9,225,0.02243752);
   gre->SetPointError(9,0,0.02322051);
   gre->SetPoint(10,235,0.0383024);
   gre->SetPointError(10,0,0.02470201);
   gre->SetPoint(11,245,0.03827063);
   gre->SetPointError(11,0,0.02719126);
   gre->SetPoint(12,255,0.03609059);
   gre->SetPointError(12,0,0.0283751);
   gre->SetPoint(13,265,-0.03041142);
   gre->SetPointError(13,0,0.0270857);
   gre->SetPoint(14,275,0.002267004);
   gre->SetPointError(14,0,0.03226012);
   
   TH1F *Graph_gr_ImT22_15_25_14022 = new TH1F("Graph_gr_ImT22_15_25_14022","",100,121,289);
   Graph_gr_ImT22_15_25_14022->SetMinimum(-0.1209398);
   Graph_gr_ImT22_15_25_14022->SetMaximum(0.3174441);
   Graph_gr_ImT22_15_25_14022->SetDirectory(0);
   Graph_gr_ImT22_15_25_14022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_14022->SetLineColor(ci);
   Graph_gr_ImT22_15_25_14022->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_14022->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_14022->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_14022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
