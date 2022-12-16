{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:37:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(135,13.13874,255,43.8358);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_crsection_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,28.18914);
   gre->SetPointError(0,0,0.6585605);
   gre->SetPoint(1,165,26.55633);
   gre->SetPointError(1,0,0.644956);
   gre->SetPoint(2,175,22.1471);
   gre->SetPointError(2,0,0.5974587);
   gre->SetPoint(3,185,20.31406);
   gre->SetPointError(3,0,0.5758371);
   gre->SetPoint(4,195,20.50772);
   gre->SetPointError(4,0,0.56213);
   gre->SetPoint(5,205,18.80378);
   gre->SetPointError(5,0,0.5488608);
   gre->SetPoint(6,215,22.04264);
   gre->SetPointError(6,0,0.577582);
   gre->SetPoint(7,225,25.48766);
   gre->SetPointError(7,0,0.6227482);
   gre->SetPoint(8,235,37.97131);
   gre->SetPointError(8,0,0.7483116);
   
   TH1F *Graph_gr_crsection_25_25_14011 = new TH1F("Graph_gr_crsection_25_25_14011","",100,147,243);
   Graph_gr_crsection_25_25_14011->SetMinimum(16.20845);
   Graph_gr_crsection_25_25_14011->SetMaximum(40.76609);
   Graph_gr_crsection_25_25_14011->SetDirectory(0);
   Graph_gr_crsection_25_25_14011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_25_25_14011->SetLineColor(ci);
   Graph_gr_crsection_25_25_14011->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_14011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_14011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_14011->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_14011->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_14011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_14011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_14011->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_25_25_14011->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_25_25_14011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_25_25_14011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_25_25_14011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_25_25_14011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
