{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:57:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.9557,-0.5196391,238.4143,0.1422276);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.0655205);
   gre->SetPointError(0,0,0.09743698);
   gre->SetPoint(1,145.4365,-0.08152334);
   gre->SetPointError(1,0,0.09140149);
   gre->SetPoint(2,154.5075,-0.06813578);
   gre->SetPointError(2,0,0.09326746);
   gre->SetPoint(3,163.5785,-0.1599732);
   gre->SetPointError(3,0,0.09454672);
   gre->SetPoint(4,172.6495,-0.1607049);
   gre->SetPointError(4,0,0.101063);
   gre->SetPoint(5,181.7205,-0.12003);
   gre->SetPointError(5,0,0.1096395);
   gre->SetPoint(6,190.7915,-0.2231384);
   gre->SetPointError(6,0,0.1034074);
   gre->SetPoint(7,199.8625,-0.1686701);
   gre->SetPointError(7,0,0.1054682);
   gre->SetPoint(8,208.9335,-0.3102512);
   gre->SetPointError(8,0,0.09907677);
   gre->SetPoint(9,218.0045,-0.2403444);
   gre->SetPointError(9,0,0.08709202);
   
   TH1F *Graph_gr_T20_28_28_1406 = new TH1F("Graph_gr_T20_28_28_1406","",100,128.2016,226.1684);
   Graph_gr_T20_28_28_1406->SetMinimum(-0.4534524);
   Graph_gr_T20_28_28_1406->SetMaximum(0.07604093);
   Graph_gr_T20_28_28_1406->SetDirectory(0);
   Graph_gr_T20_28_28_1406->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1406->SetLineColor(ci);
   Graph_gr_T20_28_28_1406->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1406->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1406->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1406->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1406->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1406->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1406->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1406->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1406->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1406->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1406->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1406->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1406);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
