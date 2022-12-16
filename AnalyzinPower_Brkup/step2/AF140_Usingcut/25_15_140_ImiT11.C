{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:02:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(132.5,-0.2370998,267.5,0.2326164);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.08294434);
   gre->SetPointError(0,0,0.07138602);
   gre->SetPoint(1,165,-0.01680546);
   gre->SetPointError(1,0,0.05936641);
   gre->SetPoint(2,175,-0.1037439);
   gre->SetPointError(2,0,0.05506985);
   gre->SetPoint(3,185,-0.05890207);
   gre->SetPointError(3,0,0.0638832);
   gre->SetPoint(4,195,0.007773142);
   gre->SetPointError(4,0,0.05408858);
   gre->SetPoint(5,205,0.08274666);
   gre->SetPointError(5,0,0.0514884);
   gre->SetPoint(6,215,-0.04057589);
   gre->SetPointError(6,0,0.04236305);
   gre->SetPoint(7,225,0.01015965);
   gre->SetPointError(7,0,0.04174311);
   gre->SetPoint(8,235,0.02350582);
   gre->SetPointError(8,0,0.03640541);
   gre->SetPoint(9,245,-0.006260312);
   gre->SetPointError(9,0,0.03713709);
   
   TH1F *Graph_gr_ImiT11_25_15_14022 = new TH1F("Graph_gr_ImiT11_25_15_14022","",100,146,254);
   Graph_gr_ImiT11_25_15_14022->SetMinimum(-0.1901282);
   Graph_gr_ImiT11_25_15_14022->SetMaximum(0.1856448);
   Graph_gr_ImiT11_25_15_14022->SetDirectory(0);
   Graph_gr_ImiT11_25_15_14022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_15_14022->SetLineColor(ci);
   Graph_gr_ImiT11_25_15_14022->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_14022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_14022->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_14022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_15_14022->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_15_14022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_15_14022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_15_14022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
