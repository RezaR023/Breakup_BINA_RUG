{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:57:09 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.9557,-0.4157769,238.4143,0.2249532);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.1618737);
   gre->SetPointError(0,0,0.06820598);
   gre->SetPoint(1,145.4365,-0.1933687);
   gre->SetPointError(1,0,0.06412827);
   gre->SetPoint(2,154.5075,0.05427211);
   gre->SetPointError(2,0,0.06389271);
   gre->SetPoint(3,163.5785,-0.1485784);
   gre->SetPointError(3,0,0.07570329);
   gre->SetPoint(4,172.6495,-0.1712523);
   gre->SetPointError(4,0,0.07261428);
   gre->SetPoint(5,181.7205,-0.2363874);
   gre->SetPointError(5,0,0.07260121);
   gre->SetPoint(6,190.7915,-0.1180157);
   gre->SetPointError(6,0,0.07833056);
   gre->SetPoint(7,199.8625,-0.1273984);
   gre->SetPointError(7,0,0.08505982);
   gre->SetPoint(8,208.9335,-0.220977);
   gre->SetPointError(8,0,0.07801601);
   gre->SetPoint(9,218.0045,-0.06383592);
   gre->SetPointError(9,0,0.06319762);
   
   TH1F *Graph_Graph_gr_iT11_28_28_14045 = new TH1F("Graph_Graph_gr_iT11_28_28_14045","",100,128.2016,226.1684);
   Graph_Graph_gr_iT11_28_28_14045->SetMinimum(-0.3517039);
   Graph_Graph_gr_iT11_28_28_14045->SetMaximum(0.1608802);
   Graph_Graph_gr_iT11_28_28_14045->SetDirectory(0);
   Graph_Graph_gr_iT11_28_28_14045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_gr_iT11_28_28_14045->SetLineColor(ci);
   Graph_Graph_gr_iT11_28_28_14045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_28_28_14045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gr_iT11_28_28_14045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_28_28_14045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gr_iT11_28_28_14045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gr_iT11_28_28_14045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gr_iT11_28_28_14045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_gr_iT11_28_28_14045);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
