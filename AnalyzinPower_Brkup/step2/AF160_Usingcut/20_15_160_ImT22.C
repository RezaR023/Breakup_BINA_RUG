{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:12:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.247235,290,0.02793108);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1485653);
   gre->SetPointError(0,0,0.04841681);
   gre->SetPoint(1,175,-0.1064692);
   gre->SetPointError(1,0,0.04845332);
   gre->SetPoint(2,185,-0.08517281);
   gre->SetPointError(2,0,0.04697011);
   gre->SetPoint(3,195,-0.06088804);
   gre->SetPointError(3,0,0.0429581);
   gre->SetPoint(4,205,-0.1154151);
   gre->SetPointError(4,0,0.03751205);
   gre->SetPoint(5,215,-0.1338693);
   gre->SetPointError(5,0,0.03142313);
   gre->SetPoint(6,225,-0.1153996);
   gre->SetPointError(6,0,0.02694253);
   gre->SetPoint(7,235,-0.148929);
   gre->SetPointError(7,0,0.02277027);
   gre->SetPoint(8,245,-0.1555912);
   gre->SetPointError(8,0,0.01957179);
   gre->SetPoint(9,255,-0.1781057);
   gre->SetPointError(9,0,0.01515106);
   gre->SetPoint(10,265,-0.1889937);
   gre->SetPointError(10,0,0.01238036);
   
   TH1F *Graph_gr_ImT22_20_15_160108 = new TH1F("Graph_gr_ImT22_20_15_160108","",100,155,275);
   Graph_gr_ImT22_20_15_160108->SetMinimum(-0.2197184);
   Graph_gr_ImT22_20_15_160108->SetMaximum(0.0004144636);
   Graph_gr_ImT22_20_15_160108->SetDirectory(0);
   Graph_gr_ImT22_20_15_160108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_160108->SetLineColor(ci);
   Graph_gr_ImT22_20_15_160108->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_160108->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_160108->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_160108->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_160108->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_160108->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_160108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_160108);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
