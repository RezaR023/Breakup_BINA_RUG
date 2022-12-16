{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:19:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(140,-0.1123629,290,0.1438873);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.001833724);
   gre->SetPointError(0,0,0.07148822);
   gre->SetPoint(1,175,0.000297142);
   gre->SetPointError(1,0,0.04801544);
   gre->SetPoint(2,185,0.05066795);
   gre->SetPointError(2,0,0.05051095);
   gre->SetPoint(3,195,0.04042291);
   gre->SetPointError(3,0,0.04458012);
   gre->SetPoint(4,205,-0.02723886);
   gre->SetPointError(4,0,0.03890443);
   gre->SetPoint(5,215,-0.01797568);
   gre->SetPointError(5,0,0.03587091);
   gre->SetPoint(6,225,0.005271052);
   gre->SetPointError(6,0,0.03204311);
   gre->SetPoint(7,235,0.01966599);
   gre->SetPointError(7,0,0.02576615);
   gre->SetPoint(8,245,0.01801894);
   gre->SetPointError(8,0,0.02062869);
   gre->SetPoint(9,255,-0.009641246);
   gre->SetPointError(9,0,0.0180954);
   gre->SetPoint(10,265,0.02120462);
   gre->SetPointError(10,0,0.0174597);
   
   TH1F *Graph_gr_ImiT11_20_20_1806 = new TH1F("Graph_gr_ImiT11_20_20_1806","",100,155,275);
   Graph_gr_ImiT11_20_20_1806->SetMinimum(-0.08673784);
   Graph_gr_ImiT11_20_20_1806->SetMaximum(0.1182622);
   Graph_gr_ImiT11_20_20_1806->SetDirectory(0);
   Graph_gr_ImiT11_20_20_1806->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_1806->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_1806->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_1806);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
