{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:58:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.8416302,250,0.398183);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_iT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.5245134);
   gre->SetPointError(0,0,0.1104812);
   gre->SetPoint(1,170,0.06614483);
   gre->SetPointError(1,0,0.1254026);
   gre->SetPoint(2,190,-0.196599);
   gre->SetPointError(2,0,0.101476);
   gre->SetPoint(3,210,-0.1193105);
   gre->SetPointError(3,0,0.06808299);
   gre->SetPoint(4,230,0.1438918);
   gre->SetPointError(4,0,0.04753819);
   
   TH1F *Graph_gr_iT11_28_15_18014 = new TH1F("Graph_gr_iT11_28_15_18014","",100,142,238);
   Graph_gr_iT11_28_15_18014->SetMinimum(-0.7176488);
   Graph_gr_iT11_28_15_18014->SetMaximum(0.2742017);
   Graph_gr_iT11_28_15_18014->SetDirectory(0);
   Graph_gr_iT11_28_15_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_18014->SetLineColor(ci);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
