{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:05:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1500811,267.5,0.2646356);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01366362);
   gre->SetPointError(0,0,0.06729807);
   gre->SetPoint(1,165,0.03272227);
   gre->SetPointError(1,0,0.06684184);
   gre->SetPoint(2,175,0.100474);
   gre->SetPointError(2,0,0.05953585);
   gre->SetPoint(3,185,0.04948446);
   gre->SetPointError(3,0,0.06749196);
   gre->SetPoint(4,195,0.147712);
   gre->SetPointError(4,0,0.04780414);
   gre->SetPoint(5,205,0.04517025);
   gre->SetPointError(5,0,0.0382133);
   gre->SetPoint(6,215,0.05815956);
   gre->SetPointError(6,0,0.03070997);
   gre->SetPoint(7,225,0.09730094);
   gre->SetPointError(7,0,0.02632676);
   gre->SetPoint(8,235,0.1392962);
   gre->SetPointError(8,0,0.01824002);
   gre->SetPoint(9,245,0.1653679);
   gre->SetPointError(9,0,0.01105127);
   
   TH1F *Graph_gr_iT11_25_15_18043 = new TH1F("Graph_gr_iT11_25_15_18043","",100,146,254);
   Graph_gr_iT11_25_15_18043->SetMinimum(-0.1086095);
   Graph_gr_iT11_25_15_18043->SetMaximum(0.2231639);
   Graph_gr_iT11_25_15_18043->SetDirectory(0);
   Graph_gr_iT11_25_15_18043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_15_18043->SetLineColor(ci);
   Graph_gr_iT11_25_15_18043->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_18043->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_18043->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_18043->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_18043->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_18043->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_18043->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_18043->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_18043->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_18043->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_18043->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_18043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_15_18043);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
