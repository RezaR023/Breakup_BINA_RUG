{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:05:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.784303,267.5,0.7546281);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.4177881);
   gre->SetPointError(0,0,0.1100264);
   gre->SetPoint(1,165,-0.1271745);
   gre->SetPointError(1,0,0.09889952);
   gre->SetPoint(2,175,-0.0463592);
   gre->SetPointError(2,0,0.096662);
   gre->SetPoint(3,185,0.2839384);
   gre->SetPointError(3,0,0.1030517);
   gre->SetPoint(4,195,0.1017653);
   gre->SetPointError(4,0,0.07521986);
   gre->SetPoint(5,205,0.2217134);
   gre->SetPointError(5,0,0.06300476);
   gre->SetPoint(6,215,0.3104214);
   gre->SetPointError(6,0,0.05193728);
   gre->SetPoint(7,225,0.4486331);
   gre->SetPointError(7,0,0.04430217);
   gre->SetPoint(8,235,0.4364027);
   gre->SetPointError(8,0,0.03163817);
   gre->SetPoint(9,245,0.4793313);
   gre->SetPointError(9,0,0.01880831);
   
   TH1F *Graph_gr_T20_25_15_18045 = new TH1F("Graph_gr_T20_25_15_18045","",100,146,254);
   Graph_gr_T20_25_15_18045->SetMinimum(-0.6304099);
   Graph_gr_T20_25_15_18045->SetMaximum(0.600735);
   Graph_gr_T20_25_15_18045->SetDirectory(0);
   Graph_gr_T20_25_15_18045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_15_18045->SetLineColor(ci);
   Graph_gr_T20_25_15_18045->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_18045->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_18045->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_18045->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_18045->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_18045->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_18045->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_18045->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_15_18045->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_15_18045->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_15_18045->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_15_18045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_15_18045);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
