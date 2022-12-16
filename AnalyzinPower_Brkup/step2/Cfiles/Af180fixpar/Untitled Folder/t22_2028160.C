{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:56:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.5407,-0.2626587,276.3893,0.07952802);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,161.5155,-0.07275814);
   gre->SetPointError(0,0,0.04478536);
   gre->SetPoint(1,171.7265,-0.1639424);
   gre->SetPointError(1,0,0.04168515);
   gre->SetPoint(2,181.9375,-0.06575128);
   gre->SetPointError(2,0,0.03354876);
   gre->SetPoint(3,192.1485,-0.1237731);
   gre->SetPointError(3,0,0.02973652);
   gre->SetPoint(4,202.3595,-0.003674095);
   gre->SetPointError(4,0,0.02617099);
   gre->SetPoint(5,212.5705,-0.08220895);
   gre->SetPointError(5,0,0.02552839);
   gre->SetPoint(6,222.7815,-0.03800925);
   gre->SetPointError(6,0,0.02479999);
   gre->SetPoint(7,232.9925,-0.01477851);
   gre->SetPointError(7,0,0.02603501);
   gre->SetPoint(8,243.2035,-0.04733013);
   gre->SetPointError(8,0,0.0307636);
   gre->SetPoint(9,253.4145,-0.0130425);
   gre->SetPointError(9,0,0.03523247);
   
   TH1F *Graph_gr_T22_20_28_16015 = new TH1F("Graph_gr_T22_20_28_16015","",100,152.3256,262.6044);
   Graph_gr_T22_20_28_16015->SetMinimum(-0.22844);
   Graph_gr_T22_20_28_16015->SetMaximum(0.04530934);
   Graph_gr_T22_20_28_16015->SetDirectory(0);
   Graph_gr_T22_20_28_16015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_16015->SetLineColor(ci);
   Graph_gr_T22_20_28_16015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_16015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_16015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_16015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_16015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_16015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_16015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_16015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_16015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_16015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_16015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_16015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_16015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
