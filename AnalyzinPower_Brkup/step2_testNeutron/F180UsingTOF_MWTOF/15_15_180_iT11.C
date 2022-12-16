{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:41:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.1883775,297.5,0.2402769);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.07550468);
   gre->SetPointError(0,0,0.04143039);
   gre->SetPoint(1,195,-0.05316142);
   gre->SetPointError(1,0,0.03405497);
   gre->SetPoint(2,205,-0.03065513);
   gre->SetPointError(2,0,0.0375904);
   gre->SetPoint(3,215,-0.04182629);
   gre->SetPointError(3,0,0.03653659);
   gre->SetPoint(4,225,0.01899082);
   gre->SetPointError(4,0,0.03275889);
   gre->SetPoint(5,235,0.04935904);
   gre->SetPointError(5,0,0.03019962);
   gre->SetPoint(6,245,0.007770285);
   gre->SetPointError(6,0,0.02655724);
   gre->SetPoint(7,255,0.1140542);
   gre->SetPointError(7,0,0.02381615);
   gre->SetPoint(8,265,0.1074033);
   gre->SetPointError(8,0,0.02053246);
   gre->SetPoint(9,275,0.148889);
   gre->SetPointError(9,0,0.01994556);
   
   TH1F *Graph_gr_iT11_15_15_1801 = new TH1F("Graph_gr_iT11_15_15_1801","",100,176,284);
   Graph_gr_iT11_15_15_1801->SetMinimum(-0.145512);
   Graph_gr_iT11_15_15_1801->SetMaximum(0.1974115);
   Graph_gr_iT11_15_15_1801->SetDirectory(0);
   Graph_gr_iT11_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_1801->SetLineColor(ci);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
