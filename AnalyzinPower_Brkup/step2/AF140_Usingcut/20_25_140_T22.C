{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:48:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.1852378,267.5,0.1004155);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.07927465);
   gre->SetPointError(0,0,0.05835423);
   gre->SetPoint(1,165,0.01906513);
   gre->SetPointError(1,0,0.03374147);
   gre->SetPoint(2,175,-0.009288443);
   gre->SetPointError(2,0,0.03550407);
   gre->SetPoint(3,185,-0.05001572);
   gre->SetPointError(3,0,0.03577306);
   gre->SetPoint(4,195,0.005919184);
   gre->SetPointError(4,0,0.03281653);
   gre->SetPoint(5,205,-0.01072574);
   gre->SetPointError(5,0,0.03478328);
   gre->SetPoint(6,215,-0.03158687);
   gre->SetPointError(6,0,0.03066181);
   gre->SetPoint(7,225,-0.03321705);
   gre->SetPointError(7,0,0.0311868);
   gre->SetPoint(8,235,-0.003986799);
   gre->SetPointError(8,0,0.02937639);
   gre->SetPoint(9,245,0.02043685);
   gre->SetPointError(9,0,0.02526731);
   
   TH1F *Graph_gr_T22_20_25_14014 = new TH1F("Graph_gr_T22_20_25_14014","",100,146,254);
   Graph_gr_T22_20_25_14014->SetMinimum(-0.1566724);
   Graph_gr_T22_20_25_14014->SetMaximum(0.07185014);
   Graph_gr_T22_20_25_14014->SetDirectory(0);
   Graph_gr_T22_20_25_14014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_25_14014->SetLineColor(ci);
   Graph_gr_T22_20_25_14014->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_14014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_14014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_14014->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_14014->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_14014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_14014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_14014->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_25_14014->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_25_14014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_25_14014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_25_14014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_25_14014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
