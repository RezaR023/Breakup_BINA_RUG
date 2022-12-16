{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:09:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.3368877,310,0.4188643);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.0254314);
   gre->SetPoint(1,145,0.08856642);
   gre->SetPointError(1,0,0.2043392);
   gre->SetPoint(2,155,-0.006589786);
   gre->SetPointError(2,0,0.2043392);
   gre->SetPoint(3,165,-0.09285318);
   gre->SetPointError(3,0,0.04459491);
   gre->SetPoint(4,175,-0.1472241);
   gre->SetPointError(4,0,0.01995992);
   gre->SetPoint(5,185,-0.130477);
   gre->SetPointError(5,0,0.01642128);
   gre->SetPoint(6,195,-0.07556466);
   gre->SetPointError(6,0,0.01461931);
   gre->SetPoint(7,205,-0.08220451);
   gre->SetPointError(7,0,0.01303247);
   gre->SetPoint(8,215,-0.07645325);
   gre->SetPointError(8,0,0.01277187);
   gre->SetPoint(9,225,-0.0411545);
   gre->SetPointError(9,0,0.01354705);
   gre->SetPoint(10,235,-0.009985892);
   gre->SetPointError(10,0,0.01521161);
   gre->SetPoint(11,245,-0.01818425);
   gre->SetPointError(11,0,0.01684175);
   gre->SetPoint(12,255,-0.03440564);
   gre->SetPointError(12,0,0.01927369);
   gre->SetPoint(13,265,-0.01641956);
   gre->SetPointError(13,0,0.01948172);
   gre->SetPoint(14,275,-0.1268827);
   gre->SetPointError(14,0,0.03769417);
   
   TH1F *Graph_gr_T22_15_28_16019 = new TH1F("Graph_gr_T22_15_28_16019","",100,121,289);
   Graph_gr_T22_15_28_16019->SetMinimum(-0.2613125);
   Graph_gr_T22_15_28_16019->SetMaximum(0.3432891);
   Graph_gr_T22_15_28_16019->SetDirectory(0);
   Graph_gr_T22_15_28_16019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_16019->SetLineColor(ci);
   Graph_gr_T22_15_28_16019->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_16019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_16019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_16019->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_16019->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_16019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_16019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_16019->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_16019->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_16019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_16019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_16019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_16019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
