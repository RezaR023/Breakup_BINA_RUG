{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:52:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(112.5,-0.09196523,247.5,0.04467341);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.00766578);
   gre->SetPointError(0,0,0.02956608);
   gre->SetPoint(1,145,-0.02571743);
   gre->SetPointError(1,0,0.026214);
   gre->SetPoint(2,155,-0.01292746);
   gre->SetPointError(2,0,0.02707165);
   gre->SetPoint(3,165,-0.04541542);
   gre->SetPointError(3,0,0.0237767);
   gre->SetPoint(4,175,-0.0237369);
   gre->SetPointError(4,0,0.02152102);
   gre->SetPoint(5,185,-0.007317882);
   gre->SetPointError(5,0,0.01665543);
   gre->SetPoint(6,195,0.002700741);
   gre->SetPointError(6,0,0.01402705);
   gre->SetPoint(7,205,0.00731917);
   gre->SetPointError(7,0,0.0121443);
   gre->SetPoint(8,215,-0.003202768);
   gre->SetPointError(8,0,0.01205863);
   gre->SetPoint(9,225,-0.002637338);
   gre->SetPointError(9,0,0.0132343);
   
   TH1F *Graph_gr_ImT22_28_28_16081 = new TH1F("Graph_gr_ImT22_28_28_16081","",100,126,234);
   Graph_gr_ImT22_28_28_16081->SetMinimum(-0.07830136);
   Graph_gr_ImT22_28_28_16081->SetMaximum(0.03100954);
   Graph_gr_ImT22_28_28_16081->SetDirectory(0);
   Graph_gr_ImT22_28_28_16081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_16081->SetLineColor(ci);
   Graph_gr_ImT22_28_28_16081->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_16081->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_16081->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_16081->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_16081->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_16081->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_16081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_16081);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
