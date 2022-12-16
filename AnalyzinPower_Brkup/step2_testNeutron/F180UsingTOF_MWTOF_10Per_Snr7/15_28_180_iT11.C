{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 17:50:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(150,-0.4882577,270,0.0003365024);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_iT11_15_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,170,-0.3308738);
   gre->SetPointError(0,0,0.07595154);
   gre->SetPoint(1,190,-0.1252298);
   gre->SetPointError(1,0,0.04413399);
   gre->SetPoint(2,210,-0.2073045);
   gre->SetPointError(2,0,0.04049219);
   gre->SetPoint(3,230,-0.2326089);
   gre->SetPointError(3,0,0.04890147);
   gre->SetPoint(4,250,-0.1832664);
   gre->SetPointError(4,0,0.07012972);
   
   TH1F *Graph_Graph_gr_iT11_15_28_1801011 = new TH1F("Graph_Graph_gr_iT11_15_28_1801011","",100,162,258);
   Graph_Graph_gr_iT11_15_28_1801011->SetMinimum(-0.4393982);
   Graph_Graph_gr_iT11_15_28_1801011->SetMaximum(-0.04852292);
   Graph_Graph_gr_iT11_15_28_1801011->SetDirectory(0);
   Graph_Graph_gr_iT11_15_28_1801011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_gr_iT11_15_28_1801011->SetLineColor(ci);
   Graph_Graph_gr_iT11_15_28_1801011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_15_28_1801011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gr_iT11_15_28_1801011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_15_28_1801011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gr_iT11_15_28_1801011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_15_28_1801011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_15_28_1801011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_gr_iT11_15_28_1801011);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
