{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:03:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(130,-0.1504177,280,0.106194);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05017713);
   gre->SetPointError(0,0,0.05747194);
   gre->SetPoint(1,165,0.02319112);
   gre->SetPointError(1,0,0.03256005);
   gre->SetPoint(2,175,0.006660472);
   gre->SetPointError(2,0,0.02702151);
   gre->SetPoint(3,185,0.0001007255);
   gre->SetPointError(3,0,0.02065916);
   gre->SetPoint(4,195,-0.001161616);
   gre->SetPointError(4,0,0.01581657);
   gre->SetPoint(5,205,0.01697766);
   gre->SetPointError(5,0,0.01334398);
   gre->SetPoint(6,215,0.008268919);
   gre->SetPointError(6,0,0.0112753);
   gre->SetPoint(7,225,0.01364673);
   gre->SetPointError(7,0,0.01020381);
   gre->SetPoint(8,235,0.004066508);
   gre->SetPointError(8,0,0.01026635);
   gre->SetPoint(9,245,0.0001299328);
   gre->SetPointError(9,0,0.011715);
   gre->SetPoint(10,255,0.04800559);
   gre->SetPointError(10,0,0.01541979);
   
   TH1F *Graph_gr_ImT22_20_28_18042 = new TH1F("Graph_gr_ImT22_20_28_18042","",100,145,265);
   Graph_gr_ImT22_20_28_18042->SetMinimum(-0.1247565);
   Graph_gr_ImT22_20_28_18042->SetMaximum(0.08053283);
   Graph_gr_ImT22_20_28_18042->SetDirectory(0);
   Graph_gr_ImT22_20_28_18042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_28_18042->SetLineColor(ci);
   Graph_gr_ImT22_20_28_18042->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18042->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_18042->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18042->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_18042->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_18042->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_18042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_28_18042);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
