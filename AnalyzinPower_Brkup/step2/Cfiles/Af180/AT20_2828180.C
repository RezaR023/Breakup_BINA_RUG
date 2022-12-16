{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:43:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(117.8637,-0.3794656,253.0663,0.102694);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,140.3975,-0.0929963);
   gre->SetPointError(0,0,0.1153304);
   gre->SetPoint(1,150.4125,-0.0998485);
   gre->SetPointError(1,0,0.1114867);
   gre->SetPoint(2,160.4275,-0.1644513);
   gre->SetPointError(2,0,0.1063348);
   gre->SetPoint(3,170.4425,-0.1389252);
   gre->SetPointError(3,0,0.09523059);
   gre->SetPoint(4,180.4575,-0.226659);
   gre->SetPointError(4,0,0.07244666);
   gre->SetPoint(5,190.4725,-0.2097408);
   gre->SetPointError(5,0,0.04838629);
   gre->SetPoint(6,200.4875,-0.246598);
   gre->SetPointError(6,0,0.0315405);
   gre->SetPoint(7,210.5025,-0.2161721);
   gre->SetPointError(7,0,0.0225649);
   gre->SetPoint(8,220.5175,-0.2326681);
   gre->SetPointError(8,0,0.02015986);
   gre->SetPoint(9,230.5325,-0.2602874);
   gre->SetPointError(9,0,0.02667309);
   
   TH1F *Graph_gr_T20_28_28_1802 = new TH1F("Graph_gr_T20_28_28_1802","",100,131.384,239.546);
   Graph_gr_T20_28_28_1802->SetMinimum(-0.3312496);
   Graph_gr_T20_28_28_1802->SetMaximum(0.05447806);
   Graph_gr_T20_28_28_1802->SetDirectory(0);
   Graph_gr_T20_28_28_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1802->SetLineColor(ci);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
