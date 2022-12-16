{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:56:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.3423429,287.5,-0.04703511);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.123737);
   gre->SetPointError(0,0,0.02748391);
   gre->SetPoint(1,185,-0.1582531);
   gre->SetPointError(1,0,0.01930736);
   gre->SetPoint(2,195,-0.1454369);
   gre->SetPointError(2,0,0.01685042);
   gre->SetPoint(3,205,-0.1951523);
   gre->SetPointError(3,0,0.01602719);
   gre->SetPoint(4,215,-0.1952123);
   gre->SetPointError(4,0,0.01657679);
   gre->SetPoint(5,225,-0.2040611);
   gre->SetPointError(5,0,0.01752689);
   gre->SetPoint(6,235,-0.2455591);
   gre->SetPointError(6,0,0.01803569);
   gre->SetPoint(7,245,-0.2729356);
   gre->SetPointError(7,0,0.02018933);
   gre->SetPoint(8,255,-0.2501771);
   gre->SetPointError(8,0,0.02336898);
   gre->SetPoint(9,265,-0.1916004);
   gre->SetPointError(9,0,0.02768049);
   
   TH1F *Graph_gr_iT11_15_25_18036 = new TH1F("Graph_gr_iT11_15_25_18036","",100,166,274);
   Graph_gr_iT11_15_25_18036->SetMinimum(-0.3128121);
   Graph_gr_iT11_15_25_18036->SetMaximum(-0.07656589);
   Graph_gr_iT11_15_25_18036->SetDirectory(0);
   Graph_gr_iT11_15_25_18036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_25_18036->SetLineColor(ci);
   Graph_gr_iT11_15_25_18036->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18036->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18036->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18036->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_18036->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18036->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18036->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18036->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_18036->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_18036->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_18036->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_18036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_25_18036);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
