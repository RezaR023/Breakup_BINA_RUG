{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:21:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.1094439,297.5,0.1332834);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.01063428);
   gre->SetPointError(0,0,0.04534915);
   gre->SetPoint(1,195,-0.01908888);
   gre->SetPointError(1,0,0.0362661);
   gre->SetPoint(2,205,0.002249751);
   gre->SetPointError(2,0,0.03106305);
   gre->SetPoint(3,215,0.05436596);
   gre->SetPointError(3,0,0.02827988);
   gre->SetPoint(4,225,0.004991926);
   gre->SetPointError(4,0,0.02679306);
   gre->SetPoint(5,235,0.06710638);
   gre->SetPointError(5,0,0.02572249);
   gre->SetPoint(6,245,-0.001369725);
   gre->SetPointError(6,0,0.02305338);
   gre->SetPoint(7,255,-0.01940474);
   gre->SetPointError(7,0,0.02224838);
   gre->SetPoint(8,265,-0.01526683);
   gre->SetPointError(8,0,0.02290363);
   gre->SetPoint(9,275,-0.04770909);
   gre->SetPointError(9,0,0.02128024);
   
   TH1F *Graph_gr_ImT22_15_20_18013 = new TH1F("Graph_gr_ImT22_15_20_18013","",100,176,284);
   Graph_gr_ImT22_15_20_18013->SetMinimum(-0.08517114);
   Graph_gr_ImT22_15_20_18013->SetMaximum(0.1090107);
   Graph_gr_ImT22_15_20_18013->SetDirectory(0);
   Graph_gr_ImT22_15_20_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_18013->SetLineColor(ci);
   Graph_gr_ImT22_15_20_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
