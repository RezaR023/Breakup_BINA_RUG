{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:01:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(117.8637,-0.2966627,253.0663,0.04115081);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,140.3975,-0.179273);
   gre->SetPointError(0,0,0.06108745);
   gre->SetPoint(1,150.4125,-0.1412212);
   gre->SetPointError(1,0,0.05989277);
   gre->SetPoint(2,160.4275,-0.07220119);
   gre->SetPointError(2,0,0.053053);
   gre->SetPoint(3,170.4425,-0.1256539);
   gre->SetPointError(3,0,0.04881988);
   gre->SetPoint(4,180.4575,-0.05318282);
   gre->SetPointError(4,0,0.03803138);
   gre->SetPoint(5,190.4725,-0.1147184);
   gre->SetPointError(5,0,0.02452061);
   gre->SetPoint(6,200.4875,-0.08526573);
   gre->SetPointError(6,0,0.01581013);
   gre->SetPoint(7,210.5025,-0.09539085);
   gre->SetPointError(7,0,0.01165418);
   gre->SetPoint(8,220.5175,-0.09110413);
   gre->SetPointError(8,0,0.01046193);
   gre->SetPoint(9,230.5325,-0.1154569);
   gre->SetPointError(9,0,0.01366369);
   
   TH1F *Graph_gr_T22_28_28_1803 = new TH1F("Graph_gr_T22_28_28_1803","",100,131.384,239.546);
   Graph_gr_T22_28_28_1803->SetMinimum(-0.2628814);
   Graph_gr_T22_28_28_1803->SetMaximum(0.007369456);
   Graph_gr_T22_28_28_1803->SetDirectory(0);
   Graph_gr_T22_28_28_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1803->SetLineColor(ci);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
