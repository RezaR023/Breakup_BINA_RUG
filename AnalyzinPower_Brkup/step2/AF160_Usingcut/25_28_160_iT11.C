{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:25:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3863691,257.5,-0.002418427);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1091598);
   gre->SetPointError(0,0,0.04274959);
   gre->SetPoint(1,155,-0.1951949);
   gre->SetPointError(1,0,0.03287876);
   gre->SetPoint(2,165,-0.2764147);
   gre->SetPointError(2,0,0.03267532);
   gre->SetPoint(3,175,-0.2823236);
   gre->SetPointError(3,0,0.03144381);
   gre->SetPoint(4,185,-0.2644647);
   gre->SetPointError(4,0,0.02796856);
   gre->SetPoint(5,195,-0.2761094);
   gre->SetPointError(5,0,0.02274088);
   gre->SetPoint(6,205,-0.2855501);
   gre->SetPointError(6,0,0.01871005);
   gre->SetPoint(7,215,-0.3058745);
   gre->SetPointError(7,0,0.01650286);
   gre->SetPoint(8,225,-0.300288);
   gre->SetPointError(8,0,0.0149844);
   gre->SetPoint(9,235,-0.2768107);
   gre->SetPointError(9,0,0.01581745);
   
   TH1F *Graph_gr_iT11_25_28_160139 = new TH1F("Graph_gr_iT11_25_28_160139","",100,136,244);
   Graph_gr_iT11_25_28_160139->SetMinimum(-0.3479741);
   Graph_gr_iT11_25_28_160139->SetMaximum(-0.0408135);
   Graph_gr_iT11_25_28_160139->SetDirectory(0);
   Graph_gr_iT11_25_28_160139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_28_160139->SetLineColor(ci);
   Graph_gr_iT11_25_28_160139->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_160139->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_160139->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_160139->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_160139->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_160139->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_160139->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_160139->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_160139->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_160139->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_160139->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_160139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_28_160139);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
