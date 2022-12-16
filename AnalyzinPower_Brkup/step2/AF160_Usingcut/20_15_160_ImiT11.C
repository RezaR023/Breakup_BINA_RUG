{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:10:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.2480406,290,0.2605452);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.1165394);
   gre->SetPointError(0,0,0.05924152);
   gre->SetPoint(1,175,-0.03649628);
   gre->SetPointError(1,0,0.04199289);
   gre->SetPoint(2,185,-0.08190267);
   gre->SetPointError(2,0,0.04447588);
   gre->SetPoint(3,195,-0.08458457);
   gre->SetPointError(3,0,0.04603219);
   gre->SetPoint(4,205,-0.1222554);
   gre->SetPointError(4,0,0.03758347);
   gre->SetPoint(5,215,-0.005056112);
   gre->SetPointError(5,0,0.03067882);
   gre->SetPoint(6,225,-0.1335684);
   gre->SetPointError(6,0,0.02970791);
   gre->SetPoint(7,235,-0.1205396);
   gre->SetPointError(7,0,0.02435447);
   gre->SetPoint(8,245,-0.04214283);
   gre->SetPointError(8,0,0.02149609);
   gre->SetPoint(9,255,-0.08324222);
   gre->SetPointError(9,0,0.01640193);
   gre->SetPoint(10,265,-0.007400942);
   gre->SetPointError(10,0,0.01481792);
   
   TH1F *Graph_gr_ImiT11_20_15_160105 = new TH1F("Graph_gr_ImiT11_20_15_160105","",100,155,275);
   Graph_gr_ImiT11_20_15_160105->SetMinimum(-0.197182);
   Graph_gr_ImiT11_20_15_160105->SetMaximum(0.2096866);
   Graph_gr_ImiT11_20_15_160105->SetDirectory(0);
   Graph_gr_ImiT11_20_15_160105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_15_160105->SetLineColor(ci);
   Graph_gr_ImiT11_20_15_160105->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_160105->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_160105->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_160105->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_160105->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_160105->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_160105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_15_160105);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
