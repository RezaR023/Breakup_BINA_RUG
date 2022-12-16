{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:20:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.3024095,267.5,-0.007924031);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1226625);
   gre->SetPointError(0,0,0.05577491);
   gre->SetPoint(1,165,-0.1680051);
   gre->SetPointError(1,0,0.05271563);
   gre->SetPoint(2,175,-0.1135368);
   gre->SetPointError(2,0,0.05653189);
   gre->SetPoint(3,185,-0.2037633);
   gre->SetPointError(3,0,0.04956532);
   gre->SetPoint(4,195,-0.1789604);
   gre->SetPointError(4,0,0.04105275);
   gre->SetPoint(5,205,-0.1262981);
   gre->SetPointError(5,0,0.03570216);
   gre->SetPoint(6,215,-0.1136622);
   gre->SetPointError(6,0,0.0282193);
   gre->SetPoint(7,225,-0.0994292);
   gre->SetPointError(7,0,0.02339948);
   gre->SetPoint(8,235,-0.1527255);
   gre->SetPointError(8,0,0.01824853);
   gre->SetPoint(9,245,-0.1655214);
   gre->SetPointError(9,0,0.01329076);
   
   TH1F *Graph_gr_T22_25_15_160127 = new TH1F("Graph_gr_T22_25_15_160127","",100,146,254);
   Graph_gr_T22_25_15_160127->SetMinimum(-0.272961);
   Graph_gr_T22_25_15_160127->SetMaximum(-0.03737258);
   Graph_gr_T22_25_15_160127->SetDirectory(0);
   Graph_gr_T22_25_15_160127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_15_160127->SetLineColor(ci);
   Graph_gr_T22_25_15_160127->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_160127->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_160127->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_160127->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_15_160127->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_160127->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_160127->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_160127->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_15_160127->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_15_160127->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_15_160127->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_15_160127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_15_160127);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
