{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:34:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(130,16.55941,280,51.93806);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,154.9337,23.21602);
   gre->SetPointError(0,0,0.7009442);
   gre->SetPoint(1,165,32.88827);
   gre->SetPointError(1,0,0.8501831);
   gre->SetPoint(2,175,27.99225);
   gre->SetPointError(2,0,0.7635481);
   gre->SetPoint(3,185,27.65108);
   gre->SetPointError(3,0,0.7446832);
   gre->SetPoint(4,195,31.79952);
   gre->SetPointError(4,0,0.7888619);
   gre->SetPoint(5,205,32.61228);
   gre->SetPointError(5,0,0.7922233);
   gre->SetPoint(6,215,36.25972);
   gre->SetPointError(6,0,0.8153813);
   gre->SetPoint(7,225,37.02202);
   gre->SetPointError(7,0,0.8206814);
   gre->SetPoint(8,235,37.51369);
   gre->SetPointError(8,0,0.8315913);
   gre->SetPoint(9,245,45.13433);
   gre->SetPointError(9,0,0.9072889);
   gre->SetPoint(10,255,37.67741);
   gre->SetPointError(10,0,0.8331803);
   
   TH1F *Graph_gr_crsection_20_25_1407 = new TH1F("Graph_gr_crsection_20_25_1407","",100,145,265);
   Graph_gr_crsection_20_25_1407->SetMinimum(20.09728);
   Graph_gr_crsection_20_25_1407->SetMaximum(48.40019);
   Graph_gr_crsection_20_25_1407->SetDirectory(0);
   Graph_gr_crsection_20_25_1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_25_1407->SetLineColor(ci);
   Graph_gr_crsection_20_25_1407->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1407->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1407->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1407->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_1407->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1407->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1407->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1407->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_1407->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1407->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1407->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_25_1407);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
