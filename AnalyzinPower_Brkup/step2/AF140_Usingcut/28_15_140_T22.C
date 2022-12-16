{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:20:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(122.5,-0.2889406,257.5,0.05002436);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1332937);
   gre->SetPointError(0,0,0.063213);
   gre->SetPoint(1,155,-0.09193243);
   gre->SetPointError(1,0,0.04700187);
   gre->SetPoint(2,165,-0.1706957);
   gre->SetPointError(2,0,0.05300198);
   gre->SetPoint(3,175,-0.083238);
   gre->SetPointError(3,0,0.04628757);
   gre->SetPoint(4,185,-0.1453214);
   gre->SetPointError(4,0,0.04717411);
   gre->SetPoint(5,195,-0.1842005);
   gre->SetPointError(5,0,0.04654178);
   gre->SetPoint(6,205,-0.1915942);
   gre->SetPointError(6,0,0.04085226);
   gre->SetPoint(7,215,-0.04374907);
   gre->SetPointError(7,0,0.03727927);
   gre->SetPoint(8,225,-0.06401531);
   gre->SetPointError(8,0,0.03613529);
   gre->SetPoint(9,235,-0.06660843);
   gre->SetPointError(9,0,0.04158626);
   
   TH1F *Graph_gr_T22_28_15_14044 = new TH1F("Graph_gr_T22_28_15_14044","",100,136,244);
   Graph_gr_T22_28_15_14044->SetMinimum(-0.2550441);
   Graph_gr_T22_28_15_14044->SetMaximum(0.01612786);
   Graph_gr_T22_28_15_14044->SetDirectory(0);
   Graph_gr_T22_28_15_14044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_14044->SetLineColor(ci);
   Graph_gr_T22_28_15_14044->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_14044->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_14044->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_14044->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_14044->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_14044->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_14044->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_14044->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_14044->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_14044->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_14044->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_14044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_14044);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
