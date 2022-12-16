{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:48:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.2232026,297.5,0.1233018);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.02505206);
   gre->SetPointError(0,0,0.0415606);
   gre->SetPoint(1,195,0.02209353);
   gre->SetPointError(1,0,0.04345754);
   gre->SetPoint(2,205,-0.1123759);
   gre->SetPointError(2,0,0.03570083);
   gre->SetPoint(3,215,-0.07931409);
   gre->SetPointError(3,0,0.03756896);
   gre->SetPoint(4,225,-0.06999507);
   gre->SetPointError(4,0,0.03374992);
   gre->SetPoint(5,235,-0.08842416);
   gre->SetPointError(5,0,0.03249367);
   gre->SetPoint(6,245,-0.1053967);
   gre->SetPointError(6,0,0.02966331);
   gre->SetPoint(7,255,-0.08455381);
   gre->SetPointError(7,0,0.027262);
   gre->SetPoint(8,265,-0.1359589);
   gre->SetPointError(8,0,0.02333416);
   gre->SetPoint(9,275,-0.1462817);
   gre->SetPointError(9,0,0.01917023);
   
   TH1F *Graph_gr_T22_15_15_16086 = new TH1F("Graph_gr_T22_15_15_16086","",100,176,284);
   Graph_gr_T22_15_15_16086->SetMinimum(-0.1885522);
   Graph_gr_T22_15_15_16086->SetMaximum(0.08865137);
   Graph_gr_T22_15_15_16086->SetDirectory(0);
   Graph_gr_T22_15_15_16086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_16086->SetLineColor(ci);
   Graph_gr_T22_15_15_16086->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16086->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16086->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16086->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16086->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16086->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16086->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16086->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_16086->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_16086->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_16086->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_16086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_16086);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
