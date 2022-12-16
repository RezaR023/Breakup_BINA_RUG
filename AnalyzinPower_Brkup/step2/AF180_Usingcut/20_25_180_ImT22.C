{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:53:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1058357,277.5,0.09899035);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.03249543);
   gre->SetPointError(0,0,0.03920257);
   gre->SetPoint(1,175,-0.02548809);
   gre->SetPointError(1,0,0.03752269);
   gre->SetPoint(2,185,0.005588673);
   gre->SetPointError(2,0,0.02782053);
   gre->SetPoint(3,195,0.005589874);
   gre->SetPointError(3,0,0.02446627);
   gre->SetPoint(4,205,0.04545492);
   gre->SetPointError(4,0,0.01939776);
   gre->SetPoint(5,215,0.0156992);
   gre->SetPointError(5,0,0.01504757);
   gre->SetPoint(6,225,-0.02753698);
   gre->SetPointError(6,0,0.0131612);
   gre->SetPoint(7,235,0.02089491);
   gre->SetPointError(7,0,0.01154923);
   gre->SetPoint(8,245,-0.01175069);
   gre->SetPointError(8,0,0.01093181);
   gre->SetPoint(9,255,0.03451503);
   gre->SetPointError(9,0,0.01191932);
   
   TH1F *Graph_gr_ImT22_20_25_18037 = new TH1F("Graph_gr_ImT22_20_25_18037","",100,156,264);
   Graph_gr_ImT22_20_25_18037->SetMinimum(-0.08535308);
   Graph_gr_ImT22_20_25_18037->SetMaximum(0.07850774);
   Graph_gr_ImT22_20_25_18037->SetDirectory(0);
   Graph_gr_ImT22_20_25_18037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_18037->SetLineColor(ci);
   Graph_gr_ImT22_20_25_18037->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18037->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_18037->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18037->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_18037->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18037->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_18037);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
