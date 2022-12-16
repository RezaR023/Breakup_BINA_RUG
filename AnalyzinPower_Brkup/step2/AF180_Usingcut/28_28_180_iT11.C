{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:42:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3823165,257.5,0.04797742);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.07732532);
   gre->SetPointError(0,0,0.05358709);
   gre->SetPoint(1,155,-0.1381679);
   gre->SetPointError(1,0,0.04276025);
   gre->SetPoint(2,165,-0.1921749);
   gre->SetPointError(2,0,0.04393114);
   gre->SetPoint(3,175,-0.2453456);
   gre->SetPointError(3,0,0.03496031);
   gre->SetPoint(4,185,-0.2464301);
   gre->SetPointError(4,0,0.0274339);
   gre->SetPoint(5,195,-0.2839562);
   gre->SetPointError(5,0,0.01891406);
   gre->SetPoint(6,205,-0.2985053);
   gre->SetPointError(6,0,0.01209558);
   gre->SetPoint(7,215,-0.2827026);
   gre->SetPointError(7,0,0.007964498);
   gre->SetPoint(8,225,-0.2700702);
   gre->SetPointError(8,0,0.006198738);
   gre->SetPoint(9,235,-0.2691065);
   gre->SetPointError(9,0,0.01044348);
   
   TH1F *Graph_gr_iT11_28_28_18078 = new TH1F("Graph_gr_iT11_28_28_18078","",100,136,244);
   Graph_gr_iT11_28_28_18078->SetMinimum(-0.3392871);
   Graph_gr_iT11_28_28_18078->SetMaximum(0.004948029);
   Graph_gr_iT11_28_28_18078->SetDirectory(0);
   Graph_gr_iT11_28_28_18078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_18078->SetLineColor(ci);
   Graph_gr_iT11_28_28_18078->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18078->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18078->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18078->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18078->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18078->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18078->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18078->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18078->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18078->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18078->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_18078);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
