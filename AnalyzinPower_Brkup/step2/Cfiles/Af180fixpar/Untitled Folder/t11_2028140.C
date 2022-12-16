{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:52:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.069,-0.4012134,269.451,0.1655794);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,159.966,-0.1768496);
   gre->SetPointError(0,0,0.05053697);
   gre->SetPoint(1,169.698,-0.1706551);
   gre->SetPointError(1,0,0.05889157);
   gre->SetPoint(2,179.43,-0.1948618);
   gre->SetPointError(2,0,0.05328605);
   gre->SetPoint(3,189.162,-0.2532724);
   gre->SetPointError(3,0,0.05347553);
   gre->SetPoint(4,198.894,-0.1592671);
   gre->SetPointError(4,0,0.05528146);
   gre->SetPoint(5,208.626,-0.2227186);
   gre->SetPointError(5,0,0.05805321);
   gre->SetPoint(6,218.358,-0.05082962);
   gre->SetPointError(6,0,0.06185201);
   gre->SetPoint(7,228.09,-0.2125174);
   gre->SetPointError(7,0,0.06508743);
   gre->SetPoint(8,237.822,-0.07295654);
   gre->SetPointError(8,0,0.06661547);
   gre->SetPoint(9,247.554,-0.001923478);
   gre->SetPointError(9,0,0.0730374);
   
   TH1F *Graph_gr_iT11_20_28_14010 = new TH1F("Graph_gr_iT11_20_28_14010","",100,151.2072,256.3128);
   Graph_gr_iT11_20_28_14010->SetMinimum(-0.3445341);
   Graph_gr_iT11_20_28_14010->SetMaximum(0.1089001);
   Graph_gr_iT11_20_28_14010->SetDirectory(0);
   Graph_gr_iT11_20_28_14010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_14010->SetLineColor(ci);
   Graph_gr_iT11_20_28_14010->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14010->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_14010->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14010->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_14010->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_14010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_14010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_14010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_14010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
