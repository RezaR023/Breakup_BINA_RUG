{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:48:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.2737235,297.5,0.07234753);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.07792048);
   gre->SetPointError(0,0,0.04151222);
   gre->SetPoint(1,195,-0.08758611);
   gre->SetPointError(1,0,0.03881713);
   gre->SetPoint(2,205,-0.02366646);
   gre->SetPointError(2,0,0.03833548);
   gre->SetPoint(3,215,-0.06953631);
   gre->SetPointError(3,0,0.0332771);
   gre->SetPoint(4,225,-0.06181265);
   gre->SetPointError(4,0,0.03161044);
   gre->SetPoint(5,235,-0.1338332);
   gre->SetPointError(5,0,0.02943321);
   gre->SetPoint(6,245,-0.1573347);
   gre->SetPointError(6,0,0.02712174);
   gre->SetPoint(7,255,-0.1900229);
   gre->SetPointError(7,0,0.02602212);
   gre->SetPoint(8,265,-0.1769543);
   gre->SetPointError(8,0,0.02082828);
   gre->SetPoint(9,275,-0.1863897);
   gre->SetPointError(9,0,0.01767314);
   
   TH1F *Graph_gr_ImT22_15_15_16087 = new TH1F("Graph_gr_ImT22_15_15_16087","",100,176,284);
   Graph_gr_ImT22_15_15_16087->SetMinimum(-0.2391164);
   Graph_gr_ImT22_15_15_16087->SetMaximum(0.03774042);
   Graph_gr_ImT22_15_15_16087->SetDirectory(0);
   Graph_gr_ImT22_15_15_16087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_16087->SetLineColor(ci);
   Graph_gr_ImT22_15_15_16087->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16087->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_16087->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16087->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_16087->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16087->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_16087);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
