{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 15:32:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",656,71,765,578);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   Canvas_1->Range(155,-1.542193,305,0.7891098);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,180,-0.9993868);
   gre->SetPointError(0,0,0.1542554);
   gre->SetPoint(1,200,-0.6307396);
   gre->SetPointError(1,0,0.1303224);
   gre->SetPoint(2,220,-0.2837313);
   gre->SetPointError(2,0,0.1382989);
   gre->SetPoint(3,240,0.05548301);
   gre->SetPointError(3,0,0.1280733);
   gre->SetPoint(4,260,0.2938654);
   gre->SetPointError(4,0,0.106694);
   gre->SetPoint(5,280,0.2132612);
   gre->SetPointError(5,0,0.1040258);
   
   TH1F *Graph_gr_T20_15_15_1802 = new TH1F("Graph_gr_T20_15_15_1802","",100,170,290);
   Graph_gr_T20_15_15_1802->SetMinimum(-1.309062);
   Graph_gr_T20_15_15_1802->SetMaximum(0.5559795);
   Graph_gr_T20_15_15_1802->SetDirectory(0);
   Graph_gr_T20_15_15_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_1802->SetLineColor(ci);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
