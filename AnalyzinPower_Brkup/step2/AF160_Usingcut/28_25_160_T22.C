{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:34:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(125,-0.2634236,245,0.01078014);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1836299);
   gre->SetPointError(0,0,0.03409306);
   gre->SetPoint(1,155,-0.15749);
   gre->SetPointError(1,0,0.03543178);
   gre->SetPoint(2,165,-0.08805146);
   gre->SetPointError(2,0,0.03457691);
   gre->SetPoint(3,175,-0.07070077);
   gre->SetPointError(3,0,0.03252887);
   gre->SetPoint(4,185,-0.06376002);
   gre->SetPointError(4,0,0.02883955);
   gre->SetPoint(5,195,-0.08586667);
   gre->SetPointError(5,0,0.02479126);
   gre->SetPoint(6,205,-0.06195985);
   gre->SetPointError(6,0,0.02008821);
   gre->SetPoint(7,215,-0.08494001);
   gre->SetPointError(7,0,0.01541664);
   gre->SetPoint(8,225,-0.1092164);
   gre->SetPointError(8,0,0.0115201);
   
   TH1F *Graph_gr_T22_28_25_160157 = new TH1F("Graph_gr_T22_28_25_160157","",100,137,233);
   Graph_gr_T22_28_25_160157->SetMinimum(-0.2360032);
   Graph_gr_T22_28_25_160157->SetMaximum(-0.01664023);
   Graph_gr_T22_28_25_160157->SetDirectory(0);
   Graph_gr_T22_28_25_160157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_160157->SetLineColor(ci);
   Graph_gr_T22_28_25_160157->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_160157->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_160157->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_160157->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_160157->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_160157->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_160157->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_160157->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_160157->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_160157->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_160157->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_160157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_160157);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
