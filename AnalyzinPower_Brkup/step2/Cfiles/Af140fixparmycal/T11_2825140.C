{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:36:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-1.715543,310,1.999355);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1423529);
   gre->SetPointError(0,0,0.04718182);
   gre->SetPoint(1,145,-0.05300926);
   gre->SetPointError(1,0,0.03733506);
   gre->SetPoint(2,155,-0.08026366);
   gre->SetPointError(2,0,0.03304351);
   gre->SetPoint(3,165,-0.02572538);
   gre->SetPointError(3,0,0.03451161);
   gre->SetPoint(4,175,-0.06310994);
   gre->SetPointError(4,0,0.03507786);
   gre->SetPoint(5,185,-0.1090032);
   gre->SetPointError(5,0,0.03788509);
   gre->SetPoint(6,195,-0.1167383);
   gre->SetPointError(6,0,0.04079091);
   gre->SetPoint(7,205,-0.1350225);
   gre->SetPointError(7,0,0.0385575);
   gre->SetPoint(8,215,-0.1435727);
   gre->SetPointError(8,0,0.03344868);
   gre->SetPoint(9,225,-0.08142163);
   gre->SetPointError(9,0,0.02765892);
   gre->SetPoint(10,235,0.4502016);
   gre->SetPointError(10,0,0.9300038);
   gre->SetPoint(11,245,-0.1663894);
   gre->SetPointError(11,0,0.9300038);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.9300038);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.9300038);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.9300038);
   
   TH1F *Graph_gr_iT11_28_25_14010 = new TH1F("Graph_gr_iT11_28_25_14010","",100,121,289);
   Graph_gr_iT11_28_25_14010->SetMinimum(-1.344053);
   Graph_gr_iT11_28_25_14010->SetMaximum(1.627865);
   Graph_gr_iT11_28_25_14010->SetDirectory(0);
   Graph_gr_iT11_28_25_14010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_14010->SetLineColor(ci);
   Graph_gr_iT11_28_25_14010->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14010->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_14010->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14010->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_14010->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_14010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
