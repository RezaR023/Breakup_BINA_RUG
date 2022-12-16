{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:37:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(132.5,-0.2270636,267.5,0.1210576);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,155,-0.09470429);
   gre->SetPointError(0,0,0.07433911);
   gre->SetPoint(1,165,-0.0958552);
   gre->SetPointError(1,0,0.0409784);
   gre->SetPoint(2,175,-0.03515109);
   gre->SetPointError(2,0,0.04289943);
   gre->SetPoint(3,185,0.01581379);
   gre->SetPointError(3,0,0.04722363);
   gre->SetPoint(4,195,-0.102875);
   gre->SetPointError(4,0,0.04090035);
   gre->SetPoint(5,205,-0.06754337);
   gre->SetPointError(5,0,0.04250587);
   gre->SetPoint(6,215,-0.1021337);
   gre->SetPointError(6,0,0.04189754);
   gre->SetPoint(7,225,-0.004370722);
   gre->SetPointError(7,0,0.04309976);
   gre->SetPoint(8,235,-0.07252674);
   gre->SetPointError(8,0,0.04041048);
   gre->SetPoint(9,245,-0.06224172);
   gre->SetPointError(9,0,0.03412315);
   
   TH1F *Graph_gr_ImiT11_20_25_14039 = new TH1F("Graph_gr_ImiT11_20_25_14039","",100,146,254);
   Graph_gr_ImiT11_20_25_14039->SetMinimum(-0.1922515);
   Graph_gr_ImiT11_20_25_14039->SetMaximum(0.08624549);
   Graph_gr_ImiT11_20_25_14039->SetDirectory(0);
   Graph_gr_ImiT11_20_25_14039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_14039->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_14039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_14039);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
