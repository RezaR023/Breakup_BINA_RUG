{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:12:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.185577,310,0.0773412);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.04011128);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.04011128);
   gre->SetPoint(2,155,-0.006589786);
   gre->SetPointError(2,0,0.04011128);
   gre->SetPoint(3,165,-0.03140862);
   gre->SetPointError(3,0,0.049851);
   gre->SetPoint(4,175,-0.02958076);
   gre->SetPointError(4,0,0.03092486);
   gre->SetPoint(5,185,-0.05060978);
   gre->SetPointError(5,0,0.03322678);
   gre->SetPoint(6,195,-0.09476315);
   gre->SetPointError(6,0,0.0334924);
   gre->SetPoint(7,205,-0.05235584);
   gre->SetPointError(7,0,0.02929312);
   gre->SetPoint(8,215,-0.08286589);
   gre->SetPointError(8,0,0.02542449);
   gre->SetPoint(9,225,-0.03866499);
   gre->SetPointError(9,0,0.02367096);
   gre->SetPoint(10,235,-0.06432225);
   gre->SetPointError(10,0,0.02185233);
   gre->SetPoint(11,245,-0.06447072);
   gre->SetPointError(11,0,0.01994825);
   gre->SetPoint(12,255,-0.1107313);
   gre->SetPointError(12,0,0.01717785);
   gre->SetPoint(13,265,-0.128219);
   gre->SetPointError(13,0,0.01353826);
   gre->SetPoint(14,275,-0.08425935);
   gre->SetPointError(14,0,0.03107208);
   
   TH1F *Graph_gr_T22_20_20_16022 = new TH1F("Graph_gr_T22_20_20_16022","",100,121,289);
   Graph_gr_T22_20_20_16022->SetMinimum(-0.1592852);
   Graph_gr_T22_20_20_16022->SetMaximum(0.05104937);
   Graph_gr_T22_20_20_16022->SetDirectory(0);
   Graph_gr_T22_20_20_16022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_16022->SetLineColor(ci);
   Graph_gr_T22_20_20_16022->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_16022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_16022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_16022->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_16022->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_16022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_16022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_16022->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_16022->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_16022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_16022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_16022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_16022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
