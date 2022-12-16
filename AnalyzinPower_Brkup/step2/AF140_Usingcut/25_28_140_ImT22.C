{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:10:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.1932568,245,0.06113843);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1132894);
   gre->SetPointError(0,0,0.03756816);
   gre->SetPoint(1,155,-0.08602909);
   gre->SetPointError(1,0,0.03205125);
   gre->SetPoint(2,165,-0.0507007);
   gre->SetPointError(2,0,0.03700321);
   gre->SetPoint(3,175,-0.06938669);
   gre->SetPointError(3,0,0.03528525);
   gre->SetPoint(4,185,-0.02969935);
   gre->SetPointError(4,0,0.03731915);
   gre->SetPoint(5,195,-0.02174173);
   gre->SetPointError(5,0,0.03539995);
   gre->SetPoint(6,205,-0.01378135);
   gre->SetPointError(6,0,0.03252057);
   gre->SetPoint(7,215,-0.0611345);
   gre->SetPointError(7,0,0.02885304);
   gre->SetPoint(8,225,-0.03774284);
   gre->SetPointError(8,0,0.02505871);
   
   TH1F *Graph_gr_ImT22_25_28_14040 = new TH1F("Graph_gr_ImT22_25_28_14040","",100,137,233);
   Graph_gr_ImT22_25_28_14040->SetMinimum(-0.1678173);
   Graph_gr_ImT22_25_28_14040->SetMaximum(0.0356989);
   Graph_gr_ImT22_25_28_14040->SetDirectory(0);
   Graph_gr_ImT22_25_28_14040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_14040->SetLineColor(ci);
   Graph_gr_ImT22_25_28_14040->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14040->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_14040->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14040->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_14040->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14040->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_14040);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
