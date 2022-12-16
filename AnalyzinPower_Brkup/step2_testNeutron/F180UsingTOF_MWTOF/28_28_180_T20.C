{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:52:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.5277558,257.5,0.3563881);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.1604771);
   gre->SetPointError(0,0,0.04855374);
   gre->SetPoint(1,155,0.06577125);
   gre->SetPointError(1,0,0.04582055);
   gre->SetPoint(2,165,-0.09319538);
   gre->SetPointError(2,0,0.03838664);
   gre->SetPoint(3,175,-0.2065416);
   gre->SetPointError(3,0,0.02947564);
   gre->SetPoint(4,185,-0.2993479);
   gre->SetPointError(4,0,0.02089256);
   gre->SetPoint(5,195,-0.3659953);
   gre->SetPointError(5,0,0.01440315);
   gre->SetPoint(6,205,-0.3623658);
   gre->SetPointError(6,0,0.01023009);
   gre->SetPoint(7,215,-0.362182);
   gre->SetPointError(7,0,0.007936023);
   gre->SetPoint(8,225,-0.3665441);
   gre->SetPointError(8,0,0.008022181);
   gre->SetPoint(9,235,-0.3521978);
   gre->SetPointError(9,0,0.01235177);
   
   TH1F *Graph_gr_T20_28_28_18011 = new TH1F("Graph_gr_T20_28_28_18011","",100,136,244);
   Graph_gr_T20_28_28_18011->SetMinimum(-0.4393414);
   Graph_gr_T20_28_28_18011->SetMaximum(0.2679737);
   Graph_gr_T20_28_28_18011->SetDirectory(0);
   Graph_gr_T20_28_28_18011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_18011->SetLineColor(ci);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_18011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
