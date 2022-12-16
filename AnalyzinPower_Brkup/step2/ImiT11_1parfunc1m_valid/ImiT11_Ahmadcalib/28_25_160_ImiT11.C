{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:45:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(125,-0.1303095,245,0.09492643);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.03670338);
   gre->SetPointError(0,0,0.03262428);
   gre->SetPoint(1,155,-0.05915736);
   gre->SetPointError(1,0,0.03066339);
   gre->SetPoint(2,165,-0.05996453);
   gre->SetPointError(2,0,0.03280567);
   gre->SetPoint(3,175,-0.02872606);
   gre->SetPointError(3,0,0.03243989);
   gre->SetPoint(4,185,0.001442405);
   gre->SetPointError(4,0,0.03002471);
   gre->SetPoint(5,195,0.02595191);
   gre->SetPointError(5,0,0.0258948);
   gre->SetPoint(6,205,0.02485413);
   gre->SetPointError(6,0,0.02181385);
   gre->SetPoint(7,215,0.0391107);
   gre->SetPointError(7,0,0.01827641);
   gre->SetPoint(8,225,0.02725224);
   gre->SetPointError(8,0,0.01668365);
   
   TH1F *Graph_gr_ImiT11_28_25_16031 = new TH1F("Graph_gr_ImiT11_28_25_16031","",100,137,233);
   Graph_gr_ImiT11_28_25_16031->SetMinimum(-0.1077859);
   Graph_gr_ImiT11_28_25_16031->SetMaximum(0.07240284);
   Graph_gr_ImiT11_28_25_16031->SetDirectory(0);
   Graph_gr_ImiT11_28_25_16031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_16031->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_16031->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_16031->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_16031->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_16031->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_16031->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_16031->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_16031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_16031);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
