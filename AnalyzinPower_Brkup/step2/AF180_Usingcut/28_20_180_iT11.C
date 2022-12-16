{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:18:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3658851,257.5,0.3341508);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1858455);
   gre->SetPointError(0,0,0.06336696);
   gre->SetPoint(1,155,0.05914511);
   gre->SetPointError(1,0,0.05745598);
   gre->SetPoint(2,165,-0.003747934);
   gre->SetPointError(2,0,0.05411314);
   gre->SetPoint(3,175,-0.01355095);
   gre->SetPointError(3,0,0.05421804);
   gre->SetPoint(4,185,-0.05146223);
   gre->SetPointError(4,0,0.044957);
   gre->SetPoint(5,195,0.1209371);
   gre->SetPointError(5,0,0.04077582);
   gre->SetPoint(6,205,0.1844378);
   gre->SetPointError(6,0,0.03304038);
   gre->SetPoint(7,215,0.1414329);
   gre->SetPointError(7,0,0.02382569);
   gre->SetPoint(8,225,0.1138648);
   gre->SetPointError(8,0,0.01508557);
   gre->SetPoint(9,235,0.1180524);
   gre->SetPointError(9,0,0.008307353);
   
   TH1F *Graph_gr_iT11_28_20_18068 = new TH1F("Graph_gr_iT11_28_20_18068","",100,136,244);
   Graph_gr_iT11_28_20_18068->SetMinimum(-0.2958815);
   Graph_gr_iT11_28_20_18068->SetMaximum(0.2641472);
   Graph_gr_iT11_28_20_18068->SetDirectory(0);
   Graph_gr_iT11_28_20_18068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_20_18068->SetLineColor(ci);
   Graph_gr_iT11_28_20_18068->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18068->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18068->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18068->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_18068->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18068->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18068->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18068->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_18068->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18068->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18068->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_20_18068);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
