{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:26:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(115,-0.2343931,235,0.141042);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1308533);
   gre->SetPointError(0,0,0.04096728);
   gre->SetPoint(1,145,-0.05353137);
   gre->SetPointError(1,0,0.03344345);
   gre->SetPoint(2,155,-0.007466734);
   gre->SetPointError(2,0,0.03166249);
   gre->SetPoint(3,165,-0.01305506);
   gre->SetPointError(3,0,0.03398482);
   gre->SetPoint(4,175,-0.01030932);
   gre->SetPointError(4,0,0.03404413);
   gre->SetPoint(5,185,0.04560566);
   gre->SetPointError(5,0,0.03286384);
   gre->SetPoint(6,195,0.03237583);
   gre->SetPointError(6,0,0.03048925);
   gre->SetPoint(7,205,0.0336357);
   gre->SetPointError(7,0,0.02628124);
   gre->SetPoint(8,215,-0.005606839);
   gre->SetPointError(8,0,0.02264009);
   
   TH1F *Graph_gr_T22_28_28_14059 = new TH1F("Graph_gr_T22_28_28_14059","",100,127,223);
   Graph_gr_T22_28_28_14059->SetMinimum(-0.1968496);
   Graph_gr_T22_28_28_14059->SetMaximum(0.1034985);
   Graph_gr_T22_28_28_14059->SetDirectory(0);
   Graph_gr_T22_28_28_14059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_14059->SetLineColor(ci);
   Graph_gr_T22_28_28_14059->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_14059->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_14059->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_14059->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_14059->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_14059->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_14059->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_14059->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_14059->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_14059->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_14059->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_14059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_14059);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
