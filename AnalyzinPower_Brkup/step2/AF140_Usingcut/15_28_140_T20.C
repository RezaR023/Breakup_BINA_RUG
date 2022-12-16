{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:49:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(155,-0.271642,275,0.2797451);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.121016);
   gre->SetPointError(0,0,0.05368501);
   gre->SetPoint(1,185,0.1397519);
   gre->SetPointError(1,0,0.04809536);
   gre->SetPoint(2,195,0.08340698);
   gre->SetPointError(2,0,0.042971);
   gre->SetPoint(3,205,0.08396987);
   gre->SetPointError(3,0,0.0413683);
   gre->SetPoint(4,215,0.03910674);
   gre->SetPointError(4,0,0.04133379);
   gre->SetPoint(5,225,-0.01160044);
   gre->SetPointError(5,0,0.04340173);
   gre->SetPoint(6,235,-0.1347116);
   gre->SetPointError(6,0,0.0450326);
   gre->SetPoint(7,245,-0.05922913);
   gre->SetPointError(7,0,0.05233228);
   gre->SetPoint(8,255,-0.1061878);
   gre->SetPointError(8,0,0.05150828);
   
   TH1F *Graph_gr_T20_15_28_140184 = new TH1F("Graph_gr_T20_15_28_140184","",100,167,263);
   Graph_gr_T20_15_28_140184->SetMinimum(-0.2165033);
   Graph_gr_T20_15_28_140184->SetMaximum(0.2246064);
   Graph_gr_T20_15_28_140184->SetDirectory(0);
   Graph_gr_T20_15_28_140184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_140184->SetLineColor(ci);
   Graph_gr_T20_15_28_140184->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_140184->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_140184->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_140184->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_140184->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_140184->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_140184->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_140184->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_140184->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_140184->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_140184->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_140184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_140184);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
