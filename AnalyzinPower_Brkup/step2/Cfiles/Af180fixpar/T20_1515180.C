{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 11:35:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(157.134,-0.9859991,300.126,0.6862406);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,180.966,-0.5302967);
   gre->SetPointError(0,0,0.121614);
   gre->SetPoint(1,191.558,-0.5944349);
   gre->SetPointError(1,0,0.1128576);
   gre->SetPoint(2,202.15,-0.478497);
   gre->SetPointError(2,0,0.1046582);
   gre->SetPoint(3,212.742,-0.4182356);
   gre->SetPointError(3,0,0.1047515);
   gre->SetPoint(4,223.334,-0.5713921);
   gre->SetPointError(4,0,0.1004843);
   gre->SetPoint(5,233.926,-0.1273512);
   gre->SetPointError(5,0,0.09567369);
   gre->SetPoint(6,244.518,0.2948929);
   gre->SetPointError(6,0,0.105456);
   gre->SetPoint(7,255.11,0.2149789);
   gre->SetPointError(7,0,0.09389863);
   gre->SetPoint(8,265.702,0.2621635);
   gre->SetPointError(8,0,0.07836186);
   gre->SetPoint(9,276.294,0.3348233);
   gre->SetPointError(9,0,0.07271066);
   
   TH1F *Graph_gr_T20_15_15_18020 = new TH1F("Graph_gr_T20_15_15_18020","",100,171.4332,285.8268);
   Graph_gr_T20_15_15_18020->SetMinimum(-0.8187751);
   Graph_gr_T20_15_15_18020->SetMaximum(0.5190166);
   Graph_gr_T20_15_15_18020->SetDirectory(0);
   Graph_gr_T20_15_15_18020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_18020->SetLineColor(ci);
   Graph_gr_T20_15_15_18020->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18020->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18020->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18020->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_18020->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18020->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18020->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18020->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_18020->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_18020->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_18020->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_18020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_18020);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
