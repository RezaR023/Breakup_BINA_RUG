{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:59:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.3312831,257.5,0.0950426);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.03133043);
   gre->SetPointError(0,0,0.04346459);
   gre->SetPoint(1,155,-0.01124503);
   gre->SetPointError(1,0,0.03523335);
   gre->SetPoint(2,165,-0.02163572);
   gre->SetPointError(2,0,0.03345127);
   gre->SetPoint(3,175,-0.03679274);
   gre->SetPointError(3,0,0.0342333);
   gre->SetPoint(4,185,-0.06249547);
   gre->SetPointError(4,0,0.03561334);
   gre->SetPoint(5,195,-0.1213853);
   gre->SetPointError(5,0,0.03729043);
   gre->SetPoint(6,205,-0.1437036);
   gre->SetPointError(6,0,0.0368635);
   gre->SetPoint(7,215,-0.2129901);
   gre->SetPointError(7,0,0.03661376);
   gre->SetPoint(8,225,-0.1778411);
   gre->SetPointError(8,0,0.02915091);
   gre->SetPoint(9,235,-0.2244759);
   gre->SetPointError(9,0,0.03575295);
   
   TH1F *Graph_gr_ImT22_28_15_14094 = new TH1F("Graph_gr_ImT22_28_15_14094","",100,136,244);
   Graph_gr_ImT22_28_15_14094->SetMinimum(-0.2886505);
   Graph_gr_ImT22_28_15_14094->SetMaximum(0.05241003);
   Graph_gr_ImT22_28_15_14094->SetDirectory(0);
   Graph_gr_ImT22_28_15_14094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_14094->SetLineColor(ci);
   Graph_gr_ImT22_28_15_14094->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14094->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_14094->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14094->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_14094->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_14094->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_14094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_14094);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
