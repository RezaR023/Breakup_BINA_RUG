{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:05:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.5181191,287.5,0.3439973);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.1051109);
   gre->SetPointError(0,0,0.0536823);
   gre->SetPoint(1,185,0.1607822);
   gre->SetPointError(1,0,0.03952903);
   gre->SetPoint(2,195,0.1537072);
   gre->SetPointError(2,0,0.03418968);
   gre->SetPoint(3,205,0.04650872);
   gre->SetPointError(3,0,0.02957555);
   gre->SetPoint(4,215,-0.06389131);
   gre->SetPointError(4,0,0.02766099);
   gre->SetPoint(5,225,-0.06617319);
   gre->SetPointError(5,0,0.02858693);
   gre->SetPoint(6,235,-0.1739836);
   gre->SetPointError(6,0,0.02894016);
   gre->SetPoint(7,245,-0.2051645);
   gre->SetPointError(7,0,0.03152285);
   gre->SetPoint(8,255,-0.3412334);
   gre->SetPointError(8,0,0.0331996);
   gre->SetPoint(9,265,-0.306727);
   gre->SetPointError(9,0,0.03750748);
   
   TH1F *Graph_gr_T20_15_25_16096 = new TH1F("Graph_gr_T20_15_25_16096","",100,166,274);
   Graph_gr_T20_15_25_16096->SetMinimum(-0.4319075);
   Graph_gr_T20_15_25_16096->SetMaximum(0.2577857);
   Graph_gr_T20_15_25_16096->SetDirectory(0);
   Graph_gr_T20_15_25_16096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_16096->SetLineColor(ci);
   Graph_gr_T20_15_25_16096->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_16096->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_16096->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_16096->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_16096->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_16096->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_16096->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_16096->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_16096->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_16096->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_16096->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_16096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_16096);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
