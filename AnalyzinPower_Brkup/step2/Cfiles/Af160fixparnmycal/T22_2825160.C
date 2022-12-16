{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:15:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.2525876,310,0.07779096);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1480425);
   gre->SetPointError(0,0,0.04411358);
   gre->SetPoint(1,145,-0.167669);
   gre->SetPointError(1,0,0.02985555);
   gre->SetPoint(2,155,-0.1260127);
   gre->SetPointError(2,0,0.03060473);
   gre->SetPoint(3,165,-0.02978138);
   gre->SetPointError(3,0,0.02842476);
   gre->SetPoint(4,175,-0.006034908);
   gre->SetPointError(4,0,0.02876276);
   gre->SetPoint(5,185,-0.03605108);
   gre->SetPointError(5,0,0.02666394);
   gre->SetPoint(6,195,-0.06714076);
   gre->SetPointError(6,0,0.02380508);
   gre->SetPoint(7,205,-0.05502898);
   gre->SetPointError(7,0,0.01967485);
   gre->SetPoint(8,215,-0.0843806);
   gre->SetPointError(8,0,0.01516047);
   gre->SetPoint(9,225,-0.1050844);
   gre->SetPointError(9,0,0.01105135);
   gre->SetPoint(10,235,-0.08250166);
   gre->SetPointError(10,0,0.01399386);
   gre->SetPoint(11,245,-0.08870001);
   gre->SetPointError(11,0,0.01066379);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.01066379);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.01066379);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.01066379);
   
   TH1F *Graph_gr_T22_28_25_16025 = new TH1F("Graph_gr_T22_28_25_16025","",100,121,289);
   Graph_gr_T22_28_25_16025->SetMinimum(-0.2195498);
   Graph_gr_T22_28_25_16025->SetMaximum(0.0447531);
   Graph_gr_T22_28_25_16025->SetDirectory(0);
   Graph_gr_T22_28_25_16025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_16025->SetLineColor(ci);
   Graph_gr_T22_28_25_16025->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_16025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_16025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_16025->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_16025->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_16025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_16025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_16025->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_16025->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_16025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_16025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_16025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_16025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
