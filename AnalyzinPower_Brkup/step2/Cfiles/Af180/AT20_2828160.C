{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:58:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.1607,-0.4217327,247.0693,0.1557696);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,137.1455,-0.03055173);
   gre->SetPointError(0,0,0.09007096);
   gre->SetPoint(1,146.9165,-0.04926658);
   gre->SetPointError(1,0,0.0861452);
   gre->SetPoint(2,156.6875,-0.05106922);
   gre->SetPointError(2,0,0.08763228);
   gre->SetPoint(3,166.4585,-0.09491496);
   gre->SetPointError(3,0,0.08826597);
   gre->SetPoint(4,176.2295,-0.1822749);
   gre->SetPointError(4,0,0.0816845);
   gre->SetPoint(5,186.0005,-0.2368338);
   gre->SetPointError(5,0,0.06788011);
   gre->SetPoint(6,195.7715,-0.2329114);
   gre->SetPointError(6,0,0.0566101);
   gre->SetPoint(7,205.5425,-0.2323872);
   gre->SetPointError(7,0,0.0494764);
   gre->SetPoint(8,215.3135,-0.2752786);
   gre->SetPointError(8,0,0.04639527);
   gre->SetPoint(9,225.0845,-0.2766725);
   gre->SetPointError(9,0,0.04880978);
   
   TH1F *Graph_gr_T20_28_28_1609 = new TH1F("Graph_gr_T20_28_28_1609","",100,128.3516,233.8784);
   Graph_gr_T20_28_28_1609->SetMinimum(-0.3639824);
   Graph_gr_T20_28_28_1609->SetMaximum(0.09801938);
   Graph_gr_T20_28_28_1609->SetDirectory(0);
   Graph_gr_T20_28_28_1609->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1609->SetLineColor(ci);
   Graph_gr_T20_28_28_1609->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1609->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1609->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1609->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1609->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1609->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1609->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1609->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1609->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1609->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1609->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1609->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1609);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
