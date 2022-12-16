{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:22:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(152.5,-0.1230142,287.5,0.114808);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.06155249);
   gre->SetPointError(0,0,0.02182466);
   gre->SetPoint(1,185,-0.04030139);
   gre->SetPointError(1,0,0.01770191);
   gre->SetPoint(2,195,0.0042532);
   gre->SetPointError(2,0,0.01585552);
   gre->SetPoint(3,205,0.00163107);
   gre->SetPointError(3,0,0.0140528);
   gre->SetPoint(4,215,-0.009057788);
   gre->SetPointError(4,0,0.01376586);
   gre->SetPoint(5,225,-0.0001149381);
   gre->SetPointError(5,0,0.01515965);
   gre->SetPoint(6,235,-0.0006905744);
   gre->SetPointError(6,0,0.01656061);
   gre->SetPoint(7,245,0.008550709);
   gre->SetPointError(7,0,0.01879378);
   gre->SetPoint(8,255,0.05364777);
   gre->SetPointError(8,0,0.02152322);
   gre->SetPoint(9,265,-0.01530559);
   gre->SetPointError(9,0,0.02488734);
   
   TH1F *Graph_gr_ImT22_15_25_16068 = new TH1F("Graph_gr_ImT22_15_25_16068","",100,166,274);
   Graph_gr_ImT22_15_25_16068->SetMinimum(-0.09923196);
   Graph_gr_ImT22_15_25_16068->SetMaximum(0.0910258);
   Graph_gr_ImT22_15_25_16068->SetDirectory(0);
   Graph_gr_ImT22_15_25_16068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_16068->SetLineColor(ci);
   Graph_gr_ImT22_15_25_16068->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16068->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16068->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16068->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16068->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16068->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_16068);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
