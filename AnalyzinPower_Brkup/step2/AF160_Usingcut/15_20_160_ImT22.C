{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:03:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1764749,297.5,0.1094422);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.02409489);
   gre->SetPointError(0,0,0.03652407);
   gre->SetPoint(1,195,0.00749894);
   gre->SetPointError(1,0,0.0304305);
   gre->SetPoint(2,205,-0.0192437);
   gre->SetPointError(2,0,0.02666221);
   gre->SetPoint(3,215,0.009928543);
   gre->SetPointError(3,0,0.02397968);
   gre->SetPoint(4,225,0.03932281);
   gre->SetPointError(4,0,0.02246651);
   gre->SetPoint(5,235,0.02003918);
   gre->SetPointError(5,0,0.02189268);
   gre->SetPoint(6,245,-0.006206316);
   gre->SetPointError(6,0,0.02118196);
   gre->SetPoint(7,255,-0.03424955);
   gre->SetPointError(7,0,0.02140514);
   gre->SetPoint(8,265,-0.0179296);
   gre->SetPointError(8,0,0.01984629);
   gre->SetPoint(9,275,-0.1090559);
   gre->SetPointError(9,0,0.01976615);
   
   TH1F *Graph_gr_ImT22_15_20_16093 = new TH1F("Graph_gr_ImT22_15_20_16093","",100,176,284);
   Graph_gr_ImT22_15_20_16093->SetMinimum(-0.1478832);
   Graph_gr_ImT22_15_20_16093->SetMaximum(0.08085046);
   Graph_gr_ImT22_15_20_16093->SetDirectory(0);
   Graph_gr_ImT22_15_20_16093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_16093->SetLineColor(ci);
   Graph_gr_ImT22_15_20_16093->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16093->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16093->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16093->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16093->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16093->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_16093);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
