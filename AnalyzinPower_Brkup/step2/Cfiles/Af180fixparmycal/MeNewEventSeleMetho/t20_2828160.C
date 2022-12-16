{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:44:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.6130731,310,0.4197854);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.1275089);
   gre->SetPointError(0,0,0.05839507);
   gre->SetPoint(1,145,0.08225119);
   gre->SetPointError(1,0,0.0503982);
   gre->SetPoint(2,155,0.1963226);
   gre->SetPointError(2,0,0.05131972);
   gre->SetPoint(3,165,-0.01916134);
   gre->SetPointError(3,0,0.04552241);
   gre->SetPoint(4,175,-0.107019);
   gre->SetPointError(4,0,0.04346661);
   gre->SetPoint(5,185,-0.2590022);
   gre->SetPointError(5,0,0.037022);
   gre->SetPoint(6,195,-0.3243303);
   gre->SetPointError(6,0,0.0301229);
   gre->SetPoint(7,205,-0.3627185);
   gre->SetPointError(7,0,0.02360173);
   gre->SetPoint(8,215,-0.3892878);
   gre->SetPointError(8,0,0.01974271);
   gre->SetPoint(9,225,-0.3711234);
   gre->SetPointError(9,0,0.01781531);
   gre->SetPoint(10,235,-0.3955991);
   gre->SetPointError(10,0,0.04533092);
   gre->SetPoint(11,245,-0.02635914);
   gre->SetPointError(11,0,0.04533092);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,0.04533092);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,0.04533092);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,0.04533092);
   
   TH1F *Graph_gr_T20_28_28_16014 = new TH1F("Graph_gr_T20_28_28_16014","",100,121,289);
   Graph_gr_T20_28_28_16014->SetMinimum(-0.5097872);
   Graph_gr_T20_28_28_16014->SetMaximum(0.3164996);
   Graph_gr_T20_28_28_16014->SetDirectory(0);
   Graph_gr_T20_28_28_16014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_16014->SetLineColor(ci);
   Graph_gr_T20_28_28_16014->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_16014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_16014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_16014->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_16014->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_16014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_16014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_16014->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_16014->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_16014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_16014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_16014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_16014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
