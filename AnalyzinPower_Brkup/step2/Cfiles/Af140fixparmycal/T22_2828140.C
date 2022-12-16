{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:19:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.2076168,310,0.1551913);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1129112);
   gre->SetPointError(0,0,0.03423763);
   gre->SetPoint(1,145,-0.04851397);
   gre->SetPointError(1,0,0.03042898);
   gre->SetPoint(2,155,0.01190616);
   gre->SetPointError(2,0,0.02776582);
   gre->SetPoint(3,165,0.005918564);
   gre->SetPointError(3,0,0.02902642);
   gre->SetPoint(4,175,0.02078005);
   gre->SetPointError(4,0,0.02981337);
   gre->SetPoint(5,185,0.06575205);
   gre->SetPointError(5,0,0.0289712);
   gre->SetPoint(6,195,0.05847273);
   gre->SetPointError(6,0,0.02879342);
   gre->SetPoint(7,205,0.05252368);
   gre->SetPointError(7,0,0.02550452);
   gre->SetPoint(8,215,-0.004430727);
   gre->SetPointError(8,0,0.02032637);
   gre->SetPoint(9,225,-0.05645412);
   gre->SetPointError(9,0,0.022833);
   gre->SetPoint(10,235,-0.08242747);
   gre->SetPointError(10,0,0.03870183);
   gre->SetPoint(11,245,-0.006589786);
   gre->SetPointError(11,0,0.03870183);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.03870183);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.03870183);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.03870183);
   
   TH1F *Graph_gr_T22_28_28_1409 = new TH1F("Graph_gr_T22_28_28_1409","",100,121,289);
   Graph_gr_T22_28_28_1409->SetMinimum(-0.171336);
   Graph_gr_T22_28_28_1409->SetMaximum(0.1189105);
   Graph_gr_T22_28_28_1409->SetDirectory(0);
   Graph_gr_T22_28_28_1409->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1409->SetLineColor(ci);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1409);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
