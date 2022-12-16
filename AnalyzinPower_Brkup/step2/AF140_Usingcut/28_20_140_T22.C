{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:22:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.3333611,245,0.08414457);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.04656567);
   gre->SetPointError(0,0,0.05774327);
   gre->SetPoint(1,155,-0.03010396);
   gre->SetPointError(1,0,0.04466424);
   gre->SetPoint(2,165,-0.1345832);
   gre->SetPointError(2,0,0.03899001);
   gre->SetPoint(3,175,-0.1136446);
   gre->SetPointError(3,0,0.04047159);
   gre->SetPoint(4,185,-0.2215857);
   gre->SetPointError(4,0,0.04219115);
   gre->SetPoint(5,195,-0.1007221);
   gre->SetPointError(5,0,0.03918927);
   gre->SetPoint(6,205,-0.07836649);
   gre->SetPointError(6,0,0.04308459);
   gre->SetPoint(7,215,-0.08152227);
   gre->SetPointError(7,0,0.04009161);
   gre->SetPoint(8,225,-0.09782676);
   gre->SetPointError(8,0,0.03684834);
   
   TH1F *Graph_gr_T22_28_20_14049 = new TH1F("Graph_gr_T22_28_20_14049","",100,137,233);
   Graph_gr_T22_28_20_14049->SetMinimum(-0.2916106);
   Graph_gr_T22_28_20_14049->SetMaximum(0.04239399);
   Graph_gr_T22_28_20_14049->SetDirectory(0);
   Graph_gr_T22_28_20_14049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_20_14049->SetLineColor(ci);
   Graph_gr_T22_28_20_14049->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_14049->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_14049->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_14049->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_14049->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_14049->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_14049->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_14049->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_14049->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_14049->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_14049->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_14049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_20_14049);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
