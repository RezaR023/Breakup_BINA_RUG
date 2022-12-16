{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:50:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-1.976037,310,2.134325);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,0.07914412);
   gre->SetPointError(3,0,1.370121);
   gre->SetPoint(4,175,0.1180862);
   gre->SetPointError(4,0,0.07742482);
   gre->SetPoint(5,185,-0.05929526);
   gre->SetPointError(5,0,0.05374892);
   gre->SetPoint(6,195,0.007760648);
   gre->SetPointError(6,0,0.0520672);
   gre->SetPoint(7,205,0.006788371);
   gre->SetPointError(7,0,0.04932388);
   gre->SetPoint(8,215,-0.0101003);
   gre->SetPointError(8,0,0.04453652);
   gre->SetPoint(9,225,0.02354422);
   gre->SetPointError(9,0,0.04001157);
   gre->SetPoint(10,235,-0.1054873);
   gre->SetPointError(10,0,0.03676485);
   gre->SetPoint(11,245,-0.1634674);
   gre->SetPointError(11,0,0.0326258);
   gre->SetPoint(12,255,-0.2162702);
   gre->SetPointError(12,0,0.0306486);
   gre->SetPoint(13,265,-0.2087652);
   gre->SetPointError(13,0,0.02508625);
   gre->SetPoint(14,275,-0.2536472);
   gre->SetPointError(14,0,0.01862336);
   
   TH1F *Graph_gr_T22_15_15_1803 = new TH1F("Graph_gr_T22_15_15_1803","",100,121,289);
   Graph_gr_T22_15_15_1803->SetMinimum(-1.565001);
   Graph_gr_T22_15_15_1803->SetMaximum(1.723289);
   Graph_gr_T22_15_15_1803->SetDirectory(0);
   Graph_gr_T22_15_15_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_1803->SetLineColor(ci);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
