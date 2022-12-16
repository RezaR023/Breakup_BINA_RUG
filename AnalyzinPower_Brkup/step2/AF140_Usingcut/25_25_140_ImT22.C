{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:08:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.1457654,255,0.07346076);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01526086);
   gre->SetPointError(0,0,0.0396149);
   gre->SetPoint(1,165,-0.05130142);
   gre->SetPointError(1,0,0.03617289);
   gre->SetPoint(2,175,-0.06748607);
   gre->SetPointError(2,0,0.04144193);
   gre->SetPoint(3,185,-0.06612979);
   gre->SetPointError(3,0,0.04309787);
   gre->SetPoint(4,195,-0.03915141);
   gre->SetPointError(4,0,0.03927312);
   gre->SetPoint(5,205,-0.004919141);
   gre->SetPointError(5,0,0.04184222);
   gre->SetPoint(6,215,-0.03411981);
   gre->SetPointError(6,0,0.03693091);
   gre->SetPoint(7,225,-0.0170761);
   gre->SetPointError(7,0,0.03373118);
   gre->SetPoint(8,235,-0.04733428);
   gre->SetPointError(8,0,0.02818202);
   
   TH1F *Graph_gr_ImT22_25_25_14035 = new TH1F("Graph_gr_ImT22_25_25_14035","",100,147,243);
   Graph_gr_ImT22_25_25_14035->SetMinimum(-0.1238427);
   Graph_gr_ImT22_25_25_14035->SetMaximum(0.05153815);
   Graph_gr_ImT22_25_25_14035->SetDirectory(0);
   Graph_gr_ImT22_25_25_14035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_14035->SetLineColor(ci);
   Graph_gr_ImT22_25_25_14035->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_14035->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_14035->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_14035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_14035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_14035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
