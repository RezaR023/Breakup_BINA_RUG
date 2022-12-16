{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:25:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1432837,257.5,0.1297225);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.00154376);
   gre->SetPointError(0,0,0.04743461);
   gre->SetPoint(1,155,0.007896675);
   gre->SetPointError(1,0,0.04182566);
   gre->SetPoint(2,165,-0.05361922);
   gre->SetPointError(2,0,0.04416342);
   gre->SetPoint(3,175,0.04407611);
   gre->SetPointError(3,0,0.04014533);
   gre->SetPoint(4,185,0.007104085);
   gre->SetPointError(4,0,0.03210426);
   gre->SetPoint(5,195,0.010522);
   gre->SetPointError(5,0,0.02101957);
   gre->SetPoint(6,205,0.02751177);
   gre->SetPointError(6,0,0.01397583);
   gre->SetPoint(7,215,0.01205664);
   gre->SetPointError(7,0,0.009366269);
   gre->SetPoint(8,225,-0.004887254);
   gre->SetPointError(8,0,0.007626039);
   gre->SetPoint(9,235,-0.006633668);
   gre->SetPointError(9,0,0.01171697);
   
   TH1F *Graph_gr_ImiT11_28_25_18015 = new TH1F("Graph_gr_ImiT11_28_25_18015","",100,136,244);
   Graph_gr_ImiT11_28_25_18015->SetMinimum(-0.115983);
   Graph_gr_ImiT11_28_25_18015->SetMaximum(0.1024218);
   Graph_gr_ImiT11_28_25_18015->SetDirectory(0);
   Graph_gr_ImiT11_28_25_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_18015->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
