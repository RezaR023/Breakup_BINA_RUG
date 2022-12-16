{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:21:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.3699482,245,0.1534423);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.04716509);
   gre->SetPointError(0,0,0.06213713);
   gre->SetPoint(1,155,-0.2339836);
   gre->SetPointError(1,0,0.04873288);
   gre->SetPoint(2,165,-0.07829192);
   gre->SetPointError(2,0,0.04610867);
   gre->SetPoint(3,175,-0.03296162);
   gre->SetPointError(3,0,0.04810204);
   gre->SetPoint(4,185,-0.1758372);
   gre->SetPointError(4,0,0.04711277);
   gre->SetPoint(5,195,0.01826755);
   gre->SetPointError(5,0,0.04794304);
   gre->SetPoint(6,205,-0.02609581);
   gre->SetPointError(6,0,0.04687081);
   gre->SetPoint(7,215,-0.1077347);
   gre->SetPointError(7,0,0.04652233);
   gre->SetPoint(8,225,-0.03806686);
   gre->SetPointError(8,0,0.04841274);
   
   TH1F *Graph_gr_iT11_28_20_14046 = new TH1F("Graph_gr_iT11_28_20_14046","",100,137,233);
   Graph_gr_iT11_28_20_14046->SetMinimum(-0.3176091);
   Graph_gr_iT11_28_20_14046->SetMaximum(0.1011033);
   Graph_gr_iT11_28_20_14046->SetDirectory(0);
   Graph_gr_iT11_28_20_14046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_20_14046->SetLineColor(ci);
   Graph_gr_iT11_28_20_14046->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_14046->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_14046->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_14046->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_14046->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_14046->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_14046->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_14046->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_14046->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_14046->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_14046->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_14046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_20_14046);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
