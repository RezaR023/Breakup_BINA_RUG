{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:29:33 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1909683,257.5,0.2264916);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.09849165);
   gre->SetPointError(0,0,0.05842333);
   gre->SetPoint(1,155,0.05185847);
   gre->SetPointError(1,0,0.05055779);
   gre->SetPoint(2,165,-0.03418079);
   gre->SetPointError(2,0,0.04916331);
   gre->SetPoint(3,175,-0.0768076);
   gre->SetPointError(3,0,0.04458401);
   gre->SetPoint(4,185,0.0288387);
   gre->SetPointError(4,0,0.03842603);
   gre->SetPoint(5,195,-0.01471553);
   gre->SetPointError(5,0,0.03501551);
   gre->SetPoint(6,205,0.06886312);
   gre->SetPointError(6,0,0.03077903);
   gre->SetPoint(7,215,0.03698825);
   gre->SetPointError(7,0,0.02603828);
   gre->SetPoint(8,225,0.004055459);
   gre->SetPointError(8,0,0.02271027);
   gre->SetPoint(9,235,0.02145427);
   gre->SetPointError(9,0,0.01648415);
   
   TH1F *Graph_gr_ImiT11_28_15_160145 = new TH1F("Graph_gr_ImiT11_28_15_160145","",100,136,244);
   Graph_gr_ImiT11_28_15_160145->SetMinimum(-0.1492223);
   Graph_gr_ImiT11_28_15_160145->SetMaximum(0.1847456);
   Graph_gr_ImiT11_28_15_160145->SetDirectory(0);
   Graph_gr_ImiT11_28_15_160145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_160145->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_160145->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_160145->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_160145->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_160145->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_160145->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_160145->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_160145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_160145);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
