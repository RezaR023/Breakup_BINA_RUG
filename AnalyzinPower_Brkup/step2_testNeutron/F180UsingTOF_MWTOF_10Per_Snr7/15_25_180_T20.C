{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:47:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(145,-1.211848,295,0.4844982);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("gr_T20_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,-0.1212325);
   gre->SetPointError(0,0,0.1817194);
   gre->SetPoint(1,190,0.1068257);
   gre->SetPointError(1,0,0.09494806);
   gre->SetPoint(2,210,0.007356384);
   gre->SetPointError(2,0,0.07900916);
   gre->SetPoint(3,230,-0.08344701);
   gre->SetPointError(3,0,0.08305524);
   gre->SetPoint(4,250,-0.385875);
   gre->SetPointError(4,0,0.08620346);
   gre->SetPoint(5,270,-0.8167655);
   gre->SetPointError(5,0,0.1123584);
   
   TH1F *Graph_gr_T20_15_25_1808 = new TH1F("Graph_gr_T20_15_25_1808","",100,160,280);
   Graph_gr_T20_15_25_1808->SetMinimum(-1.042214);
   Graph_gr_T20_15_25_1808->SetMaximum(0.3148635);
   Graph_gr_T20_15_25_1808->SetDirectory(0);
   Graph_gr_T20_15_25_1808->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_1808->SetLineColor(ci);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_1808->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_1808);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
