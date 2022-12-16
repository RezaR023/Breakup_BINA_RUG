{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:45:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.2164507,287.5,0.0555485);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1526072);
   gre->SetPointError(0,0,0.01851036);
   gre->SetPoint(1,185,-0.1113877);
   gre->SetPointError(1,0,0.01348147);
   gre->SetPoint(2,195,-0.09447684);
   gre->SetPointError(2,0,0.0117714);
   gre->SetPoint(3,205,-0.06738483);
   gre->SetPointError(3,0,0.01145052);
   gre->SetPoint(4,215,-0.06160716);
   gre->SetPointError(4,0,0.01088039);
   gre->SetPoint(5,225,-0.02966647);
   gre->SetPointError(5,0,0.01127606);
   gre->SetPoint(6,235,-0.03587371);
   gre->SetPointError(6,0,0.01269142);
   gre->SetPoint(7,245,-0.004740703);
   gre->SetPointError(7,0,0.01495599);
   gre->SetPoint(8,255,-0.027809);
   gre->SetPointError(8,0,0.01828259);
   gre->SetPoint(9,265,-0.04847512);
   gre->SetPointError(9,0,0.024436);
   
   TH1F *Graph_gr_T22_15_28_18028 = new TH1F("Graph_gr_T22_15_28_18028","",100,166,274);
   Graph_gr_T22_15_28_18028->SetMinimum(-0.1892508);
   Graph_gr_T22_15_28_18028->SetMaximum(0.02834857);
   Graph_gr_T22_15_28_18028->SetDirectory(0);
   Graph_gr_T22_15_28_18028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_18028->SetLineColor(ci);
   Graph_gr_T22_15_28_18028->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18028->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18028->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18028->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_18028->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_18028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_18028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_18028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_18028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
