{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:03:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.337712,287.5,-0.09033717);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.2006261);
   gre->SetPointError(0,0,0.03720736);
   gre->SetPoint(1,185,-0.214463);
   gre->SetPointError(1,0,0.02623543);
   gre->SetPoint(2,195,-0.1536852);
   gre->SetPointError(2,0,0.02211886);
   gre->SetPoint(3,205,-0.2149336);
   gre->SetPointError(3,0,0.01985301);
   gre->SetPoint(4,215,-0.197234);
   gre->SetPointError(4,0,0.01924692);
   gre->SetPoint(5,225,-0.2069385);
   gre->SetPointError(5,0,0.02030349);
   gre->SetPoint(6,235,-0.2051201);
   gre->SetPointError(6,0,0.02150723);
   gre->SetPoint(7,245,-0.2397026);
   gre->SetPointError(7,0,0.02329672);
   gre->SetPoint(8,255,-0.2708691);
   gre->SetPointError(8,0,0.0256138);
   gre->SetPoint(9,265,-0.224388);
   gre->SetPointError(9,0,0.02852319);
   
   TH1F *Graph_gr_iT11_15_25_16094 = new TH1F("Graph_gr_iT11_15_25_16094","",100,166,274);
   Graph_gr_iT11_15_25_16094->SetMinimum(-0.3129746);
   Graph_gr_iT11_15_25_16094->SetMaximum(-0.1150747);
   Graph_gr_iT11_15_25_16094->SetDirectory(0);
   Graph_gr_iT11_15_25_16094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_25_16094->SetLineColor(ci);
   Graph_gr_iT11_15_25_16094->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_16094->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_16094->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_16094->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_16094->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_16094->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_16094->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_16094->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_16094->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_16094->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_16094->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_16094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_25_16094);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
