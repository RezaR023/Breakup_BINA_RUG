{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:30:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.322424,257.5,0.001093407);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1348564);
   gre->SetPointError(0,0,0.05892139);
   gre->SetPoint(1,155,-0.2140047);
   gre->SetPointError(1,0,0.04985197);
   gre->SetPoint(2,165,-0.1206709);
   gre->SetPointError(2,0,0.04982902);
   gre->SetPoint(3,175,-0.2253395);
   gre->SetPointError(3,0,0.04316487);
   gre->SetPoint(4,185,-0.1698558);
   gre->SetPointError(4,0,0.04209832);
   gre->SetPoint(5,195,-0.09053329);
   gre->SetPointError(5,0,0.03770714);
   gre->SetPoint(6,205,-0.09410519);
   gre->SetPointError(6,0,0.03106195);
   gre->SetPoint(7,215,-0.1049566);
   gre->SetPointError(7,0,0.02664109);
   gre->SetPoint(8,225,-0.1408078);
   gre->SetPointError(8,0,0.01997413);
   gre->SetPoint(9,235,-0.1827606);
   gre->SetPointError(9,0,0.01545684);
   
   TH1F *Graph_gr_T22_28_15_160147 = new TH1F("Graph_gr_T22_28_15_160147","",100,136,244);
   Graph_gr_T22_28_15_160147->SetMinimum(-0.2900722);
   Graph_gr_T22_28_15_160147->SetMaximum(-0.03125833);
   Graph_gr_T22_28_15_160147->SetDirectory(0);
   Graph_gr_T22_28_15_160147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_160147->SetLineColor(ci);
   Graph_gr_T22_28_15_160147->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_160147->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_160147->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_160147->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_160147->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_160147->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_160147->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_160147->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_160147->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_160147->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_160147->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_160147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_160147);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
