{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:07:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.4309227,255,0.3834669);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.1834507);
   gre->SetPointError(0,0,0.06428457);
   gre->SetPoint(1,165,0.05654936);
   gre->SetPointError(1,0,0.06225384);
   gre->SetPoint(2,175,0.05633007);
   gre->SetPointError(2,0,0.06706378);
   gre->SetPoint(3,185,-0.0123864);
   gre->SetPointError(3,0,0.06801485);
   gre->SetPoint(4,195,-0.1840885);
   gre->SetPointError(4,0,0.06577742);
   gre->SetPoint(5,205,-0.1409123);
   gre->SetPointError(5,0,0.06846265);
   gre->SetPoint(6,215,-0.2313646);
   gre->SetPointError(6,0,0.06248314);
   gre->SetPoint(7,225,-0.2380605);
   gre->SetPointError(7,0,0.05713053);
   gre->SetPoint(8,235,-0.2145363);
   gre->SetPointError(8,0,0.04771971);
   
   TH1F *Graph_gr_T20_25_25_14033 = new TH1F("Graph_gr_T20_25_25_14033","",100,147,243);
   Graph_gr_T20_25_25_14033->SetMinimum(-0.3494837);
   Graph_gr_T20_25_25_14033->SetMaximum(0.3020279);
   Graph_gr_T20_25_25_14033->SetDirectory(0);
   Graph_gr_T20_25_25_14033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_25_14033->SetLineColor(ci);
   Graph_gr_T20_25_25_14033->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_14033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_14033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_14033->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_14033->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_14033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_14033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_14033->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_14033->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_14033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_14033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_14033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_25_14033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
