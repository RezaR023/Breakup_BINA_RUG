{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:25:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(115,-0.3155038,235,-0.003778705);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1004052);
   gre->SetPointError(0,0,0.04467235);
   gre->SetPoint(1,145,-0.192805);
   gre->SetPointError(1,0,0.03880957);
   gre->SetPoint(2,155,-0.193678);
   gre->SetPointError(2,0,0.03534618);
   gre->SetPoint(3,165,-0.124982);
   gre->SetPointError(3,0,0.03653597);
   gre->SetPoint(4,175,-0.1216178);
   gre->SetPointError(4,0,0.03947215);
   gre->SetPoint(5,185,-0.2237156);
   gre->SetPointError(5,0,0.03983401);
   gre->SetPoint(6,195,-0.1484309);
   gre->SetPointError(6,0,0.04000639);
   gre->SetPoint(7,205,-0.169752);
   gre->SetPointError(7,0,0.03565426);
   gre->SetPoint(8,215,-0.1379088);
   gre->SetPointError(8,0,0.03227894);
   
   TH1F *Graph_gr_iT11_28_28_14056 = new TH1F("Graph_gr_iT11_28_28_14056","",100,127,223);
   Graph_gr_iT11_28_28_14056->SetMinimum(-0.2843313);
   Graph_gr_iT11_28_28_14056->SetMaximum(-0.03495122);
   Graph_gr_iT11_28_28_14056->SetDirectory(0);
   Graph_gr_iT11_28_28_14056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_14056->SetLineColor(ci);
   Graph_gr_iT11_28_28_14056->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_14056->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_14056->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_14056->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_14056->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_14056->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_14056->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_14056->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_14056->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_14056->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_14056->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_14056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_14056);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
