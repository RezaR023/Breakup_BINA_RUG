{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:19:28 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(122.5,-0.2775007,257.5,0.1773111);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0006910297);
   gre->SetPointError(0,0,0.08552439);
   gre->SetPoint(1,155,-0.1477006);
   gre->SetPointError(1,0,0.0539981);
   gre->SetPoint(2,165,0.001126078);
   gre->SetPointError(2,0,0.05554988);
   gre->SetPoint(3,175,-0.06365276);
   gre->SetPointError(3,0,0.05139854);
   gre->SetPoint(4,185,-0.13826);
   gre->SetPointError(4,0,0.05163389);
   gre->SetPoint(5,195,-0.04714701);
   gre->SetPointError(5,0,0.04911813);
   gre->SetPoint(6,205,-0.02092842);
   gre->SetPointError(6,0,0.04255481);
   gre->SetPoint(7,215,-0.0208372);
   gre->SetPointError(7,0,0.04292378);
   gre->SetPoint(8,225,0.06205065);
   gre->SetPointError(8,0,0.03945845);
   gre->SetPoint(9,235,-0.07687195);
   gre->SetPointError(9,0,0.04273445);
   
   TH1F *Graph_gr_iT11_28_15_14041 = new TH1F("Graph_gr_iT11_28_15_14041","",100,136,244);
   Graph_gr_iT11_28_15_14041->SetMinimum(-0.2320195);
   Graph_gr_iT11_28_15_14041->SetMaximum(0.1318299);
   Graph_gr_iT11_28_15_14041->SetDirectory(0);
   Graph_gr_iT11_28_15_14041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_14041->SetLineColor(ci);
   Graph_gr_iT11_28_15_14041->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_14041->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_14041->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_14041->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_14041->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_14041->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_14041->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_14041->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_14041->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_14041->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_14041->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_14041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_14041);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
