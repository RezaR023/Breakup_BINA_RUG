{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:52:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(125,-0.1146151,245,0.053799);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.002171171);
   gre->SetPointError(0,0,0.02790114);
   gre->SetPoint(1,155,-0.02303728);
   gre->SetPointError(1,0,0.02662929);
   gre->SetPoint(2,165,-0.05783016);
   gre->SetPointError(2,0,0.02871595);
   gre->SetPoint(3,175,-0.03881633);
   gre->SetPointError(3,0,0.02740588);
   gre->SetPoint(4,185,-0.01544309);
   gre->SetPointError(4,0,0.02291043);
   gre->SetPoint(5,195,-0.002462673);
   gre->SetPointError(5,0,0.02003605);
   gre->SetPoint(6,205,-0.03983819);
   gre->SetPointError(6,0,0.01652811);
   gre->SetPoint(7,215,-0.06469616);
   gre->SetPointError(7,0,0.01376159);
   gre->SetPoint(8,225,-0.06436794);
   gre->SetPointError(8,0,0.01261564);
   
   TH1F *Graph_gr_ImT22_28_25_16080 = new TH1F("Graph_gr_ImT22_28_25_16080","",100,137,233);
   Graph_gr_ImT22_28_25_16080->SetMinimum(-0.09777373);
   Graph_gr_ImT22_28_25_16080->SetMaximum(0.03695758);
   Graph_gr_ImT22_28_25_16080->SetDirectory(0);
   Graph_gr_ImT22_28_25_16080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_25_16080->SetLineColor(ci);
   Graph_gr_ImT22_28_25_16080->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_16080->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_16080->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_16080->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_16080->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_16080->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_16080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_25_16080);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
