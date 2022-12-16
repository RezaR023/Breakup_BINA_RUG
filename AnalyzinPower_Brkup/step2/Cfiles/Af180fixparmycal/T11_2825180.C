{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:05:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.2500261,310,0.2159855);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.09893063);
   gre->SetPointError(0,0,0.06389332);
   gre->SetPoint(1,145,0.09062984);
   gre->SetPointError(1,0,0.04768704);
   gre->SetPoint(2,155,-0.009533058);
   gre->SetPointError(2,0,0.0444102);
   gre->SetPoint(3,165,-0.04234947);
   gre->SetPointError(3,0,0.04566252);
   gre->SetPoint(4,175,-0.1012538);
   gre->SetPointError(4,0,0.03853629);
   gre->SetPoint(5,185,-0.05578969);
   gre->SetPointError(5,0,0.03656195);
   gre->SetPoint(6,195,-0.1215374);
   gre->SetPointError(6,0,0.02815822);
   gre->SetPoint(7,205,-0.1449622);
   gre->SetPointError(7,0,0.01943429);
   gre->SetPoint(8,215,-0.1496432);
   gre->SetPointError(8,0,0.01212957);
   gre->SetPoint(9,225,-0.1550259);
   gre->SetPointError(9,0,0.007447533);
   gre->SetPoint(10,235,-0.128865);
   gre->SetPointError(10,0,0.007806328);
   gre->SetPoint(11,245,-0.1410722);
   gre->SetPointError(11,0,0.005968183);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.005968183);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.005968183);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.005968183);
   
   TH1F *Graph_gr_iT11_28_25_18011 = new TH1F("Graph_gr_iT11_28_25_18011","",100,121,289);
   Graph_gr_iT11_28_25_18011->SetMinimum(-0.203425);
   Graph_gr_iT11_28_25_18011->SetMaximum(0.1693843);
   Graph_gr_iT11_28_25_18011->SetDirectory(0);
   Graph_gr_iT11_28_25_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_18011->SetLineColor(ci);
   Graph_gr_iT11_28_25_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
