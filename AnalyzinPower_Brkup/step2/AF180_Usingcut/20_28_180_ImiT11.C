{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:02:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(130,-0.1637079,280,0.07015547);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05754277);
   gre->SetPointError(0,0,0.06718791);
   gre->SetPoint(1,165,-0.01394361);
   gre->SetPointError(1,0,0.03836176);
   gre->SetPoint(2,175,-0.02446575);
   gre->SetPointError(2,0,0.03055954);
   gre->SetPoint(3,185,0.007131855);
   gre->SetPointError(3,0,0.02404638);
   gre->SetPoint(4,195,-0.0004349925);
   gre->SetPointError(4,0,0.01906672);
   gre->SetPoint(5,205,-0.01063259);
   gre->SetPointError(5,0,0.01601015);
   gre->SetPoint(6,215,-0.005231193);
   gre->SetPointError(6,0,0.01431656);
   gre->SetPoint(7,225,0.000723788);
   gre->SetPointError(7,0,0.01323328);
   gre->SetPoint(8,235,8.423108e-06);
   gre->SetPointError(8,0,0.01325957);
   gre->SetPoint(9,245,-0.001702412);
   gre->SetPointError(9,0,0.01528319);
   gre->SetPoint(10,255,0.00909533);
   gre->SetPointError(10,0,0.020812);
   
   TH1F *Graph_gr_ImiT11_20_28_18039 = new TH1F("Graph_gr_ImiT11_20_28_18039","",100,145,265);
   Graph_gr_ImiT11_20_28_18039->SetMinimum(-0.1403216);
   Graph_gr_ImiT11_20_28_18039->SetMaximum(0.04676913);
   Graph_gr_ImiT11_20_28_18039->SetDirectory(0);
   Graph_gr_ImiT11_20_28_18039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_28_18039->SetLineColor(ci);
   Graph_gr_ImiT11_20_28_18039->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_18039->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_18039->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_18039->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_28_18039->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_28_18039->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_28_18039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_28_18039);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
