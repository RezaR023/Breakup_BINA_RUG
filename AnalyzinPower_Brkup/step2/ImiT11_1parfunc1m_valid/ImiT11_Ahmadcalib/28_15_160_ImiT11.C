{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:44:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(122.5,-0.219468,257.5,0.1649614);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1101207);
   gre->SetPointError(0,0,0.04527571);
   gre->SetPoint(1,155,-0.007323719);
   gre->SetPointError(1,0,0.04105458);
   gre->SetPoint(2,165,0.04005065);
   gre->SetPointError(2,0,0.03592858);
   gre->SetPoint(3,175,-0.01232131);
   gre->SetPointError(3,0,0.03435558);
   gre->SetPoint(4,185,0.0004352653);
   gre->SetPointError(4,0,0.03354755);
   gre->SetPoint(5,195,0.006906874);
   gre->SetPointError(5,0,0.02916096);
   gre->SetPoint(6,205,0.0311721);
   gre->SetPointError(6,0,0.02581566);
   gre->SetPoint(7,215,0.0550195);
   gre->SetPointError(7,0,0.02172669);
   gre->SetPoint(8,225,0.05775409);
   gre->SetPointError(8,0,0.01811573);
   gre->SetPoint(9,235,0.08591934);
   gre->SetPointError(9,0,0.0149705);
   
   TH1F *Graph_gr_ImiT11_28_15_16029 = new TH1F("Graph_gr_ImiT11_28_15_16029","",100,136,244);
   Graph_gr_ImiT11_28_15_16029->SetMinimum(-0.181025);
   Graph_gr_ImiT11_28_15_16029->SetMaximum(0.1265185);
   Graph_gr_ImiT11_28_15_16029->SetDirectory(0);
   Graph_gr_ImiT11_28_15_16029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_16029->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_16029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_16029);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
