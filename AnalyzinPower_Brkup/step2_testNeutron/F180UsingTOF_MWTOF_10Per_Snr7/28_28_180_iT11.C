{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:09:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.5129864,250,-0.1324481);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.272952);
   gre->SetPointError(0,0,0.07708088);
   gre->SetPoint(1,170,-0.3888405);
   gre->SetPointError(1,0,0.06072287);
   gre->SetPoint(2,190,-0.3243113);
   gre->SetPointError(2,0,0.04160873);
   gre->SetPoint(3,210,-0.2553075);
   gre->SetPointError(3,0,0.02293035);
   gre->SetPoint(4,230,-0.249071);
   gre->SetPointError(4,0,0.02342832);
   
   TH1F *Graph_gr_iT11_28_28_18027 = new TH1F("Graph_gr_iT11_28_28_18027","",100,142,238);
   Graph_gr_iT11_28_28_18027->SetMinimum(-0.4749326);
   Graph_gr_iT11_28_28_18027->SetMaximum(-0.1705019);
   Graph_gr_iT11_28_28_18027->SetDirectory(0);
   Graph_gr_iT11_28_28_18027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_18027->SetLineColor(ci);
   Graph_gr_iT11_28_28_18027->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18027->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18027->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18027->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18027->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18027->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18027->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18027->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18027->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18027->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18027->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_18027);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
