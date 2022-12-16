{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:58:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.1607,-0.1626089,247.0693,0.1090599);
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
   gre->SetPoint(0,137.1455,-0.06095921);
   gre->SetPointError(0,0,0.04981882);
   gre->SetPoint(1,146.9165,0.01432757);
   gre->SetPointError(1,0,0.04945424);
   gre->SetPoint(2,156.6875,-0.02882723);
   gre->SetPointError(2,0,0.04869048);
   gre->SetPoint(3,166.4585,-0.02539545);
   gre->SetPointError(3,0,0.05080268);
   gre->SetPoint(4,176.2295,-0.05175212);
   gre->SetPointError(4,0,0.04617393);
   gre->SetPoint(5,186.0005,-0.05553961);
   gre->SetPointError(5,0,0.04217551);
   gre->SetPoint(6,195.7715,-0.06121388);
   gre->SetPointError(6,0,0.03395636);
   gre->SetPoint(7,205.5425,-0.058448);
   gre->SetPointError(7,0,0.02956192);
   gre->SetPoint(8,215.3135,-0.09034425);
   gre->SetPointError(8,0,0.02698647);
   gre->SetPoint(9,225.0845,-0.05827772);
   gre->SetPointError(9,0,0.02850241);
   
   TH1F *Graph_gr_T22_28_28_16010 = new TH1F("Graph_gr_T22_28_28_16010","",100,128.3516,233.8784);
   Graph_gr_T22_28_28_16010->SetMinimum(-0.135442);
   Graph_gr_T22_28_28_16010->SetMaximum(0.08189306);
   Graph_gr_T22_28_28_16010->SetDirectory(0);
   Graph_gr_T22_28_28_16010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_16010->SetLineColor(ci);
   Graph_gr_T22_28_28_16010->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16010->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16010->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16010->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_16010->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_16010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_16010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_16010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_16010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
