{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:45:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(152.5,-0.1664944,287.5,0.08520304);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.0795823);
   gre->SetPointError(0,0,0.02336348);
   gre->SetPoint(1,185,-0.08109769);
   gre->SetPointError(1,0,0.01773064);
   gre->SetPoint(2,195,-0.1096092);
   gre->SetPointError(2,0,0.01493567);
   gre->SetPoint(3,205,-0.08869371);
   gre->SetPointError(3,0,0.01414221);
   gre->SetPoint(4,215,-0.0452914);
   gre->SetPointError(4,0,0.01372626);
   gre->SetPoint(5,225,-0.05366688);
   gre->SetPointError(5,0,0.01360622);
   gre->SetPoint(6,235,-0.03194963);
   gre->SetPointError(6,0,0.01410571);
   gre->SetPoint(7,245,-0.005957398);
   gre->SetPointError(7,0,0.01514884);
   gre->SetPoint(8,255,0.02607452);
   gre->SetPointError(8,0,0.01717894);
   gre->SetPoint(9,265,-0.01744545);
   gre->SetPointError(9,0,0.01828556);
   
   TH1F *Graph_gr_T22_15_25_1809 = new TH1F("Graph_gr_T22_15_25_1809","",100,166,274);
   Graph_gr_T22_15_25_1809->SetMinimum(-0.1413246);
   Graph_gr_T22_15_25_1809->SetMaximum(0.06003329);
   Graph_gr_T22_15_25_1809->SetDirectory(0);
   Graph_gr_T22_15_25_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_25_1809->SetLineColor(ci);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_25_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_25_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
