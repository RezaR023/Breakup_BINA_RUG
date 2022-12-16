{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:19:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3442924,257.5,-0.03352926);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1353186);
   gre->SetPointError(0,0,0.04999552);
   gre->SetPoint(1,155,-0.1724084);
   gre->SetPointError(1,0,0.05500336);
   gre->SetPoint(2,165,-0.1862171);
   gre->SetPointError(2,0,0.05217693);
   gre->SetPoint(3,175,-0.1999653);
   gre->SetPointError(3,0,0.04585828);
   gre->SetPoint(4,185,-0.1328028);
   gre->SetPointError(4,0,0.04242563);
   gre->SetPoint(5,195,-0.1809933);
   gre->SetPointError(5,0,0.03668981);
   gre->SetPoint(6,205,-0.1836242);
   gre->SetPointError(6,0,0.03048666);
   gre->SetPoint(7,215,-0.2373022);
   gre->SetPointError(7,0,0.02128943);
   gre->SetPoint(8,225,-0.2650308);
   gre->SetPointError(8,0,0.01304965);
   gre->SetPoint(9,235,-0.2852715);
   gre->SetPointError(9,0,0.007227027);
   
   TH1F *Graph_gr_T22_28_20_18071 = new TH1F("Graph_gr_T22_28_20_18071","",100,136,244);
   Graph_gr_T22_28_20_18071->SetMinimum(-0.3132161);
   Graph_gr_T22_28_20_18071->SetMaximum(-0.06460558);
   Graph_gr_T22_28_20_18071->SetDirectory(0);
   Graph_gr_T22_28_20_18071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_20_18071->SetLineColor(ci);
   Graph_gr_T22_28_20_18071->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18071->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18071->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18071->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_18071->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18071->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18071->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18071->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_18071->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18071->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18071->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_20_18071);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
