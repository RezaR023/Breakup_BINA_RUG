{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:35:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(140,-0.3984383,290,0.2568539);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,165,-0.1758983);
   gre->SetPointError(0,0,0.1133246);
   gre->SetPoint(1,175,-0.05029816);
   gre->SetPointError(1,0,0.05639834);
   gre->SetPoint(2,185,0.0008318595);
   gre->SetPointError(2,0,0.06670206);
   gre->SetPoint(3,195,0.09152123);
   gre->SetPointError(3,0,0.05611732);
   gre->SetPoint(4,205,0.02740144);
   gre->SetPointError(4,0,0.05079224);
   gre->SetPoint(5,215,0.02275091);
   gre->SetPointError(5,0,0.04394573);
   gre->SetPoint(6,225,-0.02268355);
   gre->SetPointError(6,0,0.0356518);
   gre->SetPoint(7,235,-0.02570908);
   gre->SetPointError(7,0,0.03287133);
   gre->SetPoint(8,245,0.02831003);
   gre->SetPointError(8,0,0.02529241);
   gre->SetPoint(9,255,0.02667132);
   gre->SetPointError(9,0,0.01872592);
   gre->SetPoint(10,265,-0.00148936);
   gre->SetPointError(10,0,0.01443922);
   
   TH1F *Graph_gr_ImiT11_20_20_1806 = new TH1F("Graph_gr_ImiT11_20_20_1806","",100,155,275);
   Graph_gr_ImiT11_20_20_1806->SetMinimum(-0.3329091);
   Graph_gr_ImiT11_20_20_1806->SetMaximum(0.1913247);
   Graph_gr_ImiT11_20_20_1806->SetDirectory(0);
   Graph_gr_ImiT11_20_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_1806->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
