{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:25:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(115,-0.5391378,235,0.2764691);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.0553378);
   gre->SetPointError(0,0,0.07264172);
   gre->SetPoint(1,145,0.0826711);
   gre->SetPointError(1,0,0.05786353);
   gre->SetPoint(2,155,0.07228453);
   gre->SetPointError(2,0,0.05617442);
   gre->SetPoint(3,165,0.04283706);
   gre->SetPointError(3,0,0.05742982);
   gre->SetPoint(4,175,-0.03131959);
   gre->SetPointError(4,0,0.05753035);
   gre->SetPoint(5,185,-0.1029358);
   gre->SetPointError(5,0,0.05681125);
   gre->SetPoint(6,195,-0.208141);
   gre->SetPointError(6,0,0.05270729);
   gre->SetPoint(7,205,-0.358586);
   gre->SetPointError(7,0,0.04461736);
   gre->SetPoint(8,215,-0.2743402);
   gre->SetPointError(8,0,0.04013965);
   
   TH1F *Graph_gr_T20_28_28_14058 = new TH1F("Graph_gr_T20_28_28_14058","",100,127,223);
   Graph_gr_T20_28_28_14058->SetMinimum(-0.4575771);
   Graph_gr_T20_28_28_14058->SetMaximum(0.1949084);
   Graph_gr_T20_28_28_14058->SetDirectory(0);
   Graph_gr_T20_28_28_14058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_14058->SetLineColor(ci);
   Graph_gr_T20_28_28_14058->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_14058->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_14058->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_14058->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_14058->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_14058->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_14058->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_14058->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_14058->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_14058->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_14058->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_14058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_14058);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
