{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:22:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(162.5,-0.1754522,297.5,0.08771279);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.02685553);
   gre->SetPointError(0,0,0.02659907);
   gre->SetPoint(1,195,-0.002142797);
   gre->SetPointError(1,0,0.02317831);
   gre->SetPoint(2,205,0.002793028);
   gre->SetPointError(2,0,0.02046927);
   gre->SetPoint(3,215,0.01208373);
   gre->SetPointError(3,0,0.01937361);
   gre->SetPoint(4,225,0.02445297);
   gre->SetPointError(4,0,0.019399);
   gre->SetPoint(5,235,-0.005157885);
   gre->SetPointError(5,0,0.019533);
   gre->SetPoint(6,245,-0.03894268);
   gre->SetPointError(6,0,0.01982598);
   gre->SetPoint(7,255,-0.02175702);
   gre->SetPointError(7,0,0.02038545);
   gre->SetPoint(8,265,-0.1107689);
   gre->SetPointError(8,0,0.02082242);
   gre->SetPoint(9,275,-0.04443414);
   gre->SetPointError(9,0,0.02174361);
   
   TH1F *Graph_gr_ImT22_15_20_16067 = new TH1F("Graph_gr_ImT22_15_20_16067","",100,176,284);
   Graph_gr_ImT22_15_20_16067->SetMinimum(-0.1491357);
   Graph_gr_ImT22_15_20_16067->SetMaximum(0.0613963);
   Graph_gr_ImT22_15_20_16067->SetDirectory(0);
   Graph_gr_ImT22_15_20_16067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_16067->SetLineColor(ci);
   Graph_gr_ImT22_15_20_16067->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16067->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16067->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16067->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_16067->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_16067->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_16067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_16067);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
