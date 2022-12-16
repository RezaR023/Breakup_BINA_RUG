{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:55:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(115,-0.2434591,235,0.08571592);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1068897);
   gre->SetPointError(0,0,0.03484904);
   gre->SetPoint(1,145,-0.1082951);
   gre->SetPointError(1,0,0.03142976);
   gre->SetPoint(2,155,-0.07252817);
   gre->SetPointError(2,0,0.03017728);
   gre->SetPoint(3,165,-0.1544877);
   gre->SetPointError(3,0,0.03410891);
   gre->SetPoint(4,175,-0.04809634);
   gre->SetPointError(4,0,0.03598423);
   gre->SetPoint(5,185,-0.00520236);
   gre->SetPointError(5,0,0.03605577);
   gre->SetPoint(6,195,-0.1017403);
   gre->SetPointError(6,0,0.03539759);
   gre->SetPoint(7,205,-0.06406213);
   gre->SetPointError(7,0,0.03422652);
   gre->SetPoint(8,215,-0.1036516);
   gre->SetPointError(8,0,0.02895527);
   
   TH1F *Graph_gr_ImiT11_28_28_14048 = new TH1F("Graph_gr_ImiT11_28_28_14048","",100,127,223);
   Graph_gr_ImiT11_28_28_14048->SetMinimum(-0.2105416);
   Graph_gr_ImiT11_28_28_14048->SetMaximum(0.05279842);
   Graph_gr_ImiT11_28_28_14048->SetDirectory(0);
   Graph_gr_ImiT11_28_28_14048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_14048->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_14048->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14048->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_14048->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14048->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_14048->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14048->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_14048);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
