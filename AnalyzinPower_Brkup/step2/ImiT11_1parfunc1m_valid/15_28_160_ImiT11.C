{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:58:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(152.5,-0.126246,287.5,0.06178548);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,175,0.006687596);
   gre->SetPointError(0,0,0.0237593);
   gre->SetPoint(1,185,0.004357965);
   gre->SetPointError(1,0,0.01972947);
   gre->SetPoint(2,195,-0.003893277);
   gre->SetPointError(2,0,0.01707264);
   gre->SetPoint(3,205,0.002657694);
   gre->SetPointError(3,0,0.01613783);
   gre->SetPoint(4,215,-0.04084887);
   gre->SetPointError(4,0,0.0163936);
   gre->SetPoint(5,225,-0.05350672);
   gre->SetPointError(5,0,0.0174901);
   gre->SetPoint(6,235,-0.0488084);
   gre->SetPointError(6,0,0.02006985);
   gre->SetPoint(7,245,-0.03859298);
   gre->SetPointError(7,0,0.02313008);
   gre->SetPoint(8,255,-0.06889998);
   gre->SetPointError(8,0,0.02600746);
   gre->SetPoint(9,265,-0.03659669);
   gre->SetPointError(9,0,0.0273036);
   
   TH1F *Graph_gr_ImiT11_15_28_16020 = new TH1F("Graph_gr_ImiT11_15_28_16020","",100,166,274);
   Graph_gr_ImiT11_15_28_16020->SetMinimum(-0.1074429);
   Graph_gr_ImiT11_15_28_16020->SetMaximum(0.04298233);
   Graph_gr_ImiT11_15_28_16020->SetDirectory(0);
   Graph_gr_ImiT11_15_28_16020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_28_16020->SetLineColor(ci);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_28_16020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_28_16020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
