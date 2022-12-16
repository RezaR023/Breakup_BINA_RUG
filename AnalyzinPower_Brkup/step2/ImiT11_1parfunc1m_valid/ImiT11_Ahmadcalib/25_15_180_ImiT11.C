{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:21:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.1938591,267.5,0.1535091);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.00451733);
   gre->SetPointError(0,0,0.0560699);
   gre->SetPoint(1,165,-0.03829299);
   gre->SetPointError(1,0,0.05591588);
   gre->SetPoint(2,175,0.04234495);
   gre->SetPointError(2,0,0.05326942);
   gre->SetPoint(3,185,-0.09148948);
   gre->SetPointError(3,0,0.04447494);
   gre->SetPoint(4,195,0.02090843);
   gre->SetPointError(4,0,0.03860875);
   gre->SetPoint(5,205,0.001033836);
   gre->SetPointError(5,0,0.03218173);
   gre->SetPoint(6,215,0.0359661);
   gre->SetPointError(6,0,0.02538341);
   gre->SetPoint(7,225,0.03417384);
   gre->SetPointError(7,0,0.02106295);
   gre->SetPoint(8,235,-0.01220123);
   gre->SetPointError(8,0,0.01555157);
   gre->SetPoint(9,245,0.009943255);
   gre->SetPointError(9,0,0.01092207);
   
   TH1F *Graph_gr_ImiT11_25_15_1809 = new TH1F("Graph_gr_ImiT11_25_15_1809","",100,146,254);
   Graph_gr_ImiT11_25_15_1809->SetMinimum(-0.1591223);
   Graph_gr_ImiT11_25_15_1809->SetMaximum(0.1187722);
   Graph_gr_ImiT11_25_15_1809->SetDirectory(0);
   Graph_gr_ImiT11_25_15_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_15_1809->SetLineColor(ci);
   Graph_gr_ImiT11_25_15_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_15_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
