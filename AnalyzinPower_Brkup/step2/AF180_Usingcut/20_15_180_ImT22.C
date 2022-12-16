{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:46:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.2237496,290,0.240141);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.07178698);
   gre->SetPointError(0,0,0.09103891);
   gre->SetPoint(1,175,-0.008723631);
   gre->SetPointError(1,0,0.06200795);
   gre->SetPoint(2,185,0.05284989);
   gre->SetPointError(2,0,0.06509605);
   gre->SetPoint(3,195,-0.09408253);
   gre->SetPointError(3,0,0.05235194);
   gre->SetPoint(4,205,-0.02090967);
   gre->SetPointError(4,0,0.04047661);
   gre->SetPoint(5,215,0.02350643);
   gre->SetPointError(5,0,0.03890039);
   gre->SetPoint(6,225,0.03853787);
   gre->SetPointError(6,0,0.03127923);
   gre->SetPoint(7,235,-0.04533746);
   gre->SetPointError(7,0,0.02572181);
   gre->SetPoint(8,245,-0.01699748);
   gre->SetPointError(8,0,0.02084365);
   gre->SetPoint(9,255,-0.05117427);
   gre->SetPointError(9,0,0.01532202);
   gre->SetPoint(10,265,-0.02466832);
   gre->SetPointError(10,0,0.01069558);
   
   TH1F *Graph_gr_ImT22_20_15_18027 = new TH1F("Graph_gr_ImT22_20_15_18027","",100,155,275);
   Graph_gr_ImT22_20_15_18027->SetMinimum(-0.1773605);
   Graph_gr_ImT22_20_15_18027->SetMaximum(0.1937519);
   Graph_gr_ImT22_20_15_18027->SetDirectory(0);
   Graph_gr_ImT22_20_15_18027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_18027->SetLineColor(ci);
   Graph_gr_ImT22_20_15_18027->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_18027->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_18027->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_18027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
