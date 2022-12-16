{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:06:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.2349341,255,0.1347759);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.09779336);
   gre->SetPointError(0,0,0.04111358);
   gre->SetPoint(1,165,0.02947943);
   gre->SetPointError(1,0,0.0436781);
   gre->SetPoint(2,175,-0.03642505);
   gre->SetPointError(2,0,0.04665881);
   gre->SetPoint(3,185,-0.003704067);
   gre->SetPointError(3,0,0.04726185);
   gre->SetPoint(4,195,-0.02909966);
   gre->SetPointError(4,0,0.04963945);
   gre->SetPoint(5,205,-0.1162385);
   gre->SetPointError(5,0,0.04947122);
   gre->SetPoint(6,215,-0.07800594);
   gre->SetPointError(6,0,0.04578429);
   gre->SetPoint(7,225,-0.1276836);
   gre->SetPointError(7,0,0.04563215);
   gre->SetPoint(8,235,-0.1057616);
   gre->SetPointError(8,0,0.03335466);
   
   TH1F *Graph_gr_ImT22_25_20_14030 = new TH1F("Graph_gr_ImT22_25_20_14030","",100,147,243);
   Graph_gr_ImT22_25_20_14030->SetMinimum(-0.1979631);
   Graph_gr_ImT22_25_20_14030->SetMaximum(0.09780487);
   Graph_gr_ImT22_25_20_14030->SetDirectory(0);
   Graph_gr_ImT22_25_20_14030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_14030->SetLineColor(ci);
   Graph_gr_ImT22_25_20_14030->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_14030->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_14030->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_14030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_14030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_14030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
