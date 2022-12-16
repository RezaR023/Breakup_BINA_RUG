{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:17:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.1512683,257.5,0.08169696);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.007848339);
   gre->SetPointError(0,0,0.03502108);
   gre->SetPoint(1,155,-0.08031497);
   gre->SetPointError(1,0,0.03212578);
   gre->SetPoint(2,165,0.01243511);
   gre->SetPointError(2,0,0.0254024);
   gre->SetPoint(3,175,-0.01952542);
   gre->SetPointError(3,0,0.02064908);
   gre->SetPoint(4,185,0.02669131);
   gre->SetPointError(4,0,0.01504914);
   gre->SetPoint(5,195,-0.01248176);
   gre->SetPointError(5,0,0.01026578);
   gre->SetPoint(6,205,-0.005708912);
   gre->SetPointError(6,0,0.007517501);
   gre->SetPoint(7,215,0.01489847);
   gre->SetPointError(7,0,0.00626245);
   gre->SetPoint(8,225,0.004844194);
   gre->SetPointError(8,0,0.006619682);
   gre->SetPoint(9,235,-0.005971746);
   gre->SetPointError(9,0,0.009444945);
   
   TH1F *Graph_gr_ImT22_25_28_18061 = new TH1F("Graph_gr_ImT22_25_28_18061","",100,136,244);
   Graph_gr_ImT22_25_28_18061->SetMinimum(-0.1279718);
   Graph_gr_ImT22_25_28_18061->SetMaximum(0.05840043);
   Graph_gr_ImT22_25_28_18061->SetDirectory(0);
   Graph_gr_ImT22_25_28_18061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_18061->SetLineColor(ci);
   Graph_gr_ImT22_25_28_18061->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18061->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_18061->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18061->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_18061->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18061->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_18061);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
