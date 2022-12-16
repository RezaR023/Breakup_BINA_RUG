{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:39:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.1444498,277.5,0.1772985);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.01421715);
   gre->SetPointError(0,0,0.0551331);
   gre->SetPoint(1,175,0.006329868);
   gre->SetPointError(1,0,0.05186495);
   gre->SetPoint(2,185,-0.00442554);
   gre->SetPointError(2,0,0.05768062);
   gre->SetPoint(3,195,-0.00323612);
   gre->SetPointError(3,0,0.05475987);
   gre->SetPoint(4,205,0.06791467);
   gre->SetPointError(4,0,0.05575911);
   gre->SetPoint(5,215,0.002816414);
   gre->SetPointError(5,0,0.05003251);
   gre->SetPoint(6,225,0.06670152);
   gre->SetPointError(6,0,0.05303598);
   gre->SetPoint(7,235,-0.004769149);
   gre->SetPointError(7,0,0.0541821);
   gre->SetPoint(8,245,-0.00813032);
   gre->SetPointError(8,0,0.04350564);
   gre->SetPoint(9,255,-0.04843076);
   gre->SetPointError(9,0,0.0423943);
   
   TH1F *Graph_gr_ImiT11_20_20_1407 = new TH1F("Graph_gr_ImiT11_20_20_1407","",100,156,264);
   Graph_gr_ImiT11_20_20_1407->SetMinimum(-0.1122749);
   Graph_gr_ImiT11_20_20_1407->SetMaximum(0.1451237);
   Graph_gr_ImiT11_20_20_1407->SetDirectory(0);
   Graph_gr_ImiT11_20_20_1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_1407->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_1407->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1407->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1407->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1407->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1407->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1407->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_1407);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
