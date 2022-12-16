{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:25:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-1.370305,257.5,1.000038);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.3430339);
   gre->SetPointError(0,0,0.2619468);
   gre->SetPoint(1,155,-0.8264365);
   gre->SetPointError(1,0,0.1488113);
   gre->SetPoint(2,165,-0.6287881);
   gre->SetPointError(2,0,0.1580137);
   gre->SetPoint(3,175,-0.7369547);
   gre->SetPointError(3,0,0.1078968);
   gre->SetPoint(4,185,-0.3983186);
   gre->SetPointError(4,0,0.1040316);
   gre->SetPoint(5,195,-0.5414341);
   gre->SetPointError(5,0,0.06300421);
   gre->SetPoint(6,205,-0.3855363);
   gre->SetPointError(6,0,0.04760731);
   gre->SetPoint(7,215,-0.355565);
   gre->SetPointError(7,0,0.03690659);
   gre->SetPoint(8,225,-0.4150993);
   gre->SetPointError(8,0,0.03596511);
   gre->SetPoint(9,235,-0.3940906);
   gre->SetPointError(9,0,0.05750857);
   
   TH1F *Graph_gr_T20_28_28_18024 = new TH1F("Graph_gr_T20_28_28_18024","",100,136,244);
   Graph_gr_T20_28_28_18024->SetMinimum(-1.133271);
   Graph_gr_T20_28_28_18024->SetMaximum(0.7630035);
   Graph_gr_T20_28_28_18024->SetDirectory(0);
   Graph_gr_T20_28_28_18024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_18024->SetLineColor(ci);
   Graph_gr_T20_28_28_18024->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18024->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18024->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18024->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18024->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_18024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
