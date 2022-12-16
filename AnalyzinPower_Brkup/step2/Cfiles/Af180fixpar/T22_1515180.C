{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:35:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.134,-0.4832596,300.126,0.2766121);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,180.966,0.00809553);
   gre->SetPointError(0,0,0.07080603);
   gre->SetPoint(1,191.558,0.04266779);
   gre->SetPointError(1,0,0.0623093);
   gre->SetPoint(2,202.15,0.01115904);
   gre->SetPointError(2,0,0.06176748);
   gre->SetPoint(3,212.742,0.09067107);
   gre->SetPointError(3,0,0.0592957);
   gre->SetPoint(4,223.334,0.001011305);
   gre->SetPointError(4,0,0.06854477);
   gre->SetPoint(5,233.926,-0.2489659);
   gre->SetPointError(5,0,0.05255185);
   gre->SetPoint(6,244.518,-0.1873585);
   gre->SetPointError(6,0,0.05808637);
   gre->SetPoint(7,255.11,-0.189632);
   gre->SetPointError(7,0,0.05660616);
   gre->SetPoint(8,265.702,-0.3062083);
   gre->SetPointError(8,0,0.04479307);
   gre->SetPoint(9,276.294,-0.3134393);
   gre->SetPointError(9,0,0.04317505);
   
   TH1F *Graph_gr_T22_15_15_18021 = new TH1F("Graph_gr_T22_15_15_18021","",100,171.4332,285.8268);
   Graph_gr_T22_15_15_18021->SetMinimum(-0.4072724);
   Graph_gr_T22_15_15_18021->SetMaximum(0.2006249);
   Graph_gr_T22_15_15_18021->SetDirectory(0);
   Graph_gr_T22_15_15_18021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_15_18021->SetLineColor(ci);
   Graph_gr_T22_15_15_18021->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_18021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_18021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_18021->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_18021->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_18021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_18021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_18021->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_15_18021->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_15_18021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_15_18021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_15_18021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_15_18021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
