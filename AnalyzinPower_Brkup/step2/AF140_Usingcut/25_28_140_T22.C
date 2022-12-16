{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:10:08 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.144092,245,0.1333763);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.05683042);
   gre->SetPointError(0,0,0.04101687);
   gre->SetPoint(1,155,-0.04613393);
   gre->SetPointError(1,0,0.03255454);
   gre->SetPoint(2,165,0.01249795);
   gre->SetPointError(2,0,0.03264041);
   gre->SetPoint(3,175,0.01532308);
   gre->SetPointError(3,0,0.03522449);
   gre->SetPoint(4,185,0.02417893);
   gre->SetPointError(4,0,0.03639528);
   gre->SetPoint(5,195,0.05335534);
   gre->SetPointError(5,0,0.03377621);
   gre->SetPoint(6,205,0.03069809);
   gre->SetPointError(6,0,0.03270598);
   gre->SetPoint(7,215,0.0382432);
   gre->SetPointError(7,0,0.02970668);
   gre->SetPoint(8,225,-0.03404329);
   gre->SetPointError(8,0,0.02556571);
   
   TH1F *Graph_gr_T22_25_28_14039 = new TH1F("Graph_gr_T22_25_28_14039","",100,137,233);
   Graph_gr_T22_25_28_14039->SetMinimum(-0.1163452);
   Graph_gr_T22_25_28_14039->SetMaximum(0.1056294);
   Graph_gr_T22_25_28_14039->SetDirectory(0);
   Graph_gr_T22_25_28_14039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_28_14039->SetLineColor(ci);
   Graph_gr_T22_25_28_14039->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_14039->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_14039->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_14039->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_14039->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_14039->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_14039->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_14039->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_28_14039->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_28_14039->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_28_14039->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_28_14039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_28_14039);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
