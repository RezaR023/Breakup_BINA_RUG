{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:49:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.1031218,257.5,0.05788327);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.000153833);
   gre->SetPointError(0,0,0.02901935);
   gre->SetPoint(1,155,-0.02240879);
   gre->SetPointError(1,0,0.02643642);
   gre->SetPoint(2,165,-0.02330267);
   gre->SetPointError(2,0,0.02572775);
   gre->SetPoint(3,175,-0.05084393);
   gre->SetPointError(3,0,0.02544366);
   gre->SetPoint(4,185,0.007657627);
   gre->SetPointError(4,0,0.02339147);
   gre->SetPoint(5,195,-0.007333237);
   gre->SetPointError(5,0,0.0186029);
   gre->SetPoint(6,205,0.00696566);
   gre->SetPointError(6,0,0.01549384);
   gre->SetPoint(7,215,-0.01251928);
   gre->SetPointError(7,0,0.01290975);
   gre->SetPoint(8,225,-0.02277663);
   gre->SetPointError(8,0,0.01212517);
   gre->SetPoint(9,235,-0.002443649);
   gre->SetPointError(9,0,0.01257207);
   
   TH1F *Graph_gr_ImT22_25_25_16076 = new TH1F("Graph_gr_ImT22_25_25_16076","",100,136,244);
   Graph_gr_ImT22_25_25_16076->SetMinimum(-0.08702126);
   Graph_gr_ImT22_25_25_16076->SetMaximum(0.04178277);
   Graph_gr_ImT22_25_25_16076->SetDirectory(0);
   Graph_gr_ImT22_25_25_16076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_16076->SetLineColor(ci);
   Graph_gr_ImT22_25_25_16076->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_16076->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_16076->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_16076->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_16076->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_16076->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_16076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_16076);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
