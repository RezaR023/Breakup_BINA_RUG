{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:11:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.271883,290,0.1983185);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T22_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.06716397);
   gre->SetPointError(0,0,0.05278759);
   gre->SetPoint(1,175,0.07362949);
   gre->SetPointError(1,0,0.04309084);
   gre->SetPoint(2,185,-0.03722731);
   gre->SetPointError(2,0,0.04538628);
   gre->SetPoint(3,195,0.01307452);
   gre->SetPointError(3,0,0.04467243);
   gre->SetPoint(4,205,-0.08856873);
   gre->SetPointError(4,0,0.03908868);
   gre->SetPoint(5,215,-0.05746507);
   gre->SetPointError(5,0,0.03221784);
   gre->SetPoint(6,225,-0.08743715);
   gre->SetPointError(6,0,0.02846871);
   gre->SetPoint(7,235,-0.1147666);
   gre->SetPointError(7,0,0.02516508);
   gre->SetPoint(8,245,-0.09797026);
   gre->SetPointError(8,0,0.02050515);
   gre->SetPoint(9,255,-0.1265751);
   gre->SetPointError(9,0,0.0162403);
   gre->SetPoint(10,265,-0.179894);
   gre->SetPointError(10,0,0.01362212);
   
   TH1F *Graph_gr_T22_20_15_160107 = new TH1F("Graph_gr_T22_20_15_160107","",100,155,275);
   Graph_gr_T22_20_15_160107->SetMinimum(-0.2248629);
   Graph_gr_T22_20_15_160107->SetMaximum(0.1512983);
   Graph_gr_T22_20_15_160107->SetDirectory(0);
   Graph_gr_T22_20_15_160107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_15_160107->SetLineColor(ci);
   Graph_gr_T22_20_15_160107->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_160107->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_160107->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_160107->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_160107->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_160107->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_160107->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_160107->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_160107->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_160107->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_160107->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_160107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_15_160107);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
