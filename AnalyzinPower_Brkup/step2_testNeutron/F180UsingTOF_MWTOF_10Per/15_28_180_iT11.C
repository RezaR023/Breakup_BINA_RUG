{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:55:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.5533093,287.5,0.361014);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.3112318);
   gre->SetPointError(0,0,0.08969027);
   gre->SetPoint(1,185,-0.1422801);
   gre->SetPointError(1,0,0.0688038);
   gre->SetPoint(2,195,-0.07012717);
   gre->SetPointError(2,0,0.05816268);
   gre->SetPoint(3,205,-0.2226899);
   gre->SetPointError(3,0,0.05459084);
   gre->SetPoint(4,215,-0.1892216);
   gre->SetPointError(4,0,0.06171024);
   gre->SetPoint(5,225,-0.2293112);
   gre->SetPointError(5,0,0.06200179);
   gre->SetPoint(6,235,-0.3008896);
   gre->SetPointError(6,0,0.07992126);
   gre->SetPoint(7,245,-0.1340833);
   gre->SetPointError(7,0,0.0934805);
   gre->SetPoint(8,255,0.1117906);
   gre->SetPointError(8,0,0.09683614);
   gre->SetPoint(9,265,0.08364162);
   gre->SetPointError(9,0,0.1175432);
   
   TH1F *Graph_gr_iT11_15_28_18033 = new TH1F("Graph_gr_iT11_15_28_18033","",100,166,274);
   Graph_gr_iT11_15_28_18033->SetMinimum(-0.461877);
   Graph_gr_iT11_15_28_18033->SetMaximum(0.2695816);
   Graph_gr_iT11_15_28_18033->SetDirectory(0);
   Graph_gr_iT11_15_28_18033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_18033->SetLineColor(ci);
   Graph_gr_iT11_15_28_18033->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18033->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18033->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18033->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_18033->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_18033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_18033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_18033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_18033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
