{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 18:47:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3845687,297.5,0.2249136);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.02856811);
   gre->SetPointError(0,0,0.05019607);
   gre->SetPoint(1,195,0.07357646);
   gre->SetPointError(1,0,0.0497568);
   gre->SetPoint(2,205,-0.01086212);
   gre->SetPointError(2,0,0.04962414);
   gre->SetPoint(3,215,-0.01469984);
   gre->SetPointError(3,0,0.04654568);
   gre->SetPoint(4,225,0.01512887);
   gre->SetPointError(4,0,0.040477);
   gre->SetPoint(5,235,-0.1325196);
   gre->SetPointError(5,0,0.03520101);
   gre->SetPoint(6,245,-0.1553375);
   gre->SetPointError(6,0,0.0328959);
   gre->SetPoint(7,255,-0.2098383);
   gre->SetPointError(7,0,0.03238822);
   gre->SetPoint(8,265,-0.2008259);
   gre->SetPointError(8,0,0.02614709);
   gre->SetPoint(9,275,-0.2630041);
   gre->SetPointError(9,0,0.01998421);
   
   TH1F *Graph_gr_T22_15_15_1807 = new TH1F("Graph_gr_T22_15_15_1807","",100,176,284);
   Graph_gr_T22_15_15_1807->SetMinimum(-0.3236204);
   Graph_gr_T22_15_15_1807->SetMaximum(0.1639654);
   Graph_gr_T22_15_15_1807->SetDirectory(0);
   Graph_gr_T22_15_15_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_1807->SetLineColor(ci);
   Graph_gr_T22_15_15_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
