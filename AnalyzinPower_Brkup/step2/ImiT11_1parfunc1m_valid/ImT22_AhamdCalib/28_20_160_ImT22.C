{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:51:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.2899549,257.5,0.2163354);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.001249474);
   gre->SetPointError(0,0,0.03278711);
   gre->SetPoint(1,155,0.09895524);
   gre->SetPointError(1,0,0.03299845);
   gre->SetPoint(2,165,-0.008387908);
   gre->SetPointError(2,0,0.03156432);
   gre->SetPoint(3,175,-0.07507732);
   gre->SetPointError(3,0,0.03234397);
   gre->SetPoint(4,185,-0.09492312);
   gre->SetPointError(4,0,0.03043695);
   gre->SetPoint(5,195,-0.1402238);
   gre->SetPointError(5,0,0.02979681);
   gre->SetPoint(6,205,-0.1509195);
   gre->SetPointError(6,0,0.02439576);
   gre->SetPoint(7,215,-0.1522672);
   gre->SetPointError(7,0,0.02093498);
   gre->SetPoint(8,225,-0.1887665);
   gre->SetPointError(8,0,0.01680664);
   gre->SetPoint(9,235,-0.1356323);
   gre->SetPointError(9,0,0.01623012);
   
   TH1F *Graph_gr_ImT22_28_20_16079 = new TH1F("Graph_gr_ImT22_28_20_16079","",100,136,244);
   Graph_gr_ImT22_28_20_16079->SetMinimum(-0.2393258);
   Graph_gr_ImT22_28_20_16079->SetMaximum(0.1657064);
   Graph_gr_ImT22_28_20_16079->SetDirectory(0);
   Graph_gr_ImT22_28_20_16079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_20_16079->SetLineColor(ci);
   Graph_gr_ImT22_28_20_16079->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_16079->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_16079->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_16079->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_16079->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_16079->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_16079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_20_16079);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
