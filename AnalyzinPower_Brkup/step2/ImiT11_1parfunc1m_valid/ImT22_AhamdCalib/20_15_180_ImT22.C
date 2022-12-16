{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:37:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(140,-0.1227637,290,0.1412112);
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
   gre->SetPoint(0,165,0.04960657);
   gre->SetPointError(0,0,0.04760884);
   gre->SetPoint(1,175,0.001600131);
   gre->SetPointError(1,0,0.05307721);
   gre->SetPoint(2,185,0.005245169);
   gre->SetPointError(2,0,0.04545445);
   gre->SetPoint(3,195,-0.02194384);
   gre->SetPointError(3,0,0.04065217);
   gre->SetPoint(4,205,-0.01524909);
   gre->SetPointError(4,0,0.03307772);
   gre->SetPoint(5,215,0.04103287);
   gre->SetPointError(5,0,0.03075701);
   gre->SetPoint(6,225,-0.0170453);
   gre->SetPointError(6,0,0.02498073);
   gre->SetPoint(7,235,-0.006404146);
   gre->SetPointError(7,0,0.02223343);
   gre->SetPoint(8,245,-0.06096466);
   gre->SetPointError(8,0,0.01780325);
   gre->SetPoint(9,255,-0.04948743);
   gre->SetPointError(9,0,0.01395812);
   gre->SetPoint(10,265,-0.004416127);
   gre->SetPointError(10,0,0.01249962);
   
   TH1F *Graph_gr_ImT22_20_15_18054 = new TH1F("Graph_gr_ImT22_20_15_18054","",100,155,275);
   Graph_gr_ImT22_20_15_18054->SetMinimum(-0.09636624);
   Graph_gr_ImT22_20_15_18054->SetMaximum(0.1148137);
   Graph_gr_ImT22_20_15_18054->SetDirectory(0);
   Graph_gr_ImT22_20_15_18054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_18054->SetLineColor(ci);
   Graph_gr_ImT22_20_15_18054->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18054->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_18054->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18054->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_18054->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_18054->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_18054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_18054);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
