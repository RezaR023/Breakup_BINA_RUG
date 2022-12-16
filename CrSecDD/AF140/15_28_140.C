{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:29:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(152.5,37.1669,287.5,96.93601);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,174.9403,58.30476);
   gre->SetPointError(0,0,1.272512);
   gre->SetPoint(1,185,62.86633);
   gre->SetPointError(1,0,1.272671);
   gre->SetPoint(2,195,79.9362);
   gre->SetPointError(2,0,1.360787);
   gre->SetPoint(3,205,84.99147);
   gre->SetPointError(3,0,1.411985);
   gre->SetPoint(4,215,85.56663);
   gre->SetPointError(4,0,1.407866);
   gre->SetPoint(5,225,75.84024);
   gre->SetPointError(5,0,1.30702);
   gre->SetPoint(6,235,64.09633);
   gre->SetPointError(6,0,1.183887);
   gre->SetPoint(7,245,51.46621);
   gre->SetPointError(7,0,1.059138);
   gre->SetPoint(8,255,50.27356);
   gre->SetPointError(8,0,1.056261);
   gre->SetPoint(9,265,48.18254);
   gre->SetPointError(9,0,1.054113);
   
   TH1F *Graph_gr_crsection_15_28_1404 = new TH1F("Graph_gr_crsection_15_28_1404","",100,166,274);
   Graph_gr_crsection_15_28_1404->SetMinimum(43.14382);
   Graph_gr_crsection_15_28_1404->SetMaximum(90.9591);
   Graph_gr_crsection_15_28_1404->SetDirectory(0);
   Graph_gr_crsection_15_28_1404->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_15_28_1404->SetLineColor(ci);
   Graph_gr_crsection_15_28_1404->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1404->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1404->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1404->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_1404->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1404->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1404->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1404->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_15_28_1404->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_15_28_1404->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_15_28_1404->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_15_28_1404->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_15_28_1404);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
