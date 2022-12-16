{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:03:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.3849954,250,-0.02762101);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.2357688);
   gre->SetPointError(0,0,0.08966415);
   gre->SetPoint(1,170,-0.2058522);
   gre->SetPointError(1,0,0.05426721);
   gre->SetPoint(2,190,-0.1199353);
   gre->SetPointError(2,0,0.03275191);
   gre->SetPoint(3,210,-0.1205428);
   gre->SetPointError(3,0,0.0177829);
   gre->SetPoint(4,230,-0.1159261);
   gre->SetPointError(4,0,0.01885168);
   
   TH1F *Graph_gr_T22_28_28_18026 = new TH1F("Graph_gr_T22_28_28_18026","",100,142,238);
   Graph_gr_T22_28_28_18026->SetMinimum(-0.3492579);
   Graph_gr_T22_28_28_18026->SetMaximum(-0.06335844);
   Graph_gr_T22_28_28_18026->SetDirectory(0);
   Graph_gr_T22_28_28_18026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_18026->SetLineColor(ci);
   Graph_gr_T22_28_28_18026->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18026->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18026->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18026->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18026->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_18026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
