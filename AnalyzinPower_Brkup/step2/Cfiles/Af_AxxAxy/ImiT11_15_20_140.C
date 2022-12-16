{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:39:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2412492,310,0.2332122);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.005299953);
   gre->SetPointError(0,0,0.03398832);
   gre->SetPoint(1,145,-0.005299953);
   gre->SetPointError(1,0,0.03398832);
   gre->SetPoint(2,155,-0.005299953);
   gre->SetPointError(2,0,0.03398832);
   gre->SetPoint(3,165,-0.004018487);
   gre->SetPointError(3,0,0.1581538);
   gre->SetPoint(4,175,-0.008344086);
   gre->SetPointError(4,0,0.05443496);
   gre->SetPoint(5,185,0.03593654);
   gre->SetPointError(5,0,0.03731798);
   gre->SetPoint(6,195,-0.05664127);
   gre->SetPointError(6,0,0.03680351);
   gre->SetPoint(7,205,-0.04614521);
   gre->SetPointError(7,0,0.03239606);
   gre->SetPoint(8,215,-0.02074411);
   gre->SetPointError(8,0,0.03559877);
   gre->SetPoint(9,225,-0.0268295);
   gre->SetPointError(9,0,0.03320534);
   gre->SetPoint(10,235,-0.0348369);
   gre->SetPointError(10,0,0.03449671);
   gre->SetPoint(11,245,0.006616646);
   gre->SetPointError(11,0,0.03795776);
   gre->SetPoint(12,255,-0.03683327);
   gre->SetPointError(12,0,0.03964967);
   gre->SetPoint(13,265,-0.02057536);
   gre->SetPointError(13,0,0.03501852);
   gre->SetPoint(14,275,0.001644538);
   gre->SetPointError(14,0,0.03959495);
   
   TH1F *Graph_gr_ImiT11_15_20_14019 = new TH1F("Graph_gr_ImiT11_15_20_14019","",100,121,289);
   Graph_gr_ImiT11_15_20_14019->SetMinimum(-0.193803);
   Graph_gr_ImiT11_15_20_14019->SetMaximum(0.1857661);
   Graph_gr_ImiT11_15_20_14019->SetDirectory(0);
   Graph_gr_ImiT11_15_20_14019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_20_14019->SetLineColor(ci);
   Graph_gr_ImiT11_15_20_14019->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_14019->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_20_14019->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_20_14019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_20_14019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_20_14019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
