{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:01:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(142.5,-0.1092516,277.5,0.04063465);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,165,-0.01700166);
   gre->SetPointError(0,0,0.03265526);
   gre->SetPoint(1,175,-0.03619683);
   gre->SetPointError(1,0,0.02980818);
   gre->SetPoint(2,185,-0.03239158);
   gre->SetPointError(2,0,0.02446342);
   gre->SetPoint(3,195,-0.03797796);
   gre->SetPointError(3,0,0.02089338);
   gre->SetPoint(4,205,-0.0391221);
   gre->SetPointError(4,0,0.01823897);
   gre->SetPoint(5,215,-0.04344925);
   gre->SetPointError(5,0,0.0172508);
   gre->SetPoint(6,225,-0.06756159);
   gre->SetPointError(6,0,0.016709);
   gre->SetPoint(7,235,-0.05483917);
   gre->SetPointError(7,0,0.01680123);
   gre->SetPoint(8,245,-0.03054583);
   gre->SetPointError(8,0,0.01972268);
   gre->SetPoint(9,255,-0.03239774);
   gre->SetPointError(9,0,0.0196472);
   
   TH1F *Graph_gr_ImiT11_20_28_16024 = new TH1F("Graph_gr_ImiT11_20_28_16024","",100,156,264);
   Graph_gr_ImiT11_20_28_16024->SetMinimum(-0.09426301);
   Graph_gr_ImiT11_20_28_16024->SetMaximum(0.02564602);
   Graph_gr_ImiT11_20_28_16024->SetDirectory(0);
   Graph_gr_ImiT11_20_28_16024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_16024->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_16024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_16024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
