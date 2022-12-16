{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:31:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-1.303367,310,0.5737742);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.009898322);
   gre->SetPointError(0,0,0.04149161);
   gre->SetPoint(1,145,-0.004002952);
   gre->SetPointError(1,0,0.2649203);
   gre->SetPoint(2,155,-0.5793075);
   gre->SetPointError(2,0,0.4112025);
   gre->SetPoint(3,165,-0.03131484);
   gre->SetPointError(3,0,0.05326517);
   gre->SetPoint(4,175,0.00646595);
   gre->SetPointError(4,0,0.02632506);
   gre->SetPoint(5,185,0.01235198);
   gre->SetPointError(5,0,0.02058938);
   gre->SetPoint(6,195,0.006380163);
   gre->SetPointError(6,0,0.01723825);
   gre->SetPoint(7,205,0.01733433);
   gre->SetPointError(7,0,0.01674976);
   gre->SetPoint(8,215,0.007622254);
   gre->SetPointError(8,0,0.016572);
   gre->SetPoint(9,225,0.006447179);
   gre->SetPointError(9,0,0.0171563);
   gre->SetPoint(10,235,2.271323e-05);
   gre->SetPointError(10,0,0.01979843);
   gre->SetPoint(11,245,-0.000849253);
   gre->SetPointError(11,0,0.02266187);
   gre->SetPoint(12,255,-0.02050955);
   gre->SetPointError(12,0,0.0270974);
   gre->SetPoint(13,265,-0.01747665);
   gre->SetPointError(13,0,0.03106853);
   gre->SetPoint(14,275,-0.1373453);
   gre->SetPointError(14,0,0.05801217);
   
   TH1F *Graph_gr_ImiT11_15_28_1807 = new TH1F("Graph_gr_ImiT11_15_28_1807","",100,121,289);
   Graph_gr_ImiT11_15_28_1807->SetMinimum(-1.115653);
   Graph_gr_ImiT11_15_28_1807->SetMaximum(0.3860601);
   Graph_gr_ImiT11_15_28_1807->SetDirectory(0);
   Graph_gr_ImiT11_15_28_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_1807->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
