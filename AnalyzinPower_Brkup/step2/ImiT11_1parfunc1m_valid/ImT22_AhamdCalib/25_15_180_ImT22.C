{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:40:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.1270405,267.5,0.09751441);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.007896148);
   gre->SetPointError(0,0,0.05219244);
   gre->SetPoint(1,165,-0.001253218);
   gre->SetPointError(1,0,0.05261332);
   gre->SetPoint(2,175,-0.02855889);
   gre->SetPointError(2,0,0.0487508);
   gre->SetPoint(3,185,-0.04805178);
   gre->SetPointError(3,0,0.04156294);
   gre->SetPoint(4,195,-0.04153165);
   gre->SetPointError(4,0,0.03416653);
   gre->SetPoint(5,205,-0.01917193);
   gre->SetPointError(5,0,0.02956134);
   gre->SetPoint(6,215,-0.03133586);
   gre->SetPointError(6,0,0.02428302);
   gre->SetPoint(7,225,-0.01663902);
   gre->SetPointError(7,0,0.02034924);
   gre->SetPoint(8,235,-0.03137547);
   gre->SetPointError(8,0,0.01516351);
   gre->SetPoint(9,245,-0.01844403);
   gre->SetPointError(9,0,0.01080528);
   
   TH1F *Graph_gr_ImT22_25_15_18058 = new TH1F("Graph_gr_ImT22_25_15_18058","",100,146,254);
   Graph_gr_ImT22_25_15_18058->SetMinimum(-0.104585);
   Graph_gr_ImT22_25_15_18058->SetMaximum(0.07505892);
   Graph_gr_ImT22_25_15_18058->SetDirectory(0);
   Graph_gr_ImT22_25_15_18058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_15_18058->SetLineColor(ci);
   Graph_gr_ImT22_25_15_18058->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18058->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_18058->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18058->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_15_18058->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_15_18058->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_15_18058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_15_18058);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
