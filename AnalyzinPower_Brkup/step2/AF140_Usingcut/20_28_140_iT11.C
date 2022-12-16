{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:49:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(145,-0.3795418,265,-0.06980604);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1863716);
   gre->SetPointError(0,0,0.03281055);
   gre->SetPoint(1,175,-0.1573725);
   gre->SetPointError(1,0,0.03594384);
   gre->SetPoint(2,185,-0.2373979);
   gre->SetPointError(2,0,0.03657634);
   gre->SetPoint(3,195,-0.2426619);
   gre->SetPointError(3,0,0.03491638);
   gre->SetPoint(4,205,-0.1825797);
   gre->SetPointError(4,0,0.0348145);
   gre->SetPoint(5,215,-0.2960533);
   gre->SetPointError(5,0,0.03186586);
   gre->SetPoint(6,225,-0.1876253);
   gre->SetPointError(6,0,0.03409315);
   gre->SetPoint(7,235,-0.2207764);
   gre->SetPointError(7,0,0.03534642);
   gre->SetPoint(8,245,-0.1963327);
   gre->SetPointError(8,0,0.03194467);
   
   TH1F *Graph_gr_iT11_20_28_14016 = new TH1F("Graph_gr_iT11_20_28_14016","",100,157,253);
   Graph_gr_iT11_20_28_14016->SetMinimum(-0.3485682);
   Graph_gr_iT11_20_28_14016->SetMaximum(-0.1007796);
   Graph_gr_iT11_20_28_14016->SetDirectory(0);
   Graph_gr_iT11_20_28_14016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_14016->SetLineColor(ci);
   Graph_gr_iT11_20_28_14016->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14016->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_14016->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14016->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_14016->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_14016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
