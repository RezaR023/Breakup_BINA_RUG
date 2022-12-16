{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:20:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(122.5,-0.3159574,257.5,0.1154913);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.06529083);
   gre->SetPointError(0,0,0.07862198);
   gre->SetPoint(1,155,-0.01129796);
   gre->SetPointError(1,0,0.05064778);
   gre->SetPoint(2,165,-0.09832962);
   gre->SetPointError(2,0,0.05008668);
   gre->SetPoint(3,175,-0.004860927);
   gre->SetPointError(3,0,0.0484441);
   gre->SetPoint(4,185,-0.04906113);
   gre->SetPointError(4,0,0.05082778);
   gre->SetPoint(5,195,-0.1507363);
   gre->SetPointError(5,0,0.04573537);
   gre->SetPoint(6,205,-0.09444248);
   gre->SetPointError(6,0,0.04071593);
   gre->SetPoint(7,215,-0.1651413);
   gre->SetPointError(7,0,0.04072927);
   gre->SetPoint(8,225,-0.2034967);
   gre->SetPointError(8,0,0.03653095);
   gre->SetPoint(9,235,-0.2065451);
   gre->SetPointError(9,0,0.0375042);
   
   TH1F *Graph_gr_ImT22_28_15_14045 = new TH1F("Graph_gr_ImT22_28_15_14045","",100,136,244);
   Graph_gr_ImT22_28_15_14045->SetMinimum(-0.2728125);
   Graph_gr_ImT22_28_15_14045->SetMaximum(0.07234642);
   Graph_gr_ImT22_28_15_14045->SetDirectory(0);
   Graph_gr_ImT22_28_15_14045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_14045->SetLineColor(ci);
   Graph_gr_ImT22_28_15_14045->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14045->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_14045->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14045->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_14045->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14045->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_14045);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
