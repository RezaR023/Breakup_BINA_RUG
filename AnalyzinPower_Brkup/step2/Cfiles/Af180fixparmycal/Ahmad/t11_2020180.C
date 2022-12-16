{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:18:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.4955973,310,1.044764);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.07248111);
   gre->SetPoint(1,145,-0.1663894);
   gre->SetPointError(1,0,0.07248111);
   gre->SetPoint(2,155,0.2928454);
   gre->SetPointError(2,0,0.4951916);
   gre->SetPoint(3,165,0.04258915);
   gre->SetPointError(3,0,0.05150126);
   gre->SetPoint(4,175,0.02117632);
   gre->SetPointError(4,0,0.04418602);
   gre->SetPoint(5,185,-0.0662931);
   gre->SetPointError(5,0,0.04059859);
   gre->SetPoint(6,195,-0.06140497);
   gre->SetPointError(6,0,0.04103035);
   gre->SetPoint(7,205,-0.09038416);
   gre->SetPointError(7,0,0.03765096);
   gre->SetPoint(8,215,-0.09799936);
   gre->SetPointError(8,0,0.03173231);
   gre->SetPoint(9,225,-0.03473238);
   gre->SetPointError(9,0,0.02981573);
   gre->SetPoint(10,235,-0.02281532);
   gre->SetPointError(10,0,0.02369754);
   gre->SetPoint(11,245,0.02460093);
   gre->SetPointError(11,0,0.02042631);
   gre->SetPoint(12,255,0.01226313);
   gre->SetPointError(12,0,0.01785963);
   gre->SetPoint(13,265,0.05495971);
   gre->SetPointError(13,0,0.01810361);
   gre->SetPoint(14,275,0.09353156);
   gre->SetPointError(14,0,0.08726502);
   
   TH1F *Graph_gr_iT11_20_20_1804 = new TH1F("Graph_gr_iT11_20_20_1804","",100,121,289);
   Graph_gr_iT11_20_20_1804->SetMinimum(-0.3415612);
   Graph_gr_iT11_20_20_1804->SetMaximum(0.8907278);
   Graph_gr_iT11_20_20_1804->SetDirectory(0);
   Graph_gr_iT11_20_20_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_1804->SetLineColor(ci);
   Graph_gr_iT11_20_20_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
