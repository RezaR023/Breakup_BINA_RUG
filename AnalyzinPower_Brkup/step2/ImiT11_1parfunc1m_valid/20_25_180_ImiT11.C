{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:36:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(142.5,-0.1397008,277.5,0.1082448);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,165,0.006430246);
   gre->SetPointError(0,0,0.04985067);
   gre->SetPoint(1,175,-0.05237252);
   gre->SetPointError(1,0,0.04600402);
   gre->SetPoint(2,185,-0.0115683);
   gre->SetPointError(2,0,0.03386012);
   gre->SetPoint(3,195,0.036813);
   gre->SetPointError(3,0,0.03010755);
   gre->SetPoint(4,205,-0.00856595);
   gre->SetPointError(4,0,0.0258227);
   gre->SetPoint(5,215,-0.02272565);
   gre->SetPointError(5,0,0.02222774);
   gre->SetPoint(6,225,-0.01576563);
   gre->SetPointError(6,0,0.01897056);
   gre->SetPoint(7,235,0.007091528);
   gre->SetPointError(7,0,0.01667243);
   gre->SetPoint(8,245,-0.0001380872);
   gre->SetPointError(8,0,0.01593345);
   gre->SetPoint(9,255,-0.02683019);
   gre->SetPointError(9,0,0.0178996);
   
   TH1F *Graph_gr_ImiT11_20_25_1807 = new TH1F("Graph_gr_ImiT11_20_25_1807","",100,156,264);
   Graph_gr_ImiT11_20_25_1807->SetMinimum(-0.1149063);
   Graph_gr_ImiT11_20_25_1807->SetMaximum(0.08345026);
   Graph_gr_ImiT11_20_25_1807->SetDirectory(0);
   Graph_gr_ImiT11_20_25_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_1807->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
