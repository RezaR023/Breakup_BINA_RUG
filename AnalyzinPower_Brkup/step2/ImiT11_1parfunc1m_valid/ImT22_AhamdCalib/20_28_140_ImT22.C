{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:57:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(145,-0.1548829,265,0.08605485);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.08900068);
   gre->SetPointError(0,0,0.02572589);
   gre->SetPoint(1,175,-0.06429235);
   gre->SetPointError(1,0,0.0254711);
   gre->SetPoint(2,185,-0.03475756);
   gre->SetPointError(2,0,0.02449056);
   gre->SetPoint(3,195,-0.007433225);
   gre->SetPointError(3,0,0.02370514);
   gre->SetPoint(4,205,0.0200452);
   gre->SetPointError(4,0,0.02585337);
   gre->SetPoint(5,215,-0.04554617);
   gre->SetPointError(5,0,0.02525032);
   gre->SetPoint(6,225,-0.046179);
   gre->SetPointError(6,0,0.02704223);
   gre->SetPoint(7,235,-0.006570105);
   gre->SetPointError(7,0,0.02735954);
   gre->SetPoint(8,245,-0.01071711);
   gre->SetPointError(8,0,0.02618589);
   
   TH1F *Graph_gr_ImT22_20_28_14089 = new TH1F("Graph_gr_ImT22_20_28_14089","",100,157,253);
   Graph_gr_ImT22_20_28_14089->SetMinimum(-0.1307891);
   Graph_gr_ImT22_20_28_14089->SetMaximum(0.06196108);
   Graph_gr_ImT22_20_28_14089->SetDirectory(0);
   Graph_gr_ImT22_20_28_14089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_28_14089->SetLineColor(ci);
   Graph_gr_ImT22_20_28_14089->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14089->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_14089->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14089->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_14089->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14089->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_28_14089);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
