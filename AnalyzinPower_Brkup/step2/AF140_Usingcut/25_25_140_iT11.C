{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:06:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.3727617,255,0.01582957);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.08665364);
   gre->SetPointError(0,0,0.03771799);
   gre->SetPoint(1,165,-0.1714375);
   gre->SetPointError(1,0,0.03949686);
   gre->SetPoint(2,175,-0.1642378);
   gre->SetPointError(2,0,0.04096625);
   gre->SetPoint(3,185,-0.1218197);
   gre->SetPointError(3,0,0.04339993);
   gre->SetPoint(4,195,-0.2647855);
   gre->SetPointError(4,0,0.04321099);
   gre->SetPoint(5,205,-0.1550165);
   gre->SetPointError(5,0,0.0495221);
   gre->SetPoint(6,215,-0.176615);
   gre->SetPointError(6,0,0.04299694);
   gre->SetPoint(7,225,-0.1474277);
   gre->SetPointError(7,0,0.04277638);
   gre->SetPoint(8,235,-0.1879859);
   gre->SetPointError(8,0,0.03713307);
   
   TH1F *Graph_gr_iT11_25_25_14031 = new TH1F("Graph_gr_iT11_25_25_14031","",100,147,243);
   Graph_gr_iT11_25_25_14031->SetMinimum(-0.3339026);
   Graph_gr_iT11_25_25_14031->SetMaximum(-0.02302956);
   Graph_gr_iT11_25_25_14031->SetDirectory(0);
   Graph_gr_iT11_25_25_14031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_25_14031->SetLineColor(ci);
   Graph_gr_iT11_25_25_14031->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_14031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_14031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_14031->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_14031->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_14031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_14031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_14031->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_14031->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_14031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_14031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_14031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_25_14031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
