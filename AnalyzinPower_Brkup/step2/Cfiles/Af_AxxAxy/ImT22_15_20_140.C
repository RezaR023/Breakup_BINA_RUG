{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:40:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2065326,310,0.2534797);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1026804);
   gre->SetPointError(0,0,0.02718351);
   gre->SetPoint(1,145,-0.1026804);
   gre->SetPointError(1,0,0.02718351);
   gre->SetPoint(2,155,-0.1026804);
   gre->SetPointError(2,0,0.02718351);
   gre->SetPoint(3,165,0.09006687);
   gre->SetPointError(3,0,0.08674413);
   gre->SetPoint(4,175,-0.0626765);
   gre->SetPointError(4,0,0.04639017);
   gre->SetPoint(5,185,0.006415243);
   gre->SetPointError(5,0,0.03335618);
   gre->SetPoint(6,195,0.01969867);
   gre->SetPointError(6,0,0.03024813);
   gre->SetPoint(7,205,-0.01283762);
   gre->SetPointError(7,0,0.02785987);
   gre->SetPoint(8,215,-0.0287981);
   gre->SetPointError(8,0,0.02874592);
   gre->SetPoint(9,225,0.02519094);
   gre->SetPointError(9,0,0.02849107);
   gre->SetPoint(10,235,0.02693709);
   gre->SetPointError(10,0,0.02831566);
   gre->SetPoint(11,245,0.0517621);
   gre->SetPointError(11,0,0.03320619);
   gre->SetPoint(12,255,-0.04716429);
   gre->SetPointError(12,0,0.03009478);
   gre->SetPoint(13,265,-0.05265388);
   gre->SetPointError(13,0,0.02690646);
   gre->SetPoint(14,275,-0.009780726);
   gre->SetPointError(14,0,0.03025775);
   
   TH1F *Graph_gr_ImT22_15_20_14020 = new TH1F("Graph_gr_ImT22_15_20_14020","",100,121,289);
   Graph_gr_ImT22_15_20_14020->SetMinimum(-0.1605314);
   Graph_gr_ImT22_15_20_14020->SetMaximum(0.2074785);
   Graph_gr_ImT22_15_20_14020->SetDirectory(0);
   Graph_gr_ImT22_15_20_14020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_14020->SetLineColor(ci);
   Graph_gr_ImT22_15_20_14020->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_14020->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_14020->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_14020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_14020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_14020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
