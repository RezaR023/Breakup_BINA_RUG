{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:57:10 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(136.702,-0.4359417,276.778,-0.140674);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,160.048,-0.2506417);
   gre->SetPointError(0,0,0.06075642);
   gre->SetPoint(1,170.424,-0.2665679);
   gre->SetPointError(1,0,0.05590512);
   gre->SetPoint(2,180.8,-0.295867);
   gre->SetPointError(2,0,0.0407161);
   gre->SetPoint(3,191.176,-0.2563637);
   gre->SetPointError(3,0,0.03347645);
   gre->SetPoint(4,201.552,-0.3054282);
   gre->SetPointError(4,0,0.02836514);
   gre->SetPoint(5,211.928,-0.3256461);
   gre->SetPointError(5,0,0.02552684);
   gre->SetPoint(6,222.304,-0.275505);
   gre->SetPointError(6,0,0.02574909);
   gre->SetPoint(7,232.68,-0.3594855);
   gre->SetPointError(7,0,0.02724492);
   gre->SetPoint(8,243.056,-0.3273862);
   gre->SetPointError(8,0,0.03540179);
   gre->SetPoint(9,253.432,-0.3039217);
   gre->SetPointError(9,0,0.05034432);
   
   TH1F *Graph_gr_iT11_20_28_18016 = new TH1F("Graph_gr_iT11_20_28_18016","",100,150.7096,262.7704);
   Graph_gr_iT11_20_28_18016->SetMinimum(-0.4064149);
   Graph_gr_iT11_20_28_18016->SetMaximum(-0.1702008);
   Graph_gr_iT11_20_28_18016->SetDirectory(0);
   Graph_gr_iT11_20_28_18016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_28_18016->SetLineColor(ci);
   Graph_gr_iT11_20_28_18016->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18016->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18016->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18016->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_18016->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18016->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18016->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18016->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_28_18016->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_28_18016->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_28_18016->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_28_18016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_28_18016);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
