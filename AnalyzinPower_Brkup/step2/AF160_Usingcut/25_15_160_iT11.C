{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:19:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1681845,267.5,0.2168376);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.01949422);
   gre->SetPointError(0,0,0.05292811);
   gre->SetPoint(1,165,-0.04472666);
   gre->SetPointError(1,0,0.05928748);
   gre->SetPoint(2,175,-0.01198889);
   gre->SetPointError(2,0,0.05876564);
   gre->SetPoint(3,185,0.09704604);
   gre->SetPointError(3,0,0.04688233);
   gre->SetPoint(4,195,0.02420743);
   gre->SetPointError(4,0,0.039958);
   gre->SetPoint(5,205,0.0717741);
   gre->SetPointError(5,0,0.03644792);
   gre->SetPoint(6,215,0.005775798);
   gre->SetPointError(6,0,0.02938104);
   gre->SetPoint(7,225,0.0320161);
   gre->SetPointError(7,0,0.02352872);
   gre->SetPoint(8,235,0.1028522);
   gre->SetPointError(8,0,0.01887898);
   gre->SetPoint(9,245,0.139259);
   gre->SetPointError(9,0,0.0134083);
   
   TH1F *Graph_gr_iT11_25_15_160124 = new TH1F("Graph_gr_iT11_25_15_160124","",100,146,254);
   Graph_gr_iT11_25_15_160124->SetMinimum(-0.1296823);
   Graph_gr_iT11_25_15_160124->SetMaximum(0.1783354);
   Graph_gr_iT11_25_15_160124->SetDirectory(0);
   Graph_gr_iT11_25_15_160124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_15_160124->SetLineColor(ci);
   Graph_gr_iT11_25_15_160124->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_160124->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_160124->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_160124->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_160124->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_160124->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_160124->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_160124->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_15_160124->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_15_160124->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_15_160124->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_15_160124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_15_160124);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
