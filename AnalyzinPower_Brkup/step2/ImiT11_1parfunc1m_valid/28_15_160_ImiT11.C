{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:03:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.2276851,257.5,0.1659617);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,-0.08776644);
   gre->SetPointError(0,0,0.07431084);
   gre->SetPoint(1,155,-0.07603385);
   gre->SetPointError(1,0,0.05695899);
   gre->SetPoint(2,165,0.02828347);
   gre->SetPointError(2,0,0.0513774);
   gre->SetPoint(3,175,0.04417739);
   gre->SetPointError(3,0,0.04584521);
   gre->SetPoint(4,185,-0.02796766);
   gre->SetPointError(4,0,0.04298965);
   gre->SetPoint(5,195,0.03540574);
   gre->SetPointError(5,0,0.03621529);
   gre->SetPoint(6,205,0.0003445254);
   gre->SetPointError(6,0,0.03074857);
   gre->SetPoint(7,215,0.009037216);
   gre->SetPointError(7,0,0.02526617);
   gre->SetPoint(8,225,0.08143914);
   gre->SetPointError(8,0,0.01891476);
   gre->SetPoint(9,235,0.08326342);
   gre->SetPointError(9,0,0.01428078);
   
   TH1F *Graph_gr_ImiT11_28_15_16029 = new TH1F("Graph_gr_ImiT11_28_15_16029","",100,136,244);
   Graph_gr_ImiT11_28_15_16029->SetMinimum(-0.1883204);
   Graph_gr_ImiT11_28_15_16029->SetMaximum(0.126597);
   Graph_gr_ImiT11_28_15_16029->SetDirectory(0);
   Graph_gr_ImiT11_28_15_16029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_16029->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_16029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
