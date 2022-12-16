{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:41:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.06335285,267.5,0.06823781);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.003379294);
   gre->SetPointError(0,0,0.03467703);
   gre->SetPoint(1,165,0.01151922);
   gre->SetPointError(1,0,0.03478682);
   gre->SetPoint(2,175,-0.009702935);
   gre->SetPointError(2,0,0.03171813);
   gre->SetPoint(3,185,-0.01129124);
   gre->SetPointError(3,0,0.02627858);
   gre->SetPoint(4,195,-0.007150048);
   gre->SetPointError(4,0,0.01907569);
   gre->SetPoint(5,205,-0.01564875);
   gre->SetPointError(5,0,0.01343727);
   gre->SetPoint(6,215,0.008935992);
   gre->SetPointError(6,0,0.009695271);
   gre->SetPoint(7,225,-0.002010907);
   gre->SetPointError(7,0,0.00740538);
   gre->SetPoint(8,235,0.0006275708);
   gre->SetPointError(8,0,0.007008329);
   gre->SetPoint(9,245,-0.007594043);
   gre->SetPointError(9,0,0.009116315);
   
   TH1F *Graph_gr_ImT22_25_25_18060 = new TH1F("Graph_gr_ImT22_25_25_18060","",100,146,254);
   Graph_gr_ImT22_25_25_18060->SetMinimum(-0.05019378);
   Graph_gr_ImT22_25_25_18060->SetMaximum(0.05507875);
   Graph_gr_ImT22_25_25_18060->SetDirectory(0);
   Graph_gr_ImT22_25_25_18060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_18060->SetLineColor(ci);
   Graph_gr_ImT22_25_25_18060->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18060->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_18060->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18060->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_18060->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_18060->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_18060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_18060);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
