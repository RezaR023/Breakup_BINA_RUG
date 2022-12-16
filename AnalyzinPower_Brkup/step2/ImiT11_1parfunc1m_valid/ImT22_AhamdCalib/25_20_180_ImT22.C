{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:41:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.1174782,267.5,0.1748273);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.0117617);
   gre->SetPointError(0,0,0.04066978);
   gre->SetPoint(1,165,0.08353233);
   gre->SetPointError(1,0,0.04257735);
   gre->SetPoint(2,175,-0.01520584);
   gre->SetPointError(2,0,0.03874525);
   gre->SetPoint(3,185,0.04380497);
   gre->SetPointError(3,0,0.03929898);
   gre->SetPoint(4,195,-0.03437965);
   gre->SetPointError(4,0,0.03438095);
   gre->SetPoint(5,205,-0.02404706);
   gre->SetPointError(5,0,0.02687415);
   gre->SetPoint(6,215,-0.01815428);
   gre->SetPointError(6,0,0.01997908);
   gre->SetPoint(7,225,-0.03137454);
   gre->SetPointError(7,0,0.01385381);
   gre->SetPoint(8,235,-0.03574088);
   gre->SetPointError(8,0,0.00983841);
   gre->SetPoint(9,245,-0.00824205);
   gre->SetPointError(9,0,0.008844099);
   
   TH1F *Graph_gr_ImT22_25_20_18059 = new TH1F("Graph_gr_ImT22_25_20_18059","",100,146,254);
   Graph_gr_ImT22_25_20_18059->SetMinimum(-0.08824764);
   Graph_gr_ImT22_25_20_18059->SetMaximum(0.1455967);
   Graph_gr_ImT22_25_20_18059->SetDirectory(0);
   Graph_gr_ImT22_25_20_18059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_18059->SetLineColor(ci);
   Graph_gr_ImT22_25_20_18059->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18059->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_18059->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18059->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_18059->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_18059->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_18059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_18059);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
