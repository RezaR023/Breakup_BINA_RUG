{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:15:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.6223369,277.5,0.2706844);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.06494954);
   gre->SetPointError(0,0,0.05689795);
   gre->SetPoint(1,175,0.0007971905);
   gre->SetPointError(1,0,0.05290758);
   gre->SetPoint(2,185,-0.07242555);
   gre->SetPointError(2,0,0.04623271);
   gre->SetPoint(3,195,-0.1057169);
   gre->SetPointError(3,0,0.0387914);
   gre->SetPoint(4,205,-0.2194151);
   gre->SetPointError(4,0,0.03240749);
   gre->SetPoint(5,215,-0.2629521);
   gre->SetPointError(5,0,0.02877598);
   gre->SetPoint(6,225,-0.3466114);
   gre->SetPointError(6,0,0.02584952);
   gre->SetPoint(7,235,-0.3634756);
   gre->SetPointError(7,0,0.02451264);
   gre->SetPoint(8,245,-0.4502764);
   gre->SetPointError(8,0,0.02322361);
   gre->SetPoint(9,255,-0.4134429);
   gre->SetPointError(9,0,0.02488249);
   
   TH1F *Graph_gr_T20_20_25_160116 = new TH1F("Graph_gr_T20_20_25_160116","",100,156,264);
   Graph_gr_T20_20_25_160116->SetMinimum(-0.5330348);
   Graph_gr_T20_20_25_160116->SetMaximum(0.1813822);
   Graph_gr_T20_20_25_160116->SetDirectory(0);
   Graph_gr_T20_20_25_160116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_25_160116->SetLineColor(ci);
   Graph_gr_T20_20_25_160116->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_160116->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_160116->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_160116->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_160116->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_160116->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_160116->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_160116->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_25_160116->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_25_160116->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_25_160116->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_25_160116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_25_160116);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
