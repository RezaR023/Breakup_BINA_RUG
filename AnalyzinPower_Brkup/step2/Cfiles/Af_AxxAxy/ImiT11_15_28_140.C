{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:42:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.3750847,310,1.346184);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.04806323);
   gre->SetPointError(0,0,0.04014337);
   gre->SetPoint(1,145,-0.04806323);
   gre->SetPointError(1,0,0.04014337);
   gre->SetPoint(2,155,0.5783573);
   gre->SetPointError(2,0,0.4809484);
   gre->SetPoint(3,165,0.02009686);
   gre->SetPointError(3,0,0.05787878);
   gre->SetPoint(4,175,0.02443235);
   gre->SetPointError(4,0,0.03156757);
   gre->SetPoint(5,185,0.01895513);
   gre->SetPointError(5,0,0.02673806);
   gre->SetPoint(6,195,0.01052141);
   gre->SetPointError(6,0,0.02339403);
   gre->SetPoint(7,205,0.01394887);
   gre->SetPointError(7,0,0.0239721);
   gre->SetPoint(8,215,0.003290188);
   gre->SetPointError(8,0,0.02364864);
   gre->SetPoint(9,225,0.01461549);
   gre->SetPointError(9,0,0.02560942);
   gre->SetPoint(10,235,-0.009300463);
   gre->SetPointError(10,0,0.02901637);
   gre->SetPoint(11,245,-0.04537824);
   gre->SetPointError(11,0,0.03252784);
   gre->SetPoint(12,255,-0.01519068);
   gre->SetPointError(12,0,0.03156447);
   gre->SetPoint(13,265,-0.002259503);
   gre->SetPointError(13,0,0.03277795);
   gre->SetPoint(14,275,0.008445887);
   gre->SetPointError(14,0,0.02768445);
   
   TH1F *Graph_gr_ImiT11_15_28_14023 = new TH1F("Graph_gr_ImiT11_15_28_14023","",100,121,289);
   Graph_gr_ImiT11_15_28_14023->SetMinimum(-0.2029578);
   Graph_gr_ImiT11_15_28_14023->SetMaximum(1.174057);
   Graph_gr_ImiT11_15_28_14023->SetDirectory(0);
   Graph_gr_ImiT11_15_28_14023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_14023->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_14023->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_14023->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_14023->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_14023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_14023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_14023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
