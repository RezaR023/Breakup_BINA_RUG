{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:53:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.069,-0.2237516,269.451,0.1903935);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,159.966,-0.100141);
   gre->SetPointError(0,0,0.04899863);
   gre->SetPoint(1,169.698,0.03930038);
   gre->SetPointError(1,0,0.05032483);
   gre->SetPoint(2,179.43,-0.0254159);
   gre->SetPointError(2,0,0.04933059);
   gre->SetPoint(3,189.162,-0.001171354);
   gre->SetPointError(3,0,0.04580964);
   gre->SetPoint(4,198.894,0.04590147);
   gre->SetPointError(4,0,0.04443765);
   gre->SetPoint(5,208.626,0.07095288);
   gre->SetPointError(5,0,0.05041647);
   gre->SetPoint(6,218.358,-0.04564271);
   gre->SetPointError(6,0,0.04689568);
   gre->SetPoint(7,228.09,-0.06867771);
   gre->SetPointError(7,0,0.04951263);
   gre->SetPoint(8,237.822,-0.1091402);
   gre->SetPointError(8,0,0.0455872);
   gre->SetPoint(9,247.554,0.02155543);
   gre->SetPointError(9,0,0.05376121);
   
   TH1F *Graph_gr_T22_20_28_14012 = new TH1F("Graph_gr_T22_20_28_14012","",100,151.2072,256.3128);
   Graph_gr_T22_20_28_14012->SetMinimum(-0.1823371);
   Graph_gr_T22_20_28_14012->SetMaximum(0.148979);
   Graph_gr_T22_20_28_14012->SetDirectory(0);
   Graph_gr_T22_20_28_14012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_14012->SetLineColor(ci);
   Graph_gr_T22_20_28_14012->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14012->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_14012->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14012->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_14012->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_14012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
