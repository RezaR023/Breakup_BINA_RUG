{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:51:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1392404,277.5,0.1410015);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.04320129);
   gre->SetPointError(0,0,0.05109319);
   gre->SetPoint(1,175,0.04238383);
   gre->SetPointError(1,0,0.04390116);
   gre->SetPoint(2,185,0.04871882);
   gre->SetPointError(2,0,0.03602897);
   gre->SetPoint(3,195,-0.0008606428);
   gre->SetPointError(3,0,0.02851821);
   gre->SetPoint(4,205,-0.06852811);
   gre->SetPointError(4,0,0.02400531);
   gre->SetPoint(5,215,-0.03151603);
   gre->SetPointError(5,0,0.02061129);
   gre->SetPoint(6,225,-0.0180948);
   gre->SetPointError(6,0,0.01800075);
   gre->SetPoint(7,235,0.003497277);
   gre->SetPointError(7,0,0.01577929);
   gre->SetPoint(8,245,0.003186003);
   gre->SetPointError(8,0,0.0154143);
   gre->SetPoint(9,255,0.0155808);
   gre->SetPointError(9,0,0.01682915);
   
   TH1F *Graph_gr_ImiT11_20_25_18034 = new TH1F("Graph_gr_ImiT11_20_25_18034","",100,156,264);
   Graph_gr_ImiT11_20_25_18034->SetMinimum(-0.1112162);
   Graph_gr_ImiT11_20_25_18034->SetMaximum(0.1129773);
   Graph_gr_ImiT11_20_25_18034->SetDirectory(0);
   Graph_gr_ImiT11_20_25_18034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_18034->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_18034->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_18034->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_18034->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_18034->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_18034->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_18034->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_18034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_18034);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
