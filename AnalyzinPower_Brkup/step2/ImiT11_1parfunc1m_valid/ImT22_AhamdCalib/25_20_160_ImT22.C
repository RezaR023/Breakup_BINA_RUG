{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:49:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.2480946,267.5,0.1083253);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05427371);
   gre->SetPointError(0,0,0.03108739);
   gre->SetPoint(1,165,0.01766782);
   gre->SetPointError(1,0,0.03125416);
   gre->SetPoint(2,175,-0.06304081);
   gre->SetPointError(2,0,0.03044192);
   gre->SetPoint(3,185,-0.06219584);
   gre->SetPointError(3,0,0.02942585);
   gre->SetPoint(4,195,-0.103745);
   gre->SetPointError(4,0,0.02937664);
   gre->SetPoint(5,205,-0.113708);
   gre->SetPointError(5,0,0.0249732);
   gre->SetPoint(6,215,-0.1539382);
   gre->SetPointError(6,0,0.02159596);
   gre->SetPoint(7,225,-0.170892);
   gre->SetPointError(7,0,0.0177993);
   gre->SetPoint(8,235,-0.1714845);
   gre->SetPointError(8,0,0.01446925);
   gre->SetPoint(9,245,-0.1585685);
   gre->SetPointError(9,0,0.01654329);
   
   TH1F *Graph_gr_ImT22_25_20_16075 = new TH1F("Graph_gr_ImT22_25_20_16075","",100,146,254);
   Graph_gr_ImT22_25_20_16075->SetMinimum(-0.2124526);
   Graph_gr_ImT22_25_20_16075->SetMaximum(0.07268331);
   Graph_gr_ImT22_25_20_16075->SetDirectory(0);
   Graph_gr_ImT22_25_20_16075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_16075->SetLineColor(ci);
   Graph_gr_ImT22_25_20_16075->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_16075->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_16075->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_16075->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_16075->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_16075->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_16075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_16075);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
