{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:36:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.06344586,287.5,0.09803501);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.01209042);
   gre->SetPointError(0,0,0.02561863);
   gre->SetPoint(1,185,-0.01607234);
   gre->SetPointError(1,0,0.02046004);
   gre->SetPoint(2,195,0.006545953);
   gre->SetPointError(2,0,0.01707964);
   gre->SetPoint(3,205,-0.002052732);
   gre->SetPointError(3,0,0.01571098);
   gre->SetPoint(4,215,-0.01049608);
   gre->SetPointError(4,0,0.01564516);
   gre->SetPoint(5,225,0.009260096);
   gre->SetPointError(5,0,0.01661754);
   gre->SetPoint(6,235,0.02010365);
   gre->SetPointError(6,0,0.01750314);
   gre->SetPoint(7,245,-0.003958814);
   gre->SetPointError(7,0,0.0188074);
   gre->SetPoint(8,255,0.03047211);
   gre->SetPointError(8,0,0.02274613);
   gre->SetPoint(9,265,0.04351198);
   gre->SetPointError(9,0,0.02760956);
   
   TH1F *Graph_gr_ImT22_15_25_18052 = new TH1F("Graph_gr_ImT22_15_25_18052","",100,166,274);
   Graph_gr_ImT22_15_25_18052->SetMinimum(-0.04729777);
   Graph_gr_ImT22_15_25_18052->SetMaximum(0.08188693);
   Graph_gr_ImT22_15_25_18052->SetDirectory(0);
   Graph_gr_ImT22_15_25_18052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_18052->SetLineColor(ci);
   Graph_gr_ImT22_15_25_18052->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18052->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_18052->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18052->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_18052->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_18052->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_18052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_18052);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
