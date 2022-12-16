{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:38:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-1.696013,310,0.6007271);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.1862962);
   gre->SetPointError(0,0,0.03164085);
   gre->SetPoint(1,145,0.1862962);
   gre->SetPointError(1,0,0.03164085);
   gre->SetPoint(2,155,-0.0001623555);
   gre->SetPointError(2,0,0.07506268);
   gre->SetPoint(3,165,-0.6566116);
   gre->SetPointError(3,0,0.6566116);
   gre->SetPoint(4,175,0.02991622);
   gre->SetPointError(4,0,0.1086983);
   gre->SetPoint(5,185,0.02714588);
   gre->SetPointError(5,0,0.05010713);
   gre->SetPoint(6,195,0.01259462);
   gre->SetPointError(6,0,0.0510803);
   gre->SetPoint(7,205,0.04158377);
   gre->SetPointError(7,0,0.04422789);
   gre->SetPoint(8,215,0.00828758);
   gre->SetPointError(8,0,0.04007887);
   gre->SetPoint(9,225,-0.02024008);
   gre->SetPointError(9,0,0.03957418);
   gre->SetPoint(10,235,-0.06397497);
   gre->SetPointError(10,0,0.04073011);
   gre->SetPoint(11,245,0.03531874);
   gre->SetPointError(11,0,0.03903994);
   gre->SetPoint(12,255,-0.007331626);
   gre->SetPointError(12,0,0.04025583);
   gre->SetPoint(13,265,-0.03185682);
   gre->SetPointError(13,0,0.03580641);
   gre->SetPoint(14,275,-0.01473986);
   gre->SetPointError(14,0,0.02729373);
   
   TH1F *Graph_gr_ImiT11_15_15_14017 = new TH1F("Graph_gr_ImiT11_15_15_14017","",100,121,289);
   Graph_gr_ImiT11_15_15_14017->SetMinimum(-1.466339);
   Graph_gr_ImiT11_15_15_14017->SetMaximum(0.3710531);
   Graph_gr_ImiT11_15_15_14017->SetDirectory(0);
   Graph_gr_ImiT11_15_15_14017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_14017->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_14017->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_14017->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_14017->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_14017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
