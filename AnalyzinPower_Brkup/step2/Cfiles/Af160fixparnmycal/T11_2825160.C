{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:14:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.254409,310,0.07871036);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1391707);
   gre->SetPointError(0,0,0.05614344);
   gre->SetPoint(1,145,-0.01992777);
   gre->SetPointError(1,0,0.03418859);
   gre->SetPoint(2,155,-0.0642302);
   gre->SetPointError(2,0,0.03379748);
   gre->SetPoint(3,165,-0.0959012);
   gre->SetPointError(3,0,0.03280353);
   gre->SetPoint(4,175,-0.01036524);
   gre->SetPointError(4,0,0.0335557);
   gre->SetPoint(5,185,-0.09777899);
   gre->SetPointError(5,0,0.0325686);
   gre->SetPoint(6,195,-0.1672412);
   gre->SetPointError(6,0,0.03164791);
   gre->SetPoint(7,205,-0.1153332);
   gre->SetPointError(7,0,0.02629486);
   gre->SetPoint(8,215,-0.1432379);
   gre->SetPointError(8,0,0.02055927);
   gre->SetPoint(9,225,-0.1545495);
   gre->SetPointError(9,0,0.01522838);
   gre->SetPoint(10,235,-0.157408);
   gre->SetPointError(10,0,0.01829962);
   gre->SetPoint(11,245,-0.1614609);
   gre->SetPointError(11,0,0.01424664);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.01424664);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.01424664);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.01424664);
   
   TH1F *Graph_gr_iT11_28_25_16023 = new TH1F("Graph_gr_iT11_28_25_16023","",100,121,289);
   Graph_gr_iT11_28_25_16023->SetMinimum(-0.2210971);
   Graph_gr_iT11_28_25_16023->SetMaximum(0.04539842);
   Graph_gr_iT11_28_25_16023->SetDirectory(0);
   Graph_gr_iT11_28_25_16023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_16023->SetLineColor(ci);
   Graph_gr_iT11_28_25_16023->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_16023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_16023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_16023->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_16023->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_16023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_16023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_16023->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_16023->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_16023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_16023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_16023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_16023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
