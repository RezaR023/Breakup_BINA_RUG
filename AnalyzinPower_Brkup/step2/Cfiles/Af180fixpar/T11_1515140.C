{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:44:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(158.3202,-0.3781984,297.8698,0.2398396);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,181.5785,-0.05324695);
   gre->SetPointError(0,0,0.08721818);
   gre->SetPoint(1,191.9155,-0.1688611);
   gre->SetPointError(1,0,0.07956812);
   gre->SetPoint(2,202.2525,-0.2066759);
   gre->SetPointError(2,0,0.06851617);
   gre->SetPoint(3,212.5895,-0.1549391);
   gre->SetPointError(3,0,0.07149029);
   gre->SetPoint(4,222.9265,-0.08989219);
   gre->SetPointError(4,0,0.06520502);
   gre->SetPoint(5,233.2635,-0.1217554);
   gre->SetPointError(5,0,0.06770449);
   gre->SetPoint(6,243.6005,0.07459958);
   gre->SetPointError(6,0,0.06203472);
   gre->SetPoint(7,253.9375,-0.02843693);
   gre->SetPointError(7,0,0.07529798);
   gre->SetPoint(8,264.2745,0.07248992);
   gre->SetPointError(8,0,0.06295344);
   gre->SetPoint(9,274.6115,0.06244635);
   gre->SetPointError(9,0,0.07438692);
   
   TH1F *Graph_gr_iT11_15_15_14025 = new TH1F("Graph_gr_iT11_15_15_14025","",100,172.2752,283.9148);
   Graph_gr_iT11_15_15_14025->SetMinimum(-0.3163946);
   Graph_gr_iT11_15_15_14025->SetMaximum(0.1780358);
   Graph_gr_iT11_15_15_14025->SetDirectory(0);
   Graph_gr_iT11_15_15_14025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_14025->SetLineColor(ci);
   Graph_gr_iT11_15_15_14025->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14025->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_14025->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14025->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_14025->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_14025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_14025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_14025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_14025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
