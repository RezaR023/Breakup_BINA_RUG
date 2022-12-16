{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:50:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(145,-0.2053317,265,0.08821616);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1247206);
   gre->SetPointError(0,0,0.03168646);
   gre->SetPoint(1,175,-0.1069785);
   gre->SetPointError(1,0,0.0352042);
   gre->SetPoint(2,185,-0.06512184);
   gre->SetPointError(2,0,0.03445816);
   gre->SetPoint(3,195,-0.02540852);
   gre->SetPointError(3,0,0.03357213);
   gre->SetPoint(4,205,-0.03365426);
   gre->SetPointError(4,0,0.02851831);
   gre->SetPoint(5,215,0.007779618);
   gre->SetPointError(5,0,0.0315119);
   gre->SetPoint(6,225,-0.04377353);
   gre->SetPointError(6,0,0.0288497);
   gre->SetPoint(7,235,-0.06225804);
   gre->SetPointError(7,0,0.0293034);
   gre->SetPoint(8,245,0.0004068475);
   gre->SetPointError(8,0,0.02695997);
   
   TH1F *Graph_gr_ImT22_20_28_14020 = new TH1F("Graph_gr_ImT22_20_28_14020","",100,157,253);
   Graph_gr_ImT22_20_28_14020->SetMinimum(-0.1759769);
   Graph_gr_ImT22_20_28_14020->SetMaximum(0.05886137);
   Graph_gr_ImT22_20_28_14020->SetDirectory(0);
   Graph_gr_ImT22_20_28_14020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_28_14020->SetLineColor(ci);
   Graph_gr_ImT22_20_28_14020->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_14020->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_14020->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_14020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_14020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_28_14020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
