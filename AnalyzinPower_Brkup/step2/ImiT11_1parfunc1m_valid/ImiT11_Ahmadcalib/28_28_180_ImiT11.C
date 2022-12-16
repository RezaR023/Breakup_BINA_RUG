{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:25:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.1265807,257.5,0.08255706);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.002066426);
   gre->SetPointError(0,0,0.04563434);
   gre->SetPoint(1,155,-0.04453379);
   gre->SetPointError(1,0,0.0374826);
   gre->SetPoint(2,165,-0.0553773);
   gre->SetPointError(2,0,0.03634714);
   gre->SetPoint(3,175,-0.0531274);
   gre->SetPointError(3,0,0.0296087);
   gre->SetPoint(4,185,-0.02591273);
   gre->SetPointError(4,0,0.02063834);
   gre->SetPoint(5,195,-0.01476982);
   gre->SetPointError(5,0,0.01351604);
   gre->SetPoint(6,205,0.007093408);
   gre->SetPointError(6,0,0.009124414);
   gre->SetPoint(7,215,-0.01309391);
   gre->SetPointError(7,0,0.007045068);
   gre->SetPoint(8,225,-0.0177499);
   gre->SetPointError(8,0,0.008178346);
   gre->SetPoint(9,235,-0.0004821366);
   gre->SetPointError(9,0,0.01729725);
   
   TH1F *Graph_gr_ImiT11_28_28_18016 = new TH1F("Graph_gr_ImiT11_28_28_18016","",100,136,244);
   Graph_gr_ImiT11_28_28_18016->SetMinimum(-0.105667);
   Graph_gr_ImiT11_28_28_18016->SetMaximum(0.06164328);
   Graph_gr_ImiT11_28_28_18016->SetDirectory(0);
   Graph_gr_ImiT11_28_28_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_18016->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
