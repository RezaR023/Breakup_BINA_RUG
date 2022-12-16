{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:50:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(142.5,-0.1251096,277.5,0.1625587);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.02586688);
   gre->SetPointError(0,0,0.03657469);
   gre->SetPoint(1,175,-0.03400374);
   gre->SetPointError(1,0,0.04015614);
   gre->SetPoint(2,185,-0.02517069);
   gre->SetPointError(2,0,0.03935978);
   gre->SetPoint(3,195,-0.02841432);
   gre->SetPointError(3,0,0.0417171);
   gre->SetPoint(4,205,-0.03541157);
   gre->SetPointError(4,0,0.04144785);
   gre->SetPoint(5,215,0.01803776);
   gre->SetPointError(5,0,0.04351935);
   gre->SetPoint(6,225,0.06745548);
   gre->SetPointError(6,0,0.04715851);
   gre->SetPoint(7,235,-0.004446559);
   gre->SetPointError(7,0,0.04505942);
   gre->SetPoint(8,245,-0.03494053);
   gre->SetPointError(8,0,0.04222434);
   gre->SetPoint(9,255,-0.03147413);
   gre->SetPointError(9,0,0.0396165);
   
   TH1F *Graph_gr_ImiT11_20_20_14038 = new TH1F("Graph_gr_ImiT11_20_20_14038","",100,156,264);
   Graph_gr_ImiT11_20_20_14038->SetMinimum(-0.09634277);
   Graph_gr_ImiT11_20_20_14038->SetMaximum(0.1337919);
   Graph_gr_ImiT11_20_20_14038->SetDirectory(0);
   Graph_gr_ImiT11_20_20_14038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_14038->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_14038->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_14038->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_14038->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_14038->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_14038->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_14038->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_14038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_14038);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
