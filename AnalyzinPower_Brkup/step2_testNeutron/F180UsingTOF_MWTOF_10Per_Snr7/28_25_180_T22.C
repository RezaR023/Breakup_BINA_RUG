{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:02:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.3004361,250,-0.003432537);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.1522675);
   gre->SetPointError(0,0,0.09866802);
   gre->SetPoint(1,170,-0.145645);
   gre->SetPointError(1,0,0.09271189);
   gre->SetPoint(2,190,-0.1484743);
   gre->SetPointError(2,0,0.05149111);
   gre->SetPoint(3,210,-0.1032798);
   gre->SetPointError(3,0,0.02623119);
   gre->SetPoint(4,230,-0.1687834);
   gre->SetPointError(4,0,0.0202816);
   
   TH1F *Graph_gr_T22_28_25_18022 = new TH1F("Graph_gr_T22_28_25_18022","",100,142,238);
   Graph_gr_T22_28_25_18022->SetMinimum(-0.2707357);
   Graph_gr_T22_28_25_18022->SetMaximum(-0.0331329);
   Graph_gr_T22_28_25_18022->SetDirectory(0);
   Graph_gr_T22_28_25_18022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_18022->SetLineColor(ci);
   Graph_gr_T22_28_25_18022->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18022->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18022->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18022->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18022->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_18022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
