{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:39:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.1832514,277.5,0.2601947);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.08070404);
   gre->SetPointError(0,0,0.04437474);
   gre->SetPoint(1,175,0.01203295);
   gre->SetPointError(1,0,0.0403205);
   gre->SetPoint(2,185,-0.0577926);
   gre->SetPointError(2,0,0.04655566);
   gre->SetPoint(3,195,0.1435658);
   gre->SetPointError(3,0,0.04272124);
   gre->SetPoint(4,205,0.01206307);
   gre->SetPointError(4,0,0.04361572);
   gre->SetPoint(5,215,-0.06874792);
   gre->SetPointError(5,0,0.04059578);
   gre->SetPoint(6,225,-0.01570677);
   gre->SetPointError(6,0,0.03779684);
   gre->SetPoint(7,235,0.0003583382);
   gre->SetPointError(7,0,0.03827603);
   gre->SetPoint(8,245,-0.06309436);
   gre->SetPointError(8,0,0.03312456);
   gre->SetPoint(9,255,-0.03793908);
   gre->SetPointError(9,0,0.03350322);
   
   TH1F *Graph_gr_T22_20_20_1409 = new TH1F("Graph_gr_T22_20_20_1409","",100,156,264);
   Graph_gr_T22_20_20_1409->SetMinimum(-0.1389068);
   Graph_gr_T22_20_20_1409->SetMaximum(0.2158501);
   Graph_gr_T22_20_20_1409->SetDirectory(0);
   Graph_gr_T22_20_20_1409->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_1409->SetLineColor(ci);
   Graph_gr_T22_20_20_1409->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1409->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1409->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1409->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_1409->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1409->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1409->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1409->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_1409->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_1409->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_1409->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_1409->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_1409);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
