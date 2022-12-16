{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:15:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(150,14.49093,300,251.106);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_crsection_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,78.93751);
   gre->SetPointError(0,0,1.557707);
   gre->SetPoint(1,185,112.3875);
   gre->SetPointError(1,0,1.758785);
   gre->SetPoint(2,195,155.3466);
   gre->SetPointError(2,0,1.957241);
   gre->SetPoint(3,205,198.9412);
   gre->SetPointError(3,0,2.173599);
   gre->SetPoint(4,215,209.4519);
   gre->SetPointError(4,0,2.218245);
   gre->SetPoint(5,225,195.4332);
   gre->SetPointError(5,0,2.14223);
   gre->SetPoint(6,235,177.1729);
   gre->SetPointError(6,0,2.032948);
   gre->SetPoint(7,245,146.4835);
   gre->SetPointError(7,0,1.848098);
   gre->SetPoint(8,255,116.1616);
   gre->SetPointError(8,0,1.645201);
   gre->SetPoint(9,265,92.91837);
   gre->SetPointError(9,0,1.476995);
   gre->SetPoint(10,275,55.06901);
   gre->SetPointError(10,0,1.142234);
   
   TH1F *Graph_gr_crsection_15_25_16020 = new TH1F("Graph_gr_crsection_15_25_16020","",100,165,285);
   Graph_gr_crsection_15_25_16020->SetMinimum(38.15244);
   Graph_gr_crsection_15_25_16020->SetMaximum(227.4445);
   Graph_gr_crsection_15_25_16020->SetDirectory(0);
   Graph_gr_crsection_15_25_16020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_25_16020->SetLineColor(ci);
   Graph_gr_crsection_15_25_16020->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_16020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_16020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_16020->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_16020->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_16020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_16020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_16020->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_25_16020->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_25_16020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_25_16020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_25_16020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_25_16020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
