{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:55:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(142.5,-0.3279583,277.5,0.112721);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.03345568);
   gre->SetPointError(0,0,0.04337083);
   gre->SetPoint(1,175,-0.01210508);
   gre->SetPointError(1,0,0.03254788);
   gre->SetPoint(2,185,0.001988268);
   gre->SetPointError(2,0,0.03728621);
   gre->SetPoint(3,195,-0.0338256);
   gre->SetPointError(3,0,0.03479112);
   gre->SetPoint(4,205,-0.03976329);
   gre->SetPointError(4,0,0.03390176);
   gre->SetPoint(5,215,-0.1903463);
   gre->SetPointError(5,0,0.03738845);
   gre->SetPoint(6,225,-0.1994912);
   gre->SetPointError(6,0,0.03471983);
   gre->SetPoint(7,235,-0.1927619);
   gre->SetPointError(7,0,0.03549654);
   gre->SetPoint(8,245,-0.1925292);
   gre->SetPointError(8,0,0.03114415);
   gre->SetPoint(9,255,-0.2257535);
   gre->SetPointError(9,0,0.02875822);
   
   TH1F *Graph_gr_ImT22_20_15_14086 = new TH1F("Graph_gr_ImT22_20_15_14086","",100,156,264);
   Graph_gr_ImT22_20_15_14086->SetMinimum(-0.2838903);
   Graph_gr_ImT22_20_15_14086->SetMaximum(0.0686531);
   Graph_gr_ImT22_20_15_14086->SetDirectory(0);
   Graph_gr_ImT22_20_15_14086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_15_14086->SetLineColor(ci);
   Graph_gr_ImT22_20_15_14086->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_14086->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_14086->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_14086->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_15_14086->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_15_14086->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_15_14086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_15_14086);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
