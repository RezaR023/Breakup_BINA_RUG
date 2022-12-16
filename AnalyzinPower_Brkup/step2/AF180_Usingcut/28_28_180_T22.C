{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:44:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2471461,257.5,-0.05255473);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1382198);
   gre->SetPointError(0,0,0.04614288);
   gre->SetPoint(1,155,-0.1757325);
   gre->SetPointError(1,0,0.03898173);
   gre->SetPoint(2,165,-0.1524896);
   gre->SetPointError(2,0,0.03568852);
   gre->SetPoint(3,175,-0.1669498);
   gre->SetPointError(3,0,0.02926915);
   gre->SetPoint(4,185,-0.1096478);
   gre->SetPointError(4,0,0.02074228);
   gre->SetPoint(5,195,-0.105523);
   gre->SetPointError(5,0,0.01357627);
   gre->SetPoint(6,205,-0.09358987);
   gre->SetPointError(6,0,0.008603247);
   gre->SetPoint(7,215,-0.09573264);
   gre->SetPointError(7,0,0.005723524);
   gre->SetPoint(8,225,-0.1070397);
   gre->SetPointError(8,0,0.004536969);
   gre->SetPoint(9,235,-0.1133455);
   gre->SetPointError(9,0,0.007717152);
   
   TH1F *Graph_gr_T22_28_28_18081 = new TH1F("Graph_gr_T22_28_28_18081","",100,136,244);
   Graph_gr_T22_28_28_18081->SetMinimum(-0.2276869);
   Graph_gr_T22_28_28_18081->SetMaximum(-0.07201387);
   Graph_gr_T22_28_28_18081->SetDirectory(0);
   Graph_gr_T22_28_28_18081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_18081->SetLineColor(ci);
   Graph_gr_T22_28_28_18081->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18081->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18081->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18081->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18081->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18081->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18081->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18081->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18081->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18081->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18081->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_18081);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
