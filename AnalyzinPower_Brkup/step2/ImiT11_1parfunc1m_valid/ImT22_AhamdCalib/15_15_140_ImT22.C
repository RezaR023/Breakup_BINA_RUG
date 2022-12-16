{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:53:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(162.5,-0.3132428,297.5,0.09475495);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.07113643);
   gre->SetPointError(0,0,0.03669934);
   gre->SetPoint(1,195,-0.07260382);
   gre->SetPointError(1,0,0.03466245);
   gre->SetPoint(2,205,-0.00486691);
   gre->SetPointError(2,0,0.03162222);
   gre->SetPoint(3,215,-0.05944038);
   gre->SetPointError(3,0,0.03269255);
   gre->SetPoint(4,225,-0.08234148);
   gre->SetPointError(4,0,0.03349774);
   gre->SetPoint(5,235,-0.05118929);
   gre->SetPointError(5,0,0.03587151);
   gre->SetPoint(6,245,-0.1714886);
   gre->SetPointError(6,0,0.03543375);
   gre->SetPoint(7,255,-0.2088549);
   gre->SetPointError(7,0,0.03514414);
   gre->SetPoint(8,265,-0.2110256);
   gre->SetPointError(8,0,0.03421762);
   gre->SetPoint(9,275,-0.2115924);
   gre->SetPointError(9,0,0.02994117);
   
   TH1F *Graph_gr_ImT22_15_15_14082 = new TH1F("Graph_gr_ImT22_15_15_14082","",100,176,284);
   Graph_gr_ImT22_15_15_14082->SetMinimum(-0.2724431);
   Graph_gr_ImT22_15_15_14082->SetMaximum(0.05395516);
   Graph_gr_ImT22_15_15_14082->SetDirectory(0);
   Graph_gr_ImT22_15_15_14082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_14082->SetLineColor(ci);
   Graph_gr_ImT22_15_15_14082->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14082->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_14082->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14082->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_14082->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_14082->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_14082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_14082);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
