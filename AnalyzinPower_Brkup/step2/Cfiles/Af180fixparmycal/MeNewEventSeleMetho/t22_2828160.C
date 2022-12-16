{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:44:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.2542874,310,0.07494875);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1666446);
   gre->SetPointError(0,0,0.03277019);
   gre->SetPoint(1,145,-0.0729152);
   gre->SetPointError(1,0,0.02901494);
   gre->SetPoint(2,155,-0.05432687);
   gre->SetPointError(2,0,0.02886309);
   gre->SetPoint(3,165,-0.0654644);
   gre->SetPointError(3,0,0.02529287);
   gre->SetPoint(4,175,-0.05849973);
   gre->SetPointError(4,0,0.02552504);
   gre->SetPoint(5,185,-0.06946853);
   gre->SetPointError(5,0,0.0216437);
   gre->SetPoint(6,195,-0.02726882);
   gre->SetPointError(6,0,0.01833269);
   gre->SetPoint(7,205,-0.08438312);
   gre->SetPointError(7,0,0.01373157);
   gre->SetPoint(8,215,-0.06197271);
   gre->SetPointError(8,0,0.01153766);
   gre->SetPoint(9,225,-0.07318861);
   gre->SetPointError(9,0,0.01041675);
   gre->SetPoint(10,235,-0.07180572);
   gre->SetPointError(10,0,0.02666584);
   gre->SetPoint(11,245,-0.006589786);
   gre->SetPointError(11,0,0.02666584);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.02666584);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.02666584);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.02666584);
   
   TH1F *Graph_gr_T22_28_28_16015 = new TH1F("Graph_gr_T22_28_28_16015","",100,121,289);
   Graph_gr_T22_28_28_16015->SetMinimum(-0.2213638);
   Graph_gr_T22_28_28_16015->SetMaximum(0.04202513);
   Graph_gr_T22_28_28_16015->SetDirectory(0);
   Graph_gr_T22_28_28_16015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_16015->SetLineColor(ci);
   Graph_gr_T22_28_28_16015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_16015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
