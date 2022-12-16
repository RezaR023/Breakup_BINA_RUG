{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:17:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.486006,277.5,0.1879137);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.01143821);
   gre->SetPointError(0,0,0.04611115);
   gre->SetPoint(1,175,0.03156763);
   gre->SetPointError(1,0,0.04402611);
   gre->SetPoint(2,185,0.02137802);
   gre->SetPointError(2,0,0.03660148);
   gre->SetPoint(3,195,-0.07654209);
   gre->SetPointError(3,0,0.02945075);
   gre->SetPoint(4,205,-0.1933855);
   gre->SetPointError(4,0,0.02461541);
   gre->SetPoint(5,215,-0.177291);
   gre->SetPointError(5,0,0.02331032);
   gre->SetPoint(6,225,-0.25173);
   gre->SetPointError(6,0,0.02226293);
   gre->SetPoint(7,235,-0.3518233);
   gre->SetPointError(7,0,0.02186276);
   gre->SetPoint(8,245,-0.3457418);
   gre->SetPointError(8,0,0.02465688);
   gre->SetPoint(9,255,-0.321704);
   gre->SetPointError(9,0,0.02651207);
   
   TH1F *Graph_gr_T20_20_28_160121 = new TH1F("Graph_gr_T20_20_28_160121","",100,156,264);
   Graph_gr_T20_20_28_160121->SetMinimum(-0.418614);
   Graph_gr_T20_20_28_160121->SetMaximum(0.1205217);
   Graph_gr_T20_20_28_160121->SetDirectory(0);
   Graph_gr_T20_20_28_160121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_160121->SetLineColor(ci);
   Graph_gr_T20_20_28_160121->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_160121->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_160121->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_160121->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_160121->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_160121->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_160121->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_160121->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_160121->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_160121->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_160121->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_160121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_160121);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
