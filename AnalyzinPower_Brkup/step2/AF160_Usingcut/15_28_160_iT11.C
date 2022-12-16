{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:06:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.3322337,287.5,-0.0922307);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.2301224);
   gre->SetPointError(0,0,0.02613208);
   gre->SetPoint(1,185,-0.1563454);
   gre->SetPointError(1,0,0.02027665);
   gre->SetPoint(2,195,-0.1503332);
   gre->SetPointError(2,0,0.01810201);
   gre->SetPoint(3,205,-0.1999743);
   gre->SetPointError(3,0,0.01648099);
   gre->SetPoint(4,215,-0.2080381);
   gre->SetPointError(4,0,0.01597748);
   gre->SetPoint(5,225,-0.1956307);
   gre->SetPointError(5,0,0.01790597);
   gre->SetPoint(6,235,-0.2218403);
   gre->SetPointError(6,0,0.02027366);
   gre->SetPoint(7,245,-0.2360737);
   gre->SetPointError(7,0,0.02258672);
   gre->SetPoint(8,255,-0.267333);
   gre->SetPointError(8,0,0.02490028);
   gre->SetPoint(9,265,-0.1894257);
   gre->SetPointError(9,0,0.02898453);
   
   TH1F *Graph_gr_iT11_15_28_16099 = new TH1F("Graph_gr_iT11_15_28_16099","",100,166,274);
   Graph_gr_iT11_15_28_16099->SetMinimum(-0.3082334);
   Graph_gr_iT11_15_28_16099->SetMaximum(-0.116231);
   Graph_gr_iT11_15_28_16099->SetDirectory(0);
   Graph_gr_iT11_15_28_16099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_16099->SetLineColor(ci);
   Graph_gr_iT11_15_28_16099->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16099->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16099->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16099->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_16099->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16099->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16099->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16099->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_16099->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16099->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16099->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_16099);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
