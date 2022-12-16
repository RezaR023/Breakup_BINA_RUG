{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:48:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.1682079,267.5,0.1219552);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.005208668);
   gre->SetPointError(0,0,0.0550744);
   gre->SetPoint(1,165,-0.06805393);
   gre->SetPointError(1,0,0.03623555);
   gre->SetPoint(2,175,-0.0788273);
   gre->SetPointError(2,0,0.04102005);
   gre->SetPoint(3,185,-0.06686494);
   gre->SetPointError(3,0,0.03958668);
   gre->SetPoint(4,195,-0.03348442);
   gre->SetPointError(4,0,0.03801101);
   gre->SetPoint(5,205,0.01366565);
   gre->SetPointError(5,0,0.03462147);
   gre->SetPoint(6,215,-0.02484659);
   gre->SetPointError(6,0,0.03330256);
   gre->SetPoint(7,225,0.01030193);
   gre->SetPointError(7,0,0.03421085);
   gre->SetPoint(8,235,0.04039146);
   gre->SetPointError(8,0,0.03320319);
   gre->SetPoint(9,245,0.009004072);
   gre->SetPointError(9,0,0.02883421);
   
   TH1F *Graph_gr_ImT22_20_25_14015 = new TH1F("Graph_gr_ImT22_20_25_14015","",100,146,254);
   Graph_gr_ImT22_20_25_14015->SetMinimum(-0.1391916);
   Graph_gr_ImT22_20_25_14015->SetMaximum(0.09293885);
   Graph_gr_ImT22_20_25_14015->SetDirectory(0);
   Graph_gr_ImT22_20_25_14015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_14015->SetLineColor(ci);
   Graph_gr_ImT22_20_25_14015->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_14015->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_14015->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_14015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
