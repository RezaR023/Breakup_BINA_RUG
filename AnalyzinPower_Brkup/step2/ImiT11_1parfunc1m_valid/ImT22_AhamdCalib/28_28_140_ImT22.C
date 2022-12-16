{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun May  6 00:00:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(115,-0.1187735,235,0.05564505);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.004279652);
   gre->SetPointError(0,0,0.03029535);
   gre->SetPoint(1,145,-0.06368644);
   gre->SetPointError(1,0,0.02601726);
   gre->SetPoint(2,155,-0.03352905);
   gre->SetPointError(2,0,0.0256873);
   gre->SetPoint(3,165,-0.0009739698);
   gre->SetPointError(3,0,0.02754927);
   gre->SetPoint(4,175,-0.00545072);
   gre->SetPointError(4,0,0.02984711);
   gre->SetPoint(5,185,-0.03550977);
   gre->SetPointError(5,0,0.0286852);
   gre->SetPoint(6,195,-0.03561659);
   gre->SetPointError(6,0,0.02732682);
   gre->SetPoint(7,205,-0.03528576);
   gre->SetPointError(7,0,0.02531444);
   gre->SetPoint(8,215,-0.0654734);
   gre->SetPointError(8,0,0.02405315);
   
   TH1F *Graph_gr_ImT22_28_28_14097 = new TH1F("Graph_gr_ImT22_28_28_14097","",100,127,223);
   Graph_gr_ImT22_28_28_14097->SetMinimum(-0.1013316);
   Graph_gr_ImT22_28_28_14097->SetMaximum(0.0382032);
   Graph_gr_ImT22_28_28_14097->SetDirectory(0);
   Graph_gr_ImT22_28_28_14097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_14097->SetLineColor(ci);
   Graph_gr_ImT22_28_28_14097->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14097->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_14097->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14097->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_14097->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14097->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_14097);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
