{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:56:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(142.5,-0.1900924,277.5,0.1492889);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.06959554);
   gre->SetPointError(0,0,0.03087272);
   gre->SetPoint(1,175,-0.05740263);
   gre->SetPointError(1,0,0.03409801);
   gre->SetPoint(2,185,-0.0002043448);
   gre->SetPointError(2,0,0.03156466);
   gre->SetPoint(3,195,0.05831782);
   gre->SetPointError(3,0,0.03440754);
   gre->SetPoint(4,205,0.04428895);
   gre->SetPointError(4,0,0.03040551);
   gre->SetPoint(5,215,0.009768367);
   gre->SetPointError(5,0,0.03574786);
   gre->SetPoint(6,225,-0.03610158);
   gre->SetPointError(6,0,0.03550701);
   gre->SetPoint(7,235,-0.08944046);
   gre->SetPointError(7,0,0.03181183);
   gre->SetPoint(8,245,-0.08183161);
   gre->SetPointError(8,0,0.03126237);
   gre->SetPoint(9,255,-0.1012402);
   gre->SetPointError(9,0,0.03228863);
   
   TH1F *Graph_gr_ImT22_20_20_14087 = new TH1F("Graph_gr_ImT22_20_20_14087","",100,156,264);
   Graph_gr_ImT22_20_20_14087->SetMinimum(-0.1561542);
   Graph_gr_ImT22_20_20_14087->SetMaximum(0.1153508);
   Graph_gr_ImT22_20_20_14087->SetDirectory(0);
   Graph_gr_ImT22_20_20_14087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_14087->SetLineColor(ci);
   Graph_gr_ImT22_20_20_14087->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14087->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_14087->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14087->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_14087->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14087->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_14087);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
