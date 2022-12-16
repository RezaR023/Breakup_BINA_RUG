{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:08:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,1094,578);
   Canvas_1->Range(142.5,-0.1572904,277.5,0.2490729);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.06056403);
   gre->SetPointError(0,0,0.06435781);
   gre->SetPoint(1,175,0.1328968);
   gre->SetPointError(1,0,0.0484488);
   gre->SetPoint(2,185,-0.03745134);
   gre->SetPointError(2,0,0.05211185);
   gre->SetPoint(3,195,0.01302626);
   gre->SetPointError(3,0,0.05625865);
   gre->SetPoint(4,205,-0.02463537);
   gre->SetPointError(4,0,0.05739605);
   gre->SetPoint(5,215,0.008336367);
   gre->SetPointError(5,0,0.04772022);
   gre->SetPoint(6,225,-0.0212415);
   gre->SetPointError(6,0,0.04546656);
   gre->SetPoint(7,235,0.07466852);
   gre->SetPointError(7,0,0.03896431);
   gre->SetPoint(8,245,0.04590104);
   gre->SetPointError(8,0,0.03476598);
   gre->SetPoint(9,255,0.06901897);
   gre->SetPointError(9,0,0.03178926);
   
   TH1F *Graph_gr_iT11_20_15_1401 = new TH1F("Graph_gr_iT11_20_15_1401","",100,156,264);
   Graph_gr_iT11_20_15_1401->SetMinimum(-0.1166541);
   Graph_gr_iT11_20_15_1401->SetMaximum(0.2084365);
   Graph_gr_iT11_20_15_1401->SetDirectory(0);
   Graph_gr_iT11_20_15_1401->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_15_1401->SetLineColor(ci);
   Graph_gr_iT11_20_15_1401->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_1401->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_1401->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_1401->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_15_1401->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_1401->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_1401->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_1401->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_15_1401->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_15_1401->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_15_1401->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_15_1401->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_15_1401);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
