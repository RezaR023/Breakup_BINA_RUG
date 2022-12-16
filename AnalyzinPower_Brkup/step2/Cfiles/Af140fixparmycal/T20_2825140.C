{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:37:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-2.01433,310,3.02168);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1130123);
   gre->SetPointError(0,0,0.06975843);
   gre->SetPoint(1,145,0.1043041);
   gre->SetPointError(1,0,0.05794415);
   gre->SetPoint(2,155,0.04456781);
   gre->SetPointError(2,0,0.05244388);
   gre->SetPoint(3,165,0.07672677);
   gre->SetPointError(3,0,0.05234848);
   gre->SetPoint(4,175,-0.03718358);
   gre->SetPointError(4,0,0.05252815);
   gre->SetPoint(5,185,-0.06176333);
   gre->SetPointError(5,0,0.05600334);
   gre->SetPoint(6,195,-0.1233748);
   gre->SetPointError(6,0,0.0574511);
   gre->SetPoint(7,205,-0.2169352);
   gre->SetPointError(7,0,0.05338581);
   gre->SetPoint(8,215,-0.273451);
   gre->SetPointError(8,0,0.04403149);
   gre->SetPoint(9,225,-0.2511429);
   gre->SetPointError(9,0,0.03547223);
   gre->SetPoint(10,235,1.033709);
   gre->SetPointError(10,0,1.148636);
   gre->SetPoint(11,245,-0.02635914);
   gre->SetPointError(11,0,1.148636);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,1.148636);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,1.148636);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,1.148636);
   
   TH1F *Graph_gr_T20_28_25_14011 = new TH1F("Graph_gr_T20_28_25_14011","",100,121,289);
   Graph_gr_T20_28_25_14011->SetMinimum(-1.510729);
   Graph_gr_T20_28_25_14011->SetMaximum(2.518079);
   Graph_gr_T20_28_25_14011->SetDirectory(0);
   Graph_gr_T20_28_25_14011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_25_14011->SetLineColor(ci);
   Graph_gr_T20_28_25_14011->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14011->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_14011->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14011->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_14011->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_25_14011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
