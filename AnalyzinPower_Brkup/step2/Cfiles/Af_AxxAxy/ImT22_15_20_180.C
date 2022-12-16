{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:30:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2136551,310,0.1515327);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02820641);
   gre->SetPointError(0,0,0.02092536);
   gre->SetPoint(1,145,-0.02820641);
   gre->SetPointError(1,0,0.02092536);
   gre->SetPoint(2,155,-0.01688502);
   gre->SetPointError(2,0,0.07431153);
   gre->SetPoint(3,165,-0.01688502);
   gre->SetPointError(3,0,0.07431153);
   gre->SetPoint(4,175,-0.08979299);
   gre->SetPointError(4,0,0.06299747);
   gre->SetPoint(5,185,-0.01073117);
   gre->SetPointError(5,0,0.03849176);
   gre->SetPoint(6,195,-0.01073284);
   gre->SetPointError(6,0,0.03265752);
   gre->SetPoint(7,205,-0.002336956);
   gre->SetPointError(7,0,0.0275811);
   gre->SetPoint(8,215,0.06523183);
   gre->SetPointError(8,0,0.02543624);
   gre->SetPoint(9,225,0.01311794);
   gre->SetPointError(9,0,0.02465648);
   gre->SetPoint(10,235,0.05611856);
   gre->SetPointError(10,0,0.02402499);
   gre->SetPoint(11,245,0.004083098);
   gre->SetPointError(11,0,0.02221229);
   gre->SetPoint(12,255,-0.01158658);
   gre->SetPointError(12,0,0.02179256);
   gre->SetPoint(13,265,-0.01910839);
   gre->SetPointError(13,0,0.02234761);
   gre->SetPoint(14,275,-0.04775585);
   gre->SetPointError(14,0,0.0203849);
   
   TH1F *Graph_gr_ImT22_15_20_1804 = new TH1F("Graph_gr_ImT22_15_20_1804","",100,121,289);
   Graph_gr_ImT22_15_20_1804->SetMinimum(-0.1771363);
   Graph_gr_ImT22_15_20_1804->SetMaximum(0.1150139);
   Graph_gr_ImT22_15_20_1804->SetDirectory(0);
   Graph_gr_ImT22_15_20_1804->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_1804->SetLineColor(ci);
   Graph_gr_ImT22_15_20_1804->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_1804->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_1804->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_1804->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_1804->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_1804->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_1804->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_1804);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
