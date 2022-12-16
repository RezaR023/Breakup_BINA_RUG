{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:08:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.1506968,255,0.1867613);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.02159073);
   gre->SetPointError(0,0,0.03675813);
   gre->SetPoint(1,165,-0.004334719);
   gre->SetPointError(1,0,0.03653655);
   gre->SetPoint(2,175,-0.03662712);
   gre->SetPointError(2,0,0.03748147);
   gre->SetPoint(3,185,-0.04320189);
   gre->SetPointError(3,0,0.03826631);
   gre->SetPoint(4,195,0.01944596);
   gre->SetPointError(4,0,0.03953811);
   gre->SetPoint(5,205,0.0914674);
   gre->SetPointError(5,0,0.03905086);
   gre->SetPoint(6,215,-0.04713741);
   gre->SetPointError(6,0,0.03619175);
   gre->SetPoint(7,225,-0.0005607143);
   gre->SetPointError(7,0,0.03446445);
   gre->SetPoint(8,235,-0.066318);
   gre->SetPointError(8,0,0.02813579);
   
   TH1F *Graph_gr_T22_25_25_14034 = new TH1F("Graph_gr_T22_25_25_14034","",100,147,243);
   Graph_gr_T22_25_25_14034->SetMinimum(-0.116951);
   Graph_gr_T22_25_25_14034->SetMaximum(0.1530155);
   Graph_gr_T22_25_25_14034->SetDirectory(0);
   Graph_gr_T22_25_25_14034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_25_14034->SetLineColor(ci);
   Graph_gr_T22_25_25_14034->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_14034->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_14034->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_14034->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_14034->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_14034->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_14034->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_14034->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_14034->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_14034->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_14034->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_14034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_25_14034);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
