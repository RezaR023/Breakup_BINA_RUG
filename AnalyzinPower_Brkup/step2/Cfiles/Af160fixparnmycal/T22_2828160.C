{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:15:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.2444415,310,0.07137334);
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
   gre->SetPoint(0,135,-0.1600456);
   gre->SetPointError(0,0,0.03176008);
   gre->SetPoint(1,145,-0.07490084);
   gre->SetPointError(1,0,0.02820686);
   gre->SetPoint(2,155,-0.05319484);
   gre->SetPointError(2,0,0.02783395);
   gre->SetPoint(3,165,-0.0529165);
   gre->SetPointError(3,0,0.02519676);
   gre->SetPoint(4,175,-0.05345461);
   gre->SetPointError(4,0,0.0249403);
   gre->SetPoint(5,185,-0.06498079);
   gre->SetPointError(5,0,0.02106776);
   gre->SetPoint(6,195,-0.03100457);
   gre->SetPointError(6,0,0.01780546);
   gre->SetPoint(7,205,-0.08749629);
   gre->SetPointError(7,0,0.0133378);
   gre->SetPoint(8,215,-0.06188182);
   gre->SetPointError(8,0,0.01122546);
   gre->SetPoint(9,225,-0.07498189);
   gre->SetPointError(9,0,0.009988509);
   gre->SetPoint(10,235,-0.07116387);
   gre->SetPointError(10,0,0.02532731);
   gre->SetPoint(11,245,-0.006589786);
   gre->SetPointError(11,0,0.02532731);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.02532731);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.02532731);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.02532731);
   
   TH1F *Graph_gr_T22_28_28_16028 = new TH1F("Graph_gr_T22_28_28_16028","",100,121,289);
   Graph_gr_T22_28_28_16028->SetMinimum(-0.21286);
   Graph_gr_T22_28_28_16028->SetMaximum(0.03979185);
   Graph_gr_T22_28_28_16028->SetDirectory(0);
   Graph_gr_T22_28_28_16028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_16028->SetLineColor(ci);
   Graph_gr_T22_28_28_16028->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16028->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16028->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16028->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16028->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_16028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
