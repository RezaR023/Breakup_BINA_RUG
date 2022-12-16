{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:45:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1911158,257.5,0.1685692);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.04295158);
   gre->SetPointError(0,0,0.04834495);
   gre->SetPoint(1,155,-0.09030313);
   gre->SetPointError(1,0,0.04086519);
   gre->SetPoint(2,165,0.07056508);
   gre->SetPointError(2,0,0.03805658);
   gre->SetPoint(3,175,-0.01131127);
   gre->SetPointError(3,0,0.0295127);
   gre->SetPoint(4,185,0.02560798);
   gre->SetPointError(4,0,0.02145917);
   gre->SetPoint(5,195,-0.01587048);
   gre->SetPointError(5,0,0.01403814);
   gre->SetPoint(6,205,0.01327506);
   gre->SetPointError(6,0,0.008930249);
   gre->SetPoint(7,215,0.009086919);
   gre->SetPointError(7,0,0.005851687);
   gre->SetPoint(8,225,-0.001040771);
   gre->SetPointError(8,0,0.004598778);
   gre->SetPoint(9,235,-0.004460494);
   gre->SetPointError(9,0,0.007750299);
   
   TH1F *Graph_gr_ImT22_28_28_18082 = new TH1F("Graph_gr_ImT22_28_28_18082","",100,136,244);
   Graph_gr_ImT22_28_28_18082->SetMinimum(-0.1551473);
   Graph_gr_ImT22_28_28_18082->SetMaximum(0.1326007);
   Graph_gr_ImT22_28_28_18082->SetDirectory(0);
   Graph_gr_ImT22_28_28_18082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_18082->SetLineColor(ci);
   Graph_gr_ImT22_28_28_18082->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18082->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_18082->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18082->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_18082->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18082->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_18082);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
