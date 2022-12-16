{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:47:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.4873558,287.5,0.3411522);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.01067672);
   gre->SetPointError(0,0,0.08613666);
   gre->SetPoint(1,185,0.1457164);
   gre->SetPointError(1,0,0.05735114);
   gre->SetPoint(2,195,0.08248946);
   gre->SetPointError(2,0,0.05104179);
   gre->SetPoint(3,205,0.09569183);
   gre->SetPointError(3,0,0.04760383);
   gre->SetPoint(4,215,0.01679837);
   gre->SetPointError(4,0,0.04418991);
   gre->SetPoint(5,225,-0.04533994);
   gre->SetPointError(5,0,0.04332988);
   gre->SetPoint(6,235,-0.1256359);
   gre->SetPointError(6,0,0.04481066);
   gre->SetPoint(7,245,-0.1413831);
   gre->SetPointError(7,0,0.04843786);
   gre->SetPoint(8,255,-0.3019217);
   gre->SetPointError(8,0,0.04734942);
   gre->SetPoint(9,265,-0.1675449);
   gre->SetPointError(9,0,0.05230223);
   
   TH1F *Graph_gr_T20_15_25_140179 = new TH1F("Graph_gr_T20_15_25_140179","",100,166,274);
   Graph_gr_T20_15_25_140179->SetMinimum(-0.404505);
   Graph_gr_T20_15_25_140179->SetMaximum(0.2583014);
   Graph_gr_T20_15_25_140179->SetDirectory(0);
   Graph_gr_T20_15_25_140179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_25_140179->SetLineColor(ci);
   Graph_gr_T20_15_25_140179->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_140179->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_140179->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_140179->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_140179->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_140179->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_140179->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_140179->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_25_140179->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_25_140179->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_25_140179->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_25_140179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_25_140179);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
