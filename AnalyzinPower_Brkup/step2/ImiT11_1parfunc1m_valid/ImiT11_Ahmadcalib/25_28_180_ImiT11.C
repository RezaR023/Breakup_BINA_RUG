{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:22:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.09467091,257.5,0.09288024);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01662677);
   gre->SetPointError(0,0,0.04139714);
   gre->SetPoint(1,155,0.0197859);
   gre->SetPointError(1,0,0.04183582);
   gre->SetPoint(2,165,-0.02736728);
   gre->SetPointError(2,0,0.0360451);
   gre->SetPoint(3,175,-0.004878483);
   gre->SetPointError(3,0,0.02787);
   gre->SetPoint(4,185,-0.01459929);
   gre->SetPointError(4,0,0.02057552);
   gre->SetPoint(5,195,-0.006044135);
   gre->SetPointError(5,0,0.01482638);
   gre->SetPoint(6,205,0.003045846);
   gre->SetPointError(6,0,0.01077557);
   gre->SetPoint(7,215,-0.009847061);
   gre->SetPointError(7,0,0.008950713);
   gre->SetPoint(8,225,-0.00775154);
   gre->SetPointError(8,0,0.009607348);
   gre->SetPoint(9,235,0.008143266);
   gre->SetPointError(9,0,0.01375284);
   
   TH1F *Graph_gr_ImiT11_25_28_18012 = new TH1F("Graph_gr_ImiT11_25_28_18012","",100,136,244);
   Graph_gr_ImiT11_25_28_18012->SetMinimum(-0.07591579);
   Graph_gr_ImiT11_25_28_18012->SetMaximum(0.07412513);
   Graph_gr_ImiT11_25_28_18012->SetDirectory(0);
   Graph_gr_ImiT11_25_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_18012->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
