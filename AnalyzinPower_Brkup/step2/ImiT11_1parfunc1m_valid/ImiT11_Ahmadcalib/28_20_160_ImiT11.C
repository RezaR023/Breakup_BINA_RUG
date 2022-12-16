{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:44:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1486314,257.5,0.1537416);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0267663);
   gre->SetPointError(0,0,0.03633272);
   gre->SetPoint(1,155,-0.06340053);
   gre->SetPointError(1,0,0.03483537);
   gre->SetPoint(2,165,-0.02289997);
   gre->SetPointError(2,0,0.03228663);
   gre->SetPoint(3,175,0.02775777);
   gre->SetPointError(3,0,0.03653882);
   gre->SetPoint(4,185,-0.02738471);
   gre->SetPointError(4,0,0.03249967);
   gre->SetPoint(5,195,0.06306113);
   gre->SetPointError(5,0,0.03353109);
   gre->SetPoint(6,205,0.07664222);
   gre->SetPointError(6,0,0.02670392);
   gre->SetPoint(7,215,0.06859594);
   gre->SetPointError(7,0,0.02196871);
   gre->SetPoint(8,225,0.06699028);
   gre->SetPointError(8,0,0.01724405);
   gre->SetPoint(9,235,0.07430966);
   gre->SetPointError(9,0,0.01737034);
   
   TH1F *Graph_gr_ImiT11_28_20_16030 = new TH1F("Graph_gr_ImiT11_28_20_16030","",100,136,244);
   Graph_gr_ImiT11_28_20_16030->SetMinimum(-0.1183941);
   Graph_gr_ImiT11_28_20_16030->SetMaximum(0.1235043);
   Graph_gr_ImiT11_28_20_16030->SetDirectory(0);
   Graph_gr_ImiT11_28_20_16030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_16030->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_16030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_16030);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
