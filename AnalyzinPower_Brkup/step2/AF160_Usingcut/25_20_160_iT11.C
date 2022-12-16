{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:21:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1566205,267.5,0.2059037);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05220176);
   gre->SetPointError(0,0,0.04399804);
   gre->SetPoint(1,165,-0.04742632);
   gre->SetPointError(1,0,0.04488612);
   gre->SetPoint(2,175,-0.04221878);
   gre->SetPointError(2,0,0.04566831);
   gre->SetPoint(3,185,-0.03240715);
   gre->SetPointError(3,0,0.04360544);
   gre->SetPoint(4,195,-0.02275224);
   gre->SetPointError(4,0,0.04122707);
   gre->SetPoint(5,205,0.06241351);
   gre->SetPointError(5,0,0.03915441);
   gre->SetPoint(6,215,-0.03333561);
   gre->SetPointError(6,0,0.02989423);
   gre->SetPoint(7,225,0.06944708);
   gre->SetPointError(7,0,0.02572116);
   gre->SetPoint(8,235,0.1272845);
   gre->SetPointError(8,0,0.01819854);
   gre->SetPoint(9,245,0.05791731);
   gre->SetPointError(9,0,0.01568524);
   
   TH1F *Graph_gr_iT11_25_20_160129 = new TH1F("Graph_gr_iT11_25_20_160129","",100,146,254);
   Graph_gr_iT11_25_20_160129->SetMinimum(-0.1203681);
   Graph_gr_iT11_25_20_160129->SetMaximum(0.1696513);
   Graph_gr_iT11_25_20_160129->SetDirectory(0);
   Graph_gr_iT11_25_20_160129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_20_160129->SetLineColor(ci);
   Graph_gr_iT11_25_20_160129->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_160129->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_160129->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_160129->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_160129->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_160129->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_160129->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_160129->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_160129->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_160129->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_160129->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_160129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_20_160129);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
