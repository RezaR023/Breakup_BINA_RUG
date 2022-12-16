{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:11:39 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.2369795,267.5,0.01312818);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.1503049);
   gre->SetPointError(0,0,0.04499006);
   gre->SetPoint(1,165,-0.07645909);
   gre->SetPointError(1,0,0.04790265);
   gre->SetPoint(2,175,-0.119097);
   gre->SetPointError(2,0,0.03921301);
   gre->SetPoint(3,185,-0.129802);
   gre->SetPointError(3,0,0.03403812);
   gre->SetPoint(4,195,-0.1351927);
   gre->SetPointError(4,0,0.02754087);
   gre->SetPoint(5,205,-0.1089051);
   gre->SetPointError(5,0,0.01960699);
   gre->SetPoint(6,215,-0.07152475);
   gre->SetPointError(6,0,0.01347478);
   gre->SetPoint(7,225,-0.09470232);
   gre->SetPointError(7,0,0.009659522);
   gre->SetPoint(8,235,-0.1082572);
   gre->SetPointError(8,0,0.006965855);
   gre->SetPoint(9,245,-0.1292496);
   gre->SetPointError(9,0,0.007244857);
   
   TH1F *Graph_gr_T22_25_25_18056 = new TH1F("Graph_gr_T22_25_25_18056","",100,146,254);
   Graph_gr_T22_25_25_18056->SetMinimum(-0.2119688);
   Graph_gr_T22_25_25_18056->SetMaximum(-0.0118826);
   Graph_gr_T22_25_25_18056->SetDirectory(0);
   Graph_gr_T22_25_25_18056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_25_18056->SetLineColor(ci);
   Graph_gr_T22_25_25_18056->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_18056->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_18056->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_18056->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_18056->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_18056->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_18056->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_18056->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_18056->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_18056->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_18056->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_18056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_25_18056);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
