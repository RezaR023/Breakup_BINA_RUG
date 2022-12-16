{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:48:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.2586109,267.5,0.08473735);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.03737854);
   gre->SetPointError(0,0,0.03578601);
   gre->SetPoint(1,165,-0.01094359);
   gre->SetPointError(1,0,0.03845622);
   gre->SetPoint(2,175,-0.01337271);
   gre->SetPointError(2,0,0.03703225);
   gre->SetPoint(3,185,-0.1136339);
   gre->SetPointError(3,0,0.03403305);
   gre->SetPoint(4,195,-0.08619345);
   gre->SetPointError(4,0,0.02675907);
   gre->SetPoint(5,205,-0.09434659);
   gre->SetPointError(5,0,0.02512023);
   gre->SetPoint(6,215,-0.1661405);
   gre->SetPointError(6,0,0.02241351);
   gre->SetPoint(7,225,-0.1746339);
   gre->SetPointError(7,0,0.01953643);
   gre->SetPoint(8,235,-0.1849073);
   gre->SetPointError(8,0,0.01647897);
   gre->SetPoint(9,245,-0.165786);
   gre->SetPointError(9,0,0.01330926);
   
   TH1F *Graph_gr_ImT22_25_15_16074 = new TH1F("Graph_gr_ImT22_25_15_16074","",100,146,254);
   Graph_gr_ImT22_25_15_16074->SetMinimum(-0.2242761);
   Graph_gr_ImT22_25_15_16074->SetMaximum(0.05040252);
   Graph_gr_ImT22_25_15_16074->SetDirectory(0);
   Graph_gr_ImT22_25_15_16074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_15_16074->SetLineColor(ci);
   Graph_gr_ImT22_25_15_16074->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_16074->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_16074->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_16074->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_16074->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_16074->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_16074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_15_16074);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
