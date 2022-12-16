{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:04:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.3142671,267.5,0.1259428);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1258548);
   gre->SetPointError(0,0,0.06772978);
   gre->SetPoint(1,165,-0.001841244);
   gre->SetPointError(1,0,0.05441571);
   gre->SetPoint(2,175,-0.07019492);
   gre->SetPointError(2,0,0.04744772);
   gre->SetPoint(3,185,-0.070064);
   gre->SetPointError(3,0,0.04935674);
   gre->SetPoint(4,195,-0.09082427);
   gre->SetPointError(4,0,0.04960342);
   gre->SetPoint(5,205,-0.1538372);
   gre->SetPointError(5,0,0.04706727);
   gre->SetPoint(6,215,-0.1773972);
   gre->SetPointError(6,0,0.04104909);
   gre->SetPoint(7,225,-0.1454251);
   gre->SetPointError(7,0,0.0395631);
   gre->SetPoint(8,235,-0.2053657);
   gre->SetPointError(8,0,0.03553314);
   gre->SetPoint(9,245,-0.2001499);
   gre->SetPointError(9,0,0.03069371);
   
   TH1F *Graph_gr_ImT22_25_15_14025 = new TH1F("Graph_gr_ImT22_25_15_14025","",100,146,254);
   Graph_gr_ImT22_25_15_14025->SetMinimum(-0.2702461);
   Graph_gr_ImT22_25_15_14025->SetMaximum(0.08192179);
   Graph_gr_ImT22_25_15_14025->SetDirectory(0);
   Graph_gr_ImT22_25_15_14025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_15_14025->SetLineColor(ci);
   Graph_gr_ImT22_25_15_14025->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_14025->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_14025->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_14025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_14025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_15_14025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
