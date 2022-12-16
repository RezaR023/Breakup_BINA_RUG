{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:58:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(135,-0.1200721,255,0.07807094);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01241035);
   gre->SetPointError(0,0,0.02857016);
   gre->SetPoint(1,165,-0.03724686);
   gre->SetPointError(1,0,0.02833407);
   gre->SetPoint(2,175,-0.05526329);
   gre->SetPointError(2,0,0.03178496);
   gre->SetPoint(3,185,0.01514123);
   gre->SetPointError(3,0,0.02990587);
   gre->SetPoint(4,195,0.001697569);
   gre->SetPointError(4,0,0.03235081);
   gre->SetPoint(5,205,0.01078168);
   gre->SetPointError(5,0,0.03248145);
   gre->SetPoint(6,215,-0.01020913);
   gre->SetPointError(6,0,0.03269295);
   gre->SetPoint(7,225,-0.05504405);
   gre->SetPointError(7,0,0.03100404);
   gre->SetPoint(8,235,-0.01573063);
   gre->SetPointError(8,0,0.02400573);
   
   TH1F *Graph_gr_ImT22_25_25_14092 = new TH1F("Graph_gr_ImT22_25_25_14092","",100,147,243);
   Graph_gr_ImT22_25_25_14092->SetMinimum(-0.1002578);
   Graph_gr_ImT22_25_25_14092->SetMaximum(0.05825664);
   Graph_gr_ImT22_25_25_14092->SetDirectory(0);
   Graph_gr_ImT22_25_25_14092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_14092->SetLineColor(ci);
   Graph_gr_ImT22_25_25_14092->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14092->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_14092->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14092->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_14092->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14092->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_14092);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
