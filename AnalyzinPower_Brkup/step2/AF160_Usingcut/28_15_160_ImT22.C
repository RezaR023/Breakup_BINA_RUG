{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:30:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2594845,257.5,0.09853903);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.07333105);
   gre->SetPointError(0,0,0.06372028);
   gre->SetPoint(1,155,-0.01504002);
   gre->SetPointError(1,0,0.05390845);
   gre->SetPoint(2,165,-0.06216292);
   gre->SetPointError(2,0,0.05484738);
   gre->SetPoint(3,175,-0.02553036);
   gre->SetPointError(3,0,0.04638909);
   gre->SetPoint(4,185,-0.07519054);
   gre->SetPointError(4,0,0.04137655);
   gre->SetPoint(5,195,-0.04814753);
   gre->SetPointError(5,0,0.03446623);
   gre->SetPoint(6,205,-0.09979947);
   gre->SetPointError(6,0,0.0301984);
   gre->SetPoint(7,215,-0.1406855);
   gre->SetPointError(7,0,0.02531777);
   gre->SetPoint(8,225,-0.1485559);
   gre->SetPointError(8,0,0.02045209);
   gre->SetPoint(9,235,-0.1852625);
   gre->SetPointError(9,0,0.01455143);
   
   TH1F *Graph_gr_ImT22_28_15_160148 = new TH1F("Graph_gr_ImT22_28_15_160148","",100,136,244);
   Graph_gr_ImT22_28_15_160148->SetMinimum(-0.2236822);
   Graph_gr_ImT22_28_15_160148->SetMaximum(0.06273667);
   Graph_gr_ImT22_28_15_160148->SetDirectory(0);
   Graph_gr_ImT22_28_15_160148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_160148->SetLineColor(ci);
   Graph_gr_ImT22_28_15_160148->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_160148->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_160148->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_160148->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_160148->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_160148->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_160148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_160148);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
