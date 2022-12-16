{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:36:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.6663098,310,1.854748);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.02400952);
   gre->SetPointError(0,0,0.0359619);
   gre->SetPoint(1,145,-0.06321159);
   gre->SetPointError(1,0,0.1394162);
   gre->SetPoint(2,155,0.594219);
   gre->SetPointError(2,0,0.8403525);
   gre->SetPoint(3,165,-0.03316245);
   gre->SetPointError(3,0,0.06008183);
   gre->SetPoint(4,175,-0.01568409);
   gre->SetPointError(4,0,0.02378645);
   gre->SetPoint(5,185,-0.001761318);
   gre->SetPointError(5,0,0.01971059);
   gre->SetPoint(6,195,0.01224251);
   gre->SetPointError(6,0,0.01730619);
   gre->SetPoint(7,205,0.01786504);
   gre->SetPointError(7,0,0.01596207);
   gre->SetPoint(8,215,0.02268426);
   gre->SetPointError(8,0,0.01565996);
   gre->SetPoint(9,225,0.004289607);
   gre->SetPointError(9,0,0.0175107);
   gre->SetPoint(10,235,-0.00174279);
   gre->SetPointError(10,0,0.02000043);
   gre->SetPoint(11,245,-0.03637058);
   gre->SetPointError(11,0,0.02232526);
   gre->SetPoint(12,255,0.04441061);
   gre->SetPointError(12,0,0.02535313);
   gre->SetPoint(13,265,-0.03393069);
   gre->SetPointError(13,0,0.02693382);
   gre->SetPoint(14,275,0.01225854);
   gre->SetPointError(14,0,0.04394759);
   
   TH1F *Graph_gr_ImiT11_15_28_16015 = new TH1F("Graph_gr_ImiT11_15_28_16015","",100,121,289);
   Graph_gr_ImiT11_15_28_16015->SetMinimum(-0.4142041);
   Graph_gr_ImiT11_15_28_16015->SetMaximum(1.602642);
   Graph_gr_ImiT11_15_28_16015->SetDirectory(0);
   Graph_gr_ImiT11_15_28_16015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_16015->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_16015->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16015->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16015->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_16015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
