{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:24:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(142.5,-0.1404197,277.5,0.1003836);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.07430875);
   gre->SetPointError(0,0,0.02597709);
   gre->SetPoint(1,175,-0.04919437);
   gre->SetPointError(1,0,0.02350764);
   gre->SetPoint(2,185,-0.01091167);
   gre->SetPointError(2,0,0.02119419);
   gre->SetPoint(3,195,0.02372817);
   gre->SetPointError(3,0,0.0181358);
   gre->SetPoint(4,205,0.02958401);
   gre->SetPointError(4,0,0.01574566);
   gre->SetPoint(5,215,0.0265198);
   gre->SetPointError(5,0,0.01387552);
   gre->SetPoint(6,225,0.0460595);
   gre->SetPointError(6,0,0.01419025);
   gre->SetPoint(7,235,0.02136151);
   gre->SetPointError(7,0,0.01390439);
   gre->SetPoint(8,245,0.01353276);
   gre->SetPointError(8,0,0.01516118);
   gre->SetPoint(9,255,0.01007794);
   gre->SetPointError(9,0,0.01708354);
   
   TH1F *Graph_gr_ImT22_20_25_16072 = new TH1F("Graph_gr_ImT22_20_25_16072","",100,156,264);
   Graph_gr_ImT22_20_25_16072->SetMinimum(-0.1163394);
   Graph_gr_ImT22_20_25_16072->SetMaximum(0.07630331);
   Graph_gr_ImT22_20_25_16072->SetDirectory(0);
   Graph_gr_ImT22_20_25_16072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_16072->SetLineColor(ci);
   Graph_gr_ImT22_20_25_16072->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_16072->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_16072->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_16072->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_16072->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_16072->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_16072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_16072);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
