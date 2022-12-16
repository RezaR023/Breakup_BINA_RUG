{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:25:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(162.5,7.256096,297.5,142.6199);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,184.9403,31.31029);
   gre->SetPointError(0,0,1.306604);
   gre->SetPoint(1,195,33.0749);
   gre->SetPointError(1,0,1.226911);
   gre->SetPoint(2,205,38.18351);
   gre->SetPointError(2,0,1.274781);
   gre->SetPoint(3,215,44.27063);
   gre->SetPointError(3,0,1.367437);
   gre->SetPoint(4,225,50.83839);
   gre->SetPointError(4,0,1.448055);
   gre->SetPoint(5,235,58.9182);
   gre->SetPointError(5,0,1.530402);
   gre->SetPoint(6,245,67.38636);
   gre->SetPointError(6,0,1.629096);
   gre->SetPoint(7,255,80.25552);
   gre->SetPointError(7,0,1.769284);
   gre->SetPoint(8,265,92.75276);
   gre->SetPointError(8,0,1.89699);
   gre->SetPoint(9,275,117.9376);
   gre->SetPointError(9,0,2.121721);
   
   TH1F *Graph_gr_crsection_15_15_1401 = new TH1F("Graph_gr_crsection_15_15_1401","",100,176,284);
   Graph_gr_crsection_15_15_1401->SetMinimum(20.79248);
   Graph_gr_crsection_15_15_1401->SetMaximum(129.0835);
   Graph_gr_crsection_15_15_1401->SetDirectory(0);
   Graph_gr_crsection_15_15_1401->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_15_1401->SetLineColor(ci);
   Graph_gr_crsection_15_15_1401->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1401->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1401->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1401->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_1401->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1401->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1401->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1401->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_15_1401->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_15_1401->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_15_1401->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_15_1401->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_15_1401);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
