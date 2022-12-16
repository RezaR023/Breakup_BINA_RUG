{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:35:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(112.5,-0.1364162,247.5,0.1303637);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.01771819);
   gre->SetPointError(0,0,0.04695158);
   gre->SetPoint(1,145,0.04837857);
   gre->SetPointError(1,0,0.03752182);
   gre->SetPoint(2,155,0.03775646);
   gre->SetPointError(2,0,0.03996158);
   gre->SetPoint(3,165,-0.0550112);
   gre->SetPointError(3,0,0.03694166);
   gre->SetPoint(4,175,0.001048495);
   gre->SetPointError(4,0,0.03449511);
   gre->SetPoint(5,185,0.03761292);
   gre->SetPointError(5,0,0.02919167);
   gre->SetPoint(6,195,0.02710542);
   gre->SetPointError(6,0,0.024899);
   gre->SetPoint(7,205,0.02730691);
   gre->SetPointError(7,0,0.0186285);
   gre->SetPoint(8,215,-0.02207222);
   gre->SetPointError(8,0,0.01595217);
   gre->SetPoint(9,225,0.01594999);
   gre->SetPointError(9,0,0.01491432);
   
   TH1F *Graph_gr_ImiT11_28_28_160160 = new TH1F("Graph_gr_ImiT11_28_28_160160","",100,126,234);
   Graph_gr_ImiT11_28_28_160160->SetMinimum(-0.1097382);
   Graph_gr_ImiT11_28_28_160160->SetMaximum(0.1036857);
   Graph_gr_ImiT11_28_28_160160->SetDirectory(0);
   Graph_gr_ImiT11_28_28_160160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_160160->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_160160->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_160160->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_160160->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_160160->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_160160->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_160160->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_160160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_160160);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
