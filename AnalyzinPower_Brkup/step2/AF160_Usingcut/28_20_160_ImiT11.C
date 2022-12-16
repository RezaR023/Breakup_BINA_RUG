{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:31:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1220693,257.5,0.1073321);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.009463773);
   gre->SetPointError(0,0,0.05701902);
   gre->SetPoint(1,155,-0.03298705);
   gre->SetPointError(1,0,0.05084868);
   gre->SetPoint(2,165,-0.02640946);
   gre->SetPointError(2,0,0.0486457);
   gre->SetPoint(3,175,-0.01796806);
   gre->SetPointError(3,0,0.0426411);
   gre->SetPoint(4,185,0.02444424);
   gre->SetPointError(4,0,0.04465427);
   gre->SetPoint(5,195,0.01289407);
   gre->SetPointError(5,0,0.04385175);
   gre->SetPoint(6,205,0.01194091);
   gre->SetPointError(6,0,0.03787195);
   gre->SetPoint(7,215,0.005687887);
   gre->SetPointError(7,0,0.02888268);
   gre->SetPoint(8,225,0.02928175);
   gre->SetPointError(8,0,0.02130879);
   gre->SetPoint(9,235,0.02786272);
   gre->SetPointError(9,0,0.01675482);
   
   TH1F *Graph_gr_ImiT11_28_20_160150 = new TH1F("Graph_gr_ImiT11_28_20_160150","",100,136,244);
   Graph_gr_ImiT11_28_20_160150->SetMinimum(-0.09912915);
   Graph_gr_ImiT11_28_20_160150->SetMaximum(0.08439193);
   Graph_gr_ImiT11_28_20_160150->SetDirectory(0);
   Graph_gr_ImiT11_28_20_160150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_160150->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_160150->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_160150->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_160150->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_160150->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_160150->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_160150->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_160150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_160150);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
