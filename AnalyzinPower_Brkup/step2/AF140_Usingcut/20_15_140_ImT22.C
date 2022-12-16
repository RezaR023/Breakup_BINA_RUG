{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:37:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.3544454,277.5,0.1564488);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.03747136);
   gre->SetPointError(0,0,0.07167147);
   gre->SetPoint(1,175,-0.02327048);
   gre->SetPointError(1,0,0.0442392);
   gre->SetPoint(2,185,0.01529043);
   gre->SetPointError(2,0,0.05600933);
   gre->SetPoint(3,195,0.001849964);
   gre->SetPointError(3,0,0.05383447);
   gre->SetPoint(4,205,-0.09994863);
   gre->SetPointError(4,0,0.05166638);
   gre->SetPoint(5,215,-0.09711074);
   gre->SetPointError(5,0,0.04568963);
   gre->SetPoint(6,225,-0.1874814);
   gre->SetPointError(6,0,0.04382522);
   gre->SetPoint(7,235,-0.2030603);
   gre->SetPointError(7,0,0.03592143);
   gre->SetPoint(8,245,-0.2109029);
   gre->SetPointError(8,0,0.03639529);
   gre->SetPoint(9,255,-0.2389653);
   gre->SetPointError(9,0,0.03033106);
   
   TH1F *Graph_gr_ImT22_20_15_1405 = new TH1F("Graph_gr_ImT22_20_15_1405","",100,156,264);
   Graph_gr_ImT22_20_15_1405->SetMinimum(-0.303356);
   Graph_gr_ImT22_20_15_1405->SetMaximum(0.1053594);
   Graph_gr_ImT22_20_15_1405->SetDirectory(0);
   Graph_gr_ImT22_20_15_1405->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_1405->SetLineColor(ci);
   Graph_gr_ImT22_20_15_1405->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_1405->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_1405->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_1405->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_1405->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_1405->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_1405->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_1405);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
