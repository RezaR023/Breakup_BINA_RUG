{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:06:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1736839,267.5,0.131643);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.04543547);
   gre->SetPointError(0,0,0.07736058);
   gre->SetPoint(1,165,0.0001069799);
   gre->SetPointError(1,0,0.06330297);
   gre->SetPoint(2,175,0.01487862);
   gre->SetPointError(2,0,0.0658766);
   gre->SetPoint(3,185,0.004940338);
   gre->SetPointError(3,0,0.06085816);
   gre->SetPoint(4,195,-0.06396682);
   gre->SetPointError(4,0,0.04457804);
   gre->SetPoint(5,205,-0.0419416);
   gre->SetPointError(5,0,0.0357479);
   gre->SetPoint(6,215,-0.01634801);
   gre->SetPointError(6,0,0.03019518);
   gre->SetPoint(7,225,-0.03672471);
   gre->SetPointError(7,0,0.02461583);
   gre->SetPoint(8,235,-0.02989624);
   gre->SetPointError(8,0,0.01778407);
   gre->SetPoint(9,245,-0.0177861);
   gre->SetPointError(9,0,0.01050579);
   
   TH1F *Graph_gr_ImT22_25_15_18047 = new TH1F("Graph_gr_ImT22_25_15_18047","",100,146,254);
   Graph_gr_ImT22_25_15_18047->SetMinimum(-0.1431512);
   Graph_gr_ImT22_25_15_18047->SetMaximum(0.1011103);
   Graph_gr_ImT22_25_15_18047->SetDirectory(0);
   Graph_gr_ImT22_25_15_18047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_15_18047->SetLineColor(ci);
   Graph_gr_ImT22_25_15_18047->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18047->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_18047->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18047->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_18047->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18047->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_15_18047);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
