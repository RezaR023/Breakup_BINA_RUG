{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:50:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",495,71,1101,578);
   Canvas_1->Range(142.5,-31.70063,277.5,299.0006);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,24.17142);
   gre->SetPointError(0,0,0.7551767);
   gre->SetPoint(1,175,25.48496);
   gre->SetPointError(1,0,0.7441449);
   gre->SetPoint(2,185,45.73254);
   gre->SetPointError(2,0,0.9194783);
   gre->SetPoint(3,195,67.30487);
   gre->SetPointError(3,0,1.10309);
   gre->SetPoint(4,205,98.91696);
   gre->SetPointError(4,0,1.326891);
   gre->SetPoint(5,215,136.0736);
   gre->SetPointError(5,0,1.554695);
   gre->SetPoint(6,225,176.973);
   gre->SetPointError(6,0,1.764347);
   gre->SetPoint(7,235,222.3672);
   gre->SetPointError(7,0,1.975538);
   gre->SetPoint(8,245,241.829);
   gre->SetPointError(8,0,2.05469);
   gre->SetPoint(9,255,200.7561);
   gre->SetPointError(9,0,1.87256);
   
   TH1F *Graph_gr_crsection_20_25_1807 = new TH1F("Graph_gr_crsection_20_25_1807","",100,156,264);
   Graph_gr_crsection_20_25_1807->SetMinimum(1.369492);
   Graph_gr_crsection_20_25_1807->SetMaximum(265.9305);
   Graph_gr_crsection_20_25_1807->SetDirectory(0);
   Graph_gr_crsection_20_25_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_25_1807->SetLineColor(ci);
   Graph_gr_crsection_20_25_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_25_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_25_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_25_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_25_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_25_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
