{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:46:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(145,-0.5214879,295,0.2157607);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("gr_iT11_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,-0.007295458);
   gre->SetPointError(0,0,0.1001813);
   gre->SetPoint(1,190,-0.218794);
   gre->SetPointError(1,0,0.0586542);
   gre->SetPoint(2,210,-0.190244);
   gre->SetPointError(2,0,0.04809403);
   gre->SetPoint(3,230,-0.2760443);
   gre->SetPointError(3,0,0.05741282);
   gre->SetPoint(4,250,-0.2913483);
   gre->SetPointError(4,0,0.06039127);
   gre->SetPoint(5,270,-0.3128921);
   gre->SetPointError(5,0,0.08572111);
   
   TH1F *Graph_gr_iT11_15_25_1807 = new TH1F("Graph_gr_iT11_15_25_1807","",100,160,280);
   Graph_gr_iT11_15_25_1807->SetMinimum(-0.4477631);
   Graph_gr_iT11_15_25_1807->SetMaximum(0.1420358);
   Graph_gr_iT11_15_25_1807->SetDirectory(0);
   Graph_gr_iT11_15_25_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_25_1807->SetLineColor(ci);
   Graph_gr_iT11_15_25_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_25_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_25_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_25_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_25_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_25_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
