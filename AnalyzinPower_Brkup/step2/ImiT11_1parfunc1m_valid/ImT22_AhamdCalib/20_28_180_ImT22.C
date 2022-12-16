{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:39:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(130,-0.06634346,280,0.08465043);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.003708481);
   gre->SetPointError(0,0,0.03746933);
   gre->SetPoint(1,165,0.005324493);
   gre->SetPointError(1,0,0.0275979);
   gre->SetPoint(2,175,-0.006181867);
   gre->SetPointError(2,0,0.02177274);
   gre->SetPoint(3,185,0.01465058);
   gre->SetPointError(3,0,0.01664088);
   gre->SetPoint(4,195,0.008530027);
   gre->SetPointError(4,0,0.01348135);
   gre->SetPoint(5,205,0.006391826);
   gre->SetPointError(5,0,0.01114143);
   gre->SetPoint(6,215,0.0104207);
   gre->SetPointError(6,0,0.01018056);
   gre->SetPoint(7,225,0.01003921);
   gre->SetPointError(7,0,0.009924015);
   gre->SetPoint(8,235,-0.003290121);
   gre->SetPointError(8,0,0.01138959);
   gre->SetPoint(9,245,0.03382166);
   gre->SetPointError(9,0,0.01466407);
   gre->SetPoint(10,255,0.03816705);
   gre->SetPointError(10,0,0.02131773);
   
   TH1F *Graph_gr_ImT22_20_28_18057 = new TH1F("Graph_gr_ImT22_20_28_18057","",100,145,265);
   Graph_gr_ImT22_20_28_18057->SetMinimum(-0.05124407);
   Graph_gr_ImT22_20_28_18057->SetMaximum(0.06955104);
   Graph_gr_ImT22_20_28_18057->SetDirectory(0);
   Graph_gr_ImT22_20_28_18057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_28_18057->SetLineColor(ci);
   Graph_gr_ImT22_20_28_18057->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18057->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_18057->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18057->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_18057->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18057->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_28_18057);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
