{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:16:42 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(152.5,-21.20806,287.5,306.2037);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,38.84542);
   gre->SetPointError(0,0,1.035101);
   gre->SetPoint(1,185,34.47186);
   gre->SetPointError(1,0,0.9076184);
   gre->SetPoint(2,195,34.24544);
   gre->SetPointError(2,0,0.8848756);
   gre->SetPoint(3,205,42.26581);
   gre->SetPointError(3,0,0.9863988);
   gre->SetPoint(4,215,53.57593);
   gre->SetPointError(4,0,1.094704);
   gre->SetPoint(5,225,67.64575);
   gre->SetPointError(5,0,1.227399);
   gre->SetPoint(6,235,88.09873);
   gre->SetPointError(6,0,1.392544);
   gre->SetPoint(7,245,116.4265);
   gre->SetPointError(7,0,1.594395);
   gre->SetPoint(8,255,164.0902);
   gre->SetPointError(8,0,1.896662);
   gre->SetPoint(9,265,249.306);
   gre->SetPointError(9,0,2.329093);
   
   TH1F *Graph_gr_crsection_20_20_16023 = new TH1F("Graph_gr_crsection_20_20_16023","",100,166,274);
   Graph_gr_crsection_20_20_16023->SetMinimum(11.53312);
   Graph_gr_crsection_20_20_16023->SetMaximum(273.4625);
   Graph_gr_crsection_20_20_16023->SetDirectory(0);
   Graph_gr_crsection_20_20_16023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_20_20_16023->SetLineColor(ci);
   Graph_gr_crsection_20_20_16023->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_16023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_16023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_16023->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_16023->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_16023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_16023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_16023->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_20_20_16023->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_20_20_16023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_20_20_16023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_20_20_16023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_20_20_16023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
