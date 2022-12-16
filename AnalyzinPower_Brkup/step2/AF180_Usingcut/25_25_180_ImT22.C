{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:12:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1240747,267.5,0.09359521);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.04558058);
   gre->SetPointError(0,0,0.04221584);
   gre->SetPoint(1,165,0.01140578);
   gre->SetPointError(1,0,0.04591111);
   gre->SetPoint(2,175,-0.03705275);
   gre->SetPointError(2,0,0.03869332);
   gre->SetPoint(3,185,0.01745799);
   gre->SetPointError(3,0,0.03273208);
   gre->SetPoint(4,195,-0.01836781);
   gre->SetPointError(4,0,0.02536173);
   gre->SetPoint(5,205,0.01271514);
   gre->SetPointError(5,0,0.01815672);
   gre->SetPoint(6,215,-0.01215284);
   gre->SetPointError(6,0,0.01285797);
   gre->SetPoint(7,225,0.005529323);
   gre->SetPointError(7,0,0.00905099);
   gre->SetPoint(8,235,0.002335736);
   gre->SetPointError(8,0,0.006512076);
   gre->SetPoint(9,245,-0.008246558);
   gre->SetPointError(9,0,0.006658629);
   
   TH1F *Graph_gr_ImT22_25_25_18057 = new TH1F("Graph_gr_ImT22_25_25_18057","",100,146,254);
   Graph_gr_ImT22_25_25_18057->SetMinimum(-0.1023077);
   Graph_gr_ImT22_25_25_18057->SetMaximum(0.07182822);
   Graph_gr_ImT22_25_25_18057->SetDirectory(0);
   Graph_gr_ImT22_25_25_18057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_18057->SetLineColor(ci);
   Graph_gr_ImT22_25_25_18057->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18057->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_18057->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18057->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_18057->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18057->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_18057);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
