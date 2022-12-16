{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Apr 17 10:40:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",508,71,1088,578);
   Canvas_1->Range(112.5,-135.1968,247.5,1216.772);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_30_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,10.52988);
   gre->SetPointError(0,0,0.3584864);
   gre->SetPoint(1,145,12.48776);
   gre->SetPointError(1,0,0.3843941);
   gre->SetPoint(2,155,13.77081);
   gre->SetPointError(2,0,0.4005316);
   gre->SetPoint(3,165,16.79668);
   gre->SetPointError(3,0,0.4372444);
   gre->SetPoint(4,175,25.7898);
   gre->SetPointError(4,0,0.5407854);
   gre->SetPoint(5,185,53.01284);
   gre->SetPointError(5,0,0.764805);
   gre->SetPoint(6,195,131.4513);
   gre->SetPointError(6,0,1.204577);
   gre->SetPoint(7,205,366.6698);
   gre->SetPointError(7,0,1.99868);
   gre->SetPoint(8,215,980.9252);
   gre->SetPointError(8,0,3.249122);
   gre->SetPoint(9,225,466.3639);
   gre->SetPointError(9,0,2.249588);
   
   TH1F *Graph_gr_crsection_30_28_1801 = new TH1F("Graph_gr_crsection_30_28_1801","",100,126,234);
   Graph_gr_crsection_30_28_1801->SetMinimum(0);
   Graph_gr_crsection_30_28_1801->SetMaximum(1081.575);
   Graph_gr_crsection_30_28_1801->SetDirectory(0);
   Graph_gr_crsection_30_28_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_30_28_1801->SetLineColor(ci);
   Graph_gr_crsection_30_28_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_30_28_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_30_28_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_30_28_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_30_28_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_30_28_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_30_28_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
