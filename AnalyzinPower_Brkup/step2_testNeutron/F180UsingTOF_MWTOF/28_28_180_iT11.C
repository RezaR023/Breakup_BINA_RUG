{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:52:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.3927422,257.5,0.05245082);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0506454);
   gre->SetPointError(0,0,0.02889738);
   gre->SetPoint(1,155,-0.1581979);
   gre->SetPointError(1,0,0.03000559);
   gre->SetPoint(2,165,-0.1926985);
   gre->SetPointError(2,0,0.02660423);
   gre->SetPoint(3,175,-0.2634662);
   gre->SetPointError(3,0,0.02125281);
   gre->SetPoint(4,185,-0.3020123);
   gre->SetPointError(4,0,0.01653104);
   gre->SetPoint(5,195,-0.2939656);
   gre->SetPointError(5,0,0.01150382);
   gre->SetPoint(6,205,-0.2901962);
   gre->SetPointError(6,0,0.008312019);
   gre->SetPoint(7,215,-0.2850827);
   gre->SetPointError(7,0,0.00644045);
   gre->SetPoint(8,225,-0.2771442);
   gre->SetPointError(8,0,0.006417313);
   gre->SetPoint(9,235,-0.2439344);
   gre->SetPointError(9,0,0.009838787);
   
   TH1F *Graph_gr_iT11_28_28_18012 = new TH1F("Graph_gr_iT11_28_28_18012","",100,136,244);
   Graph_gr_iT11_28_28_18012->SetMinimum(-0.3482229);
   Graph_gr_iT11_28_28_18012->SetMaximum(0.007931516);
   Graph_gr_iT11_28_28_18012->SetDirectory(0);
   Graph_gr_iT11_28_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_18012->SetLineColor(ci);
   Graph_gr_iT11_28_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
