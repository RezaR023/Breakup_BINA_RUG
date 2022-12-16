{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:40:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.3689382,297.5,0.1789035);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.09903187);
   gre->SetPointError(0,0,0.05342302);
   gre->SetPoint(1,195,-0.07542193);
   gre->SetPointError(1,0,0.05072649);
   gre->SetPoint(2,205,-0.0450029);
   gre->SetPointError(2,0,0.04836101);
   gre->SetPoint(3,215,0.04977081);
   gre->SetPointError(3,0,0.03782576);
   gre->SetPoint(4,225,-0.1259118);
   gre->SetPointError(4,0,0.04155598);
   gre->SetPoint(5,235,-0.1293109);
   gre->SetPointError(5,0,0.04217764);
   gre->SetPoint(6,245,-0.08937873);
   gre->SetPointError(6,0,0.04009527);
   gre->SetPoint(7,255,-0.2040495);
   gre->SetPointError(7,0,0.03809094);
   gre->SetPoint(8,265,-0.2146702);
   gre->SetPointError(8,0,0.03361134);
   gre->SetPoint(9,275,-0.2461178);
   gre->SetPointError(9,0,0.03151345);
   
   TH1F *Graph_gr_ImT22_15_15_140170 = new TH1F("Graph_gr_ImT22_15_15_140170","",100,176,284);
   Graph_gr_ImT22_15_15_140170->SetMinimum(-0.314154);
   Graph_gr_ImT22_15_15_140170->SetMaximum(0.1241193);
   Graph_gr_ImT22_15_15_140170->SetDirectory(0);
   Graph_gr_ImT22_15_15_140170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_140170->SetLineColor(ci);
   Graph_gr_ImT22_15_15_140170->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_140170->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_140170->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_140170->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_140170->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_140170->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_140170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_140170);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
