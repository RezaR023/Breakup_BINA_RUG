{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:02:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(130,-0.5521033,280,0.1902724);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T20_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.2530418);
   gre->SetPointError(0,0,0.1024873);
   gre->SetPoint(1,165,-0.1103182);
   gre->SetPointError(1,0,0.05465544);
   gre->SetPoint(2,175,-0.007225401);
   gre->SetPointError(2,0,0.04758912);
   gre->SetPoint(3,185,0.02926951);
   gre->SetPointError(3,0,0.03727363);
   gre->SetPoint(4,195,-0.11302);
   gre->SetPointError(4,0,0.02741728);
   gre->SetPoint(5,205,-0.1454519);
   gre->SetPointError(5,0,0.02300698);
   gre->SetPoint(6,215,-0.2287228);
   gre->SetPointError(6,0,0.01974866);
   gre->SetPoint(7,225,-0.3057476);
   gre->SetPointError(7,0,0.0177067);
   gre->SetPoint(8,235,-0.3648522);
   gre->SetPointError(8,0,0.01778606);
   gre->SetPoint(9,245,-0.408339);
   gre->SetPointError(9,0,0.02003495);
   gre->SetPoint(10,255,-0.3767141);
   gre->SetPointError(10,0,0.02635529);
   
   TH1F *Graph_gr_T20_20_28_18040 = new TH1F("Graph_gr_T20_20_28_18040","",100,145,265);
   Graph_gr_T20_20_28_18040->SetMinimum(-0.4778657);
   Graph_gr_T20_20_28_18040->SetMaximum(0.1160349);
   Graph_gr_T20_20_28_18040->SetDirectory(0);
   Graph_gr_T20_20_28_18040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_18040->SetLineColor(ci);
   Graph_gr_T20_20_28_18040->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18040->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18040->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18040->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_18040->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18040->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18040->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18040->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_18040->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18040->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18040->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_18040);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
