{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:08:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-2.01051,310,2.228743);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1663894);
   gre->SetPointError(0,0,0.0327179);
   gre->SetPoint(1,145,0.3461232);
   gre->SetPointError(1,0,0.1794222);
   gre->SetPoint(2,155,0.1091164);
   gre->SetPointError(2,0,1.413084);
   gre->SetPoint(3,165,-0.225812);
   gre->SetPointError(3,0,0.05394562);
   gre->SetPoint(4,175,-0.1800399);
   gre->SetPointError(4,0,0.02319234);
   gre->SetPoint(5,185,-0.1529832);
   gre->SetPointError(5,0,0.01885112);
   gre->SetPoint(6,195,-0.150583);
   gre->SetPointError(6,0,0.01660802);
   gre->SetPoint(7,205,-0.1872167);
   gre->SetPointError(7,0,0.01522168);
   gre->SetPoint(8,215,-0.1932504);
   gre->SetPointError(8,0,0.01486578);
   gre->SetPoint(9,225,-0.1792467);
   gre->SetPointError(9,0,0.01667442);
   gre->SetPoint(10,235,-0.2160393);
   gre->SetPointError(10,0,0.01906432);
   gre->SetPoint(11,245,-0.2229951);
   gre->SetPointError(11,0,0.02154019);
   gre->SetPoint(12,255,-0.2515205);
   gre->SetPointError(12,0,0.02380643);
   gre->SetPoint(13,265,-0.1736559);
   gre->SetPointError(13,0,0.02576469);
   gre->SetPoint(14,275,-0.1690353);
   gre->SetPointError(14,0,0.04402086);
   
   TH1F *Graph_gr_iT11_15_28_16017 = new TH1F("Graph_gr_iT11_15_28_16017","",100,121,289);
   Graph_gr_iT11_15_28_16017->SetMinimum(-1.586585);
   Graph_gr_iT11_15_28_16017->SetMaximum(1.804818);
   Graph_gr_iT11_15_28_16017->SetDirectory(0);
   Graph_gr_iT11_15_28_16017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_16017->SetLineColor(ci);
   Graph_gr_iT11_15_28_16017->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16017->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_16017->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16017->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_16017->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_16017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_16017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_16017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_16017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
