{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:56:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.06858321,257.5,0.6172488);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.1017346);
   gre->SetPointError(0,0,0.08461397);
   gre->SetPoint(1,155,0.2340629);
   gre->SetPointError(1,0,0.07260801);
   gre->SetPoint(2,165,0.2939186);
   gre->SetPointError(2,0,0.07317527);
   gre->SetPoint(3,175,0.3056581);
   gre->SetPointError(3,0,0.06902011);
   gre->SetPoint(4,185,0.2553725);
   gre->SetPointError(4,0,0.0576425);
   gre->SetPoint(5,195,0.2184048);
   gre->SetPointError(5,0,0.04715723);
   gre->SetPoint(6,205,0.4579018);
   gre->SetPointError(6,0,0.0424415);
   gre->SetPoint(7,215,0.4082677);
   gre->SetPointError(7,0,0.03277654);
   gre->SetPoint(8,225,0.4702045);
   gre->SetPointError(8,0,0.02514902);
   gre->SetPoint(9,235,0.4641073);
   gre->SetPointError(9,0,0.02298727);
   
   TH1F *Graph_gr_T20_28_15_18015 = new TH1F("Graph_gr_T20_28_15_18015","",100,136,244);
   Graph_gr_T20_28_15_18015->SetMinimum(0);
   Graph_gr_T20_28_15_18015->SetMaximum(0.5486656);
   Graph_gr_T20_28_15_18015->SetDirectory(0);
   Graph_gr_T20_28_15_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_15_18015->SetLineColor(ci);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_15_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
