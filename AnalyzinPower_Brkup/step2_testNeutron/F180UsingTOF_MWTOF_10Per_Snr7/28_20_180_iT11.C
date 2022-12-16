{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:00:13 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.3671689,250,0.5377324);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_iT11_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,0.2649714);
   gre->SetPointError(0,0,0.1219441);
   gre->SetPoint(1,170,0.04673391);
   gre->SetPointError(1,0,0.1255726);
   gre->SetPoint(2,190,-0.1411378);
   gre->SetPointError(2,0,0.07521421);
   gre->SetPoint(3,210,0.08309722);
   gre->SetPointError(3,0,0.05376341);
   gre->SetPoint(4,230,0.1269436);
   gre->SetPointError(4,0,0.03221835);
   
   TH1F *Graph_gr_iT11_28_20_18017 = new TH1F("Graph_gr_iT11_28_20_18017","",100,142,238);
   Graph_gr_iT11_28_20_18017->SetMinimum(-0.2766788);
   Graph_gr_iT11_28_20_18017->SetMaximum(0.4472423);
   Graph_gr_iT11_28_20_18017->SetDirectory(0);
   Graph_gr_iT11_28_20_18017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_20_18017->SetLineColor(ci);
   Graph_gr_iT11_28_20_18017->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18017->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_18017->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18017->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_18017->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_18017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_18017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_18017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_20_18017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
