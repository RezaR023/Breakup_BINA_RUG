{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:56:45 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(132.5,-0.1075709,267.5,0.1061778);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.001522733);
   gre->SetPointError(0,0,0.03504215);
   gre->SetPoint(1,165,-0.01985099);
   gre->SetPointError(1,0,0.02920589);
   gre->SetPoint(2,175,-0.04456023);
   gre->SetPointError(2,0,0.02738588);
   gre->SetPoint(3,185,-0.04138661);
   gre->SetPointError(3,0,0.02664595);
   gre->SetPoint(4,195,0.04188677);
   gre->SetPointError(4,0,0.02866621);
   gre->SetPoint(5,205,-0.01066323);
   gre->SetPointError(5,0,0.02730101);
   gre->SetPoint(6,215,0.03098815);
   gre->SetPointError(6,0,0.0298307);
   gre->SetPoint(7,225,0.003543606);
   gre->SetPointError(7,0,0.03118108);
   gre->SetPoint(8,235,0.00916582);
   gre->SetPointError(8,0,0.03005768);
   gre->SetPoint(9,245,-0.01262635);
   gre->SetPointError(9,0,0.0278152);
   
   TH1F *Graph_gr_ImT22_20_25_14088 = new TH1F("Graph_gr_ImT22_20_25_14088","",100,146,254);
   Graph_gr_ImT22_20_25_14088->SetMinimum(-0.08619601);
   Graph_gr_ImT22_20_25_14088->SetMaximum(0.08480289);
   Graph_gr_ImT22_20_25_14088->SetDirectory(0);
   Graph_gr_ImT22_20_25_14088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_14088->SetLineColor(ci);
   Graph_gr_ImT22_20_25_14088->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14088->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_14088->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14088->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_14088->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_14088->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_14088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_14088);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
