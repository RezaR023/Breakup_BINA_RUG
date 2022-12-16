{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:54:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(152.5,-0.1297869,287.5,0.1220073);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.02588785);
   gre->SetPointError(0,0,0.03341764);
   gre->SetPoint(1,185,-0.06186955);
   gre->SetPointError(1,0,0.02595163);
   gre->SetPoint(2,195,-0.006572793);
   gre->SetPointError(2,0,0.02202114);
   gre->SetPoint(3,205,0.003182967);
   gre->SetPointError(3,0,0.0224258);
   gre->SetPoint(4,215,0.0115126);
   gre->SetPointError(4,0,0.02156755);
   gre->SetPoint(5,225,0.02833632);
   gre->SetPointError(5,0,0.02341552);
   gre->SetPoint(6,235,0.03331607);
   gre->SetPointError(6,0,0.02554016);
   gre->SetPoint(7,245,0.05095415);
   gre->SetPointError(7,0,0.02908746);
   gre->SetPoint(8,255,-0.0117894);
   gre->SetPointError(8,0,0.03315758);
   gre->SetPoint(9,265,-0.004645383);
   gre->SetPointError(9,0,0.03038812);
   
   TH1F *Graph_gr_ImT22_15_25_14084 = new TH1F("Graph_gr_ImT22_15_25_14084","",100,166,274);
   Graph_gr_ImT22_15_25_14084->SetMinimum(-0.1046075);
   Graph_gr_ImT22_15_25_14084->SetMaximum(0.0968279);
   Graph_gr_ImT22_15_25_14084->SetDirectory(0);
   Graph_gr_ImT22_15_25_14084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_14084->SetLineColor(ci);
   Graph_gr_ImT22_15_25_14084->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14084->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_14084->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14084->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_14084->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_14084->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_14084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_14084);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
