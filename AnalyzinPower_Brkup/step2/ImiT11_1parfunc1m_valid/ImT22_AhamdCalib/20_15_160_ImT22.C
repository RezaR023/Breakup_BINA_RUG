{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:23:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(140,-0.2431704,290,0.01248566);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.09527916);
   gre->SetPointError(0,0,0.03780784);
   gre->SetPoint(1,175,-0.07656846);
   gre->SetPointError(1,0,0.03392774);
   gre->SetPoint(2,185,-0.08004185);
   gre->SetPointError(2,0,0.03490923);
   gre->SetPoint(3,195,-0.062717);
   gre->SetPointError(3,0,0.0325933);
   gre->SetPoint(4,205,-0.1125314);
   gre->SetPointError(4,0,0.02899196);
   gre->SetPoint(5,215,-0.1386293);
   gre->SetPointError(5,0,0.02618565);
   gre->SetPoint(6,225,-0.1416957);
   gre->SetPointError(6,0,0.02229094);
   gre->SetPoint(7,235,-0.1622849);
   gre->SetPointError(7,0,0.020377);
   gre->SetPoint(8,245,-0.1825639);
   gre->SetPointError(8,0,0.01761069);
   gre->SetPoint(9,255,-0.1863938);
   gre->SetPointError(9,0,0.01416729);
   gre->SetPoint(10,265,-0.1796881);
   gre->SetPointError(10,0,0.01535233);
   
   TH1F *Graph_gr_ImT22_20_15_16070 = new TH1F("Graph_gr_ImT22_20_15_16070","",100,155,275);
   Graph_gr_ImT22_20_15_16070->SetMinimum(-0.2176048);
   Graph_gr_ImT22_20_15_16070->SetMaximum(-0.01307996);
   Graph_gr_ImT22_20_15_16070->SetDirectory(0);
   Graph_gr_ImT22_20_15_16070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_16070->SetLineColor(ci);
   Graph_gr_ImT22_20_15_16070->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_16070->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_16070->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_16070->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_16070->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_16070->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_16070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_16070);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
