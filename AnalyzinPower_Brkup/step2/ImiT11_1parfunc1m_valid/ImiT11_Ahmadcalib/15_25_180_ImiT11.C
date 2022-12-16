{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:16:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.0718214,287.5,0.06842773);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.006648015);
   gre->SetPointError(0,0,0.02921926);
   gre->SetPoint(1,185,-0.007281553);
   gre->SetPointError(1,0,0.02364233);
   gre->SetPoint(2,195,0.0007259436);
   gre->SetPointError(2,0,0.02074396);
   gre->SetPoint(3,205,0.003909427);
   gre->SetPointError(3,0,0.01889292);
   gre->SetPoint(4,215,-0.01972948);
   gre->SetPointError(4,0,0.01895923);
   gre->SetPoint(5,225,0.01543753);
   gre->SetPointError(5,0,0.02108685);
   gre->SetPoint(6,235,-0.01757816);
   gre->SetPointError(6,0,0.02307108);
   gre->SetPoint(7,245,-0.003315628);
   gre->SetPointError(7,0,0.02521127);
   gre->SetPoint(8,255,-0.01604128);
   gre->SetPointError(8,0,0.03240527);
   gre->SetPoint(9,265,0.007817857);
   gre->SetPointError(9,0,0.03723502);
   
   TH1F *Graph_gr_ImiT11_15_25_1803 = new TH1F("Graph_gr_ImiT11_15_25_1803","",100,166,274);
   Graph_gr_ImiT11_15_25_1803->SetMinimum(-0.05779649);
   Graph_gr_ImiT11_15_25_1803->SetMaximum(0.05440282);
   Graph_gr_ImiT11_15_25_1803->SetDirectory(0);
   Graph_gr_ImiT11_15_25_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_1803->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
