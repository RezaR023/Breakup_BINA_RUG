{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:06:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.2441923,255,0.1235638);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.007722708);
   gre->SetPointError(0,0,0.04127006);
   gre->SetPoint(1,165,-0.01770168);
   gre->SetPointError(1,0,0.03952379);
   gre->SetPoint(2,175,-0.09098349);
   gre->SetPointError(2,0,0.04456104);
   gre->SetPoint(3,185,-0.03884874);
   gre->SetPointError(3,0,0.04445312);
   gre->SetPoint(4,195,-0.132834);
   gre->SetPointError(4,0,0.05006558);
   gre->SetPoint(5,205,-0.05058951);
   gre->SetPointError(5,0,0.04616878);
   gre->SetPoint(6,215,-0.0830796);
   gre->SetPointError(6,0,0.04437611);
   gre->SetPoint(7,225,-0.04546873);
   gre->SetPointError(7,0,0.04329454);
   gre->SetPoint(8,235,0.02646823);
   gre->SetPointError(8,0,0.0358029);
   
   TH1F *Graph_gr_T22_25_20_14029 = new TH1F("Graph_gr_T22_25_20_14029","",100,147,243);
   Graph_gr_T22_25_20_14029->SetMinimum(-0.2074167);
   Graph_gr_T22_25_20_14029->SetMaximum(0.08678821);
   Graph_gr_T22_25_20_14029->SetDirectory(0);
   Graph_gr_T22_25_20_14029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_20_14029->SetLineColor(ci);
   Graph_gr_T22_25_20_14029->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_14029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_14029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_14029->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_14029->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_14029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_14029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_14029->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_20_14029->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_20_14029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_20_14029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_20_14029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_20_14029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
