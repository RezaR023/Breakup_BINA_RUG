{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:48:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1054014,297.5,0.1200275);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.009831093);
   gre->SetPointError(0,0,0.05937388);
   gre->SetPoint(1,195,0.0283412);
   gre->SetPointError(1,0,0.05411482);
   gre->SetPoint(2,205,0.03338043);
   gre->SetPointError(2,0,0.04526164);
   gre->SetPoint(3,215,-0.02243993);
   gre->SetPointError(3,0,0.04538998);
   gre->SetPoint(4,225,0.02675298);
   gre->SetPointError(4,0,0.03813678);
   gre->SetPoint(5,235,0.0006492566);
   gre->SetPointError(5,0,0.03563017);
   gre->SetPoint(6,245,0.003430114);
   gre->SetPointError(6,0,0.0314981);
   gre->SetPoint(7,255,0.01522222);
   gre->SetPointError(7,0,0.02955819);
   gre->SetPoint(8,265,-0.02559987);
   gre->SetPointError(8,0,0.02403902);
   gre->SetPoint(9,275,-0.03783373);
   gre->SetPointError(9,0,0.01903602);
   
   TH1F *Graph_gr_ImT22_15_15_1808 = new TH1F("Graph_gr_ImT22_15_15_1808","",100,176,284);
   Graph_gr_ImT22_15_15_1808->SetMinimum(-0.0828585);
   Graph_gr_ImT22_15_15_1808->SetMaximum(0.09748462);
   Graph_gr_ImT22_15_15_1808->SetDirectory(0);
   Graph_gr_ImT22_15_15_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_1808->SetLineColor(ci);
   Graph_gr_ImT22_15_15_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
