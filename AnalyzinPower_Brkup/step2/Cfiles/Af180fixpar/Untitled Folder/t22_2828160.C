{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:09:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.1607,-0.1539655,247.0693,0.1063899);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,137.1455,-0.06084534);
   gre->SetPointError(0,0,0.04972762);
   gre->SetPoint(1,146.9165,0.0141612);
   gre->SetPointError(1,0,0.0488361);
   gre->SetPoint(2,156.6875,-0.02844929);
   gre->SetPointError(2,0,0.0480474);
   gre->SetPoint(3,166.4585,-0.0244534);
   gre->SetPointError(3,0,0.04891606);
   gre->SetPoint(4,176.2295,-0.04742343);
   gre->SetPointError(4,0,0.04229021);
   gre->SetPoint(5,186.0005,-0.04920906);
   gre->SetPointError(5,0,0.03736675);
   gre->SetPoint(6,195.7715,-0.05438627);
   gre->SetPointError(6,0,0.03016844);
   gre->SetPoint(7,205.5425,-0.05195248);
   gre->SetPointError(7,0,0.02627415);
   gre->SetPoint(8,215.3135,-0.07830897);
   gre->SetPointError(8,0,0.02338905);
   gre->SetPoint(9,225.0845,-0.05039978);
   gre->SetPointError(9,0,0.02464846);
   
   TH1F *Graph_gr_T22_28_28_1606 = new TH1F("Graph_gr_T22_28_28_1606","",100,128.3516,233.8784);
   Graph_gr_T22_28_28_1606->SetMinimum(-0.12793);
   Graph_gr_T22_28_28_1606->SetMaximum(0.08035432);
   Graph_gr_T22_28_28_1606->SetDirectory(0);
   Graph_gr_T22_28_28_1606->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1606->SetLineColor(ci);
   Graph_gr_T22_28_28_1606->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1606->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1606->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1606->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1606->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1606->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1606->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1606->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1606->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1606->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1606->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1606->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1606);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
