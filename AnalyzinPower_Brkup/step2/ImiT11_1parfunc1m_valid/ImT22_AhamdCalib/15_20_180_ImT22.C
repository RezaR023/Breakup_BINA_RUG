{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:34:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(162.5,-0.1114883,297.5,0.1033807);
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
   gre->SetPoint(0,185,-0.01895744);
   gre->SetPointError(0,0,0.03318862);
   gre->SetPoint(1,195,0.02510009);
   gre->SetPointError(1,0,0.02776411);
   gre->SetPoint(2,205,0.03776785);
   gre->SetPointError(2,0,0.02537826);
   gre->SetPoint(3,215,0.04455849);
   gre->SetPointError(3,0,0.02301073);
   gre->SetPoint(4,225,0.03907694);
   gre->SetPointError(4,0,0.02349904);
   gre->SetPoint(5,235,0.0254969);
   gre->SetPointError(5,0,0.02220965);
   gre->SetPoint(6,245,-0.002999398);
   gre->SetPointError(6,0,0.02143929);
   gre->SetPoint(7,255,-0.05272212);
   gre->SetPointError(7,0,0.0229547);
   gre->SetPoint(8,265,-0.02514051);
   gre->SetPointError(8,0,0.02315861);
   gre->SetPoint(9,275,-0.03279132);
   gre->SetPointError(9,0,0.02547672);
   
   TH1F *Graph_gr_ImT22_15_20_18050 = new TH1F("Graph_gr_ImT22_15_20_18050","",100,176,284);
   Graph_gr_ImT22_15_20_18050->SetMinimum(-0.09000142);
   Graph_gr_ImT22_15_20_18050->SetMaximum(0.08189383);
   Graph_gr_ImT22_15_20_18050->SetDirectory(0);
   Graph_gr_ImT22_15_20_18050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_18050->SetLineColor(ci);
   Graph_gr_ImT22_15_20_18050->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18050->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_18050->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18050->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_18050->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_18050->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_18050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_18050);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
