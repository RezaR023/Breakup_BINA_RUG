{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:14:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1684555,257.5,0.1154263);
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
   gre->SetPoint(0,145,-0.0487323);
   gre->SetPointError(0,0,0.05253066);
   gre->SetPoint(1,155,-0.07283397);
   gre->SetPointError(1,0,0.04830788);
   gre->SetPoint(2,165,0.02656644);
   gre->SetPointError(2,0,0.04154624);
   gre->SetPoint(3,175,-0.009050046);
   gre->SetPointError(3,0,0.03539377);
   gre->SetPoint(4,185,-0.01430541);
   gre->SetPointError(4,0,0.02500048);
   gre->SetPoint(5,195,-0.009532121);
   gre->SetPointError(5,0,0.01839343);
   gre->SetPoint(6,205,-0.003540502);
   gre->SetPointError(6,0,0.01315057);
   gre->SetPoint(7,215,-0.003535117);
   gre->SetPointError(7,0,0.009681146);
   gre->SetPoint(8,225,-0.003674214);
   gre->SetPointError(8,0,0.008130123);
   gre->SetPoint(9,235,-0.01707418);
   gre->SetPointError(9,0,0.008911118);
   
   TH1F *Graph_gr_ImiT11_25_28_18059 = new TH1F("Graph_gr_ImiT11_25_28_18059","",100,136,244);
   Graph_gr_ImiT11_25_28_18059->SetMinimum(-0.1400673);
   Graph_gr_ImiT11_25_28_18059->SetMaximum(0.08703813);
   Graph_gr_ImiT11_25_28_18059->SetDirectory(0);
   Graph_gr_ImiT11_25_28_18059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_18059->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_18059->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18059->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18059->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18059->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_18059->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_18059->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_18059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_18059);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
