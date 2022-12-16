{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:34:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(162.5,-0.1129818,297.5,0.08845401);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.01488798);
   gre->SetPointError(0,0,0.0452228);
   gre->SetPoint(1,195,-0.001731146);
   gre->SetPointError(1,0,0.04005696);
   gre->SetPoint(2,205,0.01770456);
   gre->SetPointError(2,0,0.03599794);
   gre->SetPoint(3,215,-0.03160107);
   gre->SetPointError(3,0,0.03289251);
   gre->SetPoint(4,225,0.01687465);
   gre->SetPointError(4,0,0.03446603);
   gre->SetPoint(5,235,0.02511683);
   gre->SetPointError(5,0,0.02976455);
   gre->SetPoint(6,245,0.008036145);
   gre->SetPointError(6,0,0.02885703);
   gre->SetPoint(7,255,-0.03217649);
   gre->SetPointError(7,0,0.02593161);
   gre->SetPoint(8,265,-0.02736138);
   gre->SetPointError(8,0,0.02301834);
   gre->SetPoint(9,275,-0.06065522);
   gre->SetPointError(9,0,0.01875393);
   
   TH1F *Graph_gr_ImT22_15_15_18051 = new TH1F("Graph_gr_ImT22_15_15_18051","",100,176,284);
   Graph_gr_ImT22_15_15_18051->SetMinimum(-0.0928382);
   Graph_gr_ImT22_15_15_18051->SetMaximum(0.06831043);
   Graph_gr_ImT22_15_15_18051->SetDirectory(0);
   Graph_gr_ImT22_15_15_18051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_18051->SetLineColor(ci);
   Graph_gr_ImT22_15_15_18051->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_18051->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_18051->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_18051->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_18051->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_18051->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_18051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_18051);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
