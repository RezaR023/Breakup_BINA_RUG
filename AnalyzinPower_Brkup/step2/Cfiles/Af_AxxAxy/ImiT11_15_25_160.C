{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:35:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.199257,310,0.1278285);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImiT11_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.0150967);
   gre->SetPointError(0,0,0.02777319);
   gre->SetPoint(1,145,-0.0150967);
   gre->SetPointError(1,0,0.02777319);
   gre->SetPoint(2,155,-0.0150967);
   gre->SetPointError(2,0,0.02777319);
   gre->SetPoint(3,165,-0.0392943);
   gre->SetPointError(3,0,0.1054485);
   gre->SetPoint(4,175,-0.01272005);
   gre->SetPointError(4,0,0.03113376);
   gre->SetPoint(5,185,0.0272912);
   gre->SetPointError(5,0,0.02576464);
   gre->SetPoint(6,195,0.05166741);
   gre->SetPointError(6,0,0.02164683);
   gre->SetPoint(7,205,-0.01776885);
   gre->SetPointError(7,0,0.0195626);
   gre->SetPoint(8,215,0.0306554);
   gre->SetPointError(8,0,0.01873525);
   gre->SetPoint(9,225,-0.02355291);
   gre->SetPointError(9,0,0.01942027);
   gre->SetPoint(10,235,0.02805753);
   gre->SetPointError(10,0,0.02187545);
   gre->SetPoint(11,245,-0.01957979);
   gre->SetPointError(11,0,0.02298621);
   gre->SetPoint(12,255,0.02994563);
   gre->SetPointError(12,0,0.02675004);
   gre->SetPoint(13,265,0.009243952);
   gre->SetPointError(13,0,0.02795378);
   gre->SetPoint(14,275,0.02400952);
   gre->SetPointError(14,0,0.0359619);
   
   TH1F *Graph_gr_ImiT11_15_25_16013 = new TH1F("Graph_gr_ImiT11_15_25_16013","",100,121,289);
   Graph_gr_ImiT11_15_25_16013->SetMinimum(-0.1665485);
   Graph_gr_ImiT11_15_25_16013->SetMaximum(0.09511995);
   Graph_gr_ImiT11_15_25_16013->SetDirectory(0);
   Graph_gr_ImiT11_15_25_16013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_16013->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_16013->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_16013->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_16013->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_16013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
