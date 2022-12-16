{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:50:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.3709535,277.5,-0.01939004);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1268557);
   gre->SetPointError(0,0,0.04887175);
   gre->SetPoint(1,175,-0.2015548);
   gre->SetPointError(1,0,0.04216892);
   gre->SetPoint(2,185,-0.2764295);
   gre->SetPointError(2,0,0.03460928);
   gre->SetPoint(3,195,-0.2636892);
   gre->SetPointError(3,0,0.02800027);
   gre->SetPoint(4,205,-0.252034);
   gre->SetPointError(4,0,0.02354715);
   gre->SetPoint(5,215,-0.256787);
   gre->SetPointError(5,0,0.02016762);
   gre->SetPoint(6,225,-0.2946658);
   gre->SetPointError(6,0,0.01769382);
   gre->SetPoint(7,235,-0.2833435);
   gre->SetPointError(7,0,0.01564547);
   gre->SetPoint(8,245,-0.2782853);
   gre->SetPointError(8,0,0.01525725);
   gre->SetPoint(9,255,-0.2672931);
   gre->SetPointError(9,0,0.0165833);
   
   TH1F *Graph_gr_iT11_20_25_18033 = new TH1F("Graph_gr_iT11_20_25_18033","",100,156,264);
   Graph_gr_iT11_20_25_18033->SetMinimum(-0.3357971);
   Graph_gr_iT11_20_25_18033->SetMaximum(-0.05454639);
   Graph_gr_iT11_20_25_18033->SetDirectory(0);
   Graph_gr_iT11_20_25_18033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_25_18033->SetLineColor(ci);
   Graph_gr_iT11_20_25_18033->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_18033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_18033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_18033->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_18033->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_18033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_18033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_18033->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_18033->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_18033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_18033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_18033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_25_18033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
