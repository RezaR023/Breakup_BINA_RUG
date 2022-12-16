{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:07:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.3754587,287.5,0.3303182);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.106018);
   gre->SetPointError(0,0,0.03822488);
   gre->SetPoint(1,185,0.1441759);
   gre->SetPointError(1,0,0.03051031);
   gre->SetPoint(2,195,0.1852149);
   gre->SetPointError(2,0,0.02747377);
   gre->SetPoint(3,205,0.06315446);
   gre->SetPointError(3,0,0.02447122);
   gre->SetPoint(4,215,-0.008660765);
   gre->SetPointError(4,0,0.02386547);
   gre->SetPoint(5,225,-0.03658571);
   gre->SetPointError(5,0,0.02549867);
   gre->SetPoint(6,235,-0.0689956);
   gre->SetPointError(6,0,0.02838905);
   gre->SetPoint(7,245,-0.2029423);
   gre->SetPointError(7,0,0.03108226);
   gre->SetPoint(8,255,-0.2221546);
   gre->SetPointError(8,0,0.03567455);
   gre->SetPoint(9,265,-0.20917);
   gre->SetPointError(9,0,0.03869746);
   
   TH1F *Graph_gr_T20_15_28_160101 = new TH1F("Graph_gr_T20_15_28_160101","",100,166,274);
   Graph_gr_T20_15_28_160101->SetMinimum(-0.304881);
   Graph_gr_T20_15_28_160101->SetMaximum(0.2597405);
   Graph_gr_T20_15_28_160101->SetDirectory(0);
   Graph_gr_T20_15_28_160101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_160101->SetLineColor(ci);
   Graph_gr_T20_15_28_160101->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_160101->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_160101->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_160101->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_160101->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_160101->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_160101->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_160101->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_160101->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_160101->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_160101->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_160101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_160101);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
