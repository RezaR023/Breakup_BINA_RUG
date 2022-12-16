{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 16:08:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(162.5,-0.4733611,297.5,0.8087115);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.4921957);
   gre->SetPointError(0,0,0.1028371);
   gre->SetPoint(1,195,-0.0400841);
   gre->SetPointError(1,0,0.1234353);
   gre->SetPoint(2,205,0.3781055);
   gre->SetPointError(2,0,0.1108096);
   gre->SetPoint(3,215,0.3214937);
   gre->SetPointError(3,0,0.1404474);
   gre->SetPoint(4,225,0.2205998);
   gre->SetPointError(4,0,0.1233772);
   gre->SetPoint(5,235,-0.1614971);
   gre->SetPointError(5,0,0.09818519);
   gre->SetPoint(6,245,-0.1033435);
   gre->SetPointError(6,0,0.09842358);
   gre->SetPoint(7,255,0.06561036);
   gre->SetPointError(7,0,0.09718103);
   gre->SetPoint(8,265,0.150764);
   gre->SetPointError(8,0,0.0933176);
   gre->SetPoint(9,275,0.2685056);
   gre->SetPointError(9,0,0.08214535);
   
   TH1F *Graph_gr_iT11_15_15_18017 = new TH1F("Graph_gr_iT11_15_15_18017","",100,176,284);
   Graph_gr_iT11_15_15_18017->SetMinimum(-0.3451538);
   Graph_gr_iT11_15_15_18017->SetMaximum(0.6805042);
   Graph_gr_iT11_15_15_18017->SetDirectory(0);
   Graph_gr_iT11_15_15_18017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_15_18017->SetLineColor(ci);
   Graph_gr_iT11_15_15_18017->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18017->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_18017->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18017->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_15_18017->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_15_18017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_15_18017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_15_18017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_15_18017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
